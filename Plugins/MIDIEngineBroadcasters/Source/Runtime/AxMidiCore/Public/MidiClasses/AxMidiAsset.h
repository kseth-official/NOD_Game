// Copyright Algosyntax 2023. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AxMidiAsset.generated.h"

class UAxMidiNote;
class UAxMidiTrack;
class UCurveFloat;
class UAxMidiEngineCoreSubsystem;

/**
 * The UAxMidiAsset contains the UAxMidiTracks which Contain the UAxMidiNotes
 * UAxMidiAsset->UAxMidiTrack->UAxMidiNote
 */
UCLASS(Blueprintable,BlueprintType,DisplayName="Midi Asset")
class AXMIDICORE_API UAxMidiAsset : public UObject
{

	GENERATED_BODY()


protected:

	UPROPERTY()
	UAxMidiEngineCoreSubsystem* MidiEngineCoreSubsystem;

public:

	/**
	 * @brief The name of the Midi asset. Inherited from the original MIDI file name.
	 */
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "MidiAsset | Metadata")
	FString Name;

protected:
	/**
	 * @brief The total duration of the Midifile, in seconds. Use the Getter
	 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MidiAsset | Metadata")
	double Duration = 0;

public:
	/*
	 * Default 4/4 time signature
	 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MidiAsset | Metadata")
	int TimeSignatureNumerator=4;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MidiAsset | Metadata")
	int TimeSignatureDenominator=4;

	/**
	 * @brief Curve Representing BPM of the MidiAsset.
	 * Call GetBPM() Function to get the BPM at a certain time.
	 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MidiAsset | MetaEvents",DisplayName="BPM Curve")
	UCurveFloat* BPMCurve;


#if WITH_EDITORONLY_DATA

	//We'll temporarily save the extension of the file selected for reimport so we can check in Factory reimport func
	UPROPERTY(Transient)
	FString ReimportPath;

#endif

	/**
	 * @brief The original file path of the .mid on disk.
	 *		 Stored on asset creation, used and updated for reimporting.
	 *		 Used in ReImporter UFactory.
	 */
	UPROPERTY(VisibleAnywhere, Category = "MidiAsset | EditorMetadata")
	FString SourceMidiFilePath;


	//NB:Call sort function somewhere before using this queue.
	/**
	 * @brief List of all MidiNotes in this MidiAsset sorted by StartTime....
	 */
	UPROPERTY()
	TArray<UAxMidiNote*> MidiNotesQueue;

	UPROPERTY()
	bool bNotesSorted=false;



	/**
	 * @brief You can define Loop Sections for your MidiAsset Playback.
	 *        Eg, Define the "intro" section , 0 to 1s.
	 *		  You can then loop that section during playback and decide when to move forward.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MidiAsset | Sections")
	TMap<FString, FFloatRange> LoopSections;

private:

	


	/**
	 * This data structure holds a list of UAxMidiTracks in the UAxMidiAsset.
	 * Key is Track Name and Value is the actual MidiTrack.
	 * NB: We did not use a TARRAY so that we could save a reference to a UAxMidiTrack, using it's name rather than the actual pointer.
	 * Call @related GetMidiTracksAsArray() to easily get the tracks as an array.
	 * Some systems in the Editor work better if we save an FString(key) than the UAxMidiTrack*
	 * TODO: FString is case insensitive in a map. Bass and bass will override each other.
	 */
	UPROPERTY(VisibleAnywhere, Category = "MidiAsset | Tracks")
	TMap<FString, UAxMidiTrack*> MidiTracksMap;


public: //PUBLIC FUNCTIONS

	UAxMidiAsset();


	/**
	 * @brief Will Delete all MidiTracks in this asset and reset it to it's default state.
	 */
	void Flush();

private:

	/**
	 * @brief Will free up the UObject names of the UAxMidiNotes so that we can rename after some change.
	 */
	void RandomRenameNotes();

public:

	
	/**
	 * @brief Inserts a UAxMidiTrack into the MidiAsset.
	 *        Ensure your MidiAsset has it's name Set before calling this function.
	 *		  If the TrackName is empty / not defined, insert will fail.
	 * @param MidiTrack the UAxMidiTrack to insert
	 * @return True if insertion success.
	 */
	bool InsertTrack(UAxMidiTrack* MidiTrack);

	/**
	 * @brief Get's a MidiTrack using the TrackName (FString);
	 * @param TrackName 
	 * @return The UAxMidiTrack* if found.
	 */
	UFUNCTION(BlueprintCallable, Category = MidiAsset)
	UAxMidiTrack* GetMidiTrack(FString TrackName);

	/**
	 * @brief Returns A Reference to the Map Containing all the miditracks.
	 * @return 
	 */
	UFUNCTION(BlueprintCallable, Category = MidiAsset)
	TMap<FString, UAxMidiTrack*>& GetMidiTracksMapRef();

	/**
	 * @brief Will return an array of all the UAxMidiTracks in this Asset.
	 * @return TArray of UAxMidiTrack*
	 */
	UFUNCTION(BlueprintCallable, Category = MidiAsset)
	TArray<UAxMidiTrack*> GetMidiTracksAsArray();



	/**
	 * @brief Computes the MIDI's total duration and returns it. 
	 * @return Duration in Seconds
	 */
	double ComputeDuration();

	/**
	 * @brief Returns the MIDIAsset's Duration. If it's 0, it will calculate it first.
	 * @return Duration in Seconds
	 */
	UFUNCTION(BlueprintCallable, Category = MidiAsset)
	double GetDuration();

	/**
	 * @brief Duration will differ if PlayRate != 1.0. this function takes Playrate into consideration.
	 * @param InPlayRate 
	 * @return 
	 */
	UFUNCTION(BlueprintCallable, Category = MidiAsset)
	double GetAdjustedDuration(float InPlayRate);


	/**
	 * @brief Will Shift All MidiNotes in the MidiAsset by the amount and direction specificed by NumSemitones.
	 *        
	 * @param NumSemitones Number of semitones to shift by. If positive, shifts up, negative shifts down. 12 semitones is an octave.
	 */
	UFUNCTION(BlueprintCallable, Category = MidiAsset)
	void ShiftNotes(int NumSemitones);

	/**
	 * @brief Gets the BPM at a certain time
	 * @param InTime The time to get the BPM at.
	 * @return 0 if no BPM info found, and a float BPM if found. Example 60.0 for 60BPM
	 */
	UFUNCTION(BlueprintCallable, Category = MidiAsset)
	float GetBPM(float InTime);

	
	/**
	 * @brief Call this when you done inserting UAxMidiNotes into the MidiAsset/modifying them.
	 *        This function will sort them by starttime and place them in the SortedMidiNotesQueue arrayS
	 */
	void SortMidiNotesQueue();

};
