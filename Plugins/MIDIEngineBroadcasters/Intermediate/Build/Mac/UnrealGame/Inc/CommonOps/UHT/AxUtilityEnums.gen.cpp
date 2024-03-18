// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/CommonOps/Public/UtilityClasses/AxUtilityEnums.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAxUtilityEnums() {}
// Cross Module References
	COMMONOPS_API UEnum* Z_Construct_UEnum_CommonOps_EAxMusicalPitchColor();
	COMMONOPS_API UEnum* Z_Construct_UEnum_CommonOps_EAxTransformSpace();
	UPackage* Z_Construct_UPackage__Script_CommonOps();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAxTransformSpace;
	static UEnum* EAxTransformSpace_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAxTransformSpace.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAxTransformSpace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CommonOps_EAxTransformSpace, (UObject*)Z_Construct_UPackage__Script_CommonOps(), TEXT("EAxTransformSpace"));
		}
		return Z_Registration_Info_UEnum_EAxTransformSpace.OuterSingleton;
	}
	template<> COMMONOPS_API UEnum* StaticEnum<EAxTransformSpace>()
	{
		return EAxTransformSpace_StaticEnum();
	}
	struct Z_Construct_UEnum_CommonOps_EAxTransformSpace_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CommonOps_EAxTransformSpace_Statics::Enumerators[] = {
		{ "EAxTransformSpace::LOCAL", (int64)EAxTransformSpace::LOCAL },
		{ "EAxTransformSpace::GLOBAL", (int64)EAxTransformSpace::GLOBAL },
		{ "EAxTransformSpace::WORLD", (int64)EAxTransformSpace::WORLD },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CommonOps_EAxTransformSpace_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "GLOBAL.Name", "EAxTransformSpace::GLOBAL" },
		{ "LOCAL.Name", "EAxTransformSpace::LOCAL" },
		{ "ModuleRelativePath", "Public/UtilityClasses/AxUtilityEnums.h" },
		{ "WORLD.Name", "EAxTransformSpace::WORLD" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CommonOps_EAxTransformSpace_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CommonOps,
		nullptr,
		"EAxTransformSpace",
		"EAxTransformSpace",
		Z_Construct_UEnum_CommonOps_EAxTransformSpace_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CommonOps_EAxTransformSpace_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CommonOps_EAxTransformSpace_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CommonOps_EAxTransformSpace_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CommonOps_EAxTransformSpace()
	{
		if (!Z_Registration_Info_UEnum_EAxTransformSpace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAxTransformSpace.InnerSingleton, Z_Construct_UEnum_CommonOps_EAxTransformSpace_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAxTransformSpace.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAxMusicalPitchColor;
	static UEnum* EAxMusicalPitchColor_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAxMusicalPitchColor.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAxMusicalPitchColor.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CommonOps_EAxMusicalPitchColor, (UObject*)Z_Construct_UPackage__Script_CommonOps(), TEXT("EAxMusicalPitchColor"));
		}
		return Z_Registration_Info_UEnum_EAxMusicalPitchColor.OuterSingleton;
	}
	template<> COMMONOPS_API UEnum* StaticEnum<EAxMusicalPitchColor>()
	{
		return EAxMusicalPitchColor_StaticEnum();
	}
	struct Z_Construct_UEnum_CommonOps_EAxMusicalPitchColor_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CommonOps_EAxMusicalPitchColor_Statics::Enumerators[] = {
		{ "EAxMusicalPitchColor::UNDEFINED", (int64)EAxMusicalPitchColor::UNDEFINED },
		{ "EAxMusicalPitchColor::WHITE", (int64)EAxMusicalPitchColor::WHITE },
		{ "EAxMusicalPitchColor::BLACK", (int64)EAxMusicalPitchColor::BLACK },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CommonOps_EAxMusicalPitchColor_Statics::Enum_MetaDataParams[] = {
		{ "BLACK.Name", "EAxMusicalPitchColor::BLACK" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * @brief Following a piano convention,\n * a musical note can be White or Black.\n * Sharps/Flats are Black, and the rest are White.\n */" },
		{ "ModuleRelativePath", "Public/UtilityClasses/AxUtilityEnums.h" },
		{ "ToolTip", "@brief Following a piano convention,\na musical note can be White or Black.\nSharps/Flats are Black, and the rest are White." },
		{ "UNDEFINED.Name", "EAxMusicalPitchColor::UNDEFINED" },
		{ "WHITE.Name", "EAxMusicalPitchColor::WHITE" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CommonOps_EAxMusicalPitchColor_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CommonOps,
		nullptr,
		"EAxMusicalPitchColor",
		"EAxMusicalPitchColor",
		Z_Construct_UEnum_CommonOps_EAxMusicalPitchColor_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CommonOps_EAxMusicalPitchColor_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CommonOps_EAxMusicalPitchColor_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CommonOps_EAxMusicalPitchColor_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_CommonOps_EAxMusicalPitchColor()
	{
		if (!Z_Registration_Info_UEnum_EAxMusicalPitchColor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAxMusicalPitchColor.InnerSingleton, Z_Construct_UEnum_CommonOps_EAxMusicalPitchColor_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAxMusicalPitchColor.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_CommonOps_Public_UtilityClasses_AxUtilityEnums_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_CommonOps_Public_UtilityClasses_AxUtilityEnums_h_Statics::EnumInfo[] = {
		{ EAxTransformSpace_StaticEnum, TEXT("EAxTransformSpace"), &Z_Registration_Info_UEnum_EAxTransformSpace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2441190616U) },
		{ EAxMusicalPitchColor_StaticEnum, TEXT("EAxMusicalPitchColor"), &Z_Registration_Info_UEnum_EAxMusicalPitchColor, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1275516311U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_CommonOps_Public_UtilityClasses_AxUtilityEnums_h_2379362604(TEXT("/Script/CommonOps"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_CommonOps_Public_UtilityClasses_AxUtilityEnums_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_CommonOps_Public_UtilityClasses_AxUtilityEnums_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
