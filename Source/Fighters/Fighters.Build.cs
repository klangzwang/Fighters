// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class Fighters : ModuleRules
{
	public Fighters(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicIncludePaths.AddRange(
			new string[]
			{
				"Snipl"
            }
			);

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				"InputCore",
				"EnhancedInput",
				"Slate",
				"SlateCore",
				"UMG"
			}
			);
			
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
			}
			);


	}
}
