// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AxMidiBroadcasters/Public/MidiUtilities/AxMidiFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAxMidiFilter() {}
// Cross Module References
	AXMIDIBROADCASTERS_API UScriptStruct* Z_Construct_UScriptStruct_FAxMidiFilter();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInt32Range();
	UPackage* Z_Construct_UPackage__Script_AxMidiBroadcasters();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AxMidiFilter;
class UScriptStruct* FAxMidiFilter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AxMidiFilter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AxMidiFilter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAxMidiFilter, (UObject*)Z_Construct_UPackage__Script_AxMidiBroadcasters(), TEXT("AxMidiFilter"));
	}
	return Z_Registration_Info_UScriptStruct_AxMidiFilter.OuterSingleton;
}
template<> AXMIDIBROADCASTERS_API UScriptStruct* StaticStruct<FAxMidiFilter>()
{
	return FAxMidiFilter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAxMidiFilter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BroadcasterName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BroadcasterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayHeadName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayHeadName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MidiTracks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MidiTracks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MidiTracks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PitchRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PitchName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAxMidiFilter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * @brief Since there can be multiple broadcasters,playheads and notes,\n *        You may sometimes only be interested in MidiEvents from certain Broadcasters,playheads, etc..\n *\x09\x09  If you leave a filter entry empty, that means it should be ignored as filter criteria\n */" },
		{ "DisplayName", "MidiFilter" },
		{ "ModuleRelativePath", "Public/MidiUtilities/AxMidiFilter.h" },
		{ "ToolTip", "@brief Since there can be multiple broadcasters,playheads and notes,\n       You may sometimes only be interested in MidiEvents from certain Broadcasters,playheads, etc..\n              If you leave a filter entry empty, that means it should be ignored as filter criteria" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAxMidiFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAxMidiFilter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAxMidiFilter_Statics::NewProp_BroadcasterName_MetaData[] = {
		{ "Category", "MidiEventFilter" },
		{ "Comment", "/**\n\x09 * @brief You may wish to listen to only a specific Broadcaster. Eg \"MySequencerBroadcaster\"\n\x09 *        If you leave this empty, it won't be taken into consideration when filtering midievents.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MidiUtilities/AxMidiFilter.h" },
		{ "ToolTip", "@brief You may wish to listen to only a specific Broadcaster. Eg \"MySequencerBroadcaster\"\n       If you leave this empty, it won't be taken into consideration when filtering midievents." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAxMidiFilter_Statics::NewProp_BroadcasterName = { "BroadcasterName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAxMidiFilter, BroadcasterName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAxMidiFilter_Statics::NewProp_BroadcasterName_MetaData), Z_Construct_UScriptStruct_FAxMidiFilter_Statics::NewProp_BroadcasterName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAxMidiFilter_Statics::NewProp_PlayHeadName_MetaData[] = {
		{ "Category", "MidiEventFilter" },
		{ "Comment", "/**\n\x09 * @brief You may wish to listen to only a certain playhead. Eg \"1SecPlayhead\"\n\x09 *        If you leave this empty, it won't be taken into consideration when filtering midievents.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MidiUtilities/AxMidiFilter.h" },
		{ "ToolTip", "@brief You may wish to listen to only a certain playhead. Eg \"1SecPlayhead\"\n       If you leave this empty, it won't be taken into consideration when filtering midievents." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAxMidiFilter_Statics::NewProp_PlayHeadName = { "PlayHeadName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAxMidiFilter, PlayHeadName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAxMidiFilter_Statics::NewProp_PlayHeadName_MetaData), Z_Construct_UScriptStruct_FAxMidiFilter_Statics::NewProp_PlayHeadName_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAxMidiFilter_Statics::NewProp_MidiTracks_Inner = { "MidiTracks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAxMidiFilter_Statics::NewProp_MidiTracks_MetaData[] = {
		{ "Category", "MidiEventFilter" },
		{ "Comment", "/**\n\x09 * @brief You may wish to listen to certain tracks... eg \"Kick\"\n\x09 *        If you leave this empty, it won't be taken into consideration when filtering midievents.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MidiUtilities/AxMidiFilter.h" },
		{ "ToolTip", "@brief You may wish to listen to certain tracks... eg \"Kick\"\n       If you leave this empty, it won't be taken into consideration when filtering midievents." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAxMidiFilter_Statics::NewProp_MidiTracks = { "MidiTracks", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAxMidiFilter, MidiTracks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAxMidiFilter_Statics::NewProp_MidiTracks_MetaData), Z_Construct_UScriptStruct_FAxMidiFilter_Statics::NewProp_MidiTracks_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAxMidiFilter_Statics::NewProp_PitchRange_MetaData[] = {
		{ "Category", "MidiEventFilter" },
		{ "Comment", "/**\n\x09 * @brief You may wish to listen to only a certain ranger of midi Notes.\n\x09 *  eg, not 60 to 72\n\x09 *\x09 If you leave this empty, it won't be taken into consideration when filtering MidiEvents.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MidiUtilities/AxMidiFilter.h" },
		{ "ToolTip", "@brief You may wish to listen to only a certain ranger of midi Notes.\n eg, not 60 to 72\n      If you leave this empty, it won't be taken into consideration when filtering MidiEvents." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAxMidiFilter_Statics::NewProp_PitchRange = { "PitchRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAxMidiFilter, PitchRange), Z_Construct_UScriptStruct_FInt32Range, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAxMidiFilter_Statics::NewProp_PitchRange_MetaData), Z_Construct_UScriptStruct_FAxMidiFilter_Statics::NewProp_PitchRange_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAxMidiFilter_Statics::NewProp_PitchName_MetaData[] = {
		{ "Category", "MidiEventFilter" },
		{ "Comment", "/**\n\x09 * @brief You may wish to listen to only instances of a certain note, eg like \"C5\"\n\x09 *        If you leave this empty, it won't be taken into consideration when filtering MidiEvents.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MidiUtilities/AxMidiFilter.h" },
		{ "ToolTip", "@brief You may wish to listen to only instances of a certain note, eg like \"C5\"\n       If you leave this empty, it won't be taken into consideration when filtering MidiEvents." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAxMidiFilter_Statics::NewProp_PitchName = { "PitchName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAxMidiFilter, PitchName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAxMidiFilter_Statics::NewProp_PitchName_MetaData), Z_Construct_UScriptStruct_FAxMidiFilter_Statics::NewProp_PitchName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAxMidiFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAxMidiFilter_Statics::NewProp_BroadcasterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAxMidiFilter_Statics::NewProp_PlayHeadName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAxMidiFilter_Statics::NewProp_MidiTracks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAxMidiFilter_Statics::NewProp_MidiTracks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAxMidiFilter_Statics::NewProp_PitchRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAxMidiFilter_Statics::NewProp_PitchName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAxMidiFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AxMidiBroadcasters,
		nullptr,
		&NewStructOps,
		"AxMidiFilter",
		Z_Construct_UScriptStruct_FAxMidiFilter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAxMidiFilter_Statics::PropPointers),
		sizeof(FAxMidiFilter),
		alignof(FAxMidiFilter),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAxMidiFilter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAxMidiFilter_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAxMidiFilter_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAxMidiFilter()
	{
		if (!Z_Registration_Info_UScriptStruct_AxMidiFilter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AxMidiFilter.InnerSingleton, Z_Construct_UScriptStruct_FAxMidiFilter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AxMidiFilter.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_MidiUtilities_AxMidiFilter_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_MidiUtilities_AxMidiFilter_h_Statics::ScriptStructInfo[] = {
		{ FAxMidiFilter::StaticStruct, Z_Construct_UScriptStruct_FAxMidiFilter_Statics::NewStructOps, TEXT("AxMidiFilter"), &Z_Registration_Info_UScriptStruct_AxMidiFilter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAxMidiFilter), 3941190140U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_MidiUtilities_AxMidiFilter_h_3260312868(TEXT("/Script/AxMidiBroadcasters"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_MidiUtilities_AxMidiFilter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_MidiUtilities_AxMidiFilter_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
