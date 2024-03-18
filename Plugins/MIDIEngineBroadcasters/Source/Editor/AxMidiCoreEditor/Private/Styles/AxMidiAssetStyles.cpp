// Copyright Algosyntax 2022. All Rights Reserved.


#include "AxMidiAssetStyles.h"

#include "Interfaces/IPluginManager.h"

FAxMidiAssetStyles::FAxMidiAssetStyles(): FSlateStyleSet("MidiAssetStyleSet")
{
	FString PluginBaseDir;

	//Get the plugin manager, find the plugin that owns this module, and get its basedir
	//could be anything that bundles midiengine core. NB: the plugin's resources folder must contain the icons

	TSharedPtr<IPlugin> ModuleOwningPlugin = IPluginManager::Get().GetModuleOwnerPlugin("AxMidiCoreEditor");

	if(ModuleOwningPlugin.IsValid())
	{
		PluginBaseDir= ModuleOwningPlugin->GetBaseDir();
	}


	check(!PluginBaseDir.IsEmpty());

	//The path to the image.
	FString x64IconPath=PluginBaseDir+"/Resources/Midi Asset Icon 64x64.png";

	//the image dimensions.
	const FVector2D Icon64x64(64.0f, 64.0f);

	//The Image in SlateBrush. Unreal Editor uses this.
	FSlateImageBrush* SlateImageBrush = new FSlateImageBrush(x64IconPath, Icon64x64);

	//Add the SlateImageBrush to this style collection
	Set("ClassThumbnail.AxMidiAsset", SlateImageBrush);

}

