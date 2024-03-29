// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AxMidiCore/Public/MidiClasses/AxMidiNote.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAxMidiNote() {}
// Cross Module References
	AXMIDICORE_API UClass* Z_Construct_UClass_UAxMidiAsset_NoRegister();
	AXMIDICORE_API UClass* Z_Construct_UClass_UAxMidiNote();
	AXMIDICORE_API UClass* Z_Construct_UClass_UAxMidiNote_NoRegister();
	AXMIDICORE_API UClass* Z_Construct_UClass_UAxMidiTrack_NoRegister();
	AXMIDICORE_API UScriptStruct* Z_Construct_UScriptStruct_FAxMidiNoteProperties();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AxMidiCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AxMidiNoteProperties;
class UScriptStruct* FAxMidiNoteProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AxMidiNoteProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AxMidiNoteProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAxMidiNoteProperties, (UObject*)Z_Construct_UPackage__Script_AxMidiCore(), TEXT("AxMidiNoteProperties"));
	}
	return Z_Registration_Info_UScriptStruct_AxMidiNoteProperties.OuterSingleton;
}
template<> AXMIDICORE_API UScriptStruct* StaticStruct<FAxMidiNoteProperties>()
{
	return FAxMidiNoteProperties::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAxMidiNoteProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchNumber_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PitchNumber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PitchName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StopTime_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_StopTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Velocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAxMidiNoteProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "MidiNoteProperties" },
		{ "ModuleRelativePath", "Public/MidiClasses/AxMidiNote.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAxMidiNoteProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAxMidiNoteProperties>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAxMidiNoteProperties_Statics::NewProp_PitchNumber_MetaData[] = {
		{ "Category", "MidiEngine" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * The Note/MIDI number for this note. Like 60, or 72 etc..\n\x09 * Equal to the PitchName(C5) after conversion.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MidiClasses/AxMidiNote.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* The Note/MIDI number for this note. Like 60, or 72 etc..\n* Equal to the PitchName(C5) after conversion." },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAxMidiNoteProperties_Statics::NewProp_PitchNumber = { "PitchNumber", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAxMidiNoteProperties, PitchNumber), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAxMidiNoteProperties_Statics::NewProp_PitchNumber_MetaData), Z_Construct_UScriptStruct_FAxMidiNoteProperties_Statics::NewProp_PitchNumber_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAxMidiNoteProperties_Statics::NewProp_PitchName_MetaData[] = {
		{ "Category", "MidiEngine" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief PitchName like C5, A4 , etc...\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MidiClasses/AxMidiNote.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief PitchName like C5, A4 , etc..." },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAxMidiNoteProperties_Statics::NewProp_PitchName = { "PitchName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAxMidiNoteProperties, PitchName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAxMidiNoteProperties_Statics::NewProp_PitchName_MetaData), Z_Construct_UScriptStruct_FAxMidiNoteProperties_Statics::NewProp_PitchName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAxMidiNoteProperties_Statics::NewProp_StartTime_MetaData[] = {
		{ "Category", "MidiEngine" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief The time in seconds, that this MidiNote Starts playing.\n\x09 *\x09\x09  When the MidiNote turns ON.\n\x09 *\x09\x09  Eg 7.435 seconds.\n\x09 *\x09\x09  if = -1 , that means this is a live performance triggered note, with unknown start/stop/duration times.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MidiClasses/AxMidiNote.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief The time in seconds, that this MidiNote Starts playing.\n               When the MidiNote turns ON.\n               Eg 7.435 seconds.\n               if = -1 , that means this is a live performance triggered note, with unknown start/stop/duration times." },
#endif
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAxMidiNoteProperties_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAxMidiNoteProperties, StartTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAxMidiNoteProperties_Statics::NewProp_StartTime_MetaData), Z_Construct_UScriptStruct_FAxMidiNoteProperties_Statics::NewProp_StartTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAxMidiNoteProperties_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "MidiEngine" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 *  Duration between start time and EndTime\n\x09 *  if = -1 , that means this is a live performance triggered note, with unknown start/stop/duration times.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MidiClasses/AxMidiNote.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "*  Duration between start time and EndTime\n*  if = -1 , that means this is a live performance triggered note, with unknown start/stop/duration times." },
#endif
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAxMidiNoteProperties_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAxMidiNoteProperties, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAxMidiNoteProperties_Statics::NewProp_Duration_MetaData), Z_Construct_UScriptStruct_FAxMidiNoteProperties_Statics::NewProp_Duration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAxMidiNoteProperties_Statics::NewProp_StopTime_MetaData[] = {
		{ "Category", "MidiEngine" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief The time in seconds, that this MidiNote Stops playing.\n\x09 *\x09\x09  When the MidiNote turns OFF.\n\x09 *\x09\x09  if = -1 , that means this is a live performance triggered note, with unknown start/stop/duration times.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MidiClasses/AxMidiNote.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief The time in seconds, that this MidiNote Stops playing.\n               When the MidiNote turns OFF.\n               if = -1 , that means this is a live performance triggered note, with unknown start/stop/duration times." },
#endif
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAxMidiNoteProperties_Statics::NewProp_StopTime = { "StopTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAxMidiNoteProperties, StopTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAxMidiNoteProperties_Statics::NewProp_StopTime_MetaData), Z_Construct_UScriptStruct_FAxMidiNoteProperties_Statics::NewProp_StopTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAxMidiNoteProperties_Statics::NewProp_Velocity_MetaData[] = {
		{ "Category", "MidiEngine" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//NoteVelocity\n" },
#endif
		{ "ModuleRelativePath", "Public/MidiClasses/AxMidiNote.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NoteVelocity" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAxMidiNoteProperties_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAxMidiNoteProperties, Velocity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAxMidiNoteProperties_Statics::NewProp_Velocity_MetaData), Z_Construct_UScriptStruct_FAxMidiNoteProperties_Statics::NewProp_Velocity_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAxMidiNoteProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAxMidiNoteProperties_Statics::NewProp_PitchNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAxMidiNoteProperties_Statics::NewProp_PitchName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAxMidiNoteProperties_Statics::NewProp_StartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAxMidiNoteProperties_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAxMidiNoteProperties_Statics::NewProp_StopTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAxMidiNoteProperties_Statics::NewProp_Velocity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAxMidiNoteProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AxMidiCore,
		nullptr,
		&NewStructOps,
		"AxMidiNoteProperties",
		Z_Construct_UScriptStruct_FAxMidiNoteProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAxMidiNoteProperties_Statics::PropPointers),
		sizeof(FAxMidiNoteProperties),
		alignof(FAxMidiNoteProperties),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAxMidiNoteProperties_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAxMidiNoteProperties_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAxMidiNoteProperties_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAxMidiNoteProperties()
	{
		if (!Z_Registration_Info_UScriptStruct_AxMidiNoteProperties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AxMidiNoteProperties.InnerSingleton, Z_Construct_UScriptStruct_FAxMidiNoteProperties_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AxMidiNoteProperties.InnerSingleton;
	}
	DEFINE_FUNCTION(UAxMidiNote::execGetPitchName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetPitchName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAxMidiNote::execGetPitch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPitch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAxMidiNote::execGetAdjustedDuration)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InPlayRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAdjustedDuration(Z_Param_InPlayRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAxMidiNote::execGetAdjustedStopTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InPlayRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAdjustedStopTime(Z_Param_InPlayRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAxMidiNote::execGetAdjustedStartTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InPlayRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAdjustedStartTime(Z_Param_InPlayRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAxMidiNote::execGetMidiNoteProperties)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAxMidiNoteProperties*)Z_Param__Result=P_THIS->GetMidiNoteProperties();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAxMidiNote::execGetMidiAssetObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAxMidiAsset**)Z_Param__Result=P_THIS->GetMidiAssetObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAxMidiNote::execGetMidiTrackObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAxMidiTrack**)Z_Param__Result=P_THIS->GetMidiTrackObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAxMidiNote::execGetMidiTrackName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetMidiTrackName();
		P_NATIVE_END;
	}
	void UAxMidiNote::StaticRegisterNativesUAxMidiNote()
	{
		UClass* Class = UAxMidiNote::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAdjustedDuration", &UAxMidiNote::execGetAdjustedDuration },
			{ "GetAdjustedStartTime", &UAxMidiNote::execGetAdjustedStartTime },
			{ "GetAdjustedStopTime", &UAxMidiNote::execGetAdjustedStopTime },
			{ "GetMidiAssetObject", &UAxMidiNote::execGetMidiAssetObject },
			{ "GetMidiNoteProperties", &UAxMidiNote::execGetMidiNoteProperties },
			{ "GetMidiTrackName", &UAxMidiNote::execGetMidiTrackName },
			{ "GetMidiTrackObject", &UAxMidiNote::execGetMidiTrackObject },
			{ "GetPitch", &UAxMidiNote::execGetPitch },
			{ "GetPitchName", &UAxMidiNote::execGetPitchName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAxMidiNote_GetAdjustedDuration_Statics
	{
		struct AxMidiNote_eventGetAdjustedDuration_Parms
		{
			float InPlayRate;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InPlayRate;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAxMidiNote_GetAdjustedDuration_Statics::NewProp_InPlayRate = { "InPlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiNote_eventGetAdjustedDuration_Parms, InPlayRate), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAxMidiNote_GetAdjustedDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiNote_eventGetAdjustedDuration_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAxMidiNote_GetAdjustedDuration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiNote_GetAdjustedDuration_Statics::NewProp_InPlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiNote_GetAdjustedDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAxMidiNote_GetAdjustedDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "MidiEngine" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Will return the duration after adjusting to the submitted playrate.\n\x09 * @param InPlayRate The Rate/tempo to adjust the duration to.\n\x09 * @return\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MidiClasses/AxMidiNote.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Will return the duration after adjusting to the submitted playrate.\n@param InPlayRate The Rate/tempo to adjust the duration to.\n@return" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAxMidiNote_GetAdjustedDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAxMidiNote, nullptr, "GetAdjustedDuration", nullptr, nullptr, Z_Construct_UFunction_UAxMidiNote_GetAdjustedDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiNote_GetAdjustedDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAxMidiNote_GetAdjustedDuration_Statics::AxMidiNote_eventGetAdjustedDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiNote_GetAdjustedDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAxMidiNote_GetAdjustedDuration_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiNote_GetAdjustedDuration_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAxMidiNote_GetAdjustedDuration_Statics::AxMidiNote_eventGetAdjustedDuration_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAxMidiNote_GetAdjustedDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAxMidiNote_GetAdjustedDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAxMidiNote_GetAdjustedStartTime_Statics
	{
		struct AxMidiNote_eventGetAdjustedStartTime_Parms
		{
			float InPlayRate;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InPlayRate;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAxMidiNote_GetAdjustedStartTime_Statics::NewProp_InPlayRate = { "InPlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiNote_eventGetAdjustedStartTime_Parms, InPlayRate), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAxMidiNote_GetAdjustedStartTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiNote_eventGetAdjustedStartTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAxMidiNote_GetAdjustedStartTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiNote_GetAdjustedStartTime_Statics::NewProp_InPlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiNote_GetAdjustedStartTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAxMidiNote_GetAdjustedStartTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "MidiEngine" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Will return the start time after adjusting to the submitted playrate.\n\x09 * @param InPlayRate The Rate/tempo to adjust the start time to.\n\x09 * @return \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MidiClasses/AxMidiNote.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Will return the start time after adjusting to the submitted playrate.\n@param InPlayRate The Rate/tempo to adjust the start time to.\n@return" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAxMidiNote_GetAdjustedStartTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAxMidiNote, nullptr, "GetAdjustedStartTime", nullptr, nullptr, Z_Construct_UFunction_UAxMidiNote_GetAdjustedStartTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiNote_GetAdjustedStartTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAxMidiNote_GetAdjustedStartTime_Statics::AxMidiNote_eventGetAdjustedStartTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiNote_GetAdjustedStartTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAxMidiNote_GetAdjustedStartTime_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiNote_GetAdjustedStartTime_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAxMidiNote_GetAdjustedStartTime_Statics::AxMidiNote_eventGetAdjustedStartTime_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAxMidiNote_GetAdjustedStartTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAxMidiNote_GetAdjustedStartTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAxMidiNote_GetAdjustedStopTime_Statics
	{
		struct AxMidiNote_eventGetAdjustedStopTime_Parms
		{
			float InPlayRate;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InPlayRate;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAxMidiNote_GetAdjustedStopTime_Statics::NewProp_InPlayRate = { "InPlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiNote_eventGetAdjustedStopTime_Parms, InPlayRate), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAxMidiNote_GetAdjustedStopTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiNote_eventGetAdjustedStopTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAxMidiNote_GetAdjustedStopTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiNote_GetAdjustedStopTime_Statics::NewProp_InPlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiNote_GetAdjustedStopTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAxMidiNote_GetAdjustedStopTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "MidiEngine" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Will return the stop time after adjusting to the submitted Playrate.\n\x09 * @param InPlayRate The Rate/tempo to adjust the stop time to.\n\x09 * @return\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MidiClasses/AxMidiNote.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Will return the stop time after adjusting to the submitted Playrate.\n@param InPlayRate The Rate/tempo to adjust the stop time to.\n@return" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAxMidiNote_GetAdjustedStopTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAxMidiNote, nullptr, "GetAdjustedStopTime", nullptr, nullptr, Z_Construct_UFunction_UAxMidiNote_GetAdjustedStopTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiNote_GetAdjustedStopTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAxMidiNote_GetAdjustedStopTime_Statics::AxMidiNote_eventGetAdjustedStopTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiNote_GetAdjustedStopTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAxMidiNote_GetAdjustedStopTime_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiNote_GetAdjustedStopTime_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAxMidiNote_GetAdjustedStopTime_Statics::AxMidiNote_eventGetAdjustedStopTime_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAxMidiNote_GetAdjustedStopTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAxMidiNote_GetAdjustedStopTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAxMidiNote_GetMidiAssetObject_Statics
	{
		struct AxMidiNote_eventGetMidiAssetObject_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAxMidiNote_GetMidiAssetObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiNote_eventGetMidiAssetObject_Parms, ReturnValue), Z_Construct_UClass_UAxMidiAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAxMidiNote_GetMidiAssetObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiNote_GetMidiAssetObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAxMidiNote_GetMidiAssetObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "MidiEngine" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Gets the UAxMidiAsset this UAxMidiNote is in\n\x09 * @return\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MidiClasses/AxMidiNote.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Gets the UAxMidiAsset this UAxMidiNote is in\n@return" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAxMidiNote_GetMidiAssetObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAxMidiNote, nullptr, "GetMidiAssetObject", nullptr, nullptr, Z_Construct_UFunction_UAxMidiNote_GetMidiAssetObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiNote_GetMidiAssetObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAxMidiNote_GetMidiAssetObject_Statics::AxMidiNote_eventGetMidiAssetObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiNote_GetMidiAssetObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAxMidiNote_GetMidiAssetObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiNote_GetMidiAssetObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAxMidiNote_GetMidiAssetObject_Statics::AxMidiNote_eventGetMidiAssetObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAxMidiNote_GetMidiAssetObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAxMidiNote_GetMidiAssetObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAxMidiNote_GetMidiNoteProperties_Statics
	{
		struct AxMidiNote_eventGetMidiNoteProperties_Parms
		{
			FAxMidiNoteProperties ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAxMidiNote_GetMidiNoteProperties_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiNote_eventGetMidiNoteProperties_Parms, ReturnValue), Z_Construct_UScriptStruct_FAxMidiNoteProperties, METADATA_PARAMS(0, nullptr) }; // 2732429965
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAxMidiNote_GetMidiNoteProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiNote_GetMidiNoteProperties_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAxMidiNote_GetMidiNoteProperties_Statics::Function_MetaDataParams[] = {
		{ "Category", "MidiEngine" },
		{ "Keywords", "pitch velocity start stop" },
		{ "ModuleRelativePath", "Public/MidiClasses/AxMidiNote.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAxMidiNote_GetMidiNoteProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAxMidiNote, nullptr, "GetMidiNoteProperties", nullptr, nullptr, Z_Construct_UFunction_UAxMidiNote_GetMidiNoteProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiNote_GetMidiNoteProperties_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAxMidiNote_GetMidiNoteProperties_Statics::AxMidiNote_eventGetMidiNoteProperties_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiNote_GetMidiNoteProperties_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAxMidiNote_GetMidiNoteProperties_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiNote_GetMidiNoteProperties_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAxMidiNote_GetMidiNoteProperties_Statics::AxMidiNote_eventGetMidiNoteProperties_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAxMidiNote_GetMidiNoteProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAxMidiNote_GetMidiNoteProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAxMidiNote_GetMidiTrackName_Statics
	{
		struct AxMidiNote_eventGetMidiTrackName_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAxMidiNote_GetMidiTrackName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiNote_eventGetMidiTrackName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAxMidiNote_GetMidiTrackName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiNote_GetMidiTrackName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAxMidiNote_GetMidiTrackName_Statics::Function_MetaDataParams[] = {
		{ "Category", "MidiEngine" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Gets the name of the track this Midinote is in\n\x09 * @return \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MidiClasses/AxMidiNote.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Gets the name of the track this Midinote is in\n@return" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAxMidiNote_GetMidiTrackName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAxMidiNote, nullptr, "GetMidiTrackName", nullptr, nullptr, Z_Construct_UFunction_UAxMidiNote_GetMidiTrackName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiNote_GetMidiTrackName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAxMidiNote_GetMidiTrackName_Statics::AxMidiNote_eventGetMidiTrackName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiNote_GetMidiTrackName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAxMidiNote_GetMidiTrackName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiNote_GetMidiTrackName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAxMidiNote_GetMidiTrackName_Statics::AxMidiNote_eventGetMidiTrackName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAxMidiNote_GetMidiTrackName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAxMidiNote_GetMidiTrackName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAxMidiNote_GetMidiTrackObject_Statics
	{
		struct AxMidiNote_eventGetMidiTrackObject_Parms
		{
			UAxMidiTrack* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAxMidiNote_GetMidiTrackObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiNote_eventGetMidiTrackObject_Parms, ReturnValue), Z_Construct_UClass_UAxMidiTrack_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAxMidiNote_GetMidiTrackObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiNote_GetMidiTrackObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAxMidiNote_GetMidiTrackObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "MidiEngine" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Gets the UAxMidiTrack Object this UAxMidiNote is in.\n\x09 * @return\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MidiClasses/AxMidiNote.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Gets the UAxMidiTrack Object this UAxMidiNote is in.\n@return" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAxMidiNote_GetMidiTrackObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAxMidiNote, nullptr, "GetMidiTrackObject", nullptr, nullptr, Z_Construct_UFunction_UAxMidiNote_GetMidiTrackObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiNote_GetMidiTrackObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAxMidiNote_GetMidiTrackObject_Statics::AxMidiNote_eventGetMidiTrackObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiNote_GetMidiTrackObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAxMidiNote_GetMidiTrackObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiNote_GetMidiTrackObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAxMidiNote_GetMidiTrackObject_Statics::AxMidiNote_eventGetMidiTrackObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAxMidiNote_GetMidiTrackObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAxMidiNote_GetMidiTrackObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAxMidiNote_GetPitch_Statics
	{
		struct AxMidiNote_eventGetPitch_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAxMidiNote_GetPitch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiNote_eventGetPitch_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAxMidiNote_GetPitch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiNote_GetPitch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAxMidiNote_GetPitch_Statics::Function_MetaDataParams[] = {
		{ "Category", "UAxMidiNote" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Returns the pitch eg 60\n\x09 * @return \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MidiClasses/AxMidiNote.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Returns the pitch eg 60\n@return" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAxMidiNote_GetPitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAxMidiNote, nullptr, "GetPitch", nullptr, nullptr, Z_Construct_UFunction_UAxMidiNote_GetPitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiNote_GetPitch_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAxMidiNote_GetPitch_Statics::AxMidiNote_eventGetPitch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiNote_GetPitch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAxMidiNote_GetPitch_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiNote_GetPitch_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAxMidiNote_GetPitch_Statics::AxMidiNote_eventGetPitch_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAxMidiNote_GetPitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAxMidiNote_GetPitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAxMidiNote_GetPitchName_Statics
	{
		struct AxMidiNote_eventGetPitchName_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAxMidiNote_GetPitchName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiNote_eventGetPitchName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAxMidiNote_GetPitchName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiNote_GetPitchName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAxMidiNote_GetPitchName_Statics::Function_MetaDataParams[] = {
		{ "Category", "UAxMidiNote" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Returns the pitch name, eg C5;\n\x09 * @return\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MidiClasses/AxMidiNote.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Returns the pitch name, eg C5;\n@return" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAxMidiNote_GetPitchName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAxMidiNote, nullptr, "GetPitchName", nullptr, nullptr, Z_Construct_UFunction_UAxMidiNote_GetPitchName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiNote_GetPitchName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAxMidiNote_GetPitchName_Statics::AxMidiNote_eventGetPitchName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiNote_GetPitchName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAxMidiNote_GetPitchName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiNote_GetPitchName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAxMidiNote_GetPitchName_Statics::AxMidiNote_eventGetPitchName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAxMidiNote_GetPitchName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAxMidiNote_GetPitchName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAxMidiNote);
	UClass* Z_Construct_UClass_UAxMidiNote_NoRegister()
	{
		return UAxMidiNote::StaticClass();
	}
	struct Z_Construct_UClass_UAxMidiNote_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Properties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MidiTrack_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MidiTrack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MidiAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MidiAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAxMidiNote_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AxMidiCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiNote_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAxMidiNote_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAxMidiNote_GetAdjustedDuration, "GetAdjustedDuration" }, // 993979874
		{ &Z_Construct_UFunction_UAxMidiNote_GetAdjustedStartTime, "GetAdjustedStartTime" }, // 2947220727
		{ &Z_Construct_UFunction_UAxMidiNote_GetAdjustedStopTime, "GetAdjustedStopTime" }, // 358829729
		{ &Z_Construct_UFunction_UAxMidiNote_GetMidiAssetObject, "GetMidiAssetObject" }, // 1048740314
		{ &Z_Construct_UFunction_UAxMidiNote_GetMidiNoteProperties, "GetMidiNoteProperties" }, // 2841442751
		{ &Z_Construct_UFunction_UAxMidiNote_GetMidiTrackName, "GetMidiTrackName" }, // 2195757934
		{ &Z_Construct_UFunction_UAxMidiNote_GetMidiTrackObject, "GetMidiTrackObject" }, // 3341446253
		{ &Z_Construct_UFunction_UAxMidiNote_GetPitch, "GetPitch" }, // 3874745419
		{ &Z_Construct_UFunction_UAxMidiNote_GetPitchName, "GetPitchName" }, // 182281890
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiNote_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiNote_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A UAxMidiNote is an instance of a playing note inside a UAxMidiTrack.\n * Contains it's StartTime, Duration,Endtime and NoteVelocity.\n * Contains Note Id In PianoScale Form , eg C5\n * Also Contains the name/id of the track it plays in, eg \"Kick\"\n */" },
#endif
		{ "DisplayName", "MidiNote" },
		{ "IncludePath", "MidiClasses/AxMidiNote.h" },
		{ "ModuleRelativePath", "Public/MidiClasses/AxMidiNote.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A UAxMidiNote is an instance of a playing note inside a UAxMidiTrack.\nContains it's StartTime, Duration,Endtime and NoteVelocity.\nContains Note Id In PianoScale Form , eg C5\nAlso Contains the name/id of the track it plays in, eg \"Kick\"" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiNote_Statics::NewProp_Properties_MetaData[] = {
		{ "Category", "MidiEngine" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Data About the MidiNote\n\x09 *        PitchName     : Eg C5,A#1\n\x09 *        Duration : the total time the midi note will be playing\n\x09 *        StopTime : the time the Note OFF event occurs\n\x09 *        Velocity : Note Velocity Eg 120,\n\x09 *        MidiNote : the actual UAxMidiNote* \n\x09 */" },
#endif
		{ "DisplayName", "Note Properties" },
		{ "ModuleRelativePath", "Public/MidiClasses/AxMidiNote.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Data About the MidiNote\n       PitchName     : Eg C5,A#1\n       Duration : the total time the midi note will be playing\n       StopTime : the time the Note OFF event occurs\n       Velocity : Note Velocity Eg 120,\n       MidiNote : the actual UAxMidiNote*" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAxMidiNote_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxMidiNote, Properties), Z_Construct_UScriptStruct_FAxMidiNoteProperties, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiNote_Statics::NewProp_Properties_MetaData), Z_Construct_UClass_UAxMidiNote_Statics::NewProp_Properties_MetaData) }; // 2732429965
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiNote_Statics::NewProp_MidiTrack_MetaData[] = {
		{ "Category", "MidiEngine" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The MidiTrack This MidiNote belongs to\n" },
#endif
		{ "ModuleRelativePath", "Public/MidiClasses/AxMidiNote.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The MidiTrack This MidiNote belongs to" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAxMidiNote_Statics::NewProp_MidiTrack = { "MidiTrack", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxMidiNote, MidiTrack), Z_Construct_UClass_UAxMidiTrack_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiNote_Statics::NewProp_MidiTrack_MetaData), Z_Construct_UClass_UAxMidiNote_Statics::NewProp_MidiTrack_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiNote_Statics::NewProp_MidiAsset_MetaData[] = {
		{ "Category", "MidiEngine" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The Owning MidiAsset\n" },
#endif
		{ "ModuleRelativePath", "Public/MidiClasses/AxMidiNote.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Owning MidiAsset" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAxMidiNote_Statics::NewProp_MidiAsset = { "MidiAsset", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxMidiNote, MidiAsset), Z_Construct_UClass_UAxMidiAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiNote_Statics::NewProp_MidiAsset_MetaData), Z_Construct_UClass_UAxMidiNote_Statics::NewProp_MidiAsset_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAxMidiNote_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxMidiNote_Statics::NewProp_Properties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxMidiNote_Statics::NewProp_MidiTrack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxMidiNote_Statics::NewProp_MidiAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAxMidiNote_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAxMidiNote>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAxMidiNote_Statics::ClassParams = {
		&UAxMidiNote::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAxMidiNote_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiNote_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiNote_Statics::Class_MetaDataParams), Z_Construct_UClass_UAxMidiNote_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiNote_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAxMidiNote()
	{
		if (!Z_Registration_Info_UClass_UAxMidiNote.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAxMidiNote.OuterSingleton, Z_Construct_UClass_UAxMidiNote_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAxMidiNote.OuterSingleton;
	}
	template<> AXMIDICORE_API UClass* StaticClass<UAxMidiNote>()
	{
		return UAxMidiNote::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAxMidiNote);
	UAxMidiNote::~UAxMidiNote() {}
	struct Z_CompiledInDeferFile_FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiCore_Public_MidiClasses_AxMidiNote_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiCore_Public_MidiClasses_AxMidiNote_h_Statics::ScriptStructInfo[] = {
		{ FAxMidiNoteProperties::StaticStruct, Z_Construct_UScriptStruct_FAxMidiNoteProperties_Statics::NewStructOps, TEXT("AxMidiNoteProperties"), &Z_Registration_Info_UScriptStruct_AxMidiNoteProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAxMidiNoteProperties), 2732429965U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiCore_Public_MidiClasses_AxMidiNote_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAxMidiNote, UAxMidiNote::StaticClass, TEXT("UAxMidiNote"), &Z_Registration_Info_UClass_UAxMidiNote, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAxMidiNote), 2840296594U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiCore_Public_MidiClasses_AxMidiNote_h_2290217179(TEXT("/Script/AxMidiCore"),
		Z_CompiledInDeferFile_FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiCore_Public_MidiClasses_AxMidiNote_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiCore_Public_MidiClasses_AxMidiNote_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiCore_Public_MidiClasses_AxMidiNote_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiCore_Public_MidiClasses_AxMidiNote_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
