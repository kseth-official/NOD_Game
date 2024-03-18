// Copyright Algosyntax 2023. All Rights Reserved


#include "Playheads/AxMidiQueuePlayhead.h"

void UAxMidiQueuePlayhead::HandleChordNoteOn(FAxMidiChord NoteOnChord)
{
	//Super will broadcast to midi listeners. Instead we are consuming the chord/ MidiNotes and adding them to a queue.

	//Super::HandleChordNoteOn(NoteOnChord);

	for (UAxMidiNote* Note : NoteOnChord.ChordNotes)
	{
		//equivalent of broadcasting
		NoteOnQueue.Add(Note);
	}

}

void UAxMidiQueuePlayhead::HandleNoteOff(UAxMidiNote* InMidiNote)
{
	//Super will broadcast to midi listeners through subsystem.
	//Instead we are consuming the MidiNote offs and adding it to a queue.

	//Super::HandleNoteOff(InMidiNote);

	//Equivalent of broadcasting note off event, we consume it by adding to queue,
	NoteOffQueue.Add(InMidiNote);
}

TArray<UAxMidiNote*> UAxMidiQueuePlayhead::GetNoteOnQueue()
{
	return NoteOnQueue;
}

void UAxMidiQueuePlayhead::EmptyNoteOnQueue()
{
	NoteOnQueue.Empty();
}

TArray<UAxMidiNote*> UAxMidiQueuePlayhead::GetNoteOffQueue()
{
	return NoteOffQueue;
}

void UAxMidiQueuePlayhead::EmptyNoteOffQueue()
{
	NoteOffQueue.Empty();
}
