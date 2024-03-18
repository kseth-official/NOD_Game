// Copyright Algosyntax 2023. All Rights Reserved.

#include "AxMidiCore.h"

#include "Licensing/AxClientAssetsProxy.h"


#define LOCTEXT_NAMESPACE "MidiEngine"

void FAxMidiCore::StartupModule()
{
#ifdef AX_CLIENT_ASSET_DEFAULT_MODE
	#if AX_CLIENT_ASSET_DEFAULT_MODE == 0

		FAxAssetAuthStateInfo StateInfo(AX_CLIENT_REMOTE_AUTH,EAxAssetAuthState::TRIAL);
		StateInfo.AuthReasonTitle="TRIAL MODE";
		StateInfo.AuthReasonMessage="MidiEngine Is On Trial. Expected Limited Playback Features";

		FAxClientAssetsProxy::SetAssetAuthState(StateInfo);
	#endif
#endif
}

void FAxMidiCore::ShutdownModule()
{
}


#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FAxMidiCore, AxMidiCore)
