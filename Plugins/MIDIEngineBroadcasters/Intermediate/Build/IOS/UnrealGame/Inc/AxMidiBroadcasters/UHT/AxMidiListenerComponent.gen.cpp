// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AxMidiBroadcasters/Public/Components/AxMidiListenerComponent.h"
#include "Runtime/AxMidiBroadcasters/Public/MidiUtilities/AxMidiFilter.h"
#include "Runtime/AxMidiCore/Public/MidiClasses/AxMidiChord.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAxMidiListenerComponent() {}
// Cross Module References
	AXMIDIBROADCASTERS_API UClass* Z_Construct_UClass_UAxMidiBroadcaster_NoRegister();
	AXMIDIBROADCASTERS_API UClass* Z_Construct_UClass_UAxMidiBroadcastersSubsystem_NoRegister();
	AXMIDIBROADCASTERS_API UClass* Z_Construct_UClass_UAxMidiListener_NoRegister();
	AXMIDIBROADCASTERS_API UClass* Z_Construct_UClass_UAxMidiListenerComponent();
	AXMIDIBROADCASTERS_API UClass* Z_Construct_UClass_UAxMidiListenerComponent_NoRegister();
	AXMIDIBROADCASTERS_API UClass* Z_Construct_UClass_UAxMidiPlayhead_NoRegister();
	AXMIDIBROADCASTERS_API UFunction* Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiCurveDelegate__DelegateSignature();
	AXMIDIBROADCASTERS_API UFunction* Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiNoteDelegate__DelegateSignature();
	AXMIDIBROADCASTERS_API UScriptStruct* Z_Construct_UScriptStruct_FAxMidiFilter();
	AXMIDICORE_API UClass* Z_Construct_UClass_UAxMidiNote_NoRegister();
	AXMIDICORE_API UScriptStruct* Z_Construct_UScriptStruct_FAxMidiChord();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_AxMidiBroadcasters();
// End Cross Module References
	DEFINE_FUNCTION(UAxMidiListenerComponent::execBroadcastMidiNoteOff)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InMidiTrackName);
		P_GET_OBJECT(UAxMidiNote,Z_Param_InMidiNote);
		P_GET_OBJECT(UAxMidiPlayhead,Z_Param_InPlayhead);
		P_GET_TINTERFACE(IAxMidiBroadcaster,Z_Param_InBroadcaster);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastMidiNoteOff(Z_Param_InMidiTrackName,Z_Param_InMidiNote,Z_Param_InPlayhead,Z_Param_InBroadcaster);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAxMidiListenerComponent::execBroadcastMidiNoteOn)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InMidiTrackName);
		P_GET_OBJECT(UAxMidiNote,Z_Param_InMidiNote);
		P_GET_OBJECT(UAxMidiPlayhead,Z_Param_InPlayhead);
		P_GET_TINTERFACE(IAxMidiBroadcaster,Z_Param_InBroadcaster);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastMidiNoteOn(Z_Param_InMidiTrackName,Z_Param_InMidiNote,Z_Param_InPlayhead,Z_Param_InBroadcaster);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAxMidiListenerComponent::execOnSubsystemBPMEvent)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InBPM);
		P_GET_OBJECT(UAxMidiPlayhead,Z_Param_InPlayHead);
		P_GET_TINTERFACE(IAxMidiBroadcaster,Z_Param_InBroadcaster);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSubsystemBPMEvent(Z_Param_InBPM,Z_Param_InPlayHead,Z_Param_InBroadcaster);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAxMidiListenerComponent::execOnSubsystemMidiNoteOff)
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
	DEFINE_FUNCTION(UAxMidiListenerComponent::execOnSubsystemChordOn)
	{
		P_GET_STRUCT(FAxMidiChord,Z_Param_InMidiChord);
		P_GET_OBJECT(UAxMidiPlayhead,Z_Param_InPlayHead);
		P_GET_TINTERFACE(IAxMidiBroadcaster,Z_Param_InBroadcaster);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSubsystemChordOn(Z_Param_InMidiChord,Z_Param_InPlayHead,Z_Param_InBroadcaster);
		P_NATIVE_END;
	}
	void UAxMidiListenerComponent::StaticRegisterNativesUAxMidiListenerComponent()
	{
		UClass* Class = UAxMidiListenerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BroadcastMidiNoteOff", &UAxMidiListenerComponent::execBroadcastMidiNoteOff },
			{ "BroadcastMidiNoteOn", &UAxMidiListenerComponent::execBroadcastMidiNoteOn },
			{ "OnSubsystemBPMEvent", &UAxMidiListenerComponent::execOnSubsystemBPMEvent },
			{ "OnSubsystemChordOn", &UAxMidiListenerComponent::execOnSubsystemChordOn },
			{ "OnSubsystemMidiNoteOff", &UAxMidiListenerComponent::execOnSubsystemMidiNoteOff },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAxMidiListenerComponent_BroadcastMidiNoteOff_Statics
	{
		struct AxMidiListenerComponent_eventBroadcastMidiNoteOff_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAxMidiListenerComponent_BroadcastMidiNoteOff_Statics::NewProp_InMidiTrackName = { "InMidiTrackName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiListenerComponent_eventBroadcastMidiNoteOff_Parms, InMidiTrackName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAxMidiListenerComponent_BroadcastMidiNoteOff_Statics::NewProp_InMidiNote = { "InMidiNote", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiListenerComponent_eventBroadcastMidiNoteOff_Parms, InMidiNote), Z_Construct_UClass_UAxMidiNote_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAxMidiListenerComponent_BroadcastMidiNoteOff_Statics::NewProp_InPlayhead = { "InPlayhead", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiListenerComponent_eventBroadcastMidiNoteOff_Parms, InPlayhead), Z_Construct_UClass_UAxMidiPlayhead_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UAxMidiListenerComponent_BroadcastMidiNoteOff_Statics::NewProp_InBroadcaster = { "InBroadcaster", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiListenerComponent_eventBroadcastMidiNoteOff_Parms, InBroadcaster), Z_Construct_UClass_UAxMidiBroadcaster_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAxMidiListenerComponent_BroadcastMidiNoteOff_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiListenerComponent_BroadcastMidiNoteOff_Statics::NewProp_InMidiTrackName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiListenerComponent_BroadcastMidiNoteOff_Statics::NewProp_InMidiNote,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiListenerComponent_BroadcastMidiNoteOff_Statics::NewProp_InPlayhead,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiListenerComponent_BroadcastMidiNoteOff_Statics::NewProp_InBroadcaster,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAxMidiListenerComponent_BroadcastMidiNoteOff_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * @brief Broadcasts the MidiNote as a NoteOnEvent with the MidiNoteOn Delegate.\n\x09 *        Meant for exposing NoteOff to Blueprints from a component.\n\x09 *        Mostly for Convenience since C++ can listen to Subsystem directly \n\x09 * @param InMidiTrackName The Track name like Kick.\n\x09 * @param InMidiNote\n\x09 * @param InPlayhead The Playhead that's turning this note OFF.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/AxMidiListenerComponent.h" },
		{ "ToolTip", "@brief Broadcasts the MidiNote as a NoteOnEvent with the MidiNoteOn Delegate.\n       Meant for exposing NoteOff to Blueprints from a component.\n       Mostly for Convenience since C++ can listen to Subsystem directly\n@param InMidiTrackName The Track name like Kick.\n@param InMidiNote\n@param InPlayhead The Playhead that's turning this note OFF." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAxMidiListenerComponent_BroadcastMidiNoteOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAxMidiListenerComponent, nullptr, "BroadcastMidiNoteOff", nullptr, nullptr, Z_Construct_UFunction_UAxMidiListenerComponent_BroadcastMidiNoteOff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiListenerComponent_BroadcastMidiNoteOff_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAxMidiListenerComponent_BroadcastMidiNoteOff_Statics::AxMidiListenerComponent_eventBroadcastMidiNoteOff_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiListenerComponent_BroadcastMidiNoteOff_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAxMidiListenerComponent_BroadcastMidiNoteOff_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiListenerComponent_BroadcastMidiNoteOff_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAxMidiListenerComponent_BroadcastMidiNoteOff_Statics::AxMidiListenerComponent_eventBroadcastMidiNoteOff_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAxMidiListenerComponent_BroadcastMidiNoteOff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAxMidiListenerComponent_BroadcastMidiNoteOff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAxMidiListenerComponent_BroadcastMidiNoteOn_Statics
	{
		struct AxMidiListenerComponent_eventBroadcastMidiNoteOn_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAxMidiListenerComponent_BroadcastMidiNoteOn_Statics::NewProp_InMidiTrackName = { "InMidiTrackName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiListenerComponent_eventBroadcastMidiNoteOn_Parms, InMidiTrackName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAxMidiListenerComponent_BroadcastMidiNoteOn_Statics::NewProp_InMidiNote = { "InMidiNote", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiListenerComponent_eventBroadcastMidiNoteOn_Parms, InMidiNote), Z_Construct_UClass_UAxMidiNote_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAxMidiListenerComponent_BroadcastMidiNoteOn_Statics::NewProp_InPlayhead = { "InPlayhead", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiListenerComponent_eventBroadcastMidiNoteOn_Parms, InPlayhead), Z_Construct_UClass_UAxMidiPlayhead_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UAxMidiListenerComponent_BroadcastMidiNoteOn_Statics::NewProp_InBroadcaster = { "InBroadcaster", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiListenerComponent_eventBroadcastMidiNoteOn_Parms, InBroadcaster), Z_Construct_UClass_UAxMidiBroadcaster_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAxMidiListenerComponent_BroadcastMidiNoteOn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiListenerComponent_BroadcastMidiNoteOn_Statics::NewProp_InMidiTrackName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiListenerComponent_BroadcastMidiNoteOn_Statics::NewProp_InMidiNote,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiListenerComponent_BroadcastMidiNoteOn_Statics::NewProp_InPlayhead,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiListenerComponent_BroadcastMidiNoteOn_Statics::NewProp_InBroadcaster,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAxMidiListenerComponent_BroadcastMidiNoteOn_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * @brief Broadcasts the MidiNote as a NoteOnEvent with the MidiNoteOn Delegate.\n\x09 *        Meant for exposing NoteOn to Blueprints from a component.\n\x09 *        Mostly for Convenience since C++ can listen to Subsystem directly.\n\x09 *        Automatically triggered by the Broadcaster subsystem by default.\n\x09 * @param InMidiTrackName The Track name like Kick.\n\x09 * @param InMidiNote\n\x09 * @param InPlayhead The Playhead responsible for turning the note on.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/AxMidiListenerComponent.h" },
		{ "ToolTip", "@brief Broadcasts the MidiNote as a NoteOnEvent with the MidiNoteOn Delegate.\n       Meant for exposing NoteOn to Blueprints from a component.\n       Mostly for Convenience since C++ can listen to Subsystem directly.\n       Automatically triggered by the Broadcaster subsystem by default.\n@param InMidiTrackName The Track name like Kick.\n@param InMidiNote\n@param InPlayhead The Playhead responsible for turning the note on." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAxMidiListenerComponent_BroadcastMidiNoteOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAxMidiListenerComponent, nullptr, "BroadcastMidiNoteOn", nullptr, nullptr, Z_Construct_UFunction_UAxMidiListenerComponent_BroadcastMidiNoteOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiListenerComponent_BroadcastMidiNoteOn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAxMidiListenerComponent_BroadcastMidiNoteOn_Statics::AxMidiListenerComponent_eventBroadcastMidiNoteOn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiListenerComponent_BroadcastMidiNoteOn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAxMidiListenerComponent_BroadcastMidiNoteOn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiListenerComponent_BroadcastMidiNoteOn_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAxMidiListenerComponent_BroadcastMidiNoteOn_Statics::AxMidiListenerComponent_eventBroadcastMidiNoteOn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAxMidiListenerComponent_BroadcastMidiNoteOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAxMidiListenerComponent_BroadcastMidiNoteOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemBPMEvent_Statics
	{
		struct AxMidiListenerComponent_eventOnSubsystemBPMEvent_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemBPMEvent_Statics::NewProp_InBPM = { "InBPM", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiListenerComponent_eventOnSubsystemBPMEvent_Parms, InBPM), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemBPMEvent_Statics::NewProp_InPlayHead = { "InPlayHead", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiListenerComponent_eventOnSubsystemBPMEvent_Parms, InPlayHead), Z_Construct_UClass_UAxMidiPlayhead_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemBPMEvent_Statics::NewProp_InBroadcaster = { "InBroadcaster", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiListenerComponent_eventOnSubsystemBPMEvent_Parms, InBroadcaster), Z_Construct_UClass_UAxMidiBroadcaster_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemBPMEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemBPMEvent_Statics::NewProp_InBPM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemBPMEvent_Statics::NewProp_InPlayHead,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemBPMEvent_Statics::NewProp_InBroadcaster,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemBPMEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/AxMidiListenerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemBPMEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAxMidiListenerComponent, nullptr, "OnSubsystemBPMEvent", nullptr, nullptr, Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemBPMEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemBPMEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemBPMEvent_Statics::AxMidiListenerComponent_eventOnSubsystemBPMEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemBPMEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemBPMEvent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemBPMEvent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemBPMEvent_Statics::AxMidiListenerComponent_eventOnSubsystemBPMEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemBPMEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemBPMEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemChordOn_Statics
	{
		struct AxMidiListenerComponent_eventOnSubsystemChordOn_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemChordOn_Statics::NewProp_InMidiChord = { "InMidiChord", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiListenerComponent_eventOnSubsystemChordOn_Parms, InMidiChord), Z_Construct_UScriptStruct_FAxMidiChord, METADATA_PARAMS(0, nullptr) }; // 1288995871
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemChordOn_Statics::NewProp_InPlayHead = { "InPlayHead", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiListenerComponent_eventOnSubsystemChordOn_Parms, InPlayHead), Z_Construct_UClass_UAxMidiPlayhead_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemChordOn_Statics::NewProp_InBroadcaster = { "InBroadcaster", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiListenerComponent_eventOnSubsystemChordOn_Parms, InBroadcaster), Z_Construct_UClass_UAxMidiBroadcaster_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemChordOn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemChordOn_Statics::NewProp_InMidiChord,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemChordOn_Statics::NewProp_InPlayHead,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemChordOn_Statics::NewProp_InBroadcaster,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemChordOn_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * @brief Responds to the MidiBroadcasterSubsystem ChordOn Event and broadcasts the notes individually.\n\x09 * @param InMidiChord The Chord that just turned on\n\x09 * @param InPlayHead The Playhead responsible for turning the chord on.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/AxMidiListenerComponent.h" },
		{ "ToolTip", "@brief Responds to the MidiBroadcasterSubsystem ChordOn Event and broadcasts the notes individually.\n@param InMidiChord The Chord that just turned on\n@param InPlayHead The Playhead responsible for turning the chord on." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemChordOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAxMidiListenerComponent, nullptr, "OnSubsystemChordOn", nullptr, nullptr, Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemChordOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemChordOn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemChordOn_Statics::AxMidiListenerComponent_eventOnSubsystemChordOn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemChordOn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemChordOn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemChordOn_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemChordOn_Statics::AxMidiListenerComponent_eventOnSubsystemChordOn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemChordOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemChordOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemMidiNoteOff_Statics
	{
		struct AxMidiListenerComponent_eventOnSubsystemMidiNoteOff_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemMidiNoteOff_Statics::NewProp_InMidiTrackName = { "InMidiTrackName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiListenerComponent_eventOnSubsystemMidiNoteOff_Parms, InMidiTrackName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemMidiNoteOff_Statics::NewProp_InMidiNote = { "InMidiNote", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiListenerComponent_eventOnSubsystemMidiNoteOff_Parms, InMidiNote), Z_Construct_UClass_UAxMidiNote_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemMidiNoteOff_Statics::NewProp_InPlayhead = { "InPlayhead", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiListenerComponent_eventOnSubsystemMidiNoteOff_Parms, InPlayhead), Z_Construct_UClass_UAxMidiPlayhead_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemMidiNoteOff_Statics::NewProp_InBroadcaster = { "InBroadcaster", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AxMidiListenerComponent_eventOnSubsystemMidiNoteOff_Parms, InBroadcaster), Z_Construct_UClass_UAxMidiBroadcaster_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemMidiNoteOff_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemMidiNoteOff_Statics::NewProp_InMidiTrackName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemMidiNoteOff_Statics::NewProp_InMidiNote,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemMidiNoteOff_Statics::NewProp_InPlayhead,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemMidiNoteOff_Statics::NewProp_InBroadcaster,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemMidiNoteOff_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * @brief Responds to the MidiBroadcasterSubsystem MidiNoteOff Event;\n\x09 * @param InMidiTrackName The Track name like Kick.\n\x09 * @param InMidiNote The note that just turned on\n\x09 * @param InPlayhead The Playhead that's turning this note OFF.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/AxMidiListenerComponent.h" },
		{ "ToolTip", "@brief Responds to the MidiBroadcasterSubsystem MidiNoteOff Event;\n@param InMidiTrackName The Track name like Kick.\n@param InMidiNote The note that just turned on\n@param InPlayhead The Playhead that's turning this note OFF." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemMidiNoteOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAxMidiListenerComponent, nullptr, "OnSubsystemMidiNoteOff", nullptr, nullptr, Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemMidiNoteOff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemMidiNoteOff_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemMidiNoteOff_Statics::AxMidiListenerComponent_eventOnSubsystemMidiNoteOff_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemMidiNoteOff_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemMidiNoteOff_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemMidiNoteOff_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemMidiNoteOff_Statics::AxMidiListenerComponent_eventOnSubsystemMidiNoteOff_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemMidiNoteOff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemMidiNoteOff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAxMidiListenerComponent);
	UClass* Z_Construct_UClass_UAxMidiListenerComponent_NoRegister()
	{
		return UAxMidiListenerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAxMidiListenerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MidiBroadcasterSubsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MidiBroadcasterSubsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MidiFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MidiFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoteOnEventsDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_NoteOnEventsDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoteOffEventsDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_NoteOffEventsDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BPMEventsDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_BPMEventsDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAxMidiListenerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AxMidiBroadcasters,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiListenerComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAxMidiListenerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAxMidiListenerComponent_BroadcastMidiNoteOff, "BroadcastMidiNoteOff" }, // 3980128593
		{ &Z_Construct_UFunction_UAxMidiListenerComponent_BroadcastMidiNoteOn, "BroadcastMidiNoteOn" }, // 1449337992
		{ &Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemBPMEvent, "OnSubsystemBPMEvent" }, // 759651890
		{ &Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemChordOn, "OnSubsystemChordOn" }, // 4132240785
		{ &Z_Construct_UFunction_UAxMidiListenerComponent_OnSubsystemMidiNoteOff, "OnSubsystemMidiNoteOff" }, // 1097034925
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiListenerComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiListenerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "MidiEngine" },
		{ "Comment", "/**\n * A MidiLister  listens to MidiEvents that are broadcast by UMidiBroadcasters through the Broadcast Subsystem\n * Automatically triggered by the Broadcaster subsystem by default.\n * You can override the beginplay() function to disable the binding.\n */" },
		{ "DisplayName", "MidiListener" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Components/AxMidiListenerComponent.h" },
		{ "ModuleRelativePath", "Public/Components/AxMidiListenerComponent.h" },
		{ "ToolTip", "A MidiLister  listens to MidiEvents that are broadcast by UMidiBroadcasters through the Broadcast Subsystem\nAutomatically triggered by the Broadcaster subsystem by default.\nYou can override the beginplay() function to disable the binding." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiListenerComponent_Statics::NewProp_MidiBroadcasterSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/AxMidiListenerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAxMidiListenerComponent_Statics::NewProp_MidiBroadcasterSubsystem = { "MidiBroadcasterSubsystem", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxMidiListenerComponent, MidiBroadcasterSubsystem), Z_Construct_UClass_UAxMidiBroadcastersSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiListenerComponent_Statics::NewProp_MidiBroadcasterSubsystem_MetaData), Z_Construct_UClass_UAxMidiListenerComponent_Statics::NewProp_MidiBroadcasterSubsystem_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiListenerComponent_Statics::NewProp_MidiFilter_MetaData[] = {
		{ "Category", "Midi Engine" },
		{ "Comment", "/**\n\x09 * @brief The Midi Listening Filter. If you leave this empty, no filtering will happen and all notes will play\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/AxMidiListenerComponent.h" },
		{ "ToolTip", "@brief The Midi Listening Filter. If you leave this empty, no filtering will happen and all notes will play" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAxMidiListenerComponent_Statics::NewProp_MidiFilter = { "MidiFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxMidiListenerComponent, MidiFilter), Z_Construct_UScriptStruct_FAxMidiFilter, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiListenerComponent_Statics::NewProp_MidiFilter_MetaData), Z_Construct_UClass_UAxMidiListenerComponent_Statics::NewProp_MidiFilter_MetaData) }; // 3941190140
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiListenerComponent_Statics::NewProp_NoteOnEventsDelegate_MetaData[] = {
		{ "Category", "MidiEngine|MidiListener" },
		{ "Comment", "/**\n\x09 * Called when a MidiNote Starts Playing\n\x09 * Call Get NoteProperties on the MidiNote to access it's info like velocity etc...\n\x09 */" },
		{ "DisplayName", "On Midi Note ON" },
		{ "ModuleRelativePath", "Public/Components/AxMidiListenerComponent.h" },
		{ "ToolTip", "Called when a MidiNote Starts Playing\nCall Get NoteProperties on the MidiNote to access it's info like velocity etc..." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAxMidiListenerComponent_Statics::NewProp_NoteOnEventsDelegate = { "NoteOnEventsDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxMidiListenerComponent, NoteOnEventsDelegate), Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiNoteDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiListenerComponent_Statics::NewProp_NoteOnEventsDelegate_MetaData), Z_Construct_UClass_UAxMidiListenerComponent_Statics::NewProp_NoteOnEventsDelegate_MetaData) }; // 3089481053
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiListenerComponent_Statics::NewProp_NoteOffEventsDelegate_MetaData[] = {
		{ "Category", "MidiEngine|MidiListener" },
		{ "Comment", "/**\n\x09 * Called when a MidiNote Stops Playing\n\x09 * Call Get NoteProperties on the MidiNote to access it's info like velocity etc...\n\x09 */" },
		{ "DisplayName", "On Midi Note OFF" },
		{ "ModuleRelativePath", "Public/Components/AxMidiListenerComponent.h" },
		{ "ToolTip", "Called when a MidiNote Stops Playing\nCall Get NoteProperties on the MidiNote to access it's info like velocity etc..." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAxMidiListenerComponent_Statics::NewProp_NoteOffEventsDelegate = { "NoteOffEventsDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxMidiListenerComponent, NoteOffEventsDelegate), Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiNoteDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiListenerComponent_Statics::NewProp_NoteOffEventsDelegate_MetaData), Z_Construct_UClass_UAxMidiListenerComponent_Statics::NewProp_NoteOffEventsDelegate_MetaData) }; // 3089481053
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiListenerComponent_Statics::NewProp_BPMEventsDelegate_MetaData[] = {
		{ "Category", "MidiEngine|MidiListener" },
		{ "Comment", "/**\n\x09 * Called On tick to give actors BPM Events updates.\n\x09 */" },
		{ "DisplayName", "On BPM Event" },
		{ "ModuleRelativePath", "Public/Components/AxMidiListenerComponent.h" },
		{ "ToolTip", "Called On tick to give actors BPM Events updates." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAxMidiListenerComponent_Statics::NewProp_BPMEventsDelegate = { "BPMEventsDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxMidiListenerComponent, BPMEventsDelegate), Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiCurveDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiListenerComponent_Statics::NewProp_BPMEventsDelegate_MetaData), Z_Construct_UClass_UAxMidiListenerComponent_Statics::NewProp_BPMEventsDelegate_MetaData) }; // 716177461
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAxMidiListenerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxMidiListenerComponent_Statics::NewProp_MidiBroadcasterSubsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxMidiListenerComponent_Statics::NewProp_MidiFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxMidiListenerComponent_Statics::NewProp_NoteOnEventsDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxMidiListenerComponent_Statics::NewProp_NoteOffEventsDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxMidiListenerComponent_Statics::NewProp_BPMEventsDelegate,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAxMidiListenerComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAxMidiListener_NoRegister, (int32)VTABLE_OFFSET(UAxMidiListenerComponent, IAxMidiListener), false },  // 4093958701
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiListenerComponent_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAxMidiListenerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAxMidiListenerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAxMidiListenerComponent_Statics::ClassParams = {
		&UAxMidiListenerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAxMidiListenerComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiListenerComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiListenerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAxMidiListenerComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiListenerComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAxMidiListenerComponent()
	{
		if (!Z_Registration_Info_UClass_UAxMidiListenerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAxMidiListenerComponent.OuterSingleton, Z_Construct_UClass_UAxMidiListenerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAxMidiListenerComponent.OuterSingleton;
	}
	template<> AXMIDIBROADCASTERS_API UClass* StaticClass<UAxMidiListenerComponent>()
	{
		return UAxMidiListenerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAxMidiListenerComponent);
	UAxMidiListenerComponent::~UAxMidiListenerComponent() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Components_AxMidiListenerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Components_AxMidiListenerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAxMidiListenerComponent, UAxMidiListenerComponent::StaticClass, TEXT("UAxMidiListenerComponent"), &Z_Registration_Info_UClass_UAxMidiListenerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAxMidiListenerComponent), 131055660U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Components_AxMidiListenerComponent_h_2274340172(TEXT("/Script/AxMidiBroadcasters"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Components_AxMidiListenerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Components_AxMidiListenerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
