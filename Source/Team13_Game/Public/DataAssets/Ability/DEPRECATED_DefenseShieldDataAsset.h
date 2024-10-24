// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DefenseAbilityDataAsset.h"
#include "DEPRECATED_DefenseShieldDataAsset.generated.h"

/**
 * Data for RhythmDefenseShield.
 * DEPRECATED: Use blueprint data child of the same name instead.
 */
UCLASS(BlueprintType, Deprecated)
class TEAM13_GAME_API UDEPRECATED_DefenseShieldDataAsset : public UDefenseAbilityDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Ability Constants", meta =
		(ToolTip = "The length the shield should stay activated for.",
			Units = "s",
			ClampMin = 0.0))
	float ShieldTime;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Ability Constants", meta =
		(ToolTip = "Multipler for the amount of damage player takes on shield activation.",
			ClampMin = 0.0))
	float DamageMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Ability Constants", meta =
		(ToolTip = "Multipler for how the player's speed should change on shield activation.",
			ClampMin = 0.0))
	float SpeedMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Ability Constants", meta =
		(ToolTip = "The tint to apply on Shield Activation."))
	FLinearColor TintColor;
};