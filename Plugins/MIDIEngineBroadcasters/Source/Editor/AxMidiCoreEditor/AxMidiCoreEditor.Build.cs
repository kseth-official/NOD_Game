// Copyright Algosyntax 2023. All Rights Reserved.

using System.IO;
using UnrealBuildTool;

public class AxMidiCoreEditor : ModuleRules
{
    public AxMidiCoreEditor(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;


        PublicDependencyModuleNames.AddRange(new string[] {"Core", "CoreUObject", "Engine"});

        PublicDependencyModuleNames.AddRange(new string[] {"UnrealEd","AssetTools" ,"Slate", "SlateCore", "Projects" });

        PublicDependencyModuleNames.AddRange(new string[] { "EditorStyle" });

       AddCustomDependencies();

      

    }


   


    private void AddCustomDependencies()
    {
        //OUR MODULES
        PublicDependencyModuleNames.AddRange(new string[] { "AxMidiCore", "CommonOps" });

    }

 

}
