// Copyright Algosyntax 2023. All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "MidiClasses/AxMidiNote.h"
#include "UObject/NoExportTypes.h"
#include "AxMidiChord.generated.h"


UENUM(BlueprintType)
enum class EAxMidiChordType : uint8
{
	SINGLENOTE, //
	INTERVAL, //2 notes
	CHORD, //3 or more notes. True chord.
};

/**
 * @brief Is the chord made up of only White Notes? or Only Black Notes or Mixed
 */
UENUM(BlueprintType)
enum class EAxMidiChordStructure : uint8
{
	ALLWHITENOTES = 0 UMETA(DisplayName = "ALL WHITE NOTES"),
	ALLBLACKNOTES = 1 UMETA(DisplayName = "ALL BLACK NOTES"),
	MIXEDNOTES = 2 UMETA(DisplayName = "MIXED NOTES"),
};


/**
 * Simple Structure to Represent a chord.
 * A Chord is a group of notes from the same track, playing at the same time.
 */
USTRUCT(BlueprintType)
struct AXMIDICORE_API FAxMidiChord 
{
	GENERATED_BODY()


	UPROPERTY()
	TArray<UAxMidiNote*> ChordNotes;

	UPROPERTY()
	EAxMidiChordType ChordType=EAxMidiChordType::CHORD;

	UPROPERTY()
	EAxMidiChordStructure ChordStructure = EAxMidiChordStructure::ALLWHITENOTES;

public:

	FAxMidiChord()
	{
	}

	/**
	 * @brief Creattes a FMidiChord object using a single note
	 * @param InNote 
	 */
	FAxMidiChord( UAxMidiNote* InNote)
	{
		if(!InNote)
			return;

		ChordNotes.Add(InNote);

		UpdateChordType();

		UpdateChordMakeUp();
	}


	FAxMidiChord(TArray<UAxMidiNote*> InMidiNotes)
	{
		if(!InMidiNotes.IsEmpty())
		{

			SetNotes(InMidiNotes);
		}
		
	}

	void Append(FAxMidiChord Other)
	{
	
		ChordNotes.Append(Other.ChordNotes);

		UpdateChordType();

		UpdateChordMakeUp();
	}

	/**
	 * @brief 
	 * @param InMidiNote 
	 * @param bSortAfterAdding Should we immediately sort by ascending order after adding.
	 */
	void AddNote(UAxMidiNote* InMidiNote,bool bSortAfterAdding)
	{
		
		ChordNotes.Add(InMidiNote);

		if(bSortAfterAdding)
			SortNotesByAscendingPitch();

		UpdateChordType();

		UpdateChordMakeUp();
	}

	void SetNotes(TArray<UAxMidiNote*> InMidiNotes)
	{
		//todo maybe try safe guard against a chord made up of notes from different tracks?
		ChordNotes=InMidiNotes;

		SortNotesByAscendingPitch();

		UpdateChordType();

		UpdateChordMakeUp();
	}

	//Sorts the Notes in ascending according to pitch
	//that is left to right, (0 to 128)
	void SortNotesByAscendingPitch()
	{
		//Sort them by pitch number (0 to 128)
		ChordNotes.Sort([](UAxMidiNote& A, UAxMidiNote& B)
		{
			return A.Properties.PitchNumber < B.Properties.PitchNumber;
		});
	}

	/**
	 * @brief Sorts by pitch (128 to 0)
	 */
	void SortNotesByDescendingPitch()
	{
		//Sort them by pitch number  (128 to 0)
		ChordNotes.Sort([](UAxMidiNote& A, UAxMidiNote& B)
		{
			return A.Properties.PitchNumber > B.Properties.PitchNumber;
		});
	}

	bool IsEmpty()
	{
		return ChordNotes.IsEmpty();
	}

	int32 Num()
	{
		return ChordNotes.Num();
	}

	void UpdateChordType()
	{
		int32 NumNotes=Num();

		if(NumNotes==1)
			ChordType=EAxMidiChordType::SINGLENOTE;
		else if(NumNotes==2)
			ChordType=EAxMidiChordType::INTERVAL;
		else if(NumNotes>=3)
			ChordType=EAxMidiChordType::CHORD;

	}

	void UpdateChordMakeUp()
	{
		bool bAllWhite=true;
		for (UAxMidiNote* Note : ChordNotes)
		{
			if(Note->GetPitchName().Contains("#"))
				bAllWhite=false;
		}

		if(bAllWhite)
		{
			ChordStructure = EAxMidiChordStructure::ALLWHITENOTES;

			return;
		}

		bool bAllBlack = true;
		for (UAxMidiNote* Note : ChordNotes)
		{
			if (!Note->GetPitchName().Contains("#"))
				bAllBlack = false;
		}

		if (bAllBlack)
		{
			ChordStructure = EAxMidiChordStructure::ALLBLACKNOTES;

			return;
		}



		ChordStructure = EAxMidiChordStructure::MIXEDNOTES;


	}

	/**
	 * @brief Gets the absolute pitch distance between the right most and left most notes in the chord
	 * @return 0 if this is not a chord with 2 or more keys. or number of keys between extremes
	 */
	int32 GetChordInterval()
	{
		if(ChordNotes.Num()<=1)
			return 0;

		return abs(ChordNotes.Last()->Properties.PitchNumber - ChordNotes[0]->Properties.PitchNumber);
	}
};
