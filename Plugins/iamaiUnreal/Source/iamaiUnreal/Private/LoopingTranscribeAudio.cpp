#include "LoopingTranscribeAudio.h"

#include "iamaiVoiceInput.h"
#include "AIWrapper.h"

#include "Engine/Engine.h"
#include "Engine/World.h"
#include "Async/Async.h"

ULoopingTranscribeAudio::ULoopingTranscribeAudio() {

}

ULoopingTranscribeAudio* ULoopingTranscribeAudio::Transcribe(UObject* WorldContextObject, float time, UAIWrapper* AIWrapper, UiamaiVoiceInput* iamaiVoiceInput, FOnTextTranscribedDelegate InDelegate) {

	ULoopingTranscribeAudio* Node = NewObject<ULoopingTranscribeAudio>();

	Node->m_aiWrapper = AIWrapper;
	Node->m_iamaiVoiceInput = iamaiVoiceInput;
	Node->m_time = time;
	Node->TranscribedDelegate = InDelegate;
	Node->WorldContextObject = WorldContextObject;

	return Node;

}

void ULoopingTranscribeAudio::Activate() {

	if (!m_aiWrapper || !m_iamaiVoiceInput || !TranscribedDelegate.IsBound()) return;

	if (UWorld* World = GEngine->GetWorldFromContextObjectChecked(WorldContextObject)) {
		
		World->GetTimerManager().SetTimer(TimerHandle, this, &ULoopingTranscribeAudio::LoopingTranscribe, m_time, true);
		OnTimerCreated.Broadcast(true, TimerHandle);
	
	}

}

void ULoopingTranscribeAudio::LoopingTranscribe() {

	if (!m_aiWrapper || !m_iamaiVoiceInput || !TranscribedDelegate.IsBound()) {

		TimerHandle.Invalidate();
		return;

	}

	Async(EAsyncExecution::ThreadPool, [this]() {

		TArray<float> pcmf32 = m_iamaiVoiceInput->GetAndClearAudioData();
		FString TranscribedText = m_aiWrapper->Transcribe(pcmf32.GetData(), pcmf32.Num(), m_iamaiVoiceInput->fVoiceSensitivity);

		FOnTextTranscribedDelegate DelegateCopy = TranscribedDelegate;

		Async(EAsyncExecution::TaskGraphMainThread, [this, DelegateCopy, TranscribedText]() {

			if (DelegateCopy.IsBound()) DelegateCopy.Execute(!TranscribedText.IsEmpty(), TranscribedText);

			});

		});

}