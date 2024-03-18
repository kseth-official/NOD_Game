// Copyright Algosyntax 2023. All Rights Reserved.

using UnrealBuildTool;

public class CommonOpsEditor : ModuleRules
{
    public CommonOpsEditor(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        //bUsePrecompiled = true;

        PublicDependencyModuleNames.AddRange(new string[] {"Core", "CoreUObject", "Engine","CommonOps"});
        PrivateDependencyModuleNames.AddRange(new string[] {"Projects","Json","HTTP","UnrealEd"});


    }
}
