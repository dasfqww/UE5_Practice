// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ue5_portfolio : ModuleRules
{
	public ue5_portfolio(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] 
		{ "Core", "CoreUObject", "Engine", "InputCore", 
			"HeadMountedDisplay", "GeometryCollectionEngine", 
			"UMG", "AIModule", "GameplayTasks", "NavigationSystem" });
	}
}
