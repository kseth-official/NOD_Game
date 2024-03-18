// Copyright Algosyntax 2023. All Rights Reserved

#pragma once

#include "CoreMinimal.h"

/**
 * Facilitates in editor communication  between Licensing Plugins and the Licensed Plugins. 
 */
class COMMONOPSEDITOR_API FAxClientAssetsAuthNotifications
{

public:

	void ShowDelayedClientAssetNotifications(bool bIsSimulating);
};
