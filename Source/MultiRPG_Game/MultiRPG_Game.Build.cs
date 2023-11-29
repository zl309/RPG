// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MultiRPG_Game : ModuleRules
{
	public MultiRPG_Game(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
