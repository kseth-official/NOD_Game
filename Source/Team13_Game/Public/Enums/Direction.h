// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Direction.generated.h"

/**
 * An Enum representing 8-Directional movement directions.
 */
UENUM(BlueprintType)
enum class EDirection : uint8
{
	NorthWest,
	North,
	NorthEast,
	East,
	SouthEast,
	South,
	SouthWest,
	West
};