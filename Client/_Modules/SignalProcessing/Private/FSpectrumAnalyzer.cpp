// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 20

// FSpectrumAnalyzer @ 1444f26e0

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

FSpectrumAnalyzer * __thiscall
Audio::FSpectrumAnalyzer::FSpectrumAnalyzer
          (FSpectrumAnalyzer *this,FSpectrumAnalyzerSettings *param_1,float param_2)

{
  EFFTSize EVar1;
  uint uVar2;
  uint uVar3;
  
  this->_padding_ = (longlong)&___7FSpectrumAnalyzer_Audio__6B_;
  this->CurrentSettings = *param_1;
  this->bSettingsWereUpdated = false;
  this->bIsInitialized = true;
  this->SampleRate = param_2;
  FWindow::FWindow(&this->Window,param_1->WindowType,(uint)param_1->FFTSize,1,false);
  uVar2 = (uint)(this->CurrentSettings).FFTSize << 2;
  (this->AnalysisTimeDomainBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnalysisTimeDomainBuffer).ArrayNum = 0;
  (this->AnalysisTimeDomainBuffer).ArrayMax = 0;
  (this->SampleCounter).Counter = 0;
  (this->InputQueue).InternalBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar3 = 0x1000;
  if (0x1000 < uVar2) {
    uVar3 = uVar2;
  }
  (this->InputQueue).InternalBuffer.ArrayNum = 0;
  (this->InputQueue).InternalBuffer.ArrayMax = 0;
  (this->InputQueue).ReadCounter.Counter = 0;
  (this->InputQueue).WriteCounter.Counter = 0;
  TCircularAudioBuffer<float,16>::SetCapacity(&this->InputQueue,uVar3);
  EVar1 = param_1->FFTSize;
  (this->FrequencyBuffer).ComplexBuffers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrequencyBuffer).ComplexBuffers.ArrayNum = 0;
  (this->FrequencyBuffer).ComplexBuffers.ArrayMax = 0;
  (this->FrequencyBuffer).Timestamps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrequencyBuffer).Timestamps.ArrayNum = 0;
  (this->FrequencyBuffer).Timestamps.ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->FrequencyBuffer).BufferIndicesCriticalSection,4000);
  FSpectrumAnalyzerBuffer::Reset(&this->FrequencyBuffer,(uint)EVar1);
  this->LockedBufferTimestamp = 0.0;
  this->LockedFrequencyVector = (TArray<float,TAlignedHeapAllocator<16>_> *)0x0;
  (this->FFT).Ptr = (IFFTAlgorithm *)0x0;
  ResetSettings(this);
  return this;
}

// FSpectrumAnalyzer @ 1444f27e0

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

FSpectrumAnalyzer * __thiscall
Audio::FSpectrumAnalyzer::FSpectrumAnalyzer(FSpectrumAnalyzer *this,float param_1)

{
  EWindowType EVar1;
  EFFTSize EVar2;
  uint uVar3;
  uint uVar4;
  
  (this->CurrentSettings).WindowType = Hann;
  (this->CurrentSettings).FFTSize = Default;
  this->_padding_ = (longlong)&___7FSpectrumAnalyzer_Audio__6B_;
  (this->CurrentSettings).HopSize = 0.0;
  EVar2 = (this->CurrentSettings).FFTSize;
  EVar1 = (this->CurrentSettings).WindowType;
  this->bSettingsWereUpdated = false;
  this->bIsInitialized = true;
  this->SampleRate = param_1;
  FWindow::FWindow(&this->Window,EVar1,(uint)EVar2,1,false);
  (this->AnalysisTimeDomainBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnalysisTimeDomainBuffer).ArrayNum = 0;
  (this->AnalysisTimeDomainBuffer).ArrayMax = 0;
  (this->SampleCounter).Counter = 0;
  uVar3 = (uint)(this->CurrentSettings).FFTSize << 2;
  (this->InputQueue).InternalBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputQueue).InternalBuffer.ArrayNum = 0;
  (this->InputQueue).InternalBuffer.ArrayMax = 0;
  (this->InputQueue).ReadCounter.Counter = 0;
  uVar4 = 0x1000;
  if (0x1000 < uVar3) {
    uVar4 = uVar3;
  }
  (this->InputQueue).WriteCounter.Counter = 0;
  TCircularAudioBuffer<float,16>::SetCapacity(&this->InputQueue,uVar4);
  EVar2 = (this->CurrentSettings).FFTSize;
  (this->FrequencyBuffer).ComplexBuffers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrequencyBuffer).ComplexBuffers.ArrayNum = 0;
  (this->FrequencyBuffer).ComplexBuffers.ArrayMax = 0;
  (this->FrequencyBuffer).Timestamps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrequencyBuffer).Timestamps.ArrayNum = 0;
  (this->FrequencyBuffer).Timestamps.ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->FrequencyBuffer).BufferIndicesCriticalSection,4000);
  FSpectrumAnalyzerBuffer::Reset(&this->FrequencyBuffer,(uint)EVar2);
  this->LockedBufferTimestamp = 0.0;
  this->LockedFrequencyVector = (TArray<float,TAlignedHeapAllocator<16>_> *)0x0;
  (this->FFT).Ptr = (IFFTAlgorithm *)0x0;
  ResetSettings(this);
  return this;
}

// FSpectrumAnalyzer @ 1444f28e0

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

FSpectrumAnalyzer * __thiscall Audio::FSpectrumAnalyzer::FSpectrumAnalyzer(FSpectrumAnalyzer *this)

{
  EWindowType EVar1;
  EFFTSize EVar2;
  uint uVar3;
  uint uVar4;
  
  (this->CurrentSettings).WindowType = Hann;
  (this->CurrentSettings).FFTSize = Default;
  (this->CurrentSettings).HopSize = 0.0;
  EVar2 = (this->CurrentSettings).FFTSize;
  this->_padding_ = (longlong)&___7FSpectrumAnalyzer_Audio__6B_;
  this->bSettingsWereUpdated = false;
  EVar1 = (this->CurrentSettings).WindowType;
  this->bIsInitialized = false;
  this->SampleRate = 0.0;
  FWindow::FWindow(&this->Window,EVar1,(uint)EVar2,1,false);
  (this->AnalysisTimeDomainBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnalysisTimeDomainBuffer).ArrayNum = 0;
  (this->AnalysisTimeDomainBuffer).ArrayMax = 0;
  (this->SampleCounter).Counter = 0;
  uVar3 = (uint)(this->CurrentSettings).FFTSize << 2;
  (this->InputQueue).InternalBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputQueue).InternalBuffer.ArrayNum = 0;
  (this->InputQueue).InternalBuffer.ArrayMax = 0;
  (this->InputQueue).ReadCounter.Counter = 0;
  uVar4 = 0x1000;
  if (0x1000 < uVar3) {
    uVar4 = uVar3;
  }
  (this->InputQueue).WriteCounter.Counter = 0;
  TCircularAudioBuffer<float,16>::SetCapacity(&this->InputQueue,uVar4);
  EVar2 = (this->CurrentSettings).FFTSize;
  (this->FrequencyBuffer).ComplexBuffers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrequencyBuffer).ComplexBuffers.ArrayNum = 0;
  (this->FrequencyBuffer).ComplexBuffers.ArrayMax = 0;
  (this->FrequencyBuffer).Timestamps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrequencyBuffer).Timestamps.ArrayNum = 0;
  (this->FrequencyBuffer).Timestamps.ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->FrequencyBuffer).BufferIndicesCriticalSection,4000);
  FSpectrumAnalyzerBuffer::Reset(&this->FrequencyBuffer,(uint)EVar2);
  this->LockedBufferTimestamp = 0.0;
  this->LockedFrequencyVector = (TArray<float,TAlignedHeapAllocator<16>_> *)0x0;
  (this->FFT).Ptr = (IFFTAlgorithm *)0x0;
  return this;
}

// ~FSpectrumAnalyzer @ 1444f4670

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FSpectrumAnalyzer::~FSpectrumAnalyzer(FSpectrumAnalyzer *this)

{
  IFFTAlgorithm *pIVar1;
  FScriptContainerElement *pFVar2;
  
  pIVar1 = (this->FFT).Ptr;
  if (pIVar1 != (IFFTAlgorithm *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->FrequencyBuffer).BufferIndicesCriticalSection);
  pFVar2 = (this->FrequencyBuffer).Timestamps.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TArray<float,TAlignedHeapAllocator<16>_>,int>
            ((TArray<float,TAlignedHeapAllocator<16>_> *)
             (this->FrequencyBuffer).ComplexBuffers.AllocatorInstance.Data,
             (this->FrequencyBuffer).ComplexBuffers.ArrayNum);
  pFVar2 = (this->FrequencyBuffer).ComplexBuffers.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->InputQueue).InternalBuffer.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->AnalysisTimeDomainBuffer).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Window).WindowBuffer.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// GetBands @ 1445036b0

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FSpectrumAnalyzer::GetBands
          (FSpectrumAnalyzer *this,ISpectrumBandExtractor *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  bool bVar1;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar2;
  float local_18;
  int local_14;
  EFFTScaling local_10;
  EWindowType local_f;
  
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  if (this->bIsInitialized != false) {
    local_14 = this->FFTSize;
    local_18 = this->SampleRate;
    local_10 = this->FFTScaling;
    local_f = FWindow::GetWindowType(&this->Window);
    (**(code **)((longlong)*param_1 + 0x10))(param_1,&local_18);
    pTVar2 = this->LockedFrequencyVector;
    if (pTVar2 == (TArray<float,TAlignedHeapAllocator<16>_> *)0x0) {
      pTVar2 = FSpectrumAnalyzerBuffer::LockMostRecentBuffer
                         (&this->FrequencyBuffer,&this->LockedBufferTimestamp);
      bVar1 = true;
      if (pTVar2 == (TArray<float,TAlignedHeapAllocator<16>_> *)0x0) {
        return;
      }
    }
    else {
      bVar1 = false;
    }
    (**(code **)((longlong)*param_1 + 0x30))(param_1,pTVar2,this->LockedBufferTimestamp,param_2);
    if (bVar1) {
      FSpectrumAnalyzerBuffer::UnlockBuffer(&this->FrequencyBuffer);
      this->LockedBufferTimestamp = 0.0;
    }
  }
  return;
}

// GetMagnitudeForFrequency @ 144503b60

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

float __thiscall
Audio::FSpectrumAnalyzer::GetMagnitudeForFrequency
          (FSpectrumAnalyzer *this,float param_1,EPeakInterpolationMethod param_2)

{
  bool bVar1;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar2;
  float fVar3;
  float local_res8 [2];
  float local_res20 [2];
  
  if (this->bIsInitialized == false) {
LAB_144503c0f:
    fVar3 = 0.0;
  }
  else {
    pTVar2 = this->LockedFrequencyVector;
    if (pTVar2 == (TArray<float,TAlignedHeapAllocator<16>_> *)0x0) {
      pTVar2 = FSpectrumAnalyzerBuffer::LockMostRecentBuffer(&this->FrequencyBuffer);
      bVar1 = true;
      if (pTVar2 == (TArray<float,TAlignedHeapAllocator<16>_> *)0x0) goto LAB_144503c0f;
    }
    else {
      bVar1 = false;
    }
    PerformInterpolation(this,pTVar2,param_2,param_1,local_res8,local_res20);
    fVar3 = SQRT(local_res8[0] * local_res8[0] + local_res20[0] * local_res20[0]);
    if (bVar1) {
      FSpectrumAnalyzerBuffer::UnlockBuffer(&this->FrequencyBuffer);
      this->LockedBufferTimestamp = 0.0;
    }
  }
  return fVar3;
}

// GetNormalizedMagnitudeForFrequency @ 1445040d0

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

float __thiscall
Audio::FSpectrumAnalyzer::GetNormalizedMagnitudeForFrequency
          (FSpectrumAnalyzer *this,float param_1,EPeakInterpolationMethod param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = 0.0;
  fVar2 = (float)(this->CurrentSettings).FFTSize * __real_3f000000;
  if (0.0 < fVar2) {
    fVar1 = GetMagnitudeForFrequency(this,param_1,param_2);
    fVar1 = fVar1 / fVar2;
  }
  return fVar1;
}

// GetPhaseForFrequency @ 1445047d0

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

float __thiscall
Audio::FSpectrumAnalyzer::GetPhaseForFrequency
          (FSpectrumAnalyzer *this,float param_1,EPeakInterpolationMethod param_2)

{
  bool bVar1;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar2;
  float fVar3;
  float local_res8 [2];
  float local_res20 [2];
  
  if (this->bIsInitialized == false) {
LAB_144504870:
    fVar3 = 0.0;
  }
  else {
    pTVar2 = this->LockedFrequencyVector;
    if (pTVar2 == (TArray<float,TAlignedHeapAllocator<16>_> *)0x0) {
      pTVar2 = FSpectrumAnalyzerBuffer::LockMostRecentBuffer(&this->FrequencyBuffer);
      bVar1 = true;
      if (pTVar2 == (TArray<float,TAlignedHeapAllocator<16>_> *)0x0) goto LAB_144504870;
    }
    else {
      bVar1 = false;
    }
    PerformInterpolation(this,pTVar2,param_2,param_1,local_res8,local_res20);
    fVar3 = FGenericPlatformMath::Atan2(local_res20[0],local_res8[0]);
    if (bVar1) {
      FSpectrumAnalyzerBuffer::UnlockBuffer(&this->FrequencyBuffer);
      this->LockedBufferTimestamp = 0.0;
    }
  }
  return fVar3;
}

// GetSettings @ 144504ac0

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FSpectrumAnalyzer::GetSettings(FSpectrumAnalyzer *this,FSpectrumAnalyzerSettings *param_1)

{
  *param_1 = this->CurrentSettings;
  return;
}

// Init @ 144507d00

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FSpectrumAnalyzer::Init
          (FSpectrumAnalyzer *this,FSpectrumAnalyzerSettings *param_1,float param_2)

{
  uint uVar1;
  uint uVar2;
  
  this->CurrentSettings = *param_1;
  this->SampleRate = param_2;
  this->bSettingsWereUpdated = false;
  LOCK();
  (this->SampleCounter).Counter = 0;
  UNLOCK();
  uVar1 = (uint)(this->CurrentSettings).FFTSize << 2;
  uVar2 = 0x1000;
  if (0x1000 < uVar1) {
    uVar2 = uVar1;
  }
  TCircularAudioBuffer<float,16>::SetCapacity(&this->InputQueue,uVar2);
  FSpectrumAnalyzerBuffer::Reset(&this->FrequencyBuffer,(uint)(this->CurrentSettings).FFTSize);
  ResetSettings(this);
  this->bIsInitialized = true;
  return;
}

// Init @ 144507d60

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FSpectrumAnalyzer::Init(FSpectrumAnalyzer *this,float param_1)

{
  FSpectrumAnalyzerSettings FVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uStackX_9;
  
  this->SampleRate = param_1;
  FVar1._1_1_ = uStackX_9;
  FVar1.WindowType = 2;
  FVar1.FFTSize = 0x200;
  FVar1.HopSize = 0.0;
  this->CurrentSettings = FVar1;
  this->bSettingsWereUpdated = false;
  LOCK();
  (this->SampleCounter).Counter = 0;
  UNLOCK();
  uVar2 = (uint)(this->CurrentSettings).FFTSize << 2;
  uVar3 = 0x1000;
  if (0x1000 < uVar2) {
    uVar3 = uVar2;
  }
  TCircularAudioBuffer<float,16>::SetCapacity(&this->InputQueue,uVar3);
  FSpectrumAnalyzerBuffer::Reset(&this->FrequencyBuffer,(uint)(this->CurrentSettings).FFTSize);
  ResetSettings(this);
  this->bIsInitialized = true;
  return;
}

// IsInitialized @ 1445090f0

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall Audio::FSpectrumAnalyzer::IsInitialized(FSpectrumAnalyzer *this)

{
  return this->bIsInitialized;
}

// LockOutputBuffer @ 144509400

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FSpectrumAnalyzer::LockOutputBuffer(FSpectrumAnalyzer *this)

{
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar1;
  
  if (this->bIsInitialized != false) {
    if (this->LockedFrequencyVector != (TArray<float,TAlignedHeapAllocator<16>_> *)0x0) {
      FSpectrumAnalyzerBuffer::UnlockBuffer(&this->FrequencyBuffer);
      this->LockedBufferTimestamp = 0.0;
    }
    pTVar1 = FSpectrumAnalyzerBuffer::LockMostRecentBuffer
                       (&this->FrequencyBuffer,&this->LockedBufferTimestamp);
    this->LockedFrequencyVector = pTVar1;
  }
  return;
}

// PerformAnalysisIfPossible @ 14450b600

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall
Audio::FSpectrumAnalyzer::PerformAnalysisIfPossible(FSpectrumAnalyzer *this,bool param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  FScriptContainerElement *pFVar2;
  IFFTAlgorithm *pIVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  ulonglong uVar13;
  
  if (this->bIsInitialized != false) {
    if (this->bSettingsWereUpdated != false) {
      ResetSettings(this);
    }
    uVar9 = (this->FrequencyBuffer).InputIndex;
    uVar10 = 0;
    if ((int)uVar9 < (this->FrequencyBuffer).ComplexBuffers.ArrayNum) {
      uVar10 = ~uVar9 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    iVar8 = (this->InputQueue).ReadCounter.Counter;
    pFVar11 = (this->FrequencyBuffer).ComplexBuffers.AllocatorInstance.Data +
              (longlong)(int)uVar9 * 0x10;
    uVar9 = this->HopInSamples;
    if (this->HopInSamples < this->FFTSize) {
      uVar9 = this->FFTSize;
    }
    iVar1 = (this->InputQueue).WriteCounter.Counter;
    uVar10 = iVar1 - iVar8;
    if (iVar1 < iVar8) {
      uVar10 = uVar10 + (this->InputQueue).Capacity;
    }
    if (uVar9 <= uVar10) {
      pFVar2 = (this->AnalysisTimeDomainBuffer).AllocatorInstance.Data;
      if (param_1) {
        uVar9 = this->FFTSize;
        uVar13 = (ulonglong)((this->SampleCounter).Counter - (int)uVar9 / 2);
        if (((this->InputQueue).Capacity <= uVar9) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumSamples < Capacity",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                               ,0x45b,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        iVar8 = (this->InputQueue).WriteCounter.Counter - uVar9;
        if (iVar8 < 0) {
          iVar8 = iVar8 + (this->InputQueue).Capacity;
        }
        LOCK();
        (this->InputQueue).ReadCounter.Counter = iVar8;
        UNLOCK();
        TCircularAudioBuffer<float,16>::Pop(&this->InputQueue,(float *)pFVar2,this->FFTSize);
      }
      else {
        iVar8 = (this->InputQueue).ReadCounter.Counter;
        iVar1 = (this->InputQueue).WriteCounter.Counter;
        iVar12 = iVar1 - iVar8;
        if (iVar1 < iVar8) {
          iVar12 = iVar12 + (this->InputQueue).Capacity;
        }
        uVar13 = (ulonglong)(uint)((this->SampleCounter).Counter + (this->FFTSize / 2 - iVar12));
        TCircularAudioBuffer<float,16>::Peek(&this->InputQueue,(float *)pFVar2,this->FFTSize);
        TCircularAudioBuffer<float,16>::Pop(&this->InputQueue,this->HopInSamples);
      }
      fVar5 = this->SampleRate;
      if (this->SampleRate <= __real_3f800000) {
        fVar5 = __real_3f800000;
      }
      FWindow::ApplyToBuffer(&this->Window,(float *)pFVar2);
      pIVar3 = (this->FFT).Ptr;
      if (pIVar3 == (IFFTAlgorithm *)0x0) {
        if (0 < *(int *)(pFVar11 + 8)) {
          memset(*(void **)pFVar11,0,(longlong)*(int *)(pFVar11 + 8) << 2);
        }
      }
      else {
        iVar8 = (**(code **)((longlong)*pIVar3 + 8))();
        if (((this->AnalysisTimeDomainBuffer).ArrayNum != iVar8) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("AnalysisTimeDomainBuffer.Num() == FFT->NumInputFloats()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\SpectrumAnalyzer.cpp"
                               ,0x445,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        iVar8 = (**(code **)((longlong)*(this->FFT).Ptr + 8))();
        if ((*(int *)(pFVar11 + 8) != iVar8 + 2) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("FFTOutput.Num() == FFT->NumOutputFloats()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\SpectrumAnalyzer.cpp"
                               ,0x446,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        pIVar3 = (this->FFT).Ptr;
        (**(code **)((longlong)*pIVar3 + 0x20))(pIVar3,pFVar2,*(undefined8 *)pFVar11);
      }
      uVar9 = (this->FrequencyBuffer).InputIndex;
      uVar10 = 0;
      if ((int)uVar9 < (this->FrequencyBuffer).Timestamps.ArrayNum) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      *(double *)
       ((this->FrequencyBuffer).Timestamps.AllocatorInstance.Data + (longlong)(int)uVar9 * 8) =
           (double)(longlong)uVar13 / (double)fVar5;
      lpCriticalSection = &(this->FrequencyBuffer).BufferIndicesCriticalSection;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      uVar9 = (this->FrequencyBuffer).InputIndex + 1U & 0x80000003;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
      }
      (this->FrequencyBuffer).InputIndex = uVar9;
      if ((this->FrequencyBuffer).InputIndex == (this->FrequencyBuffer).OutputIndex) {
        uVar9 = (this->FrequencyBuffer).InputIndex + 1U & 0x80000003;
        if ((int)uVar9 < 0) {
          uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
        }
        (this->FrequencyBuffer).InputIndex = uVar9;
      }
      if (((this->FrequencyBuffer).InputIndex == (this->FrequencyBuffer).OutputIndex) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InputIndex != OutputIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\SpectrumAnalyzer.cpp"
                             ,0x492,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return true;
    }
  }
  return false;
}

// PerformInterpolation @ 14450ba50

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FSpectrumAnalyzer::PerformInterpolation
          (FSpectrumAnalyzer *this,TArray<float,TAlignedHeapAllocator<16>_> *param_1,
          EPeakInterpolationMethod param_2,float param_3,float *param_4,float *param_5)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  float fVar9;
  
  fVar3 = __real_3f000000;
  fVar9 = 0.0;
  pFVar1 = (param_1->AllocatorInstance).Data;
  uVar8 = param_1->ArrayNum - 2;
  if (0.0 <= param_3) {
    fVar9 = (__real_40000000 / this->SampleRate) * param_3 * (float)param_1->ArrayNum;
  }
  if (param_2 == NearestNeighbor) {
    uVar6 = (int)ROUND(fVar9 + fVar9 + __real_3f000000) >> 1 & 0xfffffffe;
    if ((int)uVar6 < (int)uVar8) {
      uVar8 = uVar6;
    }
    uVar6 = 0;
    if (0 < (int)uVar8) {
      uVar6 = uVar8;
    }
    *param_4 = *(float *)(pFVar1 + (longlong)(int)uVar6 * 4);
    *param_5 = *(float *)(pFVar1 + (longlong)(int)uVar6 * 4 + 4);
  }
  else {
    if (param_2 == Linear) {
      uVar4 = (int)ROUND((fVar9 + fVar9) - __real_3f000000) >> 1 & 0xfffffffe;
      uVar6 = uVar8;
      if ((int)uVar4 < (int)uVar8) {
        uVar6 = uVar4;
      }
      uVar2 = 0;
      if (0 < (int)uVar6) {
        uVar2 = uVar6;
      }
      if ((int)(uVar4 + 2) < (int)uVar8) {
        uVar8 = uVar4 + 2;
      }
      lVar7 = (longlong)(int)uVar2;
      uVar6 = 0;
      if (0 < (int)uVar8) {
        uVar6 = uVar8;
      }
      *param_4 = *(float *)(pFVar1 + lVar7 * 4);
      *param_5 = (*(float *)(pFVar1 + (longlong)(int)uVar6 * 4 + 4) -
                 *(float *)(pFVar1 + lVar7 * 4 + 4)) * (fVar9 - (float)(int)uVar2) +
                 *(float *)(pFVar1 + lVar7 * 4 + 4);
      return;
    }
    if (param_2 == Quadratic) {
      uVar4 = (int)ROUND(fVar9 + fVar9 + __real_3f000000) >> 1 & 0xfffffffe;
      uVar6 = uVar8;
      if ((int)uVar4 < (int)uVar8) {
        uVar6 = uVar4;
      }
      uVar4 = 0;
      if (0 < (int)uVar6) {
        uVar4 = uVar6;
      }
      iVar5 = uVar4 - 2;
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      lVar7 = (longlong)iVar5;
      uVar6 = uVar4 + 2;
      if ((int)uVar8 < (int)(uVar4 + 2)) {
        uVar6 = uVar8;
      }
      *param_4 = (__real_3f000000 /
                 (((*(float *)(pFVar1 + (longlong)(int)uVar4 * 4) +
                   *(float *)(pFVar1 + (longlong)(int)uVar4 * 4)) - *(float *)(pFVar1 + lVar7 * 4))
                 - *(float *)(pFVar1 + (longlong)(int)uVar6 * 4))) *
                 (*(float *)(pFVar1 + (longlong)(int)uVar6 * 4) - *(float *)(pFVar1 + lVar7 * 4));
      *param_5 = (fVar3 / (((*(float *)(pFVar1 + (longlong)(int)uVar4 * 4 + 4) +
                            *(float *)(pFVar1 + (longlong)(int)uVar4 * 4 + 4)) -
                           *(float *)(pFVar1 + lVar7 * 4 + 4)) -
                          *(float *)(pFVar1 + (longlong)(int)uVar6 * 4 + 4))) *
                 (*(float *)(pFVar1 + (longlong)(int)uVar6 * 4 + 4) -
                 *(float *)(pFVar1 + lVar7 * 4 + 4));
      return;
    }
  }
  return;
}

// PushAudio @ 144514450

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall
Audio::FSpectrumAnalyzer::PushAudio(FSpectrumAnalyzer *this,TSampleBuffer<float> *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  if (param_1->NumChannels != 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InBuffer.GetNumChannels() == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\SpectrumAnalyzer.cpp"
                       ,0x408,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  uVar1 = param_1->NumSamples;
  pFVar2 = (param_1->RawPCMData).AllocatorInstance.Data;
  LOCK();
  (this->SampleCounter).Counter = (this->SampleCounter).Counter + uVar1;
  UNLOCK();
  uVar6 = TCircularAudioBuffer<float,16>::Push(&this->InputQueue,(float *)pFVar2,uVar1);
  return uVar6 == uVar1;
}

// PushAudio @ 1445144d0

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall
Audio::FSpectrumAnalyzer::PushAudio(FSpectrumAnalyzer *this,float *param_1,int param_2)

{
  int iVar1;
  
  LOCK();
  (this->SampleCounter).Counter = (this->SampleCounter).Counter + param_2;
  UNLOCK();
  iVar1 = TCircularAudioBuffer<float,16>::Push(&this->InputQueue,param_1,param_2);
  return iVar1 == param_2;
}

// ResetSettings @ 144518320

/* WARNING: Enum "EFFTSize": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FSpectrumAnalyzer::ResetSettings(FSpectrumAnalyzer *this)

{
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar1;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar2;
  int *piVar3;
  TUniquePtr<Audio::IFFTAlgorithm,TDefaultDelete<Audio::IFFTAlgorithm>_> *pTVar4;
  float fVar5;
  EFFTSize EVar6;
  FScriptContainerElement *pFVar7;
  IFFTAlgorithm *pIVar8;
  code *pcVar9;
  bool bVar10;
  EFFTScaling EVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  FWindow *pFVar15;
  TUniquePtr<Audio::IFFTAlgorithm,TDefaultDelete<Audio::IFFTAlgorithm>_> TVar16;
  ulonglong uVar17;
  FFFTSettings local_res8;
  FFFTSettings local_res10;
  FWindow local_48;
  
  if (this->LockedFrequencyVector == (TArray<float,TAlignedHeapAllocator<16>_> *)0x0) {
    pFVar15 = FWindow::FWindow(&local_48,(this->CurrentSettings).WindowType,
                               (uint)(this->CurrentSettings).FFTSize,1,false);
    pTVar1 = &(this->Window).WindowBuffer;
    pTVar2 = &pFVar15->WindowBuffer;
    (this->Window).WindowType = pFVar15->WindowType;
    if (pTVar1 != pTVar2) {
      pFVar7 = (pTVar1->AllocatorInstance).Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      (pTVar1->AllocatorInstance).Data = (pTVar2->AllocatorInstance).Data;
      (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->Window).WindowBuffer.ArrayNum = (pFVar15->WindowBuffer).ArrayNum;
      (this->Window).WindowBuffer.ArrayMax = (pFVar15->WindowBuffer).ArrayMax;
      (pFVar15->WindowBuffer).ArrayNum = 0;
      (pFVar15->WindowBuffer).ArrayMax = 0;
    }
    (this->Window).NumSamples = pFVar15->NumSamples;
    if (local_48.WindowBuffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.WindowBuffer.AllocatorInstance.Data);
    }
    EVar6 = (this->CurrentSettings).FFTSize;
    this->FFTSize = (uint)EVar6;
    iVar13 = 9;
    if (EVar6 != 0) {
      uVar17 = (ulonglong)EVar6 - ((ulonglong)(EVar6 >> 1) & 0x5555555555555555);
      uVar17 = (uVar17 >> 2 & 0x3333333333333333) + (uVar17 & 0x3333333333333333);
      if ((char)(((uVar17 >> 4) + uVar17 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) != '\x01'
         ) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("FMath::CountBits(FFTSize) == 1",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\SpectrumAnalyzer.cpp"
                            ,0x2c6,L"");
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      iVar14 = 0;
      bVar10 = this->FFTSize != 0;
      if (bVar10) {
        for (; ((uint)this->FFTSize >> iVar14 & 1) == 0; iVar14 = iVar14 + 1) {
        }
      }
      iVar13 = 0x20;
      if (bVar10) {
        iVar13 = iVar14;
      }
    }
    piVar3 = &(this->AnalysisTimeDomainBuffer).ArrayMax;
    (this->AnalysisTimeDomainBuffer).ArrayNum = 0;
    if ((this->AnalysisTimeDomainBuffer).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,0,&(this->AnalysisTimeDomainBuffer).AllocatorInstance,0,piVar3);
    }
    fVar5 = (this->CurrentSettings).HopSize;
    uVar12 = (uint)(this->CurrentSettings).FFTSize;
    if (__real_322bcc77 < (float)((uint)fVar5 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      uVar12 = (int)ROUND((fVar5 + fVar5) * (float)uVar12 - __real_3f000000) >> 1;
    }
    else {
      uVar12 = GetCOLAHopSizeForWindow((this->CurrentSettings).WindowType,uVar12);
    }
    this->HopInSamples = uVar12;
    local_res8.bArrays128BitAligned = true;
    local_res8.bEnableHardwareAcceleration = true;
    local_res8.Log2Size = iVar13;
    TVar16 = FFFTFactory::NewFFTAlgorithm(&local_res10,(FName *)&local_res8);
    pTVar4 = &this->FFT;
    if ((IFFTAlgorithm *)pTVar4 != TVar16.Ptr) {
      pIVar8 = pTVar4->Ptr;
      pTVar4->Ptr = (IFFTAlgorithm *)*TVar16.Ptr;
      *TVar16.Ptr = (IFFTAlgorithm)0x0;
      if (pIVar8 != (IFFTAlgorithm *)0x0) {
        (**(code **)*pIVar8)(pIVar8,1);
      }
    }
    if (local_res10 != (FFFTSettings)0x0) {
      (*(code *)**(undefined8 **)local_res10)(local_res10,1);
    }
    if (pTVar4->Ptr == (IFFTAlgorithm *)0x0) {
      bVar10 = FFFTFactory::AreFFTSettingsSupported(&local_res8,&FFFTFactory::AnyAlgorithmFactory);
      if (bVar10) {
        if (1 < (byte)LogSignalProcessing._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSignalProcessing);
        }
      }
      else if (2 < (byte)LogSignalProcessing._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSignalProcessing);
      }
      this->FFTScaling = None;
      if (0 < this->FFTSize) {
        TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed
                  (&this->AnalysisTimeDomainBuffer,this->FFTSize);
        FSpectrumAnalyzerBuffer::Reset(&this->FrequencyBuffer,this->FFTSize);
      }
    }
    else {
      iVar13 = (**(code **)((longlong)*pTVar4->Ptr + 8))();
      iVar14 = (**(code **)((longlong)*pTVar4->Ptr + 8))();
      EVar11 = (**(code **)((longlong)*pTVar4->Ptr + 0x10))();
      this->FFTScaling = EVar11;
      if (0 < iVar13) {
        UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,iVar13,&(this->AnalysisTimeDomainBuffer).AllocatorInstance,
                   &(this->AnalysisTimeDomainBuffer).ArrayNum,piVar3);
      }
      FSpectrumAnalyzerBuffer::Reset(&this->FrequencyBuffer,iVar14 + 2);
    }
    this->bSettingsWereUpdated = false;
  }
  return;
}

// SetSettings @ 14451cd50

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FSpectrumAnalyzer::SetSettings(FSpectrumAnalyzer *this,FSpectrumAnalyzerSettings *param_1)

{
  this->CurrentSettings = *param_1;
  this->bSettingsWereUpdated = true;
  return;
}

// UnlockOutputBuffer @ 14451f310

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FSpectrumAnalyzer::UnlockOutputBuffer(FSpectrumAnalyzer *this)

{
  if ((this->bIsInitialized != false) &&
     (this->LockedFrequencyVector != (TArray<float,TAlignedHeapAllocator<16>_> *)0x0)) {
    FSpectrumAnalyzerBuffer::UnlockBuffer(&this->FrequencyBuffer);
    this->LockedFrequencyVector = (TArray<float,TAlignedHeapAllocator<16>_> *)0x0;
    this->LockedBufferTimestamp = 0.0;
  }
  return;
}

