// Copyright Algosyntax 2022. All Rights Reserved.


#include "Playheads/AxMidiTimelinePlayhead.h"


bool UAxMidiTimelinePlayhead::Init(TScriptInterface<IAxMidiBroadcaster> InMidiBroadcaster, FString InPlayHeadName, double InTimeOffset)
{
	if (Super::Init(InMidiBroadcaster, InPlayHeadName, InTimeOffset))
	{
		CreateNewTimeline();

		return true;
	}

	return false;
}

void UAxMidiTimelinePlayhead::SetPlaybackPosition(double Time, bool bTurnNotesOff)
{
	if(Timeline)
		Timeline->SetPlaybackPosition(Time, true, true);

	Super::SetPlaybackPosition(Time, bTurnNotesOff);
}

double UAxMidiTimelinePlayhead::GetPlaybackPosition(bool bWithOffset)
{
	if(Timeline)
	{
		float TimelinePos=Timeline->GetPlaybackPosition();

		if(bWithOffset)
			return TimelinePos+GetTimeOffset();
		else
			return TimelinePos;
	}
	else
		return Super::GetPlaybackPosition(bWithOffset);
}

void UAxMidiTimelinePlayhead::CreateNewTimeline()
{
	//Destroy the timeline if it already exists, before reassigning pointer variable.
	if(Timeline)
		Timeline->DestroyComponent();

	Timeline = NewObject<UTimelineComponent>(this, UTimelineComponent::StaticClass());

	Timeline->RegisterComponent();

	Timeline->SetTimelineLengthMode(TL_TimelineLength);
	
}

void UAxMidiTimelinePlayhead::AutoTick()
{
	
	//we don't need to check if playing, but it saves us from running unnecessary code.
	if (Timeline && Timeline->IsPlaying())
	{
		//Base class applies the offset, just need to submit the driver's(timeline in this case). current time only.

		float TimelinePosition = Timeline->GetPlaybackPosition();

		ManualTick(TimelinePosition);

		UE_LOG(LogTemp, Warning, TEXT("TimelinePosition: %f "), TimelinePosition);
	
	}
}

void UAxMidiTimelinePlayhead::Play()
{

	if (MidiBroadcaster)
	{
		if(!Timeline)
			CreateNewTimeline();


		//Get the MidiAsset From The Broadcaster.
		UAxMidiAsset* MidiAsset = MidiBroadcaster->GetMidiAsset();


		//We add 0.1 to the end ensure the event of the last section is triggered.
		//Eg. The OnFinished event will get triggered instead of our Section Event because they sit at the same position.
		Timeline->SetTimelineLength(MidiAsset->GetDuration() + 0.1);


		Timeline->Play();
	}
		
}

void UAxMidiTimelinePlayhead::Pause()
{
	if (Timeline)
		Timeline->Stop();
}

void UAxMidiTimelinePlayhead::Resume()
{
	if (Timeline)
		Timeline->Play();
}

void UAxMidiTimelinePlayhead::Stop()
{
	if (Timeline)
		Timeline->Stop();

	SetPlaybackPosition(0.0);

}

bool UAxMidiTimelinePlayhead::IsPlaying()
{
	if (Timeline)
		return Timeline->IsPlaying();

	return false;
}


void UAxMidiTimelinePlayhead::SetPlayRate(float NewRate)
{
	if (Timeline)
		Timeline->SetPlayRate(NewRate);
}

void UAxMidiTimelinePlayhead::AddTimelineEvent(float Time, FOnTimelineEvent& InTimelineEvent)
{
	if (Timeline)
		Timeline->AddEvent(Time, InTimelineEvent);

	
}

void UAxMidiTimelinePlayhead::SetSection(float InSectionStart, float InSectionEnd,float Prebuffer, float PlayRate)
{

	//reset the timeline.
	CreateNewTimeline();

	//The timeline is new so we have to ensure Playrate from old one is applied to it.
	Timeline->SetPlayRate(PlayRate);


	SetSectionStart(InSectionStart,Prebuffer);

	//set section end and Adding event to it cause timeline is new.
	SetSectionEnd(InSectionEnd,true);


}

void UAxMidiTimelinePlayhead::SetSectionStart(float InSectionStart, float PreBuffer)
{
	SectionStart = InSectionStart;

	SetPlaybackPosition(InSectionStart - PreBuffer);
}

void UAxMidiTimelinePlayhead::SetSectionEnd(float InSectionEnd, bool bAddEvent)
{
	SectionEnd = InSectionEnd;

	// add an event for both almost finished and Finished
	if (bAddEvent)
		AddSectionEndEvent();
}

void UAxMidiTimelinePlayhead::AddSectionEndEvent()
{
	FOnTimelineEvent OnSectionFinishedEvent;

	OnSectionFinishedEvent.BindDynamic(this, &UAxMidiTimelinePlayhead::OnTimelineSectionFinished);

	/*
	 * We have to take "TimeOffset" into consideration here. Example case:
	 * We have section from 2 Seconds to 5seconds.
	 * If our TimeOffset is 0. Then we will end at 5 seconds. No need for adjustments.
	 * But if our time offset is 1 second, meaning we are playing 1 second ahead.
	 * Then our Finished Event will be at 4 Seconds BECAUSE our Playhead is going to add the 1 second to get the 5 when it ticks.
	 */
	AddTimelineEvent(SectionEnd - TimeOffset, OnSectionFinishedEvent);
}


void UAxMidiTimelinePlayhead::OnTimelineSectionFinished()
{
	
	//NB: In case you're thinking of handling  Stop()/Stopping functionality here, Dont. you should do it in the Broadcaster instead.
	//Provided your broadcaster is subscribed to the OnSectionFinishedDelegate delegate thats broadcast below.
	//The Broadcaster should handle all starts/stops commands.

	OnSectionFinishedDelegate.Broadcast(this);

	
	
}
