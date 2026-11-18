// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 1

// AsShared @ 14a7c0440

TSharedRef<FActionRouterBindingCollection,1> * __thiscall
TSharedFromThis<FActionRouterBindingCollection,1>::AsShared
          (TSharedFromThis<FActionRouterBindingCollection,1> *this,
          TSharedRef<FActionRouterBindingCollection,1> *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  FActionRouterBindingCollection *pFVar4;
  TSharedRef<FActionRouterBindingCollection,1> *pTVar5;
  FActionRouterBindingCollection *pFVar6;
  FActionRouterBindingCollection *pFVar7;
  FActionRouterBindingCollection *pFVar8;
  bool bVar9;
  
  pFVar4 = (FActionRouterBindingCollection *)(this->WeakThis).WeakReferenceCount.ReferenceController
  ;
  pFVar8 = (FActionRouterBindingCollection *)0x0;
  pFVar6 = pFVar4;
  pFVar7 = pFVar8;
  if (pFVar4 != (FActionRouterBindingCollection *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pFVar4->_padding_)->ReferenceController;
    do {
      pFVar6 = pFVar8;
      pFVar7 = (FActionRouterBindingCollection *)0x0;
      if (iVar2 == 0) goto LAB_14a7c0481;
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
LAB_14a7c0481:
  pFVar4 = (FActionRouterBindingCollection *)&pFVar7->_padding_;
  if (pFVar7 == (FActionRouterBindingCollection *)0x0) {
    pFVar4 = pFVar8;
  }
  if ((pFVar4 != (FActionRouterBindingCollection *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FActionRouterBindingCollection,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pFVar7 == (FActionRouterBindingCollection *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FActionRouterBindingCollection,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pFVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar6;
  if ((pFVar7 == (FActionRouterBindingCollection *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FActionRouterBindingCollection,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

