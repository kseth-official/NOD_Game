// Copyright Algosyntax 2022. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Interfaces/IAxMidiListener.h"
#include "Subsystems/AxMidiBroadcastersSubsystem.h"
#include "MidiUtilities/AxMidiFilter.h"
#include "AxMidiListenerComponent.generated.h"


/**
 * A MidiLister  listens to MidiEvents that are broadcast by UMidiBroadcasters through the Broadcast Subsystem
 * Automatically triggered by the Broadcaster subsystem by default.
 * You can override the beginplay() function to disable the binding.
 */
UCLASS(ClassGroup=(MidiEngine), meta=(BlueprintSpawnableComponent), DisplayName="MidiListener")
class AXMIDIBROADCASTERS_API UAxMidiListenerComponent : public USceneComponent, public IAxMidiListener
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	UAxMidiBroadcastersSubsystem* MidiBroadcasterSubsystem;

public:
	/**
	 * @brief The Midi Listening Filter. If you leave this empty, no filtering will happen and all notes will play
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Midi Engine")
	FAxMidiFilter MidiFilter;

public:
	// Sets default values for this component's properties

	UAxMidiListenerComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;

	

	/**
	 * @brief Responds to the MidiBroadcasterSubsystem ChordOn Event and broadcasts the notes individually.
	 * @param InMidiChord The Chord that just turned on
	 * @param InPlayHead The Playhead responsible for turning the chord on.
	 */
	UFUNCTION()
	virtual void OnSubsystemChordOn(FAxMidiChord InMidiChord, UAxMidiPlayhead* InPlayHead,
	                                TScriptInterface<IAxMidiBroadcaster> InBroadcaster) override;

	/**
	 * @brief Responds to the MidiBroadcasterSubsystem MidiNoteOff Event;
	 * @param InMidiTrackName The Track name like Kick.
	 * @param InMidiNote The note that just turned on
	 * @param InPlayhead The Playhead that's turning this note OFF.
	 */
	UFUNCTION()
	virtual void OnSubsystemMidiNoteOff(FString InMidiTrackName, UAxMidiNote* InMidiNote, UAxMidiPlayhead* InPlayhead,
	                                    TScriptInterface<IAxMidiBroadcaster> InBroadcaster) override;


	UFUNCTION()
	virtual void OnSubsystemBPMEvent(float InBPM, UAxMidiPlayhead* InPlayHead,
	                         TScriptInterface<IAxMidiBroadcaster> InBroadcaster) override;


	/**
	 * @brief Broadcasts the MidiNote as a NoteOnEvent with the MidiNoteOn Delegate.
	 *        Meant for exposing NoteOn to Blueprints from a component.
	 *        Mostly for Convenience since C++ can listen to Subsystem directly.
	 *        Automatically triggered by the Broadcaster subsystem by default.
	 * @param InMidiTrackName The Track name like Kick.
	 * @param InMidiNote
	 * @param InPlayhead The Playhead responsible for turning the note on.
	 */
	UFUNCTION()
	void BroadcastMidiNoteOn(FString InMidiTrackName, UAxMidiNote* InMidiNote, UAxMidiPlayhead* InPlayhead,
	                         TScriptInterface<IAxMidiBroadcaster> InBroadcaster);


	/**
	 * @brief Broadcasts the MidiNote as a NoteOnEvent with the MidiNoteOn Delegate.
	 *        Meant for exposing NoteOff to Blueprints from a component.
	 *        Mostly for Convenience since C++ can listen to Subsystem directly 
	 * @param InMidiTrackName The Track name like Kick.
	 * @param InMidiNote
	 * @param InPlayhead The Playhead that's turning this note OFF.
	 */
	UFUNCTION()
	void BroadcastMidiNoteOff(FString InMidiTrackName, UAxMidiNote* InMidiNote, UAxMidiPlayhead* InPlayhead,
	                          TScriptInterface<IAxMidiBroadcaster> InBroadcaster);

	void BroadcastBPMEvent(float InBpm, UAxMidiPlayhead* InPlayhead,
	                       TScriptInterface<IAxMidiBroadcaster> InBroadcaster);


	/**
	 * Called when a MidiNote Starts Playing
	 * Call Get NoteProperties on the MidiNote to access it's info like velocity etc...
	 */
	UPROPERTY(BlueprintAssignable, DisplayName="On Midi Note ON", Category = "MidiEngine|MidiListener")
	FAxMidiNoteDelegate NoteOnEventsDelegate;

	/**
	 * Called when a MidiNote Stops Playing
	 * Call Get NoteProperties on the MidiNote to access it's info like velocity etc...
	 */
	UPROPERTY(BlueprintAssignable, DisplayName = "On Midi Note OFF", Category = "MidiEngine|MidiListener")
	FAxMidiNoteDelegate NoteOffEventsDelegate;


	/**
	 * Called On tick to give actors BPM Events updates.
	 */
	UPROPERTY(BlueprintAssignable, DisplayName = "On BPM Event", Category = "MidiEngine|MidiListener")
	FAxMidiCurveDelegate BPMEventsDelegate;
};
