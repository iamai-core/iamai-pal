#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"

#include "TranscribeAudio.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTextTranscribed, bool, bSuccess, const FString&, Text);


class AIWrapper;
class UiamaiVoiceInput;

UCLASS()
class IAMAIUNREAL_API UTranscribeAudio : public UBlueprintAsyncActionBase {

	GENERATED_BODY()

public:

	UTranscribeAudio();

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", DisplayName = "Transcribe Audio", Category = "iamai"))
	static UTranscribeAudio* Transcribe( UAIWrapper* AIWrapper, UiamaiVoiceInput* iamaiVoiceInput);

	UPROPERTY(BlueprintAssignable)
	FOnTextTranscribed OnTextTranscribed;

protected:

	virtual void Activate() override;

	UAIWrapper* m_aiWrapper = nullptr;
	UiamaiVoiceInput* m_iamaiVoiceInput = nullptr;

};
