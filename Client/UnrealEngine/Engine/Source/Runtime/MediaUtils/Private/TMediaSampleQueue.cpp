// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaUtils
// Functions: 55

// TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_> @ 146bf2330

TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_> * __thiscall
TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>::
TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>
          (TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_> *this,
          int param_1)

{
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__TMediaSampleSink<IMediaOverlaySample>__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__TMediaSampleSource<IMediaOverlaySample>__;
  this->_padding_ = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CriticalSection,4000);
  (this->Samples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Samples).ArrayNum = 0;
  (this->Samples).ArrayMax = 0;
  this->MaxSamplesInQueue = param_1;
  this->FlushCount = 0;
  this->NumDroppedSamples = 0;
  return this;
}

// TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> @ 146bf23b0

TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> * __thiscall
TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>::
TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>
          (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *this,
          int param_1)

{
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__TMediaSampleSink<IMediaTextureSample>__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__TMediaSampleSource<IMediaTextureSample>__;
  this->_padding_ = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CriticalSection,4000);
  (this->Samples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Samples).ArrayNum = 0;
  (this->Samples).ArrayMax = 0;
  this->MaxSamplesInQueue = param_1;
  this->FlushCount = 0;
  this->NumDroppedSamples = 0;
  return this;
}

// ~TMediaSampleQueue<IMediaAudioSample,FMediaAudioSampleSink> @ 146bf2d30

void __thiscall
TMediaSampleQueue<IMediaAudioSample,FMediaAudioSampleSink>::
~TMediaSampleQueue<IMediaAudioSample,FMediaAudioSampleSink>
          (TMediaSampleQueue<IMediaAudioSample,FMediaAudioSampleSink> *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__FMediaAudioSampleSink__;
  this->_padding_ = (longlong)&_vftable__for__TMediaSampleSource<IMediaAudioSample>__;
  DestructItems<TSharedPtr<IMediaAudioSample,1>,int>
            ((TSharedPtr<IMediaAudioSample,1> *)(this->Samples).AllocatorInstance.Data,
             (this->Samples).ArrayNum);
  pFVar1 = (this->Samples).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  this->_padding_ = (longlong)&___7__TMediaSampleSource_VIMediaAudioSample____6B_;
  this->_padding_ = (longlong)&___7__TMediaSampleSink_VIMediaAudioSample____6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)this->_padding_,
             (int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  return;
}

// ~TMediaSampleQueue<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_> @ 146bf2dc0

void __thiscall
TMediaSampleQueue<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_>::
~TMediaSampleQueue<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_>
          (TMediaSampleQueue<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__TMediaSampleSink<IMediaBinarySample>__;
  this->_padding_ = (longlong)&_vftable__for__TMediaSampleSource<IMediaBinarySample>__;
  DestructItems<TSharedPtr<IMediaBinarySample,1>,int>
            ((TSharedPtr<IMediaBinarySample,1> *)(this->Samples).AllocatorInstance.Data,
             (this->Samples).ArrayNum);
  pFVar1 = (this->Samples).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  this->_padding_ = (longlong)&___7__TMediaSampleSource_VIMediaBinarySample____6B_;
  this->_padding_ = (longlong)&___7__TMediaSampleSink_VIMediaBinarySample____6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)this->_padding_,
             (int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  return;
}

// ~TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_> @ 146bf2e50

void __thiscall
TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>::
~TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>
          (TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__TMediaSampleSink<IMediaOverlaySample>__;
  this->_padding_ = (longlong)&_vftable__for__TMediaSampleSource<IMediaOverlaySample>__;
  DestructItems<TSharedPtr<IMediaOverlaySample,1>,int>
            ((TSharedPtr<IMediaOverlaySample,1> *)(this->Samples).AllocatorInstance.Data,
             (this->Samples).ArrayNum);
  pFVar1 = (this->Samples).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  this->_padding_ = (longlong)&___7__TMediaSampleSource_VIMediaOverlaySample____6B_;
  this->_padding_ = (longlong)&___7__TMediaSampleSink_VIMediaOverlaySample____6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)this->_padding_,
             (int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  return;
}

// ~TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> @ 146bf2ee0

void __thiscall
TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>::
~TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>
          (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__TMediaSampleSink<IMediaTextureSample>__;
  this->_padding_ = (longlong)&_vftable__for__TMediaSampleSource<IMediaTextureSample>__;
  DestructItems<TSharedPtr<IMediaTextureSample,1>,int>
            ((TSharedPtr<IMediaTextureSample,1> *)(this->Samples).AllocatorInstance.Data,
             (this->Samples).ArrayNum);
  pFVar1 = (this->Samples).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  this->_padding_ = (longlong)&___7__TMediaSampleSource_VIMediaTextureSample____6B_;
  this->_padding_ = (longlong)&___7__TMediaSampleSink_VIMediaTextureSample____6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)this->_padding_,
             (int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  return;
}

// CanAcceptSamples @ 146bf6040

bool __thiscall
TMediaSampleQueue<IMediaAudioSample,FMediaAudioSampleSink>::CanAcceptSamples
          (TMediaSampleQueue<IMediaAudioSample,FMediaAudioSampleSink> *this,int param_1)

{
  if ((-1 < this->MaxSamplesInQueue) &&
     (this->MaxSamplesInQueue < (this->Samples).ArrayNum + param_1)) {
    return false;
  }
  return true;
}

// CanAcceptSamples @ 146bf6060

bool __thiscall
TMediaSampleQueue<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_>::CanAcceptSamples
          (TMediaSampleQueue<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_> *this,
          int param_1)

{
  if ((-1 < this->MaxSamplesInQueue) &&
     (this->MaxSamplesInQueue < (this->Samples).ArrayNum + param_1)) {
    return false;
  }
  return true;
}

// CanAcceptSamples @ 146bf6080

bool __thiscall
TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>::CanAcceptSamples
          (TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_> *this,
          int param_1)

{
  if ((-1 < this->MaxSamplesInQueue) &&
     (this->MaxSamplesInQueue < (this->Samples).ArrayNum + param_1)) {
    return false;
  }
  return true;
}

// CanAcceptSamples @ 146bf60a0

bool __thiscall
TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>::CanAcceptSamples
          (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *this,
          int param_1)

{
  if ((-1 < this->MaxSamplesInQueue) &&
     (this->MaxSamplesInQueue < (this->Samples).ArrayNum + param_1)) {
    return false;
  }
  return true;
}

// Dequeue @ 146bf74e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
TMediaSampleQueue<IMediaAudioSample,FMediaAudioSampleSink>::Dequeue
          (TMediaSampleQueue<IMediaAudioSample,FMediaAudioSampleSink> *this,
          TSharedPtr<IMediaAudioSample,1> *param_1)

{
  longlong *lpCriticalSection;
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  IMediaAudioSample *pIVar3;
  code *pcVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  undefined1 uVar7;
  atomic<int> *paVar8;
  
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->CriticalSection).CriticalSection.Opaque2[0] == 0) {
    bVar6 = false;
  }
  else {
    if ((this->CriticalSection).CriticalSection.Opaque2[0] < 1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
    }
    plVar1 = (this->CriticalSection).CriticalSection.Opaque1[0];
    pTVar2 = (TReferenceControllerBase<1> *)plVar1[1];
    pIVar3 = (IMediaAudioSample *)*plVar1;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      paVar8 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar8 = &pTVar2->SharedReferenceCount;
      LOCK();
      *paVar8 = (atomic<int>)((int)*paVar8 + 1);
      UNLOCK();
    }
    if (pIVar3 == (IMediaAudioSample *)0x0) {
      bVar6 = false;
    }
    else {
      TArray<TSharedPtr<IMediaAudioSample,1>,TSizedDefaultAllocator<32>_>::RemoveAt
                ((TArray<TSharedPtr<IMediaAudioSample,1>,TSizedDefaultAllocator<32>_> *)
                 &this->CriticalSection,0,Default);
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar8 = (atomic<int>)((int)*paVar8 + 1);
        UNLOCK();
      }
      pTVar5 = (param_1->SharedReferenceCount).ReferenceController;
      param_1->Object = pIVar3;
      (param_1->SharedReferenceCount).ReferenceController = pTVar2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      bVar6 = true;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar6;
}

// Dequeue @ 146bf7600

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
TMediaSampleQueue<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_>::Dequeue
          (TMediaSampleQueue<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_> *this,
          TSharedPtr<IMediaBinarySample,1> *param_1)

{
  longlong *lpCriticalSection;
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  IMediaBinarySample *pIVar3;
  code *pcVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  undefined1 uVar7;
  atomic<int> *paVar8;
  
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->CriticalSection).CriticalSection.Opaque2[0] == 0) {
    bVar6 = false;
  }
  else {
    if ((this->CriticalSection).CriticalSection.Opaque2[0] < 1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
    }
    plVar1 = (this->CriticalSection).CriticalSection.Opaque1[0];
    pTVar2 = (TReferenceControllerBase<1> *)plVar1[1];
    pIVar3 = (IMediaBinarySample *)*plVar1;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      paVar8 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar8 = &pTVar2->SharedReferenceCount;
      LOCK();
      *paVar8 = (atomic<int>)((int)*paVar8 + 1);
      UNLOCK();
    }
    if (pIVar3 == (IMediaBinarySample *)0x0) {
      bVar6 = false;
    }
    else {
      TArray<TSharedPtr<IMediaBinarySample,1>,TSizedDefaultAllocator<32>_>::RemoveAt
                ((TArray<TSharedPtr<IMediaBinarySample,1>,TSizedDefaultAllocator<32>_> *)
                 &this->CriticalSection,0,Default);
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar8 = (atomic<int>)((int)*paVar8 + 1);
        UNLOCK();
      }
      pTVar5 = (param_1->SharedReferenceCount).ReferenceController;
      param_1->Object = pIVar3;
      (param_1->SharedReferenceCount).ReferenceController = pTVar2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      bVar6 = true;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar6;
}

// Dequeue @ 146bf7720

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>::Dequeue
          (TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_> *this,
          TSharedPtr<IMediaOverlaySample,1> *param_1)

{
  longlong *lpCriticalSection;
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  IMediaOverlaySample *pIVar3;
  code *pcVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  undefined1 uVar7;
  atomic<int> *paVar8;
  
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->CriticalSection).CriticalSection.Opaque2[0] == 0) {
    bVar6 = false;
  }
  else {
    if ((this->CriticalSection).CriticalSection.Opaque2[0] < 1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
    }
    plVar1 = (this->CriticalSection).CriticalSection.Opaque1[0];
    pTVar2 = (TReferenceControllerBase<1> *)plVar1[1];
    pIVar3 = (IMediaOverlaySample *)*plVar1;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      paVar8 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar8 = &pTVar2->SharedReferenceCount;
      LOCK();
      *paVar8 = (atomic<int>)((int)*paVar8 + 1);
      UNLOCK();
    }
    if (pIVar3 == (IMediaOverlaySample *)0x0) {
      bVar6 = false;
    }
    else {
      TArray<TSharedPtr<IMediaOverlaySample,1>,TSizedDefaultAllocator<32>_>::RemoveAt
                ((TArray<TSharedPtr<IMediaOverlaySample,1>,TSizedDefaultAllocator<32>_> *)
                 &this->CriticalSection,0,Default);
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar8 = (atomic<int>)((int)*paVar8 + 1);
        UNLOCK();
      }
      pTVar5 = (param_1->SharedReferenceCount).ReferenceController;
      param_1->Object = pIVar3;
      (param_1->SharedReferenceCount).ReferenceController = pTVar2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      bVar6 = true;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar6;
}

// Dequeue @ 146bf7840

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>::Dequeue
          (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *this,
          TSharedPtr<IMediaTextureSample,1> *param_1)

{
  longlong *lpCriticalSection;
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  IMediaTextureSample *pIVar3;
  code *pcVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  undefined1 uVar7;
  atomic<int> *paVar8;
  
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->CriticalSection).CriticalSection.Opaque2[0] == 0) {
    bVar6 = false;
  }
  else {
    if ((this->CriticalSection).CriticalSection.Opaque2[0] < 1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
    }
    plVar1 = (this->CriticalSection).CriticalSection.Opaque1[0];
    pTVar2 = (TReferenceControllerBase<1> *)plVar1[1];
    pIVar3 = (IMediaTextureSample *)*plVar1;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      paVar8 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar8 = &pTVar2->SharedReferenceCount;
      LOCK();
      *paVar8 = (atomic<int>)((int)*paVar8 + 1);
      UNLOCK();
    }
    if (pIVar3 == (IMediaTextureSample *)0x0) {
      bVar6 = false;
    }
    else {
      TArray<TSharedPtr<IMediaTextureSample,1>,TSizedDefaultAllocator<32>_>::RemoveAt
                ((TArray<TSharedPtr<IMediaTextureSample,1>,TSizedDefaultAllocator<32>_> *)
                 &this->CriticalSection,0,Default);
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar8 = (atomic<int>)((int)*paVar8 + 1);
        UNLOCK();
      }
      pTVar5 = (param_1->SharedReferenceCount).ReferenceController;
      param_1->Object = pIVar3;
      (param_1->SharedReferenceCount).ReferenceController = pTVar2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      bVar6 = true;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar6;
}

// Discard @ 146bf8030

bool __thiscall
TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>::Discard
          (TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_> *this,
          TRange<FMediaTimeStamp> *param_1,bool param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  int local_res8 [2];
  uint local_res10 [4];
  int local_res20 [2];
  
  if (((param_1->LowerBound).Type.Value == '\x02') || ((param_1->UpperBound).Type.Value == '\x02'))
  {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TimeRange.HasLowerBound() && TimeRange.HasUpperBound()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Public\\MediaSampleQueue.h"
                       ,0xa6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FindRangeInQueue(this,param_1,param_2,(int *)local_res10,local_res8,local_res20);
    if ((int)local_res10[0] < 0) {
      bVar2 = false;
    }
    else {
      if (local_res8[0] < 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("LastPossibleIndex >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Public\\MediaSampleQueue.h"
                           ,0xb0,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      uVar5 = (local_res8[0] - local_res10[0]) + 1;
      uVar4 = 0;
      if ((int)(uVar5 + local_res10[0]) <= (this->Samples).ArrayNum) {
        uVar4 = ~(uVar5 | local_res10[0]) >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      if (uVar5 != 0) {
        TArray<TSharedPtr<IMediaOverlaySample,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (&this->Samples,local_res10[0],uVar5);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&(this->Samples).AllocatorInstance,(this->Samples).ArrayNum,
                   &(this->Samples).ArrayMax);
      }
      this->NumDroppedSamples = this->NumDroppedSamples + uVar5;
      bVar2 = true;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Enqueue @ 146bf8c70

bool __thiscall
TMediaSampleQueue<IMediaAudioSample,FMediaAudioSampleSink>::Enqueue
          (TMediaSampleQueue<IMediaAudioSample,FMediaAudioSampleSink> *this,
          TSharedRef<IMediaAudioSample,1> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  IMediaAudioSample *local_18;
  TReferenceControllerBase<1> *local_10;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->MaxSamplesInQueue < 1) || ((this->Samples).ArrayNum < this->MaxSamplesInQueue)) {
    local_18 = param_1->Object;
    local_10 = (param_1->SharedReferenceCount).ReferenceController;
    if (local_10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar6 = (this->Samples).AllocatorInstance.Data;
    if ((pFVar6 <= (FScriptContainerElement *)&local_18) &&
       ((FScriptContainerElement *)&local_18 < pFVar6 + (longlong)(this->Samples).ArrayMax * 0x10))
    {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    iVar5 = (this->Samples).ArrayNum;
    piVar1 = &(this->Samples).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->Samples).AllocatorInstance,piVar1);
    }
    (this->Samples).ArrayNum = iVar5 + 1;
    pFVar6 = (this->Samples).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
    *(IMediaAudioSample **)pFVar6 = local_18;
    *(TReferenceControllerBase<1> **)(pFVar6 + 8) = local_10;
    local_10 = (TReferenceControllerBase<1> *)0x0;
    local_18 = (IMediaAudioSample *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar3;
}

// Enqueue @ 146bf8dc0

bool __thiscall
TMediaSampleQueue<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_>::Enqueue
          (TMediaSampleQueue<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_> *this,
          TSharedRef<IMediaBinarySample,1> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  IMediaBinarySample *local_18;
  TReferenceControllerBase<1> *local_10;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->MaxSamplesInQueue < 1) || ((this->Samples).ArrayNum < this->MaxSamplesInQueue)) {
    local_18 = param_1->Object;
    local_10 = (param_1->SharedReferenceCount).ReferenceController;
    if (local_10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar6 = (this->Samples).AllocatorInstance.Data;
    if ((pFVar6 <= (FScriptContainerElement *)&local_18) &&
       ((FScriptContainerElement *)&local_18 < pFVar6 + (longlong)(this->Samples).ArrayMax * 0x10))
    {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    iVar5 = (this->Samples).ArrayNum;
    piVar1 = &(this->Samples).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->Samples).AllocatorInstance,piVar1);
    }
    (this->Samples).ArrayNum = iVar5 + 1;
    pFVar6 = (this->Samples).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
    *(IMediaBinarySample **)pFVar6 = local_18;
    *(TReferenceControllerBase<1> **)(pFVar6 + 8) = local_10;
    local_10 = (TReferenceControllerBase<1> *)0x0;
    local_18 = (IMediaBinarySample *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar3;
}

// Enqueue @ 146bf8f10

bool __thiscall
TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>::Enqueue
          (TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_> *this,
          TSharedRef<IMediaOverlaySample,1> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  IMediaOverlaySample *local_18;
  TReferenceControllerBase<1> *local_10;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->MaxSamplesInQueue < 1) || ((this->Samples).ArrayNum < this->MaxSamplesInQueue)) {
    local_18 = param_1->Object;
    local_10 = (param_1->SharedReferenceCount).ReferenceController;
    if (local_10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar6 = (this->Samples).AllocatorInstance.Data;
    if ((pFVar6 <= (FScriptContainerElement *)&local_18) &&
       ((FScriptContainerElement *)&local_18 < pFVar6 + (longlong)(this->Samples).ArrayMax * 0x10))
    {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    iVar5 = (this->Samples).ArrayNum;
    piVar1 = &(this->Samples).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->Samples).AllocatorInstance,piVar1);
    }
    (this->Samples).ArrayNum = iVar5 + 1;
    pFVar6 = (this->Samples).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
    *(IMediaOverlaySample **)pFVar6 = local_18;
    *(TReferenceControllerBase<1> **)(pFVar6 + 8) = local_10;
    local_10 = (TReferenceControllerBase<1> *)0x0;
    local_18 = (IMediaOverlaySample *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar3;
}

// Enqueue @ 146bf9060

bool __thiscall
TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>::Enqueue
          (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *this,
          TSharedRef<IMediaTextureSample,1> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  IMediaTextureSample *local_18;
  TReferenceControllerBase<1> *local_10;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->MaxSamplesInQueue < 1) || ((this->Samples).ArrayNum < this->MaxSamplesInQueue)) {
    local_18 = param_1->Object;
    local_10 = (param_1->SharedReferenceCount).ReferenceController;
    if (local_10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar6 = (this->Samples).AllocatorInstance.Data;
    if ((pFVar6 <= (FScriptContainerElement *)&local_18) &&
       ((FScriptContainerElement *)&local_18 < pFVar6 + (longlong)(this->Samples).ArrayMax * 0x10))
    {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    iVar5 = (this->Samples).ArrayNum;
    piVar1 = &(this->Samples).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->Samples).AllocatorInstance,piVar1);
    }
    (this->Samples).ArrayNum = iVar5 + 1;
    pFVar6 = (this->Samples).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
    *(IMediaTextureSample **)pFVar6 = local_18;
    *(TReferenceControllerBase<1> **)(pFVar6 + 8) = local_10;
    local_10 = (TReferenceControllerBase<1> *)0x0;
    local_18 = (IMediaTextureSample *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar3;
}

// FetchBestSampleForTimeRange @ 146bf9c30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

EMediaSampleQueueFetchResult __thiscall
TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>::
FetchBestSampleForTimeRange
          (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *this,
          TRange<FMediaTimeStamp> *param_1,TSharedPtr<IMediaTextureSample,1> *param_2,bool param_3,
          bool param_4)

{
  TArray<TSharedPtr<IMediaTextureSample,1>,TSizedDefaultAllocator<32>_> *this_00;
  TRangeBound<FMediaTimeStamp> *pTVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  TReferenceControllerBase<1> *pTVar5;
  IMediaTextureSample *pIVar6;
  int iVar7;
  code *pcVar8;
  char cVar9;
  bool bVar10;
  EMediaSampleQueueFetchResult EVar11;
  uint uVar12;
  longlong *plVar13;
  longlong *plVar14;
  long64 *plVar15;
  TRange<FMediaTimeStamp> *pTVar16;
  longlong lVar17;
  longlong lVar18;
  LPCRITICAL_SECTION lpCriticalSection;
  char cVar19;
  TRangeBound<FMediaTimeStamp> *pTVar20;
  ulonglong uVar21;
  FScriptContainerElement *pFVar22;
  ulonglong uVar23;
  uint uVar24;
  bool bVar25;
  uint local_288;
  uint local_284;
  uint local_280;
  uint local_27c;
  int local_278;
  int local_270;
  TRange<FMediaTimeStamp> local_268;
  int local_238;
  int local_234;
  uint local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined8 local_220;
  longlong local_218;
  long64 lStack_210;
  undefined8 local_208;
  longlong local_200;
  FMediaTimeStamp local_1f8;
  LPCRITICAL_SECTION local_1e8;
  TSharedPtr<IMediaTextureSample,1> local_1e0;
  uint local_1d0;
  undefined4 uStack_1cc;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined1 local_1b8;
  uint7 uStack_1b7;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  uint local_1a0;
  undefined4 uStack_19c;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined1 local_188;
  uint7 uStack_187;
  undefined8 uStack_180;
  undefined8 local_178;
  TRange<FMediaTimeStamp> local_170;
  IMediaTextureSample *local_140;
  TReferenceControllerBase<1> *pTStack_138;
  IMediaTextureSample *local_130;
  TReferenceControllerBase<1> *pTStack_128;
  undefined1 local_120 [8];
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined4 local_f8;
  undefined4 uStack_f4;
  int iStack_f0;
  int iStack_ec;
  IMediaTextureSample *local_e8;
  TReferenceControllerBase<1> *pTStack_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [32];
  undefined1 local_88 [16];
  TRange<FMediaTimeStamp> local_78;
  
  if ((((param_1->LowerBound).Type.Value == '\x02') || ((param_1->UpperBound).Type.Value == '\x02'))
     && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                            ("TimeRange.HasLowerBound() && TimeRange.HasUpperBound()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Public\\MediaSampleQueue.h"
                             ,0xc3,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    EVar11 = (*pcVar8)();
    return EVar11;
  }
  lVar18 = 0;
  local_1e0.Object = (IMediaTextureSample *)0x0;
  local_1e0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_2 != &local_1e0) {
    param_2->Object = (IMediaTextureSample *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&param_2->SharedReferenceCount,&local_1e0.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1e0.SharedReferenceCount.ReferenceController);
  lpCriticalSection = (LPCRITICAL_SECTION)&this->CriticalSection;
  local_1e8 = lpCriticalSection;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  FindRangeInQueue(this,param_1,param_3,(int *)&local_280,(int *)&local_284,(int *)&local_27c);
  uVar21 = (ulonglong)(int)local_280;
  local_288 = local_280;
  if (-1 < (int)local_280) {
    if (param_4) {
      uVar23 = uVar21;
      if ((int)local_280 <= (int)local_284) {
        do {
          uVar24 = 0;
          if ((int)(uint)uVar23 < (this->Samples).ArrayNum) {
            uVar24 = ~(uint)uVar23 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            EVar11 = (*pcVar8)();
            return EVar11;
          }
          pFVar22 = (this->Samples).AllocatorInstance.Data + uVar21 * 0x10;
          if ((*(longlong *)pFVar22 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            EVar11 = (*pcVar8)();
            return EVar11;
          }
          plVar13 = (longlong *)
                    (**(code **)(**(longlong **)pFVar22 + 0x60))(*(longlong **)pFVar22,local_c8);
          if ((*(longlong *)pFVar22 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            EVar11 = (*pcVar8)();
            return EVar11;
          }
          plVar14 = (longlong *)
                    (**(code **)(**(longlong **)pFVar22 + 0x20))(*(longlong **)pFVar22,local_118);
          iVar2 = *(int *)((longlong)plVar13 + 0xc);
          lVar4 = plVar13[1];
          lVar18 = *plVar14;
          lVar17 = *plVar13;
          if ((*(longlong *)pFVar22 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            EVar11 = (*pcVar8)();
            return EVar11;
          }
          plVar13 = (longlong *)
                    (**(code **)(**(longlong **)pFVar22 + 0x60))(*(longlong **)pFVar22,local_b8);
          local_268.LowerBound.Type.Value = '\x01';
          local_268.LowerBound.Value.Time.Ticks = *plVar13;
          local_268.LowerBound.Value._8_8_ = plVar13[1];
          local_268.UpperBound.Type.Value = '\0';
          local_268.UpperBound.Value.Time.Ticks = lVar18 + lVar17;
          local_268.UpperBound.Value.SequenceIndex = (int)lVar4;
          local_268.UpperBound.Value.LoopIndex = iVar2;
          bVar10 = TRange<FMediaTimeStamp>::Overlaps(param_1,&local_268);
          if ((!bVar10) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("TimeRange.Overlaps(SampleTimeRange)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Public\\MediaSampleQueue.h"
                                  ,0x10c,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            EVar11 = (*pcVar8)();
            return EVar11;
          }
          bVar10 = TRange<FMediaTimeStamp>::IsEmpty(&local_268);
          if (bVar10) {
            local_1c0 = 0;
            local_220 = 0;
            local_1b8 = 0;
            uStack_1b0 = 0x8000000000000000;
            local_218 = (ulonglong)uStack_1b7 << 8;
            lStack_210 = -0x8000000000000000;
            local_1a8 = 0;
            local_208 = 0;
            local_1d0 = local_1d0 & 0xffffff00;
            uStack_1c8 = 0x8000000000000000;
            uStack_1c8._0_4_ = 0;
            uStack_1c8._4_4_ = 0x80000000;
            local_230 = local_1d0;
            uStack_22c = uStack_1cc;
            uStack_228 = (undefined4)uStack_1c8;
            uStack_224 = uStack_1c8._4_4_;
          }
          else {
            bVar10 = TRange<FMediaTimeStamp>::IsEmpty(param_1);
            if (bVar10) {
              local_190 = 0;
              local_220 = 0;
              local_188 = 0;
              uStack_180 = 0x8000000000000000;
              local_218 = (ulonglong)uStack_187 << 8;
              lStack_210 = -0x8000000000000000;
              local_178 = 0;
              local_208 = 0;
              local_1a0 = local_1a0 & 0xffffff00;
              uStack_198 = 0x8000000000000000;
              uStack_198._0_4_ = 0;
              uStack_198._4_4_ = 0x80000000;
              local_230 = local_1a0;
              uStack_22c = uStack_19c;
              uStack_228 = (undefined4)uStack_198;
              uStack_224 = uStack_198._4_4_;
            }
            else {
              pTVar1 = &param_1->UpperBound;
              pTVar20 = pTVar1;
              if (local_268.UpperBound.Type.Value != '\x02') {
                if ((pTVar1->Type).Value != '\x02') {
                  iVar2 = (param_1->UpperBound).Value.SequenceIndex;
                  if ((iVar2 <= local_268.UpperBound.Value.SequenceIndex) &&
                     ((local_268.UpperBound.Value.SequenceIndex != iVar2 ||
                      ((iVar3 = (param_1->UpperBound).Value.LoopIndex,
                       iVar3 <= local_268.UpperBound.Value.LoopIndex &&
                       ((local_268.UpperBound.Value.LoopIndex != iVar3 ||
                        ((param_1->UpperBound).Value.Time.Ticks <=
                         local_268.UpperBound.Value.Time.Ticks)))))))) {
                    if ((local_268.UpperBound.Value.SequenceIndex <= iVar2) &&
                       (((iVar2 != local_268.UpperBound.Value.SequenceIndex ||
                         ((local_268.UpperBound.Value.LoopIndex <=
                           (param_1->UpperBound).Value.LoopIndex &&
                          (((iVar2 != local_268.UpperBound.Value.SequenceIndex ||
                            ((param_1->UpperBound).Value.LoopIndex !=
                             local_268.UpperBound.Value.LoopIndex)) ||
                           (local_268.UpperBound.Value.Time.Ticks <=
                            (param_1->UpperBound).Value.Time.Ticks)))))) &&
                        (pTVar20 = &local_268.UpperBound, local_268.UpperBound.Type.Value != '\0')))
                       ) {
                      pTVar20 = pTVar1;
                    }
                    goto LAB_146bfa4fe;
                  }
                }
                pTVar20 = &local_268.UpperBound;
              }
LAB_146bfa4fe:
              pTVar16 = param_1;
              if (local_268.LowerBound.Type.Value != '\x02') {
                if ((param_1->LowerBound).Type.Value == '\x02') {
                  pTVar16 = &local_268;
                }
                else {
                  iVar2 = (param_1->LowerBound).Value.SequenceIndex;
                  bVar25 = SBORROW4(local_268.LowerBound.Value.SequenceIndex,iVar2);
                  bVar10 = local_268.LowerBound.Value.SequenceIndex - iVar2 < 0;
                  if (local_268.LowerBound.Value.SequenceIndex == iVar2) {
                    iVar3 = (param_1->LowerBound).Value.LoopIndex;
                    bVar10 = local_268.LowerBound.Value.LoopIndex == iVar3;
                    if (bVar10) {
                      if (local_268.LowerBound.Value.Time.Ticks !=
                          (param_1->LowerBound).Value.Time.Ticks) {
                        iVar3 = (param_1->LowerBound).Value.LoopIndex;
                        bVar10 = local_268.LowerBound.Value.LoopIndex == iVar3;
                        goto LAB_146bfa542;
                      }
                    }
                    else {
LAB_146bfa542:
                      if (iVar3 <= local_268.LowerBound.Value.LoopIndex) {
                        if (bVar10) {
                          lVar18 = (param_1->LowerBound).Value.Time.Ticks;
                          bVar25 = SBORROW8(local_268.LowerBound.Value.Time.Ticks,lVar18);
                          bVar10 = local_268.LowerBound.Value.Time.Ticks - lVar18 < 0;
                          goto LAB_146bfa54a;
                        }
                        goto LAB_146bfa54c;
                      }
                    }
                  }
                  else {
LAB_146bfa54a:
                    if (bVar25 == bVar10) {
LAB_146bfa54c:
                      pTVar16 = &local_268;
                      goto LAB_146bfa588;
                    }
                  }
                  if (iVar2 == local_268.LowerBound.Value.SequenceIndex) {
                    iVar3 = (param_1->LowerBound).Value.LoopIndex;
                    iVar7 = iVar3 - local_268.LowerBound.Value.LoopIndex;
                    bVar10 = iVar3 == local_268.LowerBound.Value.LoopIndex;
                    if (bVar10) {
                      if ((param_1->LowerBound).Value.Time.Ticks !=
                          local_268.LowerBound.Value.Time.Ticks) goto LAB_146bfa565;
                    }
                    else {
LAB_146bfa56d:
                      if ((SBORROW4(iVar3,local_268.LowerBound.Value.LoopIndex) == iVar7 < 0) &&
                         ((!bVar10 ||
                          (local_268.LowerBound.Value.Time.Ticks <=
                           (param_1->LowerBound).Value.Time.Ticks)))) goto LAB_146bfa588;
                    }
                  }
                  else {
LAB_146bfa565:
                    if (local_268.LowerBound.Value.SequenceIndex <= iVar2) {
                      if (iVar2 == local_268.LowerBound.Value.SequenceIndex) {
                        iVar3 = (param_1->LowerBound).Value.LoopIndex;
                        iVar7 = iVar3 - local_268.LowerBound.Value.LoopIndex;
                        bVar10 = iVar3 == local_268.LowerBound.Value.LoopIndex;
                        goto LAB_146bfa56d;
                      }
                      goto LAB_146bfa588;
                    }
                  }
                  pTVar16 = &local_268;
                  if (local_268.LowerBound.Type.Value != '\0') {
                    pTVar16 = param_1;
                  }
                }
              }
LAB_146bfa588:
              local_230 = *(uint *)&pTVar16->LowerBound;
              uStack_22c = *(undefined4 *)&(pTVar16->LowerBound).field_0x4;
              uStack_228 = (undefined4)(pTVar16->LowerBound).Value.Time.Ticks;
              uStack_224 = *(undefined4 *)((longlong)&(pTVar16->LowerBound).Value.Time.Ticks + 4);
              local_218 = *(longlong *)pTVar20;
              lStack_210 = (pTVar20->Value).Time.Ticks;
              local_220._0_4_ = (pTVar16->LowerBound).Value.SequenceIndex;
              local_220._4_4_ = (pTVar16->LowerBound).Value.LoopIndex;
              local_208._0_4_ = (pTVar20->Value).SequenceIndex;
              local_208._4_4_ = (pTVar20->Value).LoopIndex;
            }
          }
          cVar9 = (char)local_218;
          cVar19 = (char)local_230;
          if ((cVar19 == '\x02') || ((char)local_218 == '\x02')) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("LowerBound.IsClosed() && UpperBound.IsClosed()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Range.h"
                                ,0x1ad,L"");
            if (bVar10) {
              pcVar8 = (code *)swi(3);
              EVar11 = (*pcVar8)();
              return EVar11;
            }
            if ((cVar9 == '\x02') &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Type != ERangeBoundTypes::Open",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                    ,99,L""), bVar10)) {
              pcVar8 = (code *)swi(3);
              EVar11 = (*pcVar8)();
              return EVar11;
            }
          }
          if ((cVar19 == '\x02') &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Type != ERangeBoundTypes::Open",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                  ,99,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            EVar11 = (*pcVar8)();
            return EVar11;
          }
          if (((int)local_220 == (int)local_208) && (local_220._4_4_ == local_208._4_4_)) {
            lVar18 = lStack_210 - CONCAT44(uStack_224,uStack_228);
          }
          else if (((int)local_208 < (int)local_220) && (local_208._4_4_ < local_220._4_4_)) {
            lVar18 = -0x8000000000000000;
          }
          else {
            lVar18 = 0x7fffffffffffffff;
          }
          if (param_3) {
            if ((*(longlong *)pFVar22 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar10)) {
              pcVar8 = (code *)swi(3);
              EVar11 = (*pcVar8)();
              return EVar11;
            }
            plVar13 = (longlong *)
                      (**(code **)(**(longlong **)pFVar22 + 0x20))(*(longlong **)pFVar22,local_100);
            if (lVar18 < *plVar13) {
              if ((*(longlong *)pFVar22 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar10)) {
                pcVar8 = (code *)swi(3);
                EVar11 = (*pcVar8)();
                return EVar11;
              }
              plVar13 = (longlong *)(**(code **)(**(longlong **)pFVar22 + 0x60))();
              if (((param_1->LowerBound).Type.Value == '\x02') &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Type != ERangeBoundTypes::Open",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                      ,99,L""), bVar10)) {
                pcVar8 = (code *)swi(3);
                EVar11 = (*pcVar8)();
                return EVar11;
              }
              iVar2 = (param_1->LowerBound).Value.SequenceIndex;
              if (iVar2 == (int)plVar13[1]) {
                if ((param_1->LowerBound).Value.LoopIndex == *(int *)((longlong)plVar13 + 0xc)) {
                  lVar17 = *plVar13 - (param_1->LowerBound).Value.Time.Ticks;
                  goto LAB_146bfa8ba;
                }
              }
              else if ((int)plVar13[1] < iVar2) {
                iVar2 = *(int *)((longlong)plVar13 + 0xc);
                iVar3 = (param_1->LowerBound).Value.LoopIndex;
                bVar25 = SBORROW4(iVar3,iVar2);
                iVar7 = iVar3 - iVar2;
                bVar10 = iVar3 == iVar2;
                goto LAB_146bfa8b2;
              }
              goto LAB_146bfa8b7;
            }
LAB_146bfa8f7:
            pTVar5 = *(TReferenceControllerBase<1> **)(pFVar22 + 8);
            pIVar6 = *(IMediaTextureSample **)pFVar22;
            if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_130 = param_2->Object;
            pTStack_128 = (param_2->SharedReferenceCount).ReferenceController;
            param_2->Object = pIVar6;
            (param_2->SharedReferenceCount).ReferenceController = pTVar5;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_128);
            uVar24 = (local_288 - local_280) + 1;
            uVar12 = 0;
            if ((int)(local_280 + uVar24) <= (this->Samples).ArrayNum) {
              uVar12 = ~(local_280 | uVar24) >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   ), bVar10)) {
              pcVar8 = (code *)swi(3);
              EVar11 = (*pcVar8)();
              return EVar11;
            }
            if (uVar24 != 0) {
              TArray<TSharedPtr<IMediaTextureSample,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                        (&this->Samples,local_280,uVar24);
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,&(this->Samples).AllocatorInstance,(this->Samples).ArrayNum,
                         &(this->Samples).ArrayMax);
            }
            uVar12 = 0;
            if (1 < (int)uVar24) {
              uVar12 = local_288 - local_280;
            }
            this->NumDroppedSamples = this->NumDroppedSamples + uVar12;
            break;
          }
          if ((*(longlong *)pFVar22 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            EVar11 = (*pcVar8)();
            return EVar11;
          }
          plVar13 = (longlong *)
                    (**(code **)(**(longlong **)pFVar22 + 0x20))(*(longlong **)pFVar22,local_110);
          if (*plVar13 <= lVar18) goto LAB_146bfa8f7;
          if (((param_1->UpperBound).Type.Value == '\x02') &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Type != ERangeBoundTypes::Open",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                  ,99,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            EVar11 = (*pcVar8)();
            return EVar11;
          }
          if ((*(longlong *)pFVar22 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            EVar11 = (*pcVar8)();
            return EVar11;
          }
          plVar13 = (longlong *)
                    (**(code **)(**(longlong **)pFVar22 + 0x60))(*(longlong **)pFVar22,local_a8);
          if ((*(longlong *)pFVar22 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            EVar11 = (*pcVar8)();
            return EVar11;
          }
          plVar14 = (longlong *)
                    (**(code **)(**(longlong **)pFVar22 + 0x20))(*(longlong **)pFVar22,local_108);
          iVar3 = *(int *)((longlong)plVar13 + 0xc);
          iVar2 = (param_1->UpperBound).Value.SequenceIndex;
          if ((int)plVar13[1] == iVar2) {
            if (iVar3 != (param_1->UpperBound).Value.LoopIndex) goto LAB_146bfa8b7;
            lVar17 = (param_1->UpperBound).Value.Time.Ticks - (*plVar14 + *plVar13);
          }
          else {
            if (iVar2 < (int)plVar13[1]) {
              iVar2 = (param_1->UpperBound).Value.LoopIndex;
              bVar25 = SBORROW4(iVar3,iVar2);
              iVar7 = iVar3 - iVar2;
              bVar10 = iVar3 == iVar2;
LAB_146bfa8b2:
              lVar17 = -0x8000000000000000;
              if (!bVar10 && bVar25 == iVar7 < 0) goto LAB_146bfa8ba;
            }
LAB_146bfa8b7:
            lVar17 = 0x7fffffffffffffff;
          }
LAB_146bfa8ba:
          if (lVar17 < lVar18) goto LAB_146bfa8f7;
          local_288 = local_288 + 1;
          uVar23 = (ulonglong)local_288;
          uVar21 = uVar21 + 1;
        } while ((int)local_288 <= (int)local_284);
      }
    }
    else if (local_280 == local_284) {
      uVar24 = 0;
      if ((int)local_280 < (this->Samples).ArrayNum) {
        uVar24 = ~local_280 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        EVar11 = (*pcVar8)();
        return EVar11;
      }
      pFVar22 = (this->Samples).AllocatorInstance.Data;
      pTVar5 = *(TReferenceControllerBase<1> **)(pFVar22 + uVar21 * 0x10 + 8);
      pIVar6 = *(IMediaTextureSample **)(pFVar22 + uVar21 * 0x10);
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_140 = param_2->Object;
      pTStack_138 = (param_2->SharedReferenceCount).ReferenceController;
      param_2->Object = pIVar6;
      (param_2->SharedReferenceCount).ReferenceController = pTVar5;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_138);
      TArray<TSharedPtr<IMediaTextureSample,1>,TSizedDefaultAllocator<32>_>::RemoveAt
                (&this->Samples,local_280,Default);
    }
    else {
      local_270 = -1;
      this_00 = &this->Samples;
      local_278 = -1;
      if ((int)local_280 < (int)local_284) {
        lVar17 = uVar21 << 4;
        uVar24 = local_280;
        do {
          uVar12 = 0;
          if ((int)uVar24 < (this->Samples).ArrayNum) {
            uVar12 = ~uVar24 >> 0x1f;
          }
          local_200 = lVar17;
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            EVar11 = (*pcVar8)();
            return EVar11;
          }
          pFVar22 = (this_00->AllocatorInstance).Data + lVar17;
          if ((*(longlong *)pFVar22 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            EVar11 = (*pcVar8)();
            return EVar11;
          }
          plVar13 = (longlong *)
                    (**(code **)(**(longlong **)pFVar22 + 0x60))(*(longlong **)pFVar22,local_88);
          if ((*(longlong *)pFVar22 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            EVar11 = (*pcVar8)();
            return EVar11;
          }
          plVar14 = (longlong *)
                    (**(code **)(**(longlong **)pFVar22 + 0x20))(*(longlong **)pFVar22,local_120);
          local_234 = *(int *)((longlong)plVar13 + 0xc);
          local_238 = (int)plVar13[1];
          lVar17 = *plVar14;
          lVar4 = *plVar13;
          if ((*(longlong *)pFVar22 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            EVar11 = (*pcVar8)();
            return EVar11;
          }
          plVar15 = (long64 *)
                    (**(code **)(**(longlong **)pFVar22 + 0x60))(*(longlong **)pFVar22,local_d8);
          local_170.LowerBound.Type.Value = '\x01';
          local_170.LowerBound.Value.Time.Ticks = *plVar15;
          local_170.LowerBound.Value._8_8_ = plVar15[1];
          local_170.UpperBound.Value.SequenceIndex = local_238;
          local_170.UpperBound.Value.LoopIndex = local_234;
          local_170.UpperBound.Type.Value = '\0';
          local_170.UpperBound.Value.Time.Ticks = lVar17 + lVar4;
          bVar10 = TRange<FMediaTimeStamp>::Overlaps(param_1,&local_170);
          if (bVar10) {
            TRange<FMediaTimeStamp>::Intersection(&local_78,&local_170,param_1);
            TRange<FMediaTimeStamp>::Size<FMediaTimeStamp>(&local_78,&local_1f8);
            if ((local_270 <= local_1f8.SequenceIndex) &&
               ((local_1f8.SequenceIndex != local_270 ||
                ((local_278 <= local_1f8.LoopIndex &&
                 ((local_1f8.LoopIndex != local_278 ||
                  (lVar18 <= CONCAT44(local_1f8.Time.Ticks._4_4_,(undefined4)local_1f8.Time.Ticks)))
                 )))))) {
              local_f8 = (undefined4)local_1f8.Time.Ticks;
              uStack_f4 = local_1f8.Time.Ticks._4_4_;
              iStack_f0 = local_1f8.SequenceIndex;
              iStack_ec = local_1f8.LoopIndex;
              lVar18 = CONCAT44(local_1f8.Time.Ticks._4_4_,(undefined4)local_1f8.Time.Ticks);
              local_278 = local_1f8.LoopIndex;
              local_270 = local_1f8.SequenceIndex;
              local_288 = uVar24;
            }
          }
          uVar24 = uVar24 + 1;
          lVar17 = local_200 + 0x10;
          lpCriticalSection = local_1e8;
          local_200 = lVar17;
        } while ((int)uVar24 <= (int)local_284);
      }
      if (((int)local_288 < (int)local_27c) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("BestIndex >= NumOldSamplesAtBegin",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Public\\MediaSampleQueue.h"
                              ,0xf0,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        EVar11 = (*pcVar8)();
        return EVar11;
      }
      uVar24 = 0;
      if ((int)local_288 < (this->Samples).ArrayNum) {
        uVar24 = ~local_288 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        EVar11 = (*pcVar8)();
        return EVar11;
      }
      pFVar22 = (this_00->AllocatorInstance).Data;
      pTVar5 = *(TReferenceControllerBase<1> **)(pFVar22 + (longlong)(int)local_288 * 0x10 + 8);
      pIVar6 = *(IMediaTextureSample **)(pFVar22 + (longlong)(int)local_288 * 0x10);
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_e8 = param_2->Object;
      pTStack_e0 = (param_2->SharedReferenceCount).ReferenceController;
      param_2->Object = pIVar6;
      (param_2->SharedReferenceCount).ReferenceController = pTVar5;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_e0);
      uVar24 = (local_288 - local_280) + 1;
      uVar12 = 0;
      if ((int)(local_280 + uVar24) <= (this->Samples).ArrayNum) {
        uVar12 = ~(local_280 | uVar24) >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar10)) {
        pcVar8 = (code *)swi(3);
        EVar11 = (*pcVar8)();
        return EVar11;
      }
      if (uVar24 != 0) {
        TArray<TSharedPtr<IMediaTextureSample,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (this_00,local_280,uVar24);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&this_00->AllocatorInstance,(this->Samples).ArrayNum,
                   &(this->Samples).ArrayMax);
      }
      uVar12 = 0;
      if (1 < (int)uVar24) {
        uVar12 = local_288 - local_280;
      }
      this->NumDroppedSamples = this->NumDroppedSamples + uVar12;
    }
  }
  if (local_27c != 0) {
    uVar24 = 0;
    if ((int)local_27c <= (this->Samples).ArrayNum) {
      uVar24 = ~local_27c >> 0x1f;
    }
    if ((uVar24 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           ), bVar10)) {
      pcVar8 = (code *)swi(3);
      EVar11 = (*pcVar8)();
      return EVar11;
    }
    if (local_27c != 0) {
      TArray<TSharedPtr<IMediaTextureSample,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                (&this->Samples,0,local_27c);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&(this->Samples).AllocatorInstance,(this->Samples).ArrayNum,
                 &(this->Samples).ArrayMax);
    }
    this->NumDroppedSamples = this->NumDroppedSamples + local_27c;
  }
  if (param_2->Object == (IMediaTextureSample *)0x0) {
    if ((local_27c == 0) || (EVar11 = PurgedToEmpty, (this->Samples).ArrayNum != 0)) {
      EVar11 = None;
    }
  }
  else {
    EVar11 = Found;
  }
  LeaveCriticalSection(lpCriticalSection);
  return EVar11;
}

// FindRangeInQueue @ 146bfb1e0

void __thiscall
TMediaSampleQueue<IMediaAudioSample,FMediaAudioSampleSink>::FindRangeInQueue
          (TMediaSampleQueue<IMediaAudioSample,FMediaAudioSampleSink> *this,
          TRange<FMediaTimeStamp> *param_1,bool param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  uint uVar8;
  longlong *plVar9;
  longlong *plVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  longlong local_res20;
  longlong local_a8;
  undefined1 local_98 [8];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  TRange<FMediaTimeStamp> local_70;
  
  uVar12 = 0;
  *param_3 = -1;
  *param_4 = -1;
  *param_5 = 0;
  iVar1 = (this->Samples).ArrayNum;
  if (0 < iVar1) {
    local_a8 = 0;
    local_res20 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar12 < (this->Samples).ArrayNum) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar11 = (this->Samples).AllocatorInstance.Data + local_a8;
      if ((*(longlong *)pFVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      plVar9 = (longlong *)
               (**(code **)(**(longlong **)pFVar11 + 0x30))(*(longlong **)pFVar11,local_90);
      if ((*(longlong *)pFVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      plVar10 = (longlong *)
                (**(code **)(**(longlong **)pFVar11 + 0x10))(*(longlong **)pFVar11,local_98);
      iVar2 = *(int *)((longlong)plVar9 + 0xc);
      lVar6 = plVar9[1];
      lVar3 = *plVar10;
      lVar4 = *plVar9;
      if ((*(longlong *)pFVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      plVar9 = (longlong *)
               (**(code **)(**(longlong **)pFVar11 + 0x30))(*(longlong **)pFVar11,local_80);
      local_70.LowerBound.Type.Value = '\x01';
      local_70.LowerBound.Value.Time.Ticks = *plVar9;
      local_70.LowerBound.Value._8_8_ = plVar9[1];
      local_70.UpperBound.Type.Value = '\0';
      local_70.UpperBound.Value.Time.Ticks = lVar3 + lVar4;
      local_70.UpperBound.Value.SequenceIndex = (int)lVar6;
      local_70.UpperBound.Value.LoopIndex = iVar2;
      bVar7 = TRange<FMediaTimeStamp>::Overlaps(param_1,&local_70);
      if (bVar7) {
        if (*param_3 < 0) {
          *param_3 = uVar12;
        }
LAB_146bfb3d0:
        *param_4 = uVar12;
      }
      else {
        if (param_2) {
          if ((local_70.UpperBound.Type.Value == '\x02') &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (((param_1->LowerBound).Type.Value == '\x02') &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar2 = (param_1->LowerBound).Value.SequenceIndex;
          if (((((local_70.UpperBound.Value.SequenceIndex == iVar2) &&
                (local_70.UpperBound.Value.LoopIndex == (param_1->LowerBound).Value.LoopIndex)) &&
               (local_70.UpperBound.Value.Time.Ticks == (param_1->LowerBound).Value.Time.Ticks)) ||
              (local_70.UpperBound.Value.SequenceIndex < iVar2)) ||
             ((local_70.UpperBound.Value.SequenceIndex == iVar2 &&
              ((iVar2 = (param_1->LowerBound).Value.LoopIndex,
               local_70.UpperBound.Value.LoopIndex < iVar2 ||
               ((local_70.UpperBound.Value.LoopIndex == iVar2 &&
                (local_70.UpperBound.Value.Time.Ticks < (param_1->LowerBound).Value.Time.Ticks))))))
             )) goto LAB_146bfb57c;
LAB_146bfb578:
          bVar7 = false;
        }
        else {
          if ((local_70.LowerBound.Type.Value == '\x02') &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (((param_1->UpperBound).Type.Value == '\x02') &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar2 = (param_1->UpperBound).Value.SequenceIndex;
          if (local_70.LowerBound.Value.SequenceIndex < iVar2) goto LAB_146bfb578;
          if (local_70.LowerBound.Value.SequenceIndex == iVar2) {
            iVar2 = (param_1->UpperBound).Value.LoopIndex;
            if (local_70.LowerBound.Value.LoopIndex < iVar2) goto LAB_146bfb578;
            if ((local_70.LowerBound.Value.LoopIndex != iVar2) ||
               ((param_1->UpperBound).Value.Time.Ticks <= local_70.LowerBound.Value.Time.Ticks))
            goto LAB_146bfb57c;
            bVar7 = false;
          }
          else {
LAB_146bfb57c:
            bVar7 = true;
          }
        }
        if (bVar7) {
          return;
        }
        if (-1 < *param_3) goto LAB_146bfb3d0;
        *param_5 = *param_5 + 1;
      }
      uVar12 = uVar12 + 1;
      local_res20 = local_res20 + 1;
      local_a8 = local_a8 + 0x10;
    } while (local_res20 < iVar1);
  }
  return;
}

// FindRangeInQueue @ 146bfb5b0

void __thiscall
TMediaSampleQueue<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_>::FindRangeInQueue
          (TMediaSampleQueue<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_> *this,
          TRange<FMediaTimeStamp> *param_1,bool param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  uint uVar8;
  longlong *plVar9;
  longlong *plVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  longlong local_res20;
  longlong local_a8;
  undefined1 local_98 [8];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  TRange<FMediaTimeStamp> local_70;
  
  uVar12 = 0;
  *param_3 = -1;
  *param_4 = -1;
  *param_5 = 0;
  iVar1 = (this->Samples).ArrayNum;
  if (0 < iVar1) {
    local_a8 = 0;
    local_res20 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar12 < (this->Samples).ArrayNum) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar11 = (this->Samples).AllocatorInstance.Data + local_a8;
      if ((*(longlong *)pFVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      plVar9 = (longlong *)
               (**(code **)(**(longlong **)pFVar11 + 0x18))(*(longlong **)pFVar11,local_90);
      if ((*(longlong *)pFVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      plVar10 = (longlong *)
                (**(code **)(**(longlong **)pFVar11 + 8))(*(longlong **)pFVar11,local_98);
      iVar2 = *(int *)((longlong)plVar9 + 0xc);
      lVar6 = plVar9[1];
      lVar3 = *plVar10;
      lVar4 = *plVar9;
      if ((*(longlong *)pFVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      plVar9 = (longlong *)
               (**(code **)(**(longlong **)pFVar11 + 0x18))(*(longlong **)pFVar11,local_80);
      local_70.LowerBound.Type.Value = '\x01';
      local_70.LowerBound.Value.Time.Ticks = *plVar9;
      local_70.LowerBound.Value._8_8_ = plVar9[1];
      local_70.UpperBound.Type.Value = '\0';
      local_70.UpperBound.Value.Time.Ticks = lVar3 + lVar4;
      local_70.UpperBound.Value.SequenceIndex = (int)lVar6;
      local_70.UpperBound.Value.LoopIndex = iVar2;
      bVar7 = TRange<FMediaTimeStamp>::Overlaps(param_1,&local_70);
      if (bVar7) {
        if (*param_3 < 0) {
          *param_3 = uVar12;
        }
LAB_146bfb7a0:
        *param_4 = uVar12;
      }
      else {
        if (param_2) {
          if ((local_70.UpperBound.Type.Value == '\x02') &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (((param_1->LowerBound).Type.Value == '\x02') &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar2 = (param_1->LowerBound).Value.SequenceIndex;
          if (((((local_70.UpperBound.Value.SequenceIndex == iVar2) &&
                (local_70.UpperBound.Value.LoopIndex == (param_1->LowerBound).Value.LoopIndex)) &&
               (local_70.UpperBound.Value.Time.Ticks == (param_1->LowerBound).Value.Time.Ticks)) ||
              (local_70.UpperBound.Value.SequenceIndex < iVar2)) ||
             ((local_70.UpperBound.Value.SequenceIndex == iVar2 &&
              ((iVar2 = (param_1->LowerBound).Value.LoopIndex,
               local_70.UpperBound.Value.LoopIndex < iVar2 ||
               ((local_70.UpperBound.Value.LoopIndex == iVar2 &&
                (local_70.UpperBound.Value.Time.Ticks < (param_1->LowerBound).Value.Time.Ticks))))))
             )) goto LAB_146bfb94c;
LAB_146bfb948:
          bVar7 = false;
        }
        else {
          if ((local_70.LowerBound.Type.Value == '\x02') &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (((param_1->UpperBound).Type.Value == '\x02') &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar2 = (param_1->UpperBound).Value.SequenceIndex;
          if (local_70.LowerBound.Value.SequenceIndex < iVar2) goto LAB_146bfb948;
          if (local_70.LowerBound.Value.SequenceIndex == iVar2) {
            iVar2 = (param_1->UpperBound).Value.LoopIndex;
            if (local_70.LowerBound.Value.LoopIndex < iVar2) goto LAB_146bfb948;
            if ((local_70.LowerBound.Value.LoopIndex != iVar2) ||
               ((param_1->UpperBound).Value.Time.Ticks <= local_70.LowerBound.Value.Time.Ticks))
            goto LAB_146bfb94c;
            bVar7 = false;
          }
          else {
LAB_146bfb94c:
            bVar7 = true;
          }
        }
        if (bVar7) {
          return;
        }
        if (-1 < *param_3) goto LAB_146bfb7a0;
        *param_5 = *param_5 + 1;
      }
      uVar12 = uVar12 + 1;
      local_res20 = local_res20 + 1;
      local_a8 = local_a8 + 0x10;
    } while (local_res20 < iVar1);
  }
  return;
}

// FindRangeInQueue @ 146bfb980

void __thiscall
TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>::FindRangeInQueue
          (TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_> *this,
          TRange<FMediaTimeStamp> *param_1,bool param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  uint uVar8;
  longlong *plVar9;
  longlong *plVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  longlong local_res20;
  longlong local_a8;
  undefined1 local_98 [8];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  TRange<FMediaTimeStamp> local_70;
  
  uVar12 = 0;
  *param_3 = -1;
  *param_4 = -1;
  *param_5 = 0;
  iVar1 = (this->Samples).ArrayNum;
  if (0 < iVar1) {
    local_a8 = 0;
    local_res20 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar12 < (this->Samples).ArrayNum) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar11 = (this->Samples).AllocatorInstance.Data + local_a8;
      if ((*(longlong *)pFVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      plVar9 = (longlong *)
               (**(code **)(**(longlong **)pFVar11 + 0x18))(*(longlong **)pFVar11,local_90);
      if ((*(longlong *)pFVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      plVar10 = (longlong *)(**(code **)**(undefined8 **)pFVar11)(*(undefined8 **)pFVar11,local_98);
      iVar2 = *(int *)((longlong)plVar9 + 0xc);
      lVar6 = plVar9[1];
      lVar3 = *plVar10;
      lVar4 = *plVar9;
      if ((*(longlong *)pFVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      plVar9 = (longlong *)
               (**(code **)(**(longlong **)pFVar11 + 0x18))(*(longlong **)pFVar11,local_80);
      local_70.LowerBound.Type.Value = '\x01';
      local_70.LowerBound.Value.Time.Ticks = *plVar9;
      local_70.LowerBound.Value._8_8_ = plVar9[1];
      local_70.UpperBound.Type.Value = '\0';
      local_70.UpperBound.Value.Time.Ticks = lVar3 + lVar4;
      local_70.UpperBound.Value.SequenceIndex = (int)lVar6;
      local_70.UpperBound.Value.LoopIndex = iVar2;
      bVar7 = TRange<FMediaTimeStamp>::Overlaps(param_1,&local_70);
      if (bVar7) {
        if (*param_3 < 0) {
          *param_3 = uVar12;
        }
LAB_146bfbb6f:
        *param_4 = uVar12;
      }
      else {
        if (param_2) {
          if ((local_70.UpperBound.Type.Value == '\x02') &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (((param_1->LowerBound).Type.Value == '\x02') &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar2 = (param_1->LowerBound).Value.SequenceIndex;
          if (((((local_70.UpperBound.Value.SequenceIndex == iVar2) &&
                (local_70.UpperBound.Value.LoopIndex == (param_1->LowerBound).Value.LoopIndex)) &&
               (local_70.UpperBound.Value.Time.Ticks == (param_1->LowerBound).Value.Time.Ticks)) ||
              (local_70.UpperBound.Value.SequenceIndex < iVar2)) ||
             ((local_70.UpperBound.Value.SequenceIndex == iVar2 &&
              ((iVar2 = (param_1->LowerBound).Value.LoopIndex,
               local_70.UpperBound.Value.LoopIndex < iVar2 ||
               ((local_70.UpperBound.Value.LoopIndex == iVar2 &&
                (local_70.UpperBound.Value.Time.Ticks < (param_1->LowerBound).Value.Time.Ticks))))))
             )) goto LAB_146bfbd1b;
LAB_146bfbd17:
          bVar7 = false;
        }
        else {
          if ((local_70.LowerBound.Type.Value == '\x02') &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (((param_1->UpperBound).Type.Value == '\x02') &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar2 = (param_1->UpperBound).Value.SequenceIndex;
          if (local_70.LowerBound.Value.SequenceIndex < iVar2) goto LAB_146bfbd17;
          if (local_70.LowerBound.Value.SequenceIndex == iVar2) {
            iVar2 = (param_1->UpperBound).Value.LoopIndex;
            if (local_70.LowerBound.Value.LoopIndex < iVar2) goto LAB_146bfbd17;
            if ((local_70.LowerBound.Value.LoopIndex != iVar2) ||
               ((param_1->UpperBound).Value.Time.Ticks <= local_70.LowerBound.Value.Time.Ticks))
            goto LAB_146bfbd1b;
            bVar7 = false;
          }
          else {
LAB_146bfbd1b:
            bVar7 = true;
          }
        }
        if (bVar7) {
          return;
        }
        if (-1 < *param_3) goto LAB_146bfbb6f;
        *param_5 = *param_5 + 1;
      }
      uVar12 = uVar12 + 1;
      local_res20 = local_res20 + 1;
      local_a8 = local_a8 + 0x10;
    } while (local_res20 < iVar1);
  }
  return;
}

// FindRangeInQueue @ 146bfbd50

void __thiscall
TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>::FindRangeInQueue
          (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *this,
          TRange<FMediaTimeStamp> *param_1,bool param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  uint uVar8;
  longlong *plVar9;
  longlong *plVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  longlong local_res20;
  longlong local_a8;
  undefined1 local_98 [8];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  TRange<FMediaTimeStamp> local_70;
  
  uVar12 = 0;
  *param_3 = -1;
  *param_4 = -1;
  *param_5 = 0;
  iVar1 = (this->Samples).ArrayNum;
  if (0 < iVar1) {
    local_a8 = 0;
    local_res20 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar12 < (this->Samples).ArrayNum) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar11 = (this->Samples).AllocatorInstance.Data + local_a8;
      if ((*(longlong *)pFVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      plVar9 = (longlong *)
               (**(code **)(**(longlong **)pFVar11 + 0x60))(*(longlong **)pFVar11,local_90);
      if ((*(longlong *)pFVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      plVar10 = (longlong *)
                (**(code **)(**(longlong **)pFVar11 + 0x20))(*(longlong **)pFVar11,local_98);
      iVar2 = *(int *)((longlong)plVar9 + 0xc);
      lVar6 = plVar9[1];
      lVar3 = *plVar10;
      lVar4 = *plVar9;
      if ((*(longlong *)pFVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      plVar9 = (longlong *)
               (**(code **)(**(longlong **)pFVar11 + 0x60))(*(longlong **)pFVar11,local_80);
      local_70.LowerBound.Type.Value = '\x01';
      local_70.LowerBound.Value.Time.Ticks = *plVar9;
      local_70.LowerBound.Value._8_8_ = plVar9[1];
      local_70.UpperBound.Type.Value = '\0';
      local_70.UpperBound.Value.Time.Ticks = lVar3 + lVar4;
      local_70.UpperBound.Value.SequenceIndex = (int)lVar6;
      local_70.UpperBound.Value.LoopIndex = iVar2;
      bVar7 = TRange<FMediaTimeStamp>::Overlaps(param_1,&local_70);
      if (bVar7) {
        if (*param_3 < 0) {
          *param_3 = uVar12;
        }
LAB_146bfbf40:
        *param_4 = uVar12;
      }
      else {
        if (param_2) {
          if ((local_70.UpperBound.Type.Value == '\x02') &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (((param_1->LowerBound).Type.Value == '\x02') &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar2 = (param_1->LowerBound).Value.SequenceIndex;
          if (((((local_70.UpperBound.Value.SequenceIndex == iVar2) &&
                (local_70.UpperBound.Value.LoopIndex == (param_1->LowerBound).Value.LoopIndex)) &&
               (local_70.UpperBound.Value.Time.Ticks == (param_1->LowerBound).Value.Time.Ticks)) ||
              (local_70.UpperBound.Value.SequenceIndex < iVar2)) ||
             ((local_70.UpperBound.Value.SequenceIndex == iVar2 &&
              ((iVar2 = (param_1->LowerBound).Value.LoopIndex,
               local_70.UpperBound.Value.LoopIndex < iVar2 ||
               ((local_70.UpperBound.Value.LoopIndex == iVar2 &&
                (local_70.UpperBound.Value.Time.Ticks < (param_1->LowerBound).Value.Time.Ticks))))))
             )) goto LAB_146bfc0ec;
LAB_146bfc0e8:
          bVar7 = false;
        }
        else {
          if ((local_70.LowerBound.Type.Value == '\x02') &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (((param_1->UpperBound).Type.Value == '\x02') &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar2 = (param_1->UpperBound).Value.SequenceIndex;
          if (local_70.LowerBound.Value.SequenceIndex < iVar2) goto LAB_146bfc0e8;
          if (local_70.LowerBound.Value.SequenceIndex == iVar2) {
            iVar2 = (param_1->UpperBound).Value.LoopIndex;
            if (local_70.LowerBound.Value.LoopIndex < iVar2) goto LAB_146bfc0e8;
            if ((local_70.LowerBound.Value.LoopIndex != iVar2) ||
               ((param_1->UpperBound).Value.Time.Ticks <= local_70.LowerBound.Value.Time.Ticks))
            goto LAB_146bfc0ec;
            bVar7 = false;
          }
          else {
LAB_146bfc0ec:
            bVar7 = true;
          }
        }
        if (bVar7) {
          return;
        }
        if (-1 < *param_3) goto LAB_146bfbf40;
        *param_5 = *param_5 + 1;
      }
      uVar12 = uVar12 + 1;
      local_res20 = local_res20 + 1;
      local_a8 = local_a8 + 0x10;
    } while (local_res20 < iVar1);
  }
  return;
}

// GetFlushCount @ 146bfea70

uint __thiscall
TMediaSampleQueue<IMediaAudioSample,FMediaAudioSampleSink>::GetFlushCount
          (TMediaSampleQueue<IMediaAudioSample,FMediaAudioSampleSink> *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint uVar1;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar1 = this->FlushCount;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetFlushCount @ 146bfeac0

uint __thiscall
TMediaSampleQueue<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_>::GetFlushCount
          (TMediaSampleQueue<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_> *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint uVar1;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar1 = this->FlushCount;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetFlushCount @ 146bfeb10

uint __thiscall
TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>::GetFlushCount
          (TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_> *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint uVar1;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar1 = this->FlushCount;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetFlushCount @ 146bfeb60

uint __thiscall
TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>::GetFlushCount
          (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint uVar1;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar1 = this->FlushCount;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetSampleTimes @ 146bfff70

void __thiscall
TMediaSampleQueue<IMediaAudioSample,FMediaAudioSampleSink>::GetSampleTimes
          (TMediaSampleQueue<IMediaAudioSample,FMediaAudioSampleSink> *this,
          TArray<TRange<FMediaTimeStamp>,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong *lpCriticalSection;
  undefined4 uVar1;
  void *pvVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  undefined1 local_a8 [8];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80;
  undefined7 uStack_7f;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  longlong local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  lVar10 = (longlong)(this->CriticalSection).CriticalSection.Opaque2[0];
  uVar17 = 0;
  if (0 < lVar10) {
    lVar16 = 0;
    lVar18 = 0;
    do {
      uVar15 = ~uVar17 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar17 < (this->CriticalSection).CriticalSection.Opaque2[0]) {
        uVar8 = uVar15;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (*(longlong *)(lVar18 + (longlong)(this->CriticalSection).CriticalSection.Opaque1[0]) != 0)
      {
        uVar8 = 0;
        if ((int)uVar17 < (this->CriticalSection).CriticalSection.Opaque2[0]) {
          uVar8 = uVar15;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pvVar2 = (this->CriticalSection).CriticalSection.Opaque1[0];
        if ((*(longlong *)((longlong)pvVar2 + lVar18) == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        plVar11 = *(longlong **)((longlong)pvVar2 + lVar18);
        plVar11 = (longlong *)(**(code **)(*plVar11 + 0x30))(plVar11,local_a0);
        uVar8 = 0;
        if ((int)uVar17 < (this->CriticalSection).CriticalSection.Opaque2[0]) {
          uVar8 = uVar15;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pvVar2 = (this->CriticalSection).CriticalSection.Opaque1[0];
        if ((*(longlong *)((longlong)pvVar2 + lVar18) == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        plVar12 = *(longlong **)((longlong)pvVar2 + lVar18);
        plVar12 = (longlong *)(**(code **)(*plVar12 + 0x10))(plVar12,local_a8);
        uVar1 = *(undefined4 *)((longlong)plVar11 + 0xc);
        lVar14 = *plVar11;
        lVar3 = *plVar12;
        lVar6 = plVar11[1];
        uVar8 = 0;
        if ((int)uVar17 < (this->CriticalSection).CriticalSection.Opaque2[0]) {
          uVar8 = uVar15;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pvVar2 = (this->CriticalSection).CriticalSection.Opaque1[0];
        if ((*(longlong *)((longlong)pvVar2 + lVar18) == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        plVar11 = *(longlong **)((longlong)pvVar2 + lVar18);
        puVar13 = (undefined8 *)(**(code **)(*plVar11 + 0x30))(plVar11,local_90);
        local_80 = 1;
        uStack_78 = *puVar13;
        uStack_70 = puVar13[1];
        iVar9 = param_1->ArrayNum;
        uStack_68 = 0;
        local_60 = lVar14 + lVar3;
        uStack_58 = (int)lVar6;
        uStack_54 = uVar1;
        if (iVar9 == param_1->ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        lVar14 = (longlong)iVar9;
        param_1->ArrayNum = iVar9 + 1;
        pFVar4 = (param_1->AllocatorInstance).Data;
        *(ulonglong *)(pFVar4 + lVar14 * 0x30) = CONCAT71(uStack_7f,local_80);
        *(undefined8 *)(pFVar4 + lVar14 * 0x30 + 8) = uStack_78;
        *(undefined8 *)(pFVar4 + lVar14 * 0x30 + 0x10) = uStack_70;
        *(ulonglong *)(pFVar4 + lVar14 * 0x30 + 0x10 + 8) = CONCAT71(uStack_67,uStack_68);
        *(longlong *)(pFVar4 + lVar14 * 0x30 + 0x20) = local_60;
        *(ulonglong *)(pFVar4 + lVar14 * 0x30 + 0x20 + 8) = CONCAT44(uStack_54,uStack_58);
      }
      uVar17 = uVar17 + 1;
      lVar16 = lVar16 + 1;
      lVar18 = lVar18 + 0x10;
    } while (lVar16 < lVar10);
  }
                    /* WARNING: Could not recover jumptable at 0x000146c002cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// GetSampleTimes @ 146c002f0

void __thiscall
TMediaSampleQueue<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_>::GetSampleTimes
          (TMediaSampleQueue<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_> *this,
          TArray<TRange<FMediaTimeStamp>,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong *lpCriticalSection;
  undefined4 uVar1;
  void *pvVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  undefined1 local_a8 [8];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80;
  undefined7 uStack_7f;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  longlong local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  lVar10 = (longlong)(this->CriticalSection).CriticalSection.Opaque2[0];
  uVar17 = 0;
  if (0 < lVar10) {
    lVar16 = 0;
    lVar18 = 0;
    do {
      uVar15 = ~uVar17 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar17 < (this->CriticalSection).CriticalSection.Opaque2[0]) {
        uVar8 = uVar15;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (*(longlong *)(lVar18 + (longlong)(this->CriticalSection).CriticalSection.Opaque1[0]) != 0)
      {
        uVar8 = 0;
        if ((int)uVar17 < (this->CriticalSection).CriticalSection.Opaque2[0]) {
          uVar8 = uVar15;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pvVar2 = (this->CriticalSection).CriticalSection.Opaque1[0];
        if ((*(longlong *)((longlong)pvVar2 + lVar18) == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        plVar11 = *(longlong **)((longlong)pvVar2 + lVar18);
        plVar11 = (longlong *)(**(code **)(*plVar11 + 0x18))(plVar11,local_a0);
        uVar8 = 0;
        if ((int)uVar17 < (this->CriticalSection).CriticalSection.Opaque2[0]) {
          uVar8 = uVar15;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pvVar2 = (this->CriticalSection).CriticalSection.Opaque1[0];
        if ((*(longlong *)((longlong)pvVar2 + lVar18) == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        plVar12 = *(longlong **)((longlong)pvVar2 + lVar18);
        plVar12 = (longlong *)(**(code **)(*plVar12 + 8))(plVar12,local_a8);
        uVar1 = *(undefined4 *)((longlong)plVar11 + 0xc);
        lVar14 = *plVar11;
        lVar3 = *plVar12;
        lVar6 = plVar11[1];
        uVar8 = 0;
        if ((int)uVar17 < (this->CriticalSection).CriticalSection.Opaque2[0]) {
          uVar8 = uVar15;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pvVar2 = (this->CriticalSection).CriticalSection.Opaque1[0];
        if ((*(longlong *)((longlong)pvVar2 + lVar18) == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        plVar11 = *(longlong **)((longlong)pvVar2 + lVar18);
        puVar13 = (undefined8 *)(**(code **)(*plVar11 + 0x18))(plVar11,local_90);
        local_80 = 1;
        uStack_78 = *puVar13;
        uStack_70 = puVar13[1];
        iVar9 = param_1->ArrayNum;
        uStack_68 = 0;
        local_60 = lVar14 + lVar3;
        uStack_58 = (int)lVar6;
        uStack_54 = uVar1;
        if (iVar9 == param_1->ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        lVar14 = (longlong)iVar9;
        param_1->ArrayNum = iVar9 + 1;
        pFVar4 = (param_1->AllocatorInstance).Data;
        *(ulonglong *)(pFVar4 + lVar14 * 0x30) = CONCAT71(uStack_7f,local_80);
        *(undefined8 *)(pFVar4 + lVar14 * 0x30 + 8) = uStack_78;
        *(undefined8 *)(pFVar4 + lVar14 * 0x30 + 0x10) = uStack_70;
        *(ulonglong *)(pFVar4 + lVar14 * 0x30 + 0x10 + 8) = CONCAT71(uStack_67,uStack_68);
        *(longlong *)(pFVar4 + lVar14 * 0x30 + 0x20) = local_60;
        *(ulonglong *)(pFVar4 + lVar14 * 0x30 + 0x20 + 8) = CONCAT44(uStack_54,uStack_58);
      }
      uVar17 = uVar17 + 1;
      lVar16 = lVar16 + 1;
      lVar18 = lVar18 + 0x10;
    } while (lVar16 < lVar10);
  }
                    /* WARNING: Could not recover jumptable at 0x000146c0064f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// GetSampleTimes @ 146c00670

void __thiscall
TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>::GetSampleTimes
          (TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_> *this,
          TArray<TRange<FMediaTimeStamp>,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong *lpCriticalSection;
  undefined4 uVar1;
  void *pvVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  undefined1 local_a8 [8];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80;
  undefined7 uStack_7f;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  longlong local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  lVar10 = (longlong)(this->CriticalSection).CriticalSection.Opaque2[0];
  uVar17 = 0;
  if (0 < lVar10) {
    lVar16 = 0;
    lVar18 = 0;
    do {
      uVar15 = ~uVar17 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar17 < (this->CriticalSection).CriticalSection.Opaque2[0]) {
        uVar8 = uVar15;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (*(longlong *)(lVar18 + (longlong)(this->CriticalSection).CriticalSection.Opaque1[0]) != 0)
      {
        uVar8 = 0;
        if ((int)uVar17 < (this->CriticalSection).CriticalSection.Opaque2[0]) {
          uVar8 = uVar15;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pvVar2 = (this->CriticalSection).CriticalSection.Opaque1[0];
        if ((*(longlong *)((longlong)pvVar2 + lVar18) == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        plVar11 = *(longlong **)((longlong)pvVar2 + lVar18);
        plVar11 = (longlong *)(**(code **)(*plVar11 + 0x18))(plVar11,local_a0);
        uVar8 = 0;
        if ((int)uVar17 < (this->CriticalSection).CriticalSection.Opaque2[0]) {
          uVar8 = uVar15;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pvVar2 = (this->CriticalSection).CriticalSection.Opaque1[0];
        if ((*(longlong *)((longlong)pvVar2 + lVar18) == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        puVar13 = *(undefined8 **)((longlong)pvVar2 + lVar18);
        plVar12 = (longlong *)(**(code **)*puVar13)(puVar13,local_a8);
        uVar1 = *(undefined4 *)((longlong)plVar11 + 0xc);
        lVar14 = *plVar11;
        lVar3 = *plVar12;
        lVar6 = plVar11[1];
        uVar8 = 0;
        if ((int)uVar17 < (this->CriticalSection).CriticalSection.Opaque2[0]) {
          uVar8 = uVar15;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pvVar2 = (this->CriticalSection).CriticalSection.Opaque1[0];
        if ((*(longlong *)((longlong)pvVar2 + lVar18) == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        plVar11 = *(longlong **)((longlong)pvVar2 + lVar18);
        puVar13 = (undefined8 *)(**(code **)(*plVar11 + 0x18))(plVar11,local_90);
        local_80 = 1;
        uStack_78 = *puVar13;
        uStack_70 = puVar13[1];
        iVar9 = param_1->ArrayNum;
        uStack_68 = 0;
        local_60 = lVar14 + lVar3;
        uStack_58 = (int)lVar6;
        uStack_54 = uVar1;
        if (iVar9 == param_1->ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        lVar14 = (longlong)iVar9;
        param_1->ArrayNum = iVar9 + 1;
        pFVar4 = (param_1->AllocatorInstance).Data;
        *(ulonglong *)(pFVar4 + lVar14 * 0x30) = CONCAT71(uStack_7f,local_80);
        *(undefined8 *)(pFVar4 + lVar14 * 0x30 + 8) = uStack_78;
        *(undefined8 *)(pFVar4 + lVar14 * 0x30 + 0x10) = uStack_70;
        *(ulonglong *)(pFVar4 + lVar14 * 0x30 + 0x10 + 8) = CONCAT71(uStack_67,uStack_68);
        *(longlong *)(pFVar4 + lVar14 * 0x30 + 0x20) = local_60;
        *(ulonglong *)(pFVar4 + lVar14 * 0x30 + 0x20 + 8) = CONCAT44(uStack_54,uStack_58);
      }
      uVar17 = uVar17 + 1;
      lVar16 = lVar16 + 1;
      lVar18 = lVar18 + 0x10;
    } while (lVar16 < lVar10);
  }
                    /* WARNING: Could not recover jumptable at 0x000146c009ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// GetSampleTimes @ 146c009f0

void __thiscall
TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>::GetSampleTimes
          (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *this,
          TArray<TRange<FMediaTimeStamp>,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong *lpCriticalSection;
  undefined4 uVar1;
  void *pvVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  undefined1 local_a8 [8];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80;
  undefined7 uStack_7f;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  longlong local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  lVar10 = (longlong)(this->CriticalSection).CriticalSection.Opaque2[0];
  uVar17 = 0;
  if (0 < lVar10) {
    lVar16 = 0;
    lVar18 = 0;
    do {
      uVar15 = ~uVar17 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar17 < (this->CriticalSection).CriticalSection.Opaque2[0]) {
        uVar8 = uVar15;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (*(longlong *)(lVar18 + (longlong)(this->CriticalSection).CriticalSection.Opaque1[0]) != 0)
      {
        uVar8 = 0;
        if ((int)uVar17 < (this->CriticalSection).CriticalSection.Opaque2[0]) {
          uVar8 = uVar15;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pvVar2 = (this->CriticalSection).CriticalSection.Opaque1[0];
        if ((*(longlong *)((longlong)pvVar2 + lVar18) == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        plVar11 = *(longlong **)((longlong)pvVar2 + lVar18);
        plVar11 = (longlong *)(**(code **)(*plVar11 + 0x60))(plVar11,local_a0);
        uVar8 = 0;
        if ((int)uVar17 < (this->CriticalSection).CriticalSection.Opaque2[0]) {
          uVar8 = uVar15;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pvVar2 = (this->CriticalSection).CriticalSection.Opaque1[0];
        if ((*(longlong *)((longlong)pvVar2 + lVar18) == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        plVar12 = *(longlong **)((longlong)pvVar2 + lVar18);
        plVar12 = (longlong *)(**(code **)(*plVar12 + 0x20))(plVar12,local_a8);
        uVar1 = *(undefined4 *)((longlong)plVar11 + 0xc);
        lVar14 = *plVar11;
        lVar3 = *plVar12;
        lVar6 = plVar11[1];
        uVar8 = 0;
        if ((int)uVar17 < (this->CriticalSection).CriticalSection.Opaque2[0]) {
          uVar8 = uVar15;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pvVar2 = (this->CriticalSection).CriticalSection.Opaque1[0];
        if ((*(longlong *)((longlong)pvVar2 + lVar18) == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        plVar11 = *(longlong **)((longlong)pvVar2 + lVar18);
        puVar13 = (undefined8 *)(**(code **)(*plVar11 + 0x60))(plVar11,local_90);
        local_80 = 1;
        uStack_78 = *puVar13;
        uStack_70 = puVar13[1];
        iVar9 = param_1->ArrayNum;
        uStack_68 = 0;
        local_60 = lVar14 + lVar3;
        uStack_58 = (int)lVar6;
        uStack_54 = uVar1;
        if (iVar9 == param_1->ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        lVar14 = (longlong)iVar9;
        param_1->ArrayNum = iVar9 + 1;
        pFVar4 = (param_1->AllocatorInstance).Data;
        *(ulonglong *)(pFVar4 + lVar14 * 0x30) = CONCAT71(uStack_7f,local_80);
        *(undefined8 *)(pFVar4 + lVar14 * 0x30 + 8) = uStack_78;
        *(undefined8 *)(pFVar4 + lVar14 * 0x30 + 0x10) = uStack_70;
        *(ulonglong *)(pFVar4 + lVar14 * 0x30 + 0x10 + 8) = CONCAT71(uStack_67,uStack_68);
        *(longlong *)(pFVar4 + lVar14 * 0x30 + 0x20) = local_60;
        *(ulonglong *)(pFVar4 + lVar14 * 0x30 + 0x20 + 8) = CONCAT44(uStack_54,uStack_58);
      }
      uVar17 = uVar17 + 1;
      lVar16 = lVar16 + 1;
      lVar18 = lVar18 + 0x10;
    } while (lVar16 < lVar10);
  }
                    /* WARNING: Could not recover jumptable at 0x000146c00d4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// Num @ 146c035f0

int __thiscall
TMediaSampleQueue<IMediaAudioSample,FMediaAudioSampleSink>::Num
          (TMediaSampleQueue<IMediaAudioSample,FMediaAudioSampleSink> *this)

{
  return (this->Samples).ArrayNum;
}

// Num @ 146c03600

int __thiscall
TMediaSampleQueue<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_>::Num
          (TMediaSampleQueue<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_> *this)

{
  return (this->Samples).ArrayNum;
}

// Num @ 146c03610

int __thiscall
TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>::Num
          (TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_> *this)

{
  return (this->Samples).ArrayNum;
}

// Num @ 146c03620

int __thiscall
TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>::Num
          (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *this)

{
  return (this->Samples).ArrayNum;
}

// Peek @ 146c040c0

bool __thiscall
TMediaSampleQueue<IMediaAudioSample,FMediaAudioSampleSink>::Peek
          (TMediaSampleQueue<IMediaAudioSample,FMediaAudioSampleSink> *this,
          TSharedPtr<IMediaAudioSample,1> *param_1)

{
  longlong *lpCriticalSection;
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  IMediaAudioSample *pIVar3;
  code *pcVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  undefined1 uVar7;
  atomic<int> *paVar8;
  
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->CriticalSection).CriticalSection.Opaque2[0] == 0) {
    bVar6 = false;
  }
  else {
    if ((this->CriticalSection).CriticalSection.Opaque2[0] < 1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
    }
    plVar1 = (this->CriticalSection).CriticalSection.Opaque1[0];
    pTVar2 = (TReferenceControllerBase<1> *)plVar1[1];
    pIVar3 = (IMediaAudioSample *)*plVar1;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      paVar8 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar8 = &pTVar2->SharedReferenceCount;
      LOCK();
      *paVar8 = (atomic<int>)((int)*paVar8 + 1);
      UNLOCK();
    }
    if (pIVar3 == (IMediaAudioSample *)0x0) {
      bVar6 = false;
    }
    else {
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar8 = (atomic<int>)((int)*paVar8 + 1);
        UNLOCK();
      }
      pTVar5 = (param_1->SharedReferenceCount).ReferenceController;
      param_1->Object = pIVar3;
      (param_1->SharedReferenceCount).ReferenceController = pTVar2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      bVar6 = true;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar6;
}

// Peek @ 146c041c0

bool __thiscall
TMediaSampleQueue<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_>::Peek
          (TMediaSampleQueue<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_> *this,
          TSharedPtr<IMediaBinarySample,1> *param_1)

{
  longlong *lpCriticalSection;
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  IMediaBinarySample *pIVar3;
  code *pcVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  undefined1 uVar7;
  atomic<int> *paVar8;
  
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->CriticalSection).CriticalSection.Opaque2[0] == 0) {
    bVar6 = false;
  }
  else {
    if ((this->CriticalSection).CriticalSection.Opaque2[0] < 1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
    }
    plVar1 = (this->CriticalSection).CriticalSection.Opaque1[0];
    pTVar2 = (TReferenceControllerBase<1> *)plVar1[1];
    pIVar3 = (IMediaBinarySample *)*plVar1;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      paVar8 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar8 = &pTVar2->SharedReferenceCount;
      LOCK();
      *paVar8 = (atomic<int>)((int)*paVar8 + 1);
      UNLOCK();
    }
    if (pIVar3 == (IMediaBinarySample *)0x0) {
      bVar6 = false;
    }
    else {
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar8 = (atomic<int>)((int)*paVar8 + 1);
        UNLOCK();
      }
      pTVar5 = (param_1->SharedReferenceCount).ReferenceController;
      param_1->Object = pIVar3;
      (param_1->SharedReferenceCount).ReferenceController = pTVar2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      bVar6 = true;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar6;
}

// Peek @ 146c042c0

bool __thiscall
TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>::Peek
          (TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_> *this,
          TSharedPtr<IMediaOverlaySample,1> *param_1)

{
  longlong *lpCriticalSection;
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  IMediaOverlaySample *pIVar3;
  code *pcVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  undefined1 uVar7;
  atomic<int> *paVar8;
  
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->CriticalSection).CriticalSection.Opaque2[0] == 0) {
    bVar6 = false;
  }
  else {
    if ((this->CriticalSection).CriticalSection.Opaque2[0] < 1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
    }
    plVar1 = (this->CriticalSection).CriticalSection.Opaque1[0];
    pTVar2 = (TReferenceControllerBase<1> *)plVar1[1];
    pIVar3 = (IMediaOverlaySample *)*plVar1;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      paVar8 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar8 = &pTVar2->SharedReferenceCount;
      LOCK();
      *paVar8 = (atomic<int>)((int)*paVar8 + 1);
      UNLOCK();
    }
    if (pIVar3 == (IMediaOverlaySample *)0x0) {
      bVar6 = false;
    }
    else {
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar8 = (atomic<int>)((int)*paVar8 + 1);
        UNLOCK();
      }
      pTVar5 = (param_1->SharedReferenceCount).ReferenceController;
      param_1->Object = pIVar3;
      (param_1->SharedReferenceCount).ReferenceController = pTVar2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      bVar6 = true;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar6;
}

// Peek @ 146c043c0

bool __thiscall
TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>::Peek
          (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *this,
          TSharedPtr<IMediaTextureSample,1> *param_1)

{
  longlong *lpCriticalSection;
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  IMediaTextureSample *pIVar3;
  code *pcVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  undefined1 uVar7;
  atomic<int> *paVar8;
  
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->CriticalSection).CriticalSection.Opaque2[0] == 0) {
    bVar6 = false;
  }
  else {
    if ((this->CriticalSection).CriticalSection.Opaque2[0] < 1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
    }
    plVar1 = (this->CriticalSection).CriticalSection.Opaque1[0];
    pTVar2 = (TReferenceControllerBase<1> *)plVar1[1];
    pIVar3 = (IMediaTextureSample *)*plVar1;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      paVar8 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar8 = &pTVar2->SharedReferenceCount;
      LOCK();
      *paVar8 = (atomic<int>)((int)*paVar8 + 1);
      UNLOCK();
    }
    if (pIVar3 == (IMediaTextureSample *)0x0) {
      bVar6 = false;
    }
    else {
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar8 = (atomic<int>)((int)*paVar8 + 1);
        UNLOCK();
      }
      pTVar5 = (param_1->SharedReferenceCount).ReferenceController;
      param_1->Object = pIVar3;
      (param_1->SharedReferenceCount).ReferenceController = pTVar2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      bVar6 = true;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar6;
}

// Pop @ 146c045e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
TMediaSampleQueue<IMediaAudioSample,FMediaAudioSampleSink>::Pop
          (TMediaSampleQueue<IMediaAudioSample,FMediaAudioSampleSink> *this)

{
  longlong *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->CriticalSection).CriticalSection.Opaque2[0] != 0) {
    if ((this->CriticalSection).CriticalSection.Opaque2[0] < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if (*(longlong *)(this->CriticalSection).CriticalSection.Opaque1[0] != 0) {
      TArray<TSharedPtr<IMediaAudioSample,1>,TSizedDefaultAllocator<32>_>::RemoveAt
                ((TArray<TSharedPtr<IMediaAudioSample,1>,TSizedDefaultAllocator<32>_> *)
                 &this->CriticalSection,0,Default);
      bVar2 = true;
      goto LAB_146c04663;
    }
  }
  bVar2 = false;
LAB_146c04663:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar2;
}

// Pop @ 146c04690

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
TMediaSampleQueue<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_>::Pop
          (TMediaSampleQueue<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_> *this)

{
  longlong *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->CriticalSection).CriticalSection.Opaque2[0] != 0) {
    if ((this->CriticalSection).CriticalSection.Opaque2[0] < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if (*(longlong *)(this->CriticalSection).CriticalSection.Opaque1[0] != 0) {
      TArray<TSharedPtr<IMediaBinarySample,1>,TSizedDefaultAllocator<32>_>::RemoveAt
                ((TArray<TSharedPtr<IMediaBinarySample,1>,TSizedDefaultAllocator<32>_> *)
                 &this->CriticalSection,0,Default);
      bVar2 = true;
      goto LAB_146c04713;
    }
  }
  bVar2 = false;
LAB_146c04713:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar2;
}

// Pop @ 146c04740

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>::Pop
          (TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_> *this)

{
  longlong *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->CriticalSection).CriticalSection.Opaque2[0] != 0) {
    if ((this->CriticalSection).CriticalSection.Opaque2[0] < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if (*(longlong *)(this->CriticalSection).CriticalSection.Opaque1[0] != 0) {
      TArray<TSharedPtr<IMediaOverlaySample,1>,TSizedDefaultAllocator<32>_>::RemoveAt
                ((TArray<TSharedPtr<IMediaOverlaySample,1>,TSizedDefaultAllocator<32>_> *)
                 &this->CriticalSection,0,Default);
      bVar2 = true;
      goto LAB_146c047c3;
    }
  }
  bVar2 = false;
LAB_146c047c3:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar2;
}

// Pop @ 146c047f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>::Pop
          (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *this)

{
  longlong *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->CriticalSection).CriticalSection.Opaque2[0] != 0) {
    if ((this->CriticalSection).CriticalSection.Opaque2[0] < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if (*(longlong *)(this->CriticalSection).CriticalSection.Opaque1[0] != 0) {
      TArray<TSharedPtr<IMediaTextureSample,1>,TSizedDefaultAllocator<32>_>::RemoveAt
                ((TArray<TSharedPtr<IMediaTextureSample,1>,TSizedDefaultAllocator<32>_> *)
                 &this->CriticalSection,0,Default);
      bVar2 = true;
      goto LAB_146c04873;
    }
  }
  bVar2 = false;
LAB_146c04873:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar2;
}

// PurgeOutdatedSamples @ 146c08570

uint __thiscall
TMediaSampleQueue<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_>::PurgeOutdatedSamples
          (TMediaSampleQueue<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_> *this,
          FMediaTimeStamp *param_1,bool param_2,FTimespan param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong local_res8;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar1 = (this->Samples).ArrayNum;
  if (0 < iVar1) {
    uVar9 = iVar1 - 1;
    if (param_2) {
      if (-1 < (int)uVar9) {
        lVar10 = (longlong)(int)uVar9 << 4;
        do {
          uVar6 = 0;
          if ((int)uVar9 < (this->Samples).ArrayNum) {
            uVar6 = ~uVar9 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar9 = (*pcVar4)();
            return uVar9;
          }
          pFVar3 = (this->Samples).AllocatorInstance.Data;
          if ((*(longlong *)(pFVar3 + lVar10) == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar9 = (*pcVar4)();
            return uVar9;
          }
          plVar8 = *(longlong **)(pFVar3 + lVar10);
          plVar8 = (longlong *)(**(code **)(*plVar8 + 0x18))(plVar8,local_38);
          iVar1 = param_1->SequenceIndex;
          iVar2 = (int)plVar8[1];
          if (iVar2 == iVar1) {
            if (*(int *)((longlong)plVar8 + 0xc) != param_1->LoopIndex) goto LAB_146c0878e;
            if (*plVar8 != (param_1->Time).Ticks) goto LAB_146c0878a;
          }
          else {
LAB_146c0878a:
            if (iVar1 <= iVar2) {
              if (iVar2 != iVar1) break;
LAB_146c0878e:
              if ((param_1->LoopIndex <= *(int *)((longlong)plVar8 + 0xc)) &&
                 ((*(int *)((longlong)plVar8 + 0xc) != param_1->LoopIndex ||
                  ((param_1->Time).Ticks <= *plVar8)))) break;
            }
          }
          lVar10 = lVar10 + -0x10;
          uVar9 = uVar9 - 1;
        } while (-1 < (int)uVar9);
      }
    }
    else if (-1 < (int)uVar9) {
      lVar10 = (longlong)(int)uVar9 << 4;
      do {
        uVar6 = 0;
        if ((int)uVar9 < (this->Samples).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return uVar9;
        }
        pFVar3 = (this->Samples).AllocatorInstance.Data;
        if ((*(longlong *)(pFVar3 + lVar10) == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return uVar9;
        }
        plVar8 = *(longlong **)(pFVar3 + lVar10);
        plVar8 = (longlong *)(**(code **)(*plVar8 + 0x18))(plVar8,local_48);
        if (((int)plVar8[1] < param_1->SequenceIndex) ||
           (((int)plVar8[1] == param_1->SequenceIndex &&
            ((*(int *)((longlong)plVar8 + 0xc) < param_1->LoopIndex ||
             ((*(int *)((longlong)plVar8 + 0xc) == param_1->LoopIndex &&
              (*plVar8 < (param_1->Time).Ticks)))))))) goto LAB_146c087ad;
        lVar10 = lVar10 + -0x10;
        uVar9 = uVar9 - 1;
      } while (-1 < (int)uVar9);
      goto LAB_146c08695;
    }
LAB_146c087ad:
    lVar10 = 0;
    if (-1 < (int)uVar9) {
      lVar11 = (longlong)(int)uVar9 << 4;
      do {
        uVar6 = 0;
        if ((int)uVar9 < (this->Samples).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return uVar9;
        }
        pFVar3 = (this->Samples).AllocatorInstance.Data;
        if ((*(longlong *)(pFVar3 + lVar11) == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return uVar9;
        }
        (**(code **)(**(longlong **)(pFVar3 + lVar11) + 8))();
        lVar10 = lVar10 + local_res8;
        if (param_3.Ticks < lVar10) {
          uVar6 = uVar9 + 1;
          uVar7 = 0;
          if ((int)uVar6 <= (this->Samples).ArrayNum) {
            uVar7 = ~uVar6 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar9 = (*pcVar4)();
            return uVar9;
          }
          if (uVar6 != 0) {
            TArray<TSharedPtr<IMediaBinarySample,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                      (&this->Samples,0,uVar6);
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,&(this->Samples).AllocatorInstance,(this->Samples).ArrayNum,
                       &(this->Samples).ArrayMax);
          }
          this->NumDroppedSamples = this->NumDroppedSamples + uVar9 + 1;
          goto LAB_146c08697;
        }
        lVar11 = lVar11 + -0x10;
        uVar9 = uVar9 - 1;
      } while (-1 < (int)uVar9);
    }
  }
LAB_146c08695:
  uVar6 = 0;
LAB_146c08697:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return uVar6;
}

// PurgeOutdatedSamples @ 146c08910

uint __thiscall
TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>::PurgeOutdatedSamples
          (TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_> *this,
          FMediaTimeStamp *param_1,bool param_2,FTimespan param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong local_res8;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar1 = (this->Samples).ArrayNum;
  if (0 < iVar1) {
    uVar9 = iVar1 - 1;
    if (param_2) {
      if (-1 < (int)uVar9) {
        lVar10 = (longlong)(int)uVar9 << 4;
        do {
          uVar6 = 0;
          if ((int)uVar9 < (this->Samples).ArrayNum) {
            uVar6 = ~uVar9 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar9 = (*pcVar4)();
            return uVar9;
          }
          pFVar3 = (this->Samples).AllocatorInstance.Data;
          if ((*(longlong *)(pFVar3 + lVar10) == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar9 = (*pcVar4)();
            return uVar9;
          }
          plVar8 = *(longlong **)(pFVar3 + lVar10);
          plVar8 = (longlong *)(**(code **)(*plVar8 + 0x18))(plVar8,local_38);
          iVar1 = param_1->SequenceIndex;
          iVar2 = (int)plVar8[1];
          if (iVar2 == iVar1) {
            if (*(int *)((longlong)plVar8 + 0xc) != param_1->LoopIndex) goto LAB_146c08b2e;
            if (*plVar8 != (param_1->Time).Ticks) goto LAB_146c08b2a;
          }
          else {
LAB_146c08b2a:
            if (iVar1 <= iVar2) {
              if (iVar2 != iVar1) break;
LAB_146c08b2e:
              if ((param_1->LoopIndex <= *(int *)((longlong)plVar8 + 0xc)) &&
                 ((*(int *)((longlong)plVar8 + 0xc) != param_1->LoopIndex ||
                  ((param_1->Time).Ticks <= *plVar8)))) break;
            }
          }
          lVar10 = lVar10 + -0x10;
          uVar9 = uVar9 - 1;
        } while (-1 < (int)uVar9);
      }
    }
    else if (-1 < (int)uVar9) {
      lVar10 = (longlong)(int)uVar9 << 4;
      do {
        uVar6 = 0;
        if ((int)uVar9 < (this->Samples).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return uVar9;
        }
        pFVar3 = (this->Samples).AllocatorInstance.Data;
        if ((*(longlong *)(pFVar3 + lVar10) == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return uVar9;
        }
        plVar8 = *(longlong **)(pFVar3 + lVar10);
        plVar8 = (longlong *)(**(code **)(*plVar8 + 0x18))(plVar8,local_48);
        if (((int)plVar8[1] < param_1->SequenceIndex) ||
           (((int)plVar8[1] == param_1->SequenceIndex &&
            ((*(int *)((longlong)plVar8 + 0xc) < param_1->LoopIndex ||
             ((*(int *)((longlong)plVar8 + 0xc) == param_1->LoopIndex &&
              (*plVar8 < (param_1->Time).Ticks)))))))) goto LAB_146c08b4d;
        lVar10 = lVar10 + -0x10;
        uVar9 = uVar9 - 1;
      } while (-1 < (int)uVar9);
      goto LAB_146c08a35;
    }
LAB_146c08b4d:
    lVar10 = 0;
    if (-1 < (int)uVar9) {
      lVar11 = (longlong)(int)uVar9 << 4;
      do {
        uVar6 = 0;
        if ((int)uVar9 < (this->Samples).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return uVar9;
        }
        pFVar3 = (this->Samples).AllocatorInstance.Data;
        if ((*(longlong *)(pFVar3 + lVar11) == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return uVar9;
        }
        (**(code **)**(undefined8 **)(pFVar3 + lVar11))();
        lVar10 = lVar10 + local_res8;
        if (param_3.Ticks < lVar10) {
          uVar6 = uVar9 + 1;
          uVar7 = 0;
          if ((int)uVar6 <= (this->Samples).ArrayNum) {
            uVar7 = ~uVar6 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar9 = (*pcVar4)();
            return uVar9;
          }
          if (uVar6 != 0) {
            TArray<TSharedPtr<IMediaOverlaySample,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                      (&this->Samples,0,uVar6);
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,&(this->Samples).AllocatorInstance,(this->Samples).ArrayNum,
                       &(this->Samples).ArrayMax);
          }
          this->NumDroppedSamples = this->NumDroppedSamples + uVar9 + 1;
          goto LAB_146c08a37;
        }
        lVar11 = lVar11 + -0x10;
        uVar9 = uVar9 - 1;
      } while (-1 < (int)uVar9);
    }
  }
LAB_146c08a35:
  uVar6 = 0;
LAB_146c08a37:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return uVar6;
}

// PurgeOutdatedSamples @ 146c08cb0

uint __thiscall
TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>::PurgeOutdatedSamples
          (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *this,
          FMediaTimeStamp *param_1,bool param_2,FTimespan param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong local_res8;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar1 = (this->Samples).ArrayNum;
  if (0 < iVar1) {
    uVar9 = iVar1 - 1;
    if (param_2) {
      if (-1 < (int)uVar9) {
        lVar10 = (longlong)(int)uVar9 << 4;
        do {
          uVar6 = 0;
          if ((int)uVar9 < (this->Samples).ArrayNum) {
            uVar6 = ~uVar9 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar9 = (*pcVar4)();
            return uVar9;
          }
          pFVar3 = (this->Samples).AllocatorInstance.Data;
          if ((*(longlong *)(pFVar3 + lVar10) == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar9 = (*pcVar4)();
            return uVar9;
          }
          plVar8 = *(longlong **)(pFVar3 + lVar10);
          plVar8 = (longlong *)(**(code **)(*plVar8 + 0x60))(plVar8,local_38);
          iVar1 = param_1->SequenceIndex;
          iVar2 = (int)plVar8[1];
          if (iVar2 == iVar1) {
            if (*(int *)((longlong)plVar8 + 0xc) != param_1->LoopIndex) goto LAB_146c08ece;
            if (*plVar8 != (param_1->Time).Ticks) goto LAB_146c08eca;
          }
          else {
LAB_146c08eca:
            if (iVar1 <= iVar2) {
              if (iVar2 != iVar1) break;
LAB_146c08ece:
              if ((param_1->LoopIndex <= *(int *)((longlong)plVar8 + 0xc)) &&
                 ((*(int *)((longlong)plVar8 + 0xc) != param_1->LoopIndex ||
                  ((param_1->Time).Ticks <= *plVar8)))) break;
            }
          }
          lVar10 = lVar10 + -0x10;
          uVar9 = uVar9 - 1;
        } while (-1 < (int)uVar9);
      }
    }
    else if (-1 < (int)uVar9) {
      lVar10 = (longlong)(int)uVar9 << 4;
      do {
        uVar6 = 0;
        if ((int)uVar9 < (this->Samples).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return uVar9;
        }
        pFVar3 = (this->Samples).AllocatorInstance.Data;
        if ((*(longlong *)(pFVar3 + lVar10) == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return uVar9;
        }
        plVar8 = *(longlong **)(pFVar3 + lVar10);
        plVar8 = (longlong *)(**(code **)(*plVar8 + 0x60))(plVar8,local_48);
        if (((int)plVar8[1] < param_1->SequenceIndex) ||
           (((int)plVar8[1] == param_1->SequenceIndex &&
            ((*(int *)((longlong)plVar8 + 0xc) < param_1->LoopIndex ||
             ((*(int *)((longlong)plVar8 + 0xc) == param_1->LoopIndex &&
              (*plVar8 < (param_1->Time).Ticks)))))))) goto LAB_146c08eed;
        lVar10 = lVar10 + -0x10;
        uVar9 = uVar9 - 1;
      } while (-1 < (int)uVar9);
      goto LAB_146c08dd5;
    }
LAB_146c08eed:
    lVar10 = 0;
    if (-1 < (int)uVar9) {
      lVar11 = (longlong)(int)uVar9 << 4;
      do {
        uVar6 = 0;
        if ((int)uVar9 < (this->Samples).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return uVar9;
        }
        pFVar3 = (this->Samples).AllocatorInstance.Data;
        if ((*(longlong *)(pFVar3 + lVar11) == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return uVar9;
        }
        (**(code **)(**(longlong **)(pFVar3 + lVar11) + 0x20))();
        lVar10 = lVar10 + local_res8;
        if (param_3.Ticks < lVar10) {
          uVar6 = uVar9 + 1;
          uVar7 = 0;
          if ((int)uVar6 <= (this->Samples).ArrayNum) {
            uVar7 = ~uVar6 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar9 = (*pcVar4)();
            return uVar9;
          }
          if (uVar6 != 0) {
            TArray<TSharedPtr<IMediaTextureSample,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                      (&this->Samples,0,uVar6);
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,&(this->Samples).AllocatorInstance,(this->Samples).ArrayNum,
                       &(this->Samples).ArrayMax);
          }
          this->NumDroppedSamples = this->NumDroppedSamples + uVar9 + 1;
          goto LAB_146c08dd7;
        }
        lVar11 = lVar11 + -0x10;
        uVar9 = uVar9 - 1;
      } while (-1 < (int)uVar9);
    }
  }
LAB_146c08dd5:
  uVar6 = 0;
LAB_146c08dd7:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return uVar6;
}

// PurgeUntilSequenceIndex @ 146c090b0

void __thiscall
TMediaSampleQueue<IMediaAudioSample,FMediaAudioSampleSink>::PurgeUntilSequenceIndex
          (TMediaSampleQueue<IMediaAudioSample,FMediaAudioSampleSink> *this,int param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  undefined1 local_28 [16];
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar6 = (this->Samples).ArrayNum;
  while (iVar6 != 0) {
    if (((this->Samples).ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar2 = (this->Samples).AllocatorInstance.Data;
    if ((*(longlong *)pFVar2 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    plVar3 = *(longlong **)pFVar2;
    lVar7 = (**(code **)(*plVar3 + 0x30))(plVar3,local_28);
    if (param_1 <= *(int *)(lVar7 + 8)) break;
    if (((this->Samples).ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar2 = (this->Samples).AllocatorInstance.Data;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)(pFVar2 + 8));
    iVar6 = (this->Samples).ArrayNum + -1;
    if (iVar6 != 0) {
      memmove(pFVar2,pFVar2 + 0x10,(longlong)iVar6 << 4);
    }
    piVar1 = &(this->Samples).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&(this->Samples).AllocatorInstance,(this->Samples).ArrayNum,
               &(this->Samples).ArrayMax);
    this->NumDroppedSamples = this->NumDroppedSamples + 1;
    iVar6 = (this->Samples).ArrayNum;
  }
                    /* WARNING: Could not recover jumptable at 0x000146c0921a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// PurgeUntilSequenceIndex @ 146c09230

void __thiscall
TMediaSampleQueue<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_>::PurgeUntilSequenceIndex
          (TMediaSampleQueue<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_> *this,
          int param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  undefined1 local_28 [16];
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar6 = (this->Samples).ArrayNum;
  while (iVar6 != 0) {
    if (((this->Samples).ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar2 = (this->Samples).AllocatorInstance.Data;
    if ((*(longlong *)pFVar2 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    plVar3 = *(longlong **)pFVar2;
    lVar7 = (**(code **)(*plVar3 + 0x18))(plVar3,local_28);
    if (param_1 <= *(int *)(lVar7 + 8)) break;
    if (((this->Samples).ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar2 = (this->Samples).AllocatorInstance.Data;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)(pFVar2 + 8));
    iVar6 = (this->Samples).ArrayNum + -1;
    if (iVar6 != 0) {
      memmove(pFVar2,pFVar2 + 0x10,(longlong)iVar6 << 4);
    }
    piVar1 = &(this->Samples).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&(this->Samples).AllocatorInstance,(this->Samples).ArrayNum,
               &(this->Samples).ArrayMax);
    this->NumDroppedSamples = this->NumDroppedSamples + 1;
    iVar6 = (this->Samples).ArrayNum;
  }
                    /* WARNING: Could not recover jumptable at 0x000146c0939a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// PurgeUntilSequenceIndex @ 146c093b0

void __thiscall
TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>::
PurgeUntilSequenceIndex
          (TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_> *this,
          int param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  undefined1 local_28 [16];
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar6 = (this->Samples).ArrayNum;
  while (iVar6 != 0) {
    if (((this->Samples).ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar2 = (this->Samples).AllocatorInstance.Data;
    if ((*(longlong *)pFVar2 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    plVar3 = *(longlong **)pFVar2;
    lVar7 = (**(code **)(*plVar3 + 0x18))(plVar3,local_28);
    if (param_1 <= *(int *)(lVar7 + 8)) break;
    if (((this->Samples).ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar2 = (this->Samples).AllocatorInstance.Data;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)(pFVar2 + 8));
    iVar6 = (this->Samples).ArrayNum + -1;
    if (iVar6 != 0) {
      memmove(pFVar2,pFVar2 + 0x10,(longlong)iVar6 << 4);
    }
    piVar1 = &(this->Samples).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&(this->Samples).AllocatorInstance,(this->Samples).ArrayNum,
               &(this->Samples).ArrayMax);
    this->NumDroppedSamples = this->NumDroppedSamples + 1;
    iVar6 = (this->Samples).ArrayNum;
  }
                    /* WARNING: Could not recover jumptable at 0x000146c0951a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// PurgeUntilSequenceIndex @ 146c09530

void __thiscall
TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>::
PurgeUntilSequenceIndex
          (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *this,
          int param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  undefined1 local_28 [16];
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar6 = (this->Samples).ArrayNum;
  while (iVar6 != 0) {
    if (((this->Samples).ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar2 = (this->Samples).AllocatorInstance.Data;
    if ((*(longlong *)pFVar2 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    plVar3 = *(longlong **)pFVar2;
    lVar7 = (**(code **)(*plVar3 + 0x60))(plVar3,local_28);
    if (param_1 <= *(int *)(lVar7 + 8)) break;
    if (((this->Samples).ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar2 = (this->Samples).AllocatorInstance.Data;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)(pFVar2 + 8));
    iVar6 = (this->Samples).ArrayNum + -1;
    if (iVar6 != 0) {
      memmove(pFVar2,pFVar2 + 0x10,(longlong)iVar6 << 4);
    }
    piVar1 = &(this->Samples).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&(this->Samples).AllocatorInstance,(this->Samples).ArrayNum,
               &(this->Samples).ArrayMax);
    this->NumDroppedSamples = this->NumDroppedSamples + 1;
    iVar6 = (this->Samples).ArrayNum;
  }
                    /* WARNING: Could not recover jumptable at 0x000146c0969a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// RequestFlush @ 146c0b630

void __thiscall
TMediaSampleQueue<IMediaAudioSample,FMediaAudioSampleSink>::RequestFlush
          (TMediaSampleQueue<IMediaAudioSample,FMediaAudioSampleSink> *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    DestructItems<TSharedPtr<IMediaAudioSample,1>,int>
              ((TSharedPtr<IMediaAudioSample,1> *)(this->Samples).AllocatorInstance.Data,
               (this->Samples).ArrayNum);
    piVar1 = &(this->Samples).ArrayMax;
    (this->Samples).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->Samples).AllocatorInstance,0,piVar1);
    }
    this->FlushCount = this->FlushCount + 1;
                    /* WARNING: Could not recover jumptable at 0x000146c0b6a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// RequestFlush @ 146c0b6c0

void __thiscall
TMediaSampleQueue<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_>::RequestFlush
          (TMediaSampleQueue<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_> *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    DestructItems<TSharedPtr<IMediaBinarySample,1>,int>
              ((TSharedPtr<IMediaBinarySample,1> *)(this->Samples).AllocatorInstance.Data,
               (this->Samples).ArrayNum);
    piVar1 = &(this->Samples).ArrayMax;
    (this->Samples).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->Samples).AllocatorInstance,0,piVar1);
    }
    this->FlushCount = this->FlushCount + 1;
                    /* WARNING: Could not recover jumptable at 0x000146c0b731. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// RequestFlush @ 146c0b750

void __thiscall
TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_>::RequestFlush
          (TMediaSampleQueue<IMediaOverlaySample,TMediaSampleSink<IMediaOverlaySample>_> *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    DestructItems<TSharedPtr<IMediaOverlaySample,1>,int>
              ((TSharedPtr<IMediaOverlaySample,1> *)(this->Samples).AllocatorInstance.Data,
               (this->Samples).ArrayNum);
    piVar1 = &(this->Samples).ArrayMax;
    (this->Samples).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->Samples).AllocatorInstance,0,piVar1);
    }
    this->FlushCount = this->FlushCount + 1;
                    /* WARNING: Could not recover jumptable at 0x000146c0b7c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// RequestFlush @ 146c0b7e0

void __thiscall
TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>::RequestFlush
          (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    DestructItems<TSharedPtr<IMediaTextureSample,1>,int>
              ((TSharedPtr<IMediaTextureSample,1> *)(this->Samples).AllocatorInstance.Data,
               (this->Samples).ArrayNum);
    piVar1 = &(this->Samples).ArrayMax;
    (this->Samples).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->Samples).AllocatorInstance,0,piVar1);
    }
    this->FlushCount = this->FlushCount + 1;
                    /* WARNING: Could not recover jumptable at 0x000146c0b851. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

