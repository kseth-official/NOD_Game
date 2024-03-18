// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AxMidiBroadcasters/Public/Interfaces/IAxMidiListener.h"
#include "Runtime/AxMidiCore/Public/MidiClasses/AxMidiChord.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAxMidiListener() {}
// Cross Module References
	AXMIDIBROADCASTERS_API UClass* Z_Construct_UClass_UAxMidiBroadcaster_NoRegister();
	AXMIDIBROADCASTERS_API UClass* Z_Construct_UClass_UAxMidiListener();
	AXMIDIBROADCASTERS_API UClass* Z_Construct_UClass_UAxMidiListener_NoRegister();
	AXMIDIBROADCASTERS_API UClass* Z_Construct_UClass_UAxMidiPlayhead_NoRegister();
	AXMIDICORE_API UClass* Z_Construct_UClass_UAxMidiNote_NoRegister();
	AXMIDICORE_API UScriptStruct* Z_Construct_UScriptStruct_FAxMidiChord();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_AxMidiBroadcasters();
// End Cross Module References
	DEFINE_FUNCTION(IAxMidiListener::execOnSubsystemBPMEvent)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InBPM);
		P_GET_OBJECT(UAxMidiPlayhead,Z_Param_InPlayHead);
		P_GET_TINTERFACE(IAxMidiBroadcaster,Z_Param_InBroadcaster);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSubsystemBPMEvent(Z_Param_InBPM,Z_Param_InPlayHead,Z_Param_InBroadcaster);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAxMidiListener::execOnSubsystemMidiNoteOff)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InMidiTrackName);
		P_GET_OBJECT(UAxMidiNote,Z_Param_InMidiNote);
		P_GET_OBJECT(UAxMidiPlayhead,Z_Param_InPlayhead);
		P_GET_TINTERFACE(IAxMidiBroadcaster,Z_Param_InBroadcaster);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSubsystemMidiNoteOff(Z_Param_InMidiTrackName,Z_Param_InMidiNote,Z_Param_InPlayhead,Z_Param_InBroadcaster);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAxMidiListener::execOnSubsystemChordOn)
	{
		P_GET_STRUCT(FAxMidiChord,Z_Param_InMidiChord);
		P_GET_OBJECT(UAxMidiPlayhead,Z_Param_InPlayHead);
		P_GET_TINTERFACE(IAxMidiBroadcaster,Z_Param_InBroadcaster);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSubsystemChordOn(Z_Param_InMidiChord,Z_Param_InPlayHead,Z_Param_InBroadcaster);
		P_NATIVE_END;
	}
	void UAxMidiListener::StaticRegisterNativesUAxMidiListener()
	{
		UClass* Class = UAxMidiListener::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSubsystemBPMEvent", &IAxMidiListener::execOnSubsystemBPMEvent },
			{ "OnSubsystemChordOn", &IAxMidiListener::execOnSubsystemChordOn },
			{ "OnSubsystemMidiNoteOff", &IAxMidiListener::execOnSubsystemMidiNoteOff },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAxMidiListener_OnSubsystemBPMEvent_Statics
	{
		struct AxMidiListener_eventOnSubsystemBPMEvent_Parms
		{
			float InBPM;
			UAxMidiPlayhead* InPlayHead;
			TScriptInterface<IAxMidiBroadcaster> InBroadcaster;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InBPM;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPlayHead;
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_InBroadcaster;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAxMidiListener_OnSubsystemBPMEvent_Statics::NewProp_InBPM = { "InBPM", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiListener_eventOnSubsystemBPMEvent_Parms, InBPM), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAxMidiListener_OnSubsystemBPMEvent_Statics::NewProp_InPlayHead = { "InPlayHead", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiListener_eventOnSubsystemBPMEvent_Parms, InPlayHead), Z_Construct_UClass_UAxMidiPlayhead_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UAxMidiListener_OnSubsystemBPMEvent_Statics::NewProp_InBroadcaster = { "InBroadcaster", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiListener_eventOnSubsystemBPMEvent_Parms, InBroadcaster), Z_Construct_UClass_UAxMidiBroadcaster_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAxMidiListener_OnSubsystemBPMEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiListener_OnSubsystemBPMEvent_Statics::NewProp_InBPM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiListener_OnSubsystemBPMEvent_Statics::NewProp_InPlayHead,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiListener_OnSubsystemBPMEvent_Statics::NewProp_InBroadcaster,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAxMidiListener_OnSubsystemBPMEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/IAxMidiListener.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAxMidiListener_OnSubsystemBPMEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAxMidiListener, nullptr, "OnSubsystemBPMEvent", nullptr, nullptr, Z_Construct_UFunction_UAxMidiListener_OnSubsystemBPMEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiListener_OnSubsystemBPMEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAxMidiListener_OnSubsystemBPMEvent_Statics::AxMidiListener_eventOnSubsystemBPMEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiListener_OnSubsystemBPMEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAxMidiListener_OnSubsystemBPMEvent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiListener_OnSubsystemBPMEvent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAxMidiListener_OnSubsystemBPMEvent_Statics::AxMidiListener_eventOnSubsystemBPMEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAxMidiListener_OnSubsystemBPMEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAxMidiListener_OnSubsystemBPMEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAxMidiListener_OnSubsystemChordOn_Statics
	{
		struct AxMidiListener_eventOnSubsystemChordOn_Parms
		{
			FAxMidiChord InMidiChord;
			UAxMidiPlayhead* InPlayHead;
			TScriptInterface<IAxMidiBroadcaster> InBroadcaster;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InMidiChord;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPlayHead;
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_InBroadcaster;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAxMidiListener_OnSubsystemChordOn_Statics::NewProp_InMidiChord = { "InMidiChord", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiListener_eventOnSubsystemChordOn_Parms, InMidiChord), Z_Construct_UScriptStruct_FAxMidiChord, METADATA_PARAMS(0, nullptr) }; // 1288995871
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAxMidiListener_OnSubsystemChordOn_Statics::NewProp_InPlayHead = { "InPlayHead", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiListener_eventOnSubsystemChordOn_Parms, InPlayHead), Z_Construct_UClass_UAxMidiPlayhead_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UAxMidiListener_OnSubsystemChordOn_Statics::NewProp_InBroadcaster = { "InBroadcaster", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiListener_eventOnSubsystemChordOn_Parms, InBroadcaster), Z_Construct_UClass_UAxMidiBroadcaster_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAxMidiListener_OnSubsystemChordOn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiListener_OnSubsystemChordOn_Statics::NewProp_InMidiChord,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiListener_OnSubsystemChordOn_Statics::NewProp_InPlayHead,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiListener_OnSubsystemChordOn_Statics::NewProp_InBroadcaster,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAxMidiListener_OnSubsystemChordOn_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * @brief Responds to the MidiBroadcasterSubsystem ChordOn Event and broadcasts the notes individually.\n\x09 * @param InMidiChord The Chord that just turned on\n\x09 * @param InPlayHead The Playhead responsible for turning the chord on.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/IAxMidiListener.h" },
		{ "ToolTip", "@brief Responds to the MidiBroadcasterSubsystem ChordOn Event and broadcasts the notes individually.\n@param InMidiChord The Chord that just turned on\n@param InPlayHead The Playhead responsible for turning the chord on." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAxMidiListener_OnSubsystemChordOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAxMidiListener, nullptr, "OnSubsystemChordOn", nullptr, nullptr, Z_Construct_UFunction_UAxMidiListener_OnSubsystemChordOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiListener_OnSubsystemChordOn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAxMidiListener_OnSubsystemChordOn_Statics::AxMidiListener_eventOnSubsystemChordOn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiListener_OnSubsystemChordOn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAxMidiListener_OnSubsystemChordOn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiListener_OnSubsystemChordOn_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAxMidiListener_OnSubsystemChordOn_Statics::AxMidiListener_eventOnSubsystemChordOn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAxMidiListener_OnSubsystemChordOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAxMidiListener_OnSubsystemChordOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAxMidiListener_OnSubsystemMidiNoteOff_Statics
	{
		struct AxMidiListener_eventOnSubsystemMidiNoteOff_Parms
		{
			FString InMidiTrackName;
			UAxMidiNote* InMidiNote;
			UAxMidiPlayhead* InPlayhead;
			TScriptInterface<IAxMidiBroadcaster> InBroadcaster;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_InMidiTrackName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMidiNote;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPlayhead;
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_InBroadcaster;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAxMidiListener_OnSubsystemMidiNoteOff_Statics::NewProp_InMidiTrackName = { "InMidiTrackName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiListener_eventOnSubsystemMidiNoteOff_Parms, InMidiTrackName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAxMidiListener_OnSubsystemMidiNoteOff_Statics::NewProp_InMidiNote = { "InMidiNote", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiListener_eventOnSubsystemMidiNoteOff_Parms, InMidiNote), Z_Construct_UClass_UAxMidiNote_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAxMidiListener_OnSubsystemMidiNoteOff_Statics::NewProp_InPlayhead = { "InPlayhead", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiListener_eventOnSubsystemMidiNoteOff_Parms, InPlayhead), Z_Construct_UClass_UAxMidiPlayhead_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UAxMidiListener_OnSubsystemMidiNoteOff_Statics::NewProp_InBroadcaster = { "InBroadcaster", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiListener_eventOnSubsystemMidiNoteOff_Parms, InBroadcaster), Z_Construct_UClass_UAxMidiBroadcaster_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAxMidiListener_OnSubsystemMidiNoteOff_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiListener_OnSubsystemMidiNoteOff_Statics::NewProp_InMidiTrackName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiListener_OnSubsystemMidiNoteOff_Statics::NewProp_InMidiNote,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiListener_OnSubsystemMidiNoteOff_Statics::NewProp_InPlayhead,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiListener_OnSubsystemMidiNoteOff_Statics::NewProp_InBroadcaster,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAxMidiListener_OnSubsystemMidiNoteOff_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * @brief Responds to the MidiBroadcasterSubsystem MidiNoteOff Event;\n\x09 * @param InMidiTrackName The Track name like Kick.\n\x09 * @param InMidiNote The note that just turned on\n\x09 * @param InPlayhead The Playhead that's turning this note OFF.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/IAxMidiListener.h" },
		{ "ToolTip", "@brief Responds to the MidiBroadcasterSubsystem MidiNoteOff Event;\n@param InMidiTrackName The Track name like Kick.\n@param InMidiNote The note that just turned on\n@param InPlayhead The Playhead that's turning this note OFF." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAxMidiListener_OnSubsystemMidiNoteOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAxMidiListener, nullptr, "OnSubsystemMidiNoteOff", nullptr, nullptr, Z_Construct_UFunction_UAxMidiListener_OnSubsystemMidiNoteOff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiListener_OnSubsystemMidiNoteOff_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAxMidiListener_OnSubsystemMidiNoteOff_Statics::AxMidiListener_eventOnSubsystemMidiNoteOff_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiListener_OnSubsystemMidiNoteOff_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAxMidiListener_OnSubsystemMidiNoteOff_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiListener_OnSubsystemMidiNoteOff_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAxMidiListener_OnSubsystemMidiNoteOff_Statics::AxMidiListener_eventOnSubsystemMidiNoteOff_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAxMidiListener_OnSubsystemMidiNoteOff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAxMidiListener_OnSubsystemMidiNoteOff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAxMidiListener);
	UClass* Z_Construct_UClass_UAxMidiListener_NoRegister()
	{
		return UAxMidiListener::StaticClass();
	}
	struct Z_Construct_UClass_UAxMidiListener_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAxMidiListener_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AxMidiBroadcasters,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiListener_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAxMidiListener_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAxMidiListener_OnSubsystemBPMEvent, "OnSubsystemBPMEvent" }, // 3141802495
		{ &Z_Construct_UFunction_UAxMidiListener_OnSubsystemChordOn, "OnSubsystemChordOn" }, // 4207137357
		{ &Z_Construct_UFunction_UAxMidiListener_OnSubsystemMidiNoteOff, "OnSubsystemMidiNoteOff" }, // 3536300927
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiListener_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiListener_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Interfaces/IAxMidiListener.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAxMidiListener_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAxMidiListener>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAxMidiListener_Statics::ClassParams = {
		&UAxMidiListener::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiListener_Statics::Class_MetaDataParams), Z_Construct_UClass_UAxMidiListener_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAxMidiListener()
	{
		if (!Z_Registration_Info_UClass_UAxMidiListener.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAxMidiListener.OuterSingleton, Z_Construct_UClass_UAxMidiListener_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAxMidiListener.OuterSingleton;
	}
	template<> AXMIDIBROADCASTERS_API UClass* StaticClass<UAxMidiListener>()
	{
		return UAxMidiListener::StaticClass();
	}
	UAxMidiListener::UAxMidiListener(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAxMidiListener);
	UAxMidiListener::~UAxMidiListener() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Interfaces_IAxMidiListener_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Interfaces_IAxMidiListener_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAxMidiListener, UAxMidiListener::StaticClass, TEXT("UAxMidiListener"), &Z_Registration_Info_UClass_UAxMidiListener, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAxMidiListener), 4093958701U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Interfaces_IAxMidiListener_h_3054212760(TEXT("/Script/AxMidiBroadcasters"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Interfaces_IAxMidiListener_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Interfaces_IAxMidiListener_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
