#include "iamaiVoiceInput.h"


//#include "Audio.h"
//#include "AudioAnalytics.h"

void UiamaiVoiceInput::StartCapturingAudio() {}

void UiamaiVoiceInput::StopCapturingAudio() {}

/*

bool UiamaiVoiceInput::Init(int32& SampleRate) {

	Audio::FCaptureDeviceInfo DeviceInfo;
	if (CaptureSynth.GetDefaultCaptureDeviceInfo(DeviceInfo)) {

		if (DeviceInfo.PreferredSampleRate > 0) SampleRate = DeviceInfo.PreferredSampleRate;
		else UE_LOG(LogAudio, Warning, TEXT("Attempted to open a capture device with the invalid SampleRate value of %i"), DeviceInfo.PreferredSampleRate);

		NumChannels = DeviceInfo.InputChannels;

		if (NumChannels > 0 && NumChannels <= 8) {
			
			bIsStreamOpen = CaptureSynth.OpenDefaultStream();

			Audio::Analytics::RecordEvent_Usage(TEXT("AudioCapture.AudioCaptureComponentInitialized"));

			return true;

		} else {

			UE_LOG(LogAudio, Warning, TEXT("Attempted to open a device with the invalid NumChannels value of %i"), NumChannels);
		
		}

	}

	return false;

}

int32 UiamaiVoiceInput::OnGenerateAudio(float* OutAudio, int32 NumSamples) {
	
	return int32();

}

void UiamaiVoiceInput::OnBeginGenerate() {}

void UiamaiVoiceInput::OnEndGenerate() {}
*/