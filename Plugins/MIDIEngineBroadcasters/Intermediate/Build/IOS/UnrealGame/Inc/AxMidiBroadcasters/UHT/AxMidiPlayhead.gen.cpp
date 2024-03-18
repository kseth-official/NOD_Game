// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AxMidiBroadcasters/Public/Playheads/AxMidiPlayhead.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAxMidiPlayhead() {}
// Cross Module References
	AXMIDIBROADCASTERS_API UClass* Z_Construct_UClass_UAxMidiBroadcaster_NoRegister();
	AXMIDIBROADCASTERS_API UClass* Z_Construct_UClass_UAxMidiBroadcastersSubsystem_NoRegister();
	AXMIDIBROADCASTERS_API UClass* Z_Construct_UClass_UAxMidiPlayhead();
	AXMIDIBROADCASTERS_API UClass* Z_Construct_UClass_UAxMidiPlayhead_NoRegister();
	AXMIDICORE_API UClass* Z_Construct_UClass_UAxMidiNote_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AxMidiBroadcasters();
// End Cross Module References
	void UAxMidiPlayhead::StaticRegisterNativesUAxMidiPlayhead()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAxMidiPlayhead);
	UClass* Z_Construct_UClass_UAxMidiPlayhead_NoRegister()
	{
		return UAxMidiPlayhead::StaticClass();
	}
	struct Z_Construct_UClass_UAxMidiPlayhead_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTime_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_CurrentTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayHeadName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayHeadName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeOffset_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_TimeOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentlyPlayingNotes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentlyPlayingNotes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurrentlyPlayingNotes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MidiBroadcastersSubsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MidiBroadcastersSubsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MidiBroadcaster_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_MidiBroadcaster;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBroadcastInitialBuffer_MetaData[];
#endif
		static void NewProp_bBroadcastInitialBuffer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBroadcastInitialBuffer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAxMidiPlayhead_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AxMidiBroadcasters,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiPlayhead_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiPlayhead_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * @brief A MidiPlayhead responsible for processing a MidiAsset and Broadcasting MidiEvents.\n *        MidiPlayheads can only exist in the context of MidiBroadcasters.\n *\x09\x09  They do not 'tick' on their own. They need an owning Broadcaster that will tick them.\n *\x09\x09  Some playheads have internal clocks (Timeline,Quartz) that they will sample from when ticked.\n *\x09\x09  This Base MidiPlayhead does not have an internal clock so the system that uses needs to provide it with a time.\n */" },
		{ "DisplayName", "Midi Playhead" },
		{ "IncludePath", "Playheads/AxMidiPlayhead.h" },
		{ "ModuleRelativePath", "Public/Playheads/AxMidiPlayhead.h" },
		{ "ToolTip", "@brief A MidiPlayhead responsible for processing a MidiAsset and Broadcasting MidiEvents.\n       MidiPlayheads can only exist in the context of MidiBroadcasters.\n              They do not 'tick' on their own. They need an owning Broadcaster that will tick them.\n              Some playheads have internal clocks (Timeline,Quartz) that they will sample from when ticked.\n              This Base MidiPlayhead does not have an internal clock so the system that uses needs to provide it with a time." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiPlayhead_Statics::NewProp_CurrentTime_MetaData[] = {
		{ "Comment", "/**\n\x09* @brief The latest time used when we last ticked.\n\x09*        updated on tick (TriggerNoteOns). For reference only.\n\x09*        Does not include the offset.\n\x09*\x09\x09 Should match the parent/ broadcaster's time\n\x09*/" },
		{ "ModuleRelativePath", "Public/Playheads/AxMidiPlayhead.h" },
		{ "ToolTip", "@brief The latest time used when we last ticked.\n       updated on tick (TriggerNoteOns). For reference only.\n       Does not include the offset.\n               Should match the parent/ broadcaster's time" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UAxMidiPlayhead_Statics::NewProp_CurrentTime = { "CurrentTime", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxMidiPlayhead, CurrentTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiPlayhead_Statics::NewProp_CurrentTime_MetaData), Z_Construct_UClass_UAxMidiPlayhead_Statics::NewProp_CurrentTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiPlayhead_Statics::NewProp_PlayHeadName_MetaData[] = {
		{ "Category", "MidiEngine" },
		{ "Comment", "//Unique Name of the Playhead to help Midi Listeners identify it on midi events.\n" },
		{ "ModuleRelativePath", "Public/Playheads/AxMidiPlayhead.h" },
		{ "ToolTip", "Unique Name of the Playhead to help Midi Listeners identify it on midi events." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAxMidiPlayhead_Statics::NewProp_PlayHeadName = { "PlayHeadName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxMidiPlayhead, PlayHeadName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiPlayhead_Statics::NewProp_PlayHeadName_MetaData), Z_Construct_UClass_UAxMidiPlayhead_Statics::NewProp_PlayHeadName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiPlayhead_Statics::NewProp_TimeOffset_MetaData[] = {
		{ "Category", "MidiEngine" },
		{ "Comment", "/**\n\x09 * @brief You can offset the playhead here to have play ahead by a certain amount of seconds.\n\x09 *        Eg: Setting this to 2.0 seconds will make midi events trigger 2 seconds early.\n\x09 *\x09\x09  \n\x09 */" },
		{ "ModuleRelativePath", "Public/Playheads/AxMidiPlayhead.h" },
		{ "ToolTip", "@brief You can offset the playhead here to have play ahead by a certain amount of seconds.\n       Eg: Setting this to 2.0 seconds will make midi events trigger 2 seconds early." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UAxMidiPlayhead_Statics::NewProp_TimeOffset = { "TimeOffset", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxMidiPlayhead, TimeOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiPlayhead_Statics::NewProp_TimeOffset_MetaData), Z_Construct_UClass_UAxMidiPlayhead_Statics::NewProp_TimeOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiPlayhead_Statics::NewProp_Index_MetaData[] = {
		{ "Comment", "//Current PlayPosition Array Index\n" },
		{ "ModuleRelativePath", "Public/Playheads/AxMidiPlayhead.h" },
		{ "ToolTip", "Current PlayPosition Array Index" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAxMidiPlayhead_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxMidiPlayhead, Index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiPlayhead_Statics::NewProp_Index_MetaData), Z_Construct_UClass_UAxMidiPlayhead_Statics::NewProp_Index_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAxMidiPlayhead_Statics::NewProp_CurrentlyPlayingNotes_Inner = { "CurrentlyPlayingNotes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAxMidiNote_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiPlayhead_Statics::NewProp_CurrentlyPlayingNotes_MetaData[] = {
		{ "Comment", "/**\n\x09 * @brief Array of MIDI Notes this Playhead has broadcast Note On.\n\x09 *        Used to keep track of which notes need to broadcast Note Off.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Playheads/AxMidiPlayhead.h" },
		{ "ToolTip", "@brief Array of MIDI Notes this Playhead has broadcast Note On.\n       Used to keep track of which notes need to broadcast Note Off." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAxMidiPlayhead_Statics::NewProp_CurrentlyPlayingNotes = { "CurrentlyPlayingNotes", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxMidiPlayhead, CurrentlyPlayingNotes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiPlayhead_Statics::NewProp_CurrentlyPlayingNotes_MetaData), Z_Construct_UClass_UAxMidiPlayhead_Statics::NewProp_CurrentlyPlayingNotes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiPlayhead_Statics::NewProp_MidiBroadcastersSubsystem_MetaData[] = {
		{ "Comment", "//The MidiBroadcastersSubsystem contains the delegates we need to bind to.\n" },
		{ "ModuleRelativePath", "Public/Playheads/AxMidiPlayhead.h" },
		{ "ToolTip", "The MidiBroadcastersSubsystem contains the delegates we need to bind to." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAxMidiPlayhead_Statics::NewProp_MidiBroadcastersSubsystem = { "MidiBroadcastersSubsystem", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxMidiPlayhead, MidiBroadcastersSubsystem), Z_Construct_UClass_UAxMidiBroadcastersSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiPlayhead_Statics::NewProp_MidiBroadcastersSubsystem_MetaData), Z_Construct_UClass_UAxMidiPlayhead_Statics::NewProp_MidiBroadcastersSubsystem_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiPlayhead_Statics::NewProp_MidiBroadcaster_MetaData[] = {
		{ "Category", "MidiEngine" },
		{ "Comment", "/**\n\x09 * @brief The Broadcaster Owning this PlayHead. Saved as interface pointer.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Playheads/AxMidiPlayhead.h" },
		{ "ToolTip", "@brief The Broadcaster Owning this PlayHead. Saved as interface pointer." },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UAxMidiPlayhead_Statics::NewProp_MidiBroadcaster = { "MidiBroadcaster", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAxMidiPlayhead, MidiBroadcaster), Z_Construct_UClass_UAxMidiBroadcaster_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiPlayhead_Statics::NewProp_MidiBroadcaster_MetaData), Z_Construct_UClass_UAxMidiPlayhead_Statics::NewProp_MidiBroadcaster_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxMidiPlayhead_Statics::NewProp_bBroadcastInitialBuffer_MetaData[] = {
		{ "ModuleRelativePath", "Public/Playheads/AxMidiPlayhead.h" },
	};
#endif
	void Z_Construct_UClass_UAxMidiPlayhead_Statics::NewProp_bBroadcastInitialBuffer_SetBit(void* Obj)
	{
		((UAxMidiPlayhead*)Obj)->bBroadcastInitialBuffer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAxMidiPlayhead_Statics::NewProp_bBroadcastInitialBuffer = { "bBroadcastInitialBuffer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAxMidiPlayhead), &Z_Construct_UClass_UAxMidiPlayhead_Statics::NewProp_bBroadcastInitialBuffer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiPlayhead_Statics::NewProp_bBroadcastInitialBuffer_MetaData), Z_Construct_UClass_UAxMidiPlayhead_Statics::NewProp_bBroadcastInitialBuffer_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAxMidiPlayhead_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxMidiPlayhead_Statics::NewProp_CurrentTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxMidiPlayhead_Statics::NewProp_PlayHeadName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxMidiPlayhead_Statics::NewProp_TimeOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxMidiPlayhead_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxMidiPlayhead_Statics::NewProp_CurrentlyPlayingNotes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxMidiPlayhead_Statics::NewProp_CurrentlyPlayingNotes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxMidiPlayhead_Statics::NewProp_MidiBroadcastersSubsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxMidiPlayhead_Statics::NewProp_MidiBroadcaster,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxMidiPlayhead_Statics::NewProp_bBroadcastInitialBuffer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAxMidiPlayhead_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAxMidiPlayhead>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAxMidiPlayhead_Statics::ClassParams = {
		&UAxMidiPlayhead::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAxMidiPlayhead_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiPlayhead_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiPlayhead_Statics::Class_MetaDataParams), Z_Construct_UClass_UAxMidiPlayhead_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAxMidiPlayhead_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAxMidiPlayhead()
	{
		if (!Z_Registration_Info_UClass_UAxMidiPlayhead.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAxMidiPlayhead.OuterSingleton, Z_Construct_UClass_UAxMidiPlayhead_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAxMidiPlayhead.OuterSingleton;
	}
	template<> AXMIDIBROADCASTERS_API UClass* StaticClass<UAxMidiPlayhead>()
	{
		return UAxMidiPlayhead::StaticClass();
	}
	UAxMidiPlayhead::UAxMidiPlayhead(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAxMidiPlayhead);
	UAxMidiPlayhead::~UAxMidiPlayhead() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Playheads_AxMidiPlayhead_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Playheads_AxMidiPlayhead_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAxMidiPlayhead, UAxMidiPlayhead::StaticClass, TEXT("UAxMidiPlayhead"), &Z_Registration_Info_UClass_UAxMidiPlayhead, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAxMidiPlayhead), 3628807522U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Playheads_AxMidiPlayhead_h_4188167195(TEXT("/Script/AxMidiBroadcasters"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Playheads_AxMidiPlayhead_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MidiEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Playheads_AxMidiPlayhead_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
