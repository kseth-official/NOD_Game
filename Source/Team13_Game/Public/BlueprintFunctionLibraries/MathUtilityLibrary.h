#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "MathUtilityLibrary.generated.h"

UCLASS()
class TEAM13_GAME_API UMathUtilityLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Polar", BlueprintPure)
    static FVector2D FindRandomPositionOnCircle(const FVector2D& Center, const float& Radius);

private:
};
