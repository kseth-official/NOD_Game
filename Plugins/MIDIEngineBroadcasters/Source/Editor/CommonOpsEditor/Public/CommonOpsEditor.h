// Copyright Algosyntax 2023. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Licensing/AxClientAssetsAuthNotifications.h"
#include "Modules/ModuleManager.h"

class FCommonOpsEditorModule : public IModuleInterface
{
protected:

	FAxClientAssetsAuthNotifications ClientAssetsAuthSystem;

public:
	
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;



};
