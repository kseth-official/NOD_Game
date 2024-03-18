// Copyright Algosyntax 2023. All Rights Reserved.

#include "CommonOps.h"

#define LOCTEXT_NAMESPACE "FCommonOpsModule"

void FCommonOpsModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FCommonOpsModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FCommonOpsModule, CommonOps)