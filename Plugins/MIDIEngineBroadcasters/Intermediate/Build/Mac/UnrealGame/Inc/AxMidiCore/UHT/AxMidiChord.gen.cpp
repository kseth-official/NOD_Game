// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AxMidiCore/Public/MidiClasses/AxMidiChord.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAxMidiChord() {}
// Cross Module References
	AXMIDICORE_API UClass* Z_Construct_UClass_UAxMidiNote_NoRegister();
	AXMIDICORE_API UEnum* Z_Construct_UEnum_AxMidiCore_EAxMidiChordStructure();
	AXMIDICORE_API UEnum* Z_Construct_UEnum_AxMidiCore_EAxMidiChordType();
	AXMIDICORE_API UScriptStruct* Z_Construct_UScriptStruct_FAxMidiChord();
	UPackage* Z_Construct_UPackage__Script_AxMidiCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAxMidiChordType;
	static UEnum* EAxMidiChordType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAxMidiChordType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAxMidiChordType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AxMidiCore_EAxMidiChordType, (UObject*)Z_Construct_UPackage__Script_AxMidiCore(), TEXT("EAxMidiChordType"));
		}
		return Z_Registration_Info_UEnum_EAxMidiChordType.OuterSingleton;
	}
	template<> AXMIDICORE_API UEnum* StaticEnum<EAxMidiChordType>()
	{
		return EAxMidiChordType_StaticEnum();
	}
	struct Z_Construct_UEnum_AxMidiCore_EAxMidiChordType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AxMidiCore_EAxMidiChordType_Statics::Enumerators[] = {
		{ "EAxMidiChordType::SINGLENOTE", (int64)EAxMidiChordType::SINGLENOTE },
		{ "EAxMidiChordType::INTERVAL", (int64)EAxMidiChordType::INTERVAL },
		{ "EAxMidiChordType::CHORD", (int64)EAxMidiChordType::CHORD },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AxMidiCore_EAxMidiChordType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CHORD.Comment", "//\n//2 notes\n" },
		{ "CHORD.Name", "EAxMidiChordType::CHORD" },
		{ "CHORD.ToolTip", "2 notes" },
		{ "INTERVAL.Comment", "//\n" },
		{ "INTERVAL.Name", "EAxMidiChordType::INTERVAL" },
		{ "ModuleRelativePath", "Public/MidiClasses/AxMidiChord.h" },
		{ "SINGLENOTE.Name", "EAxMidiChordType::SINGLENOTE" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AxMidiCore_EAxMidiChordType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AxMidiCore,
		nullptr,
		"EAxMidiChordType",
		"EAxMidiChordType",
		Z_Construct_UEnum_AxMidiCore_EAxMidiChordType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AxMidiCore_EAxMidiChordType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AxMidiCore_EAxMidiChordType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AxMidiCore_EAxMidiChordType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AxMidiCore_EAxMidiChordType()
	{
		if (!Z_Registration_Info_UEnum_EAxMidiChordType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAxMidiChordType.InnerSingleton, Z_Construct_UEnum_AxMidiCore_EAxMidiChordType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAxMidiChordType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAxMidiChordStructure;
	static UEnum* EAxMidiChordStructure_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAxMidiChordStructure.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAxMidiChordStructure.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AxMidiCore_EAxMidiChordStructure, (UObject*)Z_Construct_UPackage__Script_AxMidiCore(), TEXT("EAxMidiChordStructure"));
		}
		return Z_Registration_Info_UEnum_EAxMidiChordStructure.OuterSingleton;
	}
	template<> AXMIDICORE_API UEnum* StaticEnum<EAxMidiChordStructure>()
	{
		return EAxMidiChordStructure_StaticEnum();
	}
	struct Z_Construct_UEnum_AxMidiCore_EAxMidiChordStructure_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AxMidiCore_EAxMidiChordStructure_Statics::Enumerators[] = {
		{ "EAxMidiChordStructure::ALLWHITENOTES", (int64)EAxMidiChordStructure::ALLWHITENOTES },
		{ "EAxMidiChordStructure::ALLBLACKNOTES", (int64)EAxMidiChordStructure::ALLBLACKNOTES },
		{ "EAxMidiChordStructure::MIXEDNOTES", (int64)EAxMidiChordStructure::MIXEDNOTES },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AxMidiCore_EAxMidiChordStructure_Statics::Enum_MetaDataParams[] = {
		{ "ALLBLACKNOTES.DisplayName", "ALL BLACK NOTES" },
		{ "ALLBLACKNOTES.Name", "EAxMidiChordStructure::ALLBLACKNOTES" },
		{ "ALLWHITENOTES.DisplayName", "ALL WHITE NOTES" },
		{ "ALLWHITENOTES.Name", "EAxMidiChordStructure::ALLWHITENOTES" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * @brief Is the chord made up of only White Notes? or Only Black Notes or Mixed\n */" },
		{ "MIXEDNOTES.DisplayName", "MIXED NOTES" },
		{ "MIXEDNOTES.Name", "EAxMidiChordStructure::MIXEDNOTES" },
		{ "ModuleRelativePath", "Public/MidiClasses/AxMidiChord.h" },
		{ "ToolTip", "@brief Is the chord made up of only White Notes? or Only Black Notes or Mixed" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AxMidiCore_EAxMidiChordStructure_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AxMidiCore,
		nullptr,
		"EAxMidiChordStructure",
		"EAxMidiChordStructure",
		Z_Construct_UEnum_AxMidiCore_EAxMidiChordStructure_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AxMidiCore_EAxMidiChordStructure_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AxMidiCore_EAxMidiChordStructure_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AxMidiCore_EAxMidiChordStructure_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AxMidiCore_EAxMidiChordStructure()
	{
		if (!Z_Registration_Info_UEnum_EAxMidiChordStructure.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAxMidiChordStructure.InnerSingleton, Z_Construct_UEnum_AxMidiCore_EAxMidiChordStructure_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAxMidiChordStructure.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AxMidiChord;
class UScriptStruct* FAxMidiChord::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AxMidiChord.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AxMidiChord.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAxMidiChord, (UObject*)Z_Construct_UPackage__Script_AxMidiCore(), TEXT("AxMidiChord"));
	}
	return Z_Registration_Info_UScriptStruct_AxMidiChord.OuterSingleton;
}
template<> AXMIDICORE_API UScriptStruct* StaticStruct<FAxMidiChord>()
{
	return FAxMidiChord::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAxMidiChord_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ChordNotes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChordNotes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChordNotes;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ChordType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChordType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ChordType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ChordStructure_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChordStructure_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ChordStructure;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAxMidiChord_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Simple Structure to Represent a chord.\n * A Chord is a group of notes from the same track, playing at the same time.\n */" },
		{ "ModuleRelativePath", "Public/MidiClasses/AxMidiChord.h" },
		{ "ToolTip", "Simple Structure to Represent a chord.\nA Chord is a group of notes from the same track, playing at the same time." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAxMidiChord_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAxMidiChord>();
	}
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAxMidiChord_Statics::NewProp_ChordNotes_Inner = { "ChordNotes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAxMidiNote_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAxMidiChord_Statics::NewProp_ChordNotes_MetaData[] = {
		{ "ModuleRelativePath", "Public/MidiClasses/AxMidiChord.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAxMidiChord_Statics::NewProp_ChordNotes = { "ChordNotes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAxMidiChord, ChordNotes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAxMidiChord_Statics::NewProp_ChordNotes_MetaData), Z_Construct_UScriptStruct_FAxMidiChord_Statics::NewProp_ChordNotes_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAxMidiChord_Statics::NewProp_ChordType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAxMidiChord_Statics::NewProp_ChordType_MetaData[] = {
		{ "ModuleRelativePath", "Public/MidiClasses/AxMidiChord.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAxMidiChord_Statics::NewProp_ChordType = { "ChordType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAxMidiChord, ChordType), Z_Construct_UEnum_AxMidiCore_EAxMidiChordType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAxMidiChord_Statics::NewProp_ChordType_MetaData), Z_Construct_UScriptStruct_FAxMidiChord_Statics::NewProp_ChordType_MetaData) }; // 125224421
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAxMidiChord_Statics::NewProp_ChordStructure_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAxMidiChord_Statics::NewProp_ChordStructure_MetaData[] = {
		{ "ModuleRelativePath", "Public/MidiClasses/AxMidiChord.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAxMidiChord_Statics::NewProp_ChordStructure = { "ChordStructure", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAxMidiChord, ChordStructure), Z_Construct_UEnum_AxMidiCore_EAxMidiChordStructure, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAxMidiChord_Statics::NewProp_ChordStructure_MetaData), Z_Construct_UScriptStruct_FAxMidiChord_Statics::NewProp_ChordStructure_MetaData) }; // 2611505061
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAxMidiChord_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAxMidiChord_Statics::NewProp_ChordNotes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAxMidiChord_Statics::NewProp_ChordNotes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAxMidiChord_Statics::NewProp_ChordType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAxMidiChord_Statics::NewProp_ChordType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAxMidiChord_Statics::NewProp_ChordStructure_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAxMidiChord_Statics::NewProp_ChordStructure,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAxMidiChord_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AxMidiCore,
		nullptr,
		&NewStructOps,
		"AxMidiChord",
		Z_Construct_UScriptStruct_FAxMidiChord_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAxMidiChord_Statics::PropPointers),
		sizeof(FAxMidiChord),
		alignof(FAxMidiChord),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAxMidiChord_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAxMidiChord_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAxMidiChord_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAxMidiChord()
	{
		if (!Z_Registration_Info_UScriptStruct_AxMidiChord.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AxMidiChord.InnerSingleton, Z_Construct_UScriptStruct_FAxMidiChord_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AxMidiChord.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiCore_Public_MidiClasses_AxMidiChord_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiCore_Public_MidiClasses_AxMidiChord_h_Statics::EnumInfo[] = {
		{ EAxMidiChordType_StaticEnum, TEXT("EAxMidiChordType"), &Z_Registration_Info_UEnum_EAxMidiChordType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 125224421U) },
		{ EAxMidiChordStructure_StaticEnum, TEXT("EAxMidiChordStructure"), &Z_Registration_Info_UEnum_EAxMidiChordStructure, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2611505061U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiCore_Public_MidiClasses_AxMidiChord_h_Statics::ScriptStructInfo[] = {
		{ FAxMidiChord::StaticStruct, Z_Construct_UScriptStruct_FAxMidiChord_Statics::NewStructOps, TEXT("AxMidiChord"), &Z_Registration_Info_UScriptStruct_AxMidiChord, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAxMidiChord), 1288995871U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiCore_Public_MidiClasses_AxMidiChord_h_2531095642(TEXT("/Script/AxMidiCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiCore_Public_MidiClasses_AxMidiChord_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiCore_Public_MidiClasses_AxMidiChord_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiCore_Public_MidiClasses_AxMidiChord_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiCore_Public_MidiClasses_AxMidiChord_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
