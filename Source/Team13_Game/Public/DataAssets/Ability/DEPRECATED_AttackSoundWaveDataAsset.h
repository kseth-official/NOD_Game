// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttackAbilityDataAsset.h"
#include "DEPRECATED_AttackSoundWaveDataAsset.generated.h"

/**
 * Data for RhythmAttackSoundWave.
 * DEPRECATED: Use blueprint data child of the same name instead.
 */
UCLASS(BlueprintType, Deprecated)
class TEAM13_GAME_API UDEPRECATED_AttackSoundWaveDataAsset : public UAttackAbilityDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Ability Constants", meta =
		(ToolTip = "The base damage inflicted by the sound wave.",
			ClampMin = 0.0))
	float BaseDamage;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Ability Constants", meta =
		(ToolTip = "The damage radius for the sound wave.",
			Units = "cm",
			ClampMin = 0.0))
	float DamageRadius;
};
