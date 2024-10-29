#pragma once

#include "Runtime/Core/Public/Containers/UnrealString.h"
#include "Runtime/Engine/Public/Subsystems/GameInstanceSubsystem.h"
#include "Runtime/Core/Public/Math/Color.h"
#include "Runtime/Core/Public/UObject/NameTypes.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"

// Generated should be the last include
#include "EnemyAISubsystem.generated.h"

/**
 * Enemy AI Subsystem for enemy AI-related functions.
 */
UCLASS()
class TEAM13_GAME_API UEnemyAISubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "Debug")
		void DebugWithMessage(const FString& Message);

	UFUNCTION(BlueprintCallable, Category = "AISubsystem")
		void SpawnEnemy();

private:
	const FString EAS_TAG = "EAS: ";
	const FColor EAS_DEFAULT_COLOR = FColor::Purple;
	const float EAS_DEBUG_MESSAGE_LENGTH = 5.f;
};
