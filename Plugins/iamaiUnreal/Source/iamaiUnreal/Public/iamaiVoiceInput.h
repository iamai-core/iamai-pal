#pragma once

#include "CoreMinimal.h"
#include "Components/SynthComponent.h"

#include "iamaiVoiceInput.generated.h"

UCLASS(ClassGroup = Synth, meta = (BlueprintSpawnableComponent))
class IAMAIUNREAL_API UiamaiVoiceInput : public USynthComponent {

    GENERATED_BODY()

public:

    UFUNCTION(BlueprintCallable, Category = "iamai core")
    void StartCapturingAudio();

    UFUNCTION(BlueprintCallable, Category = "iamai core")
    void StopCapturingAudio();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Voice Input")
    bool bRecordOnStartup = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Voice Input", meta = (ClampMin = "0.0", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0"))
    float fVoiceSensitivity = 0.15f;

    TArray<float> GetAndClearAudioData() {
        return std::move(m_pcmData);
    }

    TArray<float>& GetAudioData() {
        return m_pcmData;
    }

protected:

    //virtual bool Init(int32& SampleRate) override;
    //virtual int32 OnGenerateAudio(float* OutAudio, int32 NumSamples) override;
    //virtual void OnBeginGenerate() override;
    //virtual void OnEndGenerate() override;

    TArray<float> m_pcmData;

    //Audio::FAudioCaptureSynth CaptureSynth;

};
