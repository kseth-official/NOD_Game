// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actors/Characters/BaseGamePaperZDCharacter.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DirectionHelper.generated.h"

/**
 * Static Helper Functions For Direction Calculations
 */
UCLASS()
class TEAM13_GAME_API UDirectionHelper : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/**
	* 8-directions in an array.
	*
	* Starts with East to allow bitwise optimizations during direction checking.
	* Breaks convention used in EDirection where we start with NorthWest, but worth it for the bitwise optimization.
	*/
	static TArray<EDirection> Directions;

	/**
	* 2D Vectors To Logical Direction Mappings
	*/
	static TMap<FVector2D, EDirection> TwoDVecToDirection;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "DirectionHelper", meta = 
		(Tooltip = "Converts the facing direction to a corresponding five direction index. 0 -> Facing East or West, 1 -> Facing South, 2 -> Facing North, 3 -> Facing SouthEast or SouthWest, 4 -> Facing NorthEast or NorthWest"))
	static uint8 FacingDirectionToIndex(const ABaseGamePaperZDCharacter* Character);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "DirectionHelper", meta =
		(Tooltip = "Returns a map of 2D normal vectors in the XY plane to their corresponding direction."))
	static TMap<FVector2D, EDirection> GetTwoDVecToDirection();
};
