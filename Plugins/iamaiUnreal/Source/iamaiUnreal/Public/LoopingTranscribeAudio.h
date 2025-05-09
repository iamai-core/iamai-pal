#pragma once

#include "CoreMinimal.h"

#include "Kismet/BlueprintAsyncActionBase.h"
#include "TimerManager.h"

#include "LoopingTranscribeAudio.generated.h"

DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnTextTranscribedDelegate, bool, bSuccess, const FString&, Text);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTimerCreated, bool, bSuccess, FTimerHandle, TimerHandle);


class AIWrapper;
class UiamaiVoiceInput;

UCLASS()
class IAMAIUNREAL_API ULoopingTranscribeAudio : public UBlueprintAsyncActionBase {

	GENERATED_BODY()

public:

	ULoopingTranscribeAudio();

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", DisplayName = "Loop Transcribe Audio", Category = "iamai"))
	static ULoopingTranscribeAudio* Transcribe(UObject* WorldContextObject, float time, UAIWrapper* AIWrapper, UiamaiVoiceInput* iamaiVoiceInput, FOnTextTranscribedDelegate InDelegate);

	UPROPERTY(BlueprintAssignable)
	FOnTimerCreated OnTimerCreated;

protected:

	virtual void Activate() override;

	void LoopingTranscribe();

	UAIWrapper* m_aiWrapper = nullptr;
	UiamaiVoiceInput* m_iamaiVoiceInput = nullptr;
	UObject* WorldContextObject = nullptr;

	FOnTextTranscribedDelegate TranscribedDelegate;
	float m_time = 1.0f;
	FTimerHandle TimerHandle;

};
