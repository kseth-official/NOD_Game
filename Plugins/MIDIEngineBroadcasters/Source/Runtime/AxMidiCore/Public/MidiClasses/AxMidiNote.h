// Copyright Algosyntax 2023. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "MidiClasses/AxMidiAsset.h"
#include "AxMidiNote.generated.h"


class UAxMidiTrack;



USTRUCT(BlueprintType,DisplayName="MidiNoteProperties")
struct FAxMidiNoteProperties
{
	GENERATED_BODY()

	/*
	 * The Note/MIDI number for this note. Like 60, or 72 etc..
	 * Equal to the PitchName(C5) after conversion.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MidiEngine)
	int PitchNumber = 0;

	/**
	 * @brief PitchName like C5, A4 , etc...
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MidiEngine)
	FString PitchName;

	/**
	 * @brief The time in seconds, that this MidiNote Starts playing.
	 *		  When the MidiNote turns ON.
	 *		  Eg 7.435 seconds.
	 *		  if = -1 , that means this is a live performance triggered note, with unknown start/stop/duration times.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MidiEngine)
	double StartTime = 0.f;

	
	/*
	 *  Duration between start time and EndTime
	 *  if = -1 , that means this is a live performance triggered note, with unknown start/stop/duration times.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MidiEngine)
	double Duration = 0.5f;

	/**
	 * @brief The time in seconds, that this MidiNote Stops playing.
	 *		  When the MidiNote turns OFF.
	 *		  if = -1 , that means this is a live performance triggered note, with unknown start/stop/duration times.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MidiEngine)
	double StopTime = 0.f;

	//NoteVelocity
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MidiEngine)
	float Velocity = 100.f;
};


/**
 * A UAxMidiNote is an instance of a playing note inside a UAxMidiTrack.
 * Contains it's StartTime, Duration,Endtime and NoteVelocity.
 * Contains Note Id In PianoScale Form , eg C5
 * Also Contains the name/id of the track it plays in, eg "Kick"
 */
UCLASS(BlueprintType,DisplayName="MidiNote")
class AXMIDICORE_API UAxMidiNote : public UObject
{
	GENERATED_BODY()


public:

	UAxMidiNote();

	/**
	 * @brief Data About the MidiNote
	 *        PitchName     : Eg C5,A#1
	 *        Duration : the total time the midi note will be playing
	 *        StopTime : the time the Note OFF event occurs
	 *        Velocity : Note Velocity Eg 120,
	 *        MidiNote : the actual UAxMidiNote* 
	 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, DisplayName="Note Properties", Category = MidiEngine)
	FAxMidiNoteProperties Properties;

	//The MidiTrack This MidiNote belongs to
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = MidiEngine)
	UAxMidiTrack* MidiTrack;

	//The Owning MidiAsset
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = MidiEngine)
	UAxMidiAsset* MidiAsset;


	/**
	 * @brief Gets the name of the track this Midinote is in
	 * @return 
	 */
	UFUNCTION(BlueprintCallable, Category=MidiEngine)
	FString GetMidiTrackName();


	/**
	 * @brief Gets the UAxMidiTrack Object this UAxMidiNote is in.
	 * @return
	 */
	UFUNCTION(BlueprintCallable, Category = MidiEngine)
	UAxMidiTrack* GetMidiTrackObject();


	/**
	 * @brief Gets the UAxMidiAsset this UAxMidiNote is in
	 * @return
	 */
	UFUNCTION(BlueprintCallable, Category = MidiEngine)
	UAxMidiAsset* GetMidiAssetObject();

	UFUNCTION(BlueprintCallable, Category = MidiEngine, meta = (Keywords = "pitch velocity start stop "))
	FAxMidiNoteProperties& GetMidiNoteProperties();

	/**
	 * @brief Will return the start time after adjusting to the submitted playrate.
	 * @param InPlayRate The Rate/tempo to adjust the start time to.
	 * @return 
	 */
	UFUNCTION(BlueprintCallable, Category = MidiEngine)
	float GetAdjustedStartTime(float InPlayRate);

	/**
	 * @brief Will return the stop time after adjusting to the submitted Playrate.
	 * @param InPlayRate The Rate/tempo to adjust the stop time to.
	 * @return
	 */
	UFUNCTION(BlueprintCallable, Category = MidiEngine)
	float GetAdjustedStopTime(float InPlayRate);

	/**
	 * @brief Will return the duration after adjusting to the submitted playrate.
	 * @param InPlayRate The Rate/tempo to adjust the duration to.
	 * @return
	 */
	UFUNCTION(BlueprintCallable, Category = MidiEngine)
	float GetAdjustedDuration(float InPlayRate);

	/**
	 * @brief Returns the pitch eg 60
	 * @return 
	 */
	UFUNCTION(BlueprintCallable, Category = UAxMidiNote)
	int32 GetPitch()
	{
		return Properties.PitchNumber;
	}

	/**
	 * @brief Returns the pitch name, eg C5;
	 * @return
	 */
	UFUNCTION(BlueprintCallable, Category = UAxMidiNote)
	FString GetPitchName()
	{
		return Properties.PitchName;
	}
	

public:
	/**
	 * @brief Function/Predicate to help you sort MidiNotes by start times in Ascending order.
	 * @param MidiNoteA The Note to compare with note B
	 * @param MidiNoteB The note to compare with A
	 * @return true if MidiNoteA starts playing before MidiNoteB.
	 */
	static bool CompareStartTimesAscending(const UAxMidiNote* MidiNoteA, const UAxMidiNote* MidiNoteB)
	{
		return MidiNoteA->Properties.StartTime < MidiNoteB->Properties.StartTime;
	}


};
