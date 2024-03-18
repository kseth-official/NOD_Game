using System.IO;
using System.Runtime.CompilerServices;
using UnrealBuildTool;
 
public class MidiLib : ModuleRules
{
	public MidiLib(ReadOnlyTargetRules Target) : base(Target)
	{
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine"});

       
        
        //PrivateIncludePaths.Add(Path.Combine(ModuleDirectory, "Private/ThirdParty/MidiLib/Includes"));


    }




}
