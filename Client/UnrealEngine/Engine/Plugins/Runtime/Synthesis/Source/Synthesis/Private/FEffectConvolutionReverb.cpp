// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 17

// ~FEffectConvolutionReverb @ 14f0be5c0

void __thiscall
Audio::FEffectConvolutionReverb::~FEffectConvolutionReverb(FEffectConvolutionReverb *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FConvolutionReverb *pFVar4;
  longlong *plVar5;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->Params).CritSect);
  pFVar3 = (this->ConvReverbInitData).GainMatrix.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->ConvReverbInitData).Samples.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ConvReverbInitDataCriticalSection);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->VersionDataCriticalSection);
  pFVar4 = (this->QueuedReverb).Ptr;
  if (pFVar4 != (FConvolutionReverb *)0x0) {
    FConvolutionReverb::~FConvolutionReverb(pFVar4);
    ::operator_delete(pFVar4,0xd0);
  }
  pFVar4 = (this->Reverb).Ptr;
  if (pFVar4 != (FConvolutionReverb *)0x0) {
    FConvolutionReverb::~FConvolutionReverb(pFVar4);
    ::operator_delete(pFVar4,0xd0);
  }
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  return;
}

// BuildReverb @ 14f0c9ea0

void __thiscall Audio::FEffectConvolutionReverb::BuildReverb(FEffectConvolutionReverb *this)

{
  FWindowsRecursiveMutex *pFVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  FEffectConvolutionReverb *pFVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  undefined3 uVar10;
  atomic<int> aVar11;
  FAutoDeleteAsyncTask<AudioConvReverbIntrinsics::FCreateConvolutionReverbTask> *this_00;
  bool bVar12;
  FConvolutionReverbInitData local_88;
  
  pFVar1 = &this->VersionDataCriticalSection;
  if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
LAB_14f0ca104:
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
  (this->VersionData).ConvolutionID = (this->VersionData).ConvolutionID + 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
  pFVar1 = &(this->Params).CritSect;
  if (pFVar1 == (FWindowsRecursiveMutex *)0x0) goto LAB_14f0ca104;
  EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
  fVar7 = (this->Params).CurrentParams.NormalizationVolume;
  fVar8 = (this->Params).CurrentParams.RearChannelBleed;
  bVar9 = (this->Params).CurrentParams.bRearChannelFlip;
  uVar10 = *(undefined3 *)&(this->Params).CurrentParams.field_0x9;
  LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
  CreateConvolutionReverbInitData(this,&local_88);
  this_00 = ::operator_new(0xa8);
  if (this_00 ==
      (FAutoDeleteAsyncTask<AudioConvReverbIntrinsics::FCreateConvolutionReverbTask> *)0x0) {
    this_00 = (FAutoDeleteAsyncTask<AudioConvReverbIntrinsics::FCreateConvolutionReverbTask> *)0x0;
    goto LAB_14f0ca0b4;
  }
  pTVar4 = (TReferenceControllerBase<1> *)this->_padding_;
  pFVar5 = (FEffectConvolutionReverb *)this->_padding_;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
LAB_14f0c9f85:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
LAB_14f0c9f8a:
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Result.Pin().Get() == this",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x6c3,L"");
    if (bVar12) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
    aVar3 = pTVar4->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) goto LAB_14f0c9f85;
      LOCK();
      aVar11 = pTVar4->SharedReferenceCount;
      bVar12 = aVar3 == aVar11;
      if (bVar12) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar11 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar11;
    } while (!bVar12);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    if (pFVar5 != this) goto LAB_14f0c9f8a;
  }
  (this_00->Task).EffectPtr.Object = pFVar5;
  this_00->_padding_ =
       (longlong)
       &___7__FAutoDeleteAsyncTask_VFCreateConvolutionReverbTask_AudioConvReverbIntrinsics____6B_;
  this_00->_padding_ = 0;
  (this_00->Task).EffectPtr.WeakReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
  }
  (this_00->Task).InitData.InputAudioFormat.NumChannels = local_88.InputAudioFormat.NumChannels;
  (this_00->Task).InitData.OutputAudioFormat.NumChannels = local_88.OutputAudioFormat.NumChannels;
  (this_00->Task).InitData.AlgorithmSettings.bEnableHardwareAcceleration =
       local_88.AlgorithmSettings.bEnableHardwareAcceleration;
  *(undefined3 *)&(this_00->Task).InitData.AlgorithmSettings.field_0x1 =
       local_88.AlgorithmSettings._1_3_;
  (this_00->Task).InitData.AlgorithmSettings.BlockNumSamples =
       local_88.AlgorithmSettings.BlockNumSamples;
  (this_00->Task).InitData.AlgorithmSettings.NumInputChannels =
       local_88.AlgorithmSettings.NumInputChannels;
  (this_00->Task).InitData.AlgorithmSettings.NumOutputChannels =
       local_88.AlgorithmSettings.NumOutputChannels;
  (this_00->Task).InitData.AlgorithmSettings.NumImpulseResponses =
       local_88.AlgorithmSettings.NumImpulseResponses;
  (this_00->Task).InitData.AlgorithmSettings.MaxNumImpulseResponseSamples =
       local_88.AlgorithmSettings.MaxNumImpulseResponseSamples;
  (this_00->Task).InitData.ImpulseSampleRate = local_88.ImpulseSampleRate;
  (this_00->Task).InitData.TargetSampleRate = local_88.TargetSampleRate;
  (this_00->Task).InitData.Samples.AllocatorInstance.Data = local_88.Samples.AllocatorInstance.Data;
  local_88.Samples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_00->Task).InitData.Samples.ArrayNum = local_88.Samples.ArrayNum;
  (this_00->Task).InitData.Samples.ArrayMax = local_88.Samples.ArrayMax;
  local_88.Samples.ArrayNum = 0;
  local_88.Samples.ArrayMax = 0;
  (this_00->Task).InitData.NormalizationVolume = local_88.NormalizationVolume;
  (this_00->Task).InitData.bMixInputChannelFormatToImpulseResponseFormat =
       local_88.bMixInputChannelFormatToImpulseResponseFormat;
  (this_00->Task).InitData.bMixReverbOutputToOutputChannelFormat =
       local_88.bMixReverbOutputToOutputChannelFormat;
  (this_00->Task).InitData.bIsImpulseTrueStereo = local_88.bIsImpulseTrueStereo;
  (this_00->Task).InitData.GainMatrix.AllocatorInstance.Data =
       local_88.GainMatrix.AllocatorInstance.Data;
  local_88.GainMatrix.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_00->Task).InitData.GainMatrix.ArrayNum = local_88.GainMatrix.ArrayNum;
  (this_00->Task).InitData.GainMatrix.ArrayMax = local_88.GainMatrix.ArrayMax;
  local_88.GainMatrix.ArrayNum = 0;
  local_88.GainMatrix.ArrayMax = 0;
  (this_00->Task).Settings.NormalizationVolume = fVar7;
  (this_00->Task).Settings.RearChannelBleed = fVar8;
  (this_00->Task).Settings.bRearChannelFlip = bVar9;
  *(undefined3 *)&(this_00->Task).Settings.field_0x9 = uVar10;
  (this_00->Task).VersionData.ConvolutionID = (this->VersionData).ConvolutionID;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar4->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
LAB_14f0ca0b4:
  FAutoDeleteAsyncTask<AudioConvReverbIntrinsics::FCreateConvolutionReverbTask>::StartBackgroundTask
            (this_00,GThreadPool,Normal);
  if (local_88.GainMatrix.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.GainMatrix.AllocatorInstance.Data);
  }
  if (local_88.Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Samples.AllocatorInstance.Data);
  }
  return;
}

// CreateConvolutionReverbInitData @ 14f0cf670

/* WARNING: Enum "Type": Some values do not have unique names */

FConvolutionReverbInitData * __thiscall
Audio::FEffectConvolutionReverb::CreateConvolutionReverbInitData
          (FEffectConvolutionReverb *this,FConvolutionReverbInitData *__return_storage_ptr__)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<Audio::FConvolutionReverbGainEntry,TSizedDefaultAllocator<32>_> *pTVar3;
  float fVar4;
  bool bVar5;
  TAtomic<int> TVar6;
  TAtomic<int> TVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  undefined3 uVar10;
  int iVar11;
  int iVar12;
  wchar_t *pwVar13;
  longlong lVar14;
  int iVar15;
  float fVar16;
  
  lpCriticalSection = &this->ConvReverbInitDataCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  TVar6 = this->NumInputChannels;
  TVar7 = this->NumOutputChannels;
  bVar5 = (this->ConvReverbInitData).bIsImpulseTrueStereo;
  (this->ConvReverbInitData).InputAudioFormat.NumChannels = (int)TVar6;
  (this->ConvReverbInitData).OutputAudioFormat.NumChannels = (int)TVar7;
  if ((bVar5 == false) || ((this->ConvReverbInitData).AlgorithmSettings.NumImpulseResponses != 2)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  iVar11 = 2;
  if ((this->ConvReverbInitData).bMixInputChannelFormatToImpulseResponseFormat == false) {
    (this->ConvReverbInitData).AlgorithmSettings.NumInputChannels = (int)TVar6;
  }
  else if (bVar9) {
    (this->ConvReverbInitData).AlgorithmSettings.NumInputChannels = 1;
  }
  else {
    iVar15 = 2;
    if (bVar5 == false) {
      iVar15 = (this->ConvReverbInitData).AlgorithmSettings.NumImpulseResponses;
    }
    (this->ConvReverbInitData).AlgorithmSettings.NumInputChannels = iVar15;
  }
  if ((!bVar9) &&
     (iVar11 = (this->ConvReverbInitData).AlgorithmSettings.NumImpulseResponses,
     (this->ConvReverbInitData).bIsImpulseTrueStereo != false)) {
    iVar11 = iVar11 / 2;
  }
  (this->ConvReverbInitData).AlgorithmSettings.NumOutputChannels = iVar11;
  (this->ConvReverbInitData).AlgorithmSettings.MaxNumImpulseResponseSamples = 0;
  iVar11 = (this->ConvReverbInitData).AlgorithmSettings.NumImpulseResponses;
  if (0 < iVar11) {
    fVar4 = (this->ConvReverbInitData).ImpulseSampleRate;
    fVar16 = __real_3f800000;
    if (0.0 < fVar4) {
      fVar16 = (this->ConvReverbInitData).TargetSampleRate / fVar4;
    }
    fVar16 = (float)(this->ConvReverbInitData).Samples.ArrayNum * fVar16;
    (this->ConvReverbInitData).AlgorithmSettings.MaxNumImpulseResponseSamples =
         0x100 - ((int)ROUND(__real_bf000000 - (fVar16 + fVar16) / (float)iVar11) >> 1);
  }
  pTVar3 = &(this->ConvReverbInitData).GainMatrix;
  iVar11 = (this->ConvReverbInitData).GainMatrix.ArrayMax;
  piVar2 = &(this->ConvReverbInitData).GainMatrix.ArrayMax;
  (this->ConvReverbInitData).GainMatrix.ArrayNum = 0;
  if (iVar11 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&pTVar3->AllocatorInstance,0,piVar2);
  }
  if (TVar6 == (TAtomic<int>)0x1) {
    iVar11 = (this->ConvReverbInitData).GainMatrix.ArrayNum;
    if (iVar11 == *piVar2) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x410,&pTVar3->AllocatorInstance,piVar2);
    }
    (this->ConvReverbInitData).GainMatrix.ArrayNum = iVar11 + 1;
    lVar14 = (longlong)iVar11;
    pFVar8 = (pTVar3->AllocatorInstance).Data;
    *(undefined8 *)(pFVar8 + lVar14 * 0x10) = 0;
    *(undefined4 *)(pFVar8 + lVar14 * 0x10 + 8) = 0;
    *(undefined4 *)(pFVar8 + lVar14 * 0x10 + 0xc) = 0x3f800000;
  }
  else if (bVar9) {
    iVar11 = (this->ConvReverbInitData).GainMatrix.ArrayNum;
    if (iVar11 == *piVar2) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x410,&pTVar3->AllocatorInstance,piVar2);
    }
    (this->ConvReverbInitData).GainMatrix.ArrayNum = iVar11 + 1;
    lVar14 = (longlong)iVar11;
    pFVar8 = (pTVar3->AllocatorInstance).Data;
    *(undefined8 *)(pFVar8 + lVar14 * 0x10) = 0;
    *(undefined4 *)(pFVar8 + lVar14 * 0x10 + 8) = 0;
    *(undefined4 *)(pFVar8 + lVar14 * 0x10 + 0xc) = 0x3f800000;
    iVar11 = (this->ConvReverbInitData).GainMatrix.ArrayNum;
    if (iVar11 == *piVar2) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x410,&pTVar3->AllocatorInstance,piVar2);
    }
    (this->ConvReverbInitData).GainMatrix.ArrayNum = iVar11 + 1;
    lVar14 = (longlong)iVar11;
    pFVar8 = (pTVar3->AllocatorInstance).Data;
    *(undefined4 *)(pFVar8 + lVar14 * 0x10) = 0;
    *(undefined4 *)(pFVar8 + lVar14 * 0x10 + 4) = 1;
    *(undefined4 *)(pFVar8 + lVar14 * 0x10 + 8) = 1;
    *(undefined4 *)(pFVar8 + lVar14 * 0x10 + 0xc) = 0x3f800000;
  }
  else {
    iVar11 = (this->ConvReverbInitData).AlgorithmSettings.NumImpulseResponses;
    if ((this->ConvReverbInitData).bIsImpulseTrueStereo == false) {
      iVar15 = (this->ConvReverbInitData).AlgorithmSettings.NumOutputChannels;
      iVar12 = (this->ConvReverbInitData).AlgorithmSettings.NumInputChannels;
      if (iVar12 < iVar15) {
        iVar15 = iVar12;
      }
      if (iVar15 < iVar11) {
        iVar11 = iVar15;
      }
      iVar15 = 0;
      if (0 < iVar11) {
        do {
          iVar12 = (this->ConvReverbInitData).GainMatrix.ArrayNum;
          if (iVar12 == (this->ConvReverbInitData).GainMatrix.ArrayMax) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x410,&pTVar3->AllocatorInstance,
                                &(this->ConvReverbInitData).GainMatrix.ArrayMax);
          }
          (this->ConvReverbInitData).GainMatrix.ArrayNum = iVar12 + 1;
          lVar14 = (longlong)iVar12;
          pFVar8 = (pTVar3->AllocatorInstance).Data;
          *(int *)(pFVar8 + lVar14 * 0x10) = iVar15;
          *(int *)(pFVar8 + lVar14 * 0x10 + 4) = iVar15;
          *(int *)(pFVar8 + lVar14 * 0x10 + 8) = iVar15;
          iVar15 = iVar15 + 1;
          *(undefined4 *)(pFVar8 + lVar14 * 0x10 + 0xc) = 0x3f800000;
        } while (iVar15 < iVar11);
      }
    }
    else {
      iVar15 = 0;
      iVar11 = iVar11 / 2;
      if (0 < iVar11) {
        do {
          iVar12 = (this->ConvReverbInitData).GainMatrix.ArrayNum;
          if (iVar12 == (this->ConvReverbInitData).GainMatrix.ArrayMax) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x410,&pTVar3->AllocatorInstance,
                                &(this->ConvReverbInitData).GainMatrix.ArrayMax);
          }
          (this->ConvReverbInitData).GainMatrix.ArrayNum = iVar12 + 1;
          lVar14 = (longlong)iVar12;
          pFVar8 = (pTVar3->AllocatorInstance).Data;
          *(undefined4 *)(pFVar8 + lVar14 * 0x10) = 0;
          *(int *)(pFVar8 + lVar14 * 0x10 + 4) = iVar15;
          *(int *)(pFVar8 + lVar14 * 0x10 + 8) = iVar15;
          *(undefined4 *)(pFVar8 + lVar14 * 0x10 + 0xc) = 0x3f800000;
          iVar12 = (this->ConvReverbInitData).GainMatrix.ArrayNum;
          if (iVar12 == (this->ConvReverbInitData).GainMatrix.ArrayMax) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x410,&pTVar3->AllocatorInstance,
                                &(this->ConvReverbInitData).GainMatrix.ArrayMax);
          }
          lVar14 = (longlong)iVar12;
          (this->ConvReverbInitData).GainMatrix.ArrayNum = iVar12 + 1;
          iVar12 = iVar15 + iVar11;
          pFVar8 = (pTVar3->AllocatorInstance).Data;
          *(int *)(pFVar8 + lVar14 * 0x10 + 8) = iVar15;
          iVar15 = iVar15 + 1;
          *(undefined4 *)(pFVar8 + lVar14 * 0x10) = 1;
          *(int *)(pFVar8 + lVar14 * 0x10 + 4) = iVar12;
          *(undefined4 *)(pFVar8 + lVar14 * 0x10 + 0xc) = 0x3f800000;
        } while (iVar15 < iVar11);
      }
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pwVar13 = FCommandLine::Get();
    bDisableConvolutionHardareAcceleration = FParse::Param(pwVar13,L"DisableHardwareConvolution");
    _Init_thread_footer(&::_TSS0);
  }
  if (((bDisableConvolutionHardareAcceleration != false) || (bDisabledHardwareConvolution != 0)) &&
     ((this->ConvReverbInitData).AlgorithmSettings.bEnableHardwareAcceleration != false)) {
    if (3 < (byte)LogSynthesis._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSynthesis);
    }
    (this->ConvReverbInitData).AlgorithmSettings.bEnableHardwareAcceleration = false;
  }
  pTVar1 = &__return_storage_ptr__->Samples;
  (__return_storage_ptr__->InputAudioFormat).NumChannels =
       (this->ConvReverbInitData).InputAudioFormat.NumChannels;
  (__return_storage_ptr__->OutputAudioFormat).NumChannels =
       (this->ConvReverbInitData).OutputAudioFormat.NumChannels;
  uVar10 = *(undefined3 *)&(this->ConvReverbInitData).AlgorithmSettings.field_0x1;
  iVar11 = (this->ConvReverbInitData).AlgorithmSettings.BlockNumSamples;
  iVar15 = (this->ConvReverbInitData).AlgorithmSettings.NumInputChannels;
  iVar12 = (this->ConvReverbInitData).AlgorithmSettings.NumOutputChannels;
  (__return_storage_ptr__->AlgorithmSettings).bEnableHardwareAcceleration =
       (this->ConvReverbInitData).AlgorithmSettings.bEnableHardwareAcceleration;
  *(undefined3 *)&(__return_storage_ptr__->AlgorithmSettings).field_0x1 = uVar10;
  (__return_storage_ptr__->AlgorithmSettings).BlockNumSamples = iVar11;
  (__return_storage_ptr__->AlgorithmSettings).NumInputChannels = iVar15;
  (__return_storage_ptr__->AlgorithmSettings).NumOutputChannels = iVar12;
  iVar11 = (this->ConvReverbInitData).AlgorithmSettings.MaxNumImpulseResponseSamples;
  (__return_storage_ptr__->AlgorithmSettings).NumImpulseResponses =
       (this->ConvReverbInitData).AlgorithmSettings.NumImpulseResponses;
  (__return_storage_ptr__->AlgorithmSettings).MaxNumImpulseResponseSamples = iVar11;
  __return_storage_ptr__->ImpulseSampleRate = (this->ConvReverbInitData).ImpulseSampleRate;
  __return_storage_ptr__->TargetSampleRate = (this->ConvReverbInitData).TargetSampleRate;
  piVar2 = &(__return_storage_ptr__->Samples).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar11 = (this->ConvReverbInitData).Samples.ArrayNum;
  pFVar8 = (this->ConvReverbInitData).Samples.AllocatorInstance.Data;
  (__return_storage_ptr__->Samples).ArrayNum = iVar11;
  if (iVar11 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar11,0,&pTVar1->AllocatorInstance,iVar11,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar8,(longlong)iVar11 << 2);
  }
  pTVar3 = &__return_storage_ptr__->GainMatrix;
  __return_storage_ptr__->NormalizationVolume = (this->ConvReverbInitData).NormalizationVolume;
  __return_storage_ptr__->bMixInputChannelFormatToImpulseResponseFormat =
       (this->ConvReverbInitData).bMixInputChannelFormatToImpulseResponseFormat;
  __return_storage_ptr__->bMixReverbOutputToOutputChannelFormat =
       (this->ConvReverbInitData).bMixReverbOutputToOutputChannelFormat;
  __return_storage_ptr__->bIsImpulseTrueStereo = (this->ConvReverbInitData).bIsImpulseTrueStereo;
  piVar2 = &(__return_storage_ptr__->GainMatrix).ArrayMax;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar11 = (this->ConvReverbInitData).GainMatrix.ArrayNum;
  pFVar8 = (this->ConvReverbInitData).GainMatrix.AllocatorInstance.Data;
  (__return_storage_ptr__->GainMatrix).ArrayNum = iVar11;
  if (iVar11 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar11,0,&pTVar3->AllocatorInstance,iVar11,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar8,(longlong)iVar11 << 4);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return __return_storage_ptr__;
}

// DequeueNewReverb @ 14f0d4200

void __thiscall Audio::FEffectConvolutionReverb::DequeueNewReverb(FEffectConvolutionReverb *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->VersionDataCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (((this->QueuedReverb).Ptr != (FConvolutionReverb *)0x0) &&
       ((this->VersionData).ConvolutionID == (this->QueuedVersionData).ConvolutionID)) {
      TUniquePtr<Audio::FConvolutionReverb,TDefaultDelete<Audio::FConvolutionReverb>_>::operator=
                (&this->Reverb,&this->QueuedReverb);
    }
                    /* WARNING: Could not recover jumptable at 0x00014f0d4248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// EnqueueNewReverb @ 14f0d69d0

void __thiscall
Audio::FEffectConvolutionReverb::EnqueueNewReverb
          (FEffectConvolutionReverb *this,
          TUniquePtr<Audio::FConvolutionReverb,TDefaultDelete<Audio::FConvolutionReverb>_> param_1,
          FVersionData *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TUniquePtr<Audio::FConvolutionReverb,TDefaultDelete<Audio::FConvolutionReverb>_> *pTVar1;
  FConvolutionReverb *pFVar2;
  
  lpCriticalSection = &this->VersionDataCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar1 = &this->QueuedReverb;
    (this->QueuedVersionData).ConvolutionID = param_2->ConvolutionID;
    if ((FConvolutionReverb *)pTVar1 != param_1.Ptr) {
      pFVar2 = pTVar1->Ptr;
      pTVar1->Ptr = *(FConvolutionReverb **)&(param_1.Ptr)->Settings;
      ((param_1.Ptr)->Settings).NormalizationVolume = 0.0;
      ((param_1.Ptr)->Settings).RearChannelBleed = 0.0;
      if (pFVar2 != (FConvolutionReverb *)0x0) {
        FConvolutionReverb::~FConvolutionReverb(pFVar2);
        ::operator_delete(pFVar2,0xd0);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar2 = *(FConvolutionReverb **)&(param_1.Ptr)->Settings;
    if (pFVar2 != (FConvolutionReverb *)0x0) {
      FConvolutionReverb::~FConvolutionReverb(pFVar2);
      ::operator_delete(pFVar2,0xd0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Init @ 14f0df860

void __thiscall Audio::FEffectConvolutionReverb::Init(FEffectConvolutionReverb *this)

{
  TUniquePtr<Audio::FConvolutionReverb,TDefaultDelete<Audio::FConvolutionReverb>_> *pTVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  FConvolutionReverb *pFVar2;
  TUniquePtr<Audio::FConvolutionReverb,TDefaultDelete<Audio::FConvolutionReverb>_> TVar3;
  FConvolutionReverbInitData local_58;
  
  lpCriticalSection = &(this->Params).CritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    CreateConvolutionReverbInitData(this,&local_58);
    TVar3 = FConvolutionReverb::CreateConvolutionReverb
                      ((FConvolutionReverbInitData *)&stack0x00000008,
                       (FConvolutionReverbSettings *)&local_58);
    pTVar1 = &this->Reverb;
    if ((FConvolutionReverb *)pTVar1 != TVar3.Ptr) {
      pFVar2 = pTVar1->Ptr;
      pTVar1->Ptr = *(FConvolutionReverb **)&(TVar3.Ptr)->Settings;
      ((TVar3.Ptr)->Settings).NormalizationVolume = 0.0;
      ((TVar3.Ptr)->Settings).RearChannelBleed = 0.0;
      if (pFVar2 != (FConvolutionReverb *)0x0) {
        FConvolutionReverb::~FConvolutionReverb(pFVar2);
        ::operator_delete(pFVar2,0xd0);
      }
    }
    pFVar2 = *(FConvolutionReverb **)&(TVar3.Ptr)->Settings;
    if (pFVar2 != (FConvolutionReverb *)0x0) {
      FConvolutionReverb::~FConvolutionReverb(pFVar2);
      ::operator_delete(pFVar2,0xd0);
    }
    if (local_58.GainMatrix.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.GainMatrix.AllocatorInstance.Data);
    }
    if (local_58.Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Samples.AllocatorInstance.Data);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsChannelCountUpToDate @ 14f0e78c0

bool __thiscall
Audio::FEffectConvolutionReverb::IsChannelCountUpToDate
          (FEffectConvolutionReverb *this,int param_1,int param_2)

{
  FConvolutionReverb *pFVar1;
  IConvolutionAlgorithm *pIVar2;
  IChannelFormatConverter *pIVar3;
  bool bVar4;
  int iVar5;
  FOutputFormat FVar6;
  int *piVar7;
  
  pFVar1 = (this->Reverb).Ptr;
  if (pFVar1 != (FConvolutionReverb *)0x0) {
    pIVar2 = (pFVar1->ConvolutionAlgorithm).Ptr;
    if (pIVar2 == (IConvolutionAlgorithm *)0x0) {
      iVar5 = 0;
    }
    else {
      pIVar3 = (pFVar1->InputChannelFormatConverter).Ptr;
      if (pIVar3 == (IChannelFormatConverter *)0x0) {
        iVar5 = (**(code **)((longlong)*pIVar2 + 0x10))();
      }
      else {
        piVar7 = (int *)(**(code **)((longlong)*pIVar3 + 8))(pIVar3);
        iVar5 = *piVar7;
      }
    }
    pFVar1 = (this->Reverb).Ptr;
    pIVar2 = (pFVar1->ConvolutionAlgorithm).Ptr;
    FVar6.NumChannels = 0;
    if (pIVar2 != (IConvolutionAlgorithm *)0x0) {
      if (pFVar1->bIsConvertingOutputChannelFormat == false) {
        FVar6.NumChannels = (**(code **)((longlong)*pIVar2 + 0x18))(pIVar2);
      }
      else {
        pIVar3 = (pFVar1->OutputChannelFormatConverter).BaseConverter;
        FVar6.NumChannels =
             FConvolutionReverb::FChannelFormatConverterWrapper::DefaultOutputFormat.NumChannels;
        if (pIVar3 != (IChannelFormatConverter *)0x0) {
          piVar7 = (int *)(**(code **)((longlong)*pIVar3 + 0x10))();
          FVar6.NumChannels = *piVar7;
        }
      }
    }
    if ((iVar5 == param_1) && (FVar6.NumChannels == param_2)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    return bVar4;
  }
  return false;
}

// IsVersionCurrent @ 14f0e7be0

bool __thiscall
Audio::FEffectConvolutionReverb::IsVersionCurrent
          (FEffectConvolutionReverb *this,FVersionData *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  int iVar2;
  
  lpCriticalSection = &this->VersionDataCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar1 = (this->VersionData).ConvolutionID;
    iVar2 = param_1->ConvolutionID;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return iVar2 == iVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ProcessAudio @ 14f0f1d00

void __thiscall
Audio::FEffectConvolutionReverb::ProcessAudio
          (FEffectConvolutionReverb *this,int param_1,float *param_2,int param_3,float *param_4,
          int param_5)

{
  FWindowsRecursiveMutex *pFVar1;
  FConvolutionReverb *this_00;
  float fVar2;
  float fVar3;
  undefined3 uVar4;
  bool bVar5;
  
  pFVar1 = &this->VersionDataCriticalSection;
  if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
LAB_14f0f1e7b:
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
  if (((this->QueuedReverb).Ptr != (FConvolutionReverb *)0x0) &&
     ((this->VersionData).ConvolutionID == (this->QueuedVersionData).ConvolutionID)) {
    TUniquePtr<Audio::FConvolutionReverb,TDefaultDelete<Audio::FConvolutionReverb>_>::operator=
              (&this->Reverb,&this->QueuedReverb);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
  if (this->bBypass == false) {
    if (((this->Reverb).Ptr != (FConvolutionReverb *)0x0) &&
       (bVar5 = IsChannelCountUpToDate(this,param_1,param_3), bVar5)) {
      if ((this->Reverb).Ptr != (FConvolutionReverb *)0x0) {
        pFVar1 = &(this->Params).CritSect;
        if (pFVar1 == (FWindowsRecursiveMutex *)0x0) goto LAB_14f0f1e7b;
        EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
        if ((this->Params).bChanged == false) {
          LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
        }
        else {
          fVar2 = (this->Params).CurrentParams.NormalizationVolume;
          fVar3 = (this->Params).CurrentParams.RearChannelBleed;
          bVar5 = (this->Params).CurrentParams.bRearChannelFlip;
          uVar4 = *(undefined3 *)&(this->Params).CurrentParams.field_0x9;
          (this->Params).bChanged = false;
          LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
          this_00 = (this->Reverb).Ptr;
          (this_00->Settings).NormalizationVolume = fVar2;
          (this_00->Settings).RearChannelBleed = fVar3;
          (this_00->Settings).bRearChannelFlip = bVar5;
          *(undefined3 *)&(this_00->Settings).field_0x9 = uVar4;
          FConvolutionReverb::Update(this_00,true);
        }
      }
      FConvolutionReverb::ProcessAudio((this->Reverb).Ptr,param_1,param_2,param_3,param_4,param_5);
      return;
    }
    if (this->bBypass == false) {
      if (param_5 < 1) {
        return;
      }
      memset(param_4,0,(longlong)(param_3 * param_5) << 2);
      return;
    }
  }
  memcpy(param_4,param_2,(longlong)(param_3 * param_5) << 2);
  return;
}

// SetBypass @ 14f0f9220

void __thiscall
Audio::FEffectConvolutionReverb::SetBypass(FEffectConvolutionReverb *this,bool param_1)

{
  this->bBypass = param_1;
  return;
}

// SetInitData @ 14f0fccd0

void __thiscall
Audio::FEffectConvolutionReverb::SetInitData
          (FEffectConvolutionReverb *this,FConvolutionReverbInitData *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  TArray<Audio::FConvolutionReverbGainEntry,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  undefined3 uVar5;
  int iVar6;
  
  lpCriticalSection = &this->ConvReverbInitDataCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  (this->ConvReverbInitData).InputAudioFormat.NumChannels = (param_1->InputAudioFormat).NumChannels;
  (this->ConvReverbInitData).OutputAudioFormat.NumChannels =
       (param_1->OutputAudioFormat).NumChannels;
  uVar5 = *(undefined3 *)&(param_1->AlgorithmSettings).field_0x1;
  iVar3 = (param_1->AlgorithmSettings).BlockNumSamples;
  iVar4 = (param_1->AlgorithmSettings).NumInputChannels;
  iVar6 = (param_1->AlgorithmSettings).NumOutputChannels;
  (this->ConvReverbInitData).AlgorithmSettings.bEnableHardwareAcceleration =
       (param_1->AlgorithmSettings).bEnableHardwareAcceleration;
  *(undefined3 *)&(this->ConvReverbInitData).AlgorithmSettings.field_0x1 = uVar5;
  (this->ConvReverbInitData).AlgorithmSettings.BlockNumSamples = iVar3;
  (this->ConvReverbInitData).AlgorithmSettings.NumInputChannels = iVar4;
  (this->ConvReverbInitData).AlgorithmSettings.NumOutputChannels = iVar6;
  iVar3 = (param_1->AlgorithmSettings).MaxNumImpulseResponseSamples;
  (this->ConvReverbInitData).AlgorithmSettings.NumImpulseResponses =
       (param_1->AlgorithmSettings).NumImpulseResponses;
  (this->ConvReverbInitData).AlgorithmSettings.MaxNumImpulseResponseSamples = iVar3;
  (this->ConvReverbInitData).ImpulseSampleRate = param_1->ImpulseSampleRate;
  (this->ConvReverbInitData).TargetSampleRate = param_1->TargetSampleRate;
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            (&(this->ConvReverbInitData).Samples,&param_1->Samples);
  (this->ConvReverbInitData).NormalizationVolume = param_1->NormalizationVolume;
  pTVar2 = &(this->ConvReverbInitData).GainMatrix;
  (this->ConvReverbInitData).bMixInputChannelFormatToImpulseResponseFormat =
       param_1->bMixInputChannelFormatToImpulseResponseFormat;
  (this->ConvReverbInitData).bMixReverbOutputToOutputChannelFormat =
       param_1->bMixReverbOutputToOutputChannelFormat;
  (this->ConvReverbInitData).bIsImpulseTrueStereo = param_1->bIsImpulseTrueStereo;
  if (pTVar2 != &param_1->GainMatrix) {
    iVar3 = (param_1->GainMatrix).ArrayNum;
    piVar1 = &(this->ConvReverbInitData).GainMatrix.ArrayMax;
    iVar4 = *piVar1;
    _Src = (param_1->GainMatrix).AllocatorInstance.Data;
    (this->ConvReverbInitData).GainMatrix.ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar4 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,iVar3,iVar4,&pTVar2->AllocatorInstance,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar3 << 4);
      }
    }
  }
  (this->ConvReverbInitData).TargetSampleRate = this->SampleRate;
                    /* WARNING: Could not recover jumptable at 0x00014f0fcdfd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// SetReverb @ 14f100b30

void __thiscall
Audio::FEffectConvolutionReverb::SetReverb
          (FEffectConvolutionReverb *this,
          TUniquePtr<Audio::FConvolutionReverb,TDefaultDelete<Audio::FConvolutionReverb>_> param_1)

{
  FConvolutionReverb *pFVar1;
  TUniquePtr<Audio::FConvolutionReverb,TDefaultDelete<Audio::FConvolutionReverb>_> *pTVar2;
  
  pTVar2 = &this->Reverb;
  if ((FConvolutionReverb *)pTVar2 != param_1.Ptr) {
    pFVar1 = pTVar2->Ptr;
    pTVar2->Ptr = *(FConvolutionReverb **)&(param_1.Ptr)->Settings;
    ((param_1.Ptr)->Settings).NormalizationVolume = 0.0;
    ((param_1.Ptr)->Settings).RearChannelBleed = 0.0;
    if (pFVar1 != (FConvolutionReverb *)0x0) {
      FConvolutionReverb::~FConvolutionReverb(pFVar1);
      ::operator_delete(pFVar1,0xd0);
    }
  }
  pFVar1 = *(FConvolutionReverb **)&(param_1.Ptr)->Settings;
  if (pFVar1 == (FConvolutionReverb *)0x0) {
    return;
  }
  FConvolutionReverb::~FConvolutionReverb(pFVar1);
  ::operator_delete(pFVar1,0xd0);
  return;
}

// SetSampleRate @ 14f100bb0

void __thiscall
Audio::FEffectConvolutionReverb::SetSampleRate(FEffectConvolutionReverb *this,float param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->ConvReverbInitDataCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this->SampleRate = param_1;
    (this->ConvReverbInitData).TargetSampleRate = param_1;
                    /* WARNING: Could not recover jumptable at 0x00014f100bf9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetSettings @ 14f100ec0

void __thiscall
Audio::FEffectConvolutionReverb::SetSettings
          (FEffectConvolutionReverb *this,FConvolutionReverbSettings *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FConvolutionReverb *this_00;
  float fVar1;
  undefined3 uVar2;
  
  lpCriticalSection = &(this->Params).CritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (this->Params).bChanged = true;
    fVar1 = param_1->RearChannelBleed;
    (this->Params).CurrentParams.NormalizationVolume = param_1->NormalizationVolume;
    (this->Params).CurrentParams.RearChannelBleed = fVar1;
    uVar2 = *(undefined3 *)&param_1->field_0x9;
    (this->Params).CurrentParams.bRearChannelFlip = param_1->bRearChannelFlip;
    *(undefined3 *)&(this->Params).CurrentParams.field_0x9 = uVar2;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this_00 = (this->Reverb).Ptr;
    if (this_00 != (FConvolutionReverb *)0x0) {
      fVar1 = param_1->RearChannelBleed;
      (this_00->Settings).NormalizationVolume = param_1->NormalizationVolume;
      (this_00->Settings).RearChannelBleed = fVar1;
      uVar2 = *(undefined3 *)&param_1->field_0x9;
      (this_00->Settings).bRearChannelFlip = param_1->bRearChannelFlip;
      *(undefined3 *)&(this_00->Settings).field_0x9 = uVar2;
      FConvolutionReverb::Update(this_00,true);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// UpdateChannelCount @ 14f106980

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FEffectConvolutionReverb::UpdateChannelCount
          (FEffectConvolutionReverb *this,int param_1,int param_2)

{
  FConvolutionReverb *pFVar1;
  IConvolutionAlgorithm *pIVar2;
  IChannelFormatConverter *pIVar3;
  bool bVar4;
  bool bVar5;
  
  pFVar1 = (this->Reverb).Ptr;
  if (pFVar1 != (FConvolutionReverb *)0x0) {
    pIVar2 = (pFVar1->ConvolutionAlgorithm).Ptr;
    if (pIVar2 != (IConvolutionAlgorithm *)0x0) {
      pIVar3 = (pFVar1->InputChannelFormatConverter).Ptr;
      if (pIVar3 == (IChannelFormatConverter *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))();
      }
      else {
        (**(code **)((longlong)*pIVar3 + 8))(pIVar3);
      }
    }
    pFVar1 = (this->Reverb).Ptr;
    pIVar2 = (pFVar1->ConvolutionAlgorithm).Ptr;
    if (pIVar2 != (IConvolutionAlgorithm *)0x0) {
      if (pFVar1->bIsConvertingOutputChannelFormat == false) {
        (**(code **)((longlong)*pIVar2 + 0x18))(pIVar2);
      }
      else {
        pIVar3 = (pFVar1->OutputChannelFormatConverter).BaseConverter;
        if (pIVar3 != (IChannelFormatConverter *)0x0) {
          (**(code **)((longlong)*pIVar3 + 0x10))();
        }
      }
    }
  }
  bVar5 = IsChannelCountUpToDate(this,param_1,param_2);
  if ((param_1 < 1) || (param_2 < 1)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (((!bVar5) && (bVar4)) &&
     ((this->NumInputChannels != (TAtomic<int>)param_1 ||
      (this->NumOutputChannels != (TAtomic<int>)param_2)))) {
    if (4 < (byte)LogSynthesis._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSynthesis);
    }
    LOCK();
    this->NumInputChannels = (TAtomic<int>)param_1;
    UNLOCK();
    LOCK();
    this->NumOutputChannels = (TAtomic<int>)param_2;
    UNLOCK();
    BuildReverb(this);
  }
  return;
}

// UpdateParameters @ 14f108ff0

void __thiscall Audio::FEffectConvolutionReverb::UpdateParameters(FEffectConvolutionReverb *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FConvolutionReverb *this_00;
  float fVar1;
  float fVar2;
  bool bVar3;
  undefined3 uVar4;
  
  if ((this->Reverb).Ptr != (FConvolutionReverb *)0x0) {
    lpCriticalSection = &(this->Params).CritSect;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((this->Params).bChanged != false) {
      fVar1 = (this->Params).CurrentParams.NormalizationVolume;
      fVar2 = (this->Params).CurrentParams.RearChannelBleed;
      bVar3 = (this->Params).CurrentParams.bRearChannelFlip;
      uVar4 = *(undefined3 *)&(this->Params).CurrentParams.field_0x9;
      (this->Params).bChanged = false;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      this_00 = (this->Reverb).Ptr;
      (this_00->Settings).NormalizationVolume = fVar1;
      (this_00->Settings).RearChannelBleed = fVar2;
      (this_00->Settings).bRearChannelFlip = bVar3;
      *(undefined3 *)&(this_00->Settings).field_0x9 = uVar4;
      FConvolutionReverb::Update(this_00,true);
      return;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// UpdateVersion @ 14f109980

FVersionData __thiscall
Audio::FEffectConvolutionReverb::UpdateVersion(FEffectConvolutionReverb *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *in_RDX;
  
  lpCriticalSection = &this->VersionDataCriticalSection;
  *in_RDX = 0;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (this->VersionData).ConvolutionID = (this->VersionData).ConvolutionID + 1;
    *in_RDX = (this->VersionData).ConvolutionID;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return (FVersionData)(int)in_RDX;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

