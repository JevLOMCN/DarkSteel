// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesiaCore
// Functions: 4

// FAutoCorrelationPitchDetector @ 14d7f4b10

/* WARNING: Enum "Type": Some values do not have unique names */

FAutoCorrelationPitchDetector * __thiscall
Audio::FAutoCorrelationPitchDetector::FAutoCorrelationPitchDetector
          (FAutoCorrelationPitchDetector *this,FAutoCorrelationPitchDetectorSettings *param_1,
          float param_2)

{
  int *piVar1;
  TUniquePtr<Audio::FBlockCorrelator,TDefaultDelete<Audio::FBlockCorrelator>_> *pTVar2;
  TUniquePtr<Audio::FPeakPicker,TDefaultDelete<Audio::FPeakPicker>_> *pTVar3;
  float fVar4;
  FPeakPicker *pFVar5;
  FBlockCorrelator *pFVar6;
  FScriptContainerElement *pFVar7;
  IFFTAlgorithm *pIVar8;
  code *pcVar9;
  float fVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  FAutoCorrelationPitchDetector *pFVar15;
  FPeakPicker *pFVar16;
  FBlockCorrelator *pFVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  FBlockCorrelatorSettings local_res8;
  int *local_res10;
  TDefaultDelete<Audio::FBlockCorrelator> local_d8 [8];
  undefined8 local_d0;
  TSlidingBuffer<float> local_c8 [4];
  
  this->_padding_ = (longlong)&___7FAutoCorrelationPitchDetector_Audio__6B_;
  fVar4 = param_1->AnalysisHopSeconds;
  fVar21 = param_1->MinimumFrequency;
  fVar20 = param_1->MaximumFrequency;
  fVar22 = param_1->Sensitivity;
  this->MinAutoCorrBin = 0;
  this->MaxAutoCorrBin = 0;
  this->SampleRate = param_2;
  (this->Settings).AnalysisHopSeconds = fVar4;
  (this->Settings).MinimumFrequency = fVar21;
  (this->Settings).MaximumFrequency = fVar20;
  (this->Settings).Sensitivity = fVar22;
  this->WindowCounter = 0;
  (this->SlidingBuffer).NumHopSamples = 1;
  (this->SlidingBuffer).StorageBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SlidingBuffer).StorageBuffer.ArrayNum = 0;
  (this->SlidingBuffer).StorageBuffer.ArrayMax = 0;
  (this->SlidingBuffer).NumWindowSamples = 1;
  (this->SlidingBuffer).NumUnderflowSamples = 0;
  if (((this->SlidingBuffer).NumHopSamples < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumHopSamples >= 1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\SlidingWindow.h"
                          ,0x28,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    pFVar15 = (FAutoCorrelationPitchDetector *)(*pcVar9)();
    return pFVar15;
  }
  fVar4 = __real_3f800000;
  piVar1 = &(this->WindowBuffer).ArrayNum;
  (this->WindowBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_res10 = &(this->WindowBuffer).ArrayMax;
  *piVar1 = 0;
  pTVar2 = &this->Correlator;
  (this->AutoCorrBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar3 = &this->PeakPicker;
  (this->AutoCorrBuffer).ArrayNum = 0;
  (this->AutoCorrBuffer).ArrayMax = 0;
  pTVar2->Ptr = (FBlockCorrelator *)0x0;
  *local_res10 = 0;
  (this->PeakIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PeakIndices).ArrayNum = 0;
  (this->PeakIndices).ArrayMax = 0;
  pTVar3->Ptr = (FPeakPicker *)0x0;
  fVar21 = this->SampleRate;
  if (this->SampleRate <= 0.0) {
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<7104532148522057782>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\AutoCorrelationPitchDetector.cpp"
                        ,0x36,"SampleRate > 0.f");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pFVar15 = (FAutoCorrelationPitchDetector *)(*pcVar9)();
      return pFVar15;
    }
    this->SampleRate = 1.0;
    fVar21 = fVar4;
  }
  fVar10 = __real_3f000000;
  fVar20 = (this->Settings).MaximumFrequency;
  fVar22 = (this->Settings).MinimumFrequency;
  if (fVar20 <= fVar4) {
    fVar20 = fVar4;
  }
  if (fVar22 <= fVar4) {
    fVar22 = fVar4;
  }
  iVar19 = 0x2000;
  (this->Settings).MaximumFrequency = fVar20;
  fVar20 = __real_40400000 / fVar22;
  (this->Settings).MinimumFrequency = fVar22;
  iVar12 = (int)ROUND((fVar21 + fVar21) * fVar20 + fVar10) >> 1;
  iVar18 = 0x200;
  if (0x200 < iVar12) {
    iVar18 = iVar12;
  }
  if (iVar18 < 0x2001) {
    iVar12 = 1;
    iVar19 = iVar18;
    if (iVar18 < 3) goto LAB_14d7f4ce8;
  }
  else if (2 < (byte)LogAudioSynesthesiaCore._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioSynesthesiaCore);
  }
  iVar12 = 1;
  uVar13 = 2;
  do {
    iVar12 = iVar12 + 1;
    uVar13 = uVar13 << 1 | (uint)((int)uVar13 < 0);
  } while ((int)uVar13 < iVar19);
LAB_14d7f4ce8:
  fVar21 = (this->Settings).AnalysisHopSeconds;
  iVar19 = 1 << ((byte)iVar12 & 0x1f);
  iVar18 = (int)ROUND((fVar21 + fVar21) * this->SampleRate + fVar10) >> 1;
  if (iVar18 < 1) {
    iVar18 = 1;
  }
  local_c8[0].StorageBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8[0].StorageBuffer.ArrayNum = 0;
  local_c8[0].StorageBuffer.ArrayMax = 0;
  local_c8[0].NumUnderflowSamples = 0;
  local_c8[0].NumWindowSamples = iVar19;
  local_c8[0].NumHopSamples = iVar18;
  if ((iVar19 < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumWindowSamples >= 1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\SlidingWindow.h"
                          ,0x27,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    pFVar15 = (FAutoCorrelationPitchDetector *)(*pcVar9)();
    return pFVar15;
  }
  if ((iVar18 < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumHopSamples >= 1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\SlidingWindow.h"
                          ,0x28,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    pFVar15 = (FAutoCorrelationPitchDetector *)(*pcVar9)();
    return pFVar15;
  }
  TSlidingBuffer<float>::operator=(&this->SlidingBuffer,local_c8);
  if (local_c8[0].StorageBuffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8[0].StorageBuffer.AllocatorInstance.Data);
  }
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,iVar19,&(this->WindowBuffer).AllocatorInstance,piVar1,local_res10);
  fVar21 = this->SampleRate;
  fVar20 = fVar4 - (this->Settings).Sensitivity;
  iVar14 = (int)ROUND((fVar21 + fVar21) / (this->Settings).MaximumFrequency - fVar10) >> 1;
  fVar21 = __real_bf000000 - (fVar21 + fVar21) / (this->Settings).MinimumFrequency;
  iVar18 = iVar19;
  if (iVar14 < iVar19) {
    iVar18 = iVar14;
  }
  iVar14 = 1;
  if (1 < iVar18) {
    iVar14 = iVar18;
  }
  this->MinAutoCorrBin = iVar14;
  iVar18 = -((int)ROUND(fVar21) >> 1);
  if (iVar18 < iVar19) {
    iVar19 = iVar18;
  }
  iVar18 = 1;
  if (1 < iVar19) {
    iVar18 = iVar19;
  }
  this->MaxAutoCorrBin = iVar18;
  iVar18 = iVar18 - iVar14;
  if (iVar18 < 2) {
    iVar18 = 2;
  }
  local_c8[0].NumWindowSamples =
       AutoCorrelationPitchDetectorIntrinsics::PowerScalePeakPickerValue(fVar20,2,iVar18 / 2);
  if (local_c8[0].NumWindowSamples < 1) {
    local_c8[0].NumWindowSamples = 1;
  }
  if (iVar18 < 2) {
    iVar18 = 2;
  }
  local_c8[0].NumHopSamples = local_c8[0].NumWindowSamples;
  fVar21 = logf((float)iVar18);
  if (fVar4 <= fVar20) {
    fVar20 = fVar4;
  }
  fVar22 = fVar21 * __real_3fb8aa3b;
  if (fVar21 * __real_3fb8aa3b <= __real_322bcc77) {
    fVar22 = __real_322bcc77;
  }
  if (fVar20 <= 0.0) {
    fVar20 = 0.0;
  }
  fVar20 = powf(fVar22,fVar20);
  fVar21 = fVar22 - fVar4;
  if (fVar22 - fVar4 <= __real_322bcc77) {
    fVar21 = __real_322bcc77;
  }
  iVar19 = ((int)ROUND(((fVar20 - fVar4) / fVar21) * ((float)(iVar18 + -2) + (float)(iVar18 + -2)) +
                       fVar10) >> 1) + 2;
  local_c8[0].StorageBuffer.ArrayNum = 1;
  local_c8[0].StorageBuffer.ArrayMax = 0;
  if (iVar19 < iVar18) {
    iVar18 = iVar19;
  }
  local_c8[0].StorageBuffer.AllocatorInstance.Data._4_4_ = 2;
  if (2 < iVar18) {
    local_c8[0].StorageBuffer.AllocatorInstance.Data._4_4_ = iVar18;
  }
  if (local_c8[0].StorageBuffer.AllocatorInstance.Data._4_4_ < 1) {
    local_c8[0].StorageBuffer.AllocatorInstance.Data._4_4_ = 1;
  }
  local_c8[0].StorageBuffer.AllocatorInstance.Data._0_4_ =
       local_c8[0].StorageBuffer.AllocatorInstance.Data._4_4_;
  pFVar16 = ::operator_new(0x18);
  if (pFVar16 == (FPeakPicker *)0x0) {
    pFVar16 = (FPeakPicker *)0x0;
  }
  else {
    (pFVar16->Settings).NumPreMax = local_c8[0].NumWindowSamples;
    (pFVar16->Settings).NumPostMax = local_c8[0].NumHopSamples;
    *(FScriptContainerElement **)&(pFVar16->Settings).NumPreMean =
         local_c8[0].StorageBuffer.AllocatorInstance.Data;
    (pFVar16->Settings).NumWait = local_c8[0].StorageBuffer.ArrayNum;
    (pFVar16->Settings).MeanDelta = (float)local_c8[0].StorageBuffer.ArrayMax;
    iVar18 = (pFVar16->Settings).NumPreMax;
    fVar4 = (pFVar16->Settings).MeanDelta;
    if (__real_7f800000 <= fVar4) {
      fVar4 = __real_7f800000;
    }
    if (iVar18 < 1) {
      iVar18 = 1;
    }
    (pFVar16->Settings).NumPreMax = iVar18;
    iVar18 = (pFVar16->Settings).NumPostMax;
    if (fVar4 <= __real_358637bd) {
      fVar4 = __real_358637bd;
    }
    if (iVar18 < 1) {
      iVar18 = 1;
    }
    (pFVar16->Settings).NumPostMax = iVar18;
    iVar18 = (pFVar16->Settings).NumPreMean;
    if (iVar18 < 1) {
      iVar18 = 1;
    }
    (pFVar16->Settings).MeanDelta = fVar4;
    (pFVar16->Settings).NumPreMean = iVar18;
    iVar18 = (pFVar16->Settings).NumPostMean;
    if (iVar18 < 1) {
      iVar18 = 1;
    }
    (pFVar16->Settings).NumPostMean = iVar18;
    iVar18 = (pFVar16->Settings).NumWait;
    if (iVar18 < 1) {
      iVar18 = 1;
    }
    (pFVar16->Settings).NumWait = iVar18;
  }
  if (pTVar3 != (TUniquePtr<Audio::FPeakPicker,TDefaultDelete<Audio::FPeakPicker>_> *)&local_d0) {
    pFVar5 = pTVar3->Ptr;
    pTVar3->Ptr = pFVar16;
    pFVar16 = (FPeakPicker *)0x0;
    ::operator_delete(pFVar5,0x18);
  }
  ::operator_delete(pFVar16,0x18);
  local_res8.WindowType = Blackman;
  local_res8.bDoNormalize = true;
  local_res8.Log2NumValuesInBlock = iVar12;
  pFVar17 = ::operator_new(0xb0);
  if (pFVar17 == (FBlockCorrelator *)0x0) {
    pFVar17 = (FBlockCorrelator *)0x0;
  }
  else {
    pFVar17 = FBlockCorrelator::FBlockCorrelator(pFVar17,&local_res8);
  }
  if ((TDefaultDelete<Audio::FBlockCorrelator> *)pTVar2 != local_d8) {
    pFVar6 = pTVar2->Ptr;
    pTVar2->Ptr = pFVar17;
    pFVar17 = (FBlockCorrelator *)0x0;
    if (pFVar6 != (FBlockCorrelator *)0x0) {
      pFVar7 = (pFVar6->FullOutputBuffer).AllocatorInstance.Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      pFVar7 = (pFVar6->ComplexCorrelationBuffer).AllocatorInstance.Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      pFVar7 = (pFVar6->ComplexBufferB).AllocatorInstance.Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      pFVar7 = (pFVar6->ComplexBufferA).AllocatorInstance.Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      pFVar7 = (pFVar6->WindowedBufferB).AllocatorInstance.Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      pFVar7 = (pFVar6->WindowedBufferA).AllocatorInstance.Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      pFVar7 = (pFVar6->NormalizationBuffer).AllocatorInstance.Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      pFVar7 = (pFVar6->Window).WindowBuffer.AllocatorInstance.Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      pIVar8 = (pFVar6->FFTAlgorithm).Ptr;
      if (pIVar8 != (IFFTAlgorithm *)0x0) {
        (**(code **)*pIVar8)(pIVar8,1);
      }
      ::operator_delete(pFVar6,0xb0);
    }
  }
  TDefaultDelete<Audio::FBlockCorrelator>::operator()(local_d8,pFVar17);
  if ((pTVar2->Ptr != (FBlockCorrelator *)0x0) &&
     (iVar18 = FBlockCorrelator::GetNumOutputValues(pTVar2->Ptr), 0 < iVar18)) {
    UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,iVar18,&(this->AutoCorrBuffer).AllocatorInstance,&(this->AutoCorrBuffer).ArrayNum
               ,&(this->AutoCorrBuffer).ArrayMax);
  }
  return this;
}

// ~FAutoCorrelationPitchDetector @ 14d7f93e0

void __thiscall
Audio::FAutoCorrelationPitchDetector::~FAutoCorrelationPitchDetector
          (FAutoCorrelationPitchDetector *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FAutoCorrelationPitchDetector_Audio__6B_;
  ::operator_delete((this->PeakPicker).Ptr,0x18);
  pFVar1 = (this->PeakIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDefaultDelete<Audio::FBlockCorrelator>::operator()
            ((TDefaultDelete<Audio::FBlockCorrelator> *)&this->Correlator,(this->Correlator).Ptr);
  pFVar1 = (this->AutoCorrBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WindowBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SlidingBuffer).StorageBuffer.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IPitchDetector_Audio__6B_;
  return;
}

// DetectPitches @ 14d803b90

void __thiscall
Audio::FAutoCorrelationPitchDetector::DetectPitches
          (FAutoCorrelationPitchDetector *this,TArray<float,TAlignedHeapAllocator<16>_> *param_1,
          TArray<Audio::FPitchInfo,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  FBlockCorrelator *this_00;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  FScriptContainerElement *pFVar18;
  bool bVar19;
  int iVar20;
  longlong lVar21;
  int iVar22;
  int iVar23;
  FScriptContainerElement *pFVar24;
  int iVar25;
  int iVar26;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res20;
  float local_150;
  float fStack_14c;
  double dStack_148;
  FScriptContainerElement *local_140;
  FScriptContainerElement *local_138;
  FScriptContainerElement *local_128;
  FScriptContainerElement *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  FScriptContainerElement *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  TArrayView<float_const_,int> local_f8;
  TArrayView<float_const_,int> local_e8 [11];
  
  local_138 = (param_1->AllocatorInstance).Data;
  iVar4 = param_1->ArrayNum;
  local_108 = local_138;
  if ((iVar4 < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar19)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  iVar5 = (this->SlidingBuffer).StorageBuffer.ArrayNum;
  local_140 = (this->SlidingBuffer).StorageBuffer.AllocatorInstance.Data;
  iStack_100 = iVar4;
  if ((iVar5 < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar19)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  fVar17 = __real_40000000;
  fVar16 = __real_3e800000;
  fVar15 = __real_3f000000;
  fVar14 = __real_bf000000;
  fVar13 = __real_3f800000;
  fVar12 = __real_322bcc77;
  uVar6 = (this->SlidingBuffer).NumWindowSamples;
  iVar7 = (this->SlidingBuffer).NumHopSamples;
  iVar22 = (this->SlidingBuffer).NumUnderflowSamples;
  local_res20 = (iVar5 - uVar6) + iVar4;
  fVar32 = __real_3f800000 / this->SampleRate;
  if (local_res20 < 0) {
    local_res20 = -1;
    iVar22 = -1;
  }
  else if (local_res20 < iVar22) {
    iVar22 = -1;
  }
  while (local_res10 = iVar22, iVar22 != -1) {
    pTVar27 = &this->WindowBuffer;
    if (iVar22 == -1) {
      (this->WindowBuffer).ArrayNum = 0;
      if ((this->WindowBuffer).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,0,&pTVar27->AllocatorInstance,0,&(this->WindowBuffer).ArrayMax);
      }
    }
    else {
      if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
      }
      piVar1 = &(this->WindowBuffer).ArrayMax;
      (this->WindowBuffer).ArrayNum = 0;
      if (*piVar1 < (int)uVar6) {
        UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,uVar6,&pTVar27->AllocatorInstance,0,piVar1);
      }
      UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,uVar6,&pTVar27->AllocatorInstance,&(this->WindowBuffer).ArrayNum,piVar1);
      iVar23 = 0;
      if (iVar22 < iVar5) {
        iVar23 = iVar5 - iVar22;
        memcpy((pTVar27->AllocatorInstance).Data,local_140 + (longlong)iVar22 * 4,
               (longlong)iVar23 << 2);
      }
      if (iVar23 < (int)uVar6) {
        iVar20 = (iVar22 - iVar5) + iVar23;
        iVar25 = iVar4 - iVar20;
        if ((int)(uVar6 - iVar23) < iVar25) {
          iVar25 = uVar6 - iVar23;
        }
        if (0 < iVar25) {
          memcpy((pTVar27->AllocatorInstance).Data + (longlong)iVar23 * 4,
                 local_138 + (longlong)iVar20 * 4,(longlong)iVar25 << 2);
          iVar23 = iVar23 + iVar25;
        }
        if (iVar23 < (int)uVar6) {
          memset((pTVar27->AllocatorInstance).Data + (longlong)iVar23 * 4,0,
                 (longlong)(int)(uVar6 - iVar23) << 2);
        }
      }
    }
    iVar23 = this->WindowCounter;
    iVar25 = (this->SlidingBuffer).NumHopSamples;
    iVar20 = (this->SlidingBuffer).NumWindowSamples;
    this->WindowCounter = iVar23 + 1;
    this_00 = (this->Correlator).Ptr;
    if (this_00 != (FBlockCorrelator *)0x0) {
      FBlockCorrelator::AutoCorrelate(this_00,pTVar27,&this->AutoCorrBuffer);
      (this->PeakIndices).ArrayNum = 0;
      if ((this->PeakIndices).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&(this->PeakIndices).AllocatorInstance,0,&(this->PeakIndices).ArrayMax);
      }
      iVar26 = (this->AutoCorrBuffer).ArrayNum;
      if (this->MinAutoCorrBin < iVar26) {
        if ((iVar26 < 1) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        uVar8 = this->MinAutoCorrBin;
        local_128 = (this->AutoCorrBuffer).AllocatorInstance.Data;
        iVar22 = ~uVar8 + (this->AutoCorrBuffer).ArrayNum;
        iVar26 = this->MaxAutoCorrBin - uVar8;
        fVar31 = *(float *)local_128;
        local_128 = local_128 + (longlong)(int)uVar8 * 4;
        if (iVar22 < iVar26) {
          iVar26 = iVar22;
        }
        if (fVar31 <= fVar12) {
          fVar31 = fVar12;
        }
        iVar22 = iVar26 + 1;
        if ((iVar22 < 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar19)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pFVar18 = local_128;
        local_118 = local_128;
        local_f8._12_4_ = uStack_10c;
        local_f8.ArrayNum = iVar22;
        local_f8.DataPtr = (float *)local_128;
        iStack_110 = iVar22;
        FPeakPicker::PickPeaks((this->PeakPicker).Ptr,&local_f8,&this->PeakIndices);
        pFVar24 = (this->PeakIndices).AllocatorInstance.Data;
        iVar9 = (this->PeakIndices).ArrayNum;
        pFVar2 = pFVar24 + (longlong)iVar9 * 4;
        while( true ) {
          if ((this->PeakIndices).ArrayNum != iVar9) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res8);
          }
          iVar22 = local_res10;
          if (pFVar24 == pFVar2) break;
          iVar22 = *(int *)pFVar24;
          lVar21 = (longlong)iVar22;
          if (iVar22 <= iVar26) {
            fVar3 = *(float *)(pFVar18 + lVar21 * 4);
            fVar30 = (*(float *)(pFVar18 + (lVar21 + -1) * 4) - (fVar3 + fVar3)) +
                     *(float *)(pFVar18 + (lVar21 + 1) * 4);
            if (fVar30 < 0.0) {
              fVar28 = *(float *)(pFVar18 + (lVar21 + -1) * 4) -
                       *(float *)(pFVar18 + (lVar21 + 1) * 4);
              fVar30 = (fVar28 * fVar15) / fVar30;
              if ((fVar30 <= fVar15) && (fVar14 <= fVar30)) {
                fVar29 = (float)(iVar22 + this->MinAutoCorrBin) + fVar30;
                if (fVar17 <= fVar29) {
                  pFVar10 = (param_2->AllocatorInstance).Data;
                  local_150 = this->SampleRate / fVar29;
                  fStack_14c = (fVar3 - fVar28 * fVar16 * fVar30) / fVar31;
                  if (fVar13 <= fStack_14c) {
                    fStack_14c = fVar13;
                  }
                  dStack_148 = (double)((float)(iVar23 * iVar25 + iVar20 / 2) * fVar32);
                  if (fStack_14c <= 0.0) {
                    fStack_14c = 0.0;
                  }
                  if (((pFVar10 <= (FScriptContainerElement *)&local_150) &&
                      ((FScriptContainerElement *)&local_150 <
                       pFVar10 + (longlong)param_2->ArrayMax * 0x10)) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar19)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  iVar22 = param_2->ArrayNum;
                  if (iVar22 == param_2->ArrayMax) {
                    iVar22 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
                  }
                  param_2->ArrayNum = iVar22 + 1;
                  pFVar10 = (param_2->AllocatorInstance).Data + (longlong)iVar22 * 0x10;
                  *(ulonglong *)pFVar10 = CONCAT44(fStack_14c,local_150);
                  *(double *)(pFVar10 + 8) = dStack_148;
                }
              }
            }
          }
          pFVar24 = pFVar24 + 4;
        }
      }
    }
    if (iVar22 == -1) break;
    iVar22 = iVar22 + iVar7;
    if (local_res20 < iVar22) {
      iVar22 = -1;
    }
  }
  local_e8[0]._12_4_ = uStack_fc;
  local_e8[0].ArrayNum = iStack_100;
  local_e8[0].DataPtr = (float *)local_108;
  TSlidingBuffer<float>::StoreForFutureWindows(&this->SlidingBuffer,local_e8);
  return;
}

// Finalize @ 14d805240

void __thiscall
Audio::FAutoCorrelationPitchDetector::Finalize
          (FAutoCorrelationPitchDetector *this,
          TArray<Audio::FPitchInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  
  iVar1 = (this->SlidingBuffer).StorageBuffer.ArrayMax;
  (this->SlidingBuffer).StorageBuffer.ArrayNum = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->SlidingBuffer).StorageBuffer.AllocatorInstance,0,
               &(this->SlidingBuffer).StorageBuffer.ArrayMax);
  }
  (this->SlidingBuffer).NumUnderflowSamples = 0;
  this->WindowCounter = 0;
  return;
}

