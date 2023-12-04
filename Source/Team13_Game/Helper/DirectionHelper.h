// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DirectionHelper.generated.h"

/**
 * This is a Helper Blueprint Library for direction related calculations.
 */
UCLASS()
class TEAM13_GAME_API UDirectionHelper : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, Category = "Helper")
	static bool IsFacingToSide(float vx, float vy);

	UFUNCTION(BlueprintCallable, Category = "Helper")
	static bool IsFacingFront(float vx, float vy);

	UFUNCTION(BlueprintCallable, Category = "Helper")
	static bool IsFacingBack(float vx, float vy);

	UFUNCTION(BlueprintCallable, Category = "Helper")
	static bool IsFacingToBackAndSide(float vx, float vy);

	UFUNCTION(BlueprintCallable, Category = "Helper")
	static bool IsFacingToFrontAndSide(float vx, float vy);

};
