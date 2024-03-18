// Copyright Algosyntax 2023. All Rights Reserved.

using System.IO;
using System.Runtime.CompilerServices;
using UnrealBuildTool;
 
public class AxMidiCore : ModuleRules
{
	public AxMidiCore(ReadOnlyTargetRules Target) : base(Target)
	{
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine"});

      
        
        //bUsePrecompiled = true;

        PrivateDependencyModuleNames.AddRange(new string[]{"CommonOps","MidiLib"});
        
        //PrivateIncludePaths.Add(Path.Combine(ModuleDirectory, "Private/ThirdParty/MidiLib/Includes"));




        

    }


   

}
