// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AxMidiCore/Public/MidiClasses/AxMidiAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAxMidiAsset() {}
// Cross Module References
	AXMIDICORE_API UClass* Z_Construct_UClass_UAxMidiAsset();
	AXMIDICORE_API UClass* Z_Construct_UClass_UAxMidiAsset_NoRegister();
	AXMIDICORE_API UClass* Z_Construct_UClass_UAxMidiEngineCoreSubsystem_NoRegister();
	AXMIDICORE_API UClass* Z_Construct_UClass_UAxMidiNote_NoRegister();
	AXMIDICORE_API UClass* Z_Construct_UClass_UAxMidiTrack_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatRange();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AxMidiCore();
// End Cross Module References
	DEFINE_FUNCTION(UAxMidiAsset::execGetBPM)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetBPM(Z_Param_InTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAxMidiAsset::execShiftNotes)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NumSemitones);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShiftNotes(Z_Param_NumSemitones);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAxMidiAsset::execGetAdjustedDuration)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InPlayRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=P_THIS->GetAdjustedDuration(Z_Param_InPlayRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAxMidiAsset::execGetDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=P_THIS->GetDuration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAxMidiAsset::execGetMidiTracksAsArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UAxMidiTrack*>*)Z_Param__Result=P_THIS->GetMidiTracksAsArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAxMidiAsset::execGetMidiTracksMapRef)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,UAxMidiTrack*>*)Z_Param__Result=P_THIS->GetMidiTracksMapRef();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAxMidiAsset::execGetMidiTrack)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TrackName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAxMidiTrack**)Z_Param__Result=P_THIS->GetMidiTrack(Z_Param_TrackName);
		P_NATIVE_END;
	}
	void UAxMidiAsset::StaticRegisterNativesUAxMidiAsset()
	{
		UClass* Class = UAxMidiAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAdjustedDuration", &UAxMidiAsset::execGetAdjustedDuration },
			{ "GetBPM", &UAxMidiAsset::execGetBPM },
			{ "GetDuration", &UAxMidiAsset::execGetDuration },
			{ "GetMidiTrack", &UAxMidiAsset::execGetMidiTrack },
			{ "GetMidiTracksAsArray", &UAxMidiAsset::execGetMidiTracksAsArray },
			{ "GetMidiTracksMapRef", &UAxMidiAsset::execGetMidiTracksMapRef },
			{ "ShiftNotes", &UAxMidiAsset::execShiftNotes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAxMidiAsset_GetAdjustedDuration_Statics
	{
		struct AxMidiAsset_eventGetAdjustedDuration_Parms
		{
			float InPlayRate;
			double ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InPlayRate;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAxMidiAsset_GetAdjustedDuration_Statics::NewProp_InPlayRate = { "InPlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiAsset_eventGetAdjustedDuration_Parms, InPlayRate), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UAxMidiAsset_GetAdjustedDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiAsset_eventGetAdjustedDuration_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAxMidiAsset_GetAdjustedDuration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiAsset_GetAdjustedDuration_Statics::NewProp_InPlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiAsset_GetAdjustedDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAxMidiAsset_GetAdjustedDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "MidiAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Duration will differ if PlayRate != 1.0. this function takes Playrate into consideration.\n\x09 * @param InPlayRate \n\x09 * @return \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MidiClasses/AxMidiAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Duration will differ if PlayRate != 1.0. this function takes Playrate into consideration.\n@param InPlayRate\n@return" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAxMidiAsset_GetAdjustedDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAxMidiAsset, nullptr, "GetAdjustedDuration", nullptr, nullptr, Z_Construct_UFunction_UAxMidiAsset_GetAdjustedDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiAsset_GetAdjustedDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAxMidiAsset_GetAdjustedDuration_Statics::AxMidiAsset_eventGetAdjustedDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiAsset_GetAdjustedDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAxMidiAsset_GetAdjustedDuration_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiAsset_GetAdjustedDuration_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAxMidiAsset_GetAdjustedDuration_Statics::AxMidiAsset_eventGetAdjustedDuration_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAxMidiAsset_GetAdjustedDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAxMidiAsset_GetAdjustedDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAxMidiAsset_GetBPM_Statics
	{
		struct AxMidiAsset_eventGetBPM_Parms
		{
			float InTime;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAxMidiAsset_GetBPM_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiAsset_eventGetBPM_Parms, InTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAxMidiAsset_GetBPM_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiAsset_eventGetBPM_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAxMidiAsset_GetBPM_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiAsset_GetBPM_Statics::NewProp_InTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiAsset_GetBPM_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAxMidiAsset_GetBPM_Statics::Function_MetaDataParams[] = {
		{ "Category", "MidiAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Gets the BPM at a certain time\n\x09 * @param InTime The time to get the BPM at.\n\x09 * @return 0 if no BPM info found, and a float BPM if found. Example 60.0 for 60BPM\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MidiClasses/AxMidiAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Gets the BPM at a certain time\n@param InTime The time to get the BPM at.\n@return 0 if no BPM info found, and a float BPM if found. Example 60.0 for 60BPM" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAxMidiAsset_GetBPM_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAxMidiAsset, nullptr, "GetBPM", nullptr, nullptr, Z_Construct_UFunction_UAxMidiAsset_GetBPM_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiAsset_GetBPM_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAxMidiAsset_GetBPM_Statics::AxMidiAsset_eventGetBPM_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiAsset_GetBPM_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAxMidiAsset_GetBPM_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiAsset_GetBPM_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAxMidiAsset_GetBPM_Statics::AxMidiAsset_eventGetBPM_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAxMidiAsset_GetBPM()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAxMidiAsset_GetBPM_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAxMidiAsset_GetDuration_Statics
	{
		struct AxMidiAsset_eventGetDuration_Parms
		{
			double ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UAxMidiAsset_GetDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiAsset_eventGetDuration_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAxMidiAsset_GetDuration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiAsset_GetDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAxMidiAsset_GetDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "MidiAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Returns the MIDIAsset's Duration. If it's 0, it will calculate it first.\n\x09 * @return Duration in Seconds\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MidiClasses/AxMidiAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Returns the MIDIAsset's Duration. If it's 0, it will calculate it first.\n@return Duration in Seconds" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAxMidiAsset_GetDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAxMidiAsset, nullptr, "GetDuration", nullptr, nullptr, Z_Construct_UFunction_UAxMidiAsset_GetDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiAsset_GetDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAxMidiAsset_GetDuration_Statics::AxMidiAsset_eventGetDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiAsset_GetDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAxMidiAsset_GetDuration_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiAsset_GetDuration_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAxMidiAsset_GetDuration_Statics::AxMidiAsset_eventGetDuration_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAxMidiAsset_GetDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAxMidiAsset_GetDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAxMidiAsset_GetMidiTrack_Statics
	{
		struct AxMidiAsset_eventGetMidiTrack_Parms
		{
			FString TrackName;
			UAxMidiTrack* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_TrackName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAxMidiAsset_GetMidiTrack_Statics::NewProp_TrackName = { "TrackName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiAsset_eventGetMidiTrack_Parms, TrackName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAxMidiAsset_GetMidiTrack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiAsset_eventGetMidiTrack_Parms, ReturnValue), Z_Construct_UClass_UAxMidiTrack_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAxMidiAsset_GetMidiTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiAsset_GetMidiTrack_Statics::NewProp_TrackName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiAsset_GetMidiTrack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAxMidiAsset_GetMidiTrack_Statics::Function_MetaDataParams[] = {
		{ "Category", "MidiAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Get's a MidiTrack using the TrackName (FString);\n\x09 * @param TrackName \n\x09 * @return The UAxMidiTrack* if found.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MidiClasses/AxMidiAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Get's a MidiTrack using the TrackName (FString);\n@param TrackName\n@return The UAxMidiTrack* if found." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAxMidiAsset_GetMidiTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAxMidiAsset, nullptr, "GetMidiTrack", nullptr, nullptr, Z_Construct_UFunction_UAxMidiAsset_GetMidiTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiAsset_GetMidiTrack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAxMidiAsset_GetMidiTrack_Statics::AxMidiAsset_eventGetMidiTrack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiAsset_GetMidiTrack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAxMidiAsset_GetMidiTrack_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiAsset_GetMidiTrack_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAxMidiAsset_GetMidiTrack_Statics::AxMidiAsset_eventGetMidiTrack_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAxMidiAsset_GetMidiTrack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAxMidiAsset_GetMidiTrack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAxMidiAsset_GetMidiTracksAsArray_Statics
	{
		struct AxMidiAsset_eventGetMidiTracksAsArray_Parms
		{
			TArray<UAxMidiTrack*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAxMidiAsset_GetMidiTracksAsArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAxMidiTrack_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAxMidiAsset_GetMidiTracksAsArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiAsset_eventGetMidiTracksAsArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAxMidiAsset_GetMidiTracksAsArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiAsset_GetMidiTracksAsArray_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiAsset_GetMidiTracksAsArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAxMidiAsset_GetMidiTracksAsArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "MidiAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Will return an array of all the UAxMidiTracks in this Asset.\n\x09 * @return TArray of UAxMidiTrack*\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MidiClasses/AxMidiAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Will return an array of all the UAxMidiTracks in this Asset.\n@return TArray of UAxMidiTrack*" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAxMidiAsset_GetMidiTracksAsArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAxMidiAsset, nullptr, "GetMidiTracksAsArray", nullptr, nullptr, Z_Construct_UFunction_UAxMidiAsset_GetMidiTracksAsArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiAsset_GetMidiTracksAsArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAxMidiAsset_GetMidiTracksAsArray_Statics::AxMidiAsset_eventGetMidiTracksAsArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiAsset_GetMidiTracksAsArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAxMidiAsset_GetMidiTracksAsArray_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiAsset_GetMidiTracksAsArray_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAxMidiAsset_GetMidiTracksAsArray_Statics::AxMidiAsset_eventGetMidiTracksAsArray_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAxMidiAsset_GetMidiTracksAsArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAxMidiAsset_GetMidiTracksAsArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAxMidiAsset_GetMidiTracksMapRef_Statics
	{
		struct AxMidiAsset_eventGetMidiTracksMapRef_Parms
		{
			TMap<FString,UAxMidiTrack*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAxMidiAsset_GetMidiTracksMapRef_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UAxMidiTrack_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAxMidiAsset_GetMidiTracksMapRef_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UAxMidiAsset_GetMidiTracksMapRef_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiAsset_eventGetMidiTracksMapRef_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAxMidiAsset_GetMidiTracksMapRef_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiAsset_GetMidiTracksMapRef_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiAsset_GetMidiTracksMapRef_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiAsset_GetMidiTracksMapRef_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAxMidiAsset_GetMidiTracksMapRef_Statics::Function_MetaDataParams[] = {
		{ "Category", "MidiAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Returns A Reference to the Map Containing all the miditracks.\n\x09 * @return \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MidiClasses/AxMidiAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Returns A Reference to the Map Containing all the miditracks.\n@return" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAxMidiAsset_GetMidiTracksMapRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAxMidiAsset, nullptr, "GetMidiTracksMapRef", nullptr, nullptr, Z_Construct_UFunction_UAxMidiAsset_GetMidiTracksMapRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiAsset_GetMidiTracksMapRef_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAxMidiAsset_GetMidiTracksMapRef_Statics::AxMidiAsset_eventGetMidiTracksMapRef_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiAsset_GetMidiTracksMapRef_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAxMidiAsset_GetMidiTracksMapRef_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiAsset_GetMidiTracksMapRef_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAxMidiAsset_GetMidiTracksMapRef_Statics::AxMidiAsset_eventGetMidiTracksMapRef_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAxMidiAsset_GetMidiTracksMapRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAxMidiAsset_GetMidiTracksMapRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAxMidiAsset_ShiftNotes_Statics
	{
		struct AxMidiAsset_eventShiftNotes_Parms
		{
			int32 NumSemitones;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumSemitones;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAxMidiAsset_ShiftNotes_Statics::NewProp_NumSemitones = { "NumSemitones", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiAsset_eventShiftNotes_Parms, NumSemitones), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAxMidiAsset_ShiftNotes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiAsset_ShiftNotes_Statics::NewProp_NumSemitones,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAxMidiAsset_ShiftNotes_Statics::Function_MetaDataParams[] = {
		{ "Category", "MidiAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Will Shift All MidiNotes in the MidiAsset by the amount and direction specificed by NumSemitones.\n\x09 *        \n\x09 * @param NumSemitones Number of semitones to shift by. If positive, shifts up, negative shifts down. 12 semitones is an octave.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MidiClasses/AxMidiAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Will Shift All MidiNotes in the MidiAsset by the amount and direction specificed by NumSemitones.\n\n@param NumSemitones Number of semitones to shift by. If positive, shifts up, negative shifts down. 12 semitones is an octave." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAxMidiAsset_ShiftNotes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAxMidiAsset, nullptr, "ShiftNotes", nullptr, nullptr, Z_Construct_UFunction_UAxMidiAsset_ShiftNotes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiAsset_ShiftNotes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAxMidiAsset_ShiftNotes_Statics::AxMidiAsset_eventShiftNotes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiAsset_ShiftNotes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAxMidiAsset_ShiftNotes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiAsset_ShiftNotes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAxMidiAsset_ShiftNotes_Statics::AxMidiAsset_eventShiftNotes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAxMidiAsset_ShiftNotes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAxMidiAsset_ShiftNotes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAxMidiAsset);
	UClass* Z_Construct_UClass_UAxMidiAsset_NoRegister()
	{
		return UAxMidiAsset::StaticClass();
	}
	struct Z_Construct_UClass_UAxMidiAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MidiEngineCoreSubsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MidiEngineCoreSubsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeSignatureNumerator_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TimeSignatureNumerator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeSignatureDenominator_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TimeSignatureDenominator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BPMCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BPMCurve;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReimportPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReimportPath;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceMidiFilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourceMidiFilePath;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MidiNotesQueue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MidiNotesQueue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MidiNotesQueue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNotesSorted_MetaData[];
#endif
		static void NewProp_bNotesSorted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNotesSorted;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LoopSections_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_LoopSections_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoopSections_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_LoopSections;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MidiTracksMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MidiTracksMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MidiTracksMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MidiTracksMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAxMidiAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AxMidiCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiAsset_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAxMidiAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAxMidiAsset_GetAdjustedDuration, "GetAdjustedDuration" }, // 60296783
		{ &Z_Construct_UFunction_UAxMidiAsset_GetBPM, "GetBPM" }, // 591495204
		{ &Z_Construct_UFunction_UAxMidiAsset_GetDuration, "GetDuration" }, // 1081397786
		{ &Z_Construct_UFunction_UAxMidiAsset_GetMidiTrack, "GetMidiTrack" }, // 3233756479
		{ &Z_Construct_UFunction_UAxMidiAsset_GetMidiTracksAsArray, "GetMidiTracksAsArray" }, // 3360576257
		{ &Z_Construct_UFunction_UAxMidiAsset_GetMidiTracksMapRef, "GetMidiTracksMapRef" }, // 1345916284
		{ &Z_Construct_UFunction_UAxMidiAsset_ShiftNotes, "ShiftNotes" }, // 1152354966
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiAsset_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The UAxMidiAsset contains the UAxMidiTracks which Contain the UAxMidiNotes\n * UAxMidiAsset->UAxMidiTrack->UAxMidiNote\n */" },
#endif
		{ "DisplayName", "Midi Asset" },
		{ "IncludePath", "MidiClasses/AxMidiAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MidiClasses/AxMidiAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The UAxMidiAsset contains the UAxMidiTracks which Contain the UAxMidiNotes\nUAxMidiAsset->UAxMidiTrack->UAxMidiNote" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_MidiEngineCoreSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/MidiClasses/AxMidiAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_MidiEngineCoreSubsystem = { "MidiEngineCoreSubsystem", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxMidiAsset, MidiEngineCoreSubsystem), Z_Construct_UClass_UAxMidiEngineCoreSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_MidiEngineCoreSubsystem_MetaData), Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_MidiEngineCoreSubsystem_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "MidiAsset | Metadata" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief The name of the Midi asset. Inherited from the original MIDI file name.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MidiClasses/AxMidiAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief The name of the Midi asset. Inherited from the original MIDI file name." },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxMidiAsset, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_Name_MetaData), Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "MidiAsset | Metadata" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief The total duration of the Midifile, in seconds. Use the Getter\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MidiClasses/AxMidiAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief The total duration of the Midifile, in seconds. Use the Getter" },
#endif
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxMidiAsset, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_Duration_MetaData), Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_Duration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_TimeSignatureNumerator_MetaData[] = {
		{ "Category", "MidiAsset | Metadata" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * Default 4/4 time signature\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MidiClasses/AxMidiAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Default 4/4 time signature" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_TimeSignatureNumerator = { "TimeSignatureNumerator", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxMidiAsset, TimeSignatureNumerator), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_TimeSignatureNumerator_MetaData), Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_TimeSignatureNumerator_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_TimeSignatureDenominator_MetaData[] = {
		{ "Category", "MidiAsset | Metadata" },
		{ "ModuleRelativePath", "Public/MidiClasses/AxMidiAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_TimeSignatureDenominator = { "TimeSignatureDenominator", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxMidiAsset, TimeSignatureDenominator), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_TimeSignatureDenominator_MetaData), Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_TimeSignatureDenominator_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_BPMCurve_MetaData[] = {
		{ "Category", "MidiAsset | MetaEvents" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Curve Representing BPM of the MidiAsset.\n\x09 * Call GetBPM() Function to get the BPM at a certain time.\n\x09 */" },
#endif
		{ "DisplayName", "BPM Curve" },
		{ "ModuleRelativePath", "Public/MidiClasses/AxMidiAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Curve Representing BPM of the MidiAsset.\nCall GetBPM() Function to get the BPM at a certain time." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_BPMCurve = { "BPMCurve", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxMidiAsset, BPMCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_BPMCurve_MetaData), Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_BPMCurve_MetaData) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_ReimportPath_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//We'll temporarily save the extension of the file selected for reimport so we can check in Factory reimport func\n" },
#endif
		{ "ModuleRelativePath", "Public/MidiClasses/AxMidiAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "We'll temporarily save the extension of the file selected for reimport so we can check in Factory reimport func" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_ReimportPath = { "ReimportPath", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxMidiAsset, ReimportPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_ReimportPath_MetaData), Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_ReimportPath_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_SourceMidiFilePath_MetaData[] = {
		{ "Category", "MidiAsset | EditorMetadata" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief The original file path of the .mid on disk.\n\x09 *\x09\x09 Stored on asset creation, used and updated for reimporting.\n\x09 *\x09\x09 Used in ReImporter UFactory.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MidiClasses/AxMidiAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief The original file path of the .mid on disk.\n              Stored on asset creation, used and updated for reimporting.\n              Used in ReImporter UFactory." },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_SourceMidiFilePath = { "SourceMidiFilePath", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxMidiAsset, SourceMidiFilePath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_SourceMidiFilePath_MetaData), Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_SourceMidiFilePath_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_MidiNotesQueue_Inner = { "MidiNotesQueue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAxMidiNote_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_MidiNotesQueue_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief List of all MidiNotes in this MidiAsset sorted by StartTime....\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MidiClasses/AxMidiAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief List of all MidiNotes in this MidiAsset sorted by StartTime...." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_MidiNotesQueue = { "MidiNotesQueue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxMidiAsset, MidiNotesQueue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_MidiNotesQueue_MetaData), Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_MidiNotesQueue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_bNotesSorted_MetaData[] = {
		{ "ModuleRelativePath", "Public/MidiClasses/AxMidiAsset.h" },
	};
#endif
	void Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_bNotesSorted_SetBit(void* Obj)
	{
		((UAxMidiAsset*)Obj)->bNotesSorted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_bNotesSorted = { "bNotesSorted", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAxMidiAsset), &Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_bNotesSorted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_bNotesSorted_MetaData), Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_bNotesSorted_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_LoopSections_ValueProp = { "LoopSections", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_LoopSections_Key_KeyProp = { "LoopSections_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_LoopSections_MetaData[] = {
		{ "Category", "MidiAsset | Sections" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief You can define Loop Sections for your MidiAsset Playback.\n\x09 *        Eg, Define the \"intro\" section , 0 to 1s.\n\x09 *\x09\x09  You can then loop that section during playback and decide when to move forward.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MidiClasses/AxMidiAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief You can define Loop Sections for your MidiAsset Playback.\n       Eg, Define the \"intro\" section , 0 to 1s.\n               You can then loop that section during playback and decide when to move forward." },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_LoopSections = { "LoopSections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxMidiAsset, LoopSections), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_LoopSections_MetaData), Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_LoopSections_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_MidiTracksMap_ValueProp = { "MidiTracksMap", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UAxMidiTrack_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_MidiTracksMap_Key_KeyProp = { "MidiTracksMap_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_MidiTracksMap_MetaData[] = {
		{ "Category", "MidiAsset | Tracks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * This data structure holds a list of UAxMidiTracks in the UAxMidiAsset.\n\x09 * Key is Track Name and Value is the actual MidiTrack.\n\x09 * NB: We did not use a TARRAY so that we could save a reference to a UAxMidiTrack, using it's name rather than the actual pointer.\n\x09 * Call @related GetMidiTracksAsArray() to easily get the tracks as an array.\n\x09 * Some systems in the Editor work better if we save an FString(key) than the UAxMidiTrack*\n\x09 * TODO: FString is case insensitive in a map. Bass and bass will override each other.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MidiClasses/AxMidiAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This data structure holds a list of UAxMidiTracks in the UAxMidiAsset.\nKey is Track Name and Value is the actual MidiTrack.\nNB: We did not use a TARRAY so that we could save a reference to a UAxMidiTrack, using it's name rather than the actual pointer.\nCall @related GetMidiTracksAsArray() to easily get the tracks as an array.\nSome systems in the Editor work better if we save an FString(key) than the UAxMidiTrack*\nTODO: FString is case insensitive in a map. Bass and bass will override each other." },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_MidiTracksMap = { "MidiTracksMap", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxMidiAsset, MidiTracksMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_MidiTracksMap_MetaData), Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_MidiTracksMap_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAxMidiAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_MidiEngineCoreSubsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_TimeSignatureNumerator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_TimeSignatureDenominator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_BPMCurve,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_ReimportPath,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_SourceMidiFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_MidiNotesQueue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_MidiNotesQueue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_bNotesSorted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_LoopSections_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_LoopSections_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_LoopSections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_MidiTracksMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_MidiTracksMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxMidiAsset_Statics::NewProp_MidiTracksMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAxMidiAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAxMidiAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAxMidiAsset_Statics::ClassParams = {
		&UAxMidiAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAxMidiAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UAxMidiAsset_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiAsset_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAxMidiAsset()
	{
		if (!Z_Registration_Info_UClass_UAxMidiAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAxMidiAsset.OuterSingleton, Z_Construct_UClass_UAxMidiAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAxMidiAsset.OuterSingleton;
	}
	template<> AXMIDICORE_API UClass* StaticClass<UAxMidiAsset>()
	{
		return UAxMidiAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAxMidiAsset);
	UAxMidiAsset::~UAxMidiAsset() {}
	struct Z_CompiledInDeferFile_FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiCore_Public_MidiClasses_AxMidiAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiCore_Public_MidiClasses_AxMidiAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAxMidiAsset, UAxMidiAsset::StaticClass, TEXT("UAxMidiAsset"), &Z_Registration_Info_UClass_UAxMidiAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAxMidiAsset), 3800884273U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiCore_Public_MidiClasses_AxMidiAsset_h_1397888184(TEXT("/Script/AxMidiCore"),
		Z_CompiledInDeferFile_FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiCore_Public_MidiClasses_AxMidiAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiCore_Public_MidiClasses_AxMidiAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
