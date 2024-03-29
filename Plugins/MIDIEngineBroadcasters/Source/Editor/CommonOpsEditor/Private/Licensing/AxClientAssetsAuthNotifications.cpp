// Copyright Algosyntax 2023. All Rights Reserved


#include "Licensing/AxClientAssetsAuthNotifications.h"

#include "Licensing/AxClientAssetsProxy.h"

void FAxClientAssetsAuthNotifications::ShowDelayedClientAssetNotifications(bool bIsSimulating)
{

	FString DialogMessages;
	for (FAxAssetAuthStateInfo& State : FAxClientAssetsProxy::AssetsAuthEndPieAuthStates)
	{
		DialogMessages+=("\n"+ State.AuthReasonMessage);

	}
	
	FText Title=FText::FromString("Algosyntax");

	if(!DialogMessages.IsEmpty())
	{
		FMessageDialog::Open(EAppMsgType::Ok, FText::FromString(DialogMessages), &Title);

		//Clear the message buffer after showing it.
		FAxClientAssetsProxy::AssetsAuthEndPieAuthStates.Empty();
	}
		
}
