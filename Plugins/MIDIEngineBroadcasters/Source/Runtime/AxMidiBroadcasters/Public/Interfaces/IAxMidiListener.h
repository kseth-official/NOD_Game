// Copyright Algosyntax 2023. All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IAxMidiListener.generated.h"

/**
 * 
 */
UINTERFACE(NotBlueprintable, BlueprintType)
class AXMIDIBROADCASTERS_API UAxMidiListener : public UInterface
{
	GENERATED_BODY()
	
};

/**
 * @brief Interface For Classes that wish to be MidiListeners...
 *       
 */
class AXMIDIBROADCASTERS_API IAxMidiListener
{
	GENERATED_BODY()

public:

	/**
	 * @brief Responds to the MidiBroadcasterSubsystem ChordOn Event and broadcasts the notes individually.
	 * @param InMidiChord The Chord that just turned on
	 * @param InPlayHead The Playhead responsible for turning the chord on.
	 */
	UFUNCTION()
	virtual void OnSubsystemChordOn(FAxMidiChord InMidiChord, UAxMidiPlayhead* InPlayHead,
								TScriptInterface<IAxMidiBroadcaster> InBroadcaster)=0;

	/**
	 * @brief Responds to the MidiBroadcasterSubsystem MidiNoteOff Event;
	 * @param InMidiTrackName The Track name like Kick.
	 * @param InMidiNote The note that just turned on
	 * @param InPlayhead The Playhead that's turning this note OFF.
	 */
	UFUNCTION()
	virtual void OnSubsystemMidiNoteOff(FString InMidiTrackName, UAxMidiNote* InMidiNote, UAxMidiPlayhead* InPlayhead,
			TScriptInterface<IAxMidiBroadcaster> InBroadcaster)=0;



	UFUNCTION()
	virtual void OnSubsystemBPMEvent(float InBPM, UAxMidiPlayhead* InPlayHead, 
		        TScriptInterface<IAxMidiBroadcaster> InBroadcaster)=0;

};