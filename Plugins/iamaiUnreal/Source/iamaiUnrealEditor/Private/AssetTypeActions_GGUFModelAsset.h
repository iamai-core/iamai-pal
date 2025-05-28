#pragma once

#include "CoreMinimal.h"
#include "GGUFModelAsset.h"
#include "AssetTypeActions_Base.h"

class FAssetTypeActions_GGUFModelAsset : public FAssetTypeActions_Base {

public:

    virtual FText GetName() const override {
        return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_GGUFModelAsset", "GGUF Model");
    }

    virtual FColor GetTypeColor() const override {
        return FColor::Emerald;
    }

    virtual UClass* GetSupportedClass() const override {
        return UGGUFModelAsset::StaticClass();
    }

    virtual uint32 GetCategories() override {
        return EAssetTypeCategories::Misc;
    }

    virtual bool CanFilter() override {
        return true;
    }

};
