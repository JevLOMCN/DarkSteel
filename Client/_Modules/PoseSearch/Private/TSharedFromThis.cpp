// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 1

// AsWeak @ 14a9235d0

TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1> * __thiscall
TSharedFromThis<UE::PoseSearch::IPoseHistory,1>::AsWeak
          (TSharedFromThis<UE::PoseSearch::IPoseHistory,1> *this,
          TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  IPoseHistory *pIVar5;
  TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1> *pTVar6;
  IPoseHistory *pIVar7;
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
  pIVar7 = (IPoseHistory *)0x0;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        goto LAB_14a923647;
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
  pIVar5 = (IPoseHistory *)
           &((TWeakPtr<UE::PoseSearch::IPoseHistory,1> *)&pIVar7->field_0x0)->WeakReferenceCount;
  if (pIVar7 == (IPoseHistory *)0x0) {
    pIVar5 = (IPoseHistory *)0x0;
  }
  if (pIVar5 != (IPoseHistory *)this) {
LAB_14a923647:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result.Pin().Get() == this",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x6d5,L"");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1> *)(*pcVar2)();
      return pTVar6;
    }
  }
  return __return_storage_ptr__;
}

