// Copyright Algosyntax 2023. All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"



UENUM(BlueprintType)
enum  class  EAxTransformSpace : uint8
{
	LOCAL,
	GLOBAL,
	WORLD

};



/**
 * @brief Following a piano convention,
 * a musical note can be White or Black.
 * Sharps/Flats are Black, and the rest are White.
 */
UENUM(BlueprintType)
enum class EAxMusicalPitchColor :uint8
{
	UNDEFINED,
	WHITE,
	BLACK
};