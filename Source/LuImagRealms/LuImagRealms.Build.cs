// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class LuImagRealms : ModuleRules
{
	public LuImagRealms(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
