// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AxMidiBroadcasters/Public/MidiUtilities/AxMidiEventsDelegates.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAxMidiEventsDelegates() {}
// Cross Module References
	AXMIDIBROADCASTERS_API UClass* Z_Construct_UClass_UAxMidiEventsDelegates();
	AXMIDIBROADCASTERS_API UClass* Z_Construct_UClass_UAxMidiEventsDelegates_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AxMidiBroadcasters();
// End Cross Module References
	void UAxMidiEventsDelegates::StaticRegisterNativesUAxMidiEventsDelegates()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAxMidiEventsDelegates);
	UClass* Z_Construct_UClass_UAxMidiEventsDelegates_NoRegister()
	{
		return UAxMidiEventsDelegates::StaticClass();
	}
	struct Z_Construct_UClass_UAxMidiEventsDelegates_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAxMidiEventsDelegates_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AxMidiBroadcasters,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiEventsDelegates_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiEventsDelegates_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * @brief This is just a dummy class to allow us to declare/define our delegates in this header.\n *        You can rename it if desired since no code should be using the class, just the following delegates.\n *\x09\x09  The reason you need the class is UBT or UAT won't compile Delegates if there's no class with \"GENERATED_BODY\".\n *\x09\x09  This is one of those weird Unreal Engine API designs.\n */" },
		{ "IncludePath", "MidiUtilities/AxMidiEventsDelegates.h" },
		{ "ModuleRelativePath", "Public/MidiUtilities/AxMidiEventsDelegates.h" },
		{ "ToolTip", "@brief This is just a dummy class to allow us to declare/define our delegates in this header.\n       You can rename it if desired since no code should be using the class, just the following delegates.\n              The reason you need the class is UBT or UAT won't compile Delegates if there's no class with \"GENERATED_BODY\".\n              This is one of those weird Unreal Engine API designs." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAxMidiEventsDelegates_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAxMidiEventsDelegates>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAxMidiEventsDelegates_Statics::ClassParams = {
		&UAxMidiEventsDelegates::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiEventsDelegates_Statics::Class_MetaDataParams), Z_Construct_UClass_UAxMidiEventsDelegates_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAxMidiEventsDelegates()
	{
		if (!Z_Registration_Info_UClass_UAxMidiEventsDelegates.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAxMidiEventsDelegates.OuterSingleton, Z_Construct_UClass_UAxMidiEventsDelegates_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAxMidiEventsDelegates.OuterSingleton;
	}
	template<> AXMIDIBROADCASTERS_API UClass* StaticClass<UAxMidiEventsDelegates>()
	{
		return UAxMidiEventsDelegates::StaticClass();
	}
	UAxMidiEventsDelegates::UAxMidiEventsDelegates(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAxMidiEventsDelegates);
	UAxMidiEventsDelegates::~UAxMidiEventsDelegates() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_MidiUtilities_AxMidiEventsDelegates_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_MidiUtilities_AxMidiEventsDelegates_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAxMidiEventsDelegates, UAxMidiEventsDelegates::StaticClass, TEXT("UAxMidiEventsDelegates"), &Z_Registration_Info_UClass_UAxMidiEventsDelegates, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAxMidiEventsDelegates), 2812147845U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_MidiUtilities_AxMidiEventsDelegates_h_1590479659(TEXT("/Script/AxMidiBroadcasters"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_MidiUtilities_AxMidiEventsDelegates_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_MidiUtilities_AxMidiEventsDelegates_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
