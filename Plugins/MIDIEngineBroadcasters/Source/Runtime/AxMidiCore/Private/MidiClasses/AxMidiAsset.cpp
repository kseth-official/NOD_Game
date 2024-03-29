// Copyright Algosyntax 2023. All Rights Reserved.

#include "MidiClasses/AxMidiAsset.h"
#include "MidiClasses/AxMidiTrack.h"
#include "Curves/CurveFloat.h"
#include "Engine/Engine.h"
#include "Subsystems/AxMidiEngineCoreSubsystem.h"


UAxMidiAsset::UAxMidiAsset()
{
	BPMCurve = CreateDefaultSubobject<UCurveFloat>(TEXT("BPM Curve"));
}

void UAxMidiAsset::Flush()
{
	RandomRenameNotes();

	MidiTracksMap.Empty();
	
	BPMCurve->ResetCurve();
	MidiNotesQueue.Empty();
	TimeSignatureNumerator = 4;
	TimeSignatureDenominator = 4;
	Duration = 0;
	bNotesSorted = false;
}

bool UAxMidiAsset::InsertTrack(UAxMidiTrack* MidiTrack)
{
	if(MidiTrack->GetTrackName().IsEmpty())
		return false;

	MidiTracksMap.FindOrAdd(MidiTrack->GetTrackName(), MidiTrack);

	bNotesSorted = false;

	return true;
}

UAxMidiTrack* UAxMidiAsset::GetMidiTrack(FString TrackName)
{
	//Find will return a pointer to our value, if null it wasn't found.
	auto MidiTrackPtrPtr = MidiTracksMap.Find(TrackName);

	//If null we didn't find anything.
	if (MidiTrackPtrPtr)
	{
		auto FoundMidiTrack = *MidiTrackPtrPtr;

		return FoundMidiTrack;
	}

	return nullptr;
}

TMap<FString, UAxMidiTrack*>& UAxMidiAsset::GetMidiTracksMapRef()
{
	return MidiTracksMap;
}

TArray<UAxMidiTrack*> UAxMidiAsset::GetMidiTracksAsArray()
{
	TArray<UAxMidiTrack*> OutArray;

	MidiTracksMap.GenerateValueArray(OutArray);

	return OutArray;
}


double UAxMidiAsset::ComputeDuration()
{


	for (auto MidiTrackPair : MidiTracksMap)
	{
		UAxMidiTrack* Track = MidiTrackPair.Value;

		for (TPair<FString, UAxMidiPitchRow*> PitchRowPair : Track->PitchRowsMap)
		{
			UAxMidiPitchRow* PitchRow = PitchRowPair.Value;

			for (UAxMidiNote* MidiNote : PitchRow->MidiNotes)
			{
				if (MidiNote->Properties.StopTime > Duration)
				{
					//The last MidiNote's Note off is the max duration.
					Duration = MidiNote->Properties.StopTime;
				}
			}
		}
	}

	return Duration;
}

double UAxMidiAsset::GetDuration()
{
	//If the duration is not 0, return it.
	if (Duration >= 0.1)
	{
		return Duration;
	}

	//Else Compute it 1st and return it.
	return ComputeDuration();
}

double UAxMidiAsset::GetAdjustedDuration(float InPlayRate)
{
	//Normal duration as in expecting playback to be at 1.0
	float NormalDuration = GetDuration();

	return NormalDuration *= (1 / InPlayRate);
}


void UAxMidiAsset::ShiftNotes(int NumSemitones)
{
	if (!MidiEngineCoreSubsystem)
		MidiEngineCoreSubsystem = GEngine->GetEngineSubsystem<UAxMidiEngineCoreSubsystem>();


	RandomRenameNotes();

	//loop through all the tracks.
	for (auto MidiTrack : GetMidiTracksAsArray())
	{
		//Copy the old map. Empty it. Then place the notes in the new map with new names.

		// Copy the old map before we empty it.
		TMap<FString,UAxMidiPitchRow*> OldPitchRowMap=MidiTrack->PitchRowsMap;

		MidiTrack->PitchRowsMap.Empty();


		for (TTuple<FString, UAxMidiPitchRow*> OldPitchRowPair : OldPitchRowMap)
		{
			UAxMidiPitchRow* OldPitchRow = OldPitchRowPair.Value;


			//loop through all the MidiNotes in the copy of the oldPitchRow
			for (int i = 0; i < OldPitchRow->MidiNotes.Num(); i++)
			{

				UAxMidiNote* MidiNote = OldPitchRow->MidiNotes[i];

				//by subtracting 12 we are shifting an octave down
				//negatives are valid although not common

				MidiNote->Properties.PitchNumber += NumSemitones;

				//since we changed PitchNumber we refresh pitch name;
				FString NewPitchName= MidiEngineCoreSubsystem->GetPitchNameFromNumber(MidiNote->Properties.PitchNumber);
				MidiNote->Properties.PitchName = NewPitchName;


				//Try to find pitch row
				UAxMidiPitchRow* NewPitchRow = MidiTrack->PitchRowsMap.FindRef(NewPitchName);

				if (!NewPitchRow)
				{
					NewPitchRow = NewObject<UAxMidiPitchRow>(this, UAxMidiPitchRow::StaticClass(), *NewPitchName);

					MidiTrack->PitchRowsMap.Add(NewPitchName, NewPitchRow);
				}

				//Insert it to row, which will set name and outer automatically.
				NewPitchRow->InsertMidiNote(MidiNote);

			}
		}

	}
}

float UAxMidiAsset::GetBPM(float InTime)
{
	return BPMCurve->FloatCurve.Eval(InTime);
}

void UAxMidiAsset::SortMidiNotesQueue()
{
	MidiNotesQueue.Empty();

	for (UAxMidiTrack* MidiTrack : GetMidiTracksAsArray())
	{
		//For Each Note in a track, Add it the Set..
		for (auto PitchRowPair : MidiTrack->PitchRowsMap)
		{
			UAxMidiPitchRow* PitchRow = PitchRowPair.Value;

			for (auto MidiNote : PitchRow->MidiNotes)
			{
				MidiNotesQueue.Emplace(MidiNote);
			}
		}
	}

	//Sort by starttimes.
	Algo::Sort(MidiNotesQueue, [](UAxMidiNote* inMidiNoteA, UAxMidiNote* inMidiNoteB)
	{
		return UAxMidiNote::CompareStartTimesAscending(inMidiNoteA, inMidiNoteB);
	});

	bNotesSorted = true;
}

void UAxMidiAsset::RandomRenameNotes()
{
	//loop through all the tracks.
	for (auto MidiTrack : GetMidiTracksAsArray())
	{
		MidiTrack->RandomRenameNotes();
	}
}
