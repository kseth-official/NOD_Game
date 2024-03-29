// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AxMidiCore/Public/Settings/AxMidiEngineCoreSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAxMidiEngineCoreSettings() {}
// Cross Module References
	AXMIDICORE_API UClass* Z_Construct_UClass_UAxMidiEngineCoreSettings();
	AXMIDICORE_API UClass* Z_Construct_UClass_UAxMidiEngineCoreSettings_NoRegister();
	AXMIDICORE_API UEnum* Z_Construct_UEnum_AxMidiCore_EAxMidiMiddleC();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AxMidiCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAxMidiMiddleC;
	static UEnum* EAxMidiMiddleC_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAxMidiMiddleC.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAxMidiMiddleC.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AxMidiCore_EAxMidiMiddleC, (UObject*)Z_Construct_UPackage__Script_AxMidiCore(), TEXT("EAxMidiMiddleC"));
		}
		return Z_Registration_Info_UEnum_EAxMidiMiddleC.OuterSingleton;
	}
	template<> AXMIDICORE_API UEnum* StaticEnum<EAxMidiMiddleC>()
	{
		return EAxMidiMiddleC_StaticEnum();
	}
	struct Z_Construct_UEnum_AxMidiCore_EAxMidiMiddleC_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AxMidiCore_EAxMidiMiddleC_Statics::Enumerators[] = {
		{ "EAxMidiMiddleC::C6", (int64)EAxMidiMiddleC::C6 },
		{ "EAxMidiMiddleC::C5", (int64)EAxMidiMiddleC::C5 },
		{ "EAxMidiMiddleC::C4", (int64)EAxMidiMiddleC::C4 },
		{ "EAxMidiMiddleC::C3", (int64)EAxMidiMiddleC::C3 },
		{ "EAxMidiMiddleC::C2", (int64)EAxMidiMiddleC::C2 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AxMidiCore_EAxMidiMiddleC_Statics::Enum_MetaDataParams[] = {
		{ "C2.Name", "EAxMidiMiddleC::C2" },
		{ "C3.Comment", "/* Ableton Live, Logic Pro, Pro Tools, Cubase etc */" },
		{ "C3.Name", "EAxMidiMiddleC::C3" },
		{ "C3.ToolTip", "Ableton Live, Logic Pro, Pro Tools, Cubase etc" },
		{ "C4.Comment", "/*Roland Keyboards*/" },
		{ "C4.Name", "EAxMidiMiddleC::C4" },
		{ "C4.ToolTip", "Roland Keyboards" },
		{ "C5.Comment", "/*FL Studio*/" },
		{ "C5.Name", "EAxMidiMiddleC::C5" },
		{ "C5.ToolTip", "FL Studio" },
		{ "C6.Name", "EAxMidiMiddleC::C6" },
		{ "ModuleRelativePath", "Public/Settings/AxMidiEngineCoreSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AxMidiCore_EAxMidiMiddleC_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AxMidiCore,
		nullptr,
		"EAxMidiMiddleC",
		"EAxMidiMiddleC",
		Z_Construct_UEnum_AxMidiCore_EAxMidiMiddleC_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AxMidiCore_EAxMidiMiddleC_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AxMidiCore_EAxMidiMiddleC_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AxMidiCore_EAxMidiMiddleC_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AxMidiCore_EAxMidiMiddleC()
	{
		if (!Z_Registration_Info_UEnum_EAxMidiMiddleC.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAxMidiMiddleC.InnerSingleton, Z_Construct_UEnum_AxMidiCore_EAxMidiMiddleC_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAxMidiMiddleC.InnerSingleton;
	}
	void UAxMidiEngineCoreSettings::StaticRegisterNativesUAxMidiEngineCoreSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAxMidiEngineCoreSettings);
	UClass* Z_Construct_UClass_UAxMidiEngineCoreSettings_NoRegister()
	{
		return UAxMidiEngineCoreSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAxMidiEngineCoreSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MiddleC_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MiddleC_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MiddleC;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAxMidiEngineCoreSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AxMidiCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiEngineCoreSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiEngineCoreSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Preferences for MidiEngine\n */" },
		{ "IncludePath", "Settings/AxMidiEngineCoreSettings.h" },
		{ "ModuleRelativePath", "Public/Settings/AxMidiEngineCoreSettings.h" },
		{ "ToolTip", "Preferences for MidiEngine" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAxMidiEngineCoreSettings_Statics::NewProp_MiddleC_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiEngineCoreSettings_Statics::NewProp_MiddleC_MetaData[] = {
		{ "Category", "MidiEngine" },
		{ "Comment", "/**\n\x09 * @brief Set the PitchName that should be used for Middle C (Midi Note 60).\n\x09 *        FL Studio uses C5.\n\x09 *\x09\x09  Ableton Live uses C3.\n\x09 *\n\x09 */" },
		{ "ModuleRelativePath", "Public/Settings/AxMidiEngineCoreSettings.h" },
		{ "ToolTip", "@brief Set the PitchName that should be used for Middle C (Midi Note 60).\n       FL Studio uses C5.\n               Ableton Live uses C3." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAxMidiEngineCoreSettings_Statics::NewProp_MiddleC = { "MiddleC", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxMidiEngineCoreSettings, MiddleC), Z_Construct_UEnum_AxMidiCore_EAxMidiMiddleC, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiEngineCoreSettings_Statics::NewProp_MiddleC_MetaData), Z_Construct_UClass_UAxMidiEngineCoreSettings_Statics::NewProp_MiddleC_MetaData) }; // 952589469
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAxMidiEngineCoreSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxMidiEngineCoreSettings_Statics::NewProp_MiddleC_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxMidiEngineCoreSettings_Statics::NewProp_MiddleC,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAxMidiEngineCoreSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAxMidiEngineCoreSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAxMidiEngineCoreSettings_Statics::ClassParams = {
		&UAxMidiEngineCoreSettings::StaticClass,
		"MidiEngine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAxMidiEngineCoreSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiEngineCoreSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiEngineCoreSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UAxMidiEngineCoreSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiEngineCoreSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAxMidiEngineCoreSettings()
	{
		if (!Z_Registration_Info_UClass_UAxMidiEngineCoreSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAxMidiEngineCoreSettings.OuterSingleton, Z_Construct_UClass_UAxMidiEngineCoreSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAxMidiEngineCoreSettings.OuterSingleton;
	}
	template<> AXMIDICORE_API UClass* StaticClass<UAxMidiEngineCoreSettings>()
	{
		return UAxMidiEngineCoreSettings::StaticClass();
	}
	UAxMidiEngineCoreSettings::UAxMidiEngineCoreSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAxMidiEngineCoreSettings);
	UAxMidiEngineCoreSettings::~UAxMidiEngineCoreSettings() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiCore_Public_Settings_AxMidiEngineCoreSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiCore_Public_Settings_AxMidiEngineCoreSettings_h_Statics::EnumInfo[] = {
		{ EAxMidiMiddleC_StaticEnum, TEXT("EAxMidiMiddleC"), &Z_Registration_Info_UEnum_EAxMidiMiddleC, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 952589469U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiCore_Public_Settings_AxMidiEngineCoreSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAxMidiEngineCoreSettings, UAxMidiEngineCoreSettings::StaticClass, TEXT("UAxMidiEngineCoreSettings"), &Z_Registration_Info_UClass_UAxMidiEngineCoreSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAxMidiEngineCoreSettings), 4141097484U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiCore_Public_Settings_AxMidiEngineCoreSettings_h_1216618583(TEXT("/Script/AxMidiCore"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiCore_Public_Settings_AxMidiEngineCoreSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiCore_Public_Settings_AxMidiEngineCoreSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiCore_Public_Settings_AxMidiEngineCoreSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiCore_Public_Settings_AxMidiEngineCoreSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
