// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 2

// AsShared @ 14b3659b0

TSharedRef<Metasound::FMetasoundGeneratorHandle,1> * __thiscall
TSharedFromThis<Metasound::FMetasoundGeneratorHandle,1>::AsShared
          (TSharedFromThis<Metasound::FMetasoundGeneratorHandle,1> *this,
          TSharedRef<Metasound::FMetasoundGeneratorHandle,1> *__return_storage_ptr__)

{
  FMetasoundGeneratorHandle *pFVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  TSharedRef<Metasound::FMetasoundGeneratorHandle,1> *pTVar5;
  FMetasoundGeneratorHandle *pFVar6;
  FMetasoundGeneratorHandle *pFVar7;
  bool bVar8;
  
  pFVar1 = (FMetasoundGeneratorHandle *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pFVar7 = (FMetasoundGeneratorHandle *)0x0;
  pFVar6 = pFVar1;
  if (pFVar1 != (FMetasoundGeneratorHandle *)0x0) {
    iVar3 = *(int *)&((FWeakReferencer<1> *)&pFVar1->_padding_)->ReferenceController;
    do {
      pFVar6 = pFVar7;
      if (iVar3 == 0) goto LAB_14b3659f1;
      LOCK();
      iVar4 = *(int *)&((FWeakReferencer<1> *)&pFVar1->_padding_)->ReferenceController;
      bVar8 = iVar3 == iVar4;
      if (bVar8) {
        *(int *)&((FWeakReferencer<1> *)&pFVar1->_padding_)->ReferenceController = iVar3 + 1;
        iVar4 = iVar3;
      }
      UNLOCK();
      iVar3 = iVar4;
    } while (!bVar8);
    pFVar7 = (this->WeakThis).Object;
    pFVar6 = pFVar1;
  }
LAB_14b3659f1:
  if ((pFVar7 != (FMetasoundGeneratorHandle *)this) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<Metasound::FMetasoundGeneratorHandle,1> *)(*pcVar2)();
    return pTVar5;
  }
  if ((pFVar7 == (FMetasoundGeneratorHandle *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<Metasound::FMetasoundGeneratorHandle,1> *)(*pcVar2)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pFVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar6;
  if ((pFVar7 == (FMetasoundGeneratorHandle *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<Metasound::FMetasoundGeneratorHandle,1> *)(*pcVar2)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsWeak @ 14b365ab0

TWeakPtr<Metasound::FMetasoundGeneratorHandle,1> * __thiscall
TSharedFromThis<Metasound::FMetasoundGeneratorHandle,1>::AsWeak
          (TSharedFromThis<Metasound::FMetasoundGeneratorHandle,1> *this,
          TWeakPtr<Metasound::FMetasoundGeneratorHandle,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  TWeakPtr<Metasound::FMetasoundGeneratorHandle,1> *pTVar5;
  FMetasoundGeneratorHandle *pFVar6;
  bool bVar7;
  
  __return_storage_ptr__->Object = (this->WeakThis).Object;
  pTVar1 = (this->WeakThis).WeakReferenceCount.ReferenceController;
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = (__return_storage_ptr__->WeakReferenceCount).ReferenceController;
  pFVar6 = (FMetasoundGeneratorHandle *)0x0;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        goto LAB_14b365b17;
      }
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar7 = aVar3 == aVar4;
      if (bVar7) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar7);
    pFVar6 = __return_storage_ptr__->Object;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (pFVar6 != (FMetasoundGeneratorHandle *)this) {
LAB_14b365b17:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result.Pin().Get() == this",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x6c3,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TWeakPtr<Metasound::FMetasoundGeneratorHandle,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

