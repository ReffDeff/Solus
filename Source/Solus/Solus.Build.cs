// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Solus : ModuleRules
{
	public Solus(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
