// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class git_homework : ModuleRules
{
	public git_homework(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
