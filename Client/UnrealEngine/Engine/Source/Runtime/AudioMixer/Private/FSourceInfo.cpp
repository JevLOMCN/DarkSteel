// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 5

// ~FSourceInfo @ 1464dcc70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FMixerSourceManager::FSourceInfo::~FSourceInfo(FSourceInfo *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<float_*> FVar2;
  ForElementType<float_const_*> FVar3;
  ForElementType<float> FVar4;
  int *piVar5;
  FParam *pFVar6;
  longlong lVar7;
  
  *(undefined ***)this = &___7FSourceInfo_FMixerSourceManager_Audio__6B_;
  pFVar1 = (this->DebugName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FVar2 = (this->Resampler).TempOutputPointers.AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<float_*>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  FVar3 = (this->Resampler).TempInputPointers.AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<float_const_*>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  FVar4 = (this->Resampler).PreviousFrame.AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<float>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AudioLink).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SourceBufferListener).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->QuantizedCommandHandle).CommandPtr.SharedReferenceCount.ReferenceController);
  pFVar1 = (this->ScratchChannelMap).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->HighpassModulation).DestinationData.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LowpassModulation).DestinationData.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PitchModulation).DestinationData.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->VolumeModulation).DestinationData.SharedReferenceCount.ReferenceController);
  pFVar1 = (this->AudioPluginOutputData).AudioBuffer.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SourceEffectPresets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<FSoundEffectSource,1>,int>
            ((TSharedPtr<FSoundEffectSource,1> *)(this->SourceEffects).AllocatorInstance.Data,
             (this->SourceEffects).ArrayNum);
  pFVar1 = (this->SourceEffects).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->HighPassFilter).Z1.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LowPassFilter).Z1.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar6 = &this->PitchSourceParam;
  lVar7 = 2;
  do {
    piVar5 = (int *)(pFVar6 + -1);
    pFVar6 = (FParam *)((longlong)(pFVar6 + -1) + 4);
    lVar7 = lVar7 + -1;
    if (*(void **)(piVar5 + 1) != (void *)0x0) {
      FMemory::Free(*(void **)(piVar5 + 1));
    }
  } while (lVar7 != 0);
  DestructItems<Audio::FMixerSourceSubmixSend,int>
            ((FMixerSourceSubmixSend *)(this->SubmixSends).AllocatorInstance.Data,
             (this->SubmixSends).ArrayNum);
  pFVar1 = (this->SubmixSends).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NextFrameValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CurrentFrameValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SourceBufferDelayLine).InternalBuffer.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SourceEffectScratchBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PreDistanceAttenuationBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PreEffectBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SourceBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CurrentPCMBuffer).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MixerSourceBuffer).SharedReferenceCount.ReferenceController);
  return;
}

// DoRenderStep @ 1464fbef0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FMixerSourceManager::FSourceInfo::DoRenderStep(FSourceInfo *this)

{
  RenderSource(this->SourceManager,
               (int)(((longlong)this -
                     (longlong)(this->SourceManager->SourceInfos).AllocatorInstance.Data) / 0x5d0));
  return;
}

// GetCurrentAudioChunkNumFrames @ 146501720

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
Audio::FMixerSourceManager::FSourceInfo::GetCurrentAudioChunkNumFrames(FSourceInfo *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if ((this->CurrentPCMBuffer).Object == (TArray<float,TAlignedHeapAllocator<16>_> *)0x0) {
    return 0;
  }
  if (this->NumInputChannels == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumInputChannels != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceManager.h"
                       ,0x265,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  if ((this->CurrentPCMBuffer).Object == (TArray<float,TAlignedHeapAllocator<16>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return ((this->CurrentPCMBuffer).Object)->ArrayNum / this->NumInputChannels;
}

// GetRenderStepName @ 1465052b0

/* WARNING: Enum "Type": Some values do not have unique names */

wchar_t * __thiscall Audio::FMixerSourceManager::FSourceInfo::GetRenderStepName(FSourceInfo *this)

{
  if ((this->DebugName).Data.ArrayNum != 0) {
    return (wchar_t *)(this->DebugName).Data.AllocatorInstance.Data;
  }
  return L"";
}

// IsRenderingToSubmixes @ 14650f140

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall Audio::FMixerSourceManager::FSourceInfo::IsRenderingToSubmixes(FSourceInfo *this)

{
  return this->bEnableBaseSubmix != '\0' || this->bEnableSubmixSends != '\0';
}

