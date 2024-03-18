// Copyright Algosyntax 2023. All Rights Reserved.

using System.Collections.Generic;
using UnrealBuildTool;

public class AxMidiBroadcasters : ModuleRules
{
    public AxMidiBroadcasters(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        //bUsePrecompiled = true;


        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine" });

        //MidiEngine related
        PublicDependencyModuleNames.AddRange(new string[] { "AxMidiCore" });




        PrivateDependencyModuleNames.AddRange(new string[] { "CommonOps" });

        
    }

   

}
