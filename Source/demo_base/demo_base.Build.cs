// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class demo_base : ModuleRules
{
	public demo_base(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
