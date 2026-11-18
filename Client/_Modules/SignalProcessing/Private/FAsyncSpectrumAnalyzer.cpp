// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 19

// FAsyncSpectrumAnalyzer @ 1444edfd0

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

FAsyncSpectrumAnalyzer * __thiscall
Audio::FAsyncSpectrumAnalyzer::FAsyncSpectrumAnalyzer
          (FAsyncSpectrumAnalyzer *this,FSpectrumAnalyzerSettings *param_1,float param_2)

{
  EFFTSize EVar1;
  code *pcVar2;
  undefined1 uVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  TReferenceControllerBase<1> *pTVar7;
  FAsyncSpectrumAnalyzer *pFVar8;
  uint uVar9;
  
  this->_padding_ = (longlong)&___7FAsyncSpectrumAnalyzer_Audio__6B_;
  pTVar7 = ::operator_new(0xf8);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    (this->Analyzer).Object = (FSpectrumAnalyzer *)0x10;
    (this->Analyzer).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFSpectrumAnalyzer_Audio___00_SharedPointerInternals__6B_
    ;
    pTVar7[1]._padding_ = (longlong)&___7FSpectrumAnalyzer_Audio__6B_;
    uVar3 = param_1->field_0x1;
    EVar1 = param_1->FFTSize;
    fVar4 = param_1->HopSize;
    pTVar7[1].SharedReferenceCount.field_0x0 = param_1->WindowType;
    pTVar7[1].SharedReferenceCount.field_0x1 = uVar3;
    *(EFFTSize *)&pTVar7[1].SharedReferenceCount.field_0x2 = EVar1;
    pTVar7[1].WeakReferenceCount = (atomic<int>)fVar4;
    *(undefined1 *)&pTVar7[2]._padding_ = 0;
    *(undefined1 *)((longlong)&pTVar7[2]._padding_ + 1) = 1;
    *(float *)((longlong)&pTVar7[2]._padding_ + 4) = param_2;
    FWindow::FWindow((FWindow *)&pTVar7[2].SharedReferenceCount,param_1->WindowType,
                     (uint)param_1->FFTSize,1,false);
    uVar6 = (uint)*(ushort *)&pTVar7[1].SharedReferenceCount.field_0x2 << 2;
    pTVar7[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[6]._padding_ = 0;
    pTVar7[6].SharedReferenceCount = (atomic<int>)0x0;
    (((TCircularAudioBuffer<float,16> *)(pTVar7 + 7))->InternalBuffer).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    uVar9 = 0x1000;
    if (0x1000 < uVar6) {
      uVar9 = uVar6;
    }
    pTVar7[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[7].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)((longlong)&pTVar7[8]._padding_ + 4) = 0;
    pTVar7[8].SharedReferenceCount = (atomic<int>)0x0;
    TCircularAudioBuffer<float,16>::SetCapacity
              ((TCircularAudioBuffer<float,16> *)(pTVar7 + 7),uVar9);
    EVar1 = param_1->FFTSize;
    (((FSpectrumAnalyzerBuffer *)(pTVar7 + 9))->ComplexBuffers).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    pTVar7[9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[9].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[10]._padding_ = 0;
    pTVar7[10].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[10].WeakReferenceCount = (atomic<int>)0x0;
    InitializeCriticalSectionAndSpinCount
              ((LPCRITICAL_SECTION)&pTVar7[0xb].SharedReferenceCount,4000);
    FSpectrumAnalyzerBuffer::Reset((FSpectrumAnalyzerBuffer *)(pTVar7 + 9),(uint)EVar1);
    pTVar7[0xe]._padding_ = 0;
    pTVar7[0xe].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[0xe].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[0xf]._padding_ = 0;
    FSpectrumAnalyzer::ResetSettings((FSpectrumAnalyzer *)(pTVar7 + 1));
    (this->Analyzer).Object = (FSpectrumAnalyzer *)(pTVar7 + 1);
    (this->Analyzer).SharedReferenceCount.ReferenceController = pTVar7;
    if ((FSpectrumAnalyzer *)(pTVar7 + 1) == (FSpectrumAnalyzer *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        pFVar8 = (FAsyncSpectrumAnalyzer *)(*pcVar2)();
        return pFVar8;
      }
    }
  }
  (this->AsyncAnalysisTask).Ptr = (FAsyncTask<Audio::FSpectrumAnalysisAsyncWorker> *)0x0;
  return this;
}

// FAsyncSpectrumAnalyzer @ 1444ee170

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

FAsyncSpectrumAnalyzer * __thiscall
Audio::FAsyncSpectrumAnalyzer::FAsyncSpectrumAnalyzer(FAsyncSpectrumAnalyzer *this,float param_1)

{
  EWindowType EVar1;
  ushort uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TReferenceControllerBase<1> *pTVar6;
  FAsyncSpectrumAnalyzer *pFVar7;
  uint uVar8;
  
  this->_padding_ = (longlong)&___7FAsyncSpectrumAnalyzer_Audio__6B_;
  pTVar6 = ::operator_new(0xf8);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    (this->Analyzer).Object = (FSpectrumAnalyzer *)0x10;
    (this->Analyzer).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    *(undefined1 *)&pTVar6[1].SharedReferenceCount = 2;
    EVar1 = *(EWindowType *)&pTVar6[1].SharedReferenceCount;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFSpectrumAnalyzer_Audio___00_SharedPointerInternals__6B_
    ;
    *(undefined2 *)&pTVar6[1].SharedReferenceCount.field_0x2 = 0x200;
    pTVar6[1].WeakReferenceCount = (atomic<int>)0x0;
    uVar2 = *(ushort *)&pTVar6[1].SharedReferenceCount.field_0x2;
    pTVar6[1]._padding_ = (longlong)&___7FSpectrumAnalyzer_Audio__6B_;
    *(undefined1 *)&pTVar6[2]._padding_ = 0;
    *(undefined1 *)((longlong)&pTVar6[2]._padding_ + 1) = 1;
    *(float *)((longlong)&pTVar6[2]._padding_ + 4) = param_1;
    FWindow::FWindow((FWindow *)&pTVar6[2].SharedReferenceCount,EVar1,(uint)uVar2,1,false);
    pTVar6[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[6]._padding_ = 0;
    pTVar6[6].SharedReferenceCount = (atomic<int>)0x0;
    uVar5 = (uint)*(ushort *)&pTVar6[1].SharedReferenceCount.field_0x2 << 2;
    (((TCircularAudioBuffer<float,16> *)(pTVar6 + 7))->InternalBuffer).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    pTVar6[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[7].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)((longlong)&pTVar6[8]._padding_ + 4) = 0;
    uVar8 = 0x1000;
    if (0x1000 < uVar5) {
      uVar8 = uVar5;
    }
    pTVar6[8].SharedReferenceCount = (atomic<int>)0x0;
    TCircularAudioBuffer<float,16>::SetCapacity
              ((TCircularAudioBuffer<float,16> *)(pTVar6 + 7),uVar8);
    uVar2 = *(ushort *)&pTVar6[1].SharedReferenceCount.field_0x2;
    (((FSpectrumAnalyzerBuffer *)(pTVar6 + 9))->ComplexBuffers).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    pTVar6[9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[9].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[10]._padding_ = 0;
    pTVar6[10].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[10].WeakReferenceCount = (atomic<int>)0x0;
    InitializeCriticalSectionAndSpinCount
              ((LPCRITICAL_SECTION)&pTVar6[0xb].SharedReferenceCount,4000);
    FSpectrumAnalyzerBuffer::Reset((FSpectrumAnalyzerBuffer *)(pTVar6 + 9),(uint)uVar2);
    pTVar6[0xe]._padding_ = 0;
    pTVar6[0xe].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0xe].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0xf]._padding_ = 0;
    FSpectrumAnalyzer::ResetSettings((FSpectrumAnalyzer *)(pTVar6 + 1));
    (this->Analyzer).Object = (FSpectrumAnalyzer *)(pTVar6 + 1);
    (this->Analyzer).SharedReferenceCount.ReferenceController = pTVar6;
    if ((FSpectrumAnalyzer *)(pTVar6 + 1) == (FSpectrumAnalyzer *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FAsyncSpectrumAnalyzer *)(*pcVar3)();
        return pFVar7;
      }
    }
  }
  (this->AsyncAnalysisTask).Ptr = (FAsyncTask<Audio::FSpectrumAnalysisAsyncWorker> *)0x0;
  return this;
}

// FAsyncSpectrumAnalyzer @ 1444ee310

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

FAsyncSpectrumAnalyzer * __thiscall
Audio::FAsyncSpectrumAnalyzer::FAsyncSpectrumAnalyzer(FAsyncSpectrumAnalyzer *this)

{
  EWindowType EVar1;
  ushort uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TReferenceControllerBase<1> *pTVar6;
  FAsyncSpectrumAnalyzer *pFVar7;
  uint uVar8;
  
  this->_padding_ = (longlong)&___7FAsyncSpectrumAnalyzer_Audio__6B_;
  pTVar6 = ::operator_new(0xf8);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    (this->Analyzer).Object = (FSpectrumAnalyzer *)0x10;
    (this->Analyzer).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    *(undefined1 *)&pTVar6[1].SharedReferenceCount = 2;
    EVar1 = *(EWindowType *)&pTVar6[1].SharedReferenceCount;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFSpectrumAnalyzer_Audio___00_SharedPointerInternals__6B_
    ;
    *(undefined2 *)&pTVar6[1].SharedReferenceCount.field_0x2 = 0x200;
    pTVar6[1].WeakReferenceCount = (atomic<int>)0x0;
    uVar2 = *(ushort *)&pTVar6[1].SharedReferenceCount.field_0x2;
    pTVar6[1]._padding_ = (longlong)&___7FSpectrumAnalyzer_Audio__6B_;
    *(undefined1 *)&pTVar6[2]._padding_ = 0;
    *(undefined1 *)((longlong)&pTVar6[2]._padding_ + 1) = 0;
    *(undefined4 *)((longlong)&pTVar6[2]._padding_ + 4) = 0;
    FWindow::FWindow((FWindow *)&pTVar6[2].SharedReferenceCount,EVar1,(uint)uVar2,1,false);
    pTVar6[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[6]._padding_ = 0;
    pTVar6[6].SharedReferenceCount = (atomic<int>)0x0;
    uVar5 = (uint)*(ushort *)&pTVar6[1].SharedReferenceCount.field_0x2 << 2;
    (((TCircularAudioBuffer<float,16> *)(pTVar6 + 7))->InternalBuffer).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    pTVar6[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[7].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)((longlong)&pTVar6[8]._padding_ + 4) = 0;
    uVar8 = 0x1000;
    if (0x1000 < uVar5) {
      uVar8 = uVar5;
    }
    pTVar6[8].SharedReferenceCount = (atomic<int>)0x0;
    TCircularAudioBuffer<float,16>::SetCapacity
              ((TCircularAudioBuffer<float,16> *)(pTVar6 + 7),uVar8);
    uVar2 = *(ushort *)&pTVar6[1].SharedReferenceCount.field_0x2;
    (((FSpectrumAnalyzerBuffer *)(pTVar6 + 9))->ComplexBuffers).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    pTVar6[9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[9].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[10]._padding_ = 0;
    pTVar6[10].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[10].WeakReferenceCount = (atomic<int>)0x0;
    InitializeCriticalSectionAndSpinCount
              ((LPCRITICAL_SECTION)&pTVar6[0xb].SharedReferenceCount,4000);
    FSpectrumAnalyzerBuffer::Reset((FSpectrumAnalyzerBuffer *)(pTVar6 + 9),(uint)uVar2);
    pTVar6[0xe]._padding_ = 0;
    pTVar6[0xe].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0xe].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0xf]._padding_ = 0;
    (this->Analyzer).Object = (FSpectrumAnalyzer *)(pTVar6 + 1);
    (this->Analyzer).SharedReferenceCount.ReferenceController = pTVar6;
    if ((FSpectrumAnalyzer *)(pTVar6 + 1) == (FSpectrumAnalyzer *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FAsyncSpectrumAnalyzer *)(*pcVar3)();
        return pFVar7;
      }
    }
  }
  (this->AsyncAnalysisTask).Ptr = (FAsyncTask<Audio::FSpectrumAnalysisAsyncWorker> *)0x0;
  return this;
}

// ~FAsyncSpectrumAnalyzer @ 1444f3610

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FAsyncSpectrumAnalyzer::~FAsyncSpectrumAnalyzer(FAsyncSpectrumAnalyzer *this)

{
  int iVar1;
  FAsyncTask<Audio::FSpectrumAnalysisAsyncWorker> *pFVar2;
  FQueuedThreadPool *pFVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  
  this->_padding_ = (longlong)&___7FAsyncSpectrumAnalyzer_Audio__6B_;
  pFVar2 = (this->AsyncAnalysisTask).Ptr;
  if (pFVar2 != (FAsyncTask<Audio::FSpectrumAnalysisAsyncWorker> *)0x0) {
    if (((FThreadSafeCounter *)&pFVar2->_padding_)->Counter == 0) {
      FAsyncTaskBase::SyncCompletion((FAsyncTaskBase *)pFVar2,false);
    }
    else {
      pFVar2 = (this->AsyncAnalysisTask).Ptr;
      pFVar3 = (FQueuedThreadPool *)pFVar2->_padding_;
      if (pFVar3 != (FQueuedThreadPool *)0x0) {
        cVar5 = (**(code **)((longlong)*pFVar3 + 0x20))(pFVar3,pFVar2);
        iVar1 = ((FThreadSafeCounter *)&pFVar2->_padding_)->Counter;
        if (cVar5 != '\0') {
          if ((iVar1 != 1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("WorkNotFinishedCounter.GetValue() == 1",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                                 ,0x1e8,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          LOCK();
          ((FThreadSafeCounter *)&pFVar2->_padding_)->Counter =
               ((FThreadSafeCounter *)&pFVar2->_padding_)->Counter + -1;
          UNLOCK();
          FAsyncTaskBase::FinishThreadedWork((FAsyncTaskBase *)pFVar2);
          pFVar2->_padding_ = 0;
          goto LAB_1444f36c8;
        }
        if (iVar1 != 0) {
          (**(code **)(pFVar2->_padding_ + 0x40))(pFVar2);
        }
      }
      FAsyncTaskBase::EnsureCompletion((FAsyncTaskBase *)(this->AsyncAnalysisTask).Ptr,true,false);
    }
  }
LAB_1444f36c8:
  pFVar2 = (this->AsyncAnalysisTask).Ptr;
  if (pFVar2 != (FAsyncTask<Audio::FSpectrumAnalysisAsyncWorker> *)0x0) {
    (**(code **)(pFVar2->_padding_ + 0x28))(pFVar2,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Analyzer).SharedReferenceCount.ReferenceController);
  return;
}

// GetBands @ 144503590

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FAsyncSpectrumAnalyzer::GetBands
          (FAsyncSpectrumAnalyzer *this,ISpectrumBandExtractor *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  FSpectrumAnalyzer *pFVar1;
  bool bVar2;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar3;
  float local_18;
  int local_14;
  EFFTScaling local_10;
  EWindowType local_f;
  
  pFVar1 = (this->Analyzer).Object;
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  if (pFVar1->bIsInitialized != false) {
    local_14 = pFVar1->FFTSize;
    local_18 = pFVar1->SampleRate;
    local_10 = pFVar1->FFTScaling;
    local_f = FWindow::GetWindowType(&pFVar1->Window);
    (**(code **)((longlong)*param_1 + 0x10))(param_1,&local_18);
    pTVar3 = pFVar1->LockedFrequencyVector;
    if (pTVar3 == (TArray<float,TAlignedHeapAllocator<16>_> *)0x0) {
      pTVar3 = FSpectrumAnalyzerBuffer::LockMostRecentBuffer
                         (&pFVar1->FrequencyBuffer,&pFVar1->LockedBufferTimestamp);
      bVar2 = true;
      if (pTVar3 == (TArray<float,TAlignedHeapAllocator<16>_> *)0x0) {
        return;
      }
    }
    else {
      bVar2 = false;
    }
    (**(code **)((longlong)*param_1 + 0x30))(param_1,pTVar3,pFVar1->LockedBufferTimestamp,param_2);
    if (bVar2) {
      FSpectrumAnalyzerBuffer::UnlockBuffer(&pFVar1->FrequencyBuffer);
      pFVar1->LockedBufferTimestamp = 0.0;
    }
  }
  return;
}

// GetMagnitudeForFrequency @ 144503b50

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

float __thiscall
Audio::FAsyncSpectrumAnalyzer::GetMagnitudeForFrequency
          (FAsyncSpectrumAnalyzer *this,float param_1,EPeakInterpolationMethod param_2)

{
  float fVar1;
  
  fVar1 = FSpectrumAnalyzer::GetMagnitudeForFrequency((this->Analyzer).Object,param_1,param_2);
  return fVar1;
}

// GetNormalizedMagnitudeForFrequency @ 144504080

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

float __thiscall
Audio::FAsyncSpectrumAnalyzer::GetNormalizedMagnitudeForFrequency
          (FAsyncSpectrumAnalyzer *this,float param_1,EPeakInterpolationMethod param_2)

{
  FSpectrumAnalyzer *this_00;
  float fVar1;
  float fVar2;
  
  this_00 = (this->Analyzer).Object;
  fVar1 = 0.0;
  fVar2 = (float)(this_00->CurrentSettings).FFTSize * __real_3f000000;
  if (0.0 < fVar2) {
    fVar1 = FSpectrumAnalyzer::GetMagnitudeForFrequency(this_00,param_1,param_2);
    fVar1 = fVar1 / fVar2;
  }
  return fVar1;
}

// GetPhaseForFrequency @ 1445046f0

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

float __thiscall
Audio::FAsyncSpectrumAnalyzer::GetPhaseForFrequency
          (FAsyncSpectrumAnalyzer *this,float param_1,EPeakInterpolationMethod param_2)

{
  FSpectrumAnalyzer *this_00;
  bool bVar1;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar2;
  float fVar3;
  float local_res8 [2];
  float local_res20 [2];
  
  this_00 = (this->Analyzer).Object;
  if (this_00->bIsInitialized == false) {
    return 0.0;
  }
  pTVar2 = this_00->LockedFrequencyVector;
  if (pTVar2 == (TArray<float,TAlignedHeapAllocator<16>_> *)0x0) {
    pTVar2 = FSpectrumAnalyzerBuffer::LockMostRecentBuffer(&this_00->FrequencyBuffer);
    bVar1 = true;
    if (pTVar2 == (TArray<float,TAlignedHeapAllocator<16>_> *)0x0) {
      return 0.0;
    }
  }
  else {
    bVar1 = false;
  }
  FSpectrumAnalyzer::PerformInterpolation(this_00,pTVar2,param_2,param_1,local_res8,local_res20);
  fVar3 = FGenericPlatformMath::Atan2(local_res20[0],local_res8[0]);
  if (bVar1) {
    FSpectrumAnalyzerBuffer::UnlockBuffer(&this_00->FrequencyBuffer);
    this_00->LockedBufferTimestamp = 0.0;
  }
  return fVar3;
}

// GetSettings @ 144504a90

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FAsyncSpectrumAnalyzer::GetSettings
          (FAsyncSpectrumAnalyzer *this,FSpectrumAnalyzerSettings *param_1)

{
  *param_1 = ((this->Analyzer).Object)->CurrentSettings;
  return;
}

// Init @ 144505030

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FAsyncSpectrumAnalyzer::Init
          (FAsyncSpectrumAnalyzer *this,FSpectrumAnalyzerSettings *param_1,float param_2)

{
  FSpectrumAnalyzer *this_00;
  uint uVar1;
  uint uVar2;
  
  this_00 = (this->Analyzer).Object;
  this_00->CurrentSettings = *param_1;
  this_00->SampleRate = param_2;
  this_00->bSettingsWereUpdated = false;
  LOCK();
  (this_00->SampleCounter).Counter = 0;
  UNLOCK();
  uVar1 = (uint)(this_00->CurrentSettings).FFTSize << 2;
  uVar2 = 0x1000;
  if (0x1000 < uVar1) {
    uVar2 = uVar1;
  }
  TCircularAudioBuffer<float,16>::SetCapacity(&this_00->InputQueue,uVar2);
  FSpectrumAnalyzerBuffer::Reset(&this_00->FrequencyBuffer,(uint)(this_00->CurrentSettings).FFTSize)
  ;
  FSpectrumAnalyzer::ResetSettings(this_00);
  this_00->bIsInitialized = true;
  return;
}

// Init @ 1445050a0

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FAsyncSpectrumAnalyzer::Init(FAsyncSpectrumAnalyzer *this,float param_1)

{
  FSpectrumAnalyzer *this_00;
  FSpectrumAnalyzerSettings FVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uStackX_9;
  
  this_00 = (this->Analyzer).Object;
  FVar1._1_1_ = uStackX_9;
  FVar1.WindowType = 2;
  FVar1.FFTSize = 0x200;
  FVar1.HopSize = 0.0;
  this_00->CurrentSettings = FVar1;
  this_00->SampleRate = param_1;
  this_00->bSettingsWereUpdated = false;
  LOCK();
  (this_00->SampleCounter).Counter = 0;
  UNLOCK();
  uVar2 = (uint)(this_00->CurrentSettings).FFTSize << 2;
  uVar3 = 0x1000;
  if (0x1000 < uVar2) {
    uVar3 = uVar2;
  }
  TCircularAudioBuffer<float,16>::SetCapacity(&this_00->InputQueue,uVar3);
  FSpectrumAnalyzerBuffer::Reset(&this_00->FrequencyBuffer,(uint)(this_00->CurrentSettings).FFTSize)
  ;
  FSpectrumAnalyzer::ResetSettings(this_00);
  this_00->bIsInitialized = true;
  return;
}

// IsInitialized @ 1445090c0

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall Audio::FAsyncSpectrumAnalyzer::IsInitialized(FAsyncSpectrumAnalyzer *this)

{
  return ((this->Analyzer).Object)->bIsInitialized;
}

// LockOutputBuffer @ 144509390

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FAsyncSpectrumAnalyzer::LockOutputBuffer(FAsyncSpectrumAnalyzer *this)

{
  FSpectrumAnalyzer *pFVar1;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar2;
  
  pFVar1 = (this->Analyzer).Object;
  if (pFVar1->bIsInitialized != false) {
    if (pFVar1->LockedFrequencyVector != (TArray<float,TAlignedHeapAllocator<16>_> *)0x0) {
      FSpectrumAnalyzerBuffer::UnlockBuffer(&pFVar1->FrequencyBuffer);
      pFVar1->LockedBufferTimestamp = 0.0;
    }
    pTVar2 = FSpectrumAnalyzerBuffer::LockMostRecentBuffer
                       (&pFVar1->FrequencyBuffer,&pFVar1->LockedBufferTimestamp);
    pFVar1->LockedFrequencyVector = pTVar2;
  }
  return;
}

// PerformAnalysisIfPossible @ 14450b5f0

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall
Audio::FAsyncSpectrumAnalyzer::PerformAnalysisIfPossible(FAsyncSpectrumAnalyzer *this,bool param_1)

{
  bool bVar1;
  
  bVar1 = FSpectrumAnalyzer::PerformAnalysisIfPossible((this->Analyzer).Object,param_1);
  return bVar1;
}

// PerformAsyncAnalysisIfPossible @ 14450b990

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall
Audio::FAsyncSpectrumAnalyzer::PerformAsyncAnalysisIfPossible
          (FAsyncSpectrumAnalyzer *this,bool param_1)

{
  FAsyncTask<Audio::FSpectrumAnalysisAsyncWorker> *pFVar1;
  FAsyncTask<Audio::FSpectrumAnalysisAsyncWorker> *pFVar2;
  bool local_res10 [24];
  
  if (((this->Analyzer).Object)->bIsInitialized == false) {
    return false;
  }
  pFVar2 = (this->AsyncAnalysisTask).Ptr;
  local_res10[0] = param_1;
  if (pFVar2 == (FAsyncTask<Audio::FSpectrumAnalysisAsyncWorker> *)0x0) {
    pFVar1 = ::operator_new(0xb0);
    pFVar2 = (FAsyncTask<Audio::FSpectrumAnalysisAsyncWorker> *)0x0;
    if (pFVar1 != (FAsyncTask<Audio::FSpectrumAnalysisAsyncWorker> *)0x0) {
      pFVar2 = FAsyncTask<Audio::FSpectrumAnalysisAsyncWorker>::
               FAsyncTask<Audio::FSpectrumAnalysisAsyncWorker><TSharedRef<Audio::FSpectrumAnalyzer,1>_&,bool_&>
                         (pFVar1,&this->Analyzer,local_res10);
    }
    pFVar1 = (this->AsyncAnalysisTask).Ptr;
    if ((pFVar1 != pFVar2) &&
       ((this->AsyncAnalysisTask).Ptr = pFVar2,
       pFVar1 != (FAsyncTask<Audio::FSpectrumAnalysisAsyncWorker> *)0x0)) {
      (**(code **)(pFVar1->_padding_ + 0x28))();
    }
  }
  else {
    if (((FThreadSafeCounter *)&pFVar2->_padding_)->Counter != 0) {
      return true;
    }
    FAsyncTaskBase::SyncCompletion((FAsyncTaskBase *)pFVar2,false);
  }
  FAsyncTaskBase::Start
            ((FAsyncTaskBase *)(this->AsyncAnalysisTask).Ptr,false,GThreadPool,Normal,None,-1,
             (wchar_t *)0x0);
  return true;
}

// PushAudio @ 144514090

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall
Audio::FAsyncSpectrumAnalyzer::PushAudio(FAsyncSpectrumAnalyzer *this,TSampleBuffer<float> *param_1)

{
  FThreadSafeCounter *pFVar1;
  uint uVar2;
  FSpectrumAnalyzer *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  
  pFVar3 = (this->Analyzer).Object;
  if (param_1->NumChannels != 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InBuffer.GetNumChannels() == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\SpectrumAnalyzer.cpp"
                       ,0x408,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  uVar2 = param_1->NumSamples;
  pFVar4 = (param_1->RawPCMData).AllocatorInstance.Data;
  LOCK();
  pFVar1 = &pFVar3->SampleCounter;
  pFVar1->Counter = pFVar1->Counter + uVar2;
  UNLOCK();
  uVar8 = TCircularAudioBuffer<float,16>::Push(&pFVar3->InputQueue,(float *)pFVar4,uVar2);
  return uVar8 == uVar2;
}

// PushAudio @ 144514110

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

bool __thiscall
Audio::FAsyncSpectrumAnalyzer::PushAudio(FAsyncSpectrumAnalyzer *this,float *param_1,int param_2)

{
  FThreadSafeCounter *pFVar1;
  FSpectrumAnalyzer *pFVar2;
  int iVar3;
  
  pFVar2 = (this->Analyzer).Object;
  LOCK();
  pFVar1 = &pFVar2->SampleCounter;
  pFVar1->Counter = pFVar1->Counter + param_2;
  UNLOCK();
  iVar3 = TCircularAudioBuffer<float,16>::Push(&pFVar2->InputQueue,param_1,param_2);
  return iVar3 == param_2;
}

// SetSettings @ 14451c880

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall
Audio::FAsyncSpectrumAnalyzer::SetSettings
          (FAsyncSpectrumAnalyzer *this,FSpectrumAnalyzerSettings *param_1)

{
  FSpectrumAnalyzer *pFVar1;
  
  pFVar1 = (this->Analyzer).Object;
  pFVar1->CurrentSettings = *param_1;
  pFVar1->bSettingsWereUpdated = true;
  return;
}

// UnlockOutputBuffer @ 14451f2c0

/* WARNING: Enum "EFFTSize": Some values do not have unique names */

void __thiscall Audio::FAsyncSpectrumAnalyzer::UnlockOutputBuffer(FAsyncSpectrumAnalyzer *this)

{
  FSpectrumAnalyzer *pFVar1;
  
  pFVar1 = (this->Analyzer).Object;
  if ((pFVar1->bIsInitialized != false) &&
     (pFVar1->LockedFrequencyVector != (TArray<float,TAlignedHeapAllocator<16>_> *)0x0)) {
    FSpectrumAnalyzerBuffer::UnlockBuffer(&pFVar1->FrequencyBuffer);
    pFVar1->LockedFrequencyVector = (TArray<float,TAlignedHeapAllocator<16>_> *)0x0;
    pFVar1->LockedBufferTimestamp = 0.0;
  }
  return;
}

