#include "DebugUtilityLibrary.h"

void UDebugUtilityLibrary::ScreenDebugWithTag(const FString& Tag, const int32& Key, const float& TimeToDisplay,
	const FColor& DisplayColor, const FString& DebugMessage, const bool& bNewerOnTop, const FVector2D& TextScale)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(
			Key,
			TimeToDisplay,
			DisplayColor,
			Tag + " : " + DebugMessage,
			bNewerOnTop,
			TextScale
		);
	}
}
