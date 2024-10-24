#pragma once

#include "Runtime/Core/Public/Containers/UnrealString.h"
#include "Runtime/Engine/Public/Subsystems/GameInstanceSubsystem.h"
#include "Runtime/Core/Public/Math/Color.h"
#include "Runtime/Core/Public/UObject/NameTypes.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "TimerManager.h"
#include "DataAssets/RhythmDataAsset.h"

// Generated should be the last include
#include "RhythmAbilitySubsystem.generated.h"

/**
 * Subsystem for all rhythm utilities.
 */
UCLASS()
class TEAM13_GAME_API URhythmAbilitySubsystem : public UGameInstanceSubsystem
{
    GENERATED_BODY()

public:
    //DECLARE_DYNAMIC_DELEGATE(FJudgementDelegate);

    UFUNCTION(BlueprintCallable, Category = "Debug")
    void DebugWithMessage(const FString& Message);

    //UFUNCTION(BlueprintCallable, Category = "ScreenDebug",
    //    meta = (ToolTip = ""))
    //void StartTimer(const URhythmDataAsset& RhythmData, const )

private:
    const FString RAS_TAG = "RAS: ";
    const FColor RAS_DEFAULT_COLOR = FColor::Orange;
    const float RAS_DEBUG_MESSAGE_LENGTH = 5.f;
};