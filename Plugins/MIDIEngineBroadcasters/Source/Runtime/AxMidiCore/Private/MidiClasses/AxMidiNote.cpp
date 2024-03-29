// Copyright Algosyntax 2023. All Rights Reserved.


#include "MidiClasses/AxMidiNote.h"
#include "MidiClasses/AxMidiTrack.h"


UAxMidiNote::UAxMidiNote()
{

}

FString UAxMidiNote::GetMidiTrackName()
{
	return MidiTrack->GetTrackName();
}

UAxMidiTrack* UAxMidiNote::GetMidiTrackObject()
{
	return MidiTrack;
}

UAxMidiAsset* UAxMidiNote::GetMidiAssetObject()
{
	return MidiAsset;
}

FAxMidiNoteProperties& UAxMidiNote::GetMidiNoteProperties()
{
	return Properties;
}



float UAxMidiNote::GetAdjustedStartTime(float InPlayRate)
{
	return Properties.StartTime * (1 / InPlayRate);

}

float UAxMidiNote::GetAdjustedStopTime(float InPlayRate)
{
	return Properties.StopTime * (1 / InPlayRate);
}

float UAxMidiNote::GetAdjustedDuration(float InPlayRate)
{
	return Properties.Duration * (1 / InPlayRate);
}

