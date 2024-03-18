// Copyright Algosyntax 2022. All Rights Reserved.


#include "Components/AxMidiBroadcasterComponent.h"
#include "Components/AudioComponent.h"
#include "Sound/SoundWave.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "Kismet/GameplayStatics.h"



// Sets default values for this component's properties
UAxMidiBroadcasterComponent::UAxMidiBroadcasterComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	// ...

	AudioComponent = CreateDefaultSubobject<UAudioComponent>("Audio");

	AudioComponent->SetAutoActivate(false);

	//Create a default playhead and add it to the playhead list...
	UAxMidiBroadcasterPlayhead* DefaultPlayhead = CreateDefaultSubobject<UAxMidiBroadcasterPlayhead>("DefaultPlayhead");
	DefaultPlayhead->SetPlayHeadName("DefaultPlayhead");
	DefaultPlayhead->SetTimeOffset(0);
	PlayHeads.Add(DefaultPlayhead);
}

void UAxMidiBroadcasterComponent::CreateDefaultPlayhead()
{
	//can't call this function in constructor cause there we require CreateDefaultSubobject.
	UAxMidiBroadcasterPlayhead* DefaultPlayhead = NewObject<UAxMidiBroadcasterPlayhead>(this,UAxMidiBroadcasterPlayhead::StaticClass());

	DefaultPlayhead->SetPlayHeadName("DefaultPlayhead");
	DefaultPlayhead->SetTimeOffset(0);

	PlayHeads.Add(DefaultPlayhead);
}

// Called when the game starts
void UAxMidiBroadcasterComponent::BeginPlay()
{
	Super::BeginPlay();
}


// Called every frame
void UAxMidiBroadcasterComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                                FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (LeadInTimerHandle.IsValid())
	{
		UWorld* World = GetWorld();

		ensure(World);

		if (World->GetTimerManager().IsTimerActive(LeadInTimerHandle))
		{
			float PlayheadsUpdateTime = World->GetTimerManager().GetTimerRemaining(LeadInTimerHandle);

			//negate it
			PlayheadsUpdateTime *= (-1);

			UpdateAndBroadcast(PlayheadsUpdateTime);
		}
	}

	if(bBroadcastingSilently)
	{

		if(SilentTimeline->IsPlaying())
		{
			HandleOnSilentTimelineUpdate();
		}
	}


}


FString UAxMidiBroadcasterComponent::GetBroadcasterName()
{
	return BroadcasterName;
}

UAxMidiAsset* UAxMidiBroadcasterComponent::GetMidiAsset()
{
	//Make sure the MidiAsset is sorted before returning it.
	//This function will mostly be used by playheads so makes sense to have it here.
	if (MidiAsset)
		if (!MidiAsset->bNotesSorted)
			MidiAsset->SortMidiNotesQueue();

	return MidiAsset;
}

float UAxMidiBroadcasterComponent::GetPlaybackPosition(FString PlayheadName)
{
	UAxMidiPlayhead* Playhead = GetPlayhead(PlayheadName);

	if (Playhead)
		return Playhead->GetPlaybackPosition();

	return 0;
}

UAxMidiPlayhead* UAxMidiBroadcasterComponent::GetPlayhead(FString PlayheadName)
{
	for (UAxMidiBroadcasterPlayhead* Playhead : PlayHeads)
	{
		if (Playhead->GetPlayHeadName() == PlayheadName)
			return Playhead;
	}

	//could be null
	return nullptr;
}


bool UAxMidiBroadcasterComponent::InitPlayheads()
{
	//PlayHeads.Empty();

	//If there is no playheads , add a default one.
	if (PlayHeads.IsEmpty())
		CreateDefaultPlayhead();

	for (UAxMidiPlayhead* Playhead : PlayHeads)
	{
		bool InitSuccess = Playhead->Init(this, Playhead->GetPlayHeadName(), Playhead->GetTimeOffset());

		//if any of the playheads failed to initialize properly, return false.
		if (!InitSuccess)
			return false;
	}

	return true;
}

UAxMidiBroadcasterPlayhead* UAxMidiBroadcasterComponent::AddPlayHead(FString Name, float Offset)
{
	//Add atleast 1 Playhead
	UAxMidiBroadcasterPlayhead* PlayHead = NewObject<UAxMidiBroadcasterPlayhead>(this);

	bool InitSuccess = PlayHead->Init(this, Name, Offset);

	if (InitSuccess)
	{
		PlayHeads.Add(PlayHead);
		return PlayHead;
	}

	return nullptr;
}


bool UAxMidiBroadcasterComponent::StartBroadcastInternal(UAxMidiAsset* InMidiAsset, float InPlayRate)
{
	//reset the broadcaster
	Stop();

	if (!InMidiAsset)
		return false;

	MidiAsset = InMidiAsset;

	if (!MidiAsset->bNotesSorted)
		MidiAsset->SortMidiNotesQueue();


	if (!InitPlayheads())
		return false;

	PlayRate = InPlayRate;

	for (UAxMidiBroadcasterPlayhead* PlayHead : PlayHeads)
	{
		PlayHead->Play();
	}

	return true;
}

void UAxMidiBroadcasterComponent::HandleLeadInTimeComplete()
{
	if (bBroadcastingSilently)
		SilentTimeline->PlayFromStart();
	else
		AudioComponent->Play(0.0);

	LeadInTimerHandle.Invalidate();
}


bool UAxMidiBroadcasterComponent::
StartBroadcast(UAxMidiAsset* InMidiAsset, USoundBase* InSound, float InLeadInTime, float InPlayRate)
{

	if (!InMidiAsset)
		return false;

	double MidiFileDuration = InMidiAsset->GetDuration();

	

	if (MidiFileDuration < 0.1)
	{
		//todo: write to console why broadcasting failed.
		return false;
	}

	if (InSound)
		UGameplayStatics::PrimeSound(InSound);

	
	if (!StartBroadcastInternal(InMidiAsset, InPlayRate))
		return false;

	//Silently broadcast with the timeline.
	if (!InSound)
	{
		bBroadcastingSilently=true;

		//Dump the timeline and create a new one cause we can't remove events...
		SilentTimeline=NewObject<UTimelineComponent>(this,UTimelineComponent::StaticClass());
		SilentTimeline->RegisterComponent();

		FOnTimelineEvent OnBroadcastCompleteEvent;
		OnBroadcastCompleteEvent.BindDynamic(this,&UAxMidiBroadcasterComponent::FireOnBroadcastCompleteDelegate);

		SilentTimeline->SetTimelineLengthMode(TL_TimelineLength);

		SilentTimeline->SetTimelineLength(MidiFileDuration);
		

		SilentTimeline->AddEvent(MidiFileDuration, OnBroadcastCompleteEvent);
	}
	else
	{
		if (AudioComponent)
		{
			

			bBroadcastingSilently = false;

			AudioComponent->SetSound(InSound);

			AudioComponent->OnAudioPlaybackPercent.AddUniqueDynamic(this, 
				&UAxMidiBroadcasterComponent::HandleOnAudioPlaybackPercent);
			
			AudioComponent->OnAudioFinished.AddUniqueDynamic(
				this, &UAxMidiBroadcasterComponent::UAxMidiBroadcasterComponent::HandleOnAudioFinished);

			
		}
	}


	if (InLeadInTime > 0.f)
	{
		UWorld* World = GetWorld();

		ensure(World);

		World->GetTimerManager().SetTimer(LeadInTimerHandle, this,
		                                  &UAxMidiBroadcasterComponent::HandleLeadInTimeComplete, InLeadInTime);
	}
	else
	{
		if(bBroadcastingSilently)
			SilentTimeline->PlayFromStart();
		else
		{
			
		
			AudioComponent->Play();
			

			
		}
			
			
	}

	bBroadcasting=true;

	return true;
}

void UAxMidiBroadcasterComponent::Pause()
{
	for (UAxMidiPlayhead* PlayHead : PlayHeads)
	{
		PlayHead->Pause();
	}

	if(bBroadcastingSilently)
	{
		SilentTimeline->Stop();	
	}
	else
	{
		if (AudioComponent)
			AudioComponent->SetPaused(true);
	}

	
}

void UAxMidiBroadcasterComponent::Resume()
{
	for (UAxMidiPlayhead* PlayHead : PlayHeads)
	{
		PlayHead->Resume();
	}

	if (bBroadcastingSilently)
	{
		SilentTimeline->Play();
	}
	else
	{
		if (AudioComponent)
			AudioComponent->SetPaused(false);
	}

}

void UAxMidiBroadcasterComponent::Stop()
{

	/*
	 * We must set this early.
	 * Calling "Stop()" on the audio comp will trigger OnAudioPercent delegate,
	 * which relies on bBroadcasting to determine if it should run or not.
	 */
	bBroadcasting = false;

	//Trigger NoteOFFs of already playing notes.
	for (UAxMidiBroadcasterPlayhead* PlayHead : PlayHeads)
	{
		PlayHead->Stop();
	}

	if(bBroadcastingSilently)
		SilentTimeline->Stop();

	SetPlaybackPosition(0.0);

}

bool UAxMidiBroadcasterComponent::IsBroadcasting()
{
	return bBroadcasting;
}

void UAxMidiBroadcasterComponent::SetPlaybackPosition(float NewPosition)
{
	for (UAxMidiPlayhead* PlayHead : PlayHeads)
	{
		PlayHead->SetPlaybackPosition(NewPosition);
	}

	if(bBroadcastingSilently)
	{
		SilentTimeline->SetPlaybackPosition(NewPosition,false,false);
	}
	else
	{
		if (AudioComponent)
		{
			bAudioFinishTriggeredByStop = true;

			AudioComponent->Stop();

			bAudioFinishTriggeredByStop =false;

			//if this function was called while broadcasting, continue play.
			if(IsBroadcasting())
				AudioComponent->Play(NewPosition);
			
		}

		bIgnoreAudioTimeUpdate = true;
	}

}

float UAxMidiBroadcasterComponent::GetPlayRate()
{
	return PlayRate;
}

void UAxMidiBroadcasterComponent::SetPlayRate(float InPlayRate)
{
	PlayRate = InPlayRate;

	

	//SilentTimeline.SetPlayRate(InPlayRate);
}

void UAxMidiBroadcasterComponent::UpdateAndBroadcast(float InCurrentTime)
{
	for (UAxMidiBroadcasterPlayhead* PlayHead : PlayHeads)
	{
		PlayHead->ManualTick(InCurrentTime * PlayRate);
	}
}

void UAxMidiBroadcasterComponent::HandleOnAudioPlaybackPercent(const USoundWave* PlayingSoundWave,
	const float PlaybackPercent)
{
	

	if (bIgnoreAudioTimeUpdate)
	{
		bIgnoreAudioTimeUpdate = false;

		return;
	}

	if (!IsBroadcasting())
	{
		return;
	}

	/* This debug section verifies playback percent triggers multiple times
	 * After reaching 1.0. Leaving it here for future reference.
	if (PlaybackPercent == 1.0)
	{
		
		PlayComplete++;

		
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, 
			FString::Printf(TEXT("Num Before Reset : %d"), PlayComplete));

	}
	else if(PlaybackPercent<=0.1)
	{
		//debug the reset.
		if(PlayComplete>=1)
		{
			PlayComplete = 0;

			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red,
				FString::Printf(TEXT("We Hit Reset: %d"), PlayComplete));
		}
		
	}*/

	//wrap the percent between 0 and 1 in case of looping...
	float CappedPlaybackPercent= FMath::Fmod(PlaybackPercent, 1.0);

	//CHECK AND SYNC TIMELINE TO AUDIO.
	float AudioTime = PlayingSoundWave->Duration * CappedPlaybackPercent;

	UpdateAndBroadcast(AudioTime);

	

	/**
	 * The only reason this class is a SceneCompo and not AudioComp is because
	 * we want to prevent introduction of the "Play" function and others from Blueprints side.
	 * They may be confusing as the correct function to call is "StartBroadcast"(but we can document it).
	 */

}

void UAxMidiBroadcasterComponent::HandleOnAudioFinished()
{
	if(!bAudioFinishTriggeredByStop)
		FireOnBroadcastCompleteDelegate();

}



void UAxMidiBroadcasterComponent::HandleOnSilentTimelineUpdate()
{
	if (!IsBroadcasting())
	{
		return;
	}

	//.
	float PlaybackTime = SilentTimeline->GetPlaybackPosition();

	UpdateAndBroadcast(PlaybackTime);
}

void UAxMidiBroadcasterComponent::FireOnBroadcastCompleteDelegate()
{

	OnBroadcastFinished.Broadcast(this);
}
