#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BinModelAsset.generated.h"

UCLASS()

class IAMAIUNREAL_API UBinModelAsset : public UObject {

    GENERATED_BODY()

public:

    virtual void BeginDestroy() override;
    virtual void PostRename(UObject* OldOuter, const FName OldName) override;
    
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Model")
    FString FilePath;

};
