// Copyright Algosyntax 2023. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "MidiClasses/AxMidiChord.h"
#include "AxMidiBroadcastersSubsystem.generated.h"

class UAxMidiNote;
class UAxMidiPlayhead;

/**
 * @brief For MidiNote Related Events broadcast by a playhead.
 *        The PlayHead is the one responsible for the broadcasting.
 *		  If you want the name of the playhead, or the broadcaster you can query the Playhead pointer.
 *
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FAxMidiNoteDelegate, FString, TrackName, UAxMidiNote*, MidiNote, UAxMidiPlayhead*, PlayHead, TScriptInterface<IAxMidiBroadcaster>, Broadcaster);


DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAxMidiChordDelegate, FAxMidiChord, MidiChord, UAxMidiPlayhead*, PlayHead, TScriptInterface<IAxMidiBroadcaster>, Broadcaster);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAxMidiCurveDelegate, float, CurveValue, UAxMidiPlayhead*, PlayHead, TScriptInterface<IAxMidiBroadcaster>, Broadcaster);



/**
 * This is main runtime subsystem that will host common variables and functions shared between the
 * different MidiEngine classes. Example if MidiAssetPlayer and MidiTrack need access to a common variable
 * It's best to host it in this class since they don't inherit from one another.
 */
UCLASS(DisplayName="Midi Broadcasters Subsystem")
class AXMIDIBROADCASTERS_API UAxMidiBroadcastersSubsystem : public UEngineSubsystem
{
	GENERATED_BODY()


public:

	/**
	* @brief MidiNote ONs will be broadcast as chords... 
	*/
	UPROPERTY(BlueprintAssignable, Category = MidiEngine)
	FAxMidiChordDelegate ChordOnEventsDelegate;

	/**
	 * @brief Fired or broadcast each time any Midi Note STOPS Playing.
	 * Blueprints or other classes can bind to this to react when a midi note STOPS playing.
	 */
	UPROPERTY(BlueprintAssignable, Category = MidiEngine)
	FAxMidiNoteDelegate NoteOffEventsDelegate;

	/**
	 * @brief Fired on tick to give actors BPM info.
	 */
	UPROPERTY(BlueprintAssignable, Category = MidiEngine)
	FAxMidiCurveDelegate BPMEventsDelegate;

public:


	/**
	 * @brief Will broadcast the submitted MidiTrack Chords with the ChordNoteOnEvent delegate.
	 * @param InBroadcaster The broadcaster that wishes to broadcast the MidiNote.
	 *        At some point you may need to ID who the broadcast is from.
	 * @param InChord A chord, FMidiChord(mutiple notes, same track) , that just turn on
	 */
	void BroadcastChordOn(TScriptInterface<IAxMidiBroadcaster> InBroadcaster, UAxMidiPlayhead* InPlayHead, FAxMidiChord InChord);

	/**
	 * @brief Will broadcast the submitted MidiNote with the NoteOFFdelegate.
	 * @param InBroadcaster The broadcaster that wishes to broadcast the MidiNote.
	 *        At some point you may need to ID who the broadcast is from.
	 * @param InMidiNote
	 */
	void BroadcastNoteOff(TScriptInterface<IAxMidiBroadcaster> InBroadcaster, UAxMidiPlayhead* InPlayHead, UAxMidiNote* InMidiNote);


	void BroadcastBPMEvent(TScriptInterface<IAxMidiBroadcaster> InBroadcaster, UAxMidiPlayhead* InPlayhead, float InBPM);
};
