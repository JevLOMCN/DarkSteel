// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesiaCore
// Functions: 4

// FFFTPeakPitchDetector @ 14d7f5cc0

/* WARNING: Enum "Type": Some values do not have unique names */

FFFTPeakPitchDetector * __thiscall
Audio::FFFTPeakPitchDetector::FFFTPeakPitchDetector
          (FFFTPeakPitchDetector *this,FFFTPeakPitchDetectorSettings *param_1,float param_2)

{
  TUniquePtr<Audio::IFFTAlgorithm,TDefaultDelete<Audio::IFFTAlgorithm>_> *pTVar1;
  TUniquePtr<Audio::FPeakPicker,TDefaultDelete<Audio::FPeakPicker>_> *pTVar2;
  IFFTAlgorithm *pIVar3;
  FPeakPicker *pFVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  FFFTPeakPitchDetector *pFVar11;
  TUniquePtr<Audio::IFFTAlgorithm,TDefaultDelete<Audio::IFFTAlgorithm>_> TVar12;
  FPeakPicker *pFVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  FName local_res8;
  FFFTSettings local_res10;
  undefined8 local_d8;
  TSlidingBuffer<float> local_d0 [4];
  
  pTVar1 = &this->FFTAlgorithm;
  pTVar2 = &this->PeakPicker;
  this->_padding_ = (longlong)&___7FFFTPeakPitchDetector_Audio__6B_;
  fVar20 = param_1->AnalysisWindowSeconds;
  fVar6 = param_1->AnalysisHopSeconds;
  fVar7 = param_1->MinimumFrequency;
  (this->Settings).Log2FFTSize = param_1->Log2FFTSize;
  (this->Settings).AnalysisWindowSeconds = fVar20;
  (this->Settings).AnalysisHopSeconds = fVar6;
  (this->Settings).MinimumFrequency = fVar7;
  fVar20 = param_1->Sensitivity;
  (this->Settings).MaximumFrequency = param_1->MaximumFrequency;
  (this->Settings).Sensitivity = fVar20;
  (this->Settings).MaxStrengthSNRDecibels = param_1->MaxStrengthSNRDecibels;
  this->SampleRate = param_2;
  iVar14 = param_1->Log2FFTSize;
  this->MinFFTBin = 1;
  this->MaxFFTBin = 1;
  this->FFTScaling = 1.0;
  this->WindowCounter = 0;
  this->FFTSize = 1 << ((byte)iVar14 & 0x1f);
  pTVar1->Ptr = (IFFTAlgorithm *)0x0;
  pTVar2->Ptr = (FPeakPicker *)0x0;
  (this->SlidingBuffer).NumHopSamples = 1;
  (this->SlidingBuffer).StorageBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SlidingBuffer).StorageBuffer.ArrayNum = 0;
  (this->SlidingBuffer).StorageBuffer.ArrayMax = 0;
  (this->SlidingBuffer).NumWindowSamples = 1;
  (this->SlidingBuffer).NumUnderflowSamples = 0;
  if (((this->SlidingBuffer).NumHopSamples < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumHopSamples >= 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\SlidingWindow.h"
                         ,0x28,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FFFTPeakPitchDetector *)(*pcVar5)();
    return pFVar11;
  }
  fVar6 = __real_3f800000;
  (this->WindowBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WindowBuffer).ArrayNum = 0;
  (this->WindowBuffer).ArrayMax = 0;
  (this->ZeroPaddedAnalysisBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ZeroPaddedAnalysisBuffer).ArrayNum = 0;
  (this->ZeroPaddedAnalysisBuffer).ArrayMax = 0;
  (this->ComplexSpectrumBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComplexSpectrumBuffer).ArrayNum = 0;
  (this->ComplexSpectrumBuffer).ArrayMax = 0;
  (this->PowerSpectrumBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PowerSpectrumBuffer).ArrayNum = 0;
  (this->PowerSpectrumBuffer).ArrayMax = 0;
  fVar20 = this->SampleRate;
  if (this->SampleRate <= 0.0) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4532620416446889937>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\FFTPeakPitchDetector.cpp"
                       ,0x2f,"SampleRate > 0.f");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      pFVar11 = (FFFTPeakPitchDetector *)(*pcVar5)();
      return pFVar11;
    }
    this->SampleRate = 1.0;
    fVar20 = fVar6;
  }
  fVar7 = __real_3f000000;
  iVar15 = (int)ROUND((fVar20 + fVar20) * (this->Settings).AnalysisHopSeconds + __real_3f000000) >>
           1;
  iVar14 = (int)ROUND((fVar20 + fVar20) * (this->Settings).AnalysisWindowSeconds + __real_3f000000)
           >> 1;
  if (this->FFTSize < iVar14) {
    if (4 < (byte)LogAudioSynesthesiaCore._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAudioSynesthesiaCore);
    }
    iVar14 = this->FFTSize;
  }
  if ((4 < (byte)LogAudioSynesthesiaCore._0_1_) && (iVar14 < iVar15)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAudioSynesthesiaCore);
  }
  local_d0[0].StorageBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0[0].StorageBuffer.ArrayNum = 0;
  local_d0[0].StorageBuffer.ArrayMax = 0;
  local_d0[0].NumUnderflowSamples = 0;
  local_d0[0].NumWindowSamples = iVar14;
  local_d0[0].NumHopSamples = iVar15;
  if ((iVar14 < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumWindowSamples >= 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\SlidingWindow.h"
                         ,0x27,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FFFTPeakPitchDetector *)(*pcVar5)();
    return pFVar11;
  }
  if ((iVar15 < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumHopSamples >= 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\SlidingWindow.h"
                         ,0x28,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FFFTPeakPitchDetector *)(*pcVar5)();
    return pFVar11;
  }
  TSlidingBuffer<float>::operator=(&this->SlidingBuffer,local_d0);
  if (local_d0[0].StorageBuffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0[0].StorageBuffer.AllocatorInstance.Data);
  }
  local_res8.ComparisonIndex.Value = (this->Settings).Log2FFTSize;
  local_res8.Number._0_2_ = 0x101;
  TVar12 = FFFTFactory::NewFFTAlgorithm(&local_res10,&local_res8);
  if ((IFFTAlgorithm *)pTVar1 != TVar12.Ptr) {
    pIVar3 = pTVar1->Ptr;
    pTVar1->Ptr = (IFFTAlgorithm *)*TVar12.Ptr;
    *TVar12.Ptr = (IFFTAlgorithm)0x0;
    if (pIVar3 != (IFFTAlgorithm *)0x0) {
      (**(code **)*pIVar3)(pIVar3,1);
    }
  }
  if (local_res10 != (FFFTSettings)0x0) {
    (*(code *)**(undefined8 **)local_res10)(local_res10,1);
  }
  if ((pTVar1->Ptr == (IFFTAlgorithm *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("FFTAlgorithm.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\FFTPeakPitchDetector.cpp"
                         ,0x48,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FFFTPeakPitchDetector *)(*pcVar5)();
    return pFVar11;
  }
  cVar9 = (**(code **)((longlong)*pTVar1->Ptr + 0x10))();
  fVar20 = fVar6;
  if (cVar9 != '\0') {
    if (cVar9 == '\x01') {
      iVar14 = (**(code **)((longlong)*pTVar1->Ptr + 8))();
      fVar20 = fVar6 / (float)iVar14;
    }
    else if (cVar9 == '\x02') {
      iVar14 = (**(code **)((longlong)*pTVar1->Ptr + 8))();
      fVar20 = fVar6 / SQRT((float)iVar14);
    }
    else if (cVar9 == '\x03') {
      iVar14 = (**(code **)((longlong)*pTVar1->Ptr + 8))();
      fVar20 = (float)iVar14;
    }
    else if (cVar9 == '\x04') {
      iVar14 = (**(code **)((longlong)*pTVar1->Ptr + 8))();
      fVar20 = SQRT((float)iVar14);
    }
  }
  this->FFTScaling = fVar20;
  fVar20 = fVar6 - (this->Settings).Sensitivity;
  if (fVar6 <= fVar20) {
    fVar20 = fVar6;
  }
  fVar19 = this->SampleRate / (float)this->FFTSize;
  fVar18 = (this->Settings).MaximumFrequency;
  if (fVar20 <= 0.0) {
    fVar20 = 0.0;
  }
  iVar14 = (int)ROUND((__real_40000000 / fVar19) * (this->Settings).MinimumFrequency - fVar7) >> 1;
  fVar18 = __real_bf000000 - (fVar18 + fVar18) / fVar19;
  if (iVar14 < 1) {
    iVar14 = 1;
  }
  this->MinFFTBin = iVar14;
  iVar15 = -((int)ROUND(fVar18) >> 1);
  if (iVar15 < 1) {
    iVar15 = 1;
  }
  this->MaxFFTBin = iVar15;
  iVar14 = (iVar15 - iVar14) + 1;
  iVar15 = iVar14 / 2;
  if (iVar14 / 2 < 2) {
    iVar15 = 2;
  }
  fVar16 = logf((float)iVar15);
  fVar18 = __real_322bcc77;
  fVar19 = fVar16 * __real_3fb8aa3b;
  if (fVar16 * __real_3fb8aa3b <= __real_322bcc77) {
    fVar19 = __real_322bcc77;
  }
  fVar17 = powf(fVar19,fVar20);
  fVar16 = fVar19 - fVar6;
  if (fVar19 - fVar6 <= fVar18) {
    fVar16 = fVar18;
  }
  iVar10 = ((int)ROUND(((fVar17 - fVar6) / fVar16) * ((float)(iVar15 + -2) + (float)(iVar15 + -2)) +
                       fVar7) >> 1) + 2;
  if (iVar10 < iVar15) {
    iVar15 = iVar10;
  }
  local_d0[0].NumWindowSamples = 2;
  if (2 < iVar15) {
    local_d0[0].NumWindowSamples = iVar15;
  }
  if (local_d0[0].NumWindowSamples < 1) {
    local_d0[0].NumWindowSamples = 1;
  }
  if (iVar14 < 2) {
    iVar14 = 2;
  }
  local_d0[0].NumHopSamples = local_d0[0].NumWindowSamples;
  fVar16 = logf((float)iVar14);
  fVar19 = fVar16 * __real_3fb8aa3b;
  if (fVar16 * __real_3fb8aa3b <= fVar18) {
    fVar19 = fVar18;
  }
  fVar16 = powf(fVar19,fVar20);
  fVar20 = fVar19 - fVar6;
  if (fVar19 - fVar6 <= fVar18) {
    fVar20 = fVar18;
  }
  iVar15 = ((int)ROUND(((fVar16 - fVar6) / fVar20) * ((float)(iVar14 + -2) + (float)(iVar14 + -2)) +
                       fVar7) >> 1) + 2;
  if (iVar15 < iVar14) {
    iVar14 = iVar15;
  }
  local_d0[0].StorageBuffer.AllocatorInstance.Data._4_4_ = 2;
  if (2 < iVar14) {
    local_d0[0].StorageBuffer.AllocatorInstance.Data._4_4_ = iVar14;
  }
  local_d0[0].StorageBuffer.ArrayNum = 1;
  local_d0[0].StorageBuffer.ArrayMax = 0;
  if (local_d0[0].StorageBuffer.AllocatorInstance.Data._4_4_ < 1) {
    local_d0[0].StorageBuffer.AllocatorInstance.Data._4_4_ = 1;
  }
  local_d0[0].StorageBuffer.AllocatorInstance.Data._0_4_ =
       local_d0[0].StorageBuffer.AllocatorInstance.Data._4_4_;
  pFVar13 = ::operator_new(0x18);
  if (pFVar13 == (FPeakPicker *)0x0) {
    pFVar13 = (FPeakPicker *)0x0;
  }
  else {
    (pFVar13->Settings).NumPreMax = local_d0[0].NumWindowSamples;
    (pFVar13->Settings).NumPostMax = local_d0[0].NumHopSamples;
    *(FScriptContainerElement **)&(pFVar13->Settings).NumPreMean =
         local_d0[0].StorageBuffer.AllocatorInstance.Data;
    (pFVar13->Settings).NumWait = local_d0[0].StorageBuffer.ArrayNum;
    (pFVar13->Settings).MeanDelta = (float)local_d0[0].StorageBuffer.ArrayMax;
    iVar14 = (pFVar13->Settings).NumPreMax;
    fVar20 = (pFVar13->Settings).MeanDelta;
    if (__real_7f800000 <= fVar20) {
      fVar20 = __real_7f800000;
    }
    if (iVar14 < 1) {
      iVar14 = 1;
    }
    (pFVar13->Settings).NumPreMax = iVar14;
    iVar14 = (pFVar13->Settings).NumPostMax;
    if (fVar20 <= __real_358637bd) {
      fVar20 = __real_358637bd;
    }
    if (iVar14 < 1) {
      iVar14 = 1;
    }
    (pFVar13->Settings).NumPostMax = iVar14;
    iVar14 = (pFVar13->Settings).NumPreMean;
    if (iVar14 < 1) {
      iVar14 = 1;
    }
    (pFVar13->Settings).MeanDelta = fVar20;
    (pFVar13->Settings).NumPreMean = iVar14;
    iVar14 = (pFVar13->Settings).NumPostMean;
    if (iVar14 < 1) {
      iVar14 = 1;
    }
    (pFVar13->Settings).NumPostMean = iVar14;
    iVar14 = (pFVar13->Settings).NumWait;
    if (iVar14 < 1) {
      iVar14 = 1;
    }
    (pFVar13->Settings).NumWait = iVar14;
  }
  if (pTVar2 != (TUniquePtr<Audio::FPeakPicker,TDefaultDelete<Audio::FPeakPicker>_> *)&local_d8) {
    pFVar4 = pTVar2->Ptr;
    pTVar2->Ptr = pFVar13;
    pFVar13 = (FPeakPicker *)0x0;
    ::operator_delete(pFVar4,0x18);
  }
  ::operator_delete(pFVar13,0x18);
  iVar14 = (**(code **)((longlong)*pTVar1->Ptr + 8))();
  if (0 < iVar14) {
    iVar14 = (**(code **)((longlong)*pTVar1->Ptr + 8))();
    TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed(&this->ZeroPaddedAnalysisBuffer,iVar14);
  }
  iVar14 = (**(code **)((longlong)*pTVar1->Ptr + 8))();
  if (0 < iVar14 + 2) {
    iVar14 = (**(code **)((longlong)*pTVar1->Ptr + 8))();
    TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed(&this->ComplexSpectrumBuffer,iVar14 + 2);
    iVar14 = (**(code **)((longlong)*pTVar1->Ptr + 8))();
    iVar14 = (iVar14 + 2) / 2;
    if (iVar14 < 1) {
      iVar14 = 1;
    }
    TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed(&this->PowerSpectrumBuffer,iVar14);
  }
  return this;
}

// ~FFFTPeakPitchDetector @ 14d7f9460

void __thiscall Audio::FFFTPeakPitchDetector::~FFFTPeakPitchDetector(FFFTPeakPitchDetector *this)

{
  FScriptContainerElement *pFVar1;
  IFFTAlgorithm *pIVar2;
  
  this->_padding_ = (longlong)&___7FFFTPeakPitchDetector_Audio__6B_;
  pFVar1 = (this->PowerSpectrumBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ComplexSpectrumBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ZeroPaddedAnalysisBuffer).AllocatorInstance.Data;
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
  ::operator_delete((this->PeakPicker).Ptr,0x18);
  pIVar2 = (this->FFTAlgorithm).Ptr;
  if (pIVar2 != (IFFTAlgorithm *)0x0) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  this->_padding_ = (longlong)&___7IPitchDetector_Audio__6B_;
  return;
}

// DetectPitches @ 14d804220

void __thiscall
Audio::FFFTPeakPitchDetector::DetectPitches
          (FFFTPeakPitchDetector *this,TArray<float,TAlignedHeapAllocator<16>_> *param_1,
          TArray<Audio::FPitchInfo,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  IFFTAlgorithm *pIVar5;
  FPeakPicker *this_00;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  FIdentityFunctor FVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  TSlidingBuffer<float> *this_01;
  int iVar19;
  ForAnyElementType FVar20;
  FScriptContainerElement *pFVar21;
  int iVar22;
  ForAnyElementType FVar23;
  FScriptContainerElement *pFVar24;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  ForAnyElementType local_1f8;
  undefined8 local_1f0;
  uint local_1e8;
  int local_1e4;
  int local_1e0;
  TArray<int,TSizedDefaultAllocator<32>_> local_1d8;
  undefined8 local_1c8;
  double dStack_1c0;
  int local_1b8;
  int local_1b4;
  int local_1b0;
  FScriptContainerElement *local_1a8;
  FScriptContainerElement *local_198;
  TSlidingBuffer<float> *local_188;
  FScriptContainerElement *local_178;
  int iStack_170;
  undefined4 uStack_16c;
  FScriptContainerElement *local_168;
  int iStack_160;
  undefined4 uStack_15c;
  FScriptContainerElement *local_158;
  int iStack_150;
  undefined4 uStack_14c;
  FScriptContainerElement *local_148;
  int iStack_140;
  undefined4 uStack_13c;
  FScriptContainerElement *local_138;
  int iStack_130;
  undefined4 uStack_12c;
  TArrayView<float,int> local_128;
  TArrayView<float,int> local_118;
  TArrayView<float_const_,int> local_108;
  TArrayView<float_const_,int> local_f8;
  TArrayView<float_const_,int> local_e8 [11];
  
  local_198 = (param_1->AllocatorInstance).Data;
  iVar19 = param_1->ArrayNum;
  local_1b4 = iVar19;
  local_138 = local_198;
  if ((iVar19 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar22 = (this->SlidingBuffer).StorageBuffer.ArrayNum;
  this_01 = &this->SlidingBuffer;
  local_1a8 = (this->SlidingBuffer).StorageBuffer.AllocatorInstance.Data;
  local_1b8 = iVar22;
  local_188 = this_01;
  iStack_130 = iVar19;
  if ((iVar22 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FVar10 = local_res8[0];
  fVar9 = __real_3f000000;
  fVar8 = __real_bf000000;
  fVar7 = __real_3f800000;
  local_1e8 = this_01->NumWindowSamples;
  local_1b0 = (this->SlidingBuffer).NumHopSamples;
  iVar16 = (this->SlidingBuffer).NumUnderflowSamples;
  local_1e0 = (iVar22 - local_1e8) + iVar19;
  fVar28 = __real_3f800000 / this->SampleRate;
  if (local_1e0 < 0) {
    local_1e0 = -1;
    iVar16 = -1;
  }
  else if (local_1e0 < iVar16) {
    iVar16 = -1;
  }
  while (local_1e4 = iVar16, iVar16 != -1) {
    pTVar25 = &this->WindowBuffer;
    if (iVar16 == -1) {
      (this->WindowBuffer).ArrayNum = 0;
      if ((this->WindowBuffer).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,0,&pTVar25->AllocatorInstance,0,&(this->WindowBuffer).ArrayMax);
      }
    }
    else {
      if ((int)local_1e8 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)local_1e8);
      }
      piVar1 = &(this->WindowBuffer).ArrayMax;
      (this->WindowBuffer).ArrayNum = 0;
      if (*piVar1 < (int)local_1e8) {
        UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,local_1e8,&pTVar25->AllocatorInstance,0,piVar1);
      }
      UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,local_1e8,&pTVar25->AllocatorInstance,&(this->WindowBuffer).ArrayNum,piVar1);
      iVar19 = local_1b8;
      iVar22 = 0;
      if (iVar16 < local_1b8) {
        iVar22 = local_1b8 - iVar16;
        memcpy((pTVar25->AllocatorInstance).Data,local_1a8 + (longlong)iVar16 * 4,
               (longlong)iVar22 << 2);
      }
      if (iVar22 < (int)local_1e8) {
        iVar16 = (iVar16 - iVar19) + iVar22;
        iVar19 = local_1b4 - iVar16;
        if ((int)(local_1e8 - iVar22) < iVar19) {
          iVar19 = local_1e8 - iVar22;
        }
        if (0 < iVar19) {
          memcpy((pTVar25->AllocatorInstance).Data + (longlong)iVar22 * 4,
                 local_198 + (longlong)iVar16 * 4,(longlong)iVar19 << 2);
          iVar22 = iVar22 + iVar19;
        }
        if (iVar22 < (int)local_1e8) {
          memset((pTVar25->AllocatorInstance).Data + (longlong)iVar22 * 4,0,
                 (longlong)(int)(local_1e8 - iVar22) << 2);
        }
      }
    }
    FVar23.Data = (FScriptContainerElement *)0x0;
    iVar19 = this->WindowCounter;
    iVar22 = (this->SlidingBuffer).NumHopSamples;
    iVar16 = (this->SlidingBuffer).NumWindowSamples;
    this->WindowCounter = iVar19 + 1;
    memcpy((this->ZeroPaddedAnalysisBuffer).AllocatorInstance.Data,(pTVar25->AllocatorInstance).Data
           ,(longlong)(this->WindowBuffer).ArrayNum << 2);
    pIVar5 = (this->FFTAlgorithm).Ptr;
    (**(code **)((longlong)*pIVar5 + 0x20))
              (pIVar5,(this->ZeroPaddedAnalysisBuffer).AllocatorInstance.Data,
               (this->ComplexSpectrumBuffer).AllocatorInstance.Data);
    local_178 = (this->ComplexSpectrumBuffer).AllocatorInstance.Data;
    iVar12 = (this->ComplexSpectrumBuffer).ArrayNum;
    fVar2 = this->FFTScaling;
    if ((iVar12 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_128._12_4_ = uStack_16c;
    local_128.ArrayNum = iVar12;
    local_128.DataPtr = (float *)local_178;
    iStack_170 = iVar12;
    ArrayMultiplyByConstantInPlace(&local_128,fVar2);
    local_168 = (this->PowerSpectrumBuffer).AllocatorInstance.Data;
    iVar12 = (this->PowerSpectrumBuffer).ArrayNum;
    if ((iVar12 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_158 = (this->ComplexSpectrumBuffer).AllocatorInstance.Data;
    iVar14 = (this->ComplexSpectrumBuffer).ArrayNum;
    iStack_160 = iVar12;
    if ((iVar14 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_118._12_4_ = uStack_15c;
    local_118.ArrayNum = iStack_160;
    local_108._12_4_ = uStack_14c;
    local_108.ArrayNum = iVar14;
    local_108.DataPtr = (float *)local_158;
    local_118.DataPtr = (float *)local_168;
    iStack_150 = iVar14;
    ArrayComplexToPower(&local_108,&local_118);
    local_148 = (this->PowerSpectrumBuffer).AllocatorInstance.Data;
    iVar12 = (this->PowerSpectrumBuffer).ArrayNum;
    this_00 = (this->PeakPicker).Ptr;
    local_1d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d8.ArrayNum = 0;
    local_1d8.ArrayMax = 0;
    if ((iVar12 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_f8._12_4_ = uStack_13c;
    local_f8.ArrayNum = iVar12;
    local_f8.DataPtr = (float *)local_148;
    iStack_140 = iVar12;
    FPeakPicker::PickPeaks(this_00,&local_f8,&local_1d8);
    local_1f8.Data = (FScriptContainerElement *)0x0;
    local_1f0 = 0;
    pFVar24 = local_1d8.AllocatorInstance.Data + (longlong)local_1d8.ArrayNum * 4;
    pFVar21 = FVar23.Data;
    for (FVar20.Data = local_1d8.AllocatorInstance.Data; iVar12 = (int)pFVar21,
        FVar20.Data != pFVar24; FVar20.Data = FVar20.Data + 4) {
      if ((this->MinFFTBin <= *(int *)FVar20.Data) && (*(int *)FVar20.Data <= this->MaxFFTBin)) {
        if ((FVar23.Data <= FVar20.Data) &&
           (local_1f0._4_4_ = (int)((ulonglong)local_1f0 >> 0x20),
           lVar18 = (longlong)local_1f0._4_4_, FVar20.Data < FVar23.Data + lVar18 * 4)) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar11) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FVar23.Data = local_1f8.Data;
          iVar12 = (int)local_1f0;
        }
        if (iVar12 == local_1f0._4_4_) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_1f8,(int *)((longlong)&local_1f0 + 4));
          FVar23.Data = local_1f8.Data;
        }
        local_1f0 = CONCAT44(local_1f0._4_4_,iVar12 + 1U);
        *(int *)(FVar23.Data + (longlong)iVar12 * 4) = *(int *)FVar20.Data;
        pFVar21 = (FScriptContainerElement *)(ulonglong)(iVar12 + 1U);
        FVar23.Data = local_1f8.Data;
      }
    }
    if (local_1d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.AllocatorInstance.Data);
      FVar23.Data = local_1f8.Data;
      iVar12 = (int)local_1f0;
    }
    fVar2 = __real_3e800000;
    local_1f8.Data = (FScriptContainerElement *)0x0;
    local_1d8.ArrayMax = (int)((ulonglong)local_1f0 >> 0x20);
    local_1d8.ArrayNum = iVar12;
    pFVar24 = FVar23.Data + (longlong)iVar12 * 4;
    local_1f0 = 0;
    local_1d8.AllocatorInstance.Data = FVar23.Data;
    while( true ) {
      if (local_1d8.ArrayNum != iVar12) {
        local_res8[0] = (FIdentityFunctor)0x0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      fVar27 = __real_408af967;
      fVar3 = __real_322bcc77;
      if (FVar23.Data == pFVar24) break;
      iVar14 = *(int *)FVar23.Data;
      lVar18 = (longlong)iVar14;
      pFVar21 = (this->PowerSpectrumBuffer).AllocatorInstance.Data;
      fVar3 = *(float *)(pFVar21 + lVar18 * 4);
      fVar27 = (*(float *)(pFVar21 + lVar18 * 4 + -4) - (fVar3 + fVar3)) +
               *(float *)(pFVar21 + lVar18 * 4 + 4);
      if (fVar27 < 0.0) {
        fVar26 = *(float *)(pFVar21 + lVar18 * 4 + -4) - *(float *)(pFVar21 + lVar18 * 4 + 4);
        fVar27 = (fVar26 * fVar9) / fVar27;
        if ((fVar27 <= fVar9) && (fVar8 <= fVar27)) {
          local_1c8 = 0;
          dStack_1c0 = 0.0;
          fVar4 = this->SampleRate;
          iVar13 = (**(code **)((longlong)*(this->FFTAlgorithm).Ptr + 8))();
          pFVar21 = (param_2->AllocatorInstance).Data;
          local_1c8 = CONCAT44(fVar3 - fVar26 * fVar2 * fVar27,
                               (((float)iVar14 + fVar27) * fVar4) / (float)iVar13);
          dStack_1c0 = (double)((float)(iVar19 * iVar22 + iVar16 / 2) * fVar28);
          if ((pFVar21 <= (FScriptContainerElement *)&local_1c8) &&
             (((FScriptContainerElement *)&local_1c8 < pFVar21 + (longlong)param_2->ArrayMax * 0x10
              && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar11)))) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar14 = param_2->ArrayNum;
          if (iVar14 == param_2->ArrayMax) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
          }
          param_2->ArrayNum = iVar14 + 1;
          pFVar21 = (param_2->AllocatorInstance).Data + (longlong)iVar14 * 0x10;
          *(undefined8 *)pFVar21 = local_1c8;
          *(double *)(pFVar21 + 8) = dStack_1c0;
        }
      }
      FVar23.Data = FVar23.Data + 4;
    }
    iVar19 = (this->PowerSpectrumBuffer).ArrayNum;
    if (0 < iVar19) {
      AlgoImpl::
      IntroSortInternal<float,int,FIdentityFunctor,TDereferenceWrapper<float,TLess<void>_>_>
                ((float *)(this->PowerSpectrumBuffer).AllocatorInstance.Data,iVar19,FVar10,
                 (TLess<void> *)local_res20);
      iVar19 = (this->PowerSpectrumBuffer).ArrayNum;
      uVar15 = iVar19 / 2;
      uVar17 = 0;
      if ((int)uVar15 < iVar19) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar19 = param_2->ArrayNum;
      fVar2 = *(float *)((this->PowerSpectrumBuffer).AllocatorInstance.Data +
                        (longlong)(int)uVar15 * 4);
      pFVar24 = (param_2->AllocatorInstance).Data;
      if (fVar2 <= fVar3) {
        fVar2 = fVar3;
      }
      pFVar21 = pFVar24 + (longlong)iVar19 * 0x10;
      while( true ) {
        if (param_2->ArrayNum != iVar19) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<Audio::FPitchInfo,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res10);
        }
        if (pFVar24 == pFVar21) break;
        fVar26 = *(float *)(pFVar24 + 4) / fVar2;
        if (*(float *)(pFVar24 + 4) / fVar2 <= fVar3) {
          fVar26 = fVar3;
        }
        fVar26 = logf(fVar26);
        fVar26 = (fVar26 * fVar27) / (this->Settings).MaxStrengthSNRDecibels;
        if (fVar7 <= fVar26) {
          fVar26 = fVar7;
        }
        if (fVar26 <= 0.0) {
          fVar26 = 0.0;
        }
        *(float *)(pFVar24 + 4) = fVar26;
        pFVar24 = pFVar24 + 0x10;
      }
    }
    if (local_1d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.AllocatorInstance.Data);
    }
    this_01 = local_188;
    if (local_1e4 == -1) break;
    iVar16 = local_1e4 + local_1b0;
    if (local_1e0 < local_1e4 + local_1b0) {
      iVar16 = -1;
    }
  }
  local_e8[0]._12_4_ = uStack_12c;
  local_e8[0].ArrayNum = iStack_130;
  local_e8[0].DataPtr = (float *)local_138;
  TSlidingBuffer<float>::StoreForFutureWindows(this_01,local_e8);
  return;
}

// Finalize @ 14d8053a0

void __thiscall
Audio::FFFTPeakPitchDetector::Finalize
          (FFFTPeakPitchDetector *this,
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

