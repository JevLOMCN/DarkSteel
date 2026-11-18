// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdvancedWidgets
// Functions: 484

// CreateCopy @ 14d854450

void __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBV__STableRow_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00_____00__A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8544f0

void __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBV__STableRow_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00_____00__A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 14d854560

void __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBV__STableRow_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00_____00__A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d854620

void __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBV__STableRow_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00_____00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8546c0

void __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBV__STableRow_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00_____00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 14d854730

void __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBV__STableRow_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00_____00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8547f0

void __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SBoolPropertyValue_const_,1,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSBoolPropertyValue_PropertyViewer_UE___00__A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar3[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar2 = *(undefined8 *)((longlong)this + 0x30);
    puVar3[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d854890

void __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SBoolPropertyValue_const_,1,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSBoolPropertyValue_PropertyViewer_UE___00__A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar3[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar2 = *(undefined8 *)((longlong)this + 0x30);
    puVar3[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 14d854900

void __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SBoolPropertyValue_const_,1,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSBoolPropertyValue_PropertyViewer_UE___00__A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar7[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar3 = *(undefined4 *)((longlong)this + 0x2c);
    uVar4 = *(undefined4 *)((longlong)this + 0x30);
    uVar5 = *(undefined4 *)((longlong)this + 0x34);
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)((longlong)this + 0x28);
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8549c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSColorGradingComponentViewer_ColorGrading_UE___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d854a60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSColorGradingComponentViewer_ColorGrading_UE___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 14d854ad0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSColorGradingComponentViewer_ColorGrading_UE___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d854b90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSColorGradingComponentViewer_ColorGrading_UE___00__A6AMXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d854c30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSColorGradingComponentViewer_ColorGrading_UE___00__A6AMXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 14d854ca0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSColorGradingComponentViewer_ColorGrading_UE___00__A6AMXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d854d60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSColorGradingComponentViewer_ColorGrading_UE___00__A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d854e00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSColorGradingComponentViewer_ColorGrading_UE___00__A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 14d854e70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSColorGradingComponentViewer_ColorGrading_UE___00__A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d854f30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingPicker_const_,1,TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingPicker_const_,1,TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_M__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSColorGradingPicker_ColorGrading_UE___00__A6A_AU__TOptional_M__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d854fd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingPicker_const_,1,TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingPicker_const_,1,TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_M__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSColorGradingPicker_ColorGrading_UE___00__A6A_AU__TOptional_M__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 14d855040

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingPicker_const_,1,TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingPicker_const_,1,TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TOptional_M__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSColorGradingPicker_ColorGrading_UE___00__A6A_AU__TOptional_M__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d855100

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingPicker_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingPicker_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSColorGradingPicker_ColorGrading_UE___00__A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8551a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingPicker_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingPicker_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSColorGradingPicker_ColorGrading_UE___00__A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 14d855210

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingPicker_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingPicker_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSColorGradingPicker_ColorGrading_UE___00__A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8552d0

void __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SDefaultPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SDefaultPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSDefaultPropertyValue_PropertyViewer_UE___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d855370

void __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SDefaultPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SDefaultPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSDefaultPropertyValue_PropertyViewer_UE___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 14d8553e0

void __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SDefaultPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SDefaultPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSDefaultPropertyValue_PropertyViewer_UE___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8554a0

void __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SEnumPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SEnumPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSEnumPropertyValue_PropertyViewer_UE___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d855540

void __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SEnumPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SEnumPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSEnumPropertyValue_PropertyViewer_UE___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 14d8555b0

void __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SEnumPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SEnumPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSEnumPropertyValue_PropertyViewer_UE___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d855670

void __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__H__6B_
    ;
    *(int *)(puVar3 + 1) = (int)this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSListViewPinnedRowWidget___SListView_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00_____00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__H__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d855710

void __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__H__6B_
    ;
    *(int *)(puVar3 + 1) = (int)this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSListViewPinnedRowWidget___SListView_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00_____00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__H__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 14d855780

void __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__H__6B_
    ;
    *(int *)(puVar7 + 1) = (int)this->_padding_;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSListViewPinnedRowWidget___SListView_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00_____00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__H__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d855840

void __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__HH__6B_
    ;
    puVar3[1] = this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSListViewPinnedRowWidget___SListView_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00_____00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__HH__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8558f0

void __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__HH__6B_
    ;
    puVar3[1] = this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSListViewPinnedRowWidget___SListView_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00_____00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__HH__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 14d855960

void __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__HH__6B_
    ;
    puVar7[1] = this->_padding_;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSListViewPinnedRowWidget___SListView_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00_____00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__HH__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d855a20

void __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,double___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,double___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6ANXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSNumericPropertyValue_PropertyViewer_UE___00__A6ANXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d855ac0

void __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,double___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,double___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6ANXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSNumericPropertyValue_PropertyViewer_UE___00__A6ANXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 14d855b30

void __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,double___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,double___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &___7__TCommonDelegateInstanceState___A6ANXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSNumericPropertyValue_PropertyViewer_UE___00__A6ANXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d855bf0

void __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,__int64___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,__int64___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_JXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSNumericPropertyValue_PropertyViewer_UE___00__A6A_JXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d855c90

void __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,__int64___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,__int64___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_JXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSNumericPropertyValue_PropertyViewer_UE___00__A6A_JXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 14d855d00

void __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,__int64___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,__int64___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &___7__TCommonDelegateInstanceState___A6A_JXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSNumericPropertyValue_PropertyViewer_UE___00__A6A_JXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d855dc0

void __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,unsigned___int64___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,unsigned___int64___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_KXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSNumericPropertyValue_PropertyViewer_UE___00__A6A_KXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d855e60

void __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,unsigned___int64___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,unsigned___int64___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_KXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSNumericPropertyValue_PropertyViewer_UE___00__A6A_KXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 14d855ed0

void __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,unsigned___int64___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,unsigned___int64___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &___7__TCommonDelegateInstanceState___A6A_KXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSNumericPropertyValue_PropertyViewer_UE___00__A6A_KXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d855f90

void __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SStringPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SStringPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSStringPropertyValue_PropertyViewer_UE___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d856030

void __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SStringPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SStringPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSStringPropertyValue_PropertyViewer_UE___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 14d8560a0

void __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SStringPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SStringPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSStringPropertyValue_PropertyViewer_UE___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d856160

void __thiscall
TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VSHeaderRow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__SMultiColumnTableRow_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00_____00__A6AXAEBV__TSharedRef_VSHeaderRow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d856200

void __thiscall
TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VSHeaderRow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__SMultiColumnTableRow_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00_____00__A6AXAEBV__TSharedRef_VSHeaderRow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 14d856270

void __thiscall
TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VSHeaderRow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__SMultiColumnTableRow_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00_____00__A6AXAEBV__TSharedRef_VSHeaderRow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d856330

void __thiscall
TBaseSPMethodDelegateInstance<0,TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__AEAV__TArray_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__TreeFilterHandler_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00_____00__A6AXV__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__AEAV__TArray_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar2[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_820a2be8 *)(puVar2 + 5) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8563d0

void __thiscall
TBaseSPMethodDelegateInstance<0,TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__AEAV__TArray_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__TreeFilterHandler_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00_____00__A6AXV__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__AEAV__TArray_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar2[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_820a2be8 *)(puVar2 + 5) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14d856440

void __thiscall
TBaseSPMethodDelegateInstance<0,TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__AEAV__TArray_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseSPMethodDelegateInstance__0A_V__TreeFilterHandler_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00_____00__A6AXV__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__AEAV__TArray_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar4[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_820a2be8 *)(puVar4 + 5) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d856500

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFPropertyViewerImpl_Private_PropertyViewer_UE___00__A6A_AV__TSharedPtr_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar2[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_a7d7b150 *)(puVar2 + 5) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8565a0

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFPropertyViewerImpl_Private_PropertyViewer_UE___00__A6A_AV__TSharedPtr_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar2[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_a7d7b150 *)(puVar2 + 5) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14d856610

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFPropertyViewerImpl_Private_PropertyViewer_UE___00__A6A_AV__TSharedPtr_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar4[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_a7d7b150 *)(puVar4 + 5) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8566d0

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFPropertyViewerImpl_Private_PropertyViewer_UE___00__A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar2[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_43452e41 *)(puVar2 + 5) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d856770

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFPropertyViewerImpl_Private_PropertyViewer_UE___00__A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar2[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_43452e41 *)(puVar2 + 5) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14d8567e0

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFPropertyViewerImpl_Private_PropertyViewer_UE___00__A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar4[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_43452e41 *)(puVar4 + 5) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8568a0

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy__V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00____6B_
    ;
    puVar3[1] = this->_padding_;
    lVar1 = this->_padding_;
    puVar3[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar3[3] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFPropertyViewerImpl_Private_PropertyViewer_UE___00__A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy__V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00____6B_
    ;
    puVar3[4] = (this->UserObject).Object;
    pTVar2 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[5] = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->WeakReferenceCount = (atomic<int>)((int)pTVar2->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_fa9bca1f *)(puVar3 + 6) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d856960

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy__V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00____6B_
    ;
    puVar3[1] = this->_padding_;
    lVar1 = this->_padding_;
    puVar3[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar3[3] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFPropertyViewerImpl_Private_PropertyViewer_UE___00__A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy__V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00____6B_
    ;
    puVar3[4] = (this->UserObject).Object;
    pTVar2 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[5] = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->WeakReferenceCount = (atomic<int>)((int)pTVar2->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_fa9bca1f *)(puVar3 + 6) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14d8569e0

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar5 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy__V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00____6B_
    ;
    puVar5[1] = this->_padding_;
    lVar1 = this->_padding_;
    puVar5[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar5[3] = this->_padding_;
    *puVar5 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFPropertyViewerImpl_Private_PropertyViewer_UE___00__A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy__V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00____6B_
    ;
    puVar5[4] = (this->UserObject).Object;
    pTVar2 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar5[5] = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->WeakReferenceCount = (atomic<int>)((int)pTVar2->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_fa9bca1f *)(puVar5 + 6) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d856ab0

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFPropertyViewerImpl_Private_PropertyViewer_UE___00__A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar2[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_6891bbf5 *)(puVar2 + 5) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d856b50

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFPropertyViewerImpl_Private_PropertyViewer_UE___00__A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar2[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_6891bbf5 *)(puVar2 + 5) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14d856bc0

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFPropertyViewerImpl_Private_PropertyViewer_UE___00__A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar4[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_6891bbf5 *)(puVar4 + 5) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d856c80

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFPropertyViewerImpl_Private_PropertyViewer_UE___00__A6AXV__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar2[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_b066fb78 *)(puVar2 + 5) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d856d20

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFPropertyViewerImpl_Private_PropertyViewer_UE___00__A6AXV__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar2[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_b066fb78 *)(puVar2 + 5) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14d856d90

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFPropertyViewerImpl_Private_PropertyViewer_UE___00__A6AXV__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar4[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_b066fb78 *)(puVar4 + 5) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d856e50

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__AEAV__TArray_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFPropertyViewerImpl_Private_PropertyViewer_UE___00__A6AXV__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__AEAV__TArray_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar2[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_4542d425 *)(puVar2 + 5) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d856ef0

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__AEAV__TArray_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFPropertyViewerImpl_Private_PropertyViewer_UE___00__A6AXV__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__AEAV__TArray_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar2[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_4542d425 *)(puVar2 + 5) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14d856f60

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__AEAV__TArray_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFPropertyViewerImpl_Private_PropertyViewer_UE___00__A6AXV__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__AEAV__TArray_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar4[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_4542d425 *)(puVar4 + 5) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d857020

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__AEAV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFPropertyViewerImpl_Private_PropertyViewer_UE___00__A6AXV__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__AEAV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar2[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_41bbe624 *)(puVar2 + 5) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8570c0

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__AEAV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFPropertyViewerImpl_Private_PropertyViewer_UE___00__A6AXV__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__AEAV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar2[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_41bbe624 *)(puVar2 + 5) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14d857130

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__AEAV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = this->_padding_;
    *puVar4 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFPropertyViewerImpl_Private_PropertyViewer_UE___00__A6AXV__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__AEAV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar4[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_41bbe624 *)(puVar4 + 5) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8571f0

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFPropertyViewerImpl_Private_PropertyViewer_UE___00__A6AXV__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar2[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d857290

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFPropertyViewerImpl_Private_PropertyViewer_UE___00__A6AXV__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar2[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  }
  return;
}

// CreateCopy @ 14d857300

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar4 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFPropertyViewerImpl_Private_PropertyViewer_UE___00__A6AXV__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar4[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    puVar4[5] = *(undefined8 *)((longlong)this + 0x28);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8573c0

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SBoolPropertyValue,1,void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSBoolPropertyValue_PropertyViewer_UE___00__A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar3[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar2 = *(undefined8 *)((longlong)this + 0x30);
    puVar3[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d857460

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SBoolPropertyValue,1,void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSBoolPropertyValue_PropertyViewer_UE___00__A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar3[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar2 = *(undefined8 *)((longlong)this + 0x30);
    puVar3[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 14d8574d0

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SBoolPropertyValue,1,void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSBoolPropertyValue_PropertyViewer_UE___00__A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar7[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar3 = *(undefined4 *)((longlong)this + 0x2c);
    uVar4 = *(undefined4 *)((longlong)this + 0x30);
    uVar5 = *(undefined4 *)((longlong)this + 0x34);
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)((longlong)this + 0x28);
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d857590

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFLinearColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSColorGradingPicker_ColorGrading_UE___00__A6A_AUFLinearColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d857630

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFLinearColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSColorGradingPicker_ColorGrading_UE___00__A6A_AUFLinearColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 14d8576a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFLinearColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSColorGradingPicker_ColorGrading_UE___00__A6A_AUFLinearColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d857760

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFLinearColor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSColorGradingPicker_ColorGrading_UE___00__A6AXAEBUFLinearColor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d857800

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFLinearColor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSColorGradingPicker_ColorGrading_UE___00__A6AXAEBUFLinearColor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 14d857870

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFLinearColor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSColorGradingPicker_ColorGrading_UE___00__A6AXAEBUFLinearColor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d857930

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy,bool>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy,bool>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFLinearColor___ZUFDefaultDelegateUserPolicy___N__6B_
    ;
    *(char *)(puVar3 + 1) = (char)this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSColorGradingPicker_ColorGrading_UE___00__A6AXAEBUFLinearColor___ZUFDefaultDelegateUserPolicy___N__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8579d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy,bool>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy,bool>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFLinearColor___ZUFDefaultDelegateUserPolicy___N__6B_
    ;
    *(char *)(puVar3 + 1) = (char)this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSColorGradingPicker_ColorGrading_UE___00__A6AXAEBUFLinearColor___ZUFDefaultDelegateUserPolicy___N__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 14d857a40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy,bool>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy,bool>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFLinearColor___ZUFDefaultDelegateUserPolicy___N__6B_
    ;
    *(char *)(puVar7 + 1) = (char)this->_padding_;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSColorGradingPicker_ColorGrading_UE___00__A6AXAEBUFLinearColor___ZUFDefaultDelegateUserPolicy___N__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d857b00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSColorGradingPicker_ColorGrading_UE___00__A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d857ba0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSColorGradingPicker_ColorGrading_UE___00__A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 14d857c10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSColorGradingPicker_ColorGrading_UE___00__A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d857cd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float),FDefaultDelegateUserPolicy,bool>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float),FDefaultDelegateUserPolicy,bool>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy___N__6B_;
    *(char *)(puVar3 + 1) = (char)this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSColorGradingPicker_ColorGrading_UE___00__A6AXM_ZUFDefaultDelegateUserPolicy___N__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d857d70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float),FDefaultDelegateUserPolicy,bool>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float),FDefaultDelegateUserPolicy,bool>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy___N__6B_;
    *(char *)(puVar3 + 1) = (char)this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSColorGradingPicker_ColorGrading_UE___00__A6AXM_ZUFDefaultDelegateUserPolicy___N__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 14d857de0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float),FDefaultDelegateUserPolicy,bool>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float),FDefaultDelegateUserPolicy,bool>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy___N__6B_;
    *(char *)(puVar7 + 1) = (char)this->_padding_;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSColorGradingPicker_ColorGrading_UE___00__A6AXM_ZUFDefaultDelegateUserPolicy___N__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d857ea0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXMV__TWeakPtr_VSWidget___00___N1_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSColorGradingPicker_ColorGrading_UE___00__A6AXMV__TWeakPtr_VSWidget___00___N1_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d857f40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXMV__TWeakPtr_VSWidget___00___N1_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSColorGradingPicker_ColorGrading_UE___00__A6AXMV__TWeakPtr_VSWidget___00___N1_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 14d857fb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXMV__TWeakPtr_VSWidget___00___N1_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSColorGradingPicker_ColorGrading_UE___00__A6AXMV__TWeakPtr_VSWidget___00___N1_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d858070

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXMW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSColorGradingPicker_ColorGrading_UE___00__A6AXMW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar3[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar2 = *(undefined8 *)((longlong)this + 0x30);
    puVar3[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d858110

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXMW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSColorGradingPicker_ColorGrading_UE___00__A6AXMW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar3[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar2 = *(undefined8 *)((longlong)this + 0x30);
    puVar3[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 14d858180

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXMW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSColorGradingPicker_ColorGrading_UE___00__A6AXMW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar7[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar3 = *(undefined4 *)((longlong)this + 0x2c);
    uVar4 = *(undefined4 *)((longlong)this + 0x30);
    uVar5 = *(undefined4 *)((longlong)this + 0x34);
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)((longlong)this + 0x28);
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d858240

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSColorGradingPicker_ColorGrading_UE___00__A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8582e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSColorGradingPicker_ColorGrading_UE___00__A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 14d858350

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSColorGradingPicker_ColorGrading_UE___00__A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d858410

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SEnumPropertyValue,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SEnumPropertyValue,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSEnumPropertyValue_PropertyViewer_UE___00__A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d8584b0

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SEnumPropertyValue,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SEnumPropertyValue,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSEnumPropertyValue_PropertyViewer_UE___00__A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 14d858520

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SEnumPropertyValue,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SEnumPropertyValue,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSEnumPropertyValue_PropertyViewer_UE___00__A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8585e0

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SEnumPropertyValue,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SEnumPropertyValue,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__H__6B_;
    *(int *)(puVar3 + 1) = (int)this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSEnumPropertyValue_PropertyViewer_UE___00__A6AXXZUFDefaultDelegateUserPolicy__H__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d858680

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SEnumPropertyValue,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SEnumPropertyValue,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__H__6B_;
    *(int *)(puVar3 + 1) = (int)this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSEnumPropertyValue_PropertyViewer_UE___00__A6AXXZUFDefaultDelegateUserPolicy__H__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 14d8586f0

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SEnumPropertyValue,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SEnumPropertyValue,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__H__6B_;
    *(int *)(puVar7 + 1) = (int)this->_padding_;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSEnumPropertyValue_PropertyViewer_UE___00__A6AXXZUFDefaultDelegateUserPolicy__H__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8587b0

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(double),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(double),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXN_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSNumericPropertyValue_PropertyViewer_UE___00__A6AXN_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d858850

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(double),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(double),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXN_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSNumericPropertyValue_PropertyViewer_UE___00__A6AXN_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 14d8588c0

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(double),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(double),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AXN_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSNumericPropertyValue_PropertyViewer_UE___00__A6AXN_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d858980

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(double,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXNW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSNumericPropertyValue_PropertyViewer_UE___00__A6AXNW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar3[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar2 = *(undefined8 *)((longlong)this + 0x30);
    puVar3[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d858a20

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(double,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXNW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSNumericPropertyValue_PropertyViewer_UE___00__A6AXNW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar3[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar2 = *(undefined8 *)((longlong)this + 0x30);
    puVar3[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 14d858a90

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(double,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXNW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSNumericPropertyValue_PropertyViewer_UE___00__A6AXNW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar7[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar3 = *(undefined4 *)((longlong)this + 0x2c);
    uVar4 = *(undefined4 *)((longlong)this + 0x30);
    uVar5 = *(undefined4 *)((longlong)this + 0x34);
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)((longlong)this + 0x28);
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d858b50

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(__int64),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(__int64),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AX_J_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSNumericPropertyValue_PropertyViewer_UE___00__A6AX_J_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d858bf0

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(__int64),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(__int64),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AX_J_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSNumericPropertyValue_PropertyViewer_UE___00__A6AX_J_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 14d858c60

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(__int64),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(__int64),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AX_J_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSNumericPropertyValue_PropertyViewer_UE___00__A6AX_J_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d858d20

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(__int64,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AX_JW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSNumericPropertyValue_PropertyViewer_UE___00__A6AX_JW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar3[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar2 = *(undefined8 *)((longlong)this + 0x30);
    puVar3[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d858dc0

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(__int64,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AX_JW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSNumericPropertyValue_PropertyViewer_UE___00__A6AX_JW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar3[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar2 = *(undefined8 *)((longlong)this + 0x30);
    puVar3[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 14d858e30

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(__int64,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AX_JW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSNumericPropertyValue_PropertyViewer_UE___00__A6AX_JW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar7[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar3 = *(undefined4 *)((longlong)this + 0x2c);
    uVar4 = *(undefined4 *)((longlong)this + 0x30);
    uVar5 = *(undefined4 *)((longlong)this + 0x34);
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)((longlong)this + 0x28);
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d858ef0

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AX_K_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSNumericPropertyValue_PropertyViewer_UE___00__A6AX_K_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d858f90

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AX_K_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSNumericPropertyValue_PropertyViewer_UE___00__A6AX_K_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar3[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar3[5] = *(undefined8 *)&this->MethodPtr;
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 14d859000

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AX_K_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSNumericPropertyValue_PropertyViewer_UE___00__A6AX_K_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = (this->UserObject).Object;
    pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
    puVar7[4] = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
      UNLOCK();
    }
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar5 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d8590c0

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(unsigned___int64,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AX_KW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSNumericPropertyValue_PropertyViewer_UE___00__A6AX_KW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar3[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar2 = *(undefined8 *)((longlong)this + 0x30);
    puVar3[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d859160

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(unsigned___int64,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AX_KW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSNumericPropertyValue_PropertyViewer_UE___00__A6AX_KW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar3[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar2 = *(undefined8 *)((longlong)this + 0x30);
    puVar3[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 14d8591d0

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(unsigned___int64,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AX_KW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSNumericPropertyValue_PropertyViewer_UE___00__A6AX_KW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar7[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar3 = *(undefined4 *)((longlong)this + 0x2c);
    uVar4 = *(undefined4 *)((longlong)this + 0x30);
    uVar5 = *(undefined4 *)((longlong)this + 0x34);
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)((longlong)this + 0x28);
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d859290

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SStringPropertyValue,1,void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSStringPropertyValue_PropertyViewer_UE___00__A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar3[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar2 = *(undefined8 *)((longlong)this + 0x30);
    puVar3[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar3[6] = uVar2;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d859330

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SStringPropertyValue,1,void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSStringPropertyValue_PropertyViewer_UE___00__A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar3[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar2 = *(undefined8 *)((longlong)this + 0x30);
    puVar3[5] = *(undefined8 *)((longlong)this + 0x28);
    puVar3[6] = uVar2;
  }
  return;
}

// CreateCopy @ 14d8593a0

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SStringPropertyValue,1,void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSStringPropertyValue_PropertyViewer_UE___00__A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = *(undefined8 *)((longlong)this + 0x18);
    lVar1 = *(longlong *)((longlong)this + 0x20);
    puVar7[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar3 = *(undefined4 *)((longlong)this + 0x2c);
    uVar4 = *(undefined4 *)((longlong)this + 0x30);
    uVar5 = *(undefined4 *)((longlong)this + 0x34);
    *(undefined4 *)(puVar7 + 5) = *(undefined4 *)((longlong)this + 0x28);
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar3;
    *(undefined4 *)(puVar7 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x34) = uVar5;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14d85d080

FSlateColor * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
          *this,FSlateColor *__return_storage_ptr__)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *pSVar3;
  STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *pSVar4;
  bool bVar5;
  STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *local_res8;
  
  pSVar3 = (STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)
           (this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14d85d0c1;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->_padding_;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pSVar4 = pSVar3;
  }
LAB_14d85d0c1:
  pSVar3 = UE::Core::Private::
           DereferenceIfNecessary<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
             __return_storage_ptr__);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return __return_storage_ptr__;
}

// Execute @ 14d85d110

FSlateBrush * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *pSVar3;
  FSlateBrush *pFVar4;
  STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *pSVar5;
  bool bVar6;
  STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *local_res8;
  
  pSVar3 = (STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)
           (this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0;
  pSVar5 = pSVar3;
  if (pSVar3 != (STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar5 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14d85d141;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->_padding_;
      bVar6 = aVar1 == aVar2;
      if (bVar6) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar6);
    local_res8 = (this->UserObject).Object;
    pSVar5 = pSVar3;
  }
LAB_14d85d141:
  pSVar3 = UE::Core::Private::
           DereferenceIfNecessary<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_*_&>
                     (&local_res8);
  pFVar4 = (FSlateBrush *)
           (**(code **)&this->MethodPtr)
                     ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8)
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pFVar4;
}

// Execute @ 14d85d190

ECheckBoxState __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SBoolPropertyValue_const_,1,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(void *this)

{
  atomic<int> aVar1;
  ECheckBoxState EVar2;
  atomic<int> aVar3;
  SBoolPropertyValue *pSVar4;
  SBoolPropertyValue *pSVar5;
  bool bVar6;
  SBoolPropertyValue *local_res8;
  
  pSVar4 = *(SBoolPropertyValue **)((longlong)this + 0x20);
  local_res8 = (SBoolPropertyValue *)0x0;
  pSVar5 = pSVar4;
  if (pSVar4 != (SBoolPropertyValue *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar4->_padding_;
    do {
      pSVar5 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14d85d1c1;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar4->_padding_;
      bVar6 = aVar1 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar4->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar3 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar3;
    } while (!bVar6);
    local_res8 = *(SBoolPropertyValue **)((longlong)this + 0x18);
    pSVar5 = pSVar4;
  }
LAB_14d85d1c1:
  pSVar4 = UE::Core::Private::
           DereferenceIfNecessary<UE::PropertyViewer::SBoolPropertyValue,UE::PropertyViewer::SBoolPropertyValue_*_&>
                     (&local_res8);
  EVar2 = (**(code **)((longlong)this + 0x28))
                    ((longlong)&pSVar4->_padding_ + (longlong)*(int *)((longlong)this + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return EVar2;
}

// Execute @ 14d85d210

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
          *this,FText *__return_storage_ptr__)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SColorGradingComponentViewer *pSVar3;
  SColorGradingComponentViewer *pSVar4;
  bool bVar5;
  SColorGradingComponentViewer *local_res8;
  
  pSVar3 = (SColorGradingComponentViewer *)(this->UserObject).WeakReferenceCount.ReferenceController
  ;
  local_res8 = (SColorGradingComponentViewer *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SColorGradingComponentViewer *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14d85d251;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->_padding_;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pSVar4 = pSVar3;
  }
LAB_14d85d251:
  pSVar3 = UE::Core::Private::
           DereferenceIfNecessary<UE::ColorGrading::SColorGradingComponentViewer,UE::ColorGrading::SColorGradingComponentViewer_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
             __return_storage_ptr__);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return __return_storage_ptr__;
}

// Execute @ 14d85d2a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

float __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  code *pcVar1;
  undefined8 uVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  SColorGradingComponentViewer *pSVar5;
  SColorGradingComponentViewer *pSVar6;
  bool bVar7;
  float fVar8;
  SColorGradingComponentViewer *local_res8 [4];
  
  pSVar5 = (SColorGradingComponentViewer *)(this->UserObject).WeakReferenceCount.ReferenceController
  ;
  local_res8[0] = (SColorGradingComponentViewer *)0x0;
  pSVar6 = pSVar5;
  if (pSVar5 != (SColorGradingComponentViewer *)0x0) {
    aVar3 = *(atomic<int> *)&pSVar5->_padding_;
    do {
      pSVar6 = local_res8[0];
      if (aVar3 == (atomic<int>)0x0) goto LAB_14d85d2d1;
      LOCK();
      aVar4 = *(atomic<int> *)&pSVar5->_padding_;
      bVar7 = aVar3 == aVar4;
      if (bVar7) {
        *(atomic<int> *)&pSVar5->_padding_ = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar7);
    local_res8[0] = (this->UserObject).Object;
    pSVar6 = pSVar5;
  }
LAB_14d85d2d1:
  pcVar1 = *(code **)&this->MethodPtr;
  uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
  pSVar5 = UE::Core::Private::
           DereferenceIfNecessary<UE::ColorGrading::SColorGradingComponentViewer,UE::ColorGrading::SColorGradingComponentViewer_*_&>
                     (local_res8);
  fVar8 = (float)(*pcVar1)((longlong)&pSVar5->_padding_ + (longlong)(int)uVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar6);
  return fVar8;
}

// Execute @ 14d85d330

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  atomic<int> aVar1;
  undefined1 uVar2;
  atomic<int> aVar3;
  SColorGradingComponentViewer *pSVar4;
  SColorGradingComponentViewer *pSVar5;
  bool bVar6;
  SColorGradingComponentViewer *local_res8;
  
  pSVar4 = (SColorGradingComponentViewer *)(this->UserObject).WeakReferenceCount.ReferenceController
  ;
  local_res8 = (SColorGradingComponentViewer *)0x0;
  pSVar5 = pSVar4;
  if (pSVar4 != (SColorGradingComponentViewer *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar4->_padding_;
    do {
      pSVar5 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14d85d361;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar4->_padding_;
      bVar6 = aVar1 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar4->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar3 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar3;
    } while (!bVar6);
    local_res8 = (this->UserObject).Object;
    pSVar5 = pSVar4;
  }
LAB_14d85d361:
  pSVar4 = UE::Core::Private::
           DereferenceIfNecessary<UE::ColorGrading::SColorGradingComponentViewer,UE::ColorGrading::SColorGradingComponentViewer_*_&>
                     (&local_res8);
  uVar2 = (**(code **)&this->MethodPtr)
                    ((longlong)&pSVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return (bool)uVar2;
}

// Execute @ 14d85d3b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TOptional<float> __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingPicker_const_,1,TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingPicker_const_,1,TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SColorGradingPicker *pSVar3;
  TOptional<float> in_RDX;
  SColorGradingPicker *pSVar4;
  bool bVar5;
  SColorGradingPicker *local_res8;
  
  pSVar3 = (SColorGradingPicker *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SColorGradingPicker *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SColorGradingPicker *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->field_0x8;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14d85d3f1;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->field_0x8;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->field_0x8 = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pSVar4 = pSVar3;
  }
LAB_14d85d3f1:
  pSVar3 = UE::Core::Private::
           DereferenceIfNecessary<UE::ColorGrading::SColorGradingPicker,UE::ColorGrading::SColorGradingPicker_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)(&pSVar3->field_0x0 + *(int *)&(this->MethodPtr).field_0x8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return in_RDX;
}

// Execute @ 14d85d440

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingPicker_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingPicker_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  atomic<int> aVar1;
  undefined1 uVar2;
  atomic<int> aVar3;
  SColorGradingPicker *pSVar4;
  SColorGradingPicker *pSVar5;
  bool bVar6;
  SColorGradingPicker *local_res8;
  
  pSVar4 = (SColorGradingPicker *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SColorGradingPicker *)0x0;
  pSVar5 = pSVar4;
  if (pSVar4 != (SColorGradingPicker *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar4->field_0x8;
    do {
      pSVar5 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14d85d471;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar4->field_0x8;
      bVar6 = aVar1 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar4->field_0x8 = (atomic<int>)((int)aVar1 + 1);
        aVar3 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar3;
    } while (!bVar6);
    local_res8 = (this->UserObject).Object;
    pSVar5 = pSVar4;
  }
LAB_14d85d471:
  pSVar4 = UE::Core::Private::
           DereferenceIfNecessary<UE::ColorGrading::SColorGradingPicker,UE::ColorGrading::SColorGradingPicker_*_&>
                     (&local_res8);
  uVar2 = (**(code **)&this->MethodPtr)(&pSVar4->field_0x0 + *(int *)&(this->MethodPtr).field_0x8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return (bool)uVar2;
}

// Execute @ 14d85d4c0

FText * __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SDefaultPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SDefaultPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
          *this,FText *__return_storage_ptr__)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SDefaultPropertyValue *pSVar3;
  SDefaultPropertyValue *pSVar4;
  bool bVar5;
  SDefaultPropertyValue *local_res8;
  
  pSVar3 = (SDefaultPropertyValue *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SDefaultPropertyValue *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SDefaultPropertyValue *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14d85d501;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->_padding_;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pSVar4 = pSVar3;
  }
LAB_14d85d501:
  pSVar3 = UE::Core::Private::
           DereferenceIfNecessary<UE::PropertyViewer::SDefaultPropertyValue,UE::PropertyViewer::SDefaultPropertyValue_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
             __return_storage_ptr__);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return __return_storage_ptr__;
}

// Execute @ 14d85d550

FText * __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SEnumPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SEnumPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
          *this,FText *__return_storage_ptr__)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SEnumPropertyValue *pSVar3;
  SEnumPropertyValue *pSVar4;
  bool bVar5;
  SEnumPropertyValue *local_res8;
  
  pSVar3 = (SEnumPropertyValue *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SEnumPropertyValue *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SEnumPropertyValue *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14d85d591;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->_padding_;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pSVar4 = pSVar3;
  }
LAB_14d85d591:
  pSVar3 = UE::Core::Private::
           DereferenceIfNecessary<UE::PropertyViewer::SEnumPropertyValue,UE::PropertyViewer::SEnumPropertyValue_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
             __return_storage_ptr__);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return __return_storage_ptr__;
}

// Execute @ 14d85d5e0

EVisibility __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
::Execute(TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
          *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SListViewPinnedRowWidget *pSVar3;
  TEnumAsByte<EVisibility::Private> in_DL;
  SListViewPinnedRowWidget *pSVar4;
  bool bVar5;
  SListViewPinnedRowWidget *local_res8;
  
  pSVar3 = (SListViewPinnedRowWidget *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SListViewPinnedRowWidget *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SListViewPinnedRowWidget *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14d85d621;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->_padding_;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pSVar4 = pSVar3;
  }
LAB_14d85d621:
  pSVar3 = UE::Core::Private::
           DereferenceIfNecessary<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget,SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)in_DL.Value;
}

// Execute @ 14d85d670

EVisibility __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
::Execute(TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
          *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SListViewPinnedRowWidget *pSVar3;
  TEnumAsByte<EVisibility::Private> in_DL;
  SListViewPinnedRowWidget *pSVar4;
  bool bVar5;
  SListViewPinnedRowWidget *local_res8;
  
  pSVar3 = (SListViewPinnedRowWidget *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SListViewPinnedRowWidget *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SListViewPinnedRowWidget *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14d85d6b1;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->_padding_;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pSVar4 = pSVar3;
  }
LAB_14d85d6b1:
  pSVar3 = UE::Core::Private::
           DereferenceIfNecessary<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget,SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)in_DL.Value;
}

// Execute @ 14d85d710

double __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,double___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,double___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  code *pcVar1;
  undefined8 uVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  SNumericPropertyValue *pSVar5;
  SNumericPropertyValue *pSVar6;
  bool bVar7;
  double dVar8;
  SNumericPropertyValue *local_res8 [4];
  
  pSVar5 = (SNumericPropertyValue *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8[0] = (SNumericPropertyValue *)0x0;
  pSVar6 = pSVar5;
  if (pSVar5 != (SNumericPropertyValue *)0x0) {
    aVar3 = *(atomic<int> *)&pSVar5->_padding_;
    do {
      pSVar6 = local_res8[0];
      if (aVar3 == (atomic<int>)0x0) goto LAB_14d85d741;
      LOCK();
      aVar4 = *(atomic<int> *)&pSVar5->_padding_;
      bVar7 = aVar3 == aVar4;
      if (bVar7) {
        *(atomic<int> *)&pSVar5->_padding_ = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar7);
    local_res8[0] = (this->UserObject).Object;
    pSVar6 = pSVar5;
  }
LAB_14d85d741:
  pcVar1 = *(code **)&this->MethodPtr;
  uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
  pSVar5 = UE::Core::Private::
           DereferenceIfNecessary<UE::PropertyViewer::SNumericPropertyValue,UE::PropertyViewer::SNumericPropertyValue_*_&>
                     (local_res8);
  dVar8 = (double)(*pcVar1)((longlong)&pSVar5->_padding_ + (longlong)(int)uVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar6);
  return dVar8;
}

// Execute @ 14d85d7a0

long64 __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,__int64___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,__int64___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SNumericPropertyValue *pSVar3;
  long64 lVar4;
  SNumericPropertyValue *pSVar5;
  bool bVar6;
  SNumericPropertyValue *local_res8;
  
  pSVar3 = (SNumericPropertyValue *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SNumericPropertyValue *)0x0;
  pSVar5 = pSVar3;
  if (pSVar3 != (SNumericPropertyValue *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar5 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14d85d7d1;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->_padding_;
      bVar6 = aVar1 == aVar2;
      if (bVar6) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar6);
    local_res8 = (this->UserObject).Object;
    pSVar5 = pSVar3;
  }
LAB_14d85d7d1:
  pSVar3 = UE::Core::Private::
           DereferenceIfNecessary<UE::PropertyViewer::SNumericPropertyValue,UE::PropertyViewer::SNumericPropertyValue_*_&>
                     (&local_res8);
  lVar4 = (**(code **)&this->MethodPtr)
                    ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return lVar4;
}

// Execute @ 14d85d820

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,unsigned___int64___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,unsigned___int64___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SNumericPropertyValue *pSVar3;
  ulong64 uVar4;
  SNumericPropertyValue *pSVar5;
  bool bVar6;
  SNumericPropertyValue *local_res8;
  
  pSVar3 = (SNumericPropertyValue *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SNumericPropertyValue *)0x0;
  pSVar5 = pSVar3;
  if (pSVar3 != (SNumericPropertyValue *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar5 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14d85d851;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->_padding_;
      bVar6 = aVar1 == aVar2;
      if (bVar6) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar6);
    local_res8 = (this->UserObject).Object;
    pSVar5 = pSVar3;
  }
LAB_14d85d851:
  pSVar3 = UE::Core::Private::
           DereferenceIfNecessary<UE::PropertyViewer::SNumericPropertyValue,UE::PropertyViewer::SNumericPropertyValue_*_&>
                     (&local_res8);
  uVar4 = (**(code **)&this->MethodPtr)
                    ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return uVar4;
}

// Execute @ 14d85d8a0

FText * __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SStringPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SStringPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
          *this,FText *__return_storage_ptr__)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SStringPropertyValue *pSVar3;
  SStringPropertyValue *pSVar4;
  bool bVar5;
  SStringPropertyValue *local_res8;
  
  pSVar3 = (SStringPropertyValue *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SStringPropertyValue *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SStringPropertyValue *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14d85d8e1;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->_padding_;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pSVar4 = pSVar3;
  }
LAB_14d85d8e1:
  pSVar3 = UE::Core::Private::
           DereferenceIfNecessary<UE::PropertyViewer::SStringPropertyValue,UE::PropertyViewer::SStringPropertyValue_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
             __return_storage_ptr__);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return __return_storage_ptr__;
}

// Execute @ 14d85d930

void __thiscall
TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
          *this,TSharedRef<SHeaderRow,1> *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SMultiColumnTableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *pSVar3;
  SMultiColumnTableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *pSVar4;
  bool bVar5;
  SMultiColumnTableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *local_res8;
  
  pSVar3 = (SMultiColumnTableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)
           (this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SMultiColumnTableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SMultiColumnTableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0)
  {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14d85d971;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->_padding_;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pSVar4 = pSVar3;
  }
LAB_14d85d971:
  pSVar3 = UE::Core::Private::
           DereferenceIfNecessary<SMultiColumnTableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,SMultiColumnTableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return;
}

// Execute @ 14d85d9c0

void __thiscall
TBaseSPMethodDelegateInstance<0,TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
          *this,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *param_1,
         TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>
         *param_2)

{
  pmf_820a2be8 pVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *local_res8;
  FTreeNode *local_18;
  TReferenceControllerBase<1> *local_10;
  
  pTVar5 = (this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d85da00;
      }
      LOCK();
      aVar3 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    local_res8 = (this->UserObject).Object;
  }
LAB_14d85da00:
  pTVar4 = UE::Core::Private::
           DereferenceIfNecessary<TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_*_&>
                     (&local_res8);
  local_18 = param_1->Object;
  pVar1 = this->MethodPtr;
  local_10 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FTreeNode *)0x0;
  (*(code *)pVar1)(pTVar4,&local_18,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Execute @ 14d85da80

TSharedPtr<SWidget,1> * __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
          *this,TSharedPtr<SWidget,1> *__return_storage_ptr__)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FPropertyViewerImpl *pFVar3;
  FPropertyViewerImpl *pFVar4;
  bool bVar5;
  FPropertyViewerImpl *local_res8;
  
  pFVar3 = (FPropertyViewerImpl *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (FPropertyViewerImpl *)0x0;
  pFVar4 = pFVar3;
  if (pFVar3 != (FPropertyViewerImpl *)0x0) {
    aVar1 = *(atomic<int> *)&pFVar3->_padding_;
    do {
      pFVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14d85dac1;
      LOCK();
      aVar2 = *(atomic<int> *)&pFVar3->_padding_;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pFVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pFVar4 = pFVar3;
  }
LAB_14d85dac1:
  pFVar3 = UE::Core::Private::
           DereferenceIfNecessary<UE::PropertyViewer::Private::FPropertyViewerImpl,UE::PropertyViewer::Private::FPropertyViewerImpl_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar3,__return_storage_ptr__);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar4);
  return __return_storage_ptr__;
}

// Execute @ 14d85db10

TSharedRef<ITableRow,1> * __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
          *this,TSharedRef<ITableRow,1> *__return_storage_ptr__,
         TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *param_1,
         TSharedRef<STableViewBase,1> *param_2)

{
  pmf_43452e41 pVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FPropertyViewerImpl *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  FPropertyViewerImpl *local_res8;
  FTreeNode *local_28;
  TReferenceControllerBase<1> *local_20;
  
  pTVar5 = (this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (FPropertyViewerImpl *)0x0;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d85db51;
      }
      LOCK();
      aVar3 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    local_res8 = (this->UserObject).Object;
  }
LAB_14d85db51:
  pFVar4 = UE::Core::Private::
           DereferenceIfNecessary<UE::PropertyViewer::Private::FPropertyViewerImpl,UE::PropertyViewer::Private::FPropertyViewerImpl_*_&>
                     (&local_res8);
  local_28 = param_1->Object;
  pVar1 = this->MethodPtr;
  local_20 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FTreeNode *)0x0;
  (*(code *)pVar1)(pFVar4,__return_storage_ptr__,&local_28,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// Execute @ 14d85dbd0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>
::Execute(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>
          *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  pmf_fa9bca1f pVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FPropertyViewerImpl *pFVar4;
  FPropertyViewerImpl *pFVar5;
  bool bVar6;
  FPropertyViewerImpl *local_res8;
  longlong local_28;
  longlong local_20;
  
  pFVar4 = (FPropertyViewerImpl *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (FPropertyViewerImpl *)0x0;
  pFVar5 = pFVar4;
  if (pFVar4 != (FPropertyViewerImpl *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar4->_padding_;
    do {
      pFVar5 = local_res8;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14d85dc12;
      LOCK();
      aVar3 = *(atomic<int> *)&pFVar4->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pFVar4->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    local_res8 = (this->UserObject).Object;
    pFVar5 = pFVar4;
  }
LAB_14d85dc12:
  pFVar4 = UE::Core::Private::
           DereferenceIfNecessary<UE::PropertyViewer::Private::FPropertyViewerImpl,UE::PropertyViewer::Private::FPropertyViewerImpl_*_&>
                     (&local_res8);
  local_28 = this->_padding_;
  pVar1 = this->MethodPtr;
  local_20 = this->_padding_;
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  (*(code *)pVar1)(pFVar4,__return_storage_ptr__,param_1,param_2,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return __return_storage_ptr__;
}

// Execute @ 14d85dc90

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
          *this,FText *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FPropertyViewerImpl *pFVar3;
  FPropertyViewerImpl *pFVar4;
  bool bVar5;
  FPropertyViewerImpl *local_res8;
  
  pFVar3 = (FPropertyViewerImpl *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (FPropertyViewerImpl *)0x0;
  pFVar4 = pFVar3;
  if (pFVar3 != (FPropertyViewerImpl *)0x0) {
    aVar1 = *(atomic<int> *)&pFVar3->_padding_;
    do {
      pFVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14d85dcd1;
      LOCK();
      aVar2 = *(atomic<int> *)&pFVar3->_padding_;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pFVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pFVar4 = pFVar3;
  }
LAB_14d85dcd1:
  pFVar3 = UE::Core::Private::
           DereferenceIfNecessary<UE::PropertyViewer::Private::FPropertyViewerImpl,UE::PropertyViewer::Private::FPropertyViewerImpl_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar3,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar4);
  return;
}

// Execute @ 14d85dd20

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>),FDefaultDelegateUserPolicy>
          *this,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *param_1)

{
  pmf_b066fb78 pVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FPropertyViewerImpl *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  FPropertyViewerImpl *local_res8;
  FTreeNode *local_18;
  TReferenceControllerBase<1> *local_10;
  
  pTVar5 = (this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (FPropertyViewerImpl *)0x0;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d85dd60;
      }
      LOCK();
      aVar3 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    local_res8 = (this->UserObject).Object;
  }
LAB_14d85dd60:
  pFVar4 = UE::Core::Private::
           DereferenceIfNecessary<UE::PropertyViewer::Private::FPropertyViewerImpl,UE::PropertyViewer::Private::FPropertyViewerImpl_*_&>
                     (&local_res8);
  local_18 = param_1->Object;
  pVar1 = this->MethodPtr;
  local_10 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FTreeNode *)0x0;
  (*(code *)pVar1)(pFVar4,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Execute @ 14d85ddd0

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
          *this,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *param_1,
         TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>
         *param_2)

{
  pmf_4542d425 pVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FPropertyViewerImpl *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  FPropertyViewerImpl *local_res8;
  FTreeNode *local_18;
  TReferenceControllerBase<1> *local_10;
  
  pTVar5 = (this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (FPropertyViewerImpl *)0x0;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d85de10;
      }
      LOCK();
      aVar3 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    local_res8 = (this->UserObject).Object;
  }
LAB_14d85de10:
  pFVar4 = UE::Core::Private::
           DereferenceIfNecessary<UE::PropertyViewer::Private::FPropertyViewerImpl,UE::PropertyViewer::Private::FPropertyViewerImpl_*_&>
                     (&local_res8);
  local_18 = param_1->Object;
  pVar1 = this->MethodPtr;
  local_10 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FTreeNode *)0x0;
  (*(code *)pVar1)(pFVar4,&local_18,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Execute @ 14d85de90

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
          *this,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *param_1,
         TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  pmf_41bbe624 pVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FPropertyViewerImpl *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  FPropertyViewerImpl *local_res8;
  FTreeNode *local_18;
  TReferenceControllerBase<1> *local_10;
  
  pTVar5 = (this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (FPropertyViewerImpl *)0x0;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d85ded0;
      }
      LOCK();
      aVar3 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    local_res8 = (this->UserObject).Object;
  }
LAB_14d85ded0:
  pFVar4 = UE::Core::Private::
           DereferenceIfNecessary<UE::PropertyViewer::Private::FPropertyViewerImpl,UE::PropertyViewer::Private::FPropertyViewerImpl_*_&>
                     (&local_res8);
  local_18 = param_1->Object;
  pVar1 = this->MethodPtr;
  local_10 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FTreeNode *)0x0;
  (*(code *)pVar1)(pFVar4,&local_18,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Execute @ 14d85df50

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::Execute(void *this,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *param_1,Type param_2)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FPropertyViewerImpl *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  FPropertyViewerImpl *local_res8;
  FTreeNode *local_18;
  TReferenceControllerBase<1> *local_10;
  
  pTVar5 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  local_res8 = (FPropertyViewerImpl *)0x0;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d85df90;
      }
      LOCK();
      aVar3 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    local_res8 = *(FPropertyViewerImpl **)((longlong)this + 0x18);
  }
LAB_14d85df90:
  pFVar4 = UE::Core::Private::
           DereferenceIfNecessary<UE::PropertyViewer::Private::FPropertyViewerImpl,UE::PropertyViewer::Private::FPropertyViewerImpl_*_&>
                     (&local_res8);
  local_18 = param_1->Object;
  pcVar1 = *(code **)((longlong)this + 0x28);
  local_10 = (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FTreeNode *)0x0;
  (*pcVar1)(pFVar4,&local_18,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Execute @ 14d85e010

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SBoolPropertyValue,1,void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>
::Execute(void *this,ECheckBoxState param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SBoolPropertyValue *pSVar3;
  SBoolPropertyValue *pSVar4;
  bool bVar5;
  SBoolPropertyValue *local_res8;
  
  pSVar3 = *(SBoolPropertyValue **)((longlong)this + 0x20);
  local_res8 = (SBoolPropertyValue *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SBoolPropertyValue *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14d85e051;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->_padding_;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = *(SBoolPropertyValue **)((longlong)this + 0x18);
    pSVar4 = pSVar3;
  }
LAB_14d85e051:
  pSVar3 = UE::Core::Private::
           DereferenceIfNecessary<UE::PropertyViewer::SBoolPropertyValue,UE::PropertyViewer::SBoolPropertyValue_*_&>
                     (&local_res8);
  (**(code **)((longlong)this + 0x28))
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)((longlong)this + 0x30),param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return;
}

// Execute @ 14d85e0a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FLinearColor * __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
          *this,FLinearColor *__return_storage_ptr__)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SColorGradingPicker *pSVar3;
  SColorGradingPicker *pSVar4;
  bool bVar5;
  SColorGradingPicker *local_res8;
  
  pSVar3 = (SColorGradingPicker *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SColorGradingPicker *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SColorGradingPicker *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->field_0x8;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14d85e0e1;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->field_0x8;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->field_0x8 = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pSVar4 = pSVar3;
  }
LAB_14d85e0e1:
  pSVar3 = UE::Core::Private::
           DereferenceIfNecessary<UE::ColorGrading::SColorGradingPicker,UE::ColorGrading::SColorGradingPicker_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            (&pSVar3->field_0x0 + *(int *)&(this->MethodPtr).field_0x8,__return_storage_ptr__);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return __return_storage_ptr__;
}

// Execute @ 14d85e130

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy>
          *this,FLinearColor *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SColorGradingPicker *pSVar3;
  SColorGradingPicker *pSVar4;
  bool bVar5;
  SColorGradingPicker *local_res8;
  
  pSVar3 = (SColorGradingPicker *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SColorGradingPicker *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SColorGradingPicker *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->field_0x8;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14d85e171;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->field_0x8;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->field_0x8 = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pSVar4 = pSVar3;
  }
LAB_14d85e171:
  pSVar3 = UE::Core::Private::
           DereferenceIfNecessary<UE::ColorGrading::SColorGradingPicker,UE::ColorGrading::SColorGradingPicker_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)(&pSVar3->field_0x0 + *(int *)&(this->MethodPtr).field_0x8,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return;
}

// Execute @ 14d85e1c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy,bool>
::Execute(TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy,bool>
          *this,FLinearColor *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SColorGradingPicker *pSVar3;
  SColorGradingPicker *pSVar4;
  bool bVar5;
  SColorGradingPicker *local_res8;
  
  pSVar3 = (SColorGradingPicker *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SColorGradingPicker *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SColorGradingPicker *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->field_0x8;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14d85e201;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->field_0x8;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->field_0x8 = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pSVar4 = pSVar3;
  }
LAB_14d85e201:
  pSVar3 = UE::Core::Private::
           DereferenceIfNecessary<UE::ColorGrading::SColorGradingPicker,UE::ColorGrading::SColorGradingPicker_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            (&pSVar3->field_0x0 + *(int *)&(this->MethodPtr).field_0x8,param_1,(char)this->_padding_
            );
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return;
}

// Execute @ 14d85e250

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float),FDefaultDelegateUserPolicy>
          *this,float param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  SColorGradingPicker *pSVar5;
  SColorGradingPicker *pSVar6;
  bool bVar7;
  SColorGradingPicker *local_res8 [4];
  
  pSVar5 = (SColorGradingPicker *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8[0] = (SColorGradingPicker *)0x0;
  pSVar6 = pSVar5;
  if (pSVar5 != (SColorGradingPicker *)0x0) {
    aVar3 = *(atomic<int> *)&pSVar5->field_0x8;
    do {
      pSVar6 = local_res8[0];
      if (aVar3 == (atomic<int>)0x0) goto LAB_14d85e291;
      LOCK();
      aVar4 = *(atomic<int> *)&pSVar5->field_0x8;
      bVar7 = aVar3 == aVar4;
      if (bVar7) {
        *(atomic<int> *)&pSVar5->field_0x8 = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar7);
    local_res8[0] = (this->UserObject).Object;
    pSVar6 = pSVar5;
  }
LAB_14d85e291:
  pcVar1 = *(code **)&this->MethodPtr;
  uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
  pSVar5 = UE::Core::Private::
           DereferenceIfNecessary<UE::ColorGrading::SColorGradingPicker,UE::ColorGrading::SColorGradingPicker_*_&>
                     (local_res8);
  (*pcVar1)(&pSVar5->field_0x0 + (int)uVar2,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar6);
  return;
}

// Execute @ 14d85e2f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float),FDefaultDelegateUserPolicy,bool>
::Execute(TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float),FDefaultDelegateUserPolicy,bool>
          *this,float param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SColorGradingPicker *pSVar3;
  SColorGradingPicker *pSVar4;
  bool bVar5;
  SColorGradingPicker *local_res8;
  
  pSVar3 = (SColorGradingPicker *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SColorGradingPicker *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SColorGradingPicker *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->field_0x8;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14d85e331;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->field_0x8;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->field_0x8 = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pSVar4 = pSVar3;
  }
LAB_14d85e331:
  pSVar3 = UE::Core::Private::
           DereferenceIfNecessary<UE::ColorGrading::SColorGradingPicker,UE::ColorGrading::SColorGradingPicker_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            (&pSVar3->field_0x0 + *(int *)&(this->MethodPtr).field_0x8,param_1,(char)this->_padding_
            );
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return;
}

// Execute @ 14d85e390

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>
          *this,float param_1,TWeakPtr<SWidget,1> *param_2,bool param_3,bool param_4)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  undefined8 uVar5;
  atomic<int> aVar6;
  SColorGradingPicker *pSVar7;
  SColorGradingPicker *pSVar8;
  bool bVar9;
  SColorGradingPicker *local_res8;
  SWidget *local_38;
  TReferenceControllerBase<1> *local_30;
  
  pSVar7 = (SColorGradingPicker *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar8 = pSVar7;
  local_res8 = (SColorGradingPicker *)0x0;
  if (pSVar7 != (SColorGradingPicker *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar7->field_0x8;
    do {
      pSVar8 = (SColorGradingPicker *)0x0;
      local_res8 = (SColorGradingPicker *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14d85e3e5;
      LOCK();
      aVar6 = *(atomic<int> *)&pSVar7->field_0x8;
      bVar9 = aVar2 == aVar6;
      if (bVar9) {
        *(atomic<int> *)&pSVar7->field_0x8 = (atomic<int>)((int)aVar2 + 1);
        aVar6 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar6;
    } while (!bVar9);
    pSVar8 = pSVar7;
    local_res8 = (this->UserObject).Object;
  }
LAB_14d85e3e5:
  pcVar4 = *(code **)&this->MethodPtr;
  uVar5 = *(undefined8 *)&(this->MethodPtr).field_0x8;
  local_38 = param_2->Object;
  local_30 = (param_2->WeakReferenceCount).ReferenceController;
  (param_2->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->Object = (SWidget *)0x0;
  pSVar7 = UE::Core::Private::
           DereferenceIfNecessary<UE::ColorGrading::SColorGradingPicker,UE::ColorGrading::SColorGradingPicker_*_&>
                     (&local_res8);
  (*pcVar4)(&pSVar7->field_0x0 + (int)uVar5,param_1,&local_38,param_3,param_4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar8);
  pTVar3 = (param_2->WeakReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  return;
}

// Execute @ 14d85e4a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::Execute(void *this,float param_1,Type param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  SColorGradingPicker *pSVar5;
  SColorGradingPicker *pSVar6;
  bool bVar7;
  SColorGradingPicker *local_res8;
  
  pSVar5 = *(SColorGradingPicker **)((longlong)this + 0x20);
  local_res8 = (SColorGradingPicker *)0x0;
  pSVar6 = pSVar5;
  if (pSVar5 != (SColorGradingPicker *)0x0) {
    aVar3 = *(atomic<int> *)&pSVar5->field_0x8;
    do {
      pSVar6 = local_res8;
      if (aVar3 == (atomic<int>)0x0) goto LAB_14d85e4e1;
      LOCK();
      aVar4 = *(atomic<int> *)&pSVar5->field_0x8;
      bVar7 = aVar3 == aVar4;
      if (bVar7) {
        *(atomic<int> *)&pSVar5->field_0x8 = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar7);
    local_res8 = *(SColorGradingPicker **)((longlong)this + 0x18);
    pSVar6 = pSVar5;
  }
LAB_14d85e4e1:
  pcVar1 = *(code **)((longlong)this + 0x28);
  uVar2 = *(undefined8 *)((longlong)this + 0x30);
  pSVar5 = UE::Core::Private::
           DereferenceIfNecessary<UE::ColorGrading::SColorGradingPicker,UE::ColorGrading::SColorGradingPicker_*_&>
                     (&local_res8);
  (*pcVar1)(&pSVar5->field_0x0 + (int)uVar2,param_1,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar6);
  return;
}

// Execute @ 14d85e550

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SColorGradingPicker *pSVar3;
  SColorGradingPicker *pSVar4;
  bool bVar5;
  SColorGradingPicker *local_res8;
  
  pSVar3 = (SColorGradingPicker *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SColorGradingPicker *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SColorGradingPicker *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->field_0x8;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14d85e581;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->field_0x8;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->field_0x8 = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pSVar4 = pSVar3;
  }
LAB_14d85e581:
  pSVar3 = UE::Core::Private::
           DereferenceIfNecessary<UE::ColorGrading::SColorGradingPicker,UE::ColorGrading::SColorGradingPicker_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)(&pSVar3->field_0x0 + *(int *)&(this->MethodPtr).field_0x8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return;
}

// Execute @ 14d85e5d0

TSharedRef<SWidget,1> * __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SEnumPropertyValue,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SEnumPropertyValue,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
          *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SEnumPropertyValue *pSVar3;
  SEnumPropertyValue *pSVar4;
  bool bVar5;
  SEnumPropertyValue *local_res8;
  
  pSVar3 = (SEnumPropertyValue *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SEnumPropertyValue *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SEnumPropertyValue *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14d85e611;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->_padding_;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pSVar4 = pSVar3;
  }
LAB_14d85e611:
  pSVar3 = UE::Core::Private::
           DereferenceIfNecessary<UE::PropertyViewer::SEnumPropertyValue,UE::PropertyViewer::SEnumPropertyValue_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
             __return_storage_ptr__);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return __return_storage_ptr__;
}

// Execute @ 14d85e660

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SEnumPropertyValue,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
::Execute(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SEnumPropertyValue,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
          *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SEnumPropertyValue *pSVar3;
  SEnumPropertyValue *pSVar4;
  bool bVar5;
  SEnumPropertyValue *local_res8;
  
  pSVar3 = (SEnumPropertyValue *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SEnumPropertyValue *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SEnumPropertyValue *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14d85e691;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->_padding_;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pSVar4 = pSVar3;
  }
LAB_14d85e691:
  pSVar3 = UE::Core::Private::
           DereferenceIfNecessary<UE::PropertyViewer::SEnumPropertyValue,UE::PropertyViewer::SEnumPropertyValue_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
             (int)this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return;
}

// Execute @ 14d85e6e0

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(double),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(double),FDefaultDelegateUserPolicy>
          *this,double param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  SNumericPropertyValue *pSVar5;
  SNumericPropertyValue *pSVar6;
  bool bVar7;
  SNumericPropertyValue *local_res8 [4];
  
  pSVar5 = (SNumericPropertyValue *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8[0] = (SNumericPropertyValue *)0x0;
  pSVar6 = pSVar5;
  if (pSVar5 != (SNumericPropertyValue *)0x0) {
    aVar3 = *(atomic<int> *)&pSVar5->_padding_;
    do {
      pSVar6 = local_res8[0];
      if (aVar3 == (atomic<int>)0x0) goto LAB_14d85e721;
      LOCK();
      aVar4 = *(atomic<int> *)&pSVar5->_padding_;
      bVar7 = aVar3 == aVar4;
      if (bVar7) {
        *(atomic<int> *)&pSVar5->_padding_ = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar7);
    local_res8[0] = (this->UserObject).Object;
    pSVar6 = pSVar5;
  }
LAB_14d85e721:
  pcVar1 = *(code **)&this->MethodPtr;
  uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
  pSVar5 = UE::Core::Private::
           DereferenceIfNecessary<UE::PropertyViewer::SNumericPropertyValue,UE::PropertyViewer::SNumericPropertyValue_*_&>
                     (local_res8);
  (*pcVar1)((longlong)&pSVar5->_padding_ + (longlong)(int)uVar2,SUB84(param_1,0));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar6);
  return;
}

// Execute @ 14d85e780

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(double,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::Execute(void *this,double param_1,Type param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  SNumericPropertyValue *pSVar5;
  SNumericPropertyValue *pSVar6;
  bool bVar7;
  SNumericPropertyValue *local_res8;
  
  pSVar5 = *(SNumericPropertyValue **)((longlong)this + 0x20);
  local_res8 = (SNumericPropertyValue *)0x0;
  pSVar6 = pSVar5;
  if (pSVar5 != (SNumericPropertyValue *)0x0) {
    aVar3 = *(atomic<int> *)&pSVar5->_padding_;
    do {
      pSVar6 = local_res8;
      if (aVar3 == (atomic<int>)0x0) goto LAB_14d85e7c1;
      LOCK();
      aVar4 = *(atomic<int> *)&pSVar5->_padding_;
      bVar7 = aVar3 == aVar4;
      if (bVar7) {
        *(atomic<int> *)&pSVar5->_padding_ = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar7);
    local_res8 = *(SNumericPropertyValue **)((longlong)this + 0x18);
    pSVar6 = pSVar5;
  }
LAB_14d85e7c1:
  pcVar1 = *(code **)((longlong)this + 0x28);
  uVar2 = *(undefined8 *)((longlong)this + 0x30);
  pSVar5 = UE::Core::Private::
           DereferenceIfNecessary<UE::PropertyViewer::SNumericPropertyValue,UE::PropertyViewer::SNumericPropertyValue_*_&>
                     (&local_res8);
  (*pcVar1)((longlong)&pSVar5->_padding_ + (longlong)(int)uVar2,SUB84(param_1,0),param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar6);
  return;
}

// Execute @ 14d85e830

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(__int64),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(__int64),FDefaultDelegateUserPolicy>
          *this,long64 param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SNumericPropertyValue *pSVar3;
  SNumericPropertyValue *pSVar4;
  bool bVar5;
  SNumericPropertyValue *local_res8;
  
  pSVar3 = (SNumericPropertyValue *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SNumericPropertyValue *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SNumericPropertyValue *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14d85e871;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->_padding_;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pSVar4 = pSVar3;
  }
LAB_14d85e871:
  pSVar3 = UE::Core::Private::
           DereferenceIfNecessary<UE::PropertyViewer::SNumericPropertyValue,UE::PropertyViewer::SNumericPropertyValue_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return;
}

// Execute @ 14d85e8c0

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(__int64,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::Execute(void *this,long64 param_1,Type param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SNumericPropertyValue *pSVar3;
  SNumericPropertyValue *pSVar4;
  bool bVar5;
  SNumericPropertyValue *local_res8;
  
  pSVar3 = *(SNumericPropertyValue **)((longlong)this + 0x20);
  local_res8 = (SNumericPropertyValue *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SNumericPropertyValue *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14d85e901;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->_padding_;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = *(SNumericPropertyValue **)((longlong)this + 0x18);
    pSVar4 = pSVar3;
  }
LAB_14d85e901:
  pSVar3 = UE::Core::Private::
           DereferenceIfNecessary<UE::PropertyViewer::SNumericPropertyValue,UE::PropertyViewer::SNumericPropertyValue_*_&>
                     (&local_res8);
  (**(code **)((longlong)this + 0x28))
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)((longlong)this + 0x30),param_1,
             param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return;
}

// Execute @ 14d85e960

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>
          *this,ulong64 param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SNumericPropertyValue *pSVar3;
  SNumericPropertyValue *pSVar4;
  bool bVar5;
  SNumericPropertyValue *local_res8;
  
  pSVar3 = (SNumericPropertyValue *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SNumericPropertyValue *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SNumericPropertyValue *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14d85e9a1;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->_padding_;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pSVar4 = pSVar3;
  }
LAB_14d85e9a1:
  pSVar3 = UE::Core::Private::
           DereferenceIfNecessary<UE::PropertyViewer::SNumericPropertyValue,UE::PropertyViewer::SNumericPropertyValue_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return;
}

// Execute @ 14d85e9f0

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(unsigned___int64,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::Execute(void *this,ulong64 param_1,Type param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SNumericPropertyValue *pSVar3;
  SNumericPropertyValue *pSVar4;
  bool bVar5;
  SNumericPropertyValue *local_res8;
  
  pSVar3 = *(SNumericPropertyValue **)((longlong)this + 0x20);
  local_res8 = (SNumericPropertyValue *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SNumericPropertyValue *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14d85ea31;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->_padding_;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = *(SNumericPropertyValue **)((longlong)this + 0x18);
    pSVar4 = pSVar3;
  }
LAB_14d85ea31:
  pSVar3 = UE::Core::Private::
           DereferenceIfNecessary<UE::PropertyViewer::SNumericPropertyValue,UE::PropertyViewer::SNumericPropertyValue_*_&>
                     (&local_res8);
  (**(code **)((longlong)this + 0x28))
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)((longlong)this + 0x30),param_1,
             param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return;
}

// Execute @ 14d85ea90

void __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SStringPropertyValue,1,void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::Execute(void *this,FText *param_1,Type param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SStringPropertyValue *pSVar3;
  SStringPropertyValue *pSVar4;
  bool bVar5;
  SStringPropertyValue *local_res8;
  
  pSVar3 = *(SStringPropertyValue **)((longlong)this + 0x20);
  local_res8 = (SStringPropertyValue *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SStringPropertyValue *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14d85ead1;
      LOCK();
      aVar2 = *(atomic<int> *)&pSVar3->_padding_;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pSVar3->_padding_ = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = *(SStringPropertyValue **)((longlong)this + 0x18);
    pSVar4 = pSVar3;
  }
LAB_14d85ead1:
  pSVar3 = UE::Core::Private::
           DereferenceIfNecessary<UE::PropertyViewer::SStringPropertyValue,UE::PropertyViewer::SStringPropertyValue_*_&>
                     (&local_res8);
  (**(code **)((longlong)this + 0x28))
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)((longlong)this + 0x30),param_1,
             param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return;
}

// ExecuteIfSafe @ 14d85f1a0

bool __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *local_res8;
  undefined1 local_28 [32];
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d85f1d0;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14d85f1d0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 14d85f230

bool __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d85f260;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14d85f260:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 14d85f2c0

bool __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SBoolPropertyValue_const_,1,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SBoolPropertyValue *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SBoolPropertyValue *local_res8;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d85f2f0;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = *(SBoolPropertyValue **)((longlong)this + 0x18);
    if (local_res8 != (SBoolPropertyValue *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<UE::PropertyViewer::SBoolPropertyValue,UE::PropertyViewer::SBoolPropertyValue_*_&>
                         (&local_res8);
      (**(code **)((longlong)this + 0x28))
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)((longlong)this + 0x30));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14d85f2f0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 14d85f350

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SColorGradingComponentViewer *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SColorGradingComponentViewer *local_res8;
  longlong *local_18 [2];
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d85f380;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (SColorGradingComponentViewer *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<UE::ColorGrading::SColorGradingComponentViewer,UE::ColorGrading::SColorGradingComponentViewer_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 local_18);
      if (local_18[0] != (longlong *)0x0) {
        (**(code **)(*local_18[0] + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14d85f380:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 14d85f3f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SColorGradingComponentViewer *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SColorGradingComponentViewer *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d85f420;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (SColorGradingComponentViewer *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<UE::ColorGrading::SColorGradingComponentViewer,UE::ColorGrading::SColorGradingComponentViewer_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14d85f420:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 14d85f480

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SColorGradingComponentViewer *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SColorGradingComponentViewer *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d85f4b0;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (SColorGradingComponentViewer *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<UE::ColorGrading::SColorGradingComponentViewer,UE::ColorGrading::SColorGradingComponentViewer_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14d85f4b0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 14d85f510

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingPicker_const_,1,TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingPicker_const_,1,TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SColorGradingPicker *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SColorGradingPicker *local_res8;
  undefined1 local_res10 [8];
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d85f540;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (SColorGradingPicker *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<UE::ColorGrading::SColorGradingPicker,UE::ColorGrading::SColorGradingPicker_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                (&pSVar3->field_0x0 + *(int *)&(this->MethodPtr).field_0x8,local_res10);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14d85f540:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 14d85f5a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingPicker_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingPicker_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SColorGradingPicker *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SColorGradingPicker *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d85f5d0;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (SColorGradingPicker *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<UE::ColorGrading::SColorGradingPicker,UE::ColorGrading::SColorGradingPicker_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)(&pSVar3->field_0x0 + *(int *)&(this->MethodPtr).field_0x8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14d85f5d0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 14d85f630

bool __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SDefaultPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SDefaultPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SDefaultPropertyValue *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SDefaultPropertyValue *local_res8;
  longlong *local_18 [2];
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d85f660;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (SDefaultPropertyValue *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<UE::PropertyViewer::SDefaultPropertyValue,UE::PropertyViewer::SDefaultPropertyValue_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 local_18);
      if (local_18[0] != (longlong *)0x0) {
        (**(code **)(*local_18[0] + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14d85f660:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 14d85f6d0

bool __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SEnumPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SEnumPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SEnumPropertyValue *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SEnumPropertyValue *local_res8;
  longlong *local_18 [2];
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d85f700;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (SEnumPropertyValue *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<UE::PropertyViewer::SEnumPropertyValue,UE::PropertyViewer::SEnumPropertyValue_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 local_18);
      if (local_18[0] != (longlong *)0x0) {
        (**(code **)(*local_18[0] + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14d85f700:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 14d85f770

bool __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SListViewPinnedRowWidget *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  SListViewPinnedRowWidget *local_res10;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d85f7a0;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res10 = (this->UserObject).Object;
    if (local_res10 != (SListViewPinnedRowWidget *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget,SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget_*_&>
                         (&local_res10);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 local_res8,(int)this->_padding_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14d85f7a0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 14d85f810

bool __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SListViewPinnedRowWidget *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  SListViewPinnedRowWidget *local_res10;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d85f840;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res10 = (this->UserObject).Object;
    if (local_res10 != (SListViewPinnedRowWidget *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget,SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget_*_&>
                         (&local_res10);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 local_res8,(int)this->_padding_,*(undefined4 *)((longlong)&this->_padding_ + 4));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14d85f840:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 14d85f8b0

bool __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,double___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,double___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SNumericPropertyValue *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SNumericPropertyValue *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d85f8e0;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (SNumericPropertyValue *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<UE::PropertyViewer::SNumericPropertyValue,UE::PropertyViewer::SNumericPropertyValue_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14d85f8e0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 14d85f940

bool __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,__int64___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,__int64___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SNumericPropertyValue *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SNumericPropertyValue *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d85f970;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (SNumericPropertyValue *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<UE::PropertyViewer::SNumericPropertyValue,UE::PropertyViewer::SNumericPropertyValue_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14d85f970:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 14d85f9d0

bool __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,unsigned___int64___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,unsigned___int64___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SNumericPropertyValue *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SNumericPropertyValue *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d85fa00;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (SNumericPropertyValue *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<UE::PropertyViewer::SNumericPropertyValue,UE::PropertyViewer::SNumericPropertyValue_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14d85fa00:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 14d85fa60

bool __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SStringPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SStringPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SStringPropertyValue *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SStringPropertyValue *local_res8;
  longlong *local_18 [2];
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d85fa90;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (SStringPropertyValue *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<UE::PropertyViewer::SStringPropertyValue,UE::PropertyViewer::SStringPropertyValue_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 local_18);
      if (local_18[0] != (longlong *)0x0) {
        (**(code **)(*local_18[0] + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14d85fa90:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 14d85fb00

bool __thiscall
TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
                *this,TSharedRef<SHeaderRow,1> *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SMultiColumnTableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SMultiColumnTableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d85fb35;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 !=
        (SMultiColumnTableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<SMultiColumnTableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,SMultiColumnTableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14d85fb35:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 14d85fba0

bool __thiscall
TBaseSPMethodDelegateInstance<0,TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
                *this,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *param_1,
               TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>
               *param_2)

{
  pmf_820a2be8 pVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *local_res8;
  FTreeNode *local_18;
  TReferenceControllerBase<1> *local_10;
  
  pTVar5 = (this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d85fbe0;
      }
      LOCK();
      aVar3 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    local_res8 = (this->UserObject).Object;
  }
  if (local_res8 == (TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0)
  {
LAB_14d85fbe0:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    bVar6 = false;
  }
  else {
    pTVar4 = UE::Core::Private::
             DereferenceIfNecessary<TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_*_&>
                       (&local_res8);
    local_18 = param_1->Object;
    pVar1 = this->MethodPtr;
    local_10 = (param_1->SharedReferenceCount).ReferenceController;
    (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_1->Object = (FTreeNode *)0x0;
    (*(code *)pVar1)(pTVar4,&local_18,param_2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    bVar6 = true;
  }
  return bVar6;
}

// ExecuteIfSafe @ 14d85fc80

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FPropertyViewerImpl *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FPropertyViewerImpl *local_res8;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d85fcb0;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (FPropertyViewerImpl *)0x0) {
      pFVar3 = UE::Core::Private::
               DereferenceIfNecessary<UE::PropertyViewer::Private::FPropertyViewerImpl,UE::PropertyViewer::Private::FPropertyViewerImpl_*_&>
                         (&local_res8);
      (*(code *)this->MethodPtr)(pFVar3,local_18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14d85fcb0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 14d85fd20

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
                *this,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *param_1,
               TSharedRef<STableViewBase,1> *param_2)

{
  pmf_43452e41 pVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FPropertyViewerImpl *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  FPropertyViewerImpl *local_res8;
  FTreeNode *local_28;
  TReferenceControllerBase<1> *local_20;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  pTVar5 = (this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (FPropertyViewerImpl *)0x0;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d85fd60;
      }
      LOCK();
      aVar3 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    local_res8 = (this->UserObject).Object;
  }
  if (local_res8 == (FPropertyViewerImpl *)0x0) {
LAB_14d85fd60:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    bVar6 = false;
  }
  else {
    pFVar4 = UE::Core::Private::
             DereferenceIfNecessary<UE::PropertyViewer::Private::FPropertyViewerImpl,UE::PropertyViewer::Private::FPropertyViewerImpl_*_&>
                       (&local_res8);
    local_28 = param_1->Object;
    pVar1 = this->MethodPtr;
    local_20 = (param_1->SharedReferenceCount).ReferenceController;
    (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_1->Object = (FTreeNode *)0x0;
    (*(code *)pVar1)(pFVar4,local_18,&local_28,param_2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    bVar6 = true;
  }
  return bVar6;
}

// ExecuteIfSafe @ 14d85fe10

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>
                *this,FGeometry *param_1,FPointerEvent *param_2)

{
  pmf_fa9bca1f pVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FPropertyViewerImpl *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  FPropertyViewerImpl *local_res8;
  longlong local_d8;
  longlong local_d0;
  FReply local_c8;
  
  pTVar5 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d85fe50;
      }
      LOCK();
      aVar3 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (FPropertyViewerImpl *)0x0) {
      pFVar4 = UE::Core::Private::
               DereferenceIfNecessary<UE::PropertyViewer::Private::FPropertyViewerImpl,UE::PropertyViewer::Private::FPropertyViewerImpl_*_&>
                         (&local_res8);
      local_d8 = this->_padding_;
      pVar1 = this->MethodPtr;
      local_d0 = this->_padding_;
      if (local_d0 != 0) {
        LOCK();
        *(int *)(local_d0 + 8) = *(int *)(local_d0 + 8) + 1;
        UNLOCK();
      }
      (*(code *)pVar1)(pFVar4,&local_c8,param_1,param_2,&local_d8);
      FReply::~FReply(&local_c8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      return true;
    }
  }
LAB_14d85fe50:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return false;
}

// ExecuteIfSafe @ 14d85ff00

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
                *this,FText *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FPropertyViewerImpl *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FPropertyViewerImpl *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d85ff35;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (FPropertyViewerImpl *)0x0) {
      pFVar3 = UE::Core::Private::
               DereferenceIfNecessary<UE::PropertyViewer::Private::FPropertyViewerImpl,UE::PropertyViewer::Private::FPropertyViewerImpl_*_&>
                         (&local_res8);
      (*(code *)this->MethodPtr)(pFVar3,param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14d85ff35:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 14d85ffa0

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>),FDefaultDelegateUserPolicy>
                *this,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *param_1)

{
  pmf_b066fb78 pVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FPropertyViewerImpl *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  FPropertyViewerImpl *local_res8;
  FTreeNode *local_18;
  TReferenceControllerBase<1> *local_10;
  
  pTVar5 = (this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (FPropertyViewerImpl *)0x0;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d85ffe0;
      }
      LOCK();
      aVar3 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    local_res8 = (this->UserObject).Object;
  }
  if (local_res8 != (FPropertyViewerImpl *)0x0) {
    pFVar4 = UE::Core::Private::
             DereferenceIfNecessary<UE::PropertyViewer::Private::FPropertyViewerImpl,UE::PropertyViewer::Private::FPropertyViewerImpl_*_&>
                       (&local_res8);
    local_18 = param_1->Object;
    pVar1 = this->MethodPtr;
    local_10 = (param_1->SharedReferenceCount).ReferenceController;
    (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_1->Object = (FTreeNode *)0x0;
    (*(code *)pVar1)(pFVar4,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return true;
  }
LAB_14d85ffe0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

// ExecuteIfSafe @ 14d860080

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
                *this,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *param_1,
               TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>
               *param_2)

{
  pmf_4542d425 pVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FPropertyViewerImpl *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  FPropertyViewerImpl *local_res8;
  FTreeNode *local_18;
  TReferenceControllerBase<1> *local_10;
  
  pTVar5 = (this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (FPropertyViewerImpl *)0x0;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d8600c0;
      }
      LOCK();
      aVar3 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    local_res8 = (this->UserObject).Object;
  }
  if (local_res8 == (FPropertyViewerImpl *)0x0) {
LAB_14d8600c0:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    bVar6 = false;
  }
  else {
    pFVar4 = UE::Core::Private::
             DereferenceIfNecessary<UE::PropertyViewer::Private::FPropertyViewerImpl,UE::PropertyViewer::Private::FPropertyViewerImpl_*_&>
                       (&local_res8);
    local_18 = param_1->Object;
    pVar1 = this->MethodPtr;
    local_10 = (param_1->SharedReferenceCount).ReferenceController;
    (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_1->Object = (FTreeNode *)0x0;
    (*(code *)pVar1)(pFVar4,&local_18,param_2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    bVar6 = true;
  }
  return bVar6;
}

// ExecuteIfSafe @ 14d860160

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
                *this,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *param_1,
               TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  pmf_41bbe624 pVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FPropertyViewerImpl *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  FPropertyViewerImpl *local_res8;
  FTreeNode *local_18;
  TReferenceControllerBase<1> *local_10;
  
  pTVar5 = (this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (FPropertyViewerImpl *)0x0;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d8601a0;
      }
      LOCK();
      aVar3 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    local_res8 = (this->UserObject).Object;
  }
  if (local_res8 == (FPropertyViewerImpl *)0x0) {
LAB_14d8601a0:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    bVar6 = false;
  }
  else {
    pFVar4 = UE::Core::Private::
             DereferenceIfNecessary<UE::PropertyViewer::Private::FPropertyViewerImpl,UE::PropertyViewer::Private::FPropertyViewerImpl_*_&>
                       (&local_res8);
    local_18 = param_1->Object;
    pVar1 = this->MethodPtr;
    local_10 = (param_1->SharedReferenceCount).ReferenceController;
    (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_1->Object = (FTreeNode *)0x0;
    (*(code *)pVar1)(pFVar4,&local_18,param_2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    bVar6 = true;
  }
  return bVar6;
}

// ExecuteIfSafe @ 14d860240

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *param_1,
               Type param_2)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FPropertyViewerImpl *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  FPropertyViewerImpl *local_res8;
  FTreeNode *local_18;
  TReferenceControllerBase<1> *local_10;
  
  pTVar5 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  local_res8 = (FPropertyViewerImpl *)0x0;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d860280;
      }
      LOCK();
      aVar3 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    local_res8 = *(FPropertyViewerImpl **)((longlong)this + 0x18);
  }
  if (local_res8 == (FPropertyViewerImpl *)0x0) {
LAB_14d860280:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    bVar6 = false;
  }
  else {
    pFVar4 = UE::Core::Private::
             DereferenceIfNecessary<UE::PropertyViewer::Private::FPropertyViewerImpl,UE::PropertyViewer::Private::FPropertyViewerImpl_*_&>
                       (&local_res8);
    local_18 = param_1->Object;
    pcVar1 = *(code **)((longlong)this + 0x28);
    local_10 = (param_1->SharedReferenceCount).ReferenceController;
    (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_1->Object = (FTreeNode *)0x0;
    (*pcVar1)(pFVar4,&local_18,param_2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    bVar6 = true;
  }
  return bVar6;
}

// ExecuteIfSafe @ 14d860320

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SBoolPropertyValue,1,void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,ECheckBoxState param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SBoolPropertyValue *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SBoolPropertyValue *local_res8;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d860355;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = *(SBoolPropertyValue **)((longlong)this + 0x18);
    if (local_res8 != (SBoolPropertyValue *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<UE::PropertyViewer::SBoolPropertyValue,UE::PropertyViewer::SBoolPropertyValue_*_&>
                         (&local_res8);
      (**(code **)((longlong)this + 0x28))
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)((longlong)this + 0x30),param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14d860355:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 14d8603c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SColorGradingPicker *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SColorGradingPicker *local_res8;
  undefined1 local_18 [16];
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d8603f0;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (SColorGradingPicker *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<UE::ColorGrading::SColorGradingPicker,UE::ColorGrading::SColorGradingPicker_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                (&pSVar3->field_0x0 + *(int *)&(this->MethodPtr).field_0x8,local_18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14d8603f0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 14d860450

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy>
                *this,FLinearColor *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SColorGradingPicker *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SColorGradingPicker *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d860485;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (SColorGradingPicker *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<UE::ColorGrading::SColorGradingPicker,UE::ColorGrading::SColorGradingPicker_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                (&pSVar3->field_0x0 + *(int *)&(this->MethodPtr).field_0x8,param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14d860485:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 14d8604f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy,bool>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy,bool>
                *this,FLinearColor *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SColorGradingPicker *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SColorGradingPicker *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d860525;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (SColorGradingPicker *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<UE::ColorGrading::SColorGradingPicker,UE::ColorGrading::SColorGradingPicker_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                (&pSVar3->field_0x0 + *(int *)&(this->MethodPtr).field_0x8,param_1,
                 (char)this->_padding_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14d860525:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 14d8605a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float),FDefaultDelegateUserPolicy>
                *this,float param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  SColorGradingPicker *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  SColorGradingPicker *local_res8 [4];
  
  pTVar6 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar6->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d8605d1;
      }
      LOCK();
      aVar4 = pTVar6->SharedReferenceCount;
      bVar7 = aVar3 == aVar4;
      if (bVar7) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar7);
    local_res8[0] = (this->UserObject).Object;
    if (local_res8[0] != (SColorGradingPicker *)0x0) {
      pcVar1 = *(code **)&this->MethodPtr;
      uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
      pSVar5 = UE::Core::Private::
               DereferenceIfNecessary<UE::ColorGrading::SColorGradingPicker,UE::ColorGrading::SColorGradingPicker_*_&>
                         (local_res8);
      (*pcVar1)(&pSVar5->field_0x0 + (int)uVar2,param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      return true;
    }
  }
LAB_14d8605d1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return false;
}

// ExecuteIfSafe @ 14d860650

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float),FDefaultDelegateUserPolicy,bool>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float),FDefaultDelegateUserPolicy,bool>
                *this,float param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SColorGradingPicker *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SColorGradingPicker *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d860685;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (SColorGradingPicker *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<UE::ColorGrading::SColorGradingPicker,UE::ColorGrading::SColorGradingPicker_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                (&pSVar3->field_0x0 + *(int *)&(this->MethodPtr).field_0x8,param_1,
                 (char)this->_padding_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14d860685:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 14d860700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>
                *this,float param_1,TWeakPtr<SWidget,1> *param_2,bool param_3,bool param_4)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  SColorGradingPicker *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  undefined8 uVar6;
  atomic<int> aVar7;
  SColorGradingPicker *pSVar8;
  bool bVar9;
  SColorGradingPicker *local_res8;
  SWidget *local_38;
  TReferenceControllerBase<1> *local_30;
  
  pSVar3 = (SColorGradingPicker *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SColorGradingPicker *)0x0;
  if (pSVar3 != (SColorGradingPicker *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar3->field_0x8;
    do {
      pSVar8 = local_res8;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14d860751;
      LOCK();
      aVar7 = *(atomic<int> *)&pSVar3->field_0x8;
      bVar9 = aVar2 == aVar7;
      if (bVar9) {
        *(atomic<int> *)&pSVar3->field_0x8 = (atomic<int>)((int)aVar2 + 1);
        aVar7 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar7;
    } while (!bVar9);
    local_res8 = (this->UserObject).Object;
  }
  pSVar8 = pSVar3;
  if (local_res8 == (SColorGradingPicker *)0x0) {
LAB_14d860751:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar8);
    pTVar4 = (param_2->WeakReferenceCount).ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    bVar9 = false;
  }
  else {
    local_38 = param_2->Object;
    local_30 = (param_2->WeakReferenceCount).ReferenceController;
    pcVar5 = *(code **)&this->MethodPtr;
    uVar6 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    (param_2->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_2->Object = (SWidget *)0x0;
    pSVar8 = UE::Core::Private::
             DereferenceIfNecessary<UE::ColorGrading::SColorGradingPicker,UE::ColorGrading::SColorGradingPicker_*_&>
                       (&local_res8);
    (*pcVar5)(&pSVar8->field_0x0 + (int)uVar6,param_1,&local_38,param_3,param_4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar3);
    pTVar4 = (param_2->WeakReferenceCount).ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    bVar9 = true;
  }
  return bVar9;
}

// ExecuteIfSafe @ 14d860850

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,float param_1,Type param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  SColorGradingPicker *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  SColorGradingPicker *local_res8;
  
  pTVar6 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar6->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d860890;
      }
      LOCK();
      aVar4 = pTVar6->SharedReferenceCount;
      bVar7 = aVar3 == aVar4;
      if (bVar7) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar7);
    local_res8 = *(SColorGradingPicker **)((longlong)this + 0x18);
    if (local_res8 != (SColorGradingPicker *)0x0) {
      pcVar1 = *(code **)((longlong)this + 0x28);
      uVar2 = *(undefined8 *)((longlong)this + 0x30);
      pSVar5 = UE::Core::Private::
               DereferenceIfNecessary<UE::ColorGrading::SColorGradingPicker,UE::ColorGrading::SColorGradingPicker_*_&>
                         (&local_res8);
      (*pcVar1)(&pSVar5->field_0x0 + (int)uVar2,param_1,param_2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      return true;
    }
  }
LAB_14d860890:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return false;
}

// ExecuteIfSafe @ 14d860920

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SColorGradingPicker *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SColorGradingPicker *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d860950;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (SColorGradingPicker *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<UE::ColorGrading::SColorGradingPicker,UE::ColorGrading::SColorGradingPicker_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)(&pSVar3->field_0x0 + *(int *)&(this->MethodPtr).field_0x8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14d860950:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 14d8609b0

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SEnumPropertyValue,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SEnumPropertyValue,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SEnumPropertyValue *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SEnumPropertyValue *local_res8;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d8609e0;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (SEnumPropertyValue *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<UE::PropertyViewer::SEnumPropertyValue,UE::PropertyViewer::SEnumPropertyValue_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 local_18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14d8609e0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 14d860a50

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SEnumPropertyValue,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SEnumPropertyValue,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SEnumPropertyValue *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SEnumPropertyValue *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d860a80;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (SEnumPropertyValue *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<UE::PropertyViewer::SEnumPropertyValue,UE::PropertyViewer::SEnumPropertyValue_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 (int)this->_padding_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14d860a80:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 14d860ae0

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(double),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(double),FDefaultDelegateUserPolicy>
                *this,double param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  SNumericPropertyValue *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  SNumericPropertyValue *local_res8 [4];
  
  pTVar6 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar6->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d860b11;
      }
      LOCK();
      aVar4 = pTVar6->SharedReferenceCount;
      bVar7 = aVar3 == aVar4;
      if (bVar7) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar7);
    local_res8[0] = (this->UserObject).Object;
    if (local_res8[0] != (SNumericPropertyValue *)0x0) {
      pcVar1 = *(code **)&this->MethodPtr;
      uVar2 = *(undefined8 *)&(this->MethodPtr).field_0x8;
      pSVar5 = UE::Core::Private::
               DereferenceIfNecessary<UE::PropertyViewer::SNumericPropertyValue,UE::PropertyViewer::SNumericPropertyValue_*_&>
                         (local_res8);
      (*pcVar1)((longlong)&pSVar5->_padding_ + (longlong)(int)uVar2,SUB84(param_1,0));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      return true;
    }
  }
LAB_14d860b11:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return false;
}

// ExecuteIfSafe @ 14d860b90

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(double,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,double param_1,Type param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  SNumericPropertyValue *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  SNumericPropertyValue *local_res8;
  
  pTVar6 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar6->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d860bd0;
      }
      LOCK();
      aVar4 = pTVar6->SharedReferenceCount;
      bVar7 = aVar3 == aVar4;
      if (bVar7) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar7);
    local_res8 = *(SNumericPropertyValue **)((longlong)this + 0x18);
    if (local_res8 != (SNumericPropertyValue *)0x0) {
      pcVar1 = *(code **)((longlong)this + 0x28);
      uVar2 = *(undefined8 *)((longlong)this + 0x30);
      pSVar5 = UE::Core::Private::
               DereferenceIfNecessary<UE::PropertyViewer::SNumericPropertyValue,UE::PropertyViewer::SNumericPropertyValue_*_&>
                         (&local_res8);
      (*pcVar1)((longlong)&pSVar5->_padding_ + (longlong)(int)uVar2,SUB84(param_1,0),param_2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      return true;
    }
  }
LAB_14d860bd0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return false;
}

// ExecuteIfSafe @ 14d860c60

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(__int64),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(__int64),FDefaultDelegateUserPolicy>
                *this,long64 param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SNumericPropertyValue *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SNumericPropertyValue *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d860c95;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (SNumericPropertyValue *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<UE::PropertyViewer::SNumericPropertyValue,UE::PropertyViewer::SNumericPropertyValue_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14d860c95:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 14d860d00

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(__int64,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,long64 param_1,Type param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SNumericPropertyValue *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SNumericPropertyValue *local_res8;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d860d40;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = *(SNumericPropertyValue **)((longlong)this + 0x18);
    if (local_res8 != (SNumericPropertyValue *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<UE::PropertyViewer::SNumericPropertyValue,UE::PropertyViewer::SNumericPropertyValue_*_&>
                         (&local_res8);
      (**(code **)((longlong)this + 0x28))
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)((longlong)this + 0x30),param_1,
                 param_2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14d860d40:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 14d860db0

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>
                *this,ulong64 param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SNumericPropertyValue *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SNumericPropertyValue *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d860de5;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    if (local_res8 != (SNumericPropertyValue *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<UE::PropertyViewer::SNumericPropertyValue,UE::PropertyViewer::SNumericPropertyValue_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14d860de5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 14d860e50

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(unsigned___int64,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,ulong64 param_1,Type param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SNumericPropertyValue *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SNumericPropertyValue *local_res8;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d860e90;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = *(SNumericPropertyValue **)((longlong)this + 0x18);
    if (local_res8 != (SNumericPropertyValue *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<UE::PropertyViewer::SNumericPropertyValue,UE::PropertyViewer::SNumericPropertyValue_*_&>
                         (&local_res8);
      (**(code **)((longlong)this + 0x28))
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)((longlong)this + 0x30),param_1,
                 param_2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14d860e90:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 14d860f00

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SStringPropertyValue,1,void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,FText *param_1,Type param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SStringPropertyValue *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SStringPropertyValue *local_res8;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d860f40;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = *(SStringPropertyValue **)((longlong)this + 0x18);
    if (local_res8 != (SStringPropertyValue *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<UE::PropertyViewer::SStringPropertyValue,UE::PropertyViewer::SStringPropertyValue_*_&>
                         (&local_res8);
      (**(code **)((longlong)this + 0x28))
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)((longlong)this + 0x30),param_1,
                 param_2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14d860f40:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// GetBoundProgramCounterForTimerManager @ 14d866030

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d866040

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d866050

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SBoolPropertyValue_const_,1,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x28);
}

// GetBoundProgramCounterForTimerManager @ 14d866060

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d866070

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d866080

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d866090

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingPicker_const_,1,TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingPicker_const_,1,TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d8660a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingPicker_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingPicker_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d8660b0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SDefaultPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SDefaultPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d8660c0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SEnumPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SEnumPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d8660d0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d8660e0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d8660f0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,double___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,double___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d866100

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,__int64___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,__int64___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d866110

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,unsigned___int64___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,unsigned___int64___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d866120

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SStringPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SStringPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d866130

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d866140

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d866150

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d866160

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d866170

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d866180

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d866190

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d8661a0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d8661b0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d8661c0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x28);
}

// GetBoundProgramCounterForTimerManager @ 14d8661d0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SBoolPropertyValue,1,void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x28);
}

// GetBoundProgramCounterForTimerManager @ 14d8661e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d8661f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d866200

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy,bool>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy,bool>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d866210

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d866220

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float),FDefaultDelegateUserPolicy,bool>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float),FDefaultDelegateUserPolicy,bool>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d866230

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d866240

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x28);
}

// GetBoundProgramCounterForTimerManager @ 14d866250

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d866260

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SEnumPropertyValue,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SEnumPropertyValue,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d866270

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SEnumPropertyValue,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SEnumPropertyValue,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d866280

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(double),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(double),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d866290

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(double,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x28);
}

// GetBoundProgramCounterForTimerManager @ 14d8662a0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(__int64),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(__int64),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d8662b0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(__int64,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x28);
}

// GetBoundProgramCounterForTimerManager @ 14d8662c0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14d8662d0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(unsigned___int64,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x28);
}

// GetBoundProgramCounterForTimerManager @ 14d8662e0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SStringPropertyValue,1,void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x28);
}

// GetObjectForTimerManager @ 14d869840

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d8698a0

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d869900

void * __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SBoolPropertyValue_const_,1,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  TReferenceControllerBase<1> *pTVar1;
  void *pvVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pvVar2 = *(void **)((longlong)this + 0x18);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pvVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d869960

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SColorGradingComponentViewer *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d8699c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SColorGradingComponentViewer *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d869a20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SColorGradingComponentViewer *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d869a80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingPicker_const_,1,TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingPicker_const_,1,TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SColorGradingPicker *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d869ae0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingPicker_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingPicker_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SColorGradingPicker *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d869b40

void * __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SDefaultPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SDefaultPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SDefaultPropertyValue *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d869ba0

void * __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SEnumPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SEnumPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SEnumPropertyValue *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d869c00

void * __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SListViewPinnedRowWidget *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d869c60

void * __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SListViewPinnedRowWidget *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d869cc0

void * __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,double___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,double___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SNumericPropertyValue *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d869d20

void * __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,__int64___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,__int64___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SNumericPropertyValue *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d869d80

void * __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,unsigned___int64___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,unsigned___int64___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SNumericPropertyValue *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d869de0

void * __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SStringPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SStringPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SStringPropertyValue *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d869e40

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SMultiColumnTableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d869ea0

void * __thiscall
TBaseSPMethodDelegateInstance<0,TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *pTVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pTVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pTVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d869f00

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FPropertyViewerImpl *pFVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pFVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pFVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d869f60

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FPropertyViewerImpl *pFVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pFVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pFVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d869fc0

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FPropertyViewerImpl *pFVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pFVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pFVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d86a020

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FPropertyViewerImpl *pFVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pFVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pFVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d86a080

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FPropertyViewerImpl *pFVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pFVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pFVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d86a0e0

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FPropertyViewerImpl *pFVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pFVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pFVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d86a140

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FPropertyViewerImpl *pFVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pFVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pFVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d86a1a0

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  TReferenceControllerBase<1> *pTVar1;
  void *pvVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pvVar2 = *(void **)((longlong)this + 0x18);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pvVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d86a200

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SBoolPropertyValue,1,void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  TReferenceControllerBase<1> *pTVar1;
  void *pvVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pvVar2 = *(void **)((longlong)this + 0x18);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pvVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d86a260

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SColorGradingPicker *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d86a2c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SColorGradingPicker *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d86a320

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy,bool>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy,bool>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SColorGradingPicker *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d86a380

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SColorGradingPicker *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d86a3e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float),FDefaultDelegateUserPolicy,bool>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float),FDefaultDelegateUserPolicy,bool>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SColorGradingPicker *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d86a440

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SColorGradingPicker *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d86a4a0

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  TReferenceControllerBase<1> *pTVar1;
  void *pvVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pvVar2 = *(void **)((longlong)this + 0x18);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pvVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d86a500

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SColorGradingPicker *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d86a560

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SEnumPropertyValue,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SEnumPropertyValue,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SEnumPropertyValue *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d86a5c0

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SEnumPropertyValue,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SEnumPropertyValue,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SEnumPropertyValue *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d86a620

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(double),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(double),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SNumericPropertyValue *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d86a680

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(double,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  TReferenceControllerBase<1> *pTVar1;
  void *pvVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pvVar2 = *(void **)((longlong)this + 0x18);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pvVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d86a6e0

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(__int64),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(__int64),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SNumericPropertyValue *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d86a740

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(__int64,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  TReferenceControllerBase<1> *pTVar1;
  void *pvVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pvVar2 = *(void **)((longlong)this + 0x18);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pvVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d86a7a0

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SNumericPropertyValue *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pSVar2 = (this->UserObject).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pSVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d86a800

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(unsigned___int64,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  TReferenceControllerBase<1> *pTVar1;
  void *pvVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pvVar2 = *(void **)((longlong)this + 0x18);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pvVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d86a860

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SStringPropertyValue,1,void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  TReferenceControllerBase<1> *pTVar1;
  void *pvVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  pTVar1 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    while (aVar3 != (atomic<int>)0x0) {
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
      if (bVar5) {
        pvVar2 = *(void **)((longlong)this + 0x18);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return pvVar2;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (void *)0x0;
}

// GetUObject @ 14d86d4d0

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d86d4e0

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d86d4f0

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SBoolPropertyValue_const_,1,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d86d500

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d86d510

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d86d520

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d86d530

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingPicker_const_,1,TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingPicker_const_,1,TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d86d540

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingPicker_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingPicker_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d86d550

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SDefaultPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SDefaultPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d86d560

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SEnumPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SEnumPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d86d570

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
::GetUObject(TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d86d580

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
::GetUObject(TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d86d590

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,double___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,double___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d86d5a0

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,__int64___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,__int64___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d86d5b0

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,unsigned___int64___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,unsigned___int64___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d86d5c0

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SStringPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SStringPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d86d5d0

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d86d5e0

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d86d5f0

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d86d600

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d86d610

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>
::GetUObject(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d86d620

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d86d630

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d86d640

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d86d650

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d86d660

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d86d670

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SBoolPropertyValue,1,void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d86d680

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d86d690

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d86d6a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy,bool>
::GetUObject(TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy,bool>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d86d6b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d86d6c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float),FDefaultDelegateUserPolicy,bool>
::GetUObject(TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float),FDefaultDelegateUserPolicy,bool>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d86d6d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d86d6e0

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d86d6f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d86d700

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SEnumPropertyValue,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SEnumPropertyValue,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d86d710

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SEnumPropertyValue,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
::GetUObject(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SEnumPropertyValue,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d86d720

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(double),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(double),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d86d730

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(double,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d86d740

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(__int64),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(__int64),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d86d750

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(__int64,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d86d760

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d86d770

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(unsigned___int64,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d86d780

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SStringPropertyValue,1,void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14d870610

bool __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *pSVar4;
  STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *pSVar5;
  bool bVar6;
  
  pSVar1 = (STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)
           (this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14d870645;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_14d870645:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 14d870670

bool __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *pSVar4;
  STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *pSVar5;
  bool bVar6;
  
  pSVar1 = (STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)
           (this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14d8706a5;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_14d8706a5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 14d8706d0

bool __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SBoolPropertyValue_const_,1,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  pTVar1 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  pTVar4 = (TReferenceControllerBase<1> *)0x0;
  pTVar5 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      pTVar5 = pTVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14d870705;
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 0x18);
    pTVar5 = pTVar1;
  }
LAB_14d870705:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return pTVar4 == param_1;
}

// HasSameObject @ 14d870730

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SColorGradingComponentViewer *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SColorGradingComponentViewer *pSVar4;
  SColorGradingComponentViewer *pSVar5;
  bool bVar6;
  
  pSVar1 = (SColorGradingComponentViewer *)(this->UserObject).WeakReferenceCount.ReferenceController
  ;
  pSVar4 = (SColorGradingComponentViewer *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SColorGradingComponentViewer *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14d870765;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_14d870765:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 14d870790

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SColorGradingComponentViewer *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SColorGradingComponentViewer *pSVar4;
  SColorGradingComponentViewer *pSVar5;
  bool bVar6;
  
  pSVar1 = (SColorGradingComponentViewer *)(this->UserObject).WeakReferenceCount.ReferenceController
  ;
  pSVar4 = (SColorGradingComponentViewer *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SColorGradingComponentViewer *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14d8707c5;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_14d8707c5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 14d8707f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SColorGradingComponentViewer *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SColorGradingComponentViewer *pSVar4;
  SColorGradingComponentViewer *pSVar5;
  bool bVar6;
  
  pSVar1 = (SColorGradingComponentViewer *)(this->UserObject).WeakReferenceCount.ReferenceController
  ;
  pSVar4 = (SColorGradingComponentViewer *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SColorGradingComponentViewer *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14d870825;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_14d870825:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 14d870850

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingPicker_const_,1,TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingPicker_const_,1,TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SColorGradingPicker *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SColorGradingPicker *pSVar4;
  SColorGradingPicker *pSVar5;
  bool bVar6;
  
  pSVar1 = (SColorGradingPicker *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SColorGradingPicker *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SColorGradingPicker *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->field_0x8;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14d870885;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->field_0x8;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->field_0x8 = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_14d870885:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 14d8708b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingPicker_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingPicker_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SColorGradingPicker *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SColorGradingPicker *pSVar4;
  SColorGradingPicker *pSVar5;
  bool bVar6;
  
  pSVar1 = (SColorGradingPicker *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SColorGradingPicker *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SColorGradingPicker *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->field_0x8;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14d8708e5;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->field_0x8;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->field_0x8 = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_14d8708e5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 14d870910

bool __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SDefaultPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SDefaultPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SDefaultPropertyValue *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SDefaultPropertyValue *pSVar4;
  SDefaultPropertyValue *pSVar5;
  bool bVar6;
  
  pSVar1 = (SDefaultPropertyValue *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SDefaultPropertyValue *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SDefaultPropertyValue *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14d870945;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_14d870945:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 14d870970

bool __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SEnumPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SEnumPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SEnumPropertyValue *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SEnumPropertyValue *pSVar4;
  SEnumPropertyValue *pSVar5;
  bool bVar6;
  
  pSVar1 = (SEnumPropertyValue *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SEnumPropertyValue *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SEnumPropertyValue *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14d8709a5;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_14d8709a5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 14d8709d0

bool __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
::HasSameObject(TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
                *this,void *param_1)

{
  SListViewPinnedRowWidget *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SListViewPinnedRowWidget *pSVar4;
  SListViewPinnedRowWidget *pSVar5;
  bool bVar6;
  
  pSVar1 = (SListViewPinnedRowWidget *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SListViewPinnedRowWidget *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SListViewPinnedRowWidget *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14d870a05;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_14d870a05:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 14d870a30

bool __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
::HasSameObject(TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
                *this,void *param_1)

{
  SListViewPinnedRowWidget *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SListViewPinnedRowWidget *pSVar4;
  SListViewPinnedRowWidget *pSVar5;
  bool bVar6;
  
  pSVar1 = (SListViewPinnedRowWidget *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SListViewPinnedRowWidget *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SListViewPinnedRowWidget *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14d870a65;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_14d870a65:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 14d870a90

bool __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,double___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,double___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SNumericPropertyValue *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SNumericPropertyValue *pSVar4;
  SNumericPropertyValue *pSVar5;
  bool bVar6;
  
  pSVar1 = (SNumericPropertyValue *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SNumericPropertyValue *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SNumericPropertyValue *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14d870ac5;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_14d870ac5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 14d870af0

bool __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,__int64___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,__int64___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SNumericPropertyValue *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SNumericPropertyValue *pSVar4;
  SNumericPropertyValue *pSVar5;
  bool bVar6;
  
  pSVar1 = (SNumericPropertyValue *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SNumericPropertyValue *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SNumericPropertyValue *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14d870b25;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_14d870b25:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 14d870b50

bool __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,unsigned___int64___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,unsigned___int64___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SNumericPropertyValue *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SNumericPropertyValue *pSVar4;
  SNumericPropertyValue *pSVar5;
  bool bVar6;
  
  pSVar1 = (SNumericPropertyValue *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SNumericPropertyValue *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SNumericPropertyValue *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14d870b85;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_14d870b85:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 14d870bb0

bool __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SStringPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SStringPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SStringPropertyValue *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SStringPropertyValue *pSVar4;
  SStringPropertyValue *pSVar5;
  bool bVar6;
  
  pSVar1 = (SStringPropertyValue *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SStringPropertyValue *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SStringPropertyValue *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14d870be5;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_14d870be5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 14d870c10

bool __thiscall
TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SMultiColumnTableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SMultiColumnTableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *pSVar4;
  SMultiColumnTableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *pSVar5;
  bool bVar6;
  
  pSVar1 = (SMultiColumnTableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)
           (this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SMultiColumnTableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SMultiColumnTableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0)
  {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14d870c45;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_14d870c45:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 14d870c70

bool __thiscall
TBaseSPMethodDelegateInstance<0,TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *pTVar4;
  TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *pTVar5;
  bool bVar6;
  
  pTVar1 = (TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)
           (this->UserObject).WeakReferenceCount.ReferenceController;
  pTVar4 = (TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0;
  pTVar5 = pTVar1;
  if (pTVar1 != (TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) {
    aVar2 = *(atomic<int> *)&pTVar1->Filter;
    do {
      pTVar5 = pTVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14d870ca5;
      LOCK();
      aVar3 = *(atomic<int> *)&pTVar1->Filter;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pTVar1->Filter = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pTVar4 = (this->UserObject).Object;
    pTVar5 = pTVar1;
  }
LAB_14d870ca5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar5);
  return pTVar4 == param_1;
}

// HasSameObject @ 14d870cd0

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  FPropertyViewerImpl *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FPropertyViewerImpl *pFVar4;
  FPropertyViewerImpl *pFVar5;
  bool bVar6;
  
  pFVar1 = (FPropertyViewerImpl *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pFVar4 = (FPropertyViewerImpl *)0x0;
  pFVar5 = pFVar1;
  if (pFVar1 != (FPropertyViewerImpl *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->_padding_;
    do {
      pFVar5 = pFVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14d870d05;
      LOCK();
      aVar3 = *(atomic<int> *)&pFVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pFVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pFVar4 = (this->UserObject).Object;
    pFVar5 = pFVar1;
  }
LAB_14d870d05:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return pFVar4 == param_1;
}

// HasSameObject @ 14d870d30

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  FPropertyViewerImpl *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FPropertyViewerImpl *pFVar4;
  FPropertyViewerImpl *pFVar5;
  bool bVar6;
  
  pFVar1 = (FPropertyViewerImpl *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pFVar4 = (FPropertyViewerImpl *)0x0;
  pFVar5 = pFVar1;
  if (pFVar1 != (FPropertyViewerImpl *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->_padding_;
    do {
      pFVar5 = pFVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14d870d65;
      LOCK();
      aVar3 = *(atomic<int> *)&pFVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pFVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pFVar4 = (this->UserObject).Object;
    pFVar5 = pFVar1;
  }
LAB_14d870d65:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return pFVar4 == param_1;
}

// HasSameObject @ 14d870d90

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>
::HasSameObject(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>
                *this,void *param_1)

{
  FPropertyViewerImpl *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FPropertyViewerImpl *pFVar4;
  FPropertyViewerImpl *pFVar5;
  bool bVar6;
  
  pFVar1 = (FPropertyViewerImpl *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pFVar4 = (FPropertyViewerImpl *)0x0;
  pFVar5 = pFVar1;
  if (pFVar1 != (FPropertyViewerImpl *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->_padding_;
    do {
      pFVar5 = pFVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14d870dc5;
      LOCK();
      aVar3 = *(atomic<int> *)&pFVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pFVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pFVar4 = (this->UserObject).Object;
    pFVar5 = pFVar1;
  }
LAB_14d870dc5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return pFVar4 == param_1;
}

// HasSameObject @ 14d870df0

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  FPropertyViewerImpl *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FPropertyViewerImpl *pFVar4;
  FPropertyViewerImpl *pFVar5;
  bool bVar6;
  
  pFVar1 = (FPropertyViewerImpl *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pFVar4 = (FPropertyViewerImpl *)0x0;
  pFVar5 = pFVar1;
  if (pFVar1 != (FPropertyViewerImpl *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->_padding_;
    do {
      pFVar5 = pFVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14d870e25;
      LOCK();
      aVar3 = *(atomic<int> *)&pFVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pFVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pFVar4 = (this->UserObject).Object;
    pFVar5 = pFVar1;
  }
LAB_14d870e25:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return pFVar4 == param_1;
}

// HasSameObject @ 14d870e50

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  FPropertyViewerImpl *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FPropertyViewerImpl *pFVar4;
  FPropertyViewerImpl *pFVar5;
  bool bVar6;
  
  pFVar1 = (FPropertyViewerImpl *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pFVar4 = (FPropertyViewerImpl *)0x0;
  pFVar5 = pFVar1;
  if (pFVar1 != (FPropertyViewerImpl *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->_padding_;
    do {
      pFVar5 = pFVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14d870e85;
      LOCK();
      aVar3 = *(atomic<int> *)&pFVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pFVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pFVar4 = (this->UserObject).Object;
    pFVar5 = pFVar1;
  }
LAB_14d870e85:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return pFVar4 == param_1;
}

// HasSameObject @ 14d870eb0

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  FPropertyViewerImpl *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FPropertyViewerImpl *pFVar4;
  FPropertyViewerImpl *pFVar5;
  bool bVar6;
  
  pFVar1 = (FPropertyViewerImpl *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pFVar4 = (FPropertyViewerImpl *)0x0;
  pFVar5 = pFVar1;
  if (pFVar1 != (FPropertyViewerImpl *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->_padding_;
    do {
      pFVar5 = pFVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14d870ee5;
      LOCK();
      aVar3 = *(atomic<int> *)&pFVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pFVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pFVar4 = (this->UserObject).Object;
    pFVar5 = pFVar1;
  }
LAB_14d870ee5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return pFVar4 == param_1;
}

// HasSameObject @ 14d870f10

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  FPropertyViewerImpl *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FPropertyViewerImpl *pFVar4;
  FPropertyViewerImpl *pFVar5;
  bool bVar6;
  
  pFVar1 = (FPropertyViewerImpl *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pFVar4 = (FPropertyViewerImpl *)0x0;
  pFVar5 = pFVar1;
  if (pFVar1 != (FPropertyViewerImpl *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->_padding_;
    do {
      pFVar5 = pFVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14d870f45;
      LOCK();
      aVar3 = *(atomic<int> *)&pFVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pFVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pFVar4 = (this->UserObject).Object;
    pFVar5 = pFVar1;
  }
LAB_14d870f45:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return pFVar4 == param_1;
}

// HasSameObject @ 14d870f70

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  pTVar1 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  pTVar4 = (TReferenceControllerBase<1> *)0x0;
  pTVar5 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      pTVar5 = pTVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14d870fa5;
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 0x18);
    pTVar5 = pTVar1;
  }
LAB_14d870fa5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return pTVar4 == param_1;
}

// HasSameObject @ 14d870fd0

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SBoolPropertyValue,1,void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  pTVar1 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  pTVar4 = (TReferenceControllerBase<1> *)0x0;
  pTVar5 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      pTVar5 = pTVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14d871005;
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 0x18);
    pTVar5 = pTVar1;
  }
LAB_14d871005:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return pTVar4 == param_1;
}

// HasSameObject @ 14d871030

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SColorGradingPicker *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SColorGradingPicker *pSVar4;
  SColorGradingPicker *pSVar5;
  bool bVar6;
  
  pSVar1 = (SColorGradingPicker *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SColorGradingPicker *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SColorGradingPicker *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->field_0x8;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14d871065;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->field_0x8;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->field_0x8 = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_14d871065:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 14d871090

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SColorGradingPicker *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SColorGradingPicker *pSVar4;
  SColorGradingPicker *pSVar5;
  bool bVar6;
  
  pSVar1 = (SColorGradingPicker *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SColorGradingPicker *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SColorGradingPicker *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->field_0x8;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14d8710c5;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->field_0x8;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->field_0x8 = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_14d8710c5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 14d8710f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy,bool>
::HasSameObject(TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy,bool>
                *this,void *param_1)

{
  SColorGradingPicker *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SColorGradingPicker *pSVar4;
  SColorGradingPicker *pSVar5;
  bool bVar6;
  
  pSVar1 = (SColorGradingPicker *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SColorGradingPicker *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SColorGradingPicker *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->field_0x8;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14d871125;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->field_0x8;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->field_0x8 = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_14d871125:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 14d871150

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SColorGradingPicker *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SColorGradingPicker *pSVar4;
  SColorGradingPicker *pSVar5;
  bool bVar6;
  
  pSVar1 = (SColorGradingPicker *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SColorGradingPicker *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SColorGradingPicker *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->field_0x8;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14d871185;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->field_0x8;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->field_0x8 = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_14d871185:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 14d8711b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float),FDefaultDelegateUserPolicy,bool>
::HasSameObject(TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float),FDefaultDelegateUserPolicy,bool>
                *this,void *param_1)

{
  SColorGradingPicker *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SColorGradingPicker *pSVar4;
  SColorGradingPicker *pSVar5;
  bool bVar6;
  
  pSVar1 = (SColorGradingPicker *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SColorGradingPicker *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SColorGradingPicker *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->field_0x8;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14d8711e5;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->field_0x8;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->field_0x8 = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_14d8711e5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 14d871210

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SColorGradingPicker *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SColorGradingPicker *pSVar4;
  SColorGradingPicker *pSVar5;
  bool bVar6;
  
  pSVar1 = (SColorGradingPicker *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SColorGradingPicker *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SColorGradingPicker *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->field_0x8;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14d871245;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->field_0x8;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->field_0x8 = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_14d871245:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 14d871270

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  pTVar1 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  pTVar4 = (TReferenceControllerBase<1> *)0x0;
  pTVar5 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      pTVar5 = pTVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14d8712a5;
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 0x18);
    pTVar5 = pTVar1;
  }
LAB_14d8712a5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return pTVar4 == param_1;
}

// HasSameObject @ 14d8712d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SColorGradingPicker *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SColorGradingPicker *pSVar4;
  SColorGradingPicker *pSVar5;
  bool bVar6;
  
  pSVar1 = (SColorGradingPicker *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SColorGradingPicker *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SColorGradingPicker *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->field_0x8;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14d871305;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->field_0x8;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->field_0x8 = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_14d871305:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 14d871330

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SEnumPropertyValue,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SEnumPropertyValue,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SEnumPropertyValue *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SEnumPropertyValue *pSVar4;
  SEnumPropertyValue *pSVar5;
  bool bVar6;
  
  pSVar1 = (SEnumPropertyValue *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SEnumPropertyValue *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SEnumPropertyValue *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14d871365;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_14d871365:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 14d871390

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SEnumPropertyValue,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
::HasSameObject(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SEnumPropertyValue,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
                *this,void *param_1)

{
  SEnumPropertyValue *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SEnumPropertyValue *pSVar4;
  SEnumPropertyValue *pSVar5;
  bool bVar6;
  
  pSVar1 = (SEnumPropertyValue *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SEnumPropertyValue *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SEnumPropertyValue *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14d8713c5;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_14d8713c5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 14d8713f0

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(double),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(double),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SNumericPropertyValue *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SNumericPropertyValue *pSVar4;
  SNumericPropertyValue *pSVar5;
  bool bVar6;
  
  pSVar1 = (SNumericPropertyValue *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SNumericPropertyValue *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SNumericPropertyValue *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14d871425;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_14d871425:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 14d871450

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(double,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  pTVar1 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  pTVar4 = (TReferenceControllerBase<1> *)0x0;
  pTVar5 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      pTVar5 = pTVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14d871485;
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 0x18);
    pTVar5 = pTVar1;
  }
LAB_14d871485:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return pTVar4 == param_1;
}

// HasSameObject @ 14d8714b0

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(__int64),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(__int64),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SNumericPropertyValue *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SNumericPropertyValue *pSVar4;
  SNumericPropertyValue *pSVar5;
  bool bVar6;
  
  pSVar1 = (SNumericPropertyValue *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SNumericPropertyValue *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SNumericPropertyValue *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14d8714e5;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_14d8714e5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 14d871510

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(__int64,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  pTVar1 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  pTVar4 = (TReferenceControllerBase<1> *)0x0;
  pTVar5 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      pTVar5 = pTVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14d871545;
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 0x18);
    pTVar5 = pTVar1;
  }
LAB_14d871545:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return pTVar4 == param_1;
}

// HasSameObject @ 14d871570

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SNumericPropertyValue *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SNumericPropertyValue *pSVar4;
  SNumericPropertyValue *pSVar5;
  bool bVar6;
  
  pSVar1 = (SNumericPropertyValue *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SNumericPropertyValue *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SNumericPropertyValue *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14d8715a5;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pSVar4 = (this->UserObject).Object;
    pSVar5 = pSVar1;
  }
LAB_14d8715a5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 14d8715d0

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(unsigned___int64,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  pTVar1 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  pTVar4 = (TReferenceControllerBase<1> *)0x0;
  pTVar5 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      pTVar5 = pTVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14d871605;
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 0x18);
    pTVar5 = pTVar1;
  }
LAB_14d871605:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return pTVar4 == param_1;
}

// HasSameObject @ 14d871630

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SStringPropertyValue,1,void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  pTVar1 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  pTVar4 = (TReferenceControllerBase<1> *)0x0;
  pTVar5 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      pTVar5 = pTVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14d871665;
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 0x18);
    pTVar5 = pTVar1;
  }
LAB_14d871665:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return pTVar4 == param_1;
}

// IsSafeToExecute @ 14d871dd0

bool __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object !=
        (STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14d871e00

bool __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object !=
        (STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14d871e30

bool __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SBoolPropertyValue_const_,1,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  if (((*(longlong *)((longlong)this + 0x18) != 0) && (*(longlong *)((longlong)this + 0x20) != 0))
     && (0 < *(int *)(*(longlong *)((longlong)this + 0x20) + 8))) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14d871e60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SColorGradingComponentViewer *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14d871e90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SColorGradingComponentViewer *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14d871ec0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SColorGradingComponentViewer *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14d871ef0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingPicker_const_,1,TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingPicker_const_,1,TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SColorGradingPicker *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14d871f20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingPicker_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingPicker_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SColorGradingPicker *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14d871f50

bool __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SDefaultPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SDefaultPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SDefaultPropertyValue *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14d871f80

bool __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SEnumPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SEnumPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SEnumPropertyValue *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14d871fb0

bool __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SListViewPinnedRowWidget *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14d871fe0

bool __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SListViewPinnedRowWidget *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14d872010

bool __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,double___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,double___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SNumericPropertyValue *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14d872040

bool __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,__int64___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,__int64___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SNumericPropertyValue *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14d872070

bool __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,unsigned___int64___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,unsigned___int64___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SNumericPropertyValue *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14d8720a0

bool __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SStringPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SStringPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SStringPropertyValue *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14d8720d0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object !=
        (SMultiColumnTableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14d872100

bool __thiscall
TBaseSPMethodDelegateInstance<0,TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object !=
        (TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14d872130

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (FPropertyViewerImpl *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14d872160

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (FPropertyViewerImpl *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14d872190

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (FPropertyViewerImpl *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14d8721c0

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (FPropertyViewerImpl *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14d8721f0

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (FPropertyViewerImpl *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14d872220

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (FPropertyViewerImpl *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14d872250

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (FPropertyViewerImpl *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14d872280

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  if (((*(longlong *)((longlong)this + 0x18) != 0) && (*(longlong *)((longlong)this + 0x20) != 0))
     && (0 < *(int *)(*(longlong *)((longlong)this + 0x20) + 8))) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14d8722b0

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SBoolPropertyValue,1,void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  if (((*(longlong *)((longlong)this + 0x18) != 0) && (*(longlong *)((longlong)this + 0x20) != 0))
     && (0 < *(int *)(*(longlong *)((longlong)this + 0x20) + 8))) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14d8722e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SColorGradingPicker *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14d872310

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SColorGradingPicker *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14d872340

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy,bool>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy,bool>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SColorGradingPicker *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14d872370

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SColorGradingPicker *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14d8723a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float),FDefaultDelegateUserPolicy,bool>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float),FDefaultDelegateUserPolicy,bool>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SColorGradingPicker *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14d8723d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SColorGradingPicker *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14d872400

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  if (((*(longlong *)((longlong)this + 0x18) != 0) && (*(longlong *)((longlong)this + 0x20) != 0))
     && (0 < *(int *)(*(longlong *)((longlong)this + 0x20) + 8))) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14d872430

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SColorGradingPicker *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14d872460

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SEnumPropertyValue,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SEnumPropertyValue,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SEnumPropertyValue *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14d872490

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SEnumPropertyValue,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SEnumPropertyValue,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SEnumPropertyValue *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14d8724c0

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(double),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(double),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SNumericPropertyValue *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14d8724f0

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(double,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  if (((*(longlong *)((longlong)this + 0x18) != 0) && (*(longlong *)((longlong)this + 0x20) != 0))
     && (0 < *(int *)(*(longlong *)((longlong)this + 0x20) + 8))) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14d872520

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(__int64),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(__int64),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SNumericPropertyValue *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14d872550

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(__int64,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  if (((*(longlong *)((longlong)this + 0x18) != 0) && (*(longlong *)((longlong)this + 0x20) != 0))
     && (0 < *(int *)(*(longlong *)((longlong)this + 0x20) + 8))) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14d872580

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SNumericPropertyValue *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14d8725b0

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(unsigned___int64,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  if (((*(longlong *)((longlong)this + 0x18) != 0) && (*(longlong *)((longlong)this + 0x20) != 0))
     && (0 < *(int *)(*(longlong *)((longlong)this + 0x20) + 8))) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14d8725e0

bool __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SStringPropertyValue,1,void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  if (((*(longlong *)((longlong)this + 0x18) != 0) && (*(longlong *)((longlong)this + 0x20) != 0))
     && (0 < *(int *)(*(longlong *)((longlong)this + 0x20) + 8))) {
    return true;
  }
  return false;
}

// TryGetBoundFunctionName @ 14d88b3e0

FName __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d88b3f0

FName __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d88b400

FName __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SBoolPropertyValue_const_,1,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d88b410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FName __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d88b420

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FName __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d88b430

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FName __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d88b440

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FName __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingPicker_const_,1,TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingPicker_const_,1,TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d88b450

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FName __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingPicker_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingPicker_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d88b460

FName __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SDefaultPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SDefaultPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d88b470

FName __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SEnumPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SEnumPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d88b480

FName __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d88b490

FName __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d88b4a0

FName __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,double___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,double___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d88b4b0

FName __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,__int64___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,__int64___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d88b4c0

FName __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,unsigned___int64___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,unsigned___int64___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d88b4d0

FName __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SStringPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SStringPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d88b4e0

FName __thiscall
TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d88b4f0

FName __thiscall
TBaseSPMethodDelegateInstance<0,TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d88b500

FName __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d88b510

FName __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d88b520

FName __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d88b530

FName __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d88b540

FName __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d88b550

FName __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d88b560

FName __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d88b570

FName __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d88b580

FName __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SBoolPropertyValue,1,void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d88b590

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FName __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d88b5a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FName __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d88b5b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FName __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy,bool>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy,bool>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d88b5c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FName __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d88b5d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FName __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float),FDefaultDelegateUserPolicy,bool>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float),FDefaultDelegateUserPolicy,bool>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d88b5e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FName __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d88b5f0

FName __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d88b600

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FName __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d88b610

FName __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SEnumPropertyValue,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SEnumPropertyValue,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d88b620

FName __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SEnumPropertyValue,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SEnumPropertyValue,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d88b630

FName __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(double),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(double),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d88b640

FName __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(double,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d88b650

FName __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(__int64),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(__int64),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d88b660

FName __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(__int64,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d88b670

FName __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d88b680

FName __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(unsigned___int64,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d88b690

FName __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SStringPropertyValue,1,void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

