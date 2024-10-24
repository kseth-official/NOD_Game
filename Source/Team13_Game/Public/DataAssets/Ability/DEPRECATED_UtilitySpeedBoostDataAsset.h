// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UtilityAbilityDataAsset.h"
#include "DEPRECATED_UtilitySpeedBoostDataAsset.generated.h"

/**
 * Data for RhythmUtilitySpeedBoost.
 * DEPRECATED: Use blueprint data child of the same name instead.
 */
UCLASS(BlueprintType, Deprecated)
class TEAM13_GAME_API UDEPRECATED_UtilitySpeedBoostDataAsset : public UUtilityAbilityDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Ability Constants", meta =
		(ToolTip = "The length the speed boost stays activated.",
			Units = "s",
			ClampMin = 0.0))
	float SpeedBoostTime;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Ability Constants", meta =
		(ToolTip = "Multipler for how the player's speed should change on speed boost activation.",
			ClampMin = 0.0))
	float SpeedMultiplier;
};
