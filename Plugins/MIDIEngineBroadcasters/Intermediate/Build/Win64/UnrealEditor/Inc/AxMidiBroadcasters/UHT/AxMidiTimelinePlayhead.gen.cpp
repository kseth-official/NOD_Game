// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AxMidiBroadcasters/Public/Playheads/AxMidiTimelinePlayhead.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAxMidiTimelinePlayhead() {}
// Cross Module References
	AXMIDIBROADCASTERS_API UClass* Z_Construct_UClass_UAxMidiPlayhead();
	AXMIDIBROADCASTERS_API UClass* Z_Construct_UClass_UAxMidiTimelinePlayhead();
	AXMIDIBROADCASTERS_API UClass* Z_Construct_UClass_UAxMidiTimelinePlayhead_NoRegister();
	AXMIDIBROADCASTERS_API UFunction* Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxOnMidiSectionEvent__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AxMidiBroadcasters();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxOnMidiSectionEvent__DelegateSignature_Statics
	{
		struct _Script_AxMidiBroadcasters_eventAxOnMidiSectionEvent_Parms
		{
			UAxMidiTimelinePlayhead* MidiPlayhead;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MidiPlayhead;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxOnMidiSectionEvent__DelegateSignature_Statics::NewProp_MidiPlayhead = { "MidiPlayhead", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AxMidiBroadcasters_eventAxOnMidiSectionEvent_Parms, MidiPlayhead), Z_Construct_UClass_UAxMidiTimelinePlayhead_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxOnMidiSectionEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxOnMidiSectionEvent__DelegateSignature_Statics::NewProp_MidiPlayhead,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxOnMidiSectionEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Events fired related to Midi Section Timing and others.\n" },
#endif
		{ "ModuleRelativePath", "Public/Playheads/AxMidiTimelinePlayhead.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Events fired related to Midi Section Timing and others." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxOnMidiSectionEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AxMidiBroadcasters, nullptr, "AxOnMidiSectionEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxOnMidiSectionEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxOnMidiSectionEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxOnMidiSectionEvent__DelegateSignature_Statics::_Script_AxMidiBroadcasters_eventAxOnMidiSectionEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxOnMidiSectionEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxOnMidiSectionEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxOnMidiSectionEvent__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxOnMidiSectionEvent__DelegateSignature_Statics::_Script_AxMidiBroadcasters_eventAxOnMidiSectionEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxOnMidiSectionEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxOnMidiSectionEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAxOnMidiSectionEvent_DelegateWrapper(const FMulticastScriptDelegate& AxOnMidiSectionEvent, UAxMidiTimelinePlayhead* MidiPlayhead)
{
	struct _Script_AxMidiBroadcasters_eventAxOnMidiSectionEvent_Parms
	{
		UAxMidiTimelinePlayhead* MidiPlayhead;
	};
	_Script_AxMidiBroadcasters_eventAxOnMidiSectionEvent_Parms Parms;
	Parms.MidiPlayhead=MidiPlayhead;
	AxOnMidiSectionEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAxMidiTimelinePlayhead::execOnTimelineSectionFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTimelineSectionFinished();
		P_NATIVE_END;
	}
	void UAxMidiTimelinePlayhead::StaticRegisterNativesUAxMidiTimelinePlayhead()
	{
		UClass* Class = UAxMidiTimelinePlayhead::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTimelineSectionFinished", &UAxMidiTimelinePlayhead::execOnTimelineSectionFinished },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAxMidiTimelinePlayhead_OnTimelineSectionFinished_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAxMidiTimelinePlayhead_OnTimelineSectionFinished_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief This is a class internal function bound to the timeline that will broadcast another delegate.\n\x09 *        Pay attention not to confuse the two.\n\x09 *        We are listening for events from the timeline, and then we broadcaster another delegate when it happens.\n\x09 *\x09\x09   Reason being we need to broadcast WHICH MidiTimelinePlayHead is finished.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Playheads/AxMidiTimelinePlayhead.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief This is a class internal function bound to the timeline that will broadcast another delegate.\n       Pay attention not to confuse the two.\n       We are listening for events from the timeline, and then we broadcaster another delegate when it happens.\n                Reason being we need to broadcast WHICH MidiTimelinePlayHead is finished." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAxMidiTimelinePlayhead_OnTimelineSectionFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAxMidiTimelinePlayhead, nullptr, "OnTimelineSectionFinished", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAxMidiTimelinePlayhead_OnTimelineSectionFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAxMidiTimelinePlayhead_OnTimelineSectionFinished_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAxMidiTimelinePlayhead_OnTimelineSectionFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAxMidiTimelinePlayhead_OnTimelineSectionFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAxMidiTimelinePlayhead);
	UClass* Z_Construct_UClass_UAxMidiTimelinePlayhead_NoRegister()
	{
		return UAxMidiTimelinePlayhead::StaticClass();
	}
	struct Z_Construct_UClass_UAxMidiTimelinePlayhead_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Timeline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Timeline;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSectionFinishedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSectionFinishedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionStart_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SectionStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionEnd_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SectionEnd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAxMidiTimelinePlayhead_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAxMidiPlayhead,
		(UObject* (*)())Z_Construct_UPackage__Script_AxMidiBroadcasters,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiTimelinePlayhead_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAxMidiTimelinePlayhead_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAxMidiTimelinePlayhead_OnTimelineSectionFinished, "OnTimelineSectionFinished" }, // 2796208617
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiTimelinePlayhead_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiTimelinePlayhead_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This type of playhead auto ticks and contains a timeline as an internal clock source to drive midi asset broadcasting.\n */" },
#endif
		{ "DisplayName", "Midi Timeline Playhead" },
		{ "IncludePath", "Playheads/AxMidiTimelinePlayhead.h" },
		{ "ModuleRelativePath", "Public/Playheads/AxMidiTimelinePlayhead.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This type of playhead auto ticks and contains a timeline as an internal clock source to drive midi asset broadcasting." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiTimelinePlayhead_Statics::NewProp_Timeline_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * The timeline that will be driving the broadcasting...\n\x09 * Private for a reason, if you'd like to interact with it, use the provided functions...\n\x09 */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Playheads/AxMidiTimelinePlayhead.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* The timeline that will be driving the broadcasting...\n* Private for a reason, if you'd like to interact with it, use the provided functions..." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAxMidiTimelinePlayhead_Statics::NewProp_Timeline = { "Timeline", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxMidiTimelinePlayhead, Timeline), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiTimelinePlayhead_Statics::NewProp_Timeline_MetaData), Z_Construct_UClass_UAxMidiTimelinePlayhead_Statics::NewProp_Timeline_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiTimelinePlayhead_Statics::NewProp_OnSectionFinishedDelegate_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Fired when Section is finished playing.\n\x09 *        \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Playheads/AxMidiTimelinePlayhead.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Fired when Section is finished playing." },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAxMidiTimelinePlayhead_Statics::NewProp_OnSectionFinishedDelegate = { "OnSectionFinishedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxMidiTimelinePlayhead, OnSectionFinishedDelegate), Z_Construct_UDelegateFunction_AxMidiBroadcasters_AxOnMidiSectionEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiTimelinePlayhead_Statics::NewProp_OnSectionFinishedDelegate_MetaData), Z_Construct_UClass_UAxMidiTimelinePlayhead_Statics::NewProp_OnSectionFinishedDelegate_MetaData) }; // 86759851
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiTimelinePlayhead_Statics::NewProp_SectionStart_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief time in seconds the section starts within the MidiAsset.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Playheads/AxMidiTimelinePlayhead.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief time in seconds the section starts within the MidiAsset." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAxMidiTimelinePlayhead_Statics::NewProp_SectionStart = { "SectionStart", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxMidiTimelinePlayhead, SectionStart), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiTimelinePlayhead_Statics::NewProp_SectionStart_MetaData), Z_Construct_UClass_UAxMidiTimelinePlayhead_Statics::NewProp_SectionStart_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiTimelinePlayhead_Statics::NewProp_SectionEnd_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief The time in seconds the section ends within the MidiAsset.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Playheads/AxMidiTimelinePlayhead.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief The time in seconds the section ends within the MidiAsset." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAxMidiTimelinePlayhead_Statics::NewProp_SectionEnd = { "SectionEnd", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxMidiTimelinePlayhead, SectionEnd), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiTimelinePlayhead_Statics::NewProp_SectionEnd_MetaData), Z_Construct_UClass_UAxMidiTimelinePlayhead_Statics::NewProp_SectionEnd_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAxMidiTimelinePlayhead_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxMidiTimelinePlayhead_Statics::NewProp_Timeline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxMidiTimelinePlayhead_Statics::NewProp_OnSectionFinishedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxMidiTimelinePlayhead_Statics::NewProp_SectionStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxMidiTimelinePlayhead_Statics::NewProp_SectionEnd,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAxMidiTimelinePlayhead_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAxMidiTimelinePlayhead>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAxMidiTimelinePlayhead_Statics::ClassParams = {
		&UAxMidiTimelinePlayhead::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAxMidiTimelinePlayhead_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiTimelinePlayhead_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiTimelinePlayhead_Statics::Class_MetaDataParams), Z_Construct_UClass_UAxMidiTimelinePlayhead_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiTimelinePlayhead_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAxMidiTimelinePlayhead()
	{
		if (!Z_Registration_Info_UClass_UAxMidiTimelinePlayhead.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAxMidiTimelinePlayhead.OuterSingleton, Z_Construct_UClass_UAxMidiTimelinePlayhead_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAxMidiTimelinePlayhead.OuterSingleton;
	}
	template<> AXMIDIBROADCASTERS_API UClass* StaticClass<UAxMidiTimelinePlayhead>()
	{
		return UAxMidiTimelinePlayhead::StaticClass();
	}
	UAxMidiTimelinePlayhead::UAxMidiTimelinePlayhead(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAxMidiTimelinePlayhead);
	UAxMidiTimelinePlayhead::~UAxMidiTimelinePlayhead() {}
	struct Z_CompiledInDeferFile_FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Playheads_AxMidiTimelinePlayhead_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Playheads_AxMidiTimelinePlayhead_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAxMidiTimelinePlayhead, UAxMidiTimelinePlayhead::StaticClass, TEXT("UAxMidiTimelinePlayhead"), &Z_Registration_Info_UClass_UAxMidiTimelinePlayhead, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAxMidiTimelinePlayhead), 2518794161U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Playheads_AxMidiTimelinePlayhead_h_698419136(TEXT("/Script/AxMidiBroadcasters"),
		Z_CompiledInDeferFile_FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Playheads_AxMidiTimelinePlayhead_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Playheads_AxMidiTimelinePlayhead_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
