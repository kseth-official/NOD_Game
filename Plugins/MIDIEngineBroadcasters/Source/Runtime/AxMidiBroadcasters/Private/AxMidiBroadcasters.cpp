// Copyright Algosyntax 2023. All Rights Reserved.

#include "AxMidiBroadcasters.h"

#include "Licensing/AxClientAssetsProxy.h"


void FAxMidiBroadcasters::StartupModule()
{
#ifdef AX_CLIENT_ASSET_DEFAULT_MODE
#if AX_CLIENT_ASSET_DEFAULT_MODE == 0

	FAxAssetAuthStateInfo StateInfo(AX_CLIENT_REMOTE_AUTH, EAxAssetAuthState::TRIAL);
	StateInfo.AuthReasonTitle = "TRIAL MODE";
	StateInfo.AuthReasonMessage = "MidiEngine Is On Trial. Expected Limited Playback Features.";

	FAxClientAssetsProxy::SetAssetAuthState(StateInfo);
#endif
#endif
}

void FAxMidiBroadcasters::ShutdownModule()
{
}


IMPLEMENT_MODULE(FAxMidiBroadcasters, AxMidiBroadcasters);