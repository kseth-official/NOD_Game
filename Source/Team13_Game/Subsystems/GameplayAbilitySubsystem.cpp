#include "GameplayAbilitySubsystem.h"

#include "Team13_Game/BlueprintFunctionLibraries/DebugUtilityLibrary.h"

void UGameplayAbilitySubsystem::DebugWithMessage(const FString& Message)
{
	UDebugUtilityLibrary::ScreenDebugWithTag(GAS_TAG, -1, GAS_DEBUG_MESSAGE_LENGTH, GAS_DEFAULT_COLOR);
}
