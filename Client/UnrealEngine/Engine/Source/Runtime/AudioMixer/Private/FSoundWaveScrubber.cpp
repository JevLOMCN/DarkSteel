// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 14

// FSoundWaveScrubber @ 14653dd10

FSoundWaveScrubber * __thiscall
Audio::FSoundWaveScrubber::FSoundWaveScrubber(FSoundWaveScrubber *this)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  ISampleRateConverter *pIVar8;
  FSoundWaveScrubber *pFVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  
  uVar11 = 0;
  this->AudioMixerSampleRate = 0.0;
  this->SourceFileSampleRate = 0.0;
  fVar14 = 0.0;
  this->SourceFileDurationSeconds = 0.0;
  this->NumChannels = 0;
  this->TargetPlayheadTimeSeconds = 0.0;
  this->TimeSincePlayheadHasNotChanged = 0.0;
  FDynamicParameter::FDynamicParameter(&this->CurrentPlayheadTimeSeconds,0.0);
  (this->DecodedChunks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DecodedChunks).ArrayNum = 0;
  (this->DecodedChunks).ArrayMax = 0;
  (this->SoundWaveProxyPtr).Object = (FSoundWaveProxy *)0x0;
  (this->SoundWaveProxyPtr).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->SoundWaveProxyReaderPtr).Ptr = (FSoundWaveProxyReader *)0x0;
  pIVar8 = ISampleRateConverter::CreateSampleRateConverter();
  (this->SRC).Ptr = pIVar8;
  piVar1 = &(this->GrainEnvelope).ArrayNum;
  piVar2 = &(this->GrainEnvelope).ArrayMax;
  (this->GrainEnvelope).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  *piVar2 = 0;
  this->GrainDurationSeconds = 0.0;
  this->CurrentGrainDurationFrames = 0;
  this->CurrentHalfGrainDurationFrames = 0;
  this->GrainCount = 0;
  this->NumActiveGrains = 0;
  (this->ActiveGrains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveGrains).ArrayNum = 0;
  (this->ActiveGrains).ArrayMax = 0;
  this->NumFramesTillNextGrainSpawn = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CritSect,4000);
  this->bIsScrubbing = false;
  this->bIsScrubbingDueToBeingStationary = true;
  this->bIsScrubbingWhileStationary = true;
  this->bHasErrorWithDecoder = false;
  *piVar1 = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->GrainEnvelope).AllocatorInstance,0,piVar2);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,0x200,&(this->GrainEnvelope).AllocatorInstance,piVar1,piVar2);
  fVar6 = __real_3c497495;
  fVar5 = __real_3f000000;
  fVar4 = __real_3f800000;
  uVar12 = uVar11;
  do {
    fVar13 = cosf(fVar14 * fVar6);
    if (*piVar1 <= (int)uVar11) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FSoundWaveScrubber *)(*pcVar3)();
        return pFVar9;
      }
    }
    fVar14 = fVar14 + fVar4;
    uVar10 = (int)uVar11 + 1;
    uVar11 = (ulonglong)uVar10;
    *(float *)((this->GrainEnvelope).AllocatorInstance.Data + uVar12) = fVar5 - fVar13 * fVar5;
    uVar12 = uVar12 + 4;
  } while ((int)uVar10 < 0x200);
  return this;
}

// ~FSoundWaveScrubber @ 146540ff0

void __thiscall Audio::FSoundWaveScrubber::~FSoundWaveScrubber(FSoundWaveScrubber *this)

{
  FScriptContainerElement *pFVar1;
  ISampleRateConverter *pIVar2;
  FSoundWaveProxyReader *pFVar3;
  ICompressedAudioInfo *pIVar4;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CritSect);
  pFVar1 = (this->ActiveGrains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GrainEnvelope).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->SRC).Ptr;
  if (pIVar2 != (ISampleRateConverter *)0x0) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  pFVar3 = (this->SoundWaveProxyReaderPtr).Ptr;
  if (pFVar3 != (FSoundWaveProxyReader *)0x0) {
    pFVar1 = (pFVar3->SampleConversionBuffer).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (pFVar3->ResidualBuffer).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (pFVar3->DecoderOutput).InternalBuffer.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pIVar4 = (pFVar3->CompressedAudioInfo).Ptr;
    if (pIVar4 != (ICompressedAudioInfo *)0x0) {
      (**(code **)pIVar4->_padding_)(pIVar4,1);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar3->WaveProxy).SharedReferenceCount.ReferenceController);
    ::operator_delete(pFVar3,0xa8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SoundWaveProxyPtr).SharedReferenceCount.ReferenceController);
  DestructItems<Audio::FSoundWaveScrubber::FDecodedDataChunk,int>
            ((FDecodedDataChunk *)(this->DecodedChunks).AllocatorInstance.Data,
             (this->DecodedChunks).ArrayNum);
  pFVar1 = (this->DecodedChunks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// DecodeDataChunkIndexForCurrentReadIndex @ 146551040

int __thiscall
Audio::FSoundWaveScrubber::DecodeDataChunkIndexForCurrentReadIndex
          (FSoundWaveScrubber *this,int param_1)

{
  TArray<Audio::FSoundWaveScrubber::FDecodedDataChunk,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FDecodedDataChunk *pFVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  FDecodedDataChunk local_38;
  
  if ((this->bHasErrorWithDecoder != false) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bHasErrorWithDecoder",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Generators\\SoundWaveScrubber.cpp"
                         ,0x49,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  uVar10 = 0;
  pTVar1 = &this->DecodedChunks;
  uVar12 = uVar10;
  if (0 < (this->DecodedChunks).ArrayNum) {
    do {
      uVar9 = (uint)uVar10;
      uVar7 = 0;
      if ((int)uVar9 < (this->DecodedChunks).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
      pFVar8 = (FDecodedDataChunk *)((pTVar1->AllocatorInstance).Data + uVar12);
      if (pFVar8->NumGrainsUsingChunk == 0) {
        DecodeToDataChunk(this,pFVar8,(float)param_1 / this->AudioMixerSampleRate);
        if (0 < (pFVar8->PCMAudio).ArrayNum) {
          return uVar9;
        }
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("DecodedChunk.PCMAudio.Num() > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Generators\\SoundWaveScrubber.cpp"
                           ,0x54,L"");
        if (!bVar5) {
          return uVar9;
        }
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
      uVar10 = (ulonglong)(uVar9 + 1);
      uVar12 = uVar12 + 0x20;
    } while ((int)(uVar9 + 1) < (this->DecodedChunks).ArrayNum);
  }
  local_38.FrameStart = -1;
  local_38.PCMAudio.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.PCMAudio.ArrayNum = 0;
  local_38.PCMAudio.ArrayMax = 0;
  local_38.NumGrainsUsingChunk = 0;
  DecodeToDataChunk(this,&local_38,(float)param_1 / this->AudioMixerSampleRate);
  if ((local_38.PCMAudio.ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewChunk.PCMAudio.Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Generators\\SoundWaveScrubber.cpp"
                         ,0x5c,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  pFVar8 = (FDecodedDataChunk *)(pTVar1->AllocatorInstance).Data;
  if (((pFVar8 <= &local_38) && (&local_38 < pFVar8 + (this->DecodedChunks).ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  iVar6 = (this->DecodedChunks).ArrayNum;
  piVar2 = &(this->DecodedChunks).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&pTVar1->AllocatorInstance,piVar2);
    (this->DecodedChunks).ArrayNum = iVar6;
  }
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  (this->DecodedChunks).ArrayNum = iVar6 + 1;
  lVar11 = (longlong)iVar6 * 0x20;
  *(int *)(pFVar3 + lVar11) = local_38.FrameStart;
  *(undefined8 *)(pFVar3 + lVar11 + 8) = 0;
  *(FScriptContainerElement **)(pFVar3 + lVar11 + 8) = local_38.PCMAudio.AllocatorInstance.Data;
  local_38.PCMAudio.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar3 + lVar11 + 0x10) = local_38.PCMAudio.ArrayNum;
  *(int *)(pFVar3 + lVar11 + 0x14) = local_38.PCMAudio.ArrayMax;
  local_38.PCMAudio.ArrayNum = 0;
  local_38.PCMAudio.ArrayMax = 0;
  *(int *)(pFVar3 + lVar11 + 0x18) = local_38.NumGrainsUsingChunk;
  if ((this->bHasErrorWithDecoder != false) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bHasErrorWithDecoder",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Generators\\SoundWaveScrubber.cpp"
                         ,0x60,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  iVar6 = (this->DecodedChunks).ArrayNum;
  if (local_38.PCMAudio.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.PCMAudio.AllocatorInstance.Data);
  }
  return iVar6 + -1;
}

// DecodeToDataChunk @ 146551310

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FSoundWaveScrubber::DecodeToDataChunk
          (FSoundWaveScrubber *this,FDecodedDataChunk *param_1,float param_2)

{
  TUniquePtr<FSoundWaveProxyReader,TDefaultDelete<FSoundWaveProxyReader>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar4;
  FSoundWaveProxyReader *pFVar5;
  FScriptContainerElement *pFVar6;
  ICompressedAudioInfo *pIVar7;
  TReferenceControllerBase<1> *pTVar8;
  FSoundWaveData *pFVar9;
  undefined8 *puVar10;
  ISampleRateConverter *pIVar11;
  code *pcVar12;
  void *_Src;
  bool bVar13;
  TUniquePtr<FSoundWaveProxyReader,TDefaultDelete<FSoundWaveProxyReader>_> TVar14;
  FSoundWaveProxy *this_00;
  FName *this_01;
  int iVar15;
  longlong lVar16;
  FSoundWaveProxy *local_res8;
  void *local_98;
  undefined8 local_90;
  FSoundWaveProxy *local_88;
  TReferenceControllerBase<1> *local_80;
  FString local_78;
  undefined4 local_68;
  float local_64;
  undefined1 local_60;
  undefined8 local_5c;
  undefined1 local_54;
  
  if ((param_1->NumGrainsUsingChunk != 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InOutDataChunk.NumGrainsUsingChunk == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Generators\\SoundWaveScrubber.cpp"
                          ,0x68,L""), bVar13)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if ((this->SourceFileSampleRate <= 0.0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("SourceFileSampleRate > 0.0f",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Generators\\SoundWaveScrubber.cpp"
                          ,0x6a,L""), bVar13)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if ((param_2 < 0.0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InDecoderSeekTimeSeconds >= 0.0f",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Generators\\SoundWaveScrubber.cpp"
                          ,0x6b,L""), bVar13)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if ((this->NumChannels < 1) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumChannels > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Generators\\SoundWaveScrubber.cpp"
                          ,0x6c,L""), bVar13)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if (((this->SoundWaveProxyPtr).Object == (FSoundWaveProxy *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("SoundWaveProxyPtr.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Generators\\SoundWaveScrubber.cpp"
                          ,0x6d,L""), bVar13)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pFVar5 = (this->SoundWaveProxyReaderPtr).Ptr;
  pTVar1 = &this->SoundWaveProxyReaderPtr;
  if (pFVar5 == (FSoundWaveProxyReader *)0x0) {
    if ((this->bHasErrorWithDecoder != false) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("!bHasErrorWithDecoder",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Generators\\SoundWaveScrubber.cpp"
                            ,0x72,L""), bVar13)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    local_60 = 0;
    local_5c = 0;
    local_54 = 0;
    local_68 = (undefined4)(longlong)this->SourceFileSampleRate;
    local_64 = param_2;
    if (((this->SoundWaveProxyPtr).Object == (FSoundWaveProxy *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x408,L""), bVar13)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    local_80 = (this->SoundWaveProxyPtr).SharedReferenceCount.ReferenceController;
    local_88 = (this->SoundWaveProxyPtr).Object;
    if (local_80 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_80->SharedReferenceCount = (atomic<int>)((int)local_80->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_88 == (FSoundWaveProxy *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x25d,L""), bVar13)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    TVar14 = FSoundWaveProxyReader::Create
                       ((TSharedRef<FSoundWaveProxy,1> *)&local_res8,(FSettings *)&local_88);
    if ((FSoundWaveProxyReader *)pTVar1 != TVar14.Ptr) {
      pFVar5 = pTVar1->Ptr;
      pTVar1->Ptr = (FSoundWaveProxyReader *)((TVar14.Ptr)->WaveProxy).Object;
      ((TVar14.Ptr)->WaveProxy).Object = (FSoundWaveProxy *)0x0;
      if (pFVar5 != (FSoundWaveProxyReader *)0x0) {
        pFVar6 = (pFVar5->SampleConversionBuffer).AllocatorInstance.Data;
        if (pFVar6 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar6);
        }
        pFVar6 = (pFVar5->ResidualBuffer).AllocatorInstance.Data;
        if (pFVar6 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar6);
        }
        pFVar6 = (pFVar5->DecoderOutput).InternalBuffer.AllocatorInstance.Data;
        if (pFVar6 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar6);
        }
        pIVar7 = (pFVar5->CompressedAudioInfo).Ptr;
        if (pIVar7 != (ICompressedAudioInfo *)0x0) {
          (**(code **)pIVar7->_padding_)(pIVar7,1);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((pFVar5->WaveProxy).SharedReferenceCount.ReferenceController);
        ::operator_delete(pFVar5,0xa8);
      }
    }
    if (local_res8 != (FSoundWaveProxy *)0x0) {
      pTVar8 = local_res8[3].SoundWaveDataPtr.SharedReferenceCount.ReferenceController;
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        FMemory::Free(pTVar8);
      }
      if ((void *)local_res8[3]._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_res8[3]._padding_);
      }
      pFVar9 = local_res8[2].SoundWaveDataPtr.Object;
      if (pFVar9 != (FSoundWaveData *)0x0) {
        FMemory::Free(pFVar9);
      }
      puVar10 = (undefined8 *)local_res8[2]._padding_;
      if (puVar10 != (undefined8 *)0x0) {
        (**(code **)*puVar10)(puVar10,1);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_res8->_padding_);
      ::operator_delete(local_res8,0xa8);
    }
    if (pTVar1->Ptr == (FSoundWaveProxyReader *)0x0) {
      this->bHasErrorWithDecoder = true;
      if ((byte)LogAudioMixer._0_1_ < 3) {
        return;
      }
      this_00 = TSharedPtr<FSoundWaveProxy,1>::operator->(&this->SoundWaveProxyPtr);
      this_01 = FSoundWaveProxy::GetFName(this_00);
      ::FName::ToString(this_01,&local_78);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      if (local_78.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
      return;
    }
  }
  else {
    FSoundWaveProxyReader::SeekToTime(pFVar5,param_2);
  }
  param_1->FrameStart = (int)(param_2 * this->AudioMixerSampleRate);
  iVar15 = (int)((float)this->NumChannels * this->SourceFileSampleRate);
  if ((iVar15 < 1) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("DecodedAudioSize > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Generators\\SoundWaveScrubber.cpp"
                          ,0x8d,L""), bVar13)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pTVar4 = &param_1->PCMAudio;
  piVar2 = &(param_1->PCMAudio).ArrayMax;
  (param_1->PCMAudio).ArrayNum = 0;
  piVar3 = &(param_1->PCMAudio).ArrayNum;
  if ((param_1->PCMAudio).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&pTVar4->AllocatorInstance,0,piVar2);
  }
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,iVar15,&pTVar4->AllocatorInstance,piVar3,piVar2);
  FSoundWaveProxyReader::PopAudio(pTVar1->Ptr,pTVar4);
  if (__real_322bcc77 <
      (float)((uint)(this->SourceFileSampleRate - this->AudioMixerSampleRate) &
             __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    pIVar11 = (this->SRC).Ptr;
    (**(code **)((longlong)*pIVar11 + 8))
              (pIVar11,this->SourceFileSampleRate / this->AudioMixerSampleRate,this->NumChannels);
    pIVar11 = (this->SRC).Ptr;
    local_98 = (void *)0x0;
    local_90 = 0;
    (**(code **)((longlong)*pIVar11 + 0x18))
              (pIVar11,(pTVar4->AllocatorInstance).Data,(param_1->PCMAudio).ArrayNum,&local_98);
    _Src = local_98;
    iVar15 = (int)local_90;
    lVar16 = (longlong)(int)local_90;
    *piVar3 = (int)local_90;
    if (((int)local_90 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,(int)local_90,*piVar2,&pTVar4->AllocatorInstance,(int)local_90,piVar2);
      if (iVar15 != 0) {
        memcpy((pTVar4->AllocatorInstance).Data,_Src,lVar16 << 2);
      }
    }
    if (local_98 != (void *)0x0) {
      FMemory::Free(local_98);
    }
  }
  return;
}

// GetDecodedDataChunkIndexForCurrentReadIndex @ 1465561f0

int __thiscall
Audio::FSoundWaveScrubber::GetDecodedDataChunkIndexForCurrentReadIndex
          (FSoundWaveScrubber *this,int param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  
  uVar7 = 0;
  if (0 < (this->DecodedChunks).ArrayNum) {
    lVar8 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < (this->DecodedChunks).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      pFVar2 = (this->DecodedChunks).AllocatorInstance.Data;
      iVar6 = *(int *)(pFVar2 + lVar8 + 0x10);
      if (((0 < iVar6) && (iVar1 = *(int *)(pFVar2 + lVar8), iVar1 <= param_1)) &&
         (param_1 < iVar6 / this->NumChannels + iVar1)) {
        return uVar7;
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x20;
    } while ((int)uVar7 < (this->DecodedChunks).ArrayNum);
  }
  return -1;
}

// Init @ 14655d750

void __thiscall
Audio::FSoundWaveScrubber::Init
          (FSoundWaveScrubber *this,TSharedPtr<FSoundWaveProxy,1> *param_1,float param_2,int param_3
          ,float param_4)

{
  int *piVar1;
  int *piVar2;
  double dVar3;
  TReferenceControllerBase<1> *pTVar4;
  FSoundWaveProxy *pFVar5;
  FDecodedDataChunk *pFVar6;
  code *pcVar7;
  TReferenceControllerBase<1> *pTVar8;
  double dVar9;
  bool bVar10;
  int iVar11;
  float fVar12;
  
  if (param_1->Object == (FSoundWaveProxy *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("InSoundWaveProxyPtr.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Generators\\SoundWaveScrubber.cpp"
                        ,0x1a,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar5 = param_1->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar8 = (this->SoundWaveProxyPtr).SharedReferenceCount.ReferenceController;
  (this->SoundWaveProxyPtr).Object = pFVar5;
  (this->SoundWaveProxyPtr).SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  this->AudioMixerSampleRate = param_2;
  if ((this->SoundWaveProxyPtr).Object == (FSoundWaveProxy *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  fVar12 = FSoundWaveProxy::GetSampleRate((this->SoundWaveProxyPtr).Object);
  this->SourceFileSampleRate = fVar12;
  if ((this->SoundWaveProxyPtr).Object == (FSoundWaveProxy *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  fVar12 = FSoundWaveProxy::GetDuration((this->SoundWaveProxyPtr).Object);
  this->SourceFileDurationSeconds = fVar12;
  this->NumChannels = param_3;
  (this->TargetGrainDurationRange).field0_0x0._s_0.X = 0.4000000059604645;
  (this->TargetGrainDurationRange).field0_0x0._s_0.Y = 0.05000000074505806;
  dVar3 = (this->TargetGrainDurationRange).field0_0x0._s_0.X;
  dVar9 = (this->TargetGrainDurationRange).field0_0x0._s_0.Y;
  (this->GrainDurationRange).field0_0x0._s_0.X = (this->TargetGrainDurationRange).field0_0x0._s_0.X;
  (this->GrainDurationRange).field0_0x0._s_0.Y = dVar9;
  this->GrainDurationSeconds = (float)dVar3;
  FDynamicParameter::Set(&this->CurrentPlayheadTimeSeconds,param_4,0.0);
  piVar1 = &(this->DecodedChunks).ArrayMax;
  this->TargetPlayheadTimeSeconds = (this->CurrentPlayheadTimeSeconds).CurrValue;
  piVar2 = &(this->DecodedChunks).ArrayNum;
  pFVar6 = (FDecodedDataChunk *)(this->DecodedChunks).AllocatorInstance.Data;
  if (*piVar1 < 0) {
    DestructItems<Audio::FSoundWaveScrubber::FDecodedDataChunk,int>(pFVar6,*piVar2);
    *piVar2 = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&(this->DecodedChunks).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<Audio::FSoundWaveScrubber::FDecodedDataChunk,int>(pFVar6,*piVar2);
    *piVar2 = 0;
  }
  iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x20,8,3,&(this->DecodedChunks).AllocatorInstance,piVar2,piVar1);
  DefaultConstructItems<Audio::FSoundWaveScrubber::FDecodedDataChunk,int>
            ((this->DecodedChunks).AllocatorInstance.Data + (longlong)iVar11 * 0x20,3);
  fVar12 = (this->CurrentPlayheadTimeSeconds).CurrValue - __real_3f000000;
  this->bHasErrorWithDecoder = false;
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  if (*piVar2 < 1) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  DecodeToDataChunk(this,(FDecodedDataChunk *)(this->DecodedChunks).AllocatorInstance.Data,fVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// RenderActiveGrains @ 14656e3c0

void __thiscall
Audio::FSoundWaveScrubber::RenderActiveGrains
          (FSoundWaveScrubber *this,TArrayView<float,int> *param_1,int param_2,int param_3)

{
  int *piVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  FScriptContainerElement *pFVar5;
  float *pfVar6;
  code *pcVar7;
  float fVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  FGrain *pFVar20;
  uint uVar21;
  longlong lVar22;
  float fVar23;
  int local_res8;
  
  if ((this->NumChannels < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumChannels > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Generators\\SoundWaveScrubber.cpp"
                         ,0x174,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  fVar8 = __real_3f800000;
  uVar16 = (this->ActiveGrains).ArrayNum - 1;
  if (-1 < (int)uVar16) {
    lVar22 = (longlong)(int)uVar16 << 4;
    do {
      uVar21 = 0;
      if ((int)uVar16 < (this->ActiveGrains).ArrayNum) {
        uVar21 = ~uVar16 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar20 = (FGrain *)((this->ActiveGrains).AllocatorInstance.Data + lVar22);
      uVar21 = pFVar20->GrainDurationFrames - pFVar20->CurrentRenderedFramesCount;
      if (param_3 < (int)uVar21) {
        uVar21 = param_3;
      }
      if (((int)uVar21 < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumFramesLeftToRender > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Generators\\SoundWaveScrubber.cpp"
                             ,0x17e,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      bVar9 = false;
      local_res8 = param_2;
      if (0 < (int)uVar21) {
        do {
          if (bVar9) goto LAB_14656e73c;
          UpdateGrainDecodeData(this,pFVar20);
          uVar13 = pFVar20->DecodedDataChunkIndex;
          uVar10 = 0;
          if ((int)uVar13 < (this->DecodedChunks).ArrayNum) {
            uVar10 = ~uVar13 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar5 = (this->DecodedChunks).AllocatorInstance.Data;
          lVar17 = (longlong)(int)uVar13 * 0x20;
          iVar11 = *(int *)(pFVar5 + lVar17 + 0x10);
          iVar12 = this->NumChannels;
          iVar14 = pFVar20->CurrentReadFrame - *(int *)(pFVar5 + lVar17);
          if ((iVar14 < 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("NumFramesOffsetInDecodedData >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Generators\\SoundWaveScrubber.cpp"
                                 ,400,L""), bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar13 = iVar11 / iVar12 - iVar14;
          if (((int)uVar13 < 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("NumFramesPossibleToRenderInChunk >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Generators\\SoundWaveScrubber.cpp"
                                 ,0x193,L""), bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar10 = uVar21;
          if ((int)uVar13 < (int)uVar21) {
            uVar10 = uVar13;
          }
          if (((int)uVar10 < 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("NumFramesToRenderInThisChunk >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Generators\\SoundWaveScrubber.cpp"
                                 ,0x198,L""), bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar17 = *(longlong *)(pFVar5 + lVar17 + 8);
          pfVar6 = param_1->DataPtr;
          if (0 < (int)uVar10) {
            uVar15 = (ulonglong)uVar10;
            lVar19 = (longlong)(this->NumChannels * iVar14);
            lVar18 = (longlong)(this->NumChannels * local_res8);
            do {
              iVar11 = pFVar20->CurrentRenderedFramesCount;
              pFVar20->CurrentRenderedFramesCount = iVar11 + 1;
              iVar12 = (this->GrainEnvelope).ArrayNum;
              pFVar5 = (this->GrainEnvelope).AllocatorInstance.Data;
              fVar23 = (float)iVar11 / (float)pFVar20->GrainDurationFrames;
              if (fVar8 <= fVar23) {
                fVar23 = fVar8;
              }
              if (fVar23 <= 0.0) {
                fVar23 = 0.0;
              }
              fVar23 = fVar23 * (float)(iVar12 + -1);
              iVar14 = (int)fVar23;
              fVar3 = *(float *)(pFVar5 + (longlong)iVar14 * 4);
              iVar11 = iVar14 + 1;
              if (iVar12 < iVar14 + 1) {
                iVar11 = iVar12;
              }
              fVar4 = *(float *)(pFVar5 + (longlong)iVar11 * 4);
              iVar11 = 0;
              if (0 < this->NumChannels) {
                do {
                  lVar2 = lVar19 * 4;
                  iVar11 = iVar11 + 1;
                  lVar19 = lVar19 + 1;
                  pfVar6[lVar18] =
                       *(float *)(lVar17 + lVar2) *
                       ((fVar4 - fVar3) * (fVar23 - (float)iVar14) + fVar3) + pfVar6[lVar18];
                  lVar18 = lVar18 + 1;
                } while (iVar11 < this->NumChannels);
              }
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
          pFVar20->CurrentReadFrame = pFVar20->CurrentReadFrame + uVar10;
          uVar21 = uVar21 - uVar10;
          local_res8 = local_res8 + uVar10;
          bVar9 = pFVar20->GrainDurationFrames <= pFVar20->CurrentRenderedFramesCount;
        } while (0 < (int)uVar21);
        if (pFVar20->GrainDurationFrames <= pFVar20->CurrentRenderedFramesCount) {
LAB_14656e73c:
          uVar21 = pFVar20->DecodedDataChunkIndex;
          uVar13 = 0;
          if ((int)uVar21 < (this->DecodedChunks).ArrayNum) {
            uVar13 = ~uVar21 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar5 = (this->DecodedChunks).AllocatorInstance.Data +
                   (longlong)(int)uVar21 * 0x20 + 0x18;
          *(int *)pFVar5 = *(int *)pFVar5 + -1;
          uVar21 = pFVar20->DecodedDataChunkIndex;
          uVar13 = 0;
          if ((int)uVar21 < (this->DecodedChunks).ArrayNum) {
            uVar13 = ~uVar21 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if ((*(int *)((this->DecodedChunks).AllocatorInstance.Data +
                       (longlong)(int)uVar21 * 0x20 + 0x18) < 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("DecodedChunks[Grain.DecodedDataChunkIndex].NumGrainsUsingChunk >= 0"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Generators\\SoundWaveScrubber.cpp"
                                 ,0x1c2,L""), bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar21 = 0;
          if ((int)uVar16 < (this->ActiveGrains).ArrayNum) {
            uVar21 = ~uVar16 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar11 = (this->ActiveGrains).ArrayNum;
          pFVar5 = (this->ActiveGrains).AllocatorInstance.Data;
          iVar12 = ~uVar16 + iVar11;
          if (1 < iVar12) {
            iVar12 = 1;
          }
          if (iVar12 != 0) {
            memmove(pFVar5 + lVar22,pFVar5 + (longlong)(iVar11 - iVar12) * 0x10,
                    (longlong)iVar12 << 4);
          }
          piVar1 = &(this->ActiveGrains).ArrayNum;
          *piVar1 = *piVar1 + -1;
          this->NumActiveGrains = this->NumActiveGrains + -1;
        }
      }
      uVar16 = uVar16 - 1;
      lVar22 = lVar22 + -0x10;
    } while (-1 < (int)uVar16);
  }
  return;
}

// RenderAudio @ 14656e930

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
Audio::FSoundWaveScrubber::RenderAudio(FSoundWaveScrubber *this,TArrayView<float,int> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<Audio::FSoundWaveScrubber::FGrain,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  float fVar4;
  double dVar5;
  uint uVar6;
  FGrain *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  float fVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  FGrain *pFVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  int iVar19;
  bool bVar20;
  float fVar21;
  double dVar22;
  float fVar23;
  FGrain local_88;
  FGrain local_78 [4];
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Emerald,"FSoundWaveScrubber::RenderAudio");
  bVar20 = -1 < CpuChannel->Enabled;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId219,"FSoundWaveScrubber::RenderAudio",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Generators\\SoundWaveScrubber.cpp"
               ,0xdb);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId219);
  }
  iVar13 = param_1->ArrayNum;
  if (this->bHasErrorWithDecoder == false) {
    lpCriticalSection = &this->CritSect;
    uVar18 = (longlong)iVar13 / (longlong)this->NumChannels;
    iVar13 = (int)uVar18;
    fVar23 = (float)iVar13 / this->AudioMixerSampleRate;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    fVar10 = __real_3f000000;
    fVar4 = this->TargetPlayheadTimeSeconds;
    if (__real_322bcc77 <
        (float)((uint)(fVar4 - (this->CurrentPlayheadTimeSeconds).TargetValue) &
               __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      fVar21 = __real_3e4ccccd;
      if (__real_3f000000 <
          (float)((uint)((this->CurrentPlayheadTimeSeconds).CurrValue - fVar4) &
                 __xmm_7fffffff7fffffff7fffffff7fffffff)) {
        fVar21 = 0.0;
      }
      FDynamicParameter::Set(&this->CurrentPlayheadTimeSeconds,fVar4,fVar21);
    }
    fVar4 = (this->CurrentPlayheadTimeSeconds).CurrValue;
    FDynamicParameter::Update(&this->CurrentPlayheadTimeSeconds,fVar23);
    uVar6 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    if (this->bIsScrubbingWhileStationary == false) {
      if (__real_3a83126f <
          (float)((uint)(fVar4 - (this->CurrentPlayheadTimeSeconds).CurrValue) &
                 __xmm_7fffffff7fffffff7fffffff7fffffff)) {
        this->TimeSincePlayheadHasNotChanged = 0.0;
        bVar11 = 0.0 < __real_3dcccccd;
      }
      else {
        fVar23 = fVar23 + this->TimeSincePlayheadHasNotChanged;
        bVar11 = fVar23 < __real_3dcccccd;
        this->TimeSincePlayheadHasNotChanged = fVar23;
      }
    }
    else {
      bVar11 = true;
    }
    this->bIsScrubbingDueToBeingStationary = bVar11;
    fVar23 = (this->CurrentPlayheadTimeSeconds).TargetValue;
    fVar4 = (this->CurrentPlayheadTimeSeconds).CurrValue;
    dVar5 = (this->TargetGrainDurationRange).field0_0x0._s_0.Y;
    (this->GrainDurationRange).field0_0x0._s_0.X =
         (this->TargetGrainDurationRange).field0_0x0._s_0.X;
    (this->GrainDurationRange).field0_0x0._s_0.Y = dVar5;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    dVar5 = (this->GrainDurationRange).field0_0x0._s_0.X;
    dVar22 = (double)(float)((uint)(fVar23 - fVar4) & uVar6) * ___real_4013fffffb000001;
    if (__real_3ff0000000000000 <= dVar22) {
      dVar22 = __real_3ff0000000000000;
    }
    if (dVar22 <= 0.0) {
      dVar22 = 0.0;
    }
    fVar23 = (float)(dVar22 * ((this->GrainDurationRange).field0_0x0._s_0.Y - dVar5) + dVar5);
    this->GrainDurationSeconds = fVar23;
    iVar12 = (int)(fVar23 * this->AudioMixerSampleRate);
    this->CurrentGrainDurationFrames = iVar12;
    this->CurrentHalfGrainDurationFrames = (int)((float)iVar12 * fVar10);
    if ((this->bIsScrubbing != false) && (this->bIsScrubbingDueToBeingStationary != false)) {
      if ((this->ActiveGrains).ArrayNum == 0) {
        pTVar1 = &this->ActiveGrains;
        pFVar15 = SpawnGrain(this,&local_88);
        pFVar7 = (FGrain *)(pTVar1->AllocatorInstance).Data;
        if (((pFVar7 <= pFVar15) && (pFVar15 < pFVar7 + (this->ActiveGrains).ArrayMax)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          iVar13 = (*pcVar8)();
          return iVar13;
        }
        iVar12 = (this->ActiveGrains).ArrayNum;
        piVar2 = &(this->ActiveGrains).ArrayMax;
        if (iVar12 == *piVar2) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x410,&pTVar1->AllocatorInstance,piVar2);
        }
        (this->ActiveGrains).ArrayNum = iVar12 + 1;
        uVar9 = *(undefined8 *)&pFVar15->CurrentReadFrame;
        pFVar3 = (pTVar1->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
        *(undefined8 *)pFVar3 = *(undefined8 *)pFVar15;
        *(undefined8 *)(pFVar3 + 8) = uVar9;
        this->NumFramesTillNextGrainSpawn = this->CurrentHalfGrainDurationFrames;
      }
      iVar12 = 0;
      uVar18 = uVar18 & 0xffffffff;
      if (this->NumFramesTillNextGrainSpawn < iVar13) {
        uVar18 = (ulonglong)(uint)this->NumFramesTillNextGrainSpawn;
      }
      iVar19 = 0;
      iVar17 = iVar13;
      while (0 < iVar17) {
        iVar17 = (int)uVar18;
        RenderActiveGrains(this,param_1,iVar12,iVar17);
        iVar19 = iVar19 + iVar17;
        piVar2 = &this->NumFramesTillNextGrainSpawn;
        *piVar2 = *piVar2 - iVar17;
        if ((*piVar2 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("NumFramesTillNextGrainSpawn >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Generators\\SoundWaveScrubber.cpp"
                                ,0x13a,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          iVar13 = (*pcVar8)();
          return iVar13;
        }
        uVar16 = 0;
        if (0 < iVar13 - iVar19) {
          uVar16 = (ulonglong)(uint)(iVar13 - iVar19);
        }
        iVar17 = (int)uVar16;
        if (this->NumFramesTillNextGrainSpawn == 0) {
          pTVar1 = &this->ActiveGrains;
          iVar12 = iVar13 - iVar17;
          pFVar15 = SpawnGrain(this,local_78);
          pFVar7 = (FGrain *)(pTVar1->AllocatorInstance).Data;
          if (((pFVar7 <= pFVar15) && (pFVar15 < pFVar7 + (this->ActiveGrains).ArrayMax)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar8 = (code *)swi(3);
            iVar13 = (*pcVar8)();
            return iVar13;
          }
          iVar14 = (this->ActiveGrains).ArrayNum;
          piVar2 = &(this->ActiveGrains).ArrayMax;
          if (iVar14 == *piVar2) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x410,&pTVar1->AllocatorInstance,piVar2);
          }
          (this->ActiveGrains).ArrayNum = iVar14 + 1;
          uVar9 = *(undefined8 *)&pFVar15->CurrentReadFrame;
          pFVar3 = (pTVar1->AllocatorInstance).Data + (longlong)iVar14 * 0x10;
          *(undefined8 *)pFVar3 = *(undefined8 *)pFVar15;
          *(undefined8 *)(pFVar3 + 8) = uVar9;
          uVar6 = this->CurrentHalfGrainDurationFrames;
          this->NumFramesTillNextGrainSpawn = uVar6;
          uVar18 = uVar16;
          if ((int)uVar6 < iVar17) {
            uVar18 = (ulonglong)uVar6;
          }
        }
      }
    }
    iVar13 = param_1->ArrayNum;
  }
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return iVar13;
}

// SetGrainDurationRange @ 146572df0

void __thiscall
Audio::FSoundWaveScrubber::SetGrainDurationRange(FSoundWaveScrubber *this,TVector2<double> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  lpCriticalSection = &this->CritSect;
  dVar1 = *(double *)&param_1->field0_0x0;
  dVar2 = *(double *)((longlong)&param_1->field0_0x0 + 8);
  uVar6 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
  uVar5 = SUB84(dVar2,0);
  uVar7 = (int)((ulonglong)dVar2 >> 0x20);
  if (__real_3fe0000000000000 <= dVar2) {
    uVar5 = SUB84(__real_3fe0000000000000,0);
    uVar7 = uVar6;
  }
  uVar3 = SUB84(dVar1,0);
  uVar4 = (int)((ulonglong)dVar1 >> 0x20);
  if (__real_3fe0000000000000 <= dVar1) {
    uVar3 = SUB84(__real_3fe0000000000000,0);
    uVar4 = uVar6;
  }
  uVar6 = (undefined4)((ulonglong)__real_3fa99999a0000000 >> 0x20);
  if ((double)CONCAT44(uVar7,uVar5) <= __real_3fa99999a0000000) {
    uVar5 = SUB84(__real_3fa99999a0000000,0);
    uVar7 = uVar6;
  }
  if ((double)CONCAT44(uVar4,uVar3) <= __real_3fa99999a0000000) {
    uVar3 = SUB84(__real_3fa99999a0000000,0);
    uVar4 = uVar6;
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (this->TargetGrainDurationRange).field0_0x0._s_0.X = (double)CONCAT44(uVar4,uVar3);
    (this->TargetGrainDurationRange).field0_0x0._s_0.Y = (double)CONCAT44(uVar7,uVar5);
                    /* WARNING: Could not recover jumptable at 0x000146572e69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetIsScrubbing @ 146572fb0

void __thiscall Audio::FSoundWaveScrubber::SetIsScrubbing(FSoundWaveScrubber *this,bool param_1)

{
  this->bIsScrubbing = param_1;
  return;
}

// SetIsScrubbingWhileStationary @ 146572ff0

void __thiscall
Audio::FSoundWaveScrubber::SetIsScrubbingWhileStationary(FSoundWaveScrubber *this,bool param_1)

{
  this->bIsScrubbingWhileStationary = param_1;
  return;
}

// SetPlayheadTime @ 146574140

void __thiscall Audio::FSoundWaveScrubber::SetPlayheadTime(FSoundWaveScrubber *this,float param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  float fVar1;
  
  lpCriticalSection = &this->CritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    fVar1 = FGenericPlatformMath::Fmod(param_1,this->SourceFileDurationSeconds);
    this->TargetPlayheadTimeSeconds = fVar1;
                    /* WARNING: Could not recover jumptable at 0x000146574195. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SpawnGrain @ 146576920

FGrain * __thiscall
Audio::FSoundWaveScrubber::SpawnGrain(FSoundWaveScrubber *this,FGrain *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FGrain *pFVar6;
  uint uVar7;
  int iVar8;
  
  if (this->bHasErrorWithDecoder != false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bHasErrorWithDecoder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Generators\\SoundWaveScrubber.cpp"
                       ,0xa3,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FGrain *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar8 = (int)((this->CurrentPlayheadTimeSeconds).CurrValue * this->AudioMixerSampleRate);
  uVar5 = GetDecodedDataChunkIndexForCurrentReadIndex(this,iVar8);
  if (uVar5 == 0xffffffff) {
    uVar5 = DecodeDataChunkIndexForCurrentReadIndex(this,iVar8);
  }
  if (uVar5 == 0xffffffff) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DecodedDataChunkIndex != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Generators\\SoundWaveScrubber.cpp"
                       ,0xac,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FGrain *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar2 = (this->DecodedChunks).ArrayNum;
  __return_storage_ptr__->GrainDurationFrames = this->CurrentGrainDurationFrames;
  __return_storage_ptr__->CurrentRenderedFramesCount = 0;
  __return_storage_ptr__->DecodedDataChunkIndex = uVar5;
  __return_storage_ptr__->CurrentReadFrame = iVar8;
  uVar7 = 0;
  if ((int)uVar5 < iVar2) {
    uVar7 = ~uVar5 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FGrain *)(*pcVar3)();
      return pFVar6;
    }
  }
  pFVar1 = (this->DecodedChunks).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x20 + 0x18;
  *(int *)pFVar1 = *(int *)pFVar1 + 1;
  this->GrainCount = this->GrainCount + 1;
  this->NumActiveGrains = this->NumActiveGrains + 1;
  return __return_storage_ptr__;
}

// UpdateGrainDecodeData @ 14657bf70

void __thiscall
Audio::FSoundWaveScrubber::UpdateGrainDecodeData(FSoundWaveScrubber *this,FGrain *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  
  uVar1 = param_1->DecodedDataChunkIndex;
  uVar5 = 0;
  if ((int)uVar1 < (this->DecodedChunks).ArrayNum) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar7 = (this->DecodedChunks).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x20;
  iVar6 = *(int *)pFVar7 + (*(int *)(pFVar7 + 0x10) / this->NumChannels - param_1->CurrentReadFrame)
  ;
  if (iVar6 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumFramesPossibleToRenderInChunk >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Generators\\SoundWaveScrubber.cpp"
                       ,0x15b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (iVar6 == 0) {
    pFVar7 = pFVar7 + 0x18;
    *(int *)pFVar7 = *(int *)pFVar7 + -1;
    if (*(int *)pFVar7 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DecodedData.NumGrainsUsingChunk >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Generators\\SoundWaveScrubber.cpp"
                         ,0x162,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar6 = GetDecodedDataChunkIndexForCurrentReadIndex(this,param_1->CurrentReadFrame);
    param_1->DecodedDataChunkIndex = iVar6;
    if (iVar6 == -1) {
      iVar6 = DecodeDataChunkIndexForCurrentReadIndex(this,param_1->CurrentReadFrame);
      param_1->DecodedDataChunkIndex = iVar6;
      if (iVar6 == -1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InGrain.DecodedDataChunkIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Generators\\SoundWaveScrubber.cpp"
                           ,0x169,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
    uVar1 = param_1->DecodedDataChunkIndex;
    uVar5 = 0;
    if ((int)uVar1 < (this->DecodedChunks).ArrayNum) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (param_1->CurrentReadFrame <
        *(int *)((this->DecodedChunks).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x20)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InGrain.CurrentReadFrame >= DecodedChunks[InGrain.DecodedDataChunkIndex].FrameStart"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Generators\\SoundWaveScrubber.cpp"
                         ,0x16b,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar1 = param_1->DecodedDataChunkIndex;
    uVar5 = 0;
    if ((int)uVar1 < (this->DecodedChunks).ArrayNum) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar5 = param_1->DecodedDataChunkIndex;
    pFVar7 = (this->DecodedChunks).AllocatorInstance.Data;
    uVar4 = 0;
    if ((int)uVar5 < (this->DecodedChunks).ArrayNum) {
      uVar4 = ~uVar5 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (*(int *)(pFVar7 + (longlong)(int)uVar1 * 0x20 + 0x10) / this->NumChannels +
        *(int *)((this->DecodedChunks).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x20) <=
        param_1->CurrentReadFrame) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InGrain.CurrentReadFrame < DecodedChunks[InGrain.DecodedDataChunkIndex].FrameStart + DecodedChunks[InGrain.DecodedDataChunkIndex].PCMAudio.Num() / NumChannels"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\Generators\\SoundWaveScrubber.cpp"
                         ,0x16c,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar1 = param_1->DecodedDataChunkIndex;
    uVar5 = 0;
    if ((int)uVar1 < (this->DecodedChunks).ArrayNum) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar7 = (this->DecodedChunks).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x20 + 0x18;
    *(int *)pFVar7 = *(int *)pFVar7 + 1;
  }
  return;
}

