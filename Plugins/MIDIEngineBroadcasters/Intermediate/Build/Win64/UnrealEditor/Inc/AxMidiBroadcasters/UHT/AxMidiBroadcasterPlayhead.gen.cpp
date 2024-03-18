// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AxMidiBroadcasters/Public/Playheads/AxMidiBroadcasterPlayhead.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAxMidiBroadcasterPlayhead() {}
// Cross Module References
	AXMIDIBROADCASTERS_API UClass* Z_Construct_UClass_UAxMidiBroadcasterPlayhead();
	AXMIDIBROADCASTERS_API UClass* Z_Construct_UClass_UAxMidiBroadcasterPlayhead_NoRegister();
	AXMIDIBROADCASTERS_API UClass* Z_Construct_UClass_UAxMidiPlayhead();
	UPackage* Z_Construct_UPackage__Script_AxMidiBroadcasters();
// End Cross Module References
	void UAxMidiBroadcasterPlayhead::StaticRegisterNativesUAxMidiBroadcasterPlayhead()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAxMidiBroadcasterPlayhead);
	UClass* Z_Construct_UClass_UAxMidiBroadcasterPlayhead_NoRegister()
	{
		return UAxMidiBroadcasterPlayhead::StaticClass();
	}
	struct Z_Construct_UClass_UAxMidiBroadcasterPlayhead_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAxMidiBroadcasterPlayhead_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAxMidiPlayhead,
		(UObject* (*)())Z_Construct_UPackage__Script_AxMidiBroadcasters,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiBroadcasterPlayhead_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiBroadcasterPlayhead_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This is a Specific MidiPlayhead meant for use mainly by the MidiBroadcasterComponent\n */" },
#endif
		{ "DisplayName", "Midi Broadcaster Playhead" },
		{ "IncludePath", "Playheads/AxMidiBroadcasterPlayhead.h" },
		{ "ModuleRelativePath", "Public/Playheads/AxMidiBroadcasterPlayhead.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a Specific MidiPlayhead meant for use mainly by the MidiBroadcasterComponent" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAxMidiBroadcasterPlayhead_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAxMidiBroadcasterPlayhead>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAxMidiBroadcasterPlayhead_Statics::ClassParams = {
		&UAxMidiBroadcasterPlayhead::StaticClass,
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
		0x001010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiBroadcasterPlayhead_Statics::Class_MetaDataParams), Z_Construct_UClass_UAxMidiBroadcasterPlayhead_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAxMidiBroadcasterPlayhead()
	{
		if (!Z_Registration_Info_UClass_UAxMidiBroadcasterPlayhead.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAxMidiBroadcasterPlayhead.OuterSingleton, Z_Construct_UClass_UAxMidiBroadcasterPlayhead_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAxMidiBroadcasterPlayhead.OuterSingleton;
	}
	template<> AXMIDIBROADCASTERS_API UClass* StaticClass<UAxMidiBroadcasterPlayhead>()
	{
		return UAxMidiBroadcasterPlayhead::StaticClass();
	}
	UAxMidiBroadcasterPlayhead::UAxMidiBroadcasterPlayhead(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAxMidiBroadcasterPlayhead);
	UAxMidiBroadcasterPlayhead::~UAxMidiBroadcasterPlayhead() {}
	struct Z_CompiledInDeferFile_FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Playheads_AxMidiBroadcasterPlayhead_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Playheads_AxMidiBroadcasterPlayhead_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAxMidiBroadcasterPlayhead, UAxMidiBroadcasterPlayhead::StaticClass, TEXT("UAxMidiBroadcasterPlayhead"), &Z_Registration_Info_UClass_UAxMidiBroadcasterPlayhead, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAxMidiBroadcasterPlayhead), 1900598867U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Playheads_AxMidiBroadcasterPlayhead_h_3618557073(TEXT("/Script/AxMidiBroadcasters"),
		Z_CompiledInDeferFile_FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Playheads_AxMidiBroadcasterPlayhead_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Playheads_AxMidiBroadcasterPlayhead_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
