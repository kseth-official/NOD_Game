// Copyright Algosyntax 2022. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Settings/AxMidiEngineCoreSettings.h"
#include "Subsystems/EngineSubsystem.h"
#include "AxMidiEngineCoreSubsystem.generated.h"



namespace smf
{
	class MidiEvent;
	class MidiFile;
}

class UAxMidiAsset;
class UAxMidiNote;
class UAxMidiTrack;


/**
 * @brief This Class is meant as a bridge between the SMF MIDI library API and Unreal Engine API.
 * If Unreal Engine wants to interface with the pure C++ Library it should do it through this Class.
 * This Class must define all functions UE API will need to work with the Midi File.
 * Helper Functions, Reading and Writing must be done in this class.
 * In Turn, Unreal Engine has to create it's own version of the MIDIFile asset. UAxMidiAsset.
 * It will copy all the data it needs from the C++ MIDIFile object through this Class.
 */
UCLASS(DisplayName="Midi Engine Core Subsystem")
class AXMIDICORE_API UAxMidiEngineCoreSubsystem : public UEngineSubsystem
{
	GENERATED_BODY()


private:

	UPROPERTY()
	UAxMidiEngineCoreSettings* MidiEngineCoreSettings;

	/**
	 * @brief Eg Maps C5 to 60.
	 */
	UPROPERTY()
	TMap<FString, int32> PitchNamesToNumberMap;


public:

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	void InitPitchNamesMap();

	/**
	 * @brief Takes in a pitch name, like "C5" and returns 60. (Depends on middle C preferences).
	 *
	 * @param InPitchName The PitchName you'd like to get the PitchNumber for...
	 * @param OutPitchNumber Pitch number between 0 and 128. (MIDI Standard). will be set to NAN if PitchName is invalid.
	 * @return false if failed, true otherwise.
	 */
	bool GetPitchNumberFromName(FString InPitchName,int& OutPitchNumber);

	/**
	 * @brief Static Function that will convert a KeyNumber/NoteNumber like 60 to pitch name like "C5"
	 *        Middle is determined by Project Settings> MidiEngine
	 * @param PitchNumber like 60 or 72 etc..
	 * @return Note Pitch name like A#0
	 */
	UFUNCTION(BlueprintCallable, Category = MidiEngine)
	FString GetPitchNameFromNumber(int PitchNumber);

	/**
	 * @brief Utility function to Create a new MidiNote for live performance or playback
	 * @param InOuter
	 * @param InVelocity 0-127
	 * @param InPitch PitchNumber , eg 60 for C5.
	 * @return
	 */
	UFUNCTION(BlueprintCallable, Category = MidiEngine)
	UAxMidiNote* NewLivePerformanceNote(UAxMidiTrack* InOuter, int InPitch, int InVelocity);


	//BEGIN SMF Interface
private:
	/**
	 * @brief This function is the pure C++ SMF MIDI Library API Calls to parse the midi file from file path.
	 *		  All the code in this function should be able to work even outside Unreal Engine.
	 *		  Basically we call the API functions to process the midifile from path, and it will tell
	 *		  us if the midi file was read successfully or not.
	 * @param midiFileName the MIDI file path to pass by reference to the SMF Midi library
	 * @return True if file read  successfully, false otherwise.
	 */
	bool SmfReadMidiFile(smf::MidiFile& smfMidiFileObj, const FString& midiFileName);

public:



	/**
	 * @brief Will initialize this UAxMidiAsset with a .MID file from disk.
	 *        You can do this at runtime to create MidiAssets from files on disk.
	 * @param FilePath Full path to the .MIDI File from disk..
	 * @return true if successful, false if unsuccessful
	 */
	UFUNCTION(BlueprintCallable, Category = "MidiAsset")
	UAxMidiAsset* CreateMidiAssetFromFile(FString FilePath);


	/**
	 * @brief This function will take a UAxMidiAsset from the Factory, and initialize it
	 *		  with the MIDI File from Disk.
	 *		  Why not UFUNCTION: EObjectFlags doesn't work with UFUNCTION for some reason. create a wrapper instead
	 *
	 * @param MidiFilePath The MIDI File Path.
	 * @return true A new UAxMidiAsset object
	 */
	UAxMidiAsset* NewMidiAssetFromMidiFile(FString MidiFilePath, UObject* InParent=nullptr, UClass* InClass=nullptr, FName InName=NAME_None, EObjectFlags InFlags=RF_NoFlags);

	/**
	 * @brief Takes an smf MidiEvent and Creates a UAxMidiNote* from it.
	 *		  In other words; It converts an smf::MidiEvent into a UAxMidiNote
	 * @param smfMidiEvent the smfMidiEvent to parse,process and convert into UAxMidiNote*
	 * @return the newly created UAxMidiNote;
	 */
	UAxMidiNote* CreateMidiNote(smf::MidiEvent* smfMidiEvent);


	//END SMF Interface.


	//Begin Utility functions



	
};
