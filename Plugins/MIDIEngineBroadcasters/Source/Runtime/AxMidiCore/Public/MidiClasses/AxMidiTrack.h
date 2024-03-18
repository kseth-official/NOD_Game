// Copyright Algosyntax 2023. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "MidiClasses/AxMidiAsset.h"
#include "MidiClasses/AxMidiNote.h"
#include "Curves/CurveFloat.h"
#include "AxMidiTrack.generated.h"

// FORWARD DECLARATIONS
class UAxMidiNote;


/**
 * @brief Think of a PitchName(eg C5) and it's row of notes. ,  it contains multiple C5 instances...
 *         We wish to support having multiple instances of C5 playing at the same time..
 *         Basically an array. We are avoiding the "nested containers" limitation with this struct.
 */
UCLASS(BlueprintType,DisplayName="Midi Pitch Row")
class AXMIDICORE_API UAxMidiPitchRow : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="MidiEngine")
	TArray<UAxMidiNote*> MidiNotes;

	/**
	 * @brief This function will insert a UAxMidiNote into
	 *		  the array,@MidiNotes, that holds the UAxMidiNotes.
	 *        And then set this as new Outer.
	 * @param MidiNote The MidiNote to insert.
	 */
	void InsertMidiNote(UAxMidiNote* MidiNote);

};


/**
 * Midi Track Class containing its UAxMidiNotes*
 */
UCLASS(BlueprintType,DisplayName="Midi Track")
class AXMIDICORE_API UAxMidiTrack : public UObject
{
	GENERATED_BODY()




protected:
	/**
	 * The Track Name/ID
	 * Use getter/setter.
	 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = MidiEngine)
	FString TrackName;

	/**
	 * @brief The Owning MidiAsset.
	 */
	UPROPERTY()
	UAxMidiAsset* MidiAsset;

	/**
	 * @brief Key is PitchName, like "C5".
	 *        Value is all instances of "C5" notes...
	 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = MidiEngine)
	TMap<FString, UAxMidiPitchRow*> PitchRowsMap;





public:
	


	/**
	 * @brief Curve Representing all PitchBend events...
	 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MidiEngine|CC Curves")
	UCurveFloat* PitchBendCurve;



public:
	friend class UAxMidiAsset;

public:
	UAxMidiTrack();

	/**
	 * @brief Initializes the MidiTrack.
	 *		  Sets a reference to the owning UAxMidiAsset in variable @MidiAsset
	 */
	void Init(FString InTrackName);

	/**
	 * @brief Gets all MidiNotes inside this track as an Array
	 * @return Array of MidiNotes
	 */
	UFUNCTION(BlueprintCallable, Category = MidiTrack)
	TArray<UAxMidiNote*> GetMidiNotesAsArray();

	/**
	 * @brief UAxMidiTrack is made up of UAxMidiNotes. This function will insert a UAxMidiNote into
	 *		  the array,@MidiNotes, that holds the UAxMidiNotes.
	 *		 
	 * @param MidiNote The MidiNote to insert.
	 */
	void InsertMidiNote(UAxMidiNote* MidiNote);

	//Getters & Setters
	FString GetTrackName();

	void SetTrackName(FString InTrackName);

	/**
	 * @brief Get's the latest MidiNote Inserted Into PitchRow like C5.
	 * @param PitchName to identify PitchRow like "C5"
	 * @param bRemoveNote if true , will remove the MidiNote from the MidiTrack then return it. 
	 * @return 
	 */
	UAxMidiNote* GetLastNoteFromPitchRow(FString PitchName,bool bRemoveNote=false);

	/**
	 * @brief Will Rename MidiNote and PitchRow Objects and set the outer to null.
	 *        This ensures we free up names whenever we no longer need the objects so we can reimport or otherwise.
	 */
	void RandomRenameNotes();
};
