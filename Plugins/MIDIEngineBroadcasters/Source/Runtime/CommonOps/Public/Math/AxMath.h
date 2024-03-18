// Copyright Algosyntax 2023. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AxMath.generated.h"




/**
 * 
 */
UCLASS()
class COMMONOPS_API UAxMath : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	/**
	 * Rounds Number To The Nearest Of A Multiple.
	 * Example: Round to the Nearest Multiple of 11, or 33 or whatever number you want.
	 * todo:verify this is reliable. 
	 */
	UFUNCTION(BlueprintCallable, Category = "CommonOps|MathExtensions")
	static int RoundToNearestMultiple(int NumToRound,int Multiple);

	

	/**
	 * @brief Lerps a tranform
	 * @param A 
	 * @param B 
	 * @param Alpha 
	 * @param bSlerp if true will expensive SLerp for rotation, else Fast Lerp.
	 * @return 
	 */
	UFUNCTION(BlueprintCallable, Category = "Utilities|Lerp")
	static FTransform LerpTransform(const FTransform& A, const FTransform& B, float Alpha,bool bSlerp=true);

	/** Generate random value within the specified FInt32Range */
	UE_NODISCARD static FORCEINLINE int32 RandomInRange(const FInt32Range& Range)
	{
		return FMath::RandRange(Range.GetLowerBoundValue(), Range.GetUpperBoundValue());
	}

	/** Generate random value within the specified FFloatRange */
	UE_NODISCARD static FORCEINLINE float RandomInRange(const FFloatRange& Range)
	{
		return FMath::FRandRange(Range.GetLowerBoundValue(), Range.GetUpperBoundValue());
	}
};

