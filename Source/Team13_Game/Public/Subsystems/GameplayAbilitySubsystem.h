#pragma once

#include "Runtime/Core/Public/Containers/UnrealString.h"
#include "Runtime/Engine/Public/Subsystems/GameInstanceSubsystem.h"
#include "Runtime/Core/Public/Math/Color.h"
#include "Runtime/Core/Public/UObject/NameTypes.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"

// Generated should be the last include
#include "GameplayAbilitySubsystem.generated.h"

/**
 * Subsystem for all gameplay abilities.
 */
UCLASS()
class TEAM13_GAME_API UGameplayAbilitySubsystem : public UGameInstanceSubsystem
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "Debug")
    void DebugWithMessage(const FString& Message);

private:
    const FString GAS_TAG = "GAS: ";
    const FColor GAS_DEFAULT_COLOR = FColor::Green;
    const float GAS_DEBUG_MESSAGE_LENGTH = 5.f;
};