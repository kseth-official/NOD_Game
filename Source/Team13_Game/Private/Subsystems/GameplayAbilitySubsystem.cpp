#include "Subsystems/GameplayAbilitySubsystem.h"
#include "BlueprintFunctionLibraries/DebugUtilityLibrary.h"

void UGameplayAbilitySubsystem::DebugWithMessage(const FString& Message)
{
	UDebugUtilityLibrary::ScreenDebugWithTag(GAS_TAG, -1, GAS_DEBUG_MESSAGE_LENGTH, GAS_DEFAULT_COLOR, Message);
}
