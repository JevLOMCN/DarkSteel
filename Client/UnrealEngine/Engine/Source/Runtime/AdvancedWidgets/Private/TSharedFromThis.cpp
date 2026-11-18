// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdvancedWidgets
// Functions: 2

// AsShared @ 14d8428d0

TSharedRef<UE::PropertyViewer::Private::FTreeNode,1> * __thiscall
TSharedFromThis<UE::PropertyViewer::Private::FTreeNode,1>::AsShared
          (TSharedFromThis<UE::PropertyViewer::Private::FTreeNode,1> *this,
          TSharedRef<UE::PropertyViewer::Private::FTreeNode,1> *__return_storage_ptr__)

{
  FTreeNode *pFVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  TSharedRef<UE::PropertyViewer::Private::FTreeNode,1> *pTVar5;
  FTreeNode *pFVar6;
  FTreeNode *pFVar7;
  bool bVar8;
  
  pFVar1 = (FTreeNode *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pFVar7 = (FTreeNode *)0x0;
  pFVar6 = pFVar1;
  if (pFVar1 != (FTreeNode *)0x0) {
    iVar3 = *(int *)&((FWeakReferencer<1> *)&pFVar1->_padding_)->ReferenceController;
    do {
      pFVar6 = pFVar7;
      if (iVar3 == 0) goto LAB_14d842911;
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
LAB_14d842911:
  if ((pFVar7 != (FTreeNode *)this) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::PropertyViewer::Private::FTreeNode,1> *)(*pcVar2)();
    return pTVar5;
  }
  if ((pFVar7 == (FTreeNode *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::PropertyViewer::Private::FTreeNode,1> *)(*pcVar2)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pFVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar6;
  if ((pFVar7 == (FTreeNode *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::PropertyViewer::Private::FTreeNode,1> *)(*pcVar2)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14d8429d0

TSharedRef<UE::PropertyViewer::Private::FPropertyViewerImpl,1> * __thiscall
TSharedFromThis<UE::PropertyViewer::Private::FPropertyViewerImpl,1>::AsShared
          (TSharedFromThis<UE::PropertyViewer::Private::FPropertyViewerImpl,1> *this,
          TSharedRef<UE::PropertyViewer::Private::FPropertyViewerImpl,1> *__return_storage_ptr__)

{
  FPropertyViewerImpl *pFVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  TSharedRef<UE::PropertyViewer::Private::FPropertyViewerImpl,1> *pTVar5;
  FPropertyViewerImpl *pFVar6;
  FPropertyViewerImpl *pFVar7;
  bool bVar8;
  
  pFVar1 = (FPropertyViewerImpl *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pFVar7 = (FPropertyViewerImpl *)0x0;
  pFVar6 = pFVar1;
  if (pFVar1 != (FPropertyViewerImpl *)0x0) {
    iVar3 = *(int *)&((FWeakReferencer<1> *)&pFVar1->_padding_)->ReferenceController;
    do {
      pFVar6 = pFVar7;
      if (iVar3 == 0) goto LAB_14d842a11;
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
LAB_14d842a11:
  if ((pFVar7 != (FPropertyViewerImpl *)this) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::PropertyViewer::Private::FPropertyViewerImpl,1> *)(*pcVar2)();
    return pTVar5;
  }
  if ((pFVar7 == (FPropertyViewerImpl *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::PropertyViewer::Private::FPropertyViewerImpl,1> *)(*pcVar2)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pFVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar6;
  if ((pFVar7 == (FPropertyViewerImpl *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::PropertyViewer::Private::FPropertyViewerImpl,1> *)(*pcVar2)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

