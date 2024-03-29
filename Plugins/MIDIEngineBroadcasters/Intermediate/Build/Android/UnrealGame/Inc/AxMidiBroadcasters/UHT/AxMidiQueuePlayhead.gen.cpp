// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AxMidiBroadcasters/Public/Playheads/AxMidiQueuePlayhead.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAxMidiQueuePlayhead() {}
// Cross Module References
	AXMIDIBROADCASTERS_API UClass* Z_Construct_UClass_UAxMidiQueuePlayhead();
	AXMIDIBROADCASTERS_API UClass* Z_Construct_UClass_UAxMidiQueuePlayhead_NoRegister();
	AXMIDIBROADCASTERS_API UClass* Z_Construct_UClass_UAxMidiTimelinePlayhead();
	AXMIDICORE_API UClass* Z_Construct_UClass_UAxMidiNote_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AxMidiBroadcasters();
// End Cross Module References
	void UAxMidiQueuePlayhead::StaticRegisterNativesUAxMidiQueuePlayhead()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAxMidiQueuePlayhead);
	UClass* Z_Construct_UClass_UAxMidiQueuePlayhead_NoRegister()
	{
		return UAxMidiQueuePlayhead::StaticClass();
	}
	struct Z_Construct_UClass_UAxMidiQueuePlayhead_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NoteOnQueue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoteOnQueue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NoteOnQueue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NoteOffQueue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoteOffQueue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NoteOffQueue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAxMidiQueuePlayhead_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAxMidiTimelinePlayhead,
		(UObject* (*)())Z_Construct_UPackage__Script_AxMidiBroadcasters,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiQueuePlayhead_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiQueuePlayhead_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Specialized playhead That instead of broadcasting midi note events, places them in a Queue.\n * The Queue can then be queried and cleared by the playhead's owner at the owner's preferred time.\n * We override HandleChordNoteOn HandleNoteOff and that disables broadcasting events on the main subsystem.\n * Then place those events in NoteOnQueue and NoteOffQueue and wait for owner to query and clear when done.\n * Sometimes the owner(broadcaster) is not yet ready to handle the notes, so we hold them until processing is ready. \n */" },
		{ "DisplayName", "Midi Queue Playhead" },
		{ "IncludePath", "Playheads/AxMidiQueuePlayhead.h" },
		{ "ModuleRelativePath", "Public/Playheads/AxMidiQueuePlayhead.h" },
		{ "ToolTip", "Specialized playhead That instead of broadcasting midi note events, places them in a Queue.\nThe Queue can then be queried and cleared by the playhead's owner at the owner's preferred time.\nWe override HandleChordNoteOn HandleNoteOff and that disables broadcasting events on the main subsystem.\nThen place those events in NoteOnQueue and NoteOffQueue and wait for owner to query and clear when done.\nSometimes the owner(broadcaster) is not yet ready to handle the notes, so we hold them until processing is ready." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAxMidiQueuePlayhead_Statics::NewProp_NoteOnQueue_Inner = { "NoteOnQueue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAxMidiNote_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiQueuePlayhead_Statics::NewProp_NoteOnQueue_MetaData[] = {
		{ "Comment", "/**\n\x09 * @brief These notes need to broadcast Note ON Event\n\x09 */" },
		{ "ModuleRelativePath", "Public/Playheads/AxMidiQueuePlayhead.h" },
		{ "ToolTip", "@brief These notes need to broadcast Note ON Event" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAxMidiQueuePlayhead_Statics::NewProp_NoteOnQueue = { "NoteOnQueue", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxMidiQueuePlayhead, NoteOnQueue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiQueuePlayhead_Statics::NewProp_NoteOnQueue_MetaData), Z_Construct_UClass_UAxMidiQueuePlayhead_Statics::NewProp_NoteOnQueue_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAxMidiQueuePlayhead_Statics::NewProp_NoteOffQueue_Inner = { "NoteOffQueue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAxMidiNote_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiQueuePlayhead_Statics::NewProp_NoteOffQueue_MetaData[] = {
		{ "Comment", "/**\n\x09 * @brief These notes need to broadcast NoteOFF event.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Playheads/AxMidiQueuePlayhead.h" },
		{ "ToolTip", "@brief These notes need to broadcast NoteOFF event." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAxMidiQueuePlayhead_Statics::NewProp_NoteOffQueue = { "NoteOffQueue", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxMidiQueuePlayhead, NoteOffQueue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiQueuePlayhead_Statics::NewProp_NoteOffQueue_MetaData), Z_Construct_UClass_UAxMidiQueuePlayhead_Statics::NewProp_NoteOffQueue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAxMidiQueuePlayhead_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxMidiQueuePlayhead_Statics::NewProp_NoteOnQueue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxMidiQueuePlayhead_Statics::NewProp_NoteOnQueue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxMidiQueuePlayhead_Statics::NewProp_NoteOffQueue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxMidiQueuePlayhead_Statics::NewProp_NoteOffQueue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAxMidiQueuePlayhead_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAxMidiQueuePlayhead>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAxMidiQueuePlayhead_Statics::ClassParams = {
		&UAxMidiQueuePlayhead::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAxMidiQueuePlayhead_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiQueuePlayhead_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiQueuePlayhead_Statics::Class_MetaDataParams), Z_Construct_UClass_UAxMidiQueuePlayhead_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiQueuePlayhead_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAxMidiQueuePlayhead()
	{
		if (!Z_Registration_Info_UClass_UAxMidiQueuePlayhead.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAxMidiQueuePlayhead.OuterSingleton, Z_Construct_UClass_UAxMidiQueuePlayhead_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAxMidiQueuePlayhead.OuterSingleton;
	}
	template<> AXMIDIBROADCASTERS_API UClass* StaticClass<UAxMidiQueuePlayhead>()
	{
		return UAxMidiQueuePlayhead::StaticClass();
	}
	UAxMidiQueuePlayhead::UAxMidiQueuePlayhead(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAxMidiQueuePlayhead);
	UAxMidiQueuePlayhead::~UAxMidiQueuePlayhead() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Playheads_AxMidiQueuePlayhead_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Playheads_AxMidiQueuePlayhead_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAxMidiQueuePlayhead, UAxMidiQueuePlayhead::StaticClass, TEXT("UAxMidiQueuePlayhead"), &Z_Registration_Info_UClass_UAxMidiQueuePlayhead, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAxMidiQueuePlayhead), 848319249U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Playheads_AxMidiQueuePlayhead_h_3356902918(TEXT("/Script/AxMidiBroadcasters"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Playheads_AxMidiQueuePlayhead_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Playheads_AxMidiQueuePlayhead_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
