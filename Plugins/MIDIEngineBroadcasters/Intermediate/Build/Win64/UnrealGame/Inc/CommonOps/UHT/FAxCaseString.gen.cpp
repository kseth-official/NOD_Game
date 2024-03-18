// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/CommonOps/Public/Strings/FAxCaseString.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFAxCaseString() {}
// Cross Module References
	COMMONOPS_API UScriptStruct* Z_Construct_UScriptStruct_FAxCaseString();
	UPackage* Z_Construct_UPackage__Script_CommonOps();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AxCaseString;
class UScriptStruct* FAxCaseString::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AxCaseString.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AxCaseString.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAxCaseString, (UObject*)Z_Construct_UPackage__Script_CommonOps(), TEXT("AxCaseString"));
	}
	return Z_Registration_Info_UScriptStruct_AxCaseString.OuterSingleton;
}
template<> COMMONOPS_API UScriptStruct* StaticStruct<FAxCaseString>()
{
	return FAxCaseString::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAxCaseString_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WrappedString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_WrappedString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAxCaseString_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Custom FString Struct With CaseSensitive Comparision EG For TMaps\n * The Struct Just wraps the normal FString as a member.\n * You can request the underlying string with GetFString();\n * \n */" },
		{ "ModuleRelativePath", "Public/Strings/FAxCaseString.h" },
		{ "ToolTip", "Custom FString Struct With CaseSensitive Comparision EG For TMaps\nThe Struct Just wraps the normal FString as a member.\nYou can request the underlying string with GetFString();" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAxCaseString_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAxCaseString>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAxCaseString_Statics::NewProp_WrappedString_MetaData[] = {
		{ "Category", "CommonOps" },
		{ "ModuleRelativePath", "Public/Strings/FAxCaseString.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAxCaseString_Statics::NewProp_WrappedString = { "WrappedString", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAxCaseString, WrappedString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAxCaseString_Statics::NewProp_WrappedString_MetaData), Z_Construct_UScriptStruct_FAxCaseString_Statics::NewProp_WrappedString_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAxCaseString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAxCaseString_Statics::NewProp_WrappedString,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAxCaseString_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CommonOps,
		nullptr,
		&NewStructOps,
		"AxCaseString",
		Z_Construct_UScriptStruct_FAxCaseString_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAxCaseString_Statics::PropPointers),
		sizeof(FAxCaseString),
		alignof(FAxCaseString),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAxCaseString_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAxCaseString_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAxCaseString_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAxCaseString()
	{
		if (!Z_Registration_Info_UScriptStruct_AxCaseString.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AxCaseString.InnerSingleton, Z_Construct_UScriptStruct_FAxCaseString_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AxCaseString.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_CommonOps_Public_Strings_FAxCaseString_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_CommonOps_Public_Strings_FAxCaseString_h_Statics::ScriptStructInfo[] = {
		{ FAxCaseString::StaticStruct, Z_Construct_UScriptStruct_FAxCaseString_Statics::NewStructOps, TEXT("AxCaseString"), &Z_Registration_Info_UScriptStruct_AxCaseString, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAxCaseString), 3926668390U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_CommonOps_Public_Strings_FAxCaseString_h_1817500775(TEXT("/Script/CommonOps"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_CommonOps_Public_Strings_FAxCaseString_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_CommonOps_Public_Strings_FAxCaseString_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
