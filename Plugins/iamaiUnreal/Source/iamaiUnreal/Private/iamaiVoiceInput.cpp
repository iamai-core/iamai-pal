#include "iamaiVoiceInput.h"

#include <AudioAnalytics.h>

void UiamaiVoiceInput::StartCapturingAudio() {

	if (bIsCapturingAudio) return;

	Start();
	if (!CaptureSynth || !bIsStreamOpen) return;

	CaptureSynth->StartCapturing();
	bIsCapturingAudio = true;

}

void UiamaiVoiceInput::StopCapturingAudio() {

	if (!bIsCapturingAudio) return;
	if (CaptureSynth && CaptureSynth->IsCapturing()) CaptureSynth->StopCapturing();
	Stop();
	bIsCapturingAudio = false;

}

bool UiamaiVoiceInput::Init(int32& SampleRate) {
	Super::Init(SampleRate);

	CaptureSynth = new Audio::FAudioCaptureSynth();

	Audio::FCaptureDeviceInfo DeviceInfo;
	if (!CaptureSynth->GetDefaultCaptureDeviceInfo(DeviceInfo)) return false;

	if (DeviceInfo.PreferredSampleRate > 0) {

		SampleRate = DeviceInfo.PreferredSampleRate;

	} else {

		UE_LOG(LogAudio, Warning, TEXT("Invalid SampleRate: %i"), DeviceInfo.PreferredSampleRate);
		return false;

	}

	NumChannels = DeviceInfo.InputChannels;

	if (NumChannels <= 0 || NumChannels > 8) {

		UE_LOG(LogAudio, Warning, TEXT("Invalid NumChannels: %i"), NumChannels);
		return false;

	}

	bIsStreamOpen = CaptureSynth->OpenDefaultStream();

	if (bIsStreamOpen) {

		CaptureSynth->StartCapturing();
		return true;

	} else {

		UE_LOG(LogTemp, Error, TEXT("Failed to open capture stream."));
		return false;

	}

}


int32 UiamaiVoiceInput::OnGenerateAudio(float* OutAudio, int32 NumSamples) {

	if (!bIsCapturingAudio || !CaptureSynth || !CaptureSynth->IsCapturing()) {

		FMemory::Memzero(OutAudio, NumSamples * sizeof(float));
		return NumSamples;

	}

	TArray<float> TempBuffer;
	CaptureSynth->GetAudioData(TempBuffer);

	if (TempBuffer.Num() > 0) m_pcmData.Append(TempBuffer);

	FMemory::Memzero(OutAudio, NumSamples * sizeof(float));

	return NumSamples;

}

void UiamaiVoiceInput::BeginDestroy() {

	Super::BeginDestroy();
	StopCapturingAudio();

	if (CaptureSynth) {
		if (CaptureSynth->IsStreamOpen()) {
			CaptureSynth->AbortCapturing();
		}
		delete CaptureSynth;
		CaptureSynth = nullptr;
	}

}
