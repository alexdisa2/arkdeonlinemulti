// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class C_arkde_curso_muli : ModuleRules
{
	public C_arkde_curso_muli(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
