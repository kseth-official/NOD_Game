// Copyright Algosyntax 2023. All Rights Reserved.


#include "MidiClasses/AxMidiTrack.h"

void UAxMidiPitchRow::InsertMidiNote(UAxMidiNote* MidiNote)
{

	//Create a name for the MidiNote in the form "C5_0"
	FString MidiNoteName = MidiNote->Properties.PitchName + '_' + FString::FromInt(MidiNotes.Num());


	// Generate a unique identifier using FGuid to avoid name clashes if one is still in memory.
	FString UniqueId = FGuid::NewGuid().ToString();

	// Append the unique identifier to the MidiNoteName, just take the first characters from it to avoid long name
	// Chances of a clash are very very low, but if it happens remove the chop or increase.
	UniqueId.LeftInline(5);

	MidiNoteName += ("_" + UniqueId);


	//Set this PitchRow as the Outer(parent) of the UAxMidiNote .
	MidiNote->Rename(*MidiNoteName, this);

	//Place the MidiNote into it's PitchRow /Array.
	MidiNotes.Add(MidiNote);
}

UAxMidiTrack::UAxMidiTrack()
{
}

void UAxMidiTrack::Init(FString InTrackName)
{
	TrackName = InTrackName;

	MidiAsset = Cast<UAxMidiAsset>(GetOuter());

	//Break in debugging builds if MidiAsset is null.
	check(MidiAsset);

	PitchBendCurve = NewObject<UCurveFloat>(this, UCurveFloat::StaticClass(),TEXT("PitchBend"));


}

TArray<UAxMidiNote*> UAxMidiTrack::GetMidiNotesAsArray()
{
	TArray<UAxMidiNote*> OutNotes;
	for (TTuple<FString, UAxMidiPitchRow*> Pair : PitchRowsMap)
	{
		UAxMidiPitchRow* PitchRow = Pair.Value;

		OutNotes.Append(PitchRow->MidiNotes);

	}

	return OutNotes;
}

void UAxMidiTrack::InsertMidiNote(UAxMidiNote* MidiNote)
{
	//set a reference to this UAxMidiTrack  inside the MidiNote.
	//MidiNote->MidiTrack = this;
	MidiNote->MidiTrack = this;

	//Set a reference to the owning MidiAsset.
	//MidiNote->MidiAsset = MidiAsset;
	MidiNote->MidiAsset = MidiAsset;

	FString PitchName = MidiNote->Properties.PitchName;

	UAxMidiPitchRow* PitchRow = PitchRowsMap.FindRef(PitchName);

	if (!PitchRow)
	{
		PitchRow = NewObject<UAxMidiPitchRow>(this, UAxMidiPitchRow::StaticClass(), *PitchName);

		PitchRowsMap.Add(PitchName, PitchRow);
	}

	PitchRow->InsertMidiNote(MidiNote);

}

FString UAxMidiTrack::GetTrackName()
{
	return TrackName;
}

void UAxMidiTrack::SetTrackName(FString InTrackName)
{
	TrackName = InTrackName;

	//L"" won't be considered empty, (it contains null character/whitespace). we trim it cause we consider that empty.
	TrackName=TrackName.TrimStartAndEnd();
}

UAxMidiNote* UAxMidiTrack::GetLastNoteFromPitchRow(FString PitchName, bool bRemoveNote)
{
	UAxMidiPitchRow* PitchRow = PitchRowsMap.FindRef(PitchName);

	if(!PitchRow)
		return nullptr;

	if(bRemoveNote)
		return PitchRow->MidiNotes.Pop();


	return PitchRow->MidiNotes.Last();
}

void UAxMidiTrack::RandomRenameNotes()
{
	//loop through all the notes in the track
	for (TTuple<FString, UAxMidiPitchRow*> PitchRowPair : PitchRowsMap)
	{
		UAxMidiPitchRow* PitchRow = PitchRowPair.Value;

		//rename the pitchrow
		PitchRow->Rename();

		for (UAxMidiNote* MidiNote : PitchRow->MidiNotes)
		{
			//keep in mind this also clears out the outer...
			//make sure you call a function that will set the outer after this function.
			MidiNote->Rename();
		}
	}

}
