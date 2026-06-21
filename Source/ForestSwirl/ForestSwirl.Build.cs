// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ForestSwirl : ModuleRules
{
	public ForestSwirl(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"ForestSwirl",
			"ForestSwirl/Variant_Platforming",
			"ForestSwirl/Variant_Platforming/Animation",
			"ForestSwirl/Variant_Combat",
			"ForestSwirl/Variant_Combat/AI",
			"ForestSwirl/Variant_Combat/Animation",
			"ForestSwirl/Variant_Combat/Gameplay",
			"ForestSwirl/Variant_Combat/Interfaces",
			"ForestSwirl/Variant_Combat/UI",
			"ForestSwirl/Variant_SideScrolling",
			"ForestSwirl/Variant_SideScrolling/AI",
			"ForestSwirl/Variant_SideScrolling/Gameplay",
			"ForestSwirl/Variant_SideScrolling/Interfaces",
			"ForestSwirl/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
