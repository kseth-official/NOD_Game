/*******************************************************************************
The content of this file includes portions of the proprietary AUDIOKINETIC Wwise
Technology released in source code form as part of the game integration package.
The content of this file may not be used without valid licenses to the
AUDIOKINETIC Wwise Technology.
Note that the use of the game engine is subject to the Unreal(R) Engine End User
License Agreement at https://www.unrealengine.com/en-US/eula/unreal
 
License Usage
 
Licensees holding valid licenses to the AUDIOKINETIC Wwise Technology may use
this file in accordance with the end user license agreement provided with the
software or, alternatively, in accordance with the terms contained
in a written agreement between you and Audiokinetic Inc.
Copyright (c) 2024 Audiokinetic Inc.
*******************************************************************************/

#include "Platforms/AkPlatformInfo.h"

#if WITH_EDITORONLY_DATA
FWwiseSharedPlatformId UAkPlatformInfo::GetSharedPlatformInfo(const FString& PlatformName)
{
	if (UnrealTargetNameToSharedPlatformId.Contains(PlatformName))
	{
		return UnrealTargetNameToSharedPlatformId[PlatformName];
	}

	const auto ProjectDatabase = FWwiseProjectDatabase::Get();
	if (UNLIKELY(!ProjectDatabase))
	{
		UE_LOG(LogAkAudio, Warning, TEXT("ProjectDatabase is not initialized"));
		return {};
	}

	const FWwiseDataStructureScopeLock DataStructure(*ProjectDatabase);
	auto Platforms = DataStructure.GetPlatforms();

	if (const auto* CurrentPlatformInfo = GetAkPlatformInfo(PlatformName))
	{
		TArray<FString> AvailablePlatforms;
		for (auto WwisePlatform : Platforms)
		{
			AvailablePlatforms.Add(WwisePlatform.GetPlatformName().ToString());
		}
		const FString WwisePlatformName = CurrentPlatformInfo->GetWwiseBankPlatformName(AvailablePlatforms);
		for (auto WwisePlatform : Platforms)
		{
			if (WwisePlatform.GetPlatformName().ToString() == WwisePlatformName)
			{
				UnrealTargetNameToSharedPlatformId.Add(PlatformName, WwisePlatform);
				return UnrealTargetNameToSharedPlatformId[PlatformName];
			}
		}
		UE_LOG(LogAkAudio, Warning, TEXT("Could not find parsed platform that matches %s"), *CurrentPlatformInfo->WwisePlatform);
		return {};
	}

	UE_LOG(LogAkAudio, Warning, TEXT("Could not find platform info for %s"), *PlatformName)
	return {};
}
#endif