#include "RhythmAbilitySubsystem.h"

#include "Kismet/KismetMathLibrary.h"
#include "Team13_Game/BlueprintFunctionLibraries/DebugUtilityLibrary.h"

void URhythmAbilitySubsystem::DebugWithMessage(const FString& Message)
{
	UDebugUtilityLibrary::ScreenDebugWithTag(RAS_TAG, -1, RAS_DEBUG_MESSAGE_LENGTH, RAS_DEFAULT_COLOR);
}