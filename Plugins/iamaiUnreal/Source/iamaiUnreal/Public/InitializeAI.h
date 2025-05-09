// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"

#include "AIWrapper.h"
#include "GGUFModelAsset.h"
#include "BinModelAsset.h"
#include "iamaiConfig.h"

#include "InitializeAI.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAIWraperInitialized, bool, bSuccess, UAIWrapper*, Wrapper);

UCLASS()
class IAMAIUNREAL_API UInitializeAI : public UBlueprintAsyncActionBase {

	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", DisplayName = "Create and Initialize iamai and whisper", Category = "iamai"))
	static UInitializeAI* CreateInitializeAll(UGGUFModelAsset* IamaiModel, UBinModelAsset* WhisperModel);

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", DisplayName = "Create and Initialize iamai", Category = "iamai"))
	static UInitializeAI* CreateInitializeIamai(UGGUFModelAsset* IamaiModel);

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", DisplayName = "Create and Initialize iamai with Paramaters", Category = "iamai"))
	static UInitializeAI* CreateInitializeIamaiParamaters(UGGUFModelAsset* IamaiModel, FiamaiConfig config);

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", DisplayName = "Initialize iamai", Category = "iamai"))
	static UInitializeAI* InitializeIamai(UAIWrapper* Wrapper, UGGUFModelAsset* IamaiModel);

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", DisplayName = "Initialize iamai with paramaters", Category = "iamai"))
	static UInitializeAI* InitializeIamaiParamaters(UAIWrapper* Wrapper, UGGUFModelAsset* IamaiModel, FiamaiConfig config);

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", DisplayName = "Create and Initialize whisper", Category = "iamai"))
	static UInitializeAI* CreateInitializeWhisper(UBinModelAsset* model, int threads = 1);

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", DisplayName = "Initialize whisper", Category = "iamai"))
	static UInitializeAI* InitializeWhisper(UAIWrapper* Wrapper, UBinModelAsset* model, int threads = 1);

	UPROPERTY(BlueprintAssignable)
	FAIWraperInitialized OnCompleted;

protected:

	virtual void Activate() override;

	UGGUFModelAsset* m_iamaiModel;
	UBinModelAsset* m_whisperModel;
	UAIWrapper* m_aiWrapper = nullptr;

	FiamaiConfig iamaiConfig;
	bool bUseConfig = false;

	int m_whisperThreads = 1;

};
