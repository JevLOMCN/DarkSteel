// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 12

// AsShared @ 14ada6700

TSharedRef<Metasound::IDataChannel,1> * __thiscall
TSharedFromThis<Metasound::IDataChannel,1>::AsShared
          (TSharedFromThis<Metasound::IDataChannel,1> *this,
          TSharedRef<Metasound::IDataChannel,1> *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  IDataChannel *pIVar4;
  TSharedRef<Metasound::IDataChannel,1> *pTVar5;
  IDataChannel *pIVar6;
  IDataChannel *pIVar7;
  IDataChannel *pIVar8;
  bool bVar9;
  
  pIVar4 = (IDataChannel *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pIVar8 = (IDataChannel *)0x0;
  pIVar6 = pIVar4;
  pIVar7 = pIVar8;
  if (pIVar4 != (IDataChannel *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pIVar4->_padding_)->ReferenceController;
    do {
      pIVar6 = pIVar8;
      pIVar7 = (IDataChannel *)0x0;
      if (iVar2 == 0) goto LAB_14ada6741;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pIVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pIVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pIVar6 = pIVar4;
    pIVar7 = (this->WeakThis).Object;
  }
LAB_14ada6741:
  pIVar4 = (IDataChannel *)&pIVar7->_padding_;
  if (pIVar7 == (IDataChannel *)0x0) {
    pIVar4 = pIVar8;
  }
  if ((pIVar4 != (IDataChannel *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<Metasound::IDataChannel,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pIVar7 == (IDataChannel *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<Metasound::IDataChannel,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pIVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pIVar6;
  if ((pIVar7 == (IDataChannel *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<Metasound::IDataChannel,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ae24910

TSharedRef<Metasound::Frontend::IDocumentCache,1> * __thiscall
TSharedFromThis<Metasound::Frontend::IDocumentCache,1>::AsShared
          (TSharedFromThis<Metasound::Frontend::IDocumentCache,1> *this,
          TSharedRef<Metasound::Frontend::IDocumentCache,1> *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  IDocumentCache *pIVar4;
  TSharedRef<Metasound::Frontend::IDocumentCache,1> *pTVar5;
  IDocumentCache *pIVar6;
  IDocumentCache *pIVar7;
  IDocumentCache *pIVar8;
  bool bVar9;
  
  pIVar4 = (IDocumentCache *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pIVar8 = (IDocumentCache *)0x0;
  pIVar6 = pIVar4;
  pIVar7 = pIVar8;
  if (pIVar4 != (IDocumentCache *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pIVar4->field_0x8)->ReferenceController;
    do {
      pIVar6 = pIVar8;
      pIVar7 = (IDocumentCache *)0x0;
      if (iVar2 == 0) goto LAB_14ae24951;
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
LAB_14ae24951:
  pIVar4 = (IDocumentCache *)&pIVar7->field_0x8;
  if (pIVar7 == (IDocumentCache *)0x0) {
    pIVar4 = pIVar8;
  }
  if ((pIVar4 != (IDocumentCache *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<Metasound::Frontend::IDocumentCache,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pIVar7 == (IDocumentCache *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<Metasound::Frontend::IDocumentCache,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pIVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pIVar6;
  if ((pIVar7 == (IDocumentCache *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<Metasound::Frontend::IDocumentCache,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ae24a20

TSharedRef<Metasound::Frontend::IDocumentCache_const_,1> * __thiscall
TSharedFromThis<Metasound::Frontend::IDocumentCache,1>::AsShared
          (TSharedFromThis<Metasound::Frontend::IDocumentCache,1> *this,
          TSharedRef<Metasound::Frontend::IDocumentCache_const_,1> *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  IDocumentCache *pIVar4;
  TSharedRef<Metasound::Frontend::IDocumentCache_const_,1> *pTVar5;
  IDocumentCache *pIVar6;
  IDocumentCache *pIVar7;
  IDocumentCache *pIVar8;
  bool bVar9;
  
  pIVar4 = (IDocumentCache *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pIVar8 = (IDocumentCache *)0x0;
  pIVar6 = pIVar4;
  pIVar7 = pIVar8;
  if (pIVar4 != (IDocumentCache *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pIVar4->field_0x8)->ReferenceController;
    do {
      pIVar6 = pIVar8;
      pIVar7 = (IDocumentCache *)0x0;
      if (iVar2 == 0) goto LAB_14ae24a61;
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
LAB_14ae24a61:
  pIVar4 = (IDocumentCache *)&pIVar7->field_0x8;
  if (pIVar7 == (IDocumentCache *)0x0) {
    pIVar4 = pIVar8;
  }
  if ((pIVar4 != (IDocumentCache *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x69a,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<Metasound::Frontend::IDocumentCache_const_,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pIVar7 == (IDocumentCache *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<Metasound::Frontend::IDocumentCache_const_,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pIVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pIVar6;
  if ((pIVar7 == (IDocumentCache *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<Metasound::Frontend::IDocumentCache_const_,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ae24b30

TSharedRef<Metasound::Frontend::IDocumentController,1> * __thiscall
TSharedFromThis<Metasound::Frontend::IDocumentController,1>::AsShared
          (TSharedFromThis<Metasound::Frontend::IDocumentController,1> *this,
          TSharedRef<Metasound::Frontend::IDocumentController,1> *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  IDocumentController *pIVar4;
  TSharedRef<Metasound::Frontend::IDocumentController,1> *pTVar5;
  IDocumentController *pIVar6;
  IDocumentController *pIVar7;
  IDocumentController *pIVar8;
  bool bVar9;
  
  pIVar4 = (IDocumentController *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pIVar8 = (IDocumentController *)0x0;
  pIVar6 = pIVar4;
  pIVar7 = pIVar8;
  if (pIVar4 != (IDocumentController *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pIVar4->field_0x8)->ReferenceController;
    do {
      pIVar6 = pIVar8;
      pIVar7 = (IDocumentController *)0x0;
      if (iVar2 == 0) goto LAB_14ae24b71;
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
LAB_14ae24b71:
  pIVar4 = (IDocumentController *)&pIVar7->field_0x8;
  if (pIVar7 == (IDocumentController *)0x0) {
    pIVar4 = pIVar8;
  }
  if ((pIVar4 != (IDocumentController *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<Metasound::Frontend::IDocumentController,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pIVar7 == (IDocumentController *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<Metasound::Frontend::IDocumentController,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pIVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pIVar6;
  if ((pIVar7 == (IDocumentController *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<Metasound::Frontend::IDocumentController,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ae24c40

TSharedRef<Metasound::Frontend::IDocumentController_const_,1> * __thiscall
TSharedFromThis<Metasound::Frontend::IDocumentController,1>::AsShared
          (TSharedFromThis<Metasound::Frontend::IDocumentController,1> *this,
          TSharedRef<Metasound::Frontend::IDocumentController_const_,1> *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  IDocumentController *pIVar4;
  TSharedRef<Metasound::Frontend::IDocumentController_const_,1> *pTVar5;
  IDocumentController *pIVar6;
  IDocumentController *pIVar7;
  IDocumentController *pIVar8;
  bool bVar9;
  
  pIVar4 = (IDocumentController *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pIVar8 = (IDocumentController *)0x0;
  pIVar6 = pIVar4;
  pIVar7 = pIVar8;
  if (pIVar4 != (IDocumentController *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pIVar4->field_0x8)->ReferenceController;
    do {
      pIVar6 = pIVar8;
      pIVar7 = (IDocumentController *)0x0;
      if (iVar2 == 0) goto LAB_14ae24c81;
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
LAB_14ae24c81:
  pIVar4 = (IDocumentController *)&pIVar7->field_0x8;
  if (pIVar7 == (IDocumentController *)0x0) {
    pIVar4 = pIVar8;
  }
  if ((pIVar4 != (IDocumentController *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x69a,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<Metasound::Frontend::IDocumentController_const_,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pIVar7 == (IDocumentController *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<Metasound::Frontend::IDocumentController_const_,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pIVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pIVar6;
  if ((pIVar7 == (IDocumentController *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<Metasound::Frontend::IDocumentController_const_,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ae24d50

TSharedRef<Metasound::Frontend::IDocumentGraphEdgeCache,1> * __thiscall
TSharedFromThis<Metasound::Frontend::IDocumentGraphEdgeCache,1>::AsShared
          (TSharedFromThis<Metasound::Frontend::IDocumentGraphEdgeCache,1> *this,
          TSharedRef<Metasound::Frontend::IDocumentGraphEdgeCache,1> *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  IDocumentGraphEdgeCache *pIVar4;
  TSharedRef<Metasound::Frontend::IDocumentGraphEdgeCache,1> *pTVar5;
  IDocumentGraphEdgeCache *pIVar6;
  IDocumentGraphEdgeCache *pIVar7;
  IDocumentGraphEdgeCache *pIVar8;
  bool bVar9;
  
  pIVar4 = (IDocumentGraphEdgeCache *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pIVar8 = (IDocumentGraphEdgeCache *)0x0;
  pIVar6 = pIVar4;
  pIVar7 = pIVar8;
  if (pIVar4 != (IDocumentGraphEdgeCache *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pIVar4->field_0x8)->ReferenceController;
    do {
      pIVar6 = pIVar8;
      pIVar7 = (IDocumentGraphEdgeCache *)0x0;
      if (iVar2 == 0) goto LAB_14ae24d91;
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
LAB_14ae24d91:
  pIVar4 = (IDocumentGraphEdgeCache *)&pIVar7->field_0x8;
  if (pIVar7 == (IDocumentGraphEdgeCache *)0x0) {
    pIVar4 = pIVar8;
  }
  if ((pIVar4 != (IDocumentGraphEdgeCache *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<Metasound::Frontend::IDocumentGraphEdgeCache,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pIVar7 == (IDocumentGraphEdgeCache *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<Metasound::Frontend::IDocumentGraphEdgeCache,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pIVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pIVar6;
  if ((pIVar7 == (IDocumentGraphEdgeCache *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<Metasound::Frontend::IDocumentGraphEdgeCache,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ae24e60

TSharedRef<Metasound::Frontend::IDocumentGraphInterfaceCache,1> * __thiscall
TSharedFromThis<Metasound::Frontend::IDocumentGraphInterfaceCache,1>::AsShared
          (TSharedFromThis<Metasound::Frontend::IDocumentGraphInterfaceCache,1> *this,
          TSharedRef<Metasound::Frontend::IDocumentGraphInterfaceCache,1> *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  IDocumentGraphInterfaceCache *pIVar4;
  TSharedRef<Metasound::Frontend::IDocumentGraphInterfaceCache,1> *pTVar5;
  IDocumentGraphInterfaceCache *pIVar6;
  IDocumentGraphInterfaceCache *pIVar7;
  IDocumentGraphInterfaceCache *pIVar8;
  bool bVar9;
  
  pIVar4 = (IDocumentGraphInterfaceCache *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pIVar8 = (IDocumentGraphInterfaceCache *)0x0;
  pIVar6 = pIVar4;
  pIVar7 = pIVar8;
  if (pIVar4 != (IDocumentGraphInterfaceCache *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pIVar4->field_0x8)->ReferenceController;
    do {
      pIVar6 = pIVar8;
      pIVar7 = (IDocumentGraphInterfaceCache *)0x0;
      if (iVar2 == 0) goto LAB_14ae24ea1;
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
LAB_14ae24ea1:
  pIVar4 = (IDocumentGraphInterfaceCache *)&pIVar7->field_0x8;
  if (pIVar7 == (IDocumentGraphInterfaceCache *)0x0) {
    pIVar4 = pIVar8;
  }
  if ((pIVar4 != (IDocumentGraphInterfaceCache *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<Metasound::Frontend::IDocumentGraphInterfaceCache,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pIVar7 == (IDocumentGraphInterfaceCache *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<Metasound::Frontend::IDocumentGraphInterfaceCache,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pIVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pIVar6;
  if ((pIVar7 == (IDocumentGraphInterfaceCache *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<Metasound::Frontend::IDocumentGraphInterfaceCache,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ae24f70

TSharedRef<Metasound::Frontend::IDocumentGraphNodeCache,1> * __thiscall
TSharedFromThis<Metasound::Frontend::IDocumentGraphNodeCache,1>::AsShared
          (TSharedFromThis<Metasound::Frontend::IDocumentGraphNodeCache,1> *this,
          TSharedRef<Metasound::Frontend::IDocumentGraphNodeCache,1> *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  IDocumentGraphNodeCache *pIVar4;
  TSharedRef<Metasound::Frontend::IDocumentGraphNodeCache,1> *pTVar5;
  IDocumentGraphNodeCache *pIVar6;
  IDocumentGraphNodeCache *pIVar7;
  IDocumentGraphNodeCache *pIVar8;
  bool bVar9;
  
  pIVar4 = (IDocumentGraphNodeCache *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pIVar8 = (IDocumentGraphNodeCache *)0x0;
  pIVar6 = pIVar4;
  pIVar7 = pIVar8;
  if (pIVar4 != (IDocumentGraphNodeCache *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pIVar4->field_0x8)->ReferenceController;
    do {
      pIVar6 = pIVar8;
      pIVar7 = (IDocumentGraphNodeCache *)0x0;
      if (iVar2 == 0) goto LAB_14ae24fb1;
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
LAB_14ae24fb1:
  pIVar4 = (IDocumentGraphNodeCache *)&pIVar7->field_0x8;
  if (pIVar7 == (IDocumentGraphNodeCache *)0x0) {
    pIVar4 = pIVar8;
  }
  if ((pIVar4 != (IDocumentGraphNodeCache *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<Metasound::Frontend::IDocumentGraphNodeCache,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pIVar7 == (IDocumentGraphNodeCache *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<Metasound::Frontend::IDocumentGraphNodeCache,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pIVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pIVar6;
  if ((pIVar7 == (IDocumentGraphNodeCache *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<Metasound::Frontend::IDocumentGraphNodeCache,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ae25080

TSharedRef<Metasound::Frontend::IGraphController,1> * __thiscall
TSharedFromThis<Metasound::Frontend::IGraphController,1>::AsShared
          (TSharedFromThis<Metasound::Frontend::IGraphController,1> *this,
          TSharedRef<Metasound::Frontend::IGraphController,1> *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  IGraphController *pIVar4;
  TSharedRef<Metasound::Frontend::IGraphController,1> *pTVar5;
  IGraphController *pIVar6;
  IGraphController *pIVar7;
  IGraphController *pIVar8;
  bool bVar9;
  
  pIVar4 = (IGraphController *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pIVar8 = (IGraphController *)0x0;
  pIVar6 = pIVar4;
  pIVar7 = pIVar8;
  if (pIVar4 != (IGraphController *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pIVar4->field_0x8)->ReferenceController;
    do {
      pIVar6 = pIVar8;
      pIVar7 = (IGraphController *)0x0;
      if (iVar2 == 0) goto LAB_14ae250c1;
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
LAB_14ae250c1:
  pIVar4 = (IGraphController *)&pIVar7->field_0x8;
  if (pIVar7 == (IGraphController *)0x0) {
    pIVar4 = pIVar8;
  }
  if ((pIVar4 != (IGraphController *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<Metasound::Frontend::IGraphController,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pIVar7 == (IGraphController *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<Metasound::Frontend::IGraphController,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pIVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pIVar6;
  if ((pIVar7 == (IGraphController *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<Metasound::Frontend::IGraphController,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ae25190

TSharedRef<Metasound::Frontend::IGraphController_const_,1> * __thiscall
TSharedFromThis<Metasound::Frontend::IGraphController,1>::AsShared
          (TSharedFromThis<Metasound::Frontend::IGraphController,1> *this,
          TSharedRef<Metasound::Frontend::IGraphController_const_,1> *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  IGraphController *pIVar4;
  TSharedRef<Metasound::Frontend::IGraphController_const_,1> *pTVar5;
  IGraphController *pIVar6;
  IGraphController *pIVar7;
  IGraphController *pIVar8;
  bool bVar9;
  
  pIVar4 = (IGraphController *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pIVar8 = (IGraphController *)0x0;
  pIVar6 = pIVar4;
  pIVar7 = pIVar8;
  if (pIVar4 != (IGraphController *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pIVar4->field_0x8)->ReferenceController;
    do {
      pIVar6 = pIVar8;
      pIVar7 = (IGraphController *)0x0;
      if (iVar2 == 0) goto LAB_14ae251d1;
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
LAB_14ae251d1:
  pIVar4 = (IGraphController *)&pIVar7->field_0x8;
  if (pIVar7 == (IGraphController *)0x0) {
    pIVar4 = pIVar8;
  }
  if ((pIVar4 != (IGraphController *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x69a,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<Metasound::Frontend::IGraphController_const_,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pIVar7 == (IGraphController *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<Metasound::Frontend::IGraphController_const_,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pIVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pIVar6;
  if ((pIVar7 == (IGraphController *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<Metasound::Frontend::IGraphController_const_,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ae64180

TSharedRef<Metasound::Frontend::INodeController,1> * __thiscall
TSharedFromThis<Metasound::Frontend::INodeController,1>::AsShared
          (TSharedFromThis<Metasound::Frontend::INodeController,1> *this,
          TSharedRef<Metasound::Frontend::INodeController,1> *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  INodeController *pIVar4;
  TSharedRef<Metasound::Frontend::INodeController,1> *pTVar5;
  INodeController *pIVar6;
  INodeController *pIVar7;
  INodeController *pIVar8;
  bool bVar9;
  
  pIVar4 = (INodeController *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pIVar8 = (INodeController *)0x0;
  pIVar6 = pIVar4;
  pIVar7 = pIVar8;
  if (pIVar4 != (INodeController *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pIVar4->field_0x8)->ReferenceController;
    do {
      pIVar6 = pIVar8;
      pIVar7 = (INodeController *)0x0;
      if (iVar2 == 0) goto LAB_14ae641c1;
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
LAB_14ae641c1:
  pIVar4 = (INodeController *)&pIVar7->field_0x8;
  if (pIVar7 == (INodeController *)0x0) {
    pIVar4 = pIVar8;
  }
  if ((pIVar4 != (INodeController *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<Metasound::Frontend::INodeController,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pIVar7 == (INodeController *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<Metasound::Frontend::INodeController,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pIVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pIVar6;
  if ((pIVar7 == (INodeController *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<Metasound::Frontend::INodeController,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ae64290

TSharedRef<Metasound::Frontend::INodeController_const_,1> * __thiscall
TSharedFromThis<Metasound::Frontend::INodeController,1>::AsShared
          (TSharedFromThis<Metasound::Frontend::INodeController,1> *this,
          TSharedRef<Metasound::Frontend::INodeController_const_,1> *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  INodeController *pIVar4;
  TSharedRef<Metasound::Frontend::INodeController_const_,1> *pTVar5;
  INodeController *pIVar6;
  INodeController *pIVar7;
  INodeController *pIVar8;
  bool bVar9;
  
  pIVar4 = (INodeController *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pIVar8 = (INodeController *)0x0;
  pIVar6 = pIVar4;
  pIVar7 = pIVar8;
  if (pIVar4 != (INodeController *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pIVar4->field_0x8)->ReferenceController;
    do {
      pIVar6 = pIVar8;
      pIVar7 = (INodeController *)0x0;
      if (iVar2 == 0) goto LAB_14ae642d1;
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
LAB_14ae642d1:
  pIVar4 = (INodeController *)&pIVar7->field_0x8;
  if (pIVar7 == (INodeController *)0x0) {
    pIVar4 = pIVar8;
  }
  if ((pIVar4 != (INodeController *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x69a,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<Metasound::Frontend::INodeController_const_,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pIVar7 == (INodeController *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<Metasound::Frontend::INodeController_const_,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pIVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pIVar6;
  if ((pIVar7 == (INodeController *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<Metasound::Frontend::INodeController_const_,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

