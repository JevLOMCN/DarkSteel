// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 18

// AsShared @ 1426b16e0

TSharedRef<FMenuBase,1> * __thiscall
TSharedFromThis<FMenuBase,1>::AsShared
          (TSharedFromThis<FMenuBase,1> *this,TSharedRef<FMenuBase,1> *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  FMenuBase *pFVar4;
  TSharedRef<FMenuBase,1> *pTVar5;
  FMenuBase *pFVar6;
  FMenuBase *pFVar7;
  FMenuBase *pFVar8;
  bool bVar9;
  
  pFVar4 = (FMenuBase *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pFVar8 = (FMenuBase *)0x0;
  pFVar6 = pFVar4;
  pFVar7 = pFVar8;
  if (pFVar4 != (FMenuBase *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pFVar4->_padding_)->ReferenceController;
    do {
      pFVar6 = pFVar8;
      pFVar7 = (FMenuBase *)0x0;
      if (iVar2 == 0) goto LAB_1426b1721;
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
LAB_1426b1721:
  pFVar4 = (FMenuBase *)&pFVar7->_padding_;
  if (pFVar7 == (FMenuBase *)0x0) {
    pFVar4 = pFVar8;
  }
  if ((pFVar4 != (FMenuBase *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FMenuBase,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pFVar7 == (FMenuBase *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FMenuBase,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pFVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar6;
  if ((pFVar7 == (FMenuBase *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FMenuBase,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 1426b17f0

TSharedRef<TAnimatedAttributeBase,1> * __thiscall
TSharedFromThis<TAnimatedAttributeBase,1>::AsShared
          (TSharedFromThis<TAnimatedAttributeBase,1> *this,
          TSharedRef<TAnimatedAttributeBase,1> *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TAnimatedAttributeBase *pTVar4;
  TSharedRef<TAnimatedAttributeBase,1> *pTVar5;
  TAnimatedAttributeBase *pTVar6;
  TAnimatedAttributeBase *pTVar7;
  TAnimatedAttributeBase *pTVar8;
  bool bVar9;
  
  pTVar4 = (TAnimatedAttributeBase *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TAnimatedAttributeBase *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TAnimatedAttributeBase *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TAnimatedAttributeBase *)0x0;
      if (iVar2 == 0) goto LAB_1426b1831;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_1426b1831:
  pTVar4 = (TAnimatedAttributeBase *)&pTVar7->_padding_;
  if (pTVar7 == (TAnimatedAttributeBase *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TAnimatedAttributeBase *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<TAnimatedAttributeBase,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TAnimatedAttributeBase *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<TAnimatedAttributeBase,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TAnimatedAttributeBase *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<TAnimatedAttributeBase,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14270d400

TSharedRef<FBindingContext,1> * __thiscall
TSharedFromThis<FBindingContext,1>::AsShared
          (TSharedFromThis<FBindingContext,1> *this,
          TSharedRef<FBindingContext,1> *__return_storage_ptr__)

{
  FBindingContext *pFVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  TSharedRef<FBindingContext,1> *pTVar5;
  FBindingContext *pFVar6;
  FBindingContext *pFVar7;
  bool bVar8;
  
  pFVar1 = (FBindingContext *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pFVar7 = (FBindingContext *)0x0;
  pFVar6 = pFVar1;
  if (pFVar1 != (FBindingContext *)0x0) {
    iVar3 = *(int *)&((FWeakReferencer<1> *)&pFVar1->_padding_)->ReferenceController;
    do {
      pFVar6 = pFVar7;
      if (iVar3 == 0) goto LAB_14270d441;
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
LAB_14270d441:
  if ((pFVar7 != (FBindingContext *)this) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<FBindingContext,1> *)(*pcVar2)();
    return pTVar5;
  }
  if ((pFVar7 == (FBindingContext *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<FBindingContext,1> *)(*pcVar2)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pFVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar6;
  if ((pFVar7 == (FBindingContext *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<FBindingContext,1> *)(*pcVar2)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14270d500

TSharedRef<FTabManager::FLayout,1> * __thiscall
TSharedFromThis<FTabManager::FLayout,1>::AsShared
          (TSharedFromThis<FTabManager::FLayout,1> *this,
          TSharedRef<FTabManager::FLayout,1> *__return_storage_ptr__)

{
  FLayout *pFVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  TSharedRef<FTabManager::FLayout,1> *pTVar5;
  FLayout *pFVar6;
  FLayout *pFVar7;
  bool bVar8;
  
  pFVar1 = (FLayout *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pFVar7 = (FLayout *)0x0;
  pFVar6 = pFVar1;
  if (pFVar1 != (FLayout *)0x0) {
    iVar3 = *(int *)&((FWeakReferencer<1> *)&pFVar1->_padding_)->ReferenceController;
    do {
      pFVar6 = pFVar7;
      if (iVar3 == 0) goto LAB_14270d541;
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
LAB_14270d541:
  if ((pFVar7 != (FLayout *)this) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<FTabManager::FLayout,1> *)(*pcVar2)();
    return pTVar5;
  }
  if ((pFVar7 == (FLayout *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<FTabManager::FLayout,1> *)(*pcVar2)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pFVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar6;
  if ((pFVar7 == (FLayout *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<FTabManager::FLayout,1> *)(*pcVar2)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14270d600

TSharedRef<FTabManager::FLayoutNode,1> * __thiscall
TSharedFromThis<FTabManager::FLayoutNode,1>::AsShared
          (TSharedFromThis<FTabManager::FLayoutNode,1> *this,
          TSharedRef<FTabManager::FLayoutNode,1> *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  FLayoutNode *pFVar4;
  TSharedRef<FTabManager::FLayoutNode,1> *pTVar5;
  FLayoutNode *pFVar6;
  FLayoutNode *pFVar7;
  FLayoutNode *pFVar8;
  bool bVar9;
  
  pFVar4 = (FLayoutNode *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pFVar8 = (FLayoutNode *)0x0;
  pFVar6 = pFVar4;
  pFVar7 = pFVar8;
  if (pFVar4 != (FLayoutNode *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pFVar4->_padding_)->ReferenceController;
    do {
      pFVar6 = pFVar8;
      pFVar7 = (FLayoutNode *)0x0;
      if (iVar2 == 0) goto LAB_14270d641;
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
LAB_14270d641:
  pFVar4 = (FLayoutNode *)&pFVar7->_padding_;
  if (pFVar7 == (FLayoutNode *)0x0) {
    pFVar4 = pFVar8;
  }
  if ((pFVar4 != (FLayoutNode *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FTabManager::FLayoutNode,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pFVar7 == (FLayoutNode *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FTabManager::FLayoutNode,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pFVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar6;
  if ((pFVar7 == (FLayoutNode *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FTabManager::FLayoutNode,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14270d710

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FTabManager,1> * __thiscall
TSharedFromThis<FTabManager,1>::AsShared
          (TSharedFromThis<FTabManager,1> *this,TSharedRef<FTabManager,1> *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  FTabManager *pFVar4;
  TSharedRef<FTabManager,1> *pTVar5;
  FTabManager *pFVar6;
  FTabManager *pFVar7;
  FTabManager *pFVar8;
  bool bVar9;
  
  pFVar4 = (FTabManager *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pFVar8 = (FTabManager *)0x0;
  pFVar6 = pFVar4;
  pFVar7 = pFVar8;
  if (pFVar4 != (FTabManager *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pFVar4->_padding_)->ReferenceController;
    do {
      pFVar6 = pFVar8;
      pFVar7 = (FTabManager *)0x0;
      if (iVar2 == 0) goto LAB_14270d751;
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
LAB_14270d751:
  pFVar4 = (FTabManager *)&pFVar7->_padding_;
  if (pFVar7 == (FTabManager *)0x0) {
    pFVar4 = pFVar8;
  }
  if ((pFVar4 != (FTabManager *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FTabManager,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pFVar7 == (FTabManager *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FTabManager,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pFVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar6;
  if ((pFVar7 == (FTabManager *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FTabManager,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14270d820

TSharedRef<FUICommandList_const_,1> * __thiscall
TSharedFromThis<FUICommandList,1>::AsShared
          (TSharedFromThis<FUICommandList,1> *this,
          TSharedRef<FUICommandList_const_,1> *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  FUICommandList *pFVar4;
  TSharedRef<FUICommandList_const_,1> *pTVar5;
  FUICommandList *pFVar6;
  FUICommandList *pFVar7;
  FUICommandList *pFVar8;
  bool bVar9;
  
  pFVar4 = (FUICommandList *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pFVar8 = (FUICommandList *)0x0;
  pFVar6 = pFVar4;
  pFVar7 = pFVar8;
  if (pFVar4 != (FUICommandList *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pFVar4->_padding_)->ReferenceController;
    do {
      pFVar6 = pFVar8;
      pFVar7 = (FUICommandList *)0x0;
      if (iVar2 == 0) goto LAB_14270d861;
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
LAB_14270d861:
  pFVar4 = (FUICommandList *)&pFVar7->_padding_;
  if (pFVar7 == (FUICommandList *)0x0) {
    pFVar4 = pFVar8;
  }
  if ((pFVar4 != (FUICommandList *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x69a,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FUICommandList_const_,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pFVar7 == (FUICommandList *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FUICommandList_const_,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pFVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar6;
  if ((pFVar7 == (FUICommandList *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FUICommandList_const_,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14270d930

TSharedRef<FWorkspaceItem,1> * __thiscall
TSharedFromThis<FWorkspaceItem,1>::AsShared
          (TSharedFromThis<FWorkspaceItem,1> *this,
          TSharedRef<FWorkspaceItem,1> *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  FWorkspaceItem *pFVar4;
  TSharedRef<FWorkspaceItem,1> *pTVar5;
  FWorkspaceItem *pFVar6;
  FWorkspaceItem *pFVar7;
  FWorkspaceItem *pFVar8;
  bool bVar9;
  
  pFVar4 = (FWorkspaceItem *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pFVar8 = (FWorkspaceItem *)0x0;
  pFVar6 = pFVar4;
  pFVar7 = pFVar8;
  if (pFVar4 != (FWorkspaceItem *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pFVar4->_padding_)->ReferenceController;
    do {
      pFVar6 = pFVar8;
      pFVar7 = (FWorkspaceItem *)0x0;
      if (iVar2 == 0) goto LAB_14270d971;
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
LAB_14270d971:
  pFVar4 = (FWorkspaceItem *)&pFVar7->_padding_;
  if (pFVar7 == (FWorkspaceItem *)0x0) {
    pFVar4 = pFVar8;
  }
  if ((pFVar4 != (FWorkspaceItem *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FWorkspaceItem,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pFVar7 == (FWorkspaceItem *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FWorkspaceItem,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pFVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar6;
  if ((pFVar7 == (FWorkspaceItem *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FWorkspaceItem,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 1427d3100

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<FMultiBlock_const_,1> * __thiscall
TSharedFromThis<FMultiBlock,1>::AsShared
          (TSharedFromThis<FMultiBlock,1> *this,
          TSharedRef<FMultiBlock_const_,1> *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  FMultiBlock *pFVar4;
  TSharedRef<FMultiBlock_const_,1> *pTVar5;
  FMultiBlock *pFVar6;
  FMultiBlock *pFVar7;
  FMultiBlock *pFVar8;
  bool bVar9;
  
  pFVar4 = (FMultiBlock *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pFVar8 = (FMultiBlock *)0x0;
  pFVar6 = pFVar4;
  pFVar7 = pFVar8;
  if (pFVar4 != (FMultiBlock *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pFVar4->_padding_)->ReferenceController;
    do {
      pFVar6 = pFVar8;
      pFVar7 = (FMultiBlock *)0x0;
      if (iVar2 == 0) goto LAB_1427d3141;
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
LAB_1427d3141:
  pFVar4 = (FMultiBlock *)&pFVar7->_padding_;
  if (pFVar7 == (FMultiBlock *)0x0) {
    pFVar4 = pFVar8;
  }
  if ((pFVar4 != (FMultiBlock *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x69a,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FMultiBlock_const_,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pFVar7 == (FMultiBlock *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FMultiBlock_const_,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pFVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar6;
  if ((pFVar7 == (FMultiBlock *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FMultiBlock_const_,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 1427d3210

TSharedRef<FMultiBox,1> * __thiscall
TSharedFromThis<FMultiBox,1>::AsShared
          (TSharedFromThis<FMultiBox,1> *this,TSharedRef<FMultiBox,1> *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  FMultiBox *pFVar4;
  TSharedRef<FMultiBox,1> *pTVar5;
  FMultiBox *pFVar6;
  FMultiBox *pFVar7;
  FMultiBox *pFVar8;
  bool bVar9;
  
  pFVar4 = (FMultiBox *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pFVar8 = (FMultiBox *)0x0;
  pFVar6 = pFVar4;
  pFVar7 = pFVar8;
  if (pFVar4 != (FMultiBox *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pFVar4->_padding_)->ReferenceController;
    do {
      pFVar6 = pFVar8;
      pFVar7 = (FMultiBox *)0x0;
      if (iVar2 == 0) goto LAB_1427d3251;
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
LAB_1427d3251:
  pFVar4 = (FMultiBox *)&pFVar7->_padding_;
  if (pFVar7 == (FMultiBox *)0x0) {
    pFVar4 = pFVar8;
  }
  if ((pFVar4 != (FMultiBox *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FMultiBox,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pFVar7 == (FMultiBox *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FMultiBox,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pFVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar6;
  if ((pFVar7 == (FMultiBox *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FMultiBox,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 1427d3320

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FSlateAsyncTaskNotificationImpl,1> * __thiscall
TSharedFromThis<FSlateAsyncTaskNotificationImpl,1>::AsShared
          (TSharedFromThis<FSlateAsyncTaskNotificationImpl,1> *this,
          TSharedRef<FSlateAsyncTaskNotificationImpl,1> *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  FSlateAsyncTaskNotificationImpl *pFVar4;
  TSharedRef<FSlateAsyncTaskNotificationImpl,1> *pTVar5;
  FSlateAsyncTaskNotificationImpl *pFVar6;
  FSlateAsyncTaskNotificationImpl *pFVar7;
  FSlateAsyncTaskNotificationImpl *pFVar8;
  bool bVar9;
  
  pFVar4 = (FSlateAsyncTaskNotificationImpl *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pFVar8 = (FSlateAsyncTaskNotificationImpl *)0x0;
  pFVar6 = pFVar4;
  pFVar7 = pFVar8;
  if (pFVar4 != (FSlateAsyncTaskNotificationImpl *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pFVar4->_padding_)->ReferenceController;
    do {
      pFVar6 = pFVar8;
      pFVar7 = (FSlateAsyncTaskNotificationImpl *)0x0;
      if (iVar2 == 0) goto LAB_1427d3361;
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
LAB_1427d3361:
  pFVar4 = (FSlateAsyncTaskNotificationImpl *)&pFVar7->_padding_;
  if (pFVar7 == (FSlateAsyncTaskNotificationImpl *)0x0) {
    pFVar4 = pFVar8;
  }
  if ((pFVar4 != (FSlateAsyncTaskNotificationImpl *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FSlateAsyncTaskNotificationImpl,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pFVar7 == (FSlateAsyncTaskNotificationImpl *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FSlateAsyncTaskNotificationImpl,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pFVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar6;
  if ((pFVar7 == (FSlateAsyncTaskNotificationImpl *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FSlateAsyncTaskNotificationImpl,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 1427d3430

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FSlateAsyncTaskNotificationImpl_const_,1> * __thiscall
TSharedFromThis<FSlateAsyncTaskNotificationImpl,1>::AsShared
          (TSharedFromThis<FSlateAsyncTaskNotificationImpl,1> *this,
          TSharedRef<FSlateAsyncTaskNotificationImpl_const_,1> *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  FSlateAsyncTaskNotificationImpl *pFVar4;
  TSharedRef<FSlateAsyncTaskNotificationImpl_const_,1> *pTVar5;
  FSlateAsyncTaskNotificationImpl *pFVar6;
  FSlateAsyncTaskNotificationImpl *pFVar7;
  FSlateAsyncTaskNotificationImpl *pFVar8;
  bool bVar9;
  
  pFVar4 = (FSlateAsyncTaskNotificationImpl *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pFVar8 = (FSlateAsyncTaskNotificationImpl *)0x0;
  pFVar6 = pFVar4;
  pFVar7 = pFVar8;
  if (pFVar4 != (FSlateAsyncTaskNotificationImpl *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pFVar4->_padding_)->ReferenceController;
    do {
      pFVar6 = pFVar8;
      pFVar7 = (FSlateAsyncTaskNotificationImpl *)0x0;
      if (iVar2 == 0) goto LAB_1427d3471;
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
LAB_1427d3471:
  pFVar4 = (FSlateAsyncTaskNotificationImpl *)&pFVar7->_padding_;
  if (pFVar7 == (FSlateAsyncTaskNotificationImpl *)0x0) {
    pFVar4 = pFVar8;
  }
  if ((pFVar4 != (FSlateAsyncTaskNotificationImpl *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x69a,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FSlateAsyncTaskNotificationImpl_const_,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pFVar7 == (FSlateAsyncTaskNotificationImpl *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FSlateAsyncTaskNotificationImpl_const_,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pFVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar6;
  if ((pFVar7 == (FSlateAsyncTaskNotificationImpl *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FSlateAsyncTaskNotificationImpl_const_,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsWeak @ 1427d3580

/* WARNING: Enum "Type": Some values do not have unique names */

TWeakPtr<FSlateAsyncTaskNotificationImpl,1> * __thiscall
TSharedFromThis<FSlateAsyncTaskNotificationImpl,1>::AsWeak
          (TSharedFromThis<FSlateAsyncTaskNotificationImpl,1> *this,
          TWeakPtr<FSlateAsyncTaskNotificationImpl,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  FSlateAsyncTaskNotificationImpl *pFVar5;
  TWeakPtr<FSlateAsyncTaskNotificationImpl,1> *pTVar6;
  FSlateAsyncTaskNotificationImpl *pFVar7;
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
  pFVar7 = (FSlateAsyncTaskNotificationImpl *)0x0;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        goto LAB_1427d35fa;
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
    pFVar7 = __return_storage_ptr__->Object;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pFVar5 = (FSlateAsyncTaskNotificationImpl *)&pFVar7->_padding_;
  if (pFVar7 == (FSlateAsyncTaskNotificationImpl *)0x0) {
    pFVar5 = (FSlateAsyncTaskNotificationImpl *)0x0;
  }
  if (pFVar5 != (FSlateAsyncTaskNotificationImpl *)this) {
LAB_1427d35fa:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result.Pin().Get() == this",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x6c3,L"");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TWeakPtr<FSlateAsyncTaskNotificationImpl,1> *)(*pcVar2)();
      return pTVar6;
    }
  }
  return __return_storage_ptr__;
}

// AsShared @ 142853b40

TSharedRef<FSlateHyperlinkRun,1> * __thiscall
TSharedFromThis<FSlateHyperlinkRun,1>::AsShared
          (TSharedFromThis<FSlateHyperlinkRun,1> *this,
          TSharedRef<FSlateHyperlinkRun,1> *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  FSlateHyperlinkRun *pFVar4;
  TSharedRef<FSlateHyperlinkRun,1> *pTVar5;
  FSlateHyperlinkRun *pFVar6;
  FSlateHyperlinkRun *pFVar7;
  FSlateHyperlinkRun *pFVar8;
  bool bVar9;
  
  pFVar4 = (FSlateHyperlinkRun *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pFVar8 = (FSlateHyperlinkRun *)0x0;
  pFVar6 = pFVar4;
  pFVar7 = pFVar8;
  if (pFVar4 != (FSlateHyperlinkRun *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pFVar4->field_0x8)->ReferenceController;
    do {
      pFVar6 = pFVar8;
      pFVar7 = (FSlateHyperlinkRun *)0x0;
      if (iVar2 == 0) goto LAB_142853b81;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pFVar4->field_0x8)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pFVar4->field_0x8)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pFVar6 = pFVar4;
    pFVar7 = (this->WeakThis).Object;
  }
LAB_142853b81:
  pFVar4 = (FSlateHyperlinkRun *)&pFVar7->field_0x8;
  if (pFVar7 == (FSlateHyperlinkRun *)0x0) {
    pFVar4 = pFVar8;
  }
  if ((pFVar4 != (FSlateHyperlinkRun *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FSlateHyperlinkRun,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pFVar7 == (FSlateHyperlinkRun *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FSlateHyperlinkRun,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pFVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar6;
  if ((pFVar7 == (FSlateHyperlinkRun *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FSlateHyperlinkRun,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 142853c50

TSharedRef<FSlateImageRun,1> * __thiscall
TSharedFromThis<FSlateImageRun,1>::AsShared
          (TSharedFromThis<FSlateImageRun,1> *this,
          TSharedRef<FSlateImageRun,1> *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  FSlateImageRun *pFVar4;
  TSharedRef<FSlateImageRun,1> *pTVar5;
  FSlateImageRun *pFVar6;
  FSlateImageRun *pFVar7;
  FSlateImageRun *pFVar8;
  bool bVar9;
  
  pFVar4 = (FSlateImageRun *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pFVar8 = (FSlateImageRun *)0x0;
  pFVar6 = pFVar4;
  pFVar7 = pFVar8;
  if (pFVar4 != (FSlateImageRun *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pFVar4->_padding_)->ReferenceController;
    do {
      pFVar6 = pFVar8;
      pFVar7 = (FSlateImageRun *)0x0;
      if (iVar2 == 0) goto LAB_142853c91;
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
LAB_142853c91:
  pFVar4 = (FSlateImageRun *)&pFVar7->_padding_;
  if (pFVar7 == (FSlateImageRun *)0x0) {
    pFVar4 = pFVar8;
  }
  if ((pFVar4 != (FSlateImageRun *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FSlateImageRun,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pFVar7 == (FSlateImageRun *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FSlateImageRun,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pFVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar6;
  if ((pFVar7 == (FSlateImageRun *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FSlateImageRun,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 142853d60

TSharedRef<FSlateTextRun,1> * __thiscall
TSharedFromThis<FSlateTextRun,1>::AsShared
          (TSharedFromThis<FSlateTextRun,1> *this,
          TSharedRef<FSlateTextRun,1> *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  FSlateTextRun *pFVar4;
  TSharedRef<FSlateTextRun,1> *pTVar5;
  FSlateTextRun *pFVar6;
  FSlateTextRun *pFVar7;
  FSlateTextRun *pFVar8;
  bool bVar9;
  
  pFVar4 = (FSlateTextRun *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pFVar8 = (FSlateTextRun *)0x0;
  pFVar6 = pFVar4;
  pFVar7 = pFVar8;
  if (pFVar4 != (FSlateTextRun *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pFVar4->field_0x8)->ReferenceController;
    do {
      pFVar6 = pFVar8;
      pFVar7 = (FSlateTextRun *)0x0;
      if (iVar2 == 0) goto LAB_142853da1;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pFVar4->field_0x8)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pFVar4->field_0x8)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pFVar6 = pFVar4;
    pFVar7 = (this->WeakThis).Object;
  }
LAB_142853da1:
  pFVar4 = (FSlateTextRun *)&pFVar7->field_0x8;
  if (pFVar7 == (FSlateTextRun *)0x0) {
    pFVar4 = pFVar8;
  }
  if ((pFVar4 != (FSlateTextRun *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FSlateTextRun,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pFVar7 == (FSlateTextRun *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FSlateTextRun,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pFVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar6;
  if ((pFVar7 == (FSlateTextRun *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FSlateTextRun,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 142853e70

TSharedRef<FSlateWidgetRun,1> * __thiscall
TSharedFromThis<FSlateWidgetRun,1>::AsShared
          (TSharedFromThis<FSlateWidgetRun,1> *this,
          TSharedRef<FSlateWidgetRun,1> *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  FSlateWidgetRun *pFVar4;
  TSharedRef<FSlateWidgetRun,1> *pTVar5;
  FSlateWidgetRun *pFVar6;
  FSlateWidgetRun *pFVar7;
  FSlateWidgetRun *pFVar8;
  bool bVar9;
  
  pFVar4 = (FSlateWidgetRun *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pFVar8 = (FSlateWidgetRun *)0x0;
  pFVar6 = pFVar4;
  pFVar7 = pFVar8;
  if (pFVar4 != (FSlateWidgetRun *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pFVar4->_padding_)->ReferenceController;
    do {
      pFVar6 = pFVar8;
      pFVar7 = (FSlateWidgetRun *)0x0;
      if (iVar2 == 0) goto LAB_142853eb1;
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
LAB_142853eb1:
  pFVar4 = (FSlateWidgetRun *)&pFVar7->_padding_;
  if (pFVar7 == (FSlateWidgetRun *)0x0) {
    pFVar4 = pFVar8;
  }
  if ((pFVar4 != (FSlateWidgetRun *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FSlateWidgetRun,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pFVar7 == (FSlateWidgetRun *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FSlateWidgetRun,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pFVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar6;
  if ((pFVar7 == (FSlateWidgetRun *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FSlateWidgetRun,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 142853f80

TSharedRef<FSlateWidgetRun_const_,1> * __thiscall
TSharedFromThis<FSlateWidgetRun,1>::AsShared
          (TSharedFromThis<FSlateWidgetRun,1> *this,
          TSharedRef<FSlateWidgetRun_const_,1> *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  FSlateWidgetRun *pFVar4;
  TSharedRef<FSlateWidgetRun_const_,1> *pTVar5;
  FSlateWidgetRun *pFVar6;
  FSlateWidgetRun *pFVar7;
  FSlateWidgetRun *pFVar8;
  bool bVar9;
  
  pFVar4 = (FSlateWidgetRun *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pFVar8 = (FSlateWidgetRun *)0x0;
  pFVar6 = pFVar4;
  pFVar7 = pFVar8;
  if (pFVar4 != (FSlateWidgetRun *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pFVar4->_padding_)->ReferenceController;
    do {
      pFVar6 = pFVar8;
      pFVar7 = (FSlateWidgetRun *)0x0;
      if (iVar2 == 0) goto LAB_142853fc1;
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
LAB_142853fc1:
  pFVar4 = (FSlateWidgetRun *)&pFVar7->_padding_;
  if (pFVar7 == (FSlateWidgetRun *)0x0) {
    pFVar4 = pFVar8;
  }
  if ((pFVar4 != (FSlateWidgetRun *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x69a,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FSlateWidgetRun_const_,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pFVar7 == (FSlateWidgetRun *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FSlateWidgetRun_const_,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pFVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar6;
  if ((pFVar7 == (FSlateWidgetRun *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FSlateWidgetRun_const_,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

