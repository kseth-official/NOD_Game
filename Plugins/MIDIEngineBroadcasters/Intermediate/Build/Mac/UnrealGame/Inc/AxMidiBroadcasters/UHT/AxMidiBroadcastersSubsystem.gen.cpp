// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AxMidiBroadcasters/Public/Subsystems/AxMidiBroadcastersSubsystem.h"
#include "Runtime/AxMidiCore/Public/MidiClasses/AxMidiChord.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAxMidiBroadcastersSubsystem() {}
// Cross Module References
	AXMIDIBROADCASTERS_API UClass* Z_Construct_UClass_UAxMidiBroadcaster_NoRegister();
	AXMIDIBROADCASTERS_API UClass* Z_Construct_UClass_UAxMidiBroadcastersSubsystem();
	AXMIDIBROADCASTERS_API UClass* Z_Construct_UClass_UAxMidiBroadcastersSubsystem_NoRegister();
	AXMIDIBROADCASTERS_API UClass* Z_Construct_UClass_UAxMidiPlayhead_NoRegister();
	AXMIDIBROADCASTERS_API UFunction* Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiChordDelegate__DelegateSignature();
	AXMIDIBROADCASTERS_API UFunction* Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiCurveDelegate__DelegateSignature();
	AXMIDIBROADCASTERS_API UFunction* Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiNoteDelegate__DelegateSignature();
	AXMIDICORE_API UClass* Z_Construct_UClass_UAxMidiNote_NoRegister();
	AXMIDICORE_API UScriptStruct* Z_Construct_UScriptStruct_FAxMidiChord();
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	UPackage* Z_Construct_UPackage__Script_AxMidiBroadcasters();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiNoteDelegate__DelegateSignature_Statics
	{
		struct _Script_AxMidiBroadcasters_eventAxMidiNoteDelegate_Parms
		{
			FString TrackName;
			UAxMidiNote* MidiNote;
			UAxMidiPlayhead* PlayHead;
			TScriptInterface<IAxMidiBroadcaster> Broadcaster;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_TrackName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MidiNote;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayHead;
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_Broadcaster;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiNoteDelegate__DelegateSignature_Statics::NewProp_TrackName = { "TrackName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AxMidiBroadcasters_eventAxMidiNoteDelegate_Parms, TrackName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiNoteDelegate__DelegateSignature_Statics::NewProp_MidiNote = { "MidiNote", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AxMidiBroadcasters_eventAxMidiNoteDelegate_Parms, MidiNote), Z_Construct_UClass_UAxMidiNote_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiNoteDelegate__DelegateSignature_Statics::NewProp_PlayHead = { "PlayHead", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AxMidiBroadcasters_eventAxMidiNoteDelegate_Parms, PlayHead), Z_Construct_UClass_UAxMidiPlayhead_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiNoteDelegate__DelegateSignature_Statics::NewProp_Broadcaster = { "Broadcaster", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AxMidiBroadcasters_eventAxMidiNoteDelegate_Parms, Broadcaster), Z_Construct_UClass_UAxMidiBroadcaster_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiNoteDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiNoteDelegate__DelegateSignature_Statics::NewProp_TrackName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiNoteDelegate__DelegateSignature_Statics::NewProp_MidiNote,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiNoteDelegate__DelegateSignature_Statics::NewProp_PlayHead,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiNoteDelegate__DelegateSignature_Statics::NewProp_Broadcaster,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiNoteDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * @brief For MidiNote Related Events broadcast by a playhead.\n *        The PlayHead is the one responsible for the broadcasting.\n *\x09\x09  If you want the name of the playhead, or the broadcaster you can query the Playhead pointer.\n *\n */" },
		{ "ModuleRelativePath", "Public/Subsystems/AxMidiBroadcastersSubsystem.h" },
		{ "ToolTip", "@brief For MidiNote Related Events broadcast by a playhead.\n       The PlayHead is the one responsible for the broadcasting.\n              If you want the name of the playhead, or the broadcaster you can query the Playhead pointer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiNoteDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AxMidiBroadcasters, nullptr, "AxMidiNoteDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiNoteDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiNoteDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiNoteDelegate__DelegateSignature_Statics::_Script_AxMidiBroadcasters_eventAxMidiNoteDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiNoteDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiNoteDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiNoteDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiNoteDelegate__DelegateSignature_Statics::_Script_AxMidiBroadcasters_eventAxMidiNoteDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiNoteDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiNoteDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAxMidiNoteDelegate_DelegateWrapper(const FMulticastScriptDelegate& AxMidiNoteDelegate, const FString& TrackName, UAxMidiNote* MidiNote, UAxMidiPlayhead* PlayHead, const TScriptInterface<IAxMidiBroadcaster>& Broadcaster)
{
	struct _Script_AxMidiBroadcasters_eventAxMidiNoteDelegate_Parms
	{
		FString TrackName;
		UAxMidiNote* MidiNote;
		UAxMidiPlayhead* PlayHead;
		TScriptInterface<IAxMidiBroadcaster> Broadcaster;
	};
	_Script_AxMidiBroadcasters_eventAxMidiNoteDelegate_Parms Parms;
	Parms.TrackName=TrackName;
	Parms.MidiNote=MidiNote;
	Parms.PlayHead=PlayHead;
	Parms.Broadcaster=Broadcaster;
	AxMidiNoteDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiChordDelegate__DelegateSignature_Statics
	{
		struct _Script_AxMidiBroadcasters_eventAxMidiChordDelegate_Parms
		{
			FAxMidiChord MidiChord;
			UAxMidiPlayhead* PlayHead;
			TScriptInterface<IAxMidiBroadcaster> Broadcaster;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_MidiChord;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayHead;
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_Broadcaster;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiChordDelegate__DelegateSignature_Statics::NewProp_MidiChord = { "MidiChord", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AxMidiBroadcasters_eventAxMidiChordDelegate_Parms, MidiChord), Z_Construct_UScriptStruct_FAxMidiChord, METADATA_PARAMS(0, nullptr) }; // 1288995871
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiChordDelegate__DelegateSignature_Statics::NewProp_PlayHead = { "PlayHead", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AxMidiBroadcasters_eventAxMidiChordDelegate_Parms, PlayHead), Z_Construct_UClass_UAxMidiPlayhead_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiChordDelegate__DelegateSignature_Statics::NewProp_Broadcaster = { "Broadcaster", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AxMidiBroadcasters_eventAxMidiChordDelegate_Parms, Broadcaster), Z_Construct_UClass_UAxMidiBroadcaster_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiChordDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiChordDelegate__DelegateSignature_Statics::NewProp_MidiChord,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiChordDelegate__DelegateSignature_Statics::NewProp_PlayHead,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiChordDelegate__DelegateSignature_Statics::NewProp_Broadcaster,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiChordDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/AxMidiBroadcastersSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiChordDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AxMidiBroadcasters, nullptr, "AxMidiChordDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiChordDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiChordDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiChordDelegate__DelegateSignature_Statics::_Script_AxMidiBroadcasters_eventAxMidiChordDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiChordDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiChordDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiChordDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiChordDelegate__DelegateSignature_Statics::_Script_AxMidiBroadcasters_eventAxMidiChordDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiChordDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiChordDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAxMidiChordDelegate_DelegateWrapper(const FMulticastScriptDelegate& AxMidiChordDelegate, FAxMidiChord MidiChord, UAxMidiPlayhead* PlayHead, const TScriptInterface<IAxMidiBroadcaster>& Broadcaster)
{
	struct _Script_AxMidiBroadcasters_eventAxMidiChordDelegate_Parms
	{
		FAxMidiChord MidiChord;
		UAxMidiPlayhead* PlayHead;
		TScriptInterface<IAxMidiBroadcaster> Broadcaster;
	};
	_Script_AxMidiBroadcasters_eventAxMidiChordDelegate_Parms Parms;
	Parms.MidiChord=MidiChord;
	Parms.PlayHead=PlayHead;
	Parms.Broadcaster=Broadcaster;
	AxMidiChordDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiCurveDelegate__DelegateSignature_Statics
	{
		struct _Script_AxMidiBroadcasters_eventAxMidiCurveDelegate_Parms
		{
			float CurveValue;
			UAxMidiPlayhead* PlayHead;
			TScriptInterface<IAxMidiBroadcaster> Broadcaster;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurveValue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayHead;
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_Broadcaster;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiCurveDelegate__DelegateSignature_Statics::NewProp_CurveValue = { "CurveValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AxMidiBroadcasters_eventAxMidiCurveDelegate_Parms, CurveValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiCurveDelegate__DelegateSignature_Statics::NewProp_PlayHead = { "PlayHead", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AxMidiBroadcasters_eventAxMidiCurveDelegate_Parms, PlayHead), Z_Construct_UClass_UAxMidiPlayhead_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiCurveDelegate__DelegateSignature_Statics::NewProp_Broadcaster = { "Broadcaster", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AxMidiBroadcasters_eventAxMidiCurveDelegate_Parms, Broadcaster), Z_Construct_UClass_UAxMidiBroadcaster_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiCurveDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiCurveDelegate__DelegateSignature_Statics::NewProp_CurveValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiCurveDelegate__DelegateSignature_Statics::NewProp_PlayHead,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiCurveDelegate__DelegateSignature_Statics::NewProp_Broadcaster,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiCurveDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/AxMidiBroadcastersSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiCurveDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AxMidiBroadcasters, nullptr, "AxMidiCurveDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiCurveDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiCurveDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiCurveDelegate__DelegateSignature_Statics::_Script_AxMidiBroadcasters_eventAxMidiCurveDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiCurveDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiCurveDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiCurveDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiCurveDelegate__DelegateSignature_Statics::_Script_AxMidiBroadcasters_eventAxMidiCurveDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiCurveDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiCurveDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAxMidiCurveDelegate_DelegateWrapper(const FMulticastScriptDelegate& AxMidiCurveDelegate, float CurveValue, UAxMidiPlayhead* PlayHead, const TScriptInterface<IAxMidiBroadcaster>& Broadcaster)
{
	struct _Script_AxMidiBroadcasters_eventAxMidiCurveDelegate_Parms
	{
		float CurveValue;
		UAxMidiPlayhead* PlayHead;
		TScriptInterface<IAxMidiBroadcaster> Broadcaster;
	};
	_Script_AxMidiBroadcasters_eventAxMidiCurveDelegate_Parms Parms;
	Parms.CurveValue=CurveValue;
	Parms.PlayHead=PlayHead;
	Parms.Broadcaster=Broadcaster;
	AxMidiCurveDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UAxMidiBroadcastersSubsystem::StaticRegisterNativesUAxMidiBroadcastersSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAxMidiBroadcastersSubsystem);
	UClass* Z_Construct_UClass_UAxMidiBroadcastersSubsystem_NoRegister()
	{
		return UAxMidiBroadcastersSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UAxMidiBroadcastersSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChordOnEventsDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ChordOnEventsDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoteOffEventsDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_NoteOffEventsDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BPMEventsDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_BPMEventsDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAxMidiBroadcastersSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_AxMidiBroadcasters,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiBroadcastersSubsystem_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiBroadcastersSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This is main runtime subsystem that will host common variables and functions shared between the\n * different MidiEngine classes. Example if MidiAssetPlayer and MidiTrack need access to a common variable\n * It's best to host it in this class since they don't inherit from one another.\n */" },
		{ "DisplayName", "Midi Broadcasters Subsystem" },
		{ "IncludePath", "Subsystems/AxMidiBroadcastersSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/AxMidiBroadcastersSubsystem.h" },
		{ "ToolTip", "This is main runtime subsystem that will host common variables and functions shared between the\ndifferent MidiEngine classes. Example if MidiAssetPlayer and MidiTrack need access to a common variable\nIt's best to host it in this class since they don't inherit from one another." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiBroadcastersSubsystem_Statics::NewProp_ChordOnEventsDelegate_MetaData[] = {
		{ "Category", "MidiEngine" },
		{ "Comment", "/**\n\x09* @brief MidiNote ONs will be broadcast as chords... \n\x09*/" },
		{ "ModuleRelativePath", "Public/Subsystems/AxMidiBroadcastersSubsystem.h" },
		{ "ToolTip", "@brief MidiNote ONs will be broadcast as chords..." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAxMidiBroadcastersSubsystem_Statics::NewProp_ChordOnEventsDelegate = { "ChordOnEventsDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxMidiBroadcastersSubsystem, ChordOnEventsDelegate), Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiChordDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiBroadcastersSubsystem_Statics::NewProp_ChordOnEventsDelegate_MetaData), Z_Construct_UClass_UAxMidiBroadcastersSubsystem_Statics::NewProp_ChordOnEventsDelegate_MetaData) }; // 1225548034
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiBroadcastersSubsystem_Statics::NewProp_NoteOffEventsDelegate_MetaData[] = {
		{ "Category", "MidiEngine" },
		{ "Comment", "/**\n\x09 * @brief Fired or broadcast each time any Midi Note STOPS Playing.\n\x09 * Blueprints or other classes can bind to this to react when a midi note STOPS playing.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/AxMidiBroadcastersSubsystem.h" },
		{ "ToolTip", "@brief Fired or broadcast each time any Midi Note STOPS Playing.\nBlueprints or other classes can bind to this to react when a midi note STOPS playing." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAxMidiBroadcastersSubsystem_Statics::NewProp_NoteOffEventsDelegate = { "NoteOffEventsDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxMidiBroadcastersSubsystem, NoteOffEventsDelegate), Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiNoteDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiBroadcastersSubsystem_Statics::NewProp_NoteOffEventsDelegate_MetaData), Z_Construct_UClass_UAxMidiBroadcastersSubsystem_Statics::NewProp_NoteOffEventsDelegate_MetaData) }; // 3089481053
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiBroadcastersSubsystem_Statics::NewProp_BPMEventsDelegate_MetaData[] = {
		{ "Category", "MidiEngine" },
		{ "Comment", "/**\n\x09 * @brief Fired on tick to give actors BPM info.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Subsystems/AxMidiBroadcastersSubsystem.h" },
		{ "ToolTip", "@brief Fired on tick to give actors BPM info." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAxMidiBroadcastersSubsystem_Statics::NewProp_BPMEventsDelegate = { "BPMEventsDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxMidiBroadcastersSubsystem, BPMEventsDelegate), Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxMidiCurveDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiBroadcastersSubsystem_Statics::NewProp_BPMEventsDelegate_MetaData), Z_Construct_UClass_UAxMidiBroadcastersSubsystem_Statics::NewProp_BPMEventsDelegate_MetaData) }; // 716177461
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAxMidiBroadcastersSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxMidiBroadcastersSubsystem_Statics::NewProp_ChordOnEventsDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxMidiBroadcastersSubsystem_Statics::NewProp_NoteOffEventsDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxMidiBroadcastersSubsystem_Statics::NewProp_BPMEventsDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAxMidiBroadcastersSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAxMidiBroadcastersSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAxMidiBroadcastersSubsystem_Statics::ClassParams = {
		&UAxMidiBroadcastersSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAxMidiBroadcastersSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiBroadcastersSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiBroadcastersSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UAxMidiBroadcastersSubsystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiBroadcastersSubsystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAxMidiBroadcastersSubsystem()
	{
		if (!Z_Registration_Info_UClass_UAxMidiBroadcastersSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAxMidiBroadcastersSubsystem.OuterSingleton, Z_Construct_UClass_UAxMidiBroadcastersSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAxMidiBroadcastersSubsystem.OuterSingleton;
	}
	template<> AXMIDIBROADCASTERS_API UClass* StaticClass<UAxMidiBroadcastersSubsystem>()
	{
		return UAxMidiBroadcastersSubsystem::StaticClass();
	}
	UAxMidiBroadcastersSubsystem::UAxMidiBroadcastersSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAxMidiBroadcastersSubsystem);
	UAxMidiBroadcastersSubsystem::~UAxMidiBroadcastersSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Subsystems_AxMidiBroadcastersSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Subsystems_AxMidiBroadcastersSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAxMidiBroadcastersSubsystem, UAxMidiBroadcastersSubsystem::StaticClass, TEXT("UAxMidiBroadcastersSubsystem"), &Z_Registration_Info_UClass_UAxMidiBroadcastersSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAxMidiBroadcastersSubsystem), 3235670675U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Subsystems_AxMidiBroadcastersSubsystem_h_3245118562(TEXT("/Script/AxMidiBroadcasters"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Subsystems_AxMidiBroadcastersSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Subsystems_AxMidiBroadcastersSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
