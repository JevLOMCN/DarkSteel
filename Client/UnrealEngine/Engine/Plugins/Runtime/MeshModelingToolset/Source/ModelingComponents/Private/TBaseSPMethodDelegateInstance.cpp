// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 66

// CreateCopy @ 14cbc31c0

void __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUCombinedTransformGizmo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFTransformGizmoDataBinder___00__A6AXPEAVUCombinedTransformGizmo___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14cbc3260

void __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUCombinedTransformGizmo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFTransformGizmoDataBinder___00__A6AXPEAVUCombinedTransformGizmo___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14cbc32d0

void __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUCombinedTransformGizmo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFTransformGizmoDataBinder___00__A6AXPEAVUCombinedTransformGizmo___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14cbc3390

void __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,UTransformProxy_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,UTransformProxy_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUCombinedTransformGizmo__PEAVUTransformProxy___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFTransformGizmoDataBinder___00__A6AXPEAVUCombinedTransformGizmo__PEAVUTransformProxy___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14cbc3430

void __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,UTransformProxy_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,UTransformProxy_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUCombinedTransformGizmo__PEAVUTransformProxy___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFTransformGizmoDataBinder___00__A6AXPEAVUCombinedTransformGizmo__PEAVUTransformProxy___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14cbc34a0

void __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,UTransformProxy_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,UTransformProxy_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUCombinedTransformGizmo__PEAVUTransformProxy___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFTransformGizmoDataBinder___00__A6AXPEAVUCombinedTransformGizmo__PEAVUTransformProxy___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14cbc3560

void __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,TOptional<UE::Math::TTransform<double>_>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,TOptional<UE::Math::TTransform<double>_>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUCombinedTransformGizmo__U__TOptional_U__TTransform_N_Math_UE_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFTransformGizmoDataBinder___00__A6AXPEAVUCombinedTransformGizmo__U__TOptional_U__TTransform_N_Math_UE_____ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14cbc3600

void __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,TOptional<UE::Math::TTransform<double>_>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,TOptional<UE::Math::TTransform<double>_>),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUCombinedTransformGizmo__U__TOptional_U__TTransform_N_Math_UE_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFTransformGizmoDataBinder___00__A6AXPEAVUCombinedTransformGizmo__U__TOptional_U__TTransform_N_Math_UE_____ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14cbc3670

void __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,TOptional<UE::Math::TTransform<double>_>),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,TOptional<UE::Math::TTransform<double>_>),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUCombinedTransformGizmo__U__TOptional_U__TTransform_N_Math_UE_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFTransformGizmoDataBinder___00__A6AXPEAVUCombinedTransformGizmo__U__TOptional_U__TTransform_N_Math_UE_____ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14cbc3730

void __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,bool),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUCombinedTransformGizmo___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFTransformGizmoDataBinder___00__A6AXPEAVUCombinedTransformGizmo___N_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14cbc37d0

void __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,bool),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUCombinedTransformGizmo___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFTransformGizmoDataBinder___00__A6AXPEAVUCombinedTransformGizmo___N_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14cbc3840

void __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,bool),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUCombinedTransformGizmo___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFTransformGizmoDataBinder___00__A6AXPEAVUCombinedTransformGizmo___N_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 14cbc3900

void __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,UCombinedTransformGizmo_*>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,UCombinedTransformGizmo_*>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUTransformProxy___ZUFDefaultDelegateUserPolicy__PEAVUCombinedTransformGizmo____6B_
    ;
    puVar3[1] = this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFTransformGizmoDataBinder___00__A6AXPEAVUTransformProxy___ZUFDefaultDelegateUserPolicy__PEAVUCombinedTransformGizmo____6B_
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

// CreateCopy @ 14cbc39b0

void __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,UCombinedTransformGizmo_*>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,UCombinedTransformGizmo_*>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUTransformProxy___ZUFDefaultDelegateUserPolicy__PEAVUCombinedTransformGizmo____6B_
    ;
    puVar3[1] = this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFTransformGizmoDataBinder___00__A6AXPEAVUTransformProxy___ZUFDefaultDelegateUserPolicy__PEAVUCombinedTransformGizmo____6B_
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

// CreateCopy @ 14cbc3a20

void __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,UCombinedTransformGizmo_*>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,UCombinedTransformGizmo_*>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUTransformProxy___ZUFDefaultDelegateUserPolicy__PEAVUCombinedTransformGizmo____6B_
    ;
    puVar7[1] = this->_padding_;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFTransformGizmoDataBinder___00__A6AXPEAVUTransformProxy___ZUFDefaultDelegateUserPolicy__PEAVUCombinedTransformGizmo____6B_
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

// CreateCopy @ 14cbc3ae0

void __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,UCombinedTransformGizmo_*>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,UCombinedTransformGizmo_*>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUTransformProxy__U__TTransform_N_Math_UE___ZUFDefaultDelegateUserPolicy__PEAVUCombinedTransformGizmo____6B_
    ;
    puVar3[1] = this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFTransformGizmoDataBinder___00__A6AXPEAVUTransformProxy__U__TTransform_N_Math_UE___ZUFDefaultDelegateUserPolicy__PEAVUCombinedTransformGizmo____6B_
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

// CreateCopy @ 14cbc3b90

void __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,UCombinedTransformGizmo_*>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,UCombinedTransformGizmo_*>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUTransformProxy__U__TTransform_N_Math_UE___ZUFDefaultDelegateUserPolicy__PEAVUCombinedTransformGizmo____6B_
    ;
    puVar3[1] = this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFTransformGizmoDataBinder___00__A6AXPEAVUTransformProxy__U__TTransform_N_Math_UE___ZUFDefaultDelegateUserPolicy__PEAVUCombinedTransformGizmo____6B_
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

// CreateCopy @ 14cbc3c00

void __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,UCombinedTransformGizmo_*>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,UCombinedTransformGizmo_*>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUTransformProxy__U__TTransform_N_Math_UE___ZUFDefaultDelegateUserPolicy__PEAVUCombinedTransformGizmo____6B_
    ;
    puVar7[1] = this->_padding_;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFTransformGizmoDataBinder___00__A6AXPEAVUTransformProxy__U__TTransform_N_Math_UE___ZUFDefaultDelegateUserPolicy__PEAVUCombinedTransformGizmo____6B_
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

// Execute @ 14cbc43b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*),FDefaultDelegateUserPolicy>
          *this,UCombinedTransformGizmo *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FTransformGizmoDataBinder *pFVar3;
  FTransformGizmoDataBinder *pFVar4;
  bool bVar5;
  FTransformGizmoDataBinder *local_res8;
  
  pFVar3 = (FTransformGizmoDataBinder *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (FTransformGizmoDataBinder *)0x0;
  pFVar4 = pFVar3;
  if (pFVar3 != (FTransformGizmoDataBinder *)0x0) {
    aVar1 = *(atomic<int> *)&pFVar3->field_0x8;
    do {
      pFVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14cbc43f1;
      LOCK();
      aVar2 = *(atomic<int> *)&pFVar3->field_0x8;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pFVar3->field_0x8 = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pFVar4 = pFVar3;
  }
LAB_14cbc43f1:
  pFVar3 = UE::Core::Private::
           DereferenceIfNecessary<FTransformGizmoDataBinder,FTransformGizmoDataBinder_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)(&(pFVar3->BoundGizmos).Hash + -8) +
             (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar4);
  return;
}

// Execute @ 14cbc4440

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,UTransformProxy_*),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,UTransformProxy_*),FDefaultDelegateUserPolicy>
          *this,UCombinedTransformGizmo *param_1,UTransformProxy *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FTransformGizmoDataBinder *pFVar3;
  FTransformGizmoDataBinder *pFVar4;
  bool bVar5;
  FTransformGizmoDataBinder *local_res8;
  
  pFVar3 = (FTransformGizmoDataBinder *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (FTransformGizmoDataBinder *)0x0;
  pFVar4 = pFVar3;
  if (pFVar3 != (FTransformGizmoDataBinder *)0x0) {
    aVar1 = *(atomic<int> *)&pFVar3->field_0x8;
    do {
      pFVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14cbc4481;
      LOCK();
      aVar2 = *(atomic<int> *)&pFVar3->field_0x8;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pFVar3->field_0x8 = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pFVar4 = pFVar3;
  }
LAB_14cbc4481:
  pFVar3 = UE::Core::Private::
           DereferenceIfNecessary<FTransformGizmoDataBinder,FTransformGizmoDataBinder_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)(&(pFVar3->BoundGizmos).Hash + -8) +
             (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar4);
  return;
}

// Execute @ 14cbc44e0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,TOptional<UE::Math::TTransform<double>_>),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,TOptional<UE::Math::TTransform<double>_>),FDefaultDelegateUserPolicy>
          *this,UCombinedTransformGizmo *param_1,TOptional<UE::Math::TTransform<double>_> *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FTransformGizmoDataBinder *pFVar3;
  FTransformGizmoDataBinder *pFVar4;
  bool bVar5;
  FTransformGizmoDataBinder *local_res8;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  double local_28;
  double dStack_20;
  char local_18;
  
  pFVar3 = (FTransformGizmoDataBinder *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (FTransformGizmoDataBinder *)0x0;
  pFVar4 = pFVar3;
  if (pFVar3 != (FTransformGizmoDataBinder *)0x0) {
    aVar1 = *(atomic<int> *)&pFVar3->field_0x8;
    do {
      pFVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14cbc4535;
      LOCK();
      aVar2 = *(atomic<int> *)&pFVar3->field_0x8;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pFVar3->field_0x8 = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pFVar4 = pFVar3;
  }
LAB_14cbc4535:
  pFVar3 = UE::Core::Private::
           DereferenceIfNecessary<FTransformGizmoDataBinder,FTransformGizmoDataBinder_*_&>
                     (&local_res8);
  local_18 = param_2->bIsSet;
  if ((bool)local_18 != false) {
    local_78 = (param_2->TypedValue).Rotation.XY.m128d_f64[0];
    dStack_70 = (param_2->TypedValue).Rotation.XY.m128d_f64[1];
    local_68 = (param_2->TypedValue).Rotation.ZW.m128d_f64[0];
    dStack_60 = (param_2->TypedValue).Rotation.ZW.m128d_f64[1];
    local_58 = (param_2->TypedValue).Translation.XY.m128d_f64[0];
    dStack_50 = (param_2->TypedValue).Translation.XY.m128d_f64[1];
    local_48 = (param_2->TypedValue).Translation.ZW.m128d_f64[0];
    dStack_40 = (param_2->TypedValue).Translation.ZW.m128d_f64[1];
    local_38 = *(undefined4 *)(param_2->TypedValue).Scale3D.XY.m128d_f64;
    uStack_34 = *(undefined4 *)((longlong)(param_2->TypedValue).Scale3D.XY.m128d_f64 + 4);
    uStack_30 = *(undefined4 *)((param_2->TypedValue).Scale3D.XY.m128d_f64 + 1);
    uStack_2c = *(undefined4 *)((longlong)(param_2->TypedValue).Scale3D.XY.m128d_f64 + 0xc);
    local_28 = (param_2->TypedValue).Scale3D.ZW.m128d_f64[0];
    dStack_20 = (param_2->TypedValue).Scale3D.ZW.m128d_f64[1];
  }
  (**(code **)&this->MethodPtr)
            ((longlong)(&(pFVar3->BoundGizmos).Hash + -8) +
             (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,&local_78);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar4);
  return;
}

// Execute @ 14cbc45f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,bool),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,bool),FDefaultDelegateUserPolicy>
          *this,UCombinedTransformGizmo *param_1,bool param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FTransformGizmoDataBinder *pFVar3;
  FTransformGizmoDataBinder *pFVar4;
  bool bVar5;
  FTransformGizmoDataBinder *local_res8;
  
  pFVar3 = (FTransformGizmoDataBinder *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (FTransformGizmoDataBinder *)0x0;
  pFVar4 = pFVar3;
  if (pFVar3 != (FTransformGizmoDataBinder *)0x0) {
    aVar1 = *(atomic<int> *)&pFVar3->field_0x8;
    do {
      pFVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14cbc4632;
      LOCK();
      aVar2 = *(atomic<int> *)&pFVar3->field_0x8;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pFVar3->field_0x8 = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pFVar4 = pFVar3;
  }
LAB_14cbc4632:
  pFVar3 = UE::Core::Private::
           DereferenceIfNecessary<FTransformGizmoDataBinder,FTransformGizmoDataBinder_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)(&(pFVar3->BoundGizmos).Hash + -8) +
             (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar4);
  return;
}

// Execute @ 14cbc4690

void __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,UCombinedTransformGizmo_*>
::Execute(TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,UCombinedTransformGizmo_*>
          *this,UTransformProxy *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FTransformGizmoDataBinder *pFVar3;
  FTransformGizmoDataBinder *pFVar4;
  bool bVar5;
  FTransformGizmoDataBinder *local_res8;
  
  pFVar3 = (FTransformGizmoDataBinder *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (FTransformGizmoDataBinder *)0x0;
  pFVar4 = pFVar3;
  if (pFVar3 != (FTransformGizmoDataBinder *)0x0) {
    aVar1 = *(atomic<int> *)&pFVar3->field_0x8;
    do {
      pFVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14cbc46d1;
      LOCK();
      aVar2 = *(atomic<int> *)&pFVar3->field_0x8;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pFVar3->field_0x8 = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pFVar4 = pFVar3;
  }
LAB_14cbc46d1:
  pFVar3 = UE::Core::Private::
           DereferenceIfNecessary<FTransformGizmoDataBinder,FTransformGizmoDataBinder_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)(&(pFVar3->BoundGizmos).Hash + -8) +
             (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar4);
  return;
}

// Execute @ 14cbc4720

void __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,UCombinedTransformGizmo_*>
::Execute(TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,UCombinedTransformGizmo_*>
          *this,UTransformProxy *param_1,TTransform<double> *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FTransformGizmoDataBinder *pFVar3;
  FTransformGizmoDataBinder *pFVar4;
  bool bVar5;
  FTransformGizmoDataBinder *local_res8;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  double local_18;
  double dStack_10;
  
  pFVar3 = (FTransformGizmoDataBinder *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (FTransformGizmoDataBinder *)0x0;
  pFVar4 = pFVar3;
  if (pFVar3 != (FTransformGizmoDataBinder *)0x0) {
    aVar1 = *(atomic<int> *)&pFVar3->field_0x8;
    do {
      pFVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_14cbc4765;
      LOCK();
      aVar2 = *(atomic<int> *)&pFVar3->field_0x8;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        *(atomic<int> *)&pFVar3->field_0x8 = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    local_res8 = (this->UserObject).Object;
    pFVar4 = pFVar3;
  }
LAB_14cbc4765:
  local_68 = (param_2->Rotation).XY.m128d_f64[0];
  dStack_60 = (param_2->Rotation).XY.m128d_f64[1];
  local_58 = (param_2->Rotation).ZW.m128d_f64[0];
  dStack_50 = (param_2->Rotation).ZW.m128d_f64[1];
  local_48 = (param_2->Translation).XY.m128d_f64[0];
  dStack_40 = (param_2->Translation).XY.m128d_f64[1];
  local_38 = (param_2->Translation).ZW.m128d_f64[0];
  dStack_30 = (param_2->Translation).ZW.m128d_f64[1];
  local_28 = (param_2->Scale3D).XY.m128d_f64[0];
  dStack_20 = (param_2->Scale3D).XY.m128d_f64[1];
  local_18 = (param_2->Scale3D).ZW.m128d_f64[0];
  dStack_10 = (param_2->Scale3D).ZW.m128d_f64[1];
  pFVar3 = UE::Core::Private::
           DereferenceIfNecessary<FTransformGizmoDataBinder,FTransformGizmoDataBinder_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)(&(pFVar3->BoundGizmos).Hash + -8) +
             (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,&local_68,this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar4);
  return;
}

// ExecuteIfSafe @ 14cbc49d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*),FDefaultDelegateUserPolicy>
                *this,UCombinedTransformGizmo *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FTransformGizmoDataBinder *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FTransformGizmoDataBinder *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14cbc4a05;
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
    if (local_res8 != (FTransformGizmoDataBinder *)0x0) {
      pFVar3 = UE::Core::Private::
               DereferenceIfNecessary<FTransformGizmoDataBinder,FTransformGizmoDataBinder_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)(&(pFVar3->BoundGizmos).Hash + -8) +
                 (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14cbc4a05:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 14cbc4a70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,UTransformProxy_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,UTransformProxy_*),FDefaultDelegateUserPolicy>
                *this,UCombinedTransformGizmo *param_1,UTransformProxy *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FTransformGizmoDataBinder *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FTransformGizmoDataBinder *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14cbc4ab0;
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
    if (local_res8 != (FTransformGizmoDataBinder *)0x0) {
      pFVar3 = UE::Core::Private::
               DereferenceIfNecessary<FTransformGizmoDataBinder,FTransformGizmoDataBinder_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)(&(pFVar3->BoundGizmos).Hash + -8) +
                 (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,param_2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14cbc4ab0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 14cbc4b20

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,TOptional<UE::Math::TTransform<double>_>),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,TOptional<UE::Math::TTransform<double>_>),FDefaultDelegateUserPolicy>
                *this,UCombinedTransformGizmo *param_1,
               TOptional<UE::Math::TTransform<double>_> *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FTransformGizmoDataBinder *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FTransformGizmoDataBinder *local_res8;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  double local_28;
  double dStack_20;
  char local_18;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14cbc4b60;
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
    if (local_res8 != (FTransformGizmoDataBinder *)0x0) {
      pFVar3 = UE::Core::Private::
               DereferenceIfNecessary<FTransformGizmoDataBinder,FTransformGizmoDataBinder_*_&>
                         (&local_res8);
      local_18 = param_2->bIsSet;
      if ((bool)local_18 != false) {
        local_78 = (param_2->TypedValue).Rotation.XY.m128d_f64[0];
        dStack_70 = (param_2->TypedValue).Rotation.XY.m128d_f64[1];
        local_68 = (param_2->TypedValue).Rotation.ZW.m128d_f64[0];
        dStack_60 = (param_2->TypedValue).Rotation.ZW.m128d_f64[1];
        local_58 = (param_2->TypedValue).Translation.XY.m128d_f64[0];
        dStack_50 = (param_2->TypedValue).Translation.XY.m128d_f64[1];
        local_48 = (param_2->TypedValue).Translation.ZW.m128d_f64[0];
        dStack_40 = (param_2->TypedValue).Translation.ZW.m128d_f64[1];
        local_38 = *(undefined4 *)(param_2->TypedValue).Scale3D.XY.m128d_f64;
        uStack_34 = *(undefined4 *)((longlong)(param_2->TypedValue).Scale3D.XY.m128d_f64 + 4);
        uStack_30 = *(undefined4 *)((param_2->TypedValue).Scale3D.XY.m128d_f64 + 1);
        uStack_2c = *(undefined4 *)((longlong)(param_2->TypedValue).Scale3D.XY.m128d_f64 + 0xc);
        local_28 = (param_2->TypedValue).Scale3D.ZW.m128d_f64[0];
        dStack_20 = (param_2->TypedValue).Scale3D.ZW.m128d_f64[1];
      }
      (**(code **)&this->MethodPtr)
                ((longlong)(&(pFVar3->BoundGizmos).Hash + -8) +
                 (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,&local_78);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14cbc4b60:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 14cbc4c30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,bool),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,bool),FDefaultDelegateUserPolicy>
                *this,UCombinedTransformGizmo *param_1,bool param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FTransformGizmoDataBinder *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FTransformGizmoDataBinder *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14cbc4c70;
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
    if (local_res8 != (FTransformGizmoDataBinder *)0x0) {
      pFVar3 = UE::Core::Private::
               DereferenceIfNecessary<FTransformGizmoDataBinder,FTransformGizmoDataBinder_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)(&(pFVar3->BoundGizmos).Hash + -8) +
                 (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,param_2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14cbc4c70:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 14cbc4ce0

bool __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,UCombinedTransformGizmo_*>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,UCombinedTransformGizmo_*>
                *this,UTransformProxy *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FTransformGizmoDataBinder *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FTransformGizmoDataBinder *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14cbc4d15;
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
    if (local_res8 != (FTransformGizmoDataBinder *)0x0) {
      pFVar3 = UE::Core::Private::
               DereferenceIfNecessary<FTransformGizmoDataBinder,FTransformGizmoDataBinder_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)(&(pFVar3->BoundGizmos).Hash + -8) +
                 (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,this->_padding_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14cbc4d15:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 14cbc4d80

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,UCombinedTransformGizmo_*>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,UCombinedTransformGizmo_*>
                *this,UTransformProxy *param_1,TTransform<double> *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FTransformGizmoDataBinder *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FTransformGizmoDataBinder *local_res8;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  double local_18;
  double dStack_10;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14cbc4dc0;
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
    if (local_res8 != (FTransformGizmoDataBinder *)0x0) {
      local_68 = (param_2->Rotation).XY.m128d_f64[0];
      dStack_60 = (param_2->Rotation).XY.m128d_f64[1];
      local_58 = (param_2->Rotation).ZW.m128d_f64[0];
      dStack_50 = (param_2->Rotation).ZW.m128d_f64[1];
      local_48 = (param_2->Translation).XY.m128d_f64[0];
      dStack_40 = (param_2->Translation).XY.m128d_f64[1];
      local_38 = (param_2->Translation).ZW.m128d_f64[0];
      dStack_30 = (param_2->Translation).ZW.m128d_f64[1];
      local_28 = (param_2->Scale3D).XY.m128d_f64[0];
      dStack_20 = (param_2->Scale3D).XY.m128d_f64[1];
      local_18 = (param_2->Scale3D).ZW.m128d_f64[0];
      dStack_10 = (param_2->Scale3D).ZW.m128d_f64[1];
      pFVar3 = UE::Core::Private::
               DereferenceIfNecessary<FTransformGizmoDataBinder,FTransformGizmoDataBinder_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)(&(pFVar3->BoundGizmos).Hash + -8) +
                 (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,&local_68,this->_padding_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_14cbc4dc0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// GetBoundProgramCounterForTimerManager @ 14cbc53e0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14cbc53f0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,UTransformProxy_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,UTransformProxy_*),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14cbc5400

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,TOptional<UE::Math::TTransform<double>_>),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,TOptional<UE::Math::TTransform<double>_>),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14cbc5410

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,bool),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,bool),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14cbc5420

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,UCombinedTransformGizmo_*>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,UCombinedTransformGizmo_*>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14cbc5430

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,UCombinedTransformGizmo_*>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,UCombinedTransformGizmo_*>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetObjectForTimerManager @ 14cbc6e10

void * __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FTransformGizmoDataBinder *pFVar2;
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

// GetObjectForTimerManager @ 14cbc6e70

void * __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,UTransformProxy_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,UTransformProxy_*),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FTransformGizmoDataBinder *pFVar2;
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

// GetObjectForTimerManager @ 14cbc6ed0

void * __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,TOptional<UE::Math::TTransform<double>_>),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,TOptional<UE::Math::TTransform<double>_>),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FTransformGizmoDataBinder *pFVar2;
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

// GetObjectForTimerManager @ 14cbc6f30

void * __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,bool),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,bool),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FTransformGizmoDataBinder *pFVar2;
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

// GetObjectForTimerManager @ 14cbc6f90

void * __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,UCombinedTransformGizmo_*>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,UCombinedTransformGizmo_*>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FTransformGizmoDataBinder *pFVar2;
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

// GetObjectForTimerManager @ 14cbc6ff0

void * __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,UCombinedTransformGizmo_*>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,UCombinedTransformGizmo_*>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FTransformGizmoDataBinder *pFVar2;
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

// GetUObject @ 14cbc7770

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14cbc7780

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,UTransformProxy_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,UTransformProxy_*),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14cbc7790

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,TOptional<UE::Math::TTransform<double>_>),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,TOptional<UE::Math::TTransform<double>_>),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14cbc77a0

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,bool),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,bool),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14cbc77b0

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,UCombinedTransformGizmo_*>
::GetUObject(TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,UCombinedTransformGizmo_*>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14cbc77c0

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,UCombinedTransformGizmo_*>
::GetUObject(TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,UCombinedTransformGizmo_*>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14cbc7d60

bool __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  FTransformGizmoDataBinder *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FTransformGizmoDataBinder *pFVar4;
  FTransformGizmoDataBinder *pFVar5;
  bool bVar6;
  
  pFVar1 = (FTransformGizmoDataBinder *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pFVar4 = (FTransformGizmoDataBinder *)0x0;
  pFVar5 = pFVar1;
  if (pFVar1 != (FTransformGizmoDataBinder *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->field_0x8;
    do {
      pFVar5 = pFVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14cbc7d95;
      LOCK();
      aVar3 = *(atomic<int> *)&pFVar1->field_0x8;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pFVar1->field_0x8 = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pFVar4 = (this->UserObject).Object;
    pFVar5 = pFVar1;
  }
LAB_14cbc7d95:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return pFVar4 == param_1;
}

// HasSameObject @ 14cbc7dc0

bool __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,UTransformProxy_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,UTransformProxy_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  FTransformGizmoDataBinder *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FTransformGizmoDataBinder *pFVar4;
  FTransformGizmoDataBinder *pFVar5;
  bool bVar6;
  
  pFVar1 = (FTransformGizmoDataBinder *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pFVar4 = (FTransformGizmoDataBinder *)0x0;
  pFVar5 = pFVar1;
  if (pFVar1 != (FTransformGizmoDataBinder *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->field_0x8;
    do {
      pFVar5 = pFVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14cbc7df5;
      LOCK();
      aVar3 = *(atomic<int> *)&pFVar1->field_0x8;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pFVar1->field_0x8 = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pFVar4 = (this->UserObject).Object;
    pFVar5 = pFVar1;
  }
LAB_14cbc7df5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return pFVar4 == param_1;
}

// HasSameObject @ 14cbc7e20

bool __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,TOptional<UE::Math::TTransform<double>_>),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,TOptional<UE::Math::TTransform<double>_>),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  FTransformGizmoDataBinder *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FTransformGizmoDataBinder *pFVar4;
  FTransformGizmoDataBinder *pFVar5;
  bool bVar6;
  
  pFVar1 = (FTransformGizmoDataBinder *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pFVar4 = (FTransformGizmoDataBinder *)0x0;
  pFVar5 = pFVar1;
  if (pFVar1 != (FTransformGizmoDataBinder *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->field_0x8;
    do {
      pFVar5 = pFVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14cbc7e55;
      LOCK();
      aVar3 = *(atomic<int> *)&pFVar1->field_0x8;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pFVar1->field_0x8 = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pFVar4 = (this->UserObject).Object;
    pFVar5 = pFVar1;
  }
LAB_14cbc7e55:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return pFVar4 == param_1;
}

// HasSameObject @ 14cbc7e80

bool __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,bool),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,bool),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  FTransformGizmoDataBinder *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FTransformGizmoDataBinder *pFVar4;
  FTransformGizmoDataBinder *pFVar5;
  bool bVar6;
  
  pFVar1 = (FTransformGizmoDataBinder *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pFVar4 = (FTransformGizmoDataBinder *)0x0;
  pFVar5 = pFVar1;
  if (pFVar1 != (FTransformGizmoDataBinder *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->field_0x8;
    do {
      pFVar5 = pFVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14cbc7eb5;
      LOCK();
      aVar3 = *(atomic<int> *)&pFVar1->field_0x8;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pFVar1->field_0x8 = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pFVar4 = (this->UserObject).Object;
    pFVar5 = pFVar1;
  }
LAB_14cbc7eb5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return pFVar4 == param_1;
}

// HasSameObject @ 14cbc7ee0

bool __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,UCombinedTransformGizmo_*>
::HasSameObject(TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,UCombinedTransformGizmo_*>
                *this,void *param_1)

{
  FTransformGizmoDataBinder *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FTransformGizmoDataBinder *pFVar4;
  FTransformGizmoDataBinder *pFVar5;
  bool bVar6;
  
  pFVar1 = (FTransformGizmoDataBinder *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pFVar4 = (FTransformGizmoDataBinder *)0x0;
  pFVar5 = pFVar1;
  if (pFVar1 != (FTransformGizmoDataBinder *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->field_0x8;
    do {
      pFVar5 = pFVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14cbc7f15;
      LOCK();
      aVar3 = *(atomic<int> *)&pFVar1->field_0x8;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pFVar1->field_0x8 = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pFVar4 = (this->UserObject).Object;
    pFVar5 = pFVar1;
  }
LAB_14cbc7f15:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return pFVar4 == param_1;
}

// HasSameObject @ 14cbc7f40

bool __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,UCombinedTransformGizmo_*>
::HasSameObject(TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,UCombinedTransformGizmo_*>
                *this,void *param_1)

{
  FTransformGizmoDataBinder *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FTransformGizmoDataBinder *pFVar4;
  FTransformGizmoDataBinder *pFVar5;
  bool bVar6;
  
  pFVar1 = (FTransformGizmoDataBinder *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pFVar4 = (FTransformGizmoDataBinder *)0x0;
  pFVar5 = pFVar1;
  if (pFVar1 != (FTransformGizmoDataBinder *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->field_0x8;
    do {
      pFVar5 = pFVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14cbc7f75;
      LOCK();
      aVar3 = *(atomic<int> *)&pFVar1->field_0x8;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pFVar1->field_0x8 = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pFVar4 = (this->UserObject).Object;
    pFVar5 = pFVar1;
  }
LAB_14cbc7f75:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return pFVar4 == param_1;
}

// IsSafeToExecute @ 14cbc8850

bool __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (FTransformGizmoDataBinder *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14cbc8880

bool __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,UTransformProxy_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,UTransformProxy_*),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (FTransformGizmoDataBinder *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14cbc88b0

bool __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,TOptional<UE::Math::TTransform<double>_>),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,TOptional<UE::Math::TTransform<double>_>),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (FTransformGizmoDataBinder *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14cbc88e0

bool __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,bool),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,bool),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (FTransformGizmoDataBinder *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14cbc8910

bool __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,UCombinedTransformGizmo_*>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,UCombinedTransformGizmo_*>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (FTransformGizmoDataBinder *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 14cbc8940

bool __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,UCombinedTransformGizmo_*>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,UCombinedTransformGizmo_*>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (FTransformGizmoDataBinder *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// TryGetBoundFunctionName @ 14cbcb5d0

FName __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14cbcb5e0

FName __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,UTransformProxy_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,UTransformProxy_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14cbcb5f0

FName __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,TOptional<UE::Math::TTransform<double>_>),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,TOptional<UE::Math::TTransform<double>_>),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14cbcb600

FName __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,bool),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UCombinedTransformGizmo_*,bool),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14cbcb610

FName __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,UCombinedTransformGizmo_*>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy,UCombinedTransformGizmo_*>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14cbcb620

FName __thiscall
TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,UCombinedTransformGizmo_*>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,FTransformGizmoDataBinder,1,void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy,UCombinedTransformGizmo_*>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

