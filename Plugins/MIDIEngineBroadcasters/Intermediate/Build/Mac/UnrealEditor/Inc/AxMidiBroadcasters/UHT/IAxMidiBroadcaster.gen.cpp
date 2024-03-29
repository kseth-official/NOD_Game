// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AxMidiBroadcasters/Public/Interfaces/IAxMidiBroadcaster.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAxMidiBroadcaster() {}
// Cross Module References
	AXMIDIBROADCASTERS_API UClass* Z_Construct_UClass_UAxMidiBroadcaster();
	AXMIDIBROADCASTERS_API UClass* Z_Construct_UClass_UAxMidiBroadcaster_NoRegister();
	AXMIDIBROADCASTERS_API UClass* Z_Construct_UClass_UAxMidiPlayhead_NoRegister();
	AXMIDICORE_API UClass* Z_Construct_UClass_UAxMidiAsset_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_AxMidiBroadcasters();
// End Cross Module References
	DEFINE_FUNCTION(IAxMidiBroadcaster::execGetPlayhead)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PlayheadName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAxMidiPlayhead**)Z_Param__Result=P_THIS->GetPlayhead(Z_Param_PlayheadName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAxMidiBroadcaster::execGetPlaybackPosition)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PlayheadName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPlaybackPosition(Z_Param_PlayheadName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAxMidiBroadcaster::execGetMidiAsset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAxMidiAsset**)Z_Param__Result=P_THIS->GetMidiAsset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAxMidiBroadcaster::execGetBroadcasterName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetBroadcasterName();
		P_NATIVE_END;
	}
	void UAxMidiBroadcaster::StaticRegisterNativesUAxMidiBroadcaster()
	{
		UClass* Class = UAxMidiBroadcaster::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBroadcasterName", &IAxMidiBroadcaster::execGetBroadcasterName },
			{ "GetMidiAsset", &IAxMidiBroadcaster::execGetMidiAsset },
			{ "GetPlaybackPosition", &IAxMidiBroadcaster::execGetPlaybackPosition },
			{ "GetPlayhead", &IAxMidiBroadcaster::execGetPlayhead },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAxMidiBroadcaster_GetBroadcasterName_Statics
	{
		struct AxMidiBroadcaster_eventGetBroadcasterName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAxMidiBroadcaster_GetBroadcasterName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiBroadcaster_eventGetBroadcasterName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAxMidiBroadcaster_GetBroadcasterName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiBroadcaster_GetBroadcasterName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAxMidiBroadcaster_GetBroadcasterName_Statics::Function_MetaDataParams[] = {
		{ "Category", "MidiEngine" },
		{ "Comment", "/**\n\x09 * @brief The Presumably Unique Name of this broadcaster to help Identify it in listeners.\n\x09 * @return A Unique FString to ID this broadcaster\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/IAxMidiBroadcaster.h" },
		{ "ToolTip", "@brief The Presumably Unique Name of this broadcaster to help Identify it in listeners.\n@return A Unique FString to ID this broadcaster" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAxMidiBroadcaster_GetBroadcasterName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAxMidiBroadcaster, nullptr, "GetBroadcasterName", nullptr, nullptr, Z_Construct_UFunction_UAxMidiBroadcaster_GetBroadcasterName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiBroadcaster_GetBroadcasterName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAxMidiBroadcaster_GetBroadcasterName_Statics::AxMidiBroadcaster_eventGetBroadcasterName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiBroadcaster_GetBroadcasterName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAxMidiBroadcaster_GetBroadcasterName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiBroadcaster_GetBroadcasterName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAxMidiBroadcaster_GetBroadcasterName_Statics::AxMidiBroadcaster_eventGetBroadcasterName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAxMidiBroadcaster_GetBroadcasterName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAxMidiBroadcaster_GetBroadcasterName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAxMidiBroadcaster_GetMidiAsset_Statics
	{
		struct AxMidiBroadcaster_eventGetMidiAsset_Parms
		{
			UAxMidiAsset* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAxMidiBroadcaster_GetMidiAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiBroadcaster_eventGetMidiAsset_Parms, ReturnValue), Z_Construct_UClass_UAxMidiAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAxMidiBroadcaster_GetMidiAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiBroadcaster_GetMidiAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAxMidiBroadcaster_GetMidiAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "MidiEngine" },
		{ "Comment", "/**\n\x09 * @brief The MidiAsset Currently Getting Broadcast or played by this MidiBroadcaster.\n\x09 * @return \n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/IAxMidiBroadcaster.h" },
		{ "ToolTip", "@brief The MidiAsset Currently Getting Broadcast or played by this MidiBroadcaster.\n@return" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAxMidiBroadcaster_GetMidiAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAxMidiBroadcaster, nullptr, "GetMidiAsset", nullptr, nullptr, Z_Construct_UFunction_UAxMidiBroadcaster_GetMidiAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiBroadcaster_GetMidiAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAxMidiBroadcaster_GetMidiAsset_Statics::AxMidiBroadcaster_eventGetMidiAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiBroadcaster_GetMidiAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAxMidiBroadcaster_GetMidiAsset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiBroadcaster_GetMidiAsset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAxMidiBroadcaster_GetMidiAsset_Statics::AxMidiBroadcaster_eventGetMidiAsset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAxMidiBroadcaster_GetMidiAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAxMidiBroadcaster_GetMidiAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAxMidiBroadcaster_GetPlaybackPosition_Statics
	{
		struct AxMidiBroadcaster_eventGetPlaybackPosition_Parms
		{
			FString PlayheadName;
			float ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayheadName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAxMidiBroadcaster_GetPlaybackPosition_Statics::NewProp_PlayheadName = { "PlayheadName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiBroadcaster_eventGetPlaybackPosition_Parms, PlayheadName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAxMidiBroadcaster_GetPlaybackPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiBroadcaster_eventGetPlaybackPosition_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAxMidiBroadcaster_GetPlaybackPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiBroadcaster_GetPlaybackPosition_Statics::NewProp_PlayheadName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiBroadcaster_GetPlaybackPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAxMidiBroadcaster_GetPlaybackPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "MidiEngine" },
		{ "Comment", "/**\n\x09 * @brief Gets the playhead position of the specified playhead.\n\x09 *        Playheads have unique names within a broadcaster. You can get it's playback position.\n\x09 *\x09\x09  NB: Implies the offset is accounted for.\n\x09 * @param PlayheadName \n\x09 * @return Playhead position (includes offset).\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/IAxMidiBroadcaster.h" },
		{ "ToolTip", "@brief Gets the playhead position of the specified playhead.\n       Playheads have unique names within a broadcaster. You can get it's playback position.\n               NB: Implies the offset is accounted for.\n@param PlayheadName\n@return Playhead position (includes offset)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAxMidiBroadcaster_GetPlaybackPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAxMidiBroadcaster, nullptr, "GetPlaybackPosition", nullptr, nullptr, Z_Construct_UFunction_UAxMidiBroadcaster_GetPlaybackPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiBroadcaster_GetPlaybackPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAxMidiBroadcaster_GetPlaybackPosition_Statics::AxMidiBroadcaster_eventGetPlaybackPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiBroadcaster_GetPlaybackPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAxMidiBroadcaster_GetPlaybackPosition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiBroadcaster_GetPlaybackPosition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAxMidiBroadcaster_GetPlaybackPosition_Statics::AxMidiBroadcaster_eventGetPlaybackPosition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAxMidiBroadcaster_GetPlaybackPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAxMidiBroadcaster_GetPlaybackPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAxMidiBroadcaster_GetPlayhead_Statics
	{
		struct AxMidiBroadcaster_eventGetPlayhead_Parms
		{
			FString PlayheadName;
			UAxMidiPlayhead* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayheadName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAxMidiBroadcaster_GetPlayhead_Statics::NewProp_PlayheadName = { "PlayheadName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiBroadcaster_eventGetPlayhead_Parms, PlayheadName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAxMidiBroadcaster_GetPlayhead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiBroadcaster_eventGetPlayhead_Parms, ReturnValue), Z_Construct_UClass_UAxMidiPlayhead_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAxMidiBroadcaster_GetPlayhead_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiBroadcaster_GetPlayhead_Statics::NewProp_PlayheadName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiBroadcaster_GetPlayhead_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAxMidiBroadcaster_GetPlayhead_Statics::Function_MetaDataParams[] = {
		{ "Category", "MidiEngine" },
		{ "Comment", "/**\n\x09 * @brief Finds and returns a playhead by name from the broadcaster.\n\x09 * @param PlayheadName the unique ID/name of the playhead to get.\n\x09 * @return \n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/IAxMidiBroadcaster.h" },
		{ "ToolTip", "@brief Finds and returns a playhead by name from the broadcaster.\n@param PlayheadName the unique ID/name of the playhead to get.\n@return" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAxMidiBroadcaster_GetPlayhead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAxMidiBroadcaster, nullptr, "GetPlayhead", nullptr, nullptr, Z_Construct_UFunction_UAxMidiBroadcaster_GetPlayhead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiBroadcaster_GetPlayhead_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAxMidiBroadcaster_GetPlayhead_Statics::AxMidiBroadcaster_eventGetPlayhead_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiBroadcaster_GetPlayhead_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAxMidiBroadcaster_GetPlayhead_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiBroadcaster_GetPlayhead_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAxMidiBroadcaster_GetPlayhead_Statics::AxMidiBroadcaster_eventGetPlayhead_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAxMidiBroadcaster_GetPlayhead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAxMidiBroadcaster_GetPlayhead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAxMidiBroadcaster);
	UClass* Z_Construct_UClass_UAxMidiBroadcaster_NoRegister()
	{
		return UAxMidiBroadcaster::StaticClass();
	}
	struct Z_Construct_UClass_UAxMidiBroadcaster_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAxMidiBroadcaster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AxMidiBroadcasters,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiBroadcaster_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAxMidiBroadcaster_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAxMidiBroadcaster_GetBroadcasterName, "GetBroadcasterName" }, // 1269605255
		{ &Z_Construct_UFunction_UAxMidiBroadcaster_GetMidiAsset, "GetMidiAsset" }, // 1329136810
		{ &Z_Construct_UFunction_UAxMidiBroadcaster_GetPlaybackPosition, "GetPlaybackPosition" }, // 3048202879
		{ &Z_Construct_UFunction_UAxMidiBroadcaster_GetPlayhead, "GetPlayhead" }, // 1438151508
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiBroadcaster_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiBroadcaster_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Interfaces/IAxMidiBroadcaster.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAxMidiBroadcaster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAxMidiBroadcaster>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAxMidiBroadcaster_Statics::ClassParams = {
		&UAxMidiBroadcaster::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiBroadcaster_Statics::Class_MetaDataParams), Z_Construct_UClass_UAxMidiBroadcaster_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAxMidiBroadcaster()
	{
		if (!Z_Registration_Info_UClass_UAxMidiBroadcaster.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAxMidiBroadcaster.OuterSingleton, Z_Construct_UClass_UAxMidiBroadcaster_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAxMidiBroadcaster.OuterSingleton;
	}
	template<> AXMIDIBROADCASTERS_API UClass* StaticClass<UAxMidiBroadcaster>()
	{
		return UAxMidiBroadcaster::StaticClass();
	}
	UAxMidiBroadcaster::UAxMidiBroadcaster(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAxMidiBroadcaster);
	UAxMidiBroadcaster::~UAxMidiBroadcaster() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Interfaces_IAxMidiBroadcaster_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Interfaces_IAxMidiBroadcaster_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAxMidiBroadcaster, UAxMidiBroadcaster::StaticClass, TEXT("UAxMidiBroadcaster"), &Z_Registration_Info_UClass_UAxMidiBroadcaster, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAxMidiBroadcaster), 2349864643U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Interfaces_IAxMidiBroadcaster_h_2104777098(TEXT("/Script/AxMidiBroadcasters"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Interfaces_IAxMidiBroadcaster_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Interfaces_IAxMidiBroadcaster_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
