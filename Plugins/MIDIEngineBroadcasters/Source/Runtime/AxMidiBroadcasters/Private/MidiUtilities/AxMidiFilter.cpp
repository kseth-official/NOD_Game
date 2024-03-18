// Copyright Algosyntax 2022. All Rights Reserved.


#include "MidiUtilities/AxMidiFilter.h"
#include "Interfaces/IAxMidiBroadcaster.h"
#include "MidiClasses/AxMidiNote.h"
#include "Playheads/AxMidiPlayhead.h"

bool FAxMidiFilter::MatchesFilter(UAxMidiNote* InMidiNote, UAxMidiPlayhead* InPlayhead,
                                  TScriptInterface<IAxMidiBroadcaster> InBroadcaster)
{
	if (!InMidiNote || !InBroadcaster)
	{
		// If MidiNote or Broadcaster is null, return false
		return false;
	}

	FString NoteTrackName = InMidiNote->GetMidiTrackName();

	FString InBroadcasterName = InBroadcaster->GetBroadcasterName();


	//Todo: trim whitespaces so that "Piano " is still a match to "Piano"
	if (!MidiTracks.IsEmpty() && MidiTracks.Find(NoteTrackName) == INDEX_NONE)
	{
		// If MidiTracks is not empty and there is no match, return false
		return false;
	}

	if (!BroadcasterName.IsEmpty() && InBroadcasterName != BroadcasterName)
	{
		// If BroadcasterName is not empty and there is no match, return false
		return false;
	}

	if (!PitchName.IsEmpty() && PitchName != InMidiNote->Properties.PitchName)
	{
		// If PitchName is not empty and there is no match, return false
		return false;
	}

	if (!PlayHeadName.IsEmpty())
	{
		// If PlayHeadName is not empty and there is no match, return false

		if (InPlayhead == nullptr)
			return false;

		//if playhead is not null... compare its name with filter.
		FString InPlayheadName = InPlayhead->GetPlayHeadName();

		if (InPlayheadName != PlayHeadName)
		{
			return false;
		}

	}

	if(!PitchRange.IsEmpty())
	{
		if(!PitchRange.Contains(InMidiNote->Properties.PitchNumber))
			return false;

	}

	// If we've reached this point, all of the conditions have been met, so return true
	return true;
}

bool FAxMidiFilter::MatchesBroadcasterFilter(UAxMidiPlayhead* InPlayhead,
	TScriptInterface<IAxMidiBroadcaster> InBroadcaster)
{

	FString InBroadcasterName = InBroadcaster->GetBroadcasterName();


	if (!BroadcasterName.IsEmpty() && InBroadcasterName != BroadcasterName)
	{
		// If BroadcasterName is not empty and there is no match, return false
		return false;
	}

	if (!PlayHeadName.IsEmpty())
	{
		// If PlayHeadName is not empty and there is no match, return false

		if (InPlayhead == nullptr)
			return false;

		//if playhead is not null... compare its name with filter.
		FString InPlayheadName = InPlayhead->GetPlayHeadName();

		if (InPlayheadName != PlayHeadName)
		{
			return false;
		}

	}

	return true;
}
