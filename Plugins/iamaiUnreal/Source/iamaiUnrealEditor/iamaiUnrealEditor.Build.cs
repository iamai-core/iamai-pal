using UnrealBuildTool;

public class iamaiUnrealEditor : ModuleRules {
    public iamaiUnrealEditor( ReadOnlyTargetRules Target ) : base( Target ) {

        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bEnableExceptions = true;

        PublicDependencyModuleNames.AddRange( new string[] {
            "Core",
            "CoreUObject",
            "Engine"
        } );

        PrivateDependencyModuleNames.AddRange( new string[] {
            "Slate",
            "SlateCore",
            "iamaiUnreal",
            "EditorStyle",
            "UnrealEd",
            "AssetTools",
            "ContentBrowser"
        } );
    }
}