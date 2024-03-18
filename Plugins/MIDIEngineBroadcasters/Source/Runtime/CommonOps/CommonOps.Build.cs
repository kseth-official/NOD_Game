// Copyright Algosyntax 2023. All Rights Reserved.

using UnrealBuildTool;

public class CommonOps : ModuleRules
{
    public CommonOps(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        //bUsePrecompiled = true;

        PublicDependencyModuleNames.AddRange(new string[] {"Core", "CoreUObject", "Engine"});
        PrivateDependencyModuleNames.AddRange(new string[] {"Projects","Json","HTTP"});

	

    }
}
