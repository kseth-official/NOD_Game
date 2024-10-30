// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MidiClasses/AxMidiAsset.h"
#include "AbilityDataAsset.generated.h"

/**
 * Base Data Asset For Gameplay Abilities.
 */
UCLASS(Abstract, Blueprintable, BlueprintType)
class TEAM13_GAME_API UAbilityDataAsset : public UDataAsset
{
    GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AbilityData", meta =
		(ToolTip = "The name for this particular ability."))
	FName AbilityName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MIDI", meta =
		(ToolTip = "MIDI Asset to use for the ability. Hard-reference since each ability always uses it."))
	TObjectPtr<UAxMidiAsset> MidiAsset;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MIDI", meta =
		(ToolTip = "The MIDI track within the MIDI asset to grab MIDI Notes."))
	FName MidiAssetTrack;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Sounds", meta =
		(ToolTip = "The sound to play for this ability. Hard-reference since each ability always uses it."))
	TObjectPtr<USoundBase> RhythmTrack;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Sounds", meta =
		(ToolTip = "The sound to play on ability success. Soft-Reference, so don't forget to load before use!"))
	TSoftObjectPtr<USoundBase> SuccessSound;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Sounds", meta =
		(ToolTip = "The sound to play on ability failure. Soft-Reference, so don't forget to load before use!"))
	TSoftObjectPtr<USoundBase> FailureSound;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Constants", meta =
		(ToolTip = "The amount of time until Sound Bar charges up again.",
			Units = "s",
			ClampMin = 0.0))
	float CooldownTime;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Constants", meta =
		(ToolTip = "The error margin within which the player must successfully hit the note for this ability.", 
			Units = "s",
			ClampMin = 0.0))
	float PerNoteErrorMargin;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Constants", meta =
		(ToolTip = "The proportion of the notes to get right to activate the ability.",
			ClampMin = 0.0,
			ClampMax = 1.0)
	)
	float SuccessfulActivationProportion;
};