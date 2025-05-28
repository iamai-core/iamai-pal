#pragma once

#include "CoreMinimal.h"
#include "BinModelAsset.h"
#include "AssetTypeActions_Base.h"

class FAssetTypeActions_BinModelAsset : public FAssetTypeActions_Base {

public:

    virtual FText GetName() const override {
        return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_BinModelAsset", "Bin Model");
    }

    virtual FColor GetTypeColor() const override {
        return FColor::Emerald;
    }

    virtual UClass* GetSupportedClass() const override {
        return UBinModelAsset::StaticClass();
    }

    virtual uint32 GetCategories() override {
        return EAssetTypeCategories::Misc;
    }

    virtual bool CanFilter() override {
        return true;
    }

};
