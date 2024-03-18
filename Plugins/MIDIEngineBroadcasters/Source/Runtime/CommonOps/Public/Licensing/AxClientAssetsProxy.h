// Copyright Algosyntax 2023. All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Misc/MessageDialog.h"


enum class EAxAssetAuthState : uint8
{
	TRIAL,
	LOCKED ,
	UNLOCKED ,
	
};

struct FAxAssetAuthStateInfo
{

	int32 RemoteAuthID=-1;

	//Locked by default
	EAxAssetAuthState AuthState=EAxAssetAuthState::LOCKED;

	FString AuthReasonTitle="Feature Locked";

	//Show a message to the user on why you're locked and what to do about it.
	FString AuthReasonMessage="Please Login through the Auth Client To Unlock.";

public:
	FAxAssetAuthStateInfo(){}

	FAxAssetAuthStateInfo(int32 InRemoteAuthID)
	{
		RemoteAuthID=InRemoteAuthID;
	}

	FAxAssetAuthStateInfo(int32 InRemoteAuthID, EAxAssetAuthState InAuthState)
	{
		RemoteAuthID = InRemoteAuthID;

		AuthState=InAuthState;
	}



	//for uniqueness check RemoteAuth only
	bool operator==(const FAxAssetAuthStateInfo& Other) const
	{
		return RemoteAuthID == Other.RemoteAuthID;
	}

	
};


/**
 * Facilitates communication between Licensing Plugins and the Licensed Plugins.
 */
class COMMONOPS_API FAxClientAssetsProxy
{
private:


	inline static TArray<FAxAssetAuthStateInfo> AssetsAuthArray;

private:

	

public:


	//Messages to show when pie ends.
	inline static TArray<FAxAssetAuthStateInfo> AssetsAuthEndPieAuthStates;


	/**
	 * @brief By default everything will be locked.
	 *       Careful when calling this when shipping source versions.
	 * @param InRemoteAuthID
	 * @return
	 */
	static FAxAssetAuthStateInfo GetAssetAuthState(int32 InRemoteAuthID)
	{
		FAxAssetAuthStateInfo OutState;

		for (FAxAssetAuthStateInfo& AuthState : AssetsAuthArray)
		{
			if (InRemoteAuthID == AuthState.RemoteAuthID)
				OutState = AuthState;
		}

		return OutState;

	}

	static void ShowAssetAuthStateMessage(FAxAssetAuthStateInfo InAuthStateInfo)
	{

		FText Title = FText::FromString(InAuthStateInfo.AuthReasonTitle);

		FMessageDialog::Open(EAppMsgType::Ok, FText::FromString(InAuthStateInfo.AuthReasonMessage),&Title);

	}

	
	/**
	 * @brief Adds a Delayed Auth Message Triggered on endplay
	 * @param InEndPlayAuthStateInfo Message to show on end play about an asset. 
	 */
	static void AddDelayedAuthStateMessage(FAxAssetAuthStateInfo InEndPlayAuthStateInfo)
	{
		//Only one message allowed per asset.
		AssetsAuthEndPieAuthStates.AddUnique(InEndPlayAuthStateInfo);
	}

	static void SetAssetAuthState(FAxAssetAuthStateInfo InAuthState)
	{
		// Find existing state(prevent dupplicate).
		for (FAxAssetAuthStateInfo& AuthStateInfo : AssetsAuthArray)
		{
			//will trigger ==operator.
			if (AuthStateInfo == InAuthState)
			{
				// If found, update it, 
				AuthStateInfo = InAuthState;

				return;
			}
		}

		// If not found, add new one
		AssetsAuthArray.Add(InAuthState);
	}
	

};
