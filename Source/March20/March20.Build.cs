// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class March20 : ModuleRules
{
	public March20(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
