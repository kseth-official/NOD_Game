// Copyright Algosyntax 2023. All Rights Reserved.

#pragma once

#include "Modules/ModuleManager.h"

class FAxMidiBroadcasters : public IModuleInterface
{
	public:

	/* Called when the module is loaded */
	virtual void StartupModule() override;

	/* Called when the module is unloaded */
	virtual void ShutdownModule() override;
};