// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 3

// AsShared @ 142433c50

TSharedRef<SWidget_const_,1> * __thiscall
TSharedFromThis<SWidget,1>::AsShared
          (TSharedFromThis<SWidget,1> *this,TSharedRef<SWidget_const_,1> *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  SWidget *pSVar4;
  TSharedRef<SWidget_const_,1> *pTVar5;
  SWidget *pSVar6;
  SWidget *pSVar7;
  SWidget *pSVar8;
  bool bVar9;
  
  pSVar4 = (SWidget *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pSVar8 = (SWidget *)0x0;
  pSVar6 = pSVar4;
  pSVar7 = pSVar8;
  if (pSVar4 != (SWidget *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pSVar4->_padding_)->ReferenceController;
    do {
      pSVar6 = pSVar8;
      pSVar7 = (SWidget *)0x0;
      if (iVar2 == 0) goto LAB_142433c91;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pSVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pSVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pSVar6 = pSVar4;
    pSVar7 = (this->WeakThis).Object;
  }
LAB_142433c91:
  pSVar4 = (SWidget *)&pSVar7->_padding_;
  if (pSVar7 == (SWidget *)0x0) {
    pSVar4 = pSVar8;
  }
  if ((pSVar4 != (SWidget *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x69a,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<SWidget_const_,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pSVar7 == (SWidget *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<SWidget_const_,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pSVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pSVar6;
  if ((pSVar7 == (SWidget *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<SWidget_const_,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 142480af0

TSharedRef<SWidget,1> * __thiscall
TSharedFromThis<SWidget,1>::AsShared
          (TSharedFromThis<SWidget,1> *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  SWidget *pSVar4;
  TSharedRef<SWidget,1> *pTVar5;
  SWidget *pSVar6;
  SWidget *pSVar7;
  SWidget *pSVar8;
  bool bVar9;
  
  pSVar4 = (SWidget *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pSVar8 = (SWidget *)0x0;
  pSVar6 = pSVar4;
  pSVar7 = pSVar8;
  if (pSVar4 != (SWidget *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pSVar4->_padding_)->ReferenceController;
    do {
      pSVar6 = pSVar8;
      pSVar7 = (SWidget *)0x0;
      if (iVar2 == 0) goto LAB_142480b31;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pSVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pSVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pSVar6 = pSVar4;
    pSVar7 = (this->WeakThis).Object;
  }
LAB_142480b31:
  pSVar4 = (SWidget *)&pSVar7->_padding_;
  if (pSVar7 == (SWidget *)0x0) {
    pSVar4 = pSVar8;
  }
  if ((pSVar4 != (SWidget *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<SWidget,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pSVar7 == (SWidget *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<SWidget,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pSVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pSVar6;
  if ((pSVar7 == (SWidget *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<SWidget,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 1425cb0f0

TSharedRef<IAccessibleWidget,1> * __thiscall
TSharedFromThis<IAccessibleWidget,1>::AsShared
          (TSharedFromThis<IAccessibleWidget,1> *this,
          TSharedRef<IAccessibleWidget,1> *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  IAccessibleWidget *pIVar4;
  TSharedRef<IAccessibleWidget,1> *pTVar5;
  IAccessibleWidget *pIVar6;
  IAccessibleWidget *pIVar7;
  IAccessibleWidget *pIVar8;
  bool bVar9;
  
  pIVar4 = (IAccessibleWidget *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pIVar8 = (IAccessibleWidget *)0x0;
  pIVar6 = pIVar4;
  pIVar7 = pIVar8;
  if (pIVar4 != (IAccessibleWidget *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pIVar4->field_0x8)->ReferenceController;
    do {
      pIVar6 = pIVar8;
      pIVar7 = (IAccessibleWidget *)0x0;
      if (iVar2 == 0) goto LAB_1425cb131;
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
LAB_1425cb131:
  pIVar4 = (IAccessibleWidget *)&pIVar7->field_0x8;
  if (pIVar7 == (IAccessibleWidget *)0x0) {
    pIVar4 = pIVar8;
  }
  if ((pIVar4 != (IAccessibleWidget *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<IAccessibleWidget,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pIVar7 == (IAccessibleWidget *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<IAccessibleWidget,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pIVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pIVar6;
  if ((pIVar7 == (IAccessibleWidget *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<IAccessibleWidget,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

