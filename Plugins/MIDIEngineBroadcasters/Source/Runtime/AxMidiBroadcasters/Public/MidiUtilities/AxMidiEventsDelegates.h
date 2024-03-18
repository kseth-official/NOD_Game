// Copyright Algosyntax 2022. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AxMidiEventsDelegates.generated.h"





/**
 * @brief This is just a dummy class to allow us to declare/define our delegates in this header.
 *        You can rename it if desired since no code should be using the class, just the following delegates.
 *		  The reason you need the class is UBT or UAT won't compile Delegates if there's no class with "GENERATED_BODY".
 *		  This is one of those weird Unreal Engine API designs.
 */
UCLASS()
class AXMIDIBROADCASTERS_API UAxMidiEventsDelegates : public UObject
{
	GENERATED_BODY()

};



