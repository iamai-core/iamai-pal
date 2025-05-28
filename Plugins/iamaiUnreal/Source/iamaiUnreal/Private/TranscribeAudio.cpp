#include "TranscribeAudio.h"

#include "iamaiVoiceInput.h"
#include "AIWrapper.h"

#include "Async/Async.h"

UTranscribeAudio::UTranscribeAudio() {

}

UTranscribeAudio* UTranscribeAudio::Transcribe(UAIWrapper* AIWrapper, UiamaiVoiceInput* iamaiVoiceInput) {

	UTranscribeAudio* Node = NewObject<UTranscribeAudio>();

	Node->m_aiWrapper = AIWrapper;
	Node->m_iamaiVoiceInput = iamaiVoiceInput;

	return Node;

}




void UTranscribeAudio::Activate() {

	if (!m_aiWrapper || !m_iamaiVoiceInput) {

		OnTextTranscribed.Broadcast(false, TEXT("Invalid inputs"));
		return;

	}

	Async(EAsyncExecution::ThreadPool, [this]() {

		TArray<float> pcmf32 = m_iamaiVoiceInput->GetAndClearAudioData();
		FString TranscribedText = m_aiWrapper->Transcribe(pcmf32.GetData(), pcmf32.Num(), m_iamaiVoiceInput->fVoiceSensitivity);


		FOnTextTranscribed DelegateCopy = OnTextTranscribed;

		Async(EAsyncExecution::TaskGraphMainThread, [this, DelegateCopy, TranscribedText]() {

			if (DelegateCopy.IsBound()) DelegateCopy.Broadcast(!TranscribedText.IsEmpty(), TranscribedText);
			
			});

		});

}
