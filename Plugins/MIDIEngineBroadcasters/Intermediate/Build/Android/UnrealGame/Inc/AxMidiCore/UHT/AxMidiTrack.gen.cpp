// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AxMidiCore/Public/MidiClasses/AxMidiTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAxMidiTrack() {}
// Cross Module References
	AXMIDICORE_API UClass* Z_Construct_UClass_UAxMidiAsset_NoRegister();
	AXMIDICORE_API UClass* Z_Construct_UClass_UAxMidiNote_NoRegister();
	AXMIDICORE_API UClass* Z_Construct_UClass_UAxMidiPitchRow();
	AXMIDICORE_API UClass* Z_Construct_UClass_UAxMidiPitchRow_NoRegister();
	AXMIDICORE_API UClass* Z_Construct_UClass_UAxMidiTrack();
	AXMIDICORE_API UClass* Z_Construct_UClass_UAxMidiTrack_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AxMidiCore();
// End Cross Module References
	void UAxMidiPitchRow::StaticRegisterNativesUAxMidiPitchRow()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAxMidiPitchRow);
	UClass* Z_Construct_UClass_UAxMidiPitchRow_NoRegister()
	{
		return UAxMidiPitchRow::StaticClass();
	}
	struct Z_Construct_UClass_UAxMidiPitchRow_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MidiNotes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MidiNotes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MidiNotes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAxMidiPitchRow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AxMidiCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiPitchRow_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiPitchRow_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * @brief Think of a PitchName(eg C5) and it's row of notes. ,  it contains multiple C5 instances...\n *         We wish to support having multiple instances of C5 playing at the same time..\n *         Basically an array. We are avoiding the \"nested containers\" limitation with this struct.\n */" },
		{ "DisplayName", "Midi Pitch Row" },
		{ "IncludePath", "MidiClasses/AxMidiTrack.h" },
		{ "ModuleRelativePath", "Public/MidiClasses/AxMidiTrack.h" },
		{ "ToolTip", "@brief Think of a PitchName(eg C5) and it's row of notes. ,  it contains multiple C5 instances...\n        We wish to support having multiple instances of C5 playing at the same time..\n        Basically an array. We are avoiding the \"nested containers\" limitation with this struct." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAxMidiPitchRow_Statics::NewProp_MidiNotes_Inner = { "MidiNotes", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAxMidiNote_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiPitchRow_Statics::NewProp_MidiNotes_MetaData[] = {
		{ "Category", "MidiEngine" },
		{ "ModuleRelativePath", "Public/MidiClasses/AxMidiTrack.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAxMidiPitchRow_Statics::NewProp_MidiNotes = { "MidiNotes", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxMidiPitchRow, MidiNotes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiPitchRow_Statics::NewProp_MidiNotes_MetaData), Z_Construct_UClass_UAxMidiPitchRow_Statics::NewProp_MidiNotes_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAxMidiPitchRow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxMidiPitchRow_Statics::NewProp_MidiNotes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxMidiPitchRow_Statics::NewProp_MidiNotes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAxMidiPitchRow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAxMidiPitchRow>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAxMidiPitchRow_Statics::ClassParams = {
		&UAxMidiPitchRow::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAxMidiPitchRow_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiPitchRow_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiPitchRow_Statics::Class_MetaDataParams), Z_Construct_UClass_UAxMidiPitchRow_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiPitchRow_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAxMidiPitchRow()
	{
		if (!Z_Registration_Info_UClass_UAxMidiPitchRow.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAxMidiPitchRow.OuterSingleton, Z_Construct_UClass_UAxMidiPitchRow_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAxMidiPitchRow.OuterSingleton;
	}
	template<> AXMIDICORE_API UClass* StaticClass<UAxMidiPitchRow>()
	{
		return UAxMidiPitchRow::StaticClass();
	}
	UAxMidiPitchRow::UAxMidiPitchRow(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAxMidiPitchRow);
	UAxMidiPitchRow::~UAxMidiPitchRow() {}
	DEFINE_FUNCTION(UAxMidiTrack::execGetMidiNotesAsArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UAxMidiNote*>*)Z_Param__Result=P_THIS->GetMidiNotesAsArray();
		P_NATIVE_END;
	}
	void UAxMidiTrack::StaticRegisterNativesUAxMidiTrack()
	{
		UClass* Class = UAxMidiTrack::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMidiNotesAsArray", &UAxMidiTrack::execGetMidiNotesAsArray },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAxMidiTrack_GetMidiNotesAsArray_Statics
	{
		struct AxMidiTrack_eventGetMidiNotesAsArray_Parms
		{
			TArray<UAxMidiNote*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAxMidiTrack_GetMidiNotesAsArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAxMidiNote_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAxMidiTrack_GetMidiNotesAsArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiTrack_eventGetMidiNotesAsArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAxMidiTrack_GetMidiNotesAsArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiTrack_GetMidiNotesAsArray_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiTrack_GetMidiNotesAsArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAxMidiTrack_GetMidiNotesAsArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "MidiTrack" },
		{ "Comment", "/**\n\x09 * @brief Gets all MidiNotes inside this track as an Array\n\x09 * @return Array of MidiNotes\n\x09 */" },
		{ "ModuleRelativePath", "Public/MidiClasses/AxMidiTrack.h" },
		{ "ToolTip", "@brief Gets all MidiNotes inside this track as an Array\n@return Array of MidiNotes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAxMidiTrack_GetMidiNotesAsArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAxMidiTrack, nullptr, "GetMidiNotesAsArray", nullptr, nullptr, Z_Construct_UFunction_UAxMidiTrack_GetMidiNotesAsArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiTrack_GetMidiNotesAsArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAxMidiTrack_GetMidiNotesAsArray_Statics::AxMidiTrack_eventGetMidiNotesAsArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiTrack_GetMidiNotesAsArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAxMidiTrack_GetMidiNotesAsArray_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiTrack_GetMidiNotesAsArray_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAxMidiTrack_GetMidiNotesAsArray_Statics::AxMidiTrack_eventGetMidiNotesAsArray_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAxMidiTrack_GetMidiNotesAsArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAxMidiTrack_GetMidiNotesAsArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAxMidiTrack);
	UClass* Z_Construct_UClass_UAxMidiTrack_NoRegister()
	{
		return UAxMidiTrack::StaticClass();
	}
	struct Z_Construct_UClass_UAxMidiTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TrackName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MidiAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MidiAsset;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PitchRowsMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PitchRowsMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchRowsMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PitchRowsMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchBendCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PitchBendCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAxMidiTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AxMidiCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiTrack_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAxMidiTrack_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAxMidiTrack_GetMidiNotesAsArray, "GetMidiNotesAsArray" }, // 2511112958
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiTrack_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiTrack_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Midi Track Class containing its UAxMidiNotes*\n */" },
		{ "DisplayName", "Midi Track" },
		{ "IncludePath", "MidiClasses/AxMidiTrack.h" },
		{ "ModuleRelativePath", "Public/MidiClasses/AxMidiTrack.h" },
		{ "ToolTip", "Midi Track Class containing its UAxMidiNotes*" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiTrack_Statics::NewProp_TrackName_MetaData[] = {
		{ "Category", "MidiEngine" },
		{ "Comment", "/**\n\x09 * The Track Name/ID\n\x09 * Use getter/setter.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MidiClasses/AxMidiTrack.h" },
		{ "ToolTip", "The Track Name/ID\nUse getter/setter." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAxMidiTrack_Statics::NewProp_TrackName = { "TrackName", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxMidiTrack, TrackName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiTrack_Statics::NewProp_TrackName_MetaData), Z_Construct_UClass_UAxMidiTrack_Statics::NewProp_TrackName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiTrack_Statics::NewProp_MidiAsset_MetaData[] = {
		{ "Comment", "/**\n\x09 * @brief The Owning MidiAsset.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MidiClasses/AxMidiTrack.h" },
		{ "ToolTip", "@brief The Owning MidiAsset." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAxMidiTrack_Statics::NewProp_MidiAsset = { "MidiAsset", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxMidiTrack, MidiAsset), Z_Construct_UClass_UAxMidiAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiTrack_Statics::NewProp_MidiAsset_MetaData), Z_Construct_UClass_UAxMidiTrack_Statics::NewProp_MidiAsset_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAxMidiTrack_Statics::NewProp_PitchRowsMap_ValueProp = { "PitchRowsMap", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UAxMidiPitchRow_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAxMidiTrack_Statics::NewProp_PitchRowsMap_Key_KeyProp = { "PitchRowsMap_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiTrack_Statics::NewProp_PitchRowsMap_MetaData[] = {
		{ "Category", "MidiEngine" },
		{ "Comment", "/**\n\x09 * @brief Key is PitchName, like \"C5\".\n\x09 *        Value is all instances of \"C5\" notes...\n\x09 */" },
		{ "ModuleRelativePath", "Public/MidiClasses/AxMidiTrack.h" },
		{ "ToolTip", "@brief Key is PitchName, like \"C5\".\n       Value is all instances of \"C5\" notes..." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAxMidiTrack_Statics::NewProp_PitchRowsMap = { "PitchRowsMap", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxMidiTrack, PitchRowsMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiTrack_Statics::NewProp_PitchRowsMap_MetaData), Z_Construct_UClass_UAxMidiTrack_Statics::NewProp_PitchRowsMap_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiTrack_Statics::NewProp_PitchBendCurve_MetaData[] = {
		{ "Category", "MidiEngine|CC Curves" },
		{ "Comment", "/**\n\x09 * @brief Curve Representing all PitchBend events...\n\x09 */" },
		{ "ModuleRelativePath", "Public/MidiClasses/AxMidiTrack.h" },
		{ "ToolTip", "@brief Curve Representing all PitchBend events..." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAxMidiTrack_Statics::NewProp_PitchBendCurve = { "PitchBendCurve", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxMidiTrack, PitchBendCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiTrack_Statics::NewProp_PitchBendCurve_MetaData), Z_Construct_UClass_UAxMidiTrack_Statics::NewProp_PitchBendCurve_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAxMidiTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxMidiTrack_Statics::NewProp_TrackName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxMidiTrack_Statics::NewProp_MidiAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxMidiTrack_Statics::NewProp_PitchRowsMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxMidiTrack_Statics::NewProp_PitchRowsMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxMidiTrack_Statics::NewProp_PitchRowsMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxMidiTrack_Statics::NewProp_PitchBendCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAxMidiTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAxMidiTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAxMidiTrack_Statics::ClassParams = {
		&UAxMidiTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAxMidiTrack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiTrack_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiTrack_Statics::Class_MetaDataParams), Z_Construct_UClass_UAxMidiTrack_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiTrack_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAxMidiTrack()
	{
		if (!Z_Registration_Info_UClass_UAxMidiTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAxMidiTrack.OuterSingleton, Z_Construct_UClass_UAxMidiTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAxMidiTrack.OuterSingleton;
	}
	template<> AXMIDICORE_API UClass* StaticClass<UAxMidiTrack>()
	{
		return UAxMidiTrack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAxMidiTrack);
	UAxMidiTrack::~UAxMidiTrack() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiCore_Public_MidiClasses_AxMidiTrack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiCore_Public_MidiClasses_AxMidiTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAxMidiPitchRow, UAxMidiPitchRow::StaticClass, TEXT("UAxMidiPitchRow"), &Z_Registration_Info_UClass_UAxMidiPitchRow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAxMidiPitchRow), 3088225624U) },
		{ Z_Construct_UClass_UAxMidiTrack, UAxMidiTrack::StaticClass, TEXT("UAxMidiTrack"), &Z_Registration_Info_UClass_UAxMidiTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAxMidiTrack), 1278152423U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiCore_Public_MidiClasses_AxMidiTrack_h_74101594(TEXT("/Script/AxMidiCore"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiCore_Public_MidiClasses_AxMidiTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiCore_Public_MidiClasses_AxMidiTrack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
