#include "EnemyAISubsystem.h"

#include "Team13_Game/BlueprintFunctionLibraries/DebugUtilityLibrary.h"

void UEnemyAISubsystem::DebugWithMessage(const FString& Message)
{
	UDebugUtilityLibrary::ScreenDebugWithTag(EAS_TAG, -1, EAS_DEBUG_MESSAGE_LENGTH, EAS_DEFAULT_COLOR);
}

void UEnemyAISubsystem::SpawnEnemy()
{
	// Insert spawn code here
}