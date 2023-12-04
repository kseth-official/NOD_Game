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
	static bool IsFacingToSide(float ax, float ay);

	UFUNCTION(BlueprintCallable, Category = "Helper")
	static bool IsFacingFront(float ax, float ay);

	UFUNCTION(BlueprintCallable, Category = "Helper")
	static bool IsFacingBack(float ax, float ay);

	UFUNCTION(BlueprintCallable, Category = "Helper")
	static bool IsFacingToBackAndSide(float ax, float ay);

	UFUNCTION(BlueprintCallable, Category = "Helper")
	static bool IsFacingToFrontAndSide(float ax, float ay);

};
