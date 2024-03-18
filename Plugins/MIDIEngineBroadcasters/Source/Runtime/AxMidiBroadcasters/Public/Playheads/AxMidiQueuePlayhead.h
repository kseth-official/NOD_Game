// Copyright Algosyntax 2023. All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Playheads/AxMidiTimelinePlayhead.h"
#include "AxMidiQueuePlayhead.generated.h"

/**
 * Specialized playhead That instead of broadcasting midi note events, places them in a Queue.
 * The Queue can then be queried and cleared by the playhead's owner at the owner's preferred time.
 * We override HandleChordNoteOn HandleNoteOff and that disables broadcasting events on the main subsystem.
 * Then place those events in NoteOnQueue and NoteOffQueue and wait for owner to query and clear when done.
 * Sometimes the owner(broadcaster) is not yet ready to handle the notes, so we hold them until processing is ready. 
 */
UCLASS(NotEditInlineNew, DisplayName = "Midi Queue Playhead")
class AXMIDIBROADCASTERS_API UAxMidiQueuePlayhead : public UAxMidiTimelinePlayhead
{
	GENERATED_BODY()

protected:
	/**
	 * @brief These notes need to broadcast Note ON Event
	 */
	UPROPERTY()
	TArray<UAxMidiNote*> NoteOnQueue;


	/**
	 * @brief These notes need to broadcast NoteOFF event.
	 */
	UPROPERTY()
	TArray<UAxMidiNote*> NoteOffQueue;


protected:


	virtual void HandleChordNoteOn(FAxMidiChord NoteOnChord) override;

	virtual void HandleNoteOff(UAxMidiNote* InMidiNote) override;

public:

	/**
	 * @brief Get the MidiNotes in the NoteOn Queue.
	 *       I.e NoteOn has been placed in a queue instead of being broadcast when they turned on.
	 * @return
	 */
	TArray<UAxMidiNote*> GetNoteOnQueue();

	TArray<UAxMidiNote*> GetNoteOffQueue();

	/**
	 * @brief Clears the NoteOnQueue.
	 */
	void EmptyNoteOnQueue();

	void EmptyNoteOffQueue();
	
};
