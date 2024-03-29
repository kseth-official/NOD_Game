// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AxMidiBroadcasters/Public/Deprecated/MidiEventsTime.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMidiEventsTime() {}
// Cross Module References
	AXMIDIBROADCASTERS_API UScriptStruct* Z_Construct_UScriptStruct_FMidiEventsTime();
	UPackage* Z_Construct_UPackage__Script_AxMidiBroadcasters();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MidiEventsTime;
class UScriptStruct* FMidiEventsTime::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MidiEventsTime.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MidiEventsTime.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMidiEventsTime, (UObject*)Z_Construct_UPackage__Script_AxMidiBroadcasters(), TEXT("MidiEventsTime"));
	}
	return Z_Registration_Info_UScriptStruct_MidiEventsTime.OuterSingleton;
}
template<> AXMIDIBROADCASTERS_API UScriptStruct* StaticStruct<FMidiEventsTime>()
{
	return FMidiEventsTime::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMidiEventsTime_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMidiEventsTime_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A Custom Time Format for MidiEvents.\n * Using floats with maps is inaccurate cause of floating point error, so we define our own data type for better accuracy.\n * An example of a MidiEvent is a NoteON_Event ,Or NoteOff.\n * And a FMidiEventsTime is the time that event happens.\n *\n */" },
#endif
		{ "ModuleRelativePath", "Public/Deprecated/MidiEventsTime.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A Custom Time Format for MidiEvents.\nUsing floats with maps is inaccurate cause of floating point error, so we define our own data type for better accuracy.\nAn example of a MidiEvent is a NoteON_Event ,Or NoteOff.\nAnd a FMidiEventsTime is the time that event happens." },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FMidiEventsTime_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMidiEventsTime>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMidiEventsTime_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AxMidiBroadcasters,
		nullptr,
		&NewStructOps,
		"MidiEventsTime",
		nullptr,
		0,
		sizeof(FMidiEventsTime),
		alignof(FMidiEventsTime),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMidiEventsTime_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMidiEventsTime_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMidiEventsTime()
	{
		if (!Z_Registration_Info_UScriptStruct_MidiEventsTime.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MidiEventsTime.InnerSingleton, Z_Construct_UScriptStruct_FMidiEventsTime_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MidiEventsTime.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Deprecated_MidiEventsTime_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Deprecated_MidiEventsTime_h_Statics::ScriptStructInfo[] = {
		{ FMidiEventsTime::StaticStruct, Z_Construct_UScriptStruct_FMidiEventsTime_Statics::NewStructOps, TEXT("MidiEventsTime"), &Z_Registration_Info_UScriptStruct_MidiEventsTime, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMidiEventsTime), 1227698389U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Deprecated_MidiEventsTime_h_1214196594(TEXT("/Script/AxMidiBroadcasters"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Deprecated_MidiEventsTime_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ue5_projects_Team13_Game_Plugins_MIDIEngineBroadcasters_Source_Runtime_AxMidiBroadcasters_Public_Deprecated_MidiEventsTime_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
