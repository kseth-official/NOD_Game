// Copyright Algosyntax 2022. All Rights Reserved.


#include "Subsystems/AxMidiBroadcastersSubsystem.h"
#include "Interfaces/IAxMidiBroadcaster.h"
#include "Licensing/AxClientAssetsProxy.h"
#include "MidiClasses/AxMidiNote.h"



void UAxMidiBroadcastersSubsystem::BroadcastChordOn(TScriptInterface<IAxMidiBroadcaster> InBroadcaster,
                                                       UAxMidiPlayhead* InPlayHead, FAxMidiChord InChord)
{
	//we're leaving broadcaster as a required input to enforce all broadcasting to originate from a broadcaster.
	//pllayhead can be null for Live Performances. i.e not from MidiBroadcaster


	check(InBroadcaster);

	if (!InBroadcaster )
		return;


	ChordOnEventsDelegate.Broadcast(InChord,InPlayHead,InBroadcaster);

}

void UAxMidiBroadcastersSubsystem::BroadcastNoteOff(TScriptInterface<IAxMidiBroadcaster> InBroadcaster,
                                                  UAxMidiPlayhead* InPlayHead, UAxMidiNote* InMidiNote)
{
#ifdef AX_CLIENT_REMOTE_AUTH

	FAxAssetAuthStateInfo AssetAuthState = FAxClientAssetsProxy::GetAssetAuthState(AX_CLIENT_REMOTE_AUTH);

	switch (AssetAuthState.AuthState)
	{
	case EAxAssetAuthState::LOCKED:
	{

		//return immediately.
		return;
	}
	case EAxAssetAuthState::UNLOCKED:
	{
		//let it import.
		break;
	}
	case EAxAssetAuthState::TRIAL:
	{
		//todo: Set Limited Features 
		//For now we'll just show message and  not limit anything.


		break;
	}
	}


#endif




	check(InBroadcaster);

	if (!InBroadcaster || !InMidiNote)
		return;

	FString InMidiTrackName = InMidiNote->GetMidiTrackName();

	NoteOffEventsDelegate.Broadcast(InMidiTrackName, InMidiNote, InPlayHead, InBroadcaster);
}

void UAxMidiBroadcastersSubsystem::BroadcastBPMEvent(TScriptInterface<IAxMidiBroadcaster> InBroadcaster, UAxMidiPlayhead* InPlayhead, float InBPM)
{
	//we're leaving broadcaster as a required input to enforce all broadcasting to originate from a broadcaster.
	//pllayhead can be null for Live Performances. i.e not from MidiBroadcaster

	check(InBroadcaster);

	if (!InBroadcaster)
		return;


	BPMEventsDelegate.Broadcast(InBPM, InPlayhead, InBroadcaster);

}
