// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"

#include "AIWrapper.h"
#include "GGUFModelAsset.h"

#include "InitializeAI.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAIWraperInitialized, bool, bSuccess, UAIWrapper*, Wrapper);

/**
 * Initialize the AI model with the given model name
 * @param ModelName - Name of the model directory to load
 * @return A new AI wrapper object
 */
UCLASS()
class IAMAIUNREAL_API UInitializeAI : public UBlueprintAsyncActionBase {

	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", DisplayName = "Create and Initialize iamai and whisper", Category = "iamai core"))
	static UInitializeAI* CreateInitializeAll(UGGUFModelAsset* IamaiModel, UBinModelAsset* WhisperModel);

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", DisplayName = "Create and Initialize iamai", Category = "iamai core"))
	static UInitializeAI* CreateInitializeIamai(UGGUFModelAsset* IamaiModel);

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", DisplayName = "Create and Initialize iamai with Paramaters", Category = "iamai core"))
	static UInitializeAI* CreateInitializeIamaiParamaters(UGGUFModelAsset* IamaiModel, int size = 8192, int tokens = 512, int batch = 8192, int threads = 1);

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", DisplayName = "Initialize iamai", Category = "iamai core"))
	static UInitializeAI* InitializeIamai(UAIWrapper* Wrapper, UGGUFModelAsset* IamaiModel, int tokens = 512, int batch = 1, int threads = 1);

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", DisplayName = "Create and Initialize whisper", Category = "iamai core"))
	static UInitializeAI* CreateInitializeWhisper(UBinModelAsset* model, int threads = 1);

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", DisplayName = "Initialize whisper", Category = "iamai core"))
	static UInitializeAI* InitializeWhisper(UAIWrapper* Wrapper, UBinModelAsset* model, int threads = 1);

	UPROPERTY(BlueprintAssignable)
	FAIWraperInitialized OnCompleted;

protected:

	virtual void Activate() override;

	UGGUFModelAsset* m_iamaiModel;
	UBinModelAsset* m_whisperModel;
	UAIWrapper* m_aiWrapper = nullptr;

	int m_size = -1;
	int m_iamaiTokens = 512;
	int m_iamaiBatch = 8192;
	int m_iamaiThreads = 1;

	int m_whisperThreads = 1;

};
