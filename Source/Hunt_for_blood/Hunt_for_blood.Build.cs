// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Hunt_for_blood : ModuleRules
{
	public Hunt_for_blood(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
