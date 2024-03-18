// Copyright Algosyntax 2022. All Rights Reserved.

#include "Playheads/AxMidiPlayhead.h"


#include "Licensing/AxClientAssetsProxy.h"
#include "MidiClasses/AxMidiChord.h"
#include "Subsystems/AxMidiBroadcastersSubsystem.h"



bool UAxMidiPlayhead::Init(TScriptInterface<IAxMidiBroadcaster> InMidiBroadcaster, FString InPlayHeadName,
                         double InTimeOffset)
{
#ifdef AX_CLIENT_REMOTE_AUTH

	FAxAssetAuthStateInfo AssetAuthState = FAxClientAssetsProxy::GetAssetAuthState(AX_CLIENT_REMOTE_AUTH);

	switch (AssetAuthState.AuthState)
	{
	case EAxAssetAuthState::LOCKED:
	{

		//return immediately.
		return false;
	}
	case EAxAssetAuthState::UNLOCKED:
	{
		//let playheads init on trial mode.
		break;
	}
	case EAxAssetAuthState::TRIAL:
	{
		//Let playheads init on trial mode
		break;
	}
	}
#endif




	ensure(InMidiBroadcaster);

	if (!InMidiBroadcaster)
		return false;

	//TODO ensure InMidiBroadcaster is an actual broadcaster. i.e , it implements the interface

	MidiBroadcaster = InMidiBroadcaster;

	PlayHeadName = InPlayHeadName;

	SetTimeOffset(InTimeOffset);

	InitBroadcasterSubsystem();


	return true;
}

void UAxMidiPlayhead::InitBroadcasterSubsystem()
{
	if (!MidiBroadcastersSubsystem)
	{
		//Set a reference to the Midi subsystem to access common variables and delegates.
		MidiBroadcastersSubsystem = GEngine->GetEngineSubsystem<UAxMidiBroadcastersSubsystem>();

		//TODO: Just Checking for unexpected nulls, you can remove this.
		ensure(MidiBroadcastersSubsystem);
	}
}

bool UAxMidiPlayhead::IsChordBroadcastingAuthorized(FAxMidiChord InChord)
{
#ifdef AX_CLIENT_REMOTE_AUTH

	FAxAssetAuthStateInfo AssetAuthState = FAxClientAssetsProxy::GetAssetAuthState(AX_CLIENT_REMOTE_AUTH);

	switch (AssetAuthState.AuthState)
	{
	case EAxAssetAuthState::LOCKED:
	{

		//return don't show message here.
		return false;
	}
	case EAxAssetAuthState::UNLOCKED:
	{
		//let it import.
		break;
	}
	case EAxAssetAuthState::TRIAL:
	{
		//Limit Broadcasting to 20 seconds of the midi file here.
		if (InChord.Num() > 0 && InChord.ChordNotes[0]->Properties.StartTime >= 15)
		{
			AssetAuthState.AuthReasonMessage = "MidiBroadcasters is On Trial Mode.\nPlayback Is Limited To 15 Seconds Of MidiFile";
			AssetAuthState.AuthReasonMessage += "\nYou Can Buy Full License Or Login Through The Patreon Powered Algosyntax Client For Full Features";
			FAxClientAssetsProxy::AddDelayedAuthStateMessage(AssetAuthState);
			return false;
		}


		break;
	}
	}


#endif

	return true;

}


FString UAxMidiPlayhead::GetPlayHeadName()
{
	return PlayHeadName;
}

void UAxMidiPlayhead::SetPlayHeadName(FString InName)
{
	PlayHeadName = InName;
}

int32 UAxMidiPlayhead::GetIndex()
{
	return Index;
}


void UAxMidiPlayhead::BroadcastNoteOffEvents(double InTime)
{
	/*Keep in mind, Unlike BroadcastNoteOnEvents,
	 * TriggerNoteOFFS relies on the CurrentlyPlayingNotes Array NOT the starttime ordered Index map.
	 * So we need CurrentlyPlayingNotes to be filled somewhere, by your inheriting classes(if you inherit)
	 */

	 //Turn Notes Off.

	InTime += TimeOffset;

	TArray<UAxMidiNote*> NotesToTurnOff;

	for (auto MidiNote : CurrentlyPlayingNotes)
	{
		//Only get notes with the StopTime less than the submitted.
		if (InTime >= MidiNote->Properties.StopTime)
		{
			NotesToTurnOff.Add(MidiNote);
		}
	}

	//NB: can't remove items while in a loop that's why this second loop is necessary.
	for (auto MidiNote : NotesToTurnOff)
	{
		HandleNoteOff(MidiNote);

		CurrentlyPlayingNotes.Remove(MidiNote);
	}


}

void UAxMidiPlayhead::BroadcastNoteOnEvents(double InTime)
{
	//WARNING! Be very careful altering the following functions/loops. Do not alter until you understand the whole loop.
	//KEEP IN MIND: THE INDEX POSITION HAS LITTLE TO DO WITH THE CURRENT TIME. THEY DO NOT MOVE 1 FOR 1;
	//EG 30Seconds of playback can pass without the index changing, say from silence in the MIdiFile.
	//The Index tracking just helps make the algorithm faster so that we don't always start our while loop at 0 unnecessarily.


	UAxMidiAsset* MidiAsset = nullptr;

	//Get our Midi Asset from the broadcaster so that if it changes , our playhead is using the latest asset
	if (MidiBroadcaster)
		MidiAsset = MidiBroadcaster->GetMidiAsset();

	ensure(MidiAsset);

	

	if (!MidiAsset)
		return;

	CurrentTime = InTime;

	//Add the offset.
	InTime += TimeOffset;

	//Turn notes on.
	//Create a temporary map that will ensure a chord is formed by notes from the same MidiTrack.
	TMap<UAxMidiTrack*, FAxMidiChord> TrackToChordMap;


	while (Index < MidiAsset->MidiNotesQueue.Num())
	{
		UAxMidiNote* MidiNote = MidiAsset->MidiNotesQueue[Index];

		if ( MidiNote->Properties.StartTime <=InTime)
		{
			//NB: As Long as this function is called with a time in front of a MidiNote, the notes will be broadcast,
			// SO ensure the SYNC function is called where there are skips or whether you would like to set starting playback position.

			
			//HandleNoteOn(MidiNote);
			//TArray<UAxMidiNote*>& ChordNotes = TempChordsMap.FindOrAdd(MidiNote->MidiTrack);
			FAxMidiChord& Chord = TrackToChordMap.FindOrAdd(MidiNote->MidiTrack);

			bool bSkipNote =false;

			//We're preventing duplicate notes here (D4 Note ON Twice BEFORE the first one turns on).
			//that is: prevent overlapping notes
			for (UAxMidiNote* ChordNote : Chord.ChordNotes)
			{
				if(MidiNote->Properties.PitchNumber==ChordNote->Properties.PitchNumber)
				{
					bSkipNote=true;
				}
			}

			if(!bSkipNote)
			{
				Chord.AddNote(MidiNote,false);
				//ChordNotes.Add(MidiNote);


				CurrentlyPlayingNotes.Add(MidiNote);
			}

			//If we are in front of the note, we should advance the Index regardles off if we played a note or not.
			//This way the playhead will sync by itself.
			//++ means handled
			Index++;
		}
		//Because the MidiNotes are sorted, we should break after the first note that has it's start time > than our current playing time.
		//We keep the index the same and leave it for the next update call.
		else
		{
			break;
		}
	}

	//Theres a single chord for each track, broadcast them all
	for (TTuple<UAxMidiTrack*, FAxMidiChord> Pair : TrackToChordMap)
	{
		UAxMidiTrack* Track=Pair.Key;
		FAxMidiChord& Chord = Pair.Value;

		//Sort them before broadcasting.
		Chord.SortNotesByAscendingPitch();

		//Check for trial mode/locked mode in editor.
		if(IsChordBroadcastingAuthorized( Chord))
		{
			//here broadcast the Chord with a delegate.
			HandleChordNoteOn(Chord);
		}
			
	}

	/*Have we reached the end?*/
	if (Index >= MidiAsset->MidiNotesQueue.Num())
	{
		//TODO: Maybe Add a Flag to Hint we have reached the end for the index if needed. No?
	}
}

void UAxMidiPlayhead::BroadcastBPMEvent(float InCurrentTime)
{

	//Get our Midi Asset from the broadcaster so that if it changes , our playhead is using the latest asset
	if (MidiBroadcaster)
	{
		UAxMidiAsset* MidiAsset = MidiBroadcaster->GetMidiAsset();

		if(MidiAsset->BPMCurve)
		{
			float CurrentBPM=MidiAsset->BPMCurve->FloatCurve.Eval(InCurrentTime);

			MidiBroadcastersSubsystem->BroadcastBPMEvent(MidiBroadcaster, this, CurrentBPM);
		}
	}
		
}

void UAxMidiPlayhead::AutoTick()
{
}

void UAxMidiPlayhead::ManualTick(float InCurrentTime)
{
	//We are calling TriggerNoteOff On Top of BroadcastNoteOnEvents so that, notes are not immediately turned off if they are too short.
	//this will delay the turning NoteOFF event by atleast 1 Frame.

	BroadcastNoteOffEvents(InCurrentTime);

	BroadcastNoteOnEvents(InCurrentTime);

	BroadcastBPMEvent(InCurrentTime);


}




void UAxMidiPlayhead::HandleChordNoteOn(FAxMidiChord NoteOnChord)
{
	MidiBroadcastersSubsystem->BroadcastChordOn(MidiBroadcaster,this, NoteOnChord);
}

void UAxMidiPlayhead::HandleNoteOff(UAxMidiNote* InMidiNote)
{
	MidiBroadcastersSubsystem->BroadcastNoteOff(MidiBroadcaster, this, InMidiNote);



}

double UAxMidiPlayhead::GetTimeOffset()
{
	return TimeOffset;
}

void UAxMidiPlayhead::SetTimeOffset(double InTimeOffset)
{
	TimeOffset = InTimeOffset;
}

void UAxMidiPlayhead::StopAllNotes()
{
	for (UAxMidiNote* MidiNote : CurrentlyPlayingNotes)
	{
		
		HandleNoteOff(MidiNote);
	}

	//Then empty the currently playing notes.
	CurrentlyPlayingNotes.Empty();
}

double UAxMidiPlayhead::GetPlaybackPosition(bool bWithOffset)
{
	if (bWithOffset)
		return CurrentTime + TimeOffset;

	return CurrentTime;
}

void UAxMidiPlayhead::SetPlaybackPosition(double Time, bool bTurnNotesOff)
{
	//Since we are jumping immediately turn all currently playing notes OFF
	if (bTurnNotesOff)
		StopAllNotes();

	//Jump all Playheads to the Beginning and then do a forward sync/seek. easier this way.
	Index = 0;

	//update the time.
	CurrentTime = Time;

	Time += TimeOffset;

	UAxMidiAsset* MidiAsset = nullptr;

	//Get our Midi Asset from the broadcaster so that if it changes , our playhead is using the latest asset
	if (MidiBroadcaster)
		MidiAsset = MidiBroadcaster->GetMidiAsset();

	if (!MidiAsset)
		return;


	while (Index < MidiAsset->MidiNotesQueue.Num())
	{
		UAxMidiNote* MidiNote = MidiAsset->MidiNotesQueue[Index];


		if (MidiNote->Properties.StartTime < Time)
		{
			//We advance the index until we reach an index which has greater start time than our current playing time.
			//The difference here is we just advance the index without playing anything.
			Index++;
		}
		else
		{
			break;
		}
	}
}

void UAxMidiPlayhead::Play()
{
}

void UAxMidiPlayhead::Pause()
{
}

void UAxMidiPlayhead::Resume()
{
}

void UAxMidiPlayhead::Stop()
{
	SetPlaybackPosition(0);
}

bool UAxMidiPlayhead::IsPlaying()
{
	//todo: add a flag to check if playhead is atleast initialized
	return true;
}

void UAxMidiPlayhead::SetPlayRate(float NewRate)
{
}

void UAxMidiPlayhead::PostLoad()
{
	Super::PostLoad();

	InitBroadcasterSubsystem();
}
