// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Lesson1_try2 : ModuleRules
{
	public Lesson1_try2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
