// Copyright Algosyntax 2022. All Rights Reserved.


#include "Components/AxMidiListenerComponent.h"
#include "Engine/Engine.h"
#include "MidiClasses/AxMidiTrack.h"

// Sets default values for this component's properties
UAxMidiListenerComponent::UAxMidiListenerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}

// Called when the game starts
void UAxMidiListenerComponent::BeginPlay()
{
	Super::BeginPlay();


	MidiBroadcasterSubsystem = GEngine->GetEngineSubsystem<UAxMidiBroadcastersSubsystem>();

	MidiBroadcasterSubsystem->ChordOnEventsDelegate.AddUniqueDynamic(this, &UAxMidiListenerComponent::OnSubsystemChordOn);

	MidiBroadcasterSubsystem->NoteOffEventsDelegate.AddUniqueDynamic(this, &UAxMidiListenerComponent::OnSubsystemMidiNoteOff);

	MidiBroadcasterSubsystem->BPMEventsDelegate.AddUniqueDynamic(this, &UAxMidiListenerComponent::OnSubsystemBPMEvent);

	// ...
}

// Called every frame
void UAxMidiListenerComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                           FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UAxMidiListenerComponent::OnSubsystemChordOn(FAxMidiChord InMidiChord, UAxMidiPlayhead* InPlayHead,
	TScriptInterface<IAxMidiBroadcaster> InBroadcaster)
{
	for (UAxMidiNote* MidiNote : InMidiChord.ChordNotes)
	{
		BroadcastMidiNoteOn(MidiNote->GetMidiTrackName(),MidiNote,InPlayHead,InBroadcaster);
	}
}

void UAxMidiListenerComponent::OnSubsystemMidiNoteOff(FString InMidiTrackName, UAxMidiNote* InMidiNote,
                                                    UAxMidiPlayhead* InPlayhead, TScriptInterface<IAxMidiBroadcaster> InBroadcaster)
{
	BroadcastMidiNoteOff(InMidiTrackName, InMidiNote, InPlayhead, InBroadcaster);
}

void UAxMidiListenerComponent::OnSubsystemBPMEvent(float InBPM, UAxMidiPlayhead* InPlayHead, TScriptInterface<IAxMidiBroadcaster> InBroadcaster)
{
	BroadcastBPMEvent(InBPM,InPlayHead,InBroadcaster);
}

void UAxMidiListenerComponent::BroadcastMidiNoteOn(FString InMidiTrackName, UAxMidiNote* InMidiNote,
                                                 UAxMidiPlayhead* InPlayhead, TScriptInterface<IAxMidiBroadcaster> InBroadcaster)
{
	if (MidiFilter.MatchesFilter(InMidiNote, InPlayhead,InBroadcaster))
	{
		NoteOnEventsDelegate.Broadcast(InMidiTrackName, InMidiNote, InPlayhead,InBroadcaster);
	}
}

void UAxMidiListenerComponent::BroadcastMidiNoteOff(FString InMidiTrackName, UAxMidiNote* InMidiNote,
                                                  UAxMidiPlayhead* InPlayhead, TScriptInterface<IAxMidiBroadcaster> InBroadcaster)
{
	if (MidiFilter.MatchesFilter(InMidiNote, InPlayhead,InBroadcaster))
	{
		NoteOffEventsDelegate.Broadcast(InMidiTrackName, InMidiNote, InPlayhead,InBroadcaster);
	}
}

void UAxMidiListenerComponent::BroadcastBPMEvent(float InBpm, UAxMidiPlayhead* InPlayhead,
	TScriptInterface<IAxMidiBroadcaster> InBroadcaster)
{
	if (MidiFilter.MatchesBroadcasterFilter(InPlayhead, InBroadcaster))
	{
		BPMEventsDelegate.Broadcast(InBpm,InPlayhead, InBroadcaster);
	}
}
