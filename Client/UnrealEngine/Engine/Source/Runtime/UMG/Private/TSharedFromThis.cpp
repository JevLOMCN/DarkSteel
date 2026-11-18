// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 2

// AsShared @ 14690c3c0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FWidgetAnimationState,1> * __thiscall
TSharedFromThis<FWidgetAnimationState,1>::AsShared
          (TSharedFromThis<FWidgetAnimationState,1> *this,
          TSharedRef<FWidgetAnimationState,1> *__return_storage_ptr__)

{
  FWidgetAnimationState *pFVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  TSharedRef<FWidgetAnimationState,1> *pTVar5;
  FWidgetAnimationState *pFVar6;
  FWidgetAnimationState *pFVar7;
  bool bVar8;
  
  pFVar1 = (FWidgetAnimationState *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pFVar7 = (FWidgetAnimationState *)0x0;
  pFVar6 = pFVar1;
  if (pFVar1 != (FWidgetAnimationState *)0x0) {
    iVar3 = *(int *)&((FWeakReferencer<1> *)&pFVar1->_padding_)->ReferenceController;
    do {
      pFVar6 = pFVar7;
      if (iVar3 == 0) goto LAB_14690c401;
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
LAB_14690c401:
  if ((pFVar7 != (FWidgetAnimationState *)this) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<FWidgetAnimationState,1> *)(*pcVar2)();
    return pTVar5;
  }
  if ((pFVar7 == (FWidgetAnimationState *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<FWidgetAnimationState,1> *)(*pcVar2)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pFVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar6;
  if ((pFVar7 == (FWidgetAnimationState *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<FWidgetAnimationState,1> *)(*pcVar2)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 146a5e2a0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FDragDropOperation,1> * __thiscall
TSharedFromThis<FDragDropOperation,1>::AsShared
          (TSharedFromThis<FDragDropOperation,1> *this,
          TSharedRef<FDragDropOperation,1> *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  FDragDropOperation *pFVar4;
  TSharedRef<FDragDropOperation,1> *pTVar5;
  FDragDropOperation *pFVar6;
  FDragDropOperation *pFVar7;
  FDragDropOperation *pFVar8;
  bool bVar9;
  
  pFVar4 = (FDragDropOperation *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pFVar8 = (FDragDropOperation *)0x0;
  pFVar6 = pFVar4;
  pFVar7 = pFVar8;
  if (pFVar4 != (FDragDropOperation *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pFVar4->_padding_)->ReferenceController;
    do {
      pFVar6 = pFVar8;
      pFVar7 = (FDragDropOperation *)0x0;
      if (iVar2 == 0) goto LAB_146a5e2e1;
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
LAB_146a5e2e1:
  pFVar4 = (FDragDropOperation *)&pFVar7->_padding_;
  if (pFVar7 == (FDragDropOperation *)0x0) {
    pFVar4 = pFVar8;
  }
  if ((pFVar4 != (FDragDropOperation *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FDragDropOperation,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pFVar7 == (FDragDropOperation *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FDragDropOperation,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pFVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar6;
  if ((pFVar7 == (FDragDropOperation *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FDragDropOperation,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

