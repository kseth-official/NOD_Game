// Copyright Algosyntax 2023. All Rights Reserved


#include "Files/AxFileOps.h"
#include "Misc/Paths.h"
#include "HAL/PlatformFileManager.h"
#include "ImageUtils.h"
#include "Interfaces/IPluginManager.h"

FString FAxFileOps::GetOrCreatePluginSubDirectory(FString PluginName, FString RelativePath, FString DirToGet)
{
    // Get PluginManager and then the Plugin
    IPluginManager& PluginManager = IPluginManager::Get();
    TSharedPtr<IPlugin> Plugin = PluginManager.FindPlugin(PluginName);

    if (Plugin.IsValid())
    {
        // Get the base directory
        FString PluginDirectory = Plugin->GetBaseDir();

        // Define the new directory relative to the plugin directory
        FString NewDirectory = FPaths::Combine(PluginDirectory, RelativePath, DirToGet);

     
        //getting a reference to the current platform's file I/O interface,
        //which you can use to interact with the file system in a platform-independent way.
        IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();

        // Create the directory if it doesn't exist
        if (!PlatformFile.DirectoryExists(*NewDirectory))
        {
            PlatformFile.CreateDirectoryTree(*NewDirectory);

            // Double check it was created
            if (!PlatformFile.DirectoryExists(*NewDirectory))
            {
                UE_LOG(LogTemp, Error, TEXT("Failed to create directory: %s"), *NewDirectory);
                return TEXT("");
            }
        }

        // Return the full path of the new directory
        return NewDirectory;
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to find %s Plugin"), *PluginName);
        return TEXT("");
    }
}

FString FAxFileOps::GetPluginSubDirectory(FString PluginName, FString DirToGet)
{

    // Get PluginManager and then the Plugin
    IPluginManager& PluginManager = IPluginManager::Get();
    TSharedPtr<IPlugin> Plugin = PluginManager.FindPlugin(PluginName);


    if (Plugin.IsValid())
    {
        // Get the base directory
        FString PluginDirectory = Plugin->GetBaseDir();

        // Define the new directory relative to the plugin directory
        FString DirectoryFullPath = FPaths::Combine(PluginDirectory, DirToGet);

        // Create the directory if it doesn't exist
        if (!FPaths::DirectoryExists(*DirectoryFullPath))
        {
           
                return TEXT("");
            
        }

        // Return the full path of the new directory
        return DirectoryFullPath;
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to find %s Plugin"), *PluginName);
        return TEXT("");
    }
}

UTexture2D* FAxFileOps::LoadImageFromPluginSubDirectory(FString PluginName, FString SubDirectory, FString ImageName)
{

    UTexture2D* Image = nullptr;

    FString ResourcesPath = GetPluginSubDirectory(PluginName, SubDirectory);

    FString FullImagePath = FPaths::Combine(ResourcesPath, ImageName);

   
    if (FPaths::FileExists(FullImagePath))
    {
        Image = FImageUtils::ImportFileAsTexture2D(FullImagePath);
    }

    return Image;
}

bool FAxFileOps::DeleteFile(FString Directory, FString FileName)
{
    // Get the reference to the PlatformFile
    IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();

    // Full path of the file you want to delete
    FString FullFilePath = FPaths::Combine(Directory, FileName);

    // Delete the file
    bool bWasDeleted = PlatformFile.DeleteFile(*FullFilePath);

    return bWasDeleted;
}

