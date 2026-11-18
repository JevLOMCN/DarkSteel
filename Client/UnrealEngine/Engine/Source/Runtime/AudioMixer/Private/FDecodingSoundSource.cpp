// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 11

// FDecodingSoundSource @ 146584e60

FDecodingSoundSource * __thiscall
Audio::FDecodingSoundSource::FDecodingSoundSource
          (FDecodingSoundSource *this,FAudioDevice *param_1,FSourceDecodeInit *param_2)

{
  float fVar1;
  bool bVar2;
  USoundWave *pUVar3;
  FNameEntryId FVar4;
  FMixerBuffer *pFVar5;
  
  FVar4.Value = (param_2->Handle).SoundWaveName.ComparisonIndex.Value;
  (this->Handle).Id = (param_2->Handle).Id;
  (this->Handle).SoundWaveName.ComparisonIndex = (FNameEntryId)FVar4.Value;
  (this->Handle).SoundWaveName.Number = (param_2->Handle).SoundWaveName.Number;
  this->AudioDeviceID = 0;
  pUVar3 = (param_2->SoundWave).field0_0x0.DebugPtr;
  (this->SoundWave).field0_0x0.DebugPtr = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (USoundWave *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  this->MixerBuffer = (FMixerBuffer *)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->MixerSourceBufferCritSec,4000);
  (this->MixerSourceBuffer).Object = (FMixerSourceBuffer *)0x0;
  (this->MixerSourceBuffer).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ScratchBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScratchBuffer).ArrayNum = 0;
  (this->ScratchBuffer).ArrayMax = 0;
  this->SampleRate = -1;
  this->SeekTime = param_2->SeekTime;
  this->bInitialized = (FThreadSafeBool)0x0;
  bVar2 = param_2->bForceSyncDecode;
  (this->SourceInfo).NumSourceChannels = 0;
  (this->SourceInfo).TotalNumFrames = 0;
  (this->SourceInfo).NumFramesRead = 0;
  (this->SourceInfo).NumFramesGenerated = 0;
  (this->SourceInfo).CurrentFrameAlpha = 0.0;
  (this->SourceInfo).CurrentFrameIndex = 0;
  (this->SourceInfo).CurrentAudioChunkNumFrames = 0;
  (this->SourceInfo).BasePitchScale = 1.0;
  (this->SourceInfo).PitchScale = 1.0;
  (this->SourceInfo).PitchParam.CurrentValue = 0.0;
  (this->SourceInfo).PitchParam.StartingValue = 0.0;
  (this->SourceInfo).PitchParam.TargetValue = 0.0;
  (this->SourceInfo).PitchParam.DeltaValue = 0.0;
  (this->SourceInfo).PitchParam.bIsInit = true;
  (this->SourceInfo).PitchResetFrame = 0;
  (this->SourceInfo).VolumeParam.CurrentValue = 0.0;
  (this->SourceInfo).VolumeParam.StartingValue = 0.0;
  (this->SourceInfo).VolumeParam.TargetValue = 0.0;
  (this->SourceInfo).VolumeParam.DeltaValue = 0.0;
  (this->SourceInfo).VolumeResetFrame = 0;
  (this->SourceInfo).CurrentFrameValues.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceInfo).CurrentFrameValues.ArrayNum = 0;
  (this->SourceInfo).CurrentFrameValues.ArrayMax = 0;
  (this->SourceInfo).NextFrameValues.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceInfo).NextFrameValues.ArrayNum = 0;
  (this->SourceInfo).NextFrameValues.ArrayMax = 0;
  (this->SourceInfo).CurrentPCMBuffer.Object = (TArray<float,TAlignedHeapAllocator<16>_> *)0x0;
  (this->SourceInfo).CurrentPCMBuffer.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->SourceInfo).bIsDone = false;
  (this->SourceInfo).bHasStarted = false;
  (this->SourceInfo).bIsLastBuffer = false;
  this->bForceSyncDecode = bVar2;
  (this->SourceInfo).VolumeParam.bIsInit = true;
  fVar1 = param_2->VolumeScale;
  (this->SourceInfo).VolumeParam.TargetValue = fVar1;
  (this->SourceInfo).VolumeParam.StartingValue = fVar1;
  (this->SourceInfo).VolumeParam.CurrentValue = fVar1;
  (this->SourceInfo).VolumeParam.bIsInit = false;
  (this->SourceInfo).VolumeParam.DeltaValue = 0.0;
  (this->SourceInfo).PitchScale = param_2->PitchScale;
  if (param_1 != (FAudioDevice *)0x0) {
    this->AudioDeviceID = param_1->DeviceID;
  }
  pFVar5 = FMixerBuffer::Init(param_1,(param_2->SoundWave).field0_0x0.DebugPtr,true);
  this->MixerBuffer = pFVar5;
  return this;
}

// ~FDecodingSoundSource @ 1465852c0

void __thiscall Audio::FDecodingSoundSource::~FDecodingSoundSource(FDecodingSoundSource *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FMixerSourceBuffer *this_00;
  FScriptContainerElement *pFVar1;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  lpCriticalSection = &this->MixerSourceBufferCritSec;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this_00 = (this->MixerSourceBuffer).Object;
    if (this_00 != (FMixerSourceBuffer *)0x0) {
      FMixerSourceBuffer::OnEndGenerate(this_00);
      local_18 = 0;
      FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (&this->MixerSourceBuffer != (TSharedPtr<Audio::FMixerSourceBuffer,1> *)&local_18) {
        (this->MixerSourceBuffer).Object = (FMixerSourceBuffer *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->MixerSourceBuffer).SharedReferenceCount,&FStack_10);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_10.ReferenceController);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((this->SourceInfo).CurrentPCMBuffer.SharedReferenceCount.ReferenceController);
    pFVar1 = (this->SourceInfo).NextFrameValues.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (this->SourceInfo).CurrentFrameValues.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (this->ScratchBuffer).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((this->MixerSourceBuffer).SharedReferenceCount.ReferenceController);
                    /* WARNING: Could not recover jumptable at 0x00014658538c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetAudioBuffer @ 1465861e0

bool __thiscall
Audio::FDecodingSoundSource::GetAudioBuffer
          (FDecodingSoundSource *this,int param_1,int param_2,
          TArray<float,TAlignedHeapAllocator<16>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  undefined1 uVar5;
  BOOL BVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  LPCRITICAL_SECTION p_Var10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  ulonglong uVar13;
  int iVar14;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)&this->MixerSourceBufferCritSec;
  uVar9 = (ulonglong)(uint)param_1;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  BVar6 = TryEnterCriticalSection(lpCriticalSection);
  p_Var10 = (LPCRITICAL_SECTION)0x0;
  if (BVar6 == 0) {
    lpCriticalSection = p_Var10;
  }
  if ((this->bInitialized != (FThreadSafeBool)0x0) && (lpCriticalSection != (LPCRITICAL_SECTION)0x0)
     ) {
    param_3->ArrayNum = 0;
    if (param_3->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
    }
    TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed(param_3,param_1 * param_2);
    if ((this->SourceInfo).bIsLastBuffer == false) {
      if (param_2 == (this->SourceInfo).NumSourceChannels) {
        GetAudioBufferInternal(this,param_1,param_2,param_3);
        bVar4 = true;
        goto LAB_146586444;
      }
      (this->ScratchBuffer).ArrayNum = 0;
      if ((this->ScratchBuffer).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,0,&(this->ScratchBuffer).AllocatorInstance,0,&(this->ScratchBuffer).ArrayMax)
        ;
      }
      TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed
                (&this->ScratchBuffer,param_1 * (this->SourceInfo).NumSourceChannels);
      GetAudioBufferInternal(this,param_1,param_2,&this->ScratchBuffer);
      fVar3 = __real_3f000000;
      pFVar1 = (param_3->AllocatorInstance).Data;
      pFVar11 = (this->ScratchBuffer).AllocatorInstance.Data;
      if (param_2 == 2) {
        if ((this->SourceInfo).NumSourceChannels != 1) {
LAB_146586348:
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InNumChannels == 1 && SourceInfo.NumSourceChannels == 2",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\SoundWaveDecoder.cpp"
                             ,0x1a1,L"");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          goto LAB_14658636e;
        }
        if (0 < param_1) {
          do {
            lVar8 = 2;
            do {
              *(float *)(pFVar1 + (longlong)p_Var10 * 4) = *(float *)pFVar11 * fVar3;
              p_Var10 = (LPCRITICAL_SECTION)((longlong)&p_Var10->DebugInfo + 1);
              lVar8 = lVar8 + -1;
            } while (lVar8 != 0);
            pFVar11 = pFVar11 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
          bVar4 = true;
          goto LAB_146586444;
        }
      }
      else {
        if ((param_2 != 1) || ((this->SourceInfo).NumSourceChannels != 2)) goto LAB_146586348;
LAB_14658636e:
        fVar3 = __real_3f000000;
        if (0 < param_1) {
          do {
            iVar14 = 0;
            if (3 < param_2) {
              uVar7 = (param_2 - 4U >> 2) + 1;
              pFVar12 = pFVar1 + (longlong)p_Var10 * 4 + 8;
              uVar13 = (ulonglong)uVar7;
              iVar14 = uVar7 * 4;
              p_Var10 = (LPCRITICAL_SECTION)((longlong)&p_Var10->DebugInfo + (ulonglong)uVar7 * 4);
              do {
                *(float *)(pFVar12 + -8) = (*(float *)(pFVar11 + 4) + *(float *)pFVar11) * fVar3;
                *(float *)(pFVar12 + -4) = (*(float *)(pFVar11 + 4) + *(float *)pFVar11) * fVar3;
                *(float *)pFVar12 = (*(float *)(pFVar11 + 4) + *(float *)pFVar11) * fVar3;
                *(float *)(pFVar12 + 4) = (*(float *)(pFVar11 + 4) + *(float *)pFVar11) * fVar3;
                pFVar12 = pFVar12 + 0x10;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            if (iVar14 < param_2) {
              uVar13 = (ulonglong)(uint)(param_2 - iVar14);
              do {
                *(float *)(pFVar1 + (longlong)p_Var10 * 4) =
                     (*(float *)(pFVar11 + 4) + *(float *)pFVar11) * fVar3;
                p_Var10 = (LPCRITICAL_SECTION)((longlong)&p_Var10->DebugInfo + 1);
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            pFVar11 = pFVar11 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
      }
      bVar4 = true;
      goto LAB_146586444;
    }
  }
  bVar4 = false;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
    return false;
  }
LAB_146586444:
  LeaveCriticalSection(lpCriticalSection);
  return bVar4;
}

// GetAudioBufferInternal @ 146586480

void __thiscall
Audio::FDecodingSoundSource::GetAudioBufferInternal
          (FDecodingSoundSource *this,int param_1,int param_2,
          TArray<float,TAlignedHeapAllocator<16>_> *param_3)

{
  FParam *pFVar1;
  FParam *pFVar2;
  uint *puVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  float fVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  fVar9 = __real_3f800000;
  if (0 < param_1) {
    pFVar6 = (param_3->AllocatorInstance).Data;
    uVar14 = 0;
    pFVar7 = (this->SourceInfo).CurrentFrameValues.AllocatorInstance.Data;
    pFVar8 = (this->SourceInfo).NextFrameValues.AllocatorInstance.Data;
    uVar15 = uVar14;
    do {
      if ((this->SourceInfo).bIsLastBuffer != false) {
        return;
      }
      bVar16 = (this->SourceInfo).bHasStarted == false;
      fVar18 = (this->SourceInfo).CurrentFrameAlpha;
      (this->SourceInfo).bHasStarted = true;
      if (fVar9 <= fVar18) {
        iVar10 = (this->SourceInfo).CurrentFrameIndex;
        bVar16 = true;
        uVar12 = (this->SourceInfo).NumFramesRead;
        do {
          fVar18 = fVar18 - fVar9;
          iVar10 = iVar10 + 1;
          uVar12 = uVar12 + 1;
        } while (fVar9 <= fVar18);
        (this->SourceInfo).CurrentFrameAlpha = fVar18;
        (this->SourceInfo).CurrentFrameIndex = iVar10;
        (this->SourceInfo).NumFramesRead = uVar12;
      }
      if ((this->MixerSourceBuffer).Object == (FMixerSourceBuffer *)0x0) {
        (this->SourceInfo).bIsLastBuffer = true;
        return;
      }
      pFVar1 = &(this->SourceInfo).PitchParam;
      pFVar2 = &(this->SourceInfo).VolumeParam;
      fVar17 = (this->SourceInfo).PitchParam.DeltaValue + pFVar1->CurrentValue;
      fVar19 = pFVar2->CurrentValue + (this->SourceInfo).VolumeParam.DeltaValue;
      pFVar1->CurrentValue = fVar17;
      pFVar2->CurrentValue = fVar19;
      (this->SourceInfo).CurrentFrameAlpha = fVar17 + fVar18;
      if ((bVar16) && (ReadFrame(this), (this->SourceInfo).bIsLastBuffer != false)) {
        return;
      }
      iVar10 = 0;
      if (0 < (this->SourceInfo).NumSourceChannels) {
        lVar13 = (longlong)pFVar7 - (longlong)pFVar8;
        pFVar11 = pFVar8;
        do {
          fVar17 = *(float *)pFVar11;
          iVar10 = iVar10 + 1;
          pFVar4 = pFVar11 + lVar13;
          pFVar5 = pFVar11 + lVar13;
          pFVar11 = pFVar11 + 4;
          *(float *)(pFVar6 + uVar15 * 4) =
               ((fVar17 - *(float *)pFVar4) * fVar18 + *(float *)pFVar5) * fVar19;
          uVar15 = uVar15 + 1;
        } while (iVar10 < (this->SourceInfo).NumSourceChannels);
      }
      puVar3 = &(this->SourceInfo).NumFramesGenerated;
      *puVar3 = *puVar3 + 1;
      if ((this->SourceInfo).PitchResetFrame <= (this->SourceInfo).NumFramesGenerated) {
        (this->SourceInfo).PitchParam.CurrentValue = (this->SourceInfo).PitchParam.TargetValue;
        (this->SourceInfo).PitchResetFrame = 0xffffffff;
        (this->SourceInfo).PitchParam.DeltaValue = 0.0;
      }
      if ((this->SourceInfo).VolumeResetFrame <= (this->SourceInfo).NumFramesGenerated) {
        (this->SourceInfo).VolumeParam.CurrentValue = (this->SourceInfo).VolumeParam.TargetValue;
        (this->SourceInfo).VolumeResetFrame = 0xffffffff;
        (this->SourceInfo).VolumeParam.DeltaValue = 0.0;
      }
      uVar12 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar12;
    } while ((int)uVar12 < param_1);
  }
  return;
}

// Init @ 146586840

void __thiscall Audio::FDecodingSoundSource::Init(FDecodingSoundSource *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  int iVar2;
  FMixerBuffer *pFVar3;
  bool bVar4;
  ICompressedAudioInfo *pIVar5;
  FMixerSourceBuffer *pFVar6;
  float fVar7;
  
  if (*(int *)((longlong)&this->MixerBuffer->_padding_ + 4) - 1U < 2) {
    lpCriticalSection = &this->MixerSourceBufferCritSec;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((this->MixerSourceBuffer).Object != (FMixerSourceBuffer *)0x0) {
      pIVar5 = FMixerBuffer::GetDecompressionState(this->MixerBuffer,false);
      pFVar6 = TSharedPtr<Audio::FMixerSourceBuffer,1>::operator->(&this->MixerSourceBuffer);
      FMixerSourceBuffer::SetDecoder(pFVar6,pIVar5);
      pFVar6 = TSharedPtr<Audio::FMixerSourceBuffer,1>::operator->(&this->MixerSourceBuffer);
      bVar4 = FMixerSourceBuffer::IsAsyncTaskInProgress(pFVar6);
      if (!bVar4) {
        pFVar6 = TSharedPtr<Audio::FMixerSourceBuffer,1>::operator->(&this->MixerSourceBuffer);
        FMixerSourceBuffer::ReadMoreRealtimeData(pFVar6,pIVar5,0,Asynchronous);
      }
      pFVar3 = this->MixerBuffer;
      iVar1 = *(int *)((longlong)&pFVar3->_padding_ + 4);
      (this->SourceInfo).NumSourceChannels = iVar1;
      (this->SourceInfo).TotalNumFrames = pFVar3->NumFrames;
      TArray<float,TSizedDefaultAllocator<32>_>::AddZeroed
                (&(this->SourceInfo).CurrentFrameValues,iVar1);
      TArray<float,TSizedDefaultAllocator<32>_>::AddZeroed
                (&(this->SourceInfo).NextFrameValues,(this->SourceInfo).NumSourceChannels);
      iVar1 = this->SampleRate;
      iVar2 = this->MixerBuffer->SampleRate;
      (this->SourceInfo).PitchParam.bIsInit = true;
      fVar7 = (float)iVar2 / (float)iVar1;
      (this->SourceInfo).BasePitchScale = fVar7;
      fVar7 = fVar7 * (this->SourceInfo).PitchScale;
      (this->SourceInfo).PitchParam.bIsInit = false;
      (this->SourceInfo).PitchParam.DeltaValue = 0.0;
      (this->SourceInfo).PitchParam.TargetValue = fVar7;
      (this->SourceInfo).PitchParam.StartingValue = fVar7;
      (this->SourceInfo).PitchParam.CurrentValue = fVar7;
      pFVar6 = TSharedPtr<Audio::FMixerSourceBuffer,1>::operator->(&this->MixerSourceBuffer);
      FMixerSourceBuffer::Init(pFVar6);
      pFVar6 = TSharedPtr<Audio::FMixerSourceBuffer,1>::operator->(&this->MixerSourceBuffer);
      FMixerSourceBuffer::OnBeginGenerate(pFVar6);
      LOCK();
      this->bInitialized = (FThreadSafeBool)0x1;
      UNLOCK();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// IsReadyToInit @ 1465873e0

bool __thiscall Audio::FDecodingSoundSource::IsReadyToInit(FDecodingSoundSource *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TSharedPtr<Audio::FMixerSourceBuffer,1> *this_00;
  USoundWave *pUVar1;
  char cVar2;
  bool bVar3;
  Type TVar4;
  FMixerSourceBuffer *pFVar5;
  ICompressedAudioInfo *pIVar6;
  
  lpCriticalSection = &this->MixerSourceBufferCritSec;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  this_00 = &this->MixerSourceBuffer;
  if (((this->MixerSourceBuffer).Object != (FMixerSourceBuffer *)0x0) &&
     (this->MixerBuffer != (FMixerBuffer *)0x0)) {
    cVar2 = (**(code **)(this->MixerBuffer->_padding_ + 0x40))();
    if (cVar2 != '\0') {
      pFVar5 = TSharedPtr<Audio::FMixerSourceBuffer,1>::operator->(this_00);
      bVar3 = FMixerSourceBuffer::IsAsyncTaskInProgress(pFVar5);
      if (bVar3) {
        pFVar5 = TSharedPtr<Audio::FMixerSourceBuffer,1>::operator->(this_00);
        bVar3 = FMixerSourceBuffer::IsAsyncTaskDone(pFVar5);
        goto LAB_1465874c3;
      }
      TVar4 = FMixerBuffer::GetType(this->MixerBuffer);
      if ((1 < TVar4 - PCMRealTime) ||
         (pUVar1 = (this->SoundWave).field0_0x0.DebugPtr, pUVar1 == (USoundWave *)0x0)) {
LAB_14658748c:
        bVar3 = true;
        goto LAB_1465874c3;
      }
      if (0.0 < this->SeekTime) {
        (**(code **)(this->MixerBuffer->_padding_ + 0x28))();
      }
      else if (pUVar1->CachedRealtimeFirstBuffer != (uchar *)0x0) goto LAB_14658748c;
      pIVar6 = FMixerBuffer::GetDecompressionState(this->MixerBuffer,false);
      pFVar5 = TSharedPtr<Audio::FMixerSourceBuffer,1>::operator->(this_00);
      FMixerSourceBuffer::ReadMoreRealtimeData(pFVar5,pIVar6,0,Asynchronous);
    }
  }
  bVar3 = false;
LAB_1465874c3:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar3;
}

// PreInit @ 1465874f0

bool __thiscall Audio::FDecodingSoundSource::PreInit(FDecodingSoundSource *this,int param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  float fVar1;
  undefined1 uVar2;
  USoundWave *pUVar3;
  FMixerSourceBuffer *pFVar4;
  TSharedPtr<Audio::FMixerSourceBuffer,1> *pTVar5;
  TSharedPtr<Audio::FMixerSourceBuffer,1> *pTVar6;
  TArray<FAudioParameter,TSizedDefaultAllocator<32>_> local_78;
  TSharedPtr<Audio::FMixerSourceBuffer,1> local_68;
  FMixerSourceBufferInitArgs local_58;
  
  pUVar3 = (this->SoundWave).field0_0x0.DebugPtr;
  this->SampleRate = param_1;
  if ((pUVar3 != (USoundWave *)0x0) && (this->MixerBuffer != (FMixerBuffer *)0x0)) {
    lpCriticalSection = &this->MixerSourceBufferCritSec;
    fVar1 = this->SeekTime;
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      local_58.AudioDeviceID = this->AudioDeviceID;
      local_58.StartTime = this->SeekTime;
      local_58.Buffer = this->MixerBuffer;
      local_58.SoundWave = *(USoundWave **)&(this->SoundWave).field0_0x0;
      local_58.bForceSyncDecode = this->bForceSyncDecode;
      local_58.AudioComponentID = 0;
      local_58.InstanceID = 0;
      local_58.AudioMixerNumOutputFrames = 0;
      local_58.bIsPreviewSound = false;
      local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.ArrayNum = 0;
      local_78.ArrayMax = 0;
      local_58.SampleRate = param_1;
      local_58.LoopingMode = pUVar3->bLooping * 2;
      local_58.bIsSeeking = 0.0 < fVar1;
      pTVar5 = FMixerSourceBuffer::Create(&local_68,&local_58,&local_78);
      pTVar6 = &this->MixerSourceBuffer;
      if (pTVar6 != pTVar5) {
        pTVar6->Object = pTVar5->Object;
        pTVar5->Object = (FMixerSourceBuffer *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->MixerSourceBuffer).SharedReferenceCount,&pTVar5->SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
      DestructItems<FAudioParameter,int>
                ((FAudioParameter *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
      if ((FAudioParameter *)local_78.AllocatorInstance.Data != (FAudioParameter *)0x0) {
        FMemory::Free(local_78.AllocatorInstance.Data);
      }
      pFVar4 = pTVar6->Object;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return pFVar4 != (FMixerSourceBuffer *)0x0;
    }
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  return false;
}

// ReadFrame @ 146587810

void __thiscall Audio::FDecodingSoundSource::ReadFrame(FDecodingSoundSource *this)

{
  TSharedPtr<TArray<float,TAlignedHeapAllocator<16>_>,1> *pTVar1;
  float fVar2;
  undefined4 uVar3;
  FMixerSourceBuffer *this_00;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  TSharedPtr<TArray<float,TAlignedHeapAllocator<16>_>,1> *pTVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  bool bVar17;
  TSharedPtr<TArray<float,TAlignedHeapAllocator<16>_>,1> local_48 [2];
  
  this_00 = (this->MixerSourceBuffer).Object;
  if (this_00 == (FMixerSourceBuffer *)0x0) {
    (this->SourceInfo).bIsLastBuffer = true;
    return;
  }
  pTVar4 = (this->MixerSourceBuffer).SharedReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  iVar10 = (this->SourceInfo).CurrentFrameIndex;
  pTVar1 = &(this->SourceInfo).CurrentPCMBuffer;
  iVar11 = (this->SourceInfo).CurrentAudioChunkNumFrames;
  fVar2 = (this->SourceInfo).CurrentFrameAlpha;
  bVar7 = true;
  bVar8 = iVar11 <= iVar10 - ((int)ROUND(__real_bf000000 - (fVar2 + fVar2)) >> 1);
  bVar17 = SBORROW4(iVar10,iVar11);
  iVar10 = iVar10 - iVar11;
  do {
    bVar17 = bVar17 == iVar10 < 0;
    if (!bVar8) {
      if (bVar17) goto LAB_146587ae0;
      if ((pTVar1->Object == (TArray<float,TAlignedHeapAllocator<16>_> *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (pTVar1->Object->AllocatorInstance).Data;
      if (pFVar5 == (FScriptContainerElement *)0x0) {
LAB_146587c16:
        (this->SourceInfo).bIsLastBuffer = true;
      }
      else {
        iVar10 = (this->SourceInfo).CurrentFrameIndex;
        uVar15 = 0;
        iVar11 = (this->SourceInfo).NumSourceChannels;
        lVar16 = (longlong)((iVar10 + 1) * iVar11);
        if (bVar7) {
          if (0 < iVar11) {
            lVar14 = 0;
            do {
              uVar3 = *(undefined4 *)(pFVar5 + lVar14 + lVar16 * 4 + (iVar10 * iVar11 - lVar16) * 4)
              ;
              uVar9 = 0;
              if ((int)uVar15 < (this->SourceInfo).CurrentFrameValues.ArrayNum) {
                uVar9 = ~uVar15 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              *(undefined4 *)((this->SourceInfo).CurrentFrameValues.AllocatorInstance.Data + lVar14)
                   = uVar3;
              uVar3 = *(undefined4 *)(pFVar5 + lVar14 + lVar16 * 4);
              uVar9 = 0;
              if ((int)uVar15 < (this->SourceInfo).NextFrameValues.ArrayNum) {
                uVar9 = ~uVar15 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              uVar15 = uVar15 + 1;
              *(undefined4 *)((this->SourceInfo).NextFrameValues.AllocatorInstance.Data + lVar14) =
                   uVar3;
              lVar14 = lVar14 + 4;
            } while ((int)uVar15 < (this->SourceInfo).NumSourceChannels);
          }
        }
        else if (0 < iVar11) {
          lVar14 = 0;
          do {
            uVar3 = *(undefined4 *)(pFVar5 + lVar14 + lVar16 * 4);
            uVar9 = 0;
            if ((int)uVar15 < (this->SourceInfo).NextFrameValues.ArrayNum) {
              uVar9 = ~uVar15 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar15 = uVar15 + 1;
            *(undefined4 *)((this->SourceInfo).NextFrameValues.AllocatorInstance.Data + lVar14) =
                 uVar3;
            lVar14 = lVar14 + 4;
          } while ((int)uVar15 < (this->SourceInfo).NumSourceChannels);
        }
      }
      goto LAB_146587c1d;
    }
    if (!bVar17) {
      bVar7 = false;
      if ((pTVar1->Object == (TArray<float,TAlignedHeapAllocator<16>_> *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (pTVar1->Object->AllocatorInstance).Data;
      if (pFVar5 == (FScriptContainerElement *)0x0) {
LAB_146587c0a:
        (this->SourceInfo).bIsLastBuffer = true;
LAB_146587c1d:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        return;
      }
      iVar10 = (this->SourceInfo).NumSourceChannels;
      uVar15 = 0;
      if (0 < iVar10) {
        lVar16 = 0;
        iVar11 = (this->SourceInfo).CurrentFrameIndex;
        do {
          uVar3 = *(undefined4 *)(pFVar5 + lVar16 + (longlong)(iVar10 * iVar11) * 4);
          uVar9 = 0;
          if ((int)uVar15 < (this->SourceInfo).CurrentFrameValues.ArrayNum) {
            uVar9 = ~uVar15 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar15 = uVar15 + 1;
          *(undefined4 *)((this->SourceInfo).CurrentFrameValues.AllocatorInstance.Data + lVar16) =
               uVar3;
          lVar16 = lVar16 + 4;
        } while ((int)uVar15 < (this->SourceInfo).NumSourceChannels);
      }
      FMixerSourceBuffer::OnBufferEnd(this_00);
    }
LAB_146587ae0:
    FMixerSourceBuffer::GetNumBuffersQueued(this_00);
    iVar10 = FMixerSourceBuffer::GetNumBuffersQueued(this_00);
    if ((iVar10 < 1) || ((this->SourceInfo).NumSourceChannels < 1)) goto LAB_146587c16;
    pTVar12 = FMixerSourceBuffer::GetNextBuffer(this_00,local_48);
    if (pTVar1 != pTVar12) {
      pTVar1->Object = pTVar12->Object;
      pTVar12->Object = (TArray<float,TAlignedHeapAllocator<16>_> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->SourceInfo).CurrentPCMBuffer.SharedReferenceCount,
                 &pTVar12->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48[0].SharedReferenceCount.ReferenceController);
    if (pTVar1->Object == (TArray<float,TAlignedHeapAllocator<16>_> *)0x0) goto LAB_146587c0a;
    iVar11 = pTVar1->Object->ArrayNum / (this->SourceInfo).NumSourceChannels;
    (this->SourceInfo).CurrentAudioChunkNumFrames = iVar11;
    if (bVar7) {
      iVar13 = (this->SourceInfo).CurrentFrameIndex - iVar11;
      iVar10 = 0;
      if (0 < iVar13) {
        iVar10 = iVar13;
      }
    }
    else {
      iVar10 = -1;
    }
    (this->SourceInfo).CurrentFrameIndex = iVar10;
    bVar8 = iVar11 <= iVar10 + 1;
    bVar17 = SBORROW4(iVar10,iVar11);
    iVar10 = iVar10 - iVar11;
  } while( true );
}

// SetForceSyncDecode @ 146588150

void __thiscall
Audio::FDecodingSoundSource::SetForceSyncDecode(FDecodingSoundSource *this,bool param_1)

{
  this->bForceSyncDecode = param_1;
  return;
}

// SetPitchScale @ 146588160

void __thiscall
Audio::FDecodingSoundSource::SetPitchScale(FDecodingSoundSource *this,float param_1,uint param_2)

{
  float fVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  
  bVar2 = (this->SourceInfo).PitchParam.bIsInit;
  fVar3 = param_1 * (this->SourceInfo).BasePitchScale;
  (this->SourceInfo).PitchParam.TargetValue = fVar3;
  if ((bVar2 == false) && (param_2 != 0)) {
    fVar1 = (this->SourceInfo).PitchParam.CurrentValue;
    fVar4 = (fVar3 - fVar1) / (float)(int)param_2;
    fVar3 = fVar1;
  }
  else {
    (this->SourceInfo).PitchParam.CurrentValue = fVar3;
    fVar4 = 0.0;
    (this->SourceInfo).PitchParam.bIsInit = false;
  }
  (this->SourceInfo).PitchParam.DeltaValue = fVar4;
  (this->SourceInfo).PitchParam.StartingValue = fVar3;
  (this->SourceInfo).PitchResetFrame = (this->SourceInfo).NumFramesGenerated + param_2;
  return;
}

// SetVolumeScale @ 146588360

void __thiscall
Audio::FDecodingSoundSource::SetVolumeScale(FDecodingSoundSource *this,float param_1,uint param_2)

{
  float fVar1;
  bool bVar2;
  float fVar3;
  
  bVar2 = (this->SourceInfo).VolumeParam.bIsInit;
  (this->SourceInfo).VolumeParam.TargetValue = param_1;
  if ((bVar2 == false) && (param_2 != 0)) {
    fVar1 = (this->SourceInfo).VolumeParam.CurrentValue;
    fVar3 = (param_1 - fVar1) / (float)(int)param_2;
    param_1 = fVar1;
  }
  else {
    (this->SourceInfo).VolumeParam.CurrentValue = param_1;
    fVar3 = 0.0;
    (this->SourceInfo).VolumeParam.bIsInit = false;
  }
  (this->SourceInfo).VolumeParam.DeltaValue = fVar3;
  (this->SourceInfo).VolumeParam.StartingValue = param_1;
  (this->SourceInfo).VolumeResetFrame = (this->SourceInfo).NumFramesGenerated + param_2;
  return;
}

