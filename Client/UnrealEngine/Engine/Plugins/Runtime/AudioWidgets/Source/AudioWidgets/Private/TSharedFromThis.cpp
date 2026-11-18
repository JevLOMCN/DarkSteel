// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 4

// AsShared @ 14d8dad70

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<AudioWidgets::FWaveformAudioSamplesDataProvider,1> * __thiscall
TSharedFromThis<AudioWidgets::FWaveformAudioSamplesDataProvider,1>::AsShared
          (TSharedFromThis<AudioWidgets::FWaveformAudioSamplesDataProvider,1> *this,
          TSharedRef<AudioWidgets::FWaveformAudioSamplesDataProvider,1> *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  FWaveformAudioSamplesDataProvider *pFVar4;
  TSharedRef<AudioWidgets::FWaveformAudioSamplesDataProvider,1> *pTVar5;
  FWaveformAudioSamplesDataProvider *pFVar6;
  FWaveformAudioSamplesDataProvider *pFVar7;
  FWaveformAudioSamplesDataProvider *pFVar8;
  bool bVar9;
  
  pFVar4 = (FWaveformAudioSamplesDataProvider *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pFVar8 = (FWaveformAudioSamplesDataProvider *)0x0;
  pFVar6 = pFVar4;
  pFVar7 = pFVar8;
  if (pFVar4 != (FWaveformAudioSamplesDataProvider *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pFVar4->_padding_)->ReferenceController;
    do {
      pFVar6 = pFVar8;
      pFVar7 = (FWaveformAudioSamplesDataProvider *)0x0;
      if (iVar2 == 0) goto LAB_14d8dadb1;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pFVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pFVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pFVar6 = pFVar4;
    pFVar7 = (this->WeakThis).Object;
  }
LAB_14d8dadb1:
  pFVar4 = (FWaveformAudioSamplesDataProvider *)&pFVar7->_padding_;
  if (pFVar7 == (FWaveformAudioSamplesDataProvider *)0x0) {
    pFVar4 = pFVar8;
  }
  if ((pFVar4 != (FWaveformAudioSamplesDataProvider *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<AudioWidgets::FWaveformAudioSamplesDataProvider,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pFVar7 == (FWaveformAudioSamplesDataProvider *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<AudioWidgets::FWaveformAudioSamplesDataProvider,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pFVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar6;
  if ((pFVar7 == (FWaveformAudioSamplesDataProvider *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<AudioWidgets::FWaveformAudioSamplesDataProvider,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14d8dae80

TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1> * __thiscall
TSharedFromThis<AudioWidgets::IAudioAnalyzerRackUnit,1>::AsShared
          (TSharedFromThis<AudioWidgets::IAudioAnalyzerRackUnit,1> *this,
          TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1> *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  IAudioAnalyzerRackUnit *pIVar4;
  TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1> *pTVar5;
  IAudioAnalyzerRackUnit *pIVar6;
  IAudioAnalyzerRackUnit *pIVar7;
  IAudioAnalyzerRackUnit *pIVar8;
  bool bVar9;
  
  pIVar4 = (IAudioAnalyzerRackUnit *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pIVar8 = (IAudioAnalyzerRackUnit *)0x0;
  pIVar6 = pIVar4;
  pIVar7 = pIVar8;
  if (pIVar4 != (IAudioAnalyzerRackUnit *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pIVar4->field_0x8)->ReferenceController;
    do {
      pIVar6 = pIVar8;
      pIVar7 = (IAudioAnalyzerRackUnit *)0x0;
      if (iVar2 == 0) goto LAB_14d8daec1;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pIVar4->field_0x8)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pIVar4->field_0x8)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pIVar6 = pIVar4;
    pIVar7 = (this->WeakThis).Object;
  }
LAB_14d8daec1:
  pIVar4 = (IAudioAnalyzerRackUnit *)&pIVar7->field_0x8;
  if (pIVar7 == (IAudioAnalyzerRackUnit *)0x0) {
    pIVar4 = pIVar8;
  }
  if ((pIVar4 != (IAudioAnalyzerRackUnit *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pIVar7 == (IAudioAnalyzerRackUnit *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pIVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pIVar6;
  if ((pIVar7 == (IAudioAnalyzerRackUnit *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsWeak @ 14d8db010

TWeakPtr<AudioWidgets::IAudioAnalyzerRackUnit,1> * __thiscall
TSharedFromThis<AudioWidgets::IAudioAnalyzerRackUnit,1>::AsWeak
          (TSharedFromThis<AudioWidgets::IAudioAnalyzerRackUnit,1> *this,
          TWeakPtr<AudioWidgets::IAudioAnalyzerRackUnit,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  IAudioAnalyzerRackUnit *pIVar5;
  TWeakPtr<AudioWidgets::IAudioAnalyzerRackUnit,1> *pTVar6;
  IAudioAnalyzerRackUnit *pIVar7;
  bool bVar8;
  
  __return_storage_ptr__->Object = (this->WeakThis).Object;
  pTVar1 = (this->WeakThis).WeakReferenceCount.ReferenceController;
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = (__return_storage_ptr__->WeakReferenceCount).ReferenceController;
  pIVar7 = (IAudioAnalyzerRackUnit *)0x0;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        goto LAB_14d8db087;
      }
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar8 = aVar3 == aVar4;
      if (bVar8) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar8);
    pIVar7 = __return_storage_ptr__->Object;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pIVar5 = (IAudioAnalyzerRackUnit *)
           &((TWeakPtr<AudioWidgets::IAudioAnalyzerRackUnit,1> *)&pIVar7->field_0x0)->
            WeakReferenceCount;
  if (pIVar7 == (IAudioAnalyzerRackUnit *)0x0) {
    pIVar5 = (IAudioAnalyzerRackUnit *)0x0;
  }
  if (pIVar5 != (IAudioAnalyzerRackUnit *)this) {
LAB_14d8db087:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result.Pin().Get() == this",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x6c3,L"");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TWeakPtr<AudioWidgets::IAudioAnalyzerRackUnit,1> *)(*pcVar2)();
      return pTVar6;
    }
  }
  return __return_storage_ptr__;
}

// AsWeak @ 14d8db0d0

TWeakPtr<SWidget,1> * __thiscall
TSharedFromThis<SWidget,1>::AsWeak
          (TSharedFromThis<SWidget,1> *this,TWeakPtr<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  SWidget *pSVar5;
  TWeakPtr<SWidget,1> *pTVar6;
  SWidget *pSVar7;
  bool bVar8;
  
  __return_storage_ptr__->Object = (this->WeakThis).Object;
  pTVar1 = (this->WeakThis).WeakReferenceCount.ReferenceController;
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = (__return_storage_ptr__->WeakReferenceCount).ReferenceController;
  pSVar7 = (SWidget *)0x0;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        goto LAB_14d8db147;
      }
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar8 = aVar3 == aVar4;
      if (bVar8) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar8);
    pSVar7 = __return_storage_ptr__->Object;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pSVar5 = (SWidget *)&pSVar7->_padding_;
  if (pSVar7 == (SWidget *)0x0) {
    pSVar5 = (SWidget *)0x0;
  }
  if (pSVar5 != (SWidget *)this) {
LAB_14d8db147:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result.Pin().Get() == this",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x6c3,L"");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TWeakPtr<SWidget,1> *)(*pcVar2)();
      return pTVar6;
    }
  }
  return __return_storage_ptr__;
}

