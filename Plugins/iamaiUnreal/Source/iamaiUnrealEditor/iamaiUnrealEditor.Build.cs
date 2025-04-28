// Some copyright should be here...

using System.IO;
using UnrealBuildTool;

public class iamaiUnrealEditor : ModuleRules {

    public iamaiUnrealEditor( ReadOnlyTargetRules Target ) : base( Target ) {

        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bEnableExceptions = true;
        PublicDefinitions.Add( "PLATFORM_EXCEPTIONS_DISABLED=0" );
        PublicDefinitions.Add( "NOMINMAX=1" );

        PublicIncludePaths.Add( "iamaiUnreal/Public" );


        PublicDependencyModuleNames.AddRange( new string[] {

            "Core",
            "CoreUObject",
            "Engine"

        } );

        PrivateDependencyModuleNames.AddRange( new string[] {

            "Slate",
            "SlateCore",
            "iamaiUnreal"

        } );

        PrivateDependencyModuleNames.AddRange( new string[] {
                "EditorStyle",
                "UnrealEd",
                "AssetTools",
                "ContentBrowser"
            } );

    }

}
