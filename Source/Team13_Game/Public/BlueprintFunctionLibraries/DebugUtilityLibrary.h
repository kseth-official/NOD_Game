#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DebugUtilityLibrary.generated.h"

UCLASS()
class TEAM13_GAME_API UDebugUtilityLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "ScreenDebug",
        meta = (ToolTip = "Create an OnScreenDebugMessage Prefixed with 'Tag : '"))
    static void ScreenDebugWithTag(
        const FString& Tag,
        const int32& Key = -1,
        const float& TimeToDisplay = 5.f,
        const FColor& DisplayColor = FColor::Black,
        const FString& DebugMessage = "",
        const bool& bNewerOnTop = true,
        const FVector2D& TextScale = FVector2D::UnitVector
    );

private:
};
