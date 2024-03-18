// Copyright Algosyntax 2023. All Rights Reserved

#pragma once

#include "CoreMinimal.h"

class UTexture2D;
/**
 * 
 */

class COMMONOPS_API FAxFileOps 
{

public:
	/**
	 * @brief Gets or creates a directory within a plugin's specified subdirectory.
	 *
	 * @param PluginName: The target plugin's name.
	 * @param RelativePath: Optional, subdirectory within the plugin's folder.
	 * @param DirToGet: The directory name to create or retrieve.
	 *
	 * @return Full path to the directory. Returns empty if the directory doesn't exist and couldn't be created.
	 */
	static FString GetOrCreatePluginSubDirectory(FString PluginName,FString RelativePath,FString DirToGet);

	/**
	 * @brief Tries to get a plugin's subdirectory. will return empty string if nothing found.
	 *
	 * @param PluginName: The target plugin's name.
	 * @param DirToGet: The directory name to create or retrieve.
	 *
	 * @return Full path to the directory. Returns empty if the directory doesn't exist 
	 */
	static FString GetPluginSubDirectory(FString PluginName,FString DirToGet);

	/**
	 * @brief Loads a png or jpeg from disk.
	 * @param PluginName 
	 * @param SubDirectory like Resources or some existing directory.
	 * @param ImageName Name with extension
	 * @return UTexture2D or nullptr if not found.
	 */
	static UTexture2D* LoadImageFromPluginSubDirectory(FString PluginName, FString SubDirectory,FString ImageName);

	static bool DeleteFile(FString Directory, FString FileName);


};
