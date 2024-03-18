// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AxMidiCore/Public/Subsystems/AxMidiEngineCoreSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAxMidiEngineCoreSubsystem() {}
// Cross Module References
	AXMIDICORE_API UClass* Z_Construct_UClass_UAxMidiAsset_NoRegister();
	AXMIDICORE_API UClass* Z_Construct_UClass_UAxMidiEngineCoreSettings_NoRegister();
	AXMIDICORE_API UClass* Z_Construct_UClass_UAxMidiEngineCoreSubsystem();
	AXMIDICORE_API UClass* Z_Construct_UClass_UAxMidiEngineCoreSubsystem_NoRegister();
	AXMIDICORE_API UClass* Z_Construct_UClass_UAxMidiNote_NoRegister();
	AXMIDICORE_API UClass* Z_Construct_UClass_UAxMidiTrack_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	UPackage* Z_Construct_UPackage__Script_AxMidiCore();
// End Cross Module References
	DEFINE_FUNCTION(UAxMidiEngineCoreSubsystem::execCreateMidiAssetFromFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAxMidiAsset**)Z_Param__Result=P_THIS->CreateMidiAssetFromFile(Z_Param_FilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAxMidiEngineCoreSubsystem::execNewLivePerformanceNote)
	{
		P_GET_OBJECT(UAxMidiTrack,Z_Param_InOuter);
		P_GET_PROPERTY(FIntProperty,Z_Param_InPitch);
		P_GET_PROPERTY(FIntProperty,Z_Param_InVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAxMidiNote**)Z_Param__Result=P_THIS->NewLivePerformanceNote(Z_Param_InOuter,Z_Param_InPitch,Z_Param_InVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAxMidiEngineCoreSubsystem::execGetPitchNameFromNumber)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PitchNumber);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetPitchNameFromNumber(Z_Param_PitchNumber);
		P_NATIVE_END;
	}
	void UAxMidiEngineCoreSubsystem::StaticRegisterNativesUAxMidiEngineCoreSubsystem()
	{
		UClass* Class = UAxMidiEngineCoreSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateMidiAssetFromFile", &UAxMidiEngineCoreSubsystem::execCreateMidiAssetFromFile },
			{ "GetPitchNameFromNumber", &UAxMidiEngineCoreSubsystem::execGetPitchNameFromNumber },
			{ "NewLivePerformanceNote", &UAxMidiEngineCoreSubsystem::execNewLivePerformanceNote },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAxMidiEngineCoreSubsystem_CreateMidiAssetFromFile_Statics
	{
		struct AxMidiEngineCoreSubsystem_eventCreateMidiAssetFromFile_Parms
		{
			FString FilePath;
			UAxMidiAsset* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAxMidiEngineCoreSubsystem_CreateMidiAssetFromFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiEngineCoreSubsystem_eventCreateMidiAssetFromFile_Parms, FilePath), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAxMidiEngineCoreSubsystem_CreateMidiAssetFromFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiEngineCoreSubsystem_eventCreateMidiAssetFromFile_Parms, ReturnValue), Z_Construct_UClass_UAxMidiAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAxMidiEngineCoreSubsystem_CreateMidiAssetFromFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiEngineCoreSubsystem_CreateMidiAssetFromFile_Statics::NewProp_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiEngineCoreSubsystem_CreateMidiAssetFromFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAxMidiEngineCoreSubsystem_CreateMidiAssetFromFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "MidiAsset" },
		{ "Comment", "/**\n\x09 * @brief Will initialize this UAxMidiAsset with a .MID file from disk.\n\x09 *        You can do this at runtime to create MidiAssets from files on disk.\n\x09 * @param FilePath Full path to the .MIDI File from disk..\n\x09 * @return true if successful, false if unsuccessful\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/AxMidiEngineCoreSubsystem.h" },
		{ "ToolTip", "@brief Will initialize this UAxMidiAsset with a .MID file from disk.\n       You can do this at runtime to create MidiAssets from files on disk.\n@param FilePath Full path to the .MIDI File from disk..\n@return true if successful, false if unsuccessful" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAxMidiEngineCoreSubsystem_CreateMidiAssetFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAxMidiEngineCoreSubsystem, nullptr, "CreateMidiAssetFromFile", nullptr, nullptr, Z_Construct_UFunction_UAxMidiEngineCoreSubsystem_CreateMidiAssetFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiEngineCoreSubsystem_CreateMidiAssetFromFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAxMidiEngineCoreSubsystem_CreateMidiAssetFromFile_Statics::AxMidiEngineCoreSubsystem_eventCreateMidiAssetFromFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiEngineCoreSubsystem_CreateMidiAssetFromFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAxMidiEngineCoreSubsystem_CreateMidiAssetFromFile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiEngineCoreSubsystem_CreateMidiAssetFromFile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAxMidiEngineCoreSubsystem_CreateMidiAssetFromFile_Statics::AxMidiEngineCoreSubsystem_eventCreateMidiAssetFromFile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAxMidiEngineCoreSubsystem_CreateMidiAssetFromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAxMidiEngineCoreSubsystem_CreateMidiAssetFromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAxMidiEngineCoreSubsystem_GetPitchNameFromNumber_Statics
	{
		struct AxMidiEngineCoreSubsystem_eventGetPitchNameFromNumber_Parms
		{
			int32 PitchNumber;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PitchNumber;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAxMidiEngineCoreSubsystem_GetPitchNameFromNumber_Statics::NewProp_PitchNumber = { "PitchNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiEngineCoreSubsystem_eventGetPitchNameFromNumber_Parms, PitchNumber), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAxMidiEngineCoreSubsystem_GetPitchNameFromNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiEngineCoreSubsystem_eventGetPitchNameFromNumber_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAxMidiEngineCoreSubsystem_GetPitchNameFromNumber_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiEngineCoreSubsystem_GetPitchNameFromNumber_Statics::NewProp_PitchNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiEngineCoreSubsystem_GetPitchNameFromNumber_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAxMidiEngineCoreSubsystem_GetPitchNameFromNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "MidiEngine" },
		{ "Comment", "/**\n\x09 * @brief Static Function that will convert a KeyNumber/NoteNumber like 60 to pitch name like \"C5\"\n\x09 *        Middle is determined by Project Settings> MidiEngine\n\x09 * @param PitchNumber like 60 or 72 etc..\n\x09 * @return Note Pitch name like A#0\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/AxMidiEngineCoreSubsystem.h" },
		{ "ToolTip", "@brief Static Function that will convert a KeyNumber/NoteNumber like 60 to pitch name like \"C5\"\n       Middle is determined by Project Settings> MidiEngine\n@param PitchNumber like 60 or 72 etc..\n@return Note Pitch name like A#0" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAxMidiEngineCoreSubsystem_GetPitchNameFromNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAxMidiEngineCoreSubsystem, nullptr, "GetPitchNameFromNumber", nullptr, nullptr, Z_Construct_UFunction_UAxMidiEngineCoreSubsystem_GetPitchNameFromNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiEngineCoreSubsystem_GetPitchNameFromNumber_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAxMidiEngineCoreSubsystem_GetPitchNameFromNumber_Statics::AxMidiEngineCoreSubsystem_eventGetPitchNameFromNumber_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiEngineCoreSubsystem_GetPitchNameFromNumber_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAxMidiEngineCoreSubsystem_GetPitchNameFromNumber_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiEngineCoreSubsystem_GetPitchNameFromNumber_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAxMidiEngineCoreSubsystem_GetPitchNameFromNumber_Statics::AxMidiEngineCoreSubsystem_eventGetPitchNameFromNumber_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAxMidiEngineCoreSubsystem_GetPitchNameFromNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAxMidiEngineCoreSubsystem_GetPitchNameFromNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAxMidiEngineCoreSubsystem_NewLivePerformanceNote_Statics
	{
		struct AxMidiEngineCoreSubsystem_eventNewLivePerformanceNote_Parms
		{
			UAxMidiTrack* InOuter;
			int32 InPitch;
			int32 InVelocity;
			UAxMidiNote* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InOuter;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InPitch;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InVelocity;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAxMidiEngineCoreSubsystem_NewLivePerformanceNote_Statics::NewProp_InOuter = { "InOuter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiEngineCoreSubsystem_eventNewLivePerformanceNote_Parms, InOuter), Z_Construct_UClass_UAxMidiTrack_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAxMidiEngineCoreSubsystem_NewLivePerformanceNote_Statics::NewProp_InPitch = { "InPitch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiEngineCoreSubsystem_eventNewLivePerformanceNote_Parms, InPitch), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAxMidiEngineCoreSubsystem_NewLivePerformanceNote_Statics::NewProp_InVelocity = { "InVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiEngineCoreSubsystem_eventNewLivePerformanceNote_Parms, InVelocity), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAxMidiEngineCoreSubsystem_NewLivePerformanceNote_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiEngineCoreSubsystem_eventNewLivePerformanceNote_Parms, ReturnValue), Z_Construct_UClass_UAxMidiNote_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAxMidiEngineCoreSubsystem_NewLivePerformanceNote_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiEngineCoreSubsystem_NewLivePerformanceNote_Statics::NewProp_InOuter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiEngineCoreSubsystem_NewLivePerformanceNote_Statics::NewProp_InPitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiEngineCoreSubsystem_NewLivePerformanceNote_Statics::NewProp_InVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiEngineCoreSubsystem_NewLivePerformanceNote_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAxMidiEngineCoreSubsystem_NewLivePerformanceNote_Statics::Function_MetaDataParams[] = {
		{ "Category", "MidiEngine" },
		{ "Comment", "/**\n\x09 * @brief Utility function to Create a new MidiNote for live performance or playback\n\x09 * @param InOuter\n\x09 * @param InVelocity 0-127\n\x09 * @param InPitch PitchNumber , eg 60 for C5.\n\x09 * @return\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/AxMidiEngineCoreSubsystem.h" },
		{ "ToolTip", "@brief Utility function to Create a new MidiNote for live performance or playback\n@param InOuter\n@param InVelocity 0-127\n@param InPitch PitchNumber , eg 60 for C5.\n@return" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAxMidiEngineCoreSubsystem_NewLivePerformanceNote_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAxMidiEngineCoreSubsystem, nullptr, "NewLivePerformanceNote", nullptr, nullptr, Z_Construct_UFunction_UAxMidiEngineCoreSubsystem_NewLivePerformanceNote_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiEngineCoreSubsystem_NewLivePerformanceNote_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAxMidiEngineCoreSubsystem_NewLivePerformanceNote_Statics::AxMidiEngineCoreSubsystem_eventNewLivePerformanceNote_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiEngineCoreSubsystem_NewLivePerformanceNote_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAxMidiEngineCoreSubsystem_NewLivePerformanceNote_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiEngineCoreSubsystem_NewLivePerformanceNote_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAxMidiEngineCoreSubsystem_NewLivePerformanceNote_Statics::AxMidiEngineCoreSubsystem_eventNewLivePerformanceNote_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAxMidiEngineCoreSubsystem_NewLivePerformanceNote()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAxMidiEngineCoreSubsystem_NewLivePerformanceNote_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAxMidiEngineCoreSubsystem);
	UClass* Z_Construct_UClass_UAxMidiEngineCoreSubsystem_NoRegister()
	{
		return UAxMidiEngineCoreSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UAxMidiEngineCoreSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MidiEngineCoreSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MidiEngineCoreSettings;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PitchNamesToNumberMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PitchNamesToNumberMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchNamesToNumberMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PitchNamesToNumberMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAxMidiEngineCoreSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_AxMidiCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiEngineCoreSubsystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAxMidiEngineCoreSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAxMidiEngineCoreSubsystem_CreateMidiAssetFromFile, "CreateMidiAssetFromFile" }, // 2447212342
		{ &Z_Construct_UFunction_UAxMidiEngineCoreSubsystem_GetPitchNameFromNumber, "GetPitchNameFromNumber" }, // 88885988
		{ &Z_Construct_UFunction_UAxMidiEngineCoreSubsystem_NewLivePerformanceNote, "NewLivePerformanceNote" }, // 2621517324
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiEngineCoreSubsystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiEngineCoreSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * @brief This Class is meant as a bridge between the SMF MIDI library API and Unreal Engine API.\n * If Unreal Engine wants to interface with the pure C++ Library it should do it through this Class.\n * This Class must define all functions UE API will need to work with the Midi File.\n * Helper Functions, Reading and Writing must be done in this class.\n * In Turn, Unreal Engine has to create it's own version of the MIDIFile asset. UAxMidiAsset.\n * It will copy all the data it needs from the C++ MIDIFile object through this Class.\n */" },
		{ "DisplayName", "Midi Engine Core Subsystem" },
		{ "IncludePath", "Subsystems/AxMidiEngineCoreSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/AxMidiEngineCoreSubsystem.h" },
		{ "ToolTip", "@brief This Class is meant as a bridge between the SMF MIDI library API and Unreal Engine API.\nIf Unreal Engine wants to interface with the pure C++ Library it should do it through this Class.\nThis Class must define all functions UE API will need to work with the Midi File.\nHelper Functions, Reading and Writing must be done in this class.\nIn Turn, Unreal Engine has to create it's own version of the MIDIFile asset. UAxMidiAsset.\nIt will copy all the data it needs from the C++ MIDIFile object through this Class." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiEngineCoreSubsystem_Statics::NewProp_MidiEngineCoreSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsystems/AxMidiEngineCoreSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAxMidiEngineCoreSubsystem_Statics::NewProp_MidiEngineCoreSettings = { "MidiEngineCoreSettings", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxMidiEngineCoreSubsystem, MidiEngineCoreSettings), Z_Construct_UClass_UAxMidiEngineCoreSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiEngineCoreSubsystem_Statics::NewProp_MidiEngineCoreSettings_MetaData), Z_Construct_UClass_UAxMidiEngineCoreSubsystem_Statics::NewProp_MidiEngineCoreSettings_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAxMidiEngineCoreSubsystem_Statics::NewProp_PitchNamesToNumberMap_ValueProp = { "PitchNamesToNumberMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAxMidiEngineCoreSubsystem_Statics::NewProp_PitchNamesToNumberMap_Key_KeyProp = { "PitchNamesToNumberMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiEngineCoreSubsystem_Statics::NewProp_PitchNamesToNumberMap_MetaData[] = {
		{ "Comment", "/**\n\x09 * @brief Eg Maps C5 to 60.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/AxMidiEngineCoreSubsystem.h" },
		{ "ToolTip", "@brief Eg Maps C5 to 60." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAxMidiEngineCoreSubsystem_Statics::NewProp_PitchNamesToNumberMap = { "PitchNamesToNumberMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxMidiEngineCoreSubsystem, PitchNamesToNumberMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiEngineCoreSubsystem_Statics::NewProp_PitchNamesToNumberMap_MetaData), Z_Construct_UClass_UAxMidiEngineCoreSubsystem_Statics::NewProp_PitchNamesToNumberMap_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAxMidiEngineCoreSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxMidiEngineCoreSubsystem_Statics::NewProp_MidiEngineCoreSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxMidiEngineCoreSubsystem_Statics::NewProp_PitchNamesToNumberMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxMidiEngineCoreSubsystem_Statics::NewProp_PitchNamesToNumberMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxMidiEngineCoreSubsystem_Statics::NewProp_PitchNamesToNumberMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAxMidiEngineCoreSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAxMidiEngineCoreSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAxMidiEngineCoreSubsystem_Statics::ClassParams = {
		&UAxMidiEngineCoreSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAxMidiEngineCoreSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiEngineCoreSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiEngineCoreSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UAxMidiEngineCoreSubsystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiEngineCoreSubsystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAxMidiEngineCoreSubsystem()
	{
		if (!Z_Registration_Info_UClass_UAxMidiEngineCoreSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAxMidiEngineCoreSubsystem.OuterSingleton, Z_Construct_UClass_UAxMidiEngineCoreSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAxMidiEngineCoreSubsystem.OuterSingleton;
	}
	template<> AXMIDICORE_API UClass* StaticClass<UAxMidiEngineCoreSubsystem>()
	{
		return UAxMidiEngineCoreSubsystem::StaticClass();
	}
	UAxMidiEngineCoreSubsystem::UAxMidiEngineCoreSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAxMidiEngineCoreSubsystem);
	UAxMidiEngineCoreSubsystem::~UAxMidiEngineCoreSubsystem() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiCore_Public_Subsystems_AxMidiEngineCoreSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiCore_Public_Subsystems_AxMidiEngineCoreSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAxMidiEngineCoreSubsystem, UAxMidiEngineCoreSubsystem::StaticClass, TEXT("UAxMidiEngineCoreSubsystem"), &Z_Registration_Info_UClass_UAxMidiEngineCoreSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAxMidiEngineCoreSubsystem), 2321837573U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiCore_Public_Subsystems_AxMidiEngineCoreSubsystem_h_1474365495(TEXT("/Script/AxMidiCore"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiCore_Public_Subsystems_AxMidiEngineCoreSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiCore_Public_Subsystems_AxMidiEngineCoreSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
