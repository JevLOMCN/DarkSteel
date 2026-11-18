// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SourceControl
// Functions: 154

// CreateCopy @ 146b10f20

void __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlControls_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SSourceControlControls_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSSourceControlControls___00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146b10fc0

void __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlControls_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SSourceControlControls_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSSourceControlControls___00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146b11030

void __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlControls_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SSourceControlControls_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSSourceControlControls___00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146b110f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlLogin_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SSourceControlLogin_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSSourceControlLogin___00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146b11190

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlLogin_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SSourceControlLogin_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSSourceControlLogin___00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146b11200

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlLogin_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SSourceControlLogin_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSSourceControlLogin___00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146b112c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlLogin_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SSourceControlLogin_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseSPMethodDelegateInstance__00__CBVSSourceControlLogin___00__A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146b11360

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlLogin_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SSourceControlLogin_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseSPMethodDelegateInstance__00__CBVSSourceControlLogin___00__A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146b113d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlLogin_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SSourceControlLogin_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseSPMethodDelegateInstance__00__CBVSSourceControlLogin___00__A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146b11490

void __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlPicker_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SSourceControlPicker_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseSPMethodDelegateInstance__00__CBVSSourceControlPicker___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146b11530

void __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlPicker_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SSourceControlPicker_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseSPMethodDelegateInstance__00__CBVSSourceControlPicker___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146b115a0

void __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlPicker_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SSourceControlPicker_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseSPMethodDelegateInstance__00__CBVSSourceControlPicker___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146b11660

void __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlPicker_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SSourceControlPicker_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
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
              ___7__TBaseSPMethodDelegateInstance__00__CBVSSourceControlPicker___00__A6AXXZUFDefaultDelegateUserPolicy__H__6B_
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

// CreateCopy @ 146b11700

void __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlPicker_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SSourceControlPicker_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
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
              ___7__TBaseSPMethodDelegateInstance__00__CBVSSourceControlPicker___00__A6AXXZUFDefaultDelegateUserPolicy__H__6B_
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

// CreateCopy @ 146b11770

void __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlPicker_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SSourceControlPicker_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
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
              ___7__TBaseSPMethodDelegateInstance__00__CBVSSourceControlPicker___00__A6AXXZUFDefaultDelegateUserPolicy__H__6B_
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

// CreateCopy @ 146b11830

void __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlProgress_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SSourceControlProgress_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSSourceControlProgress___00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146b118d0

void __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlProgress_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SSourceControlProgress_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSSourceControlProgress___00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146b11940

void __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlProgress_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SSourceControlProgress_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSSourceControlProgress___00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146b11a00

void __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlProgress_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SSourceControlProgress_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseSPMethodDelegateInstance__00__CBVSSourceControlProgress___00__A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146b11aa0

void __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlProgress_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SSourceControlProgress_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseSPMethodDelegateInstance__00__CBVSSourceControlProgress___00__A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146b11b10

void __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlProgress_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<1,SSourceControlProgress_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseSPMethodDelegateInstance__00__CBVSSourceControlProgress___00__A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146b11bd0

void __thiscall
TBaseSPMethodDelegateInstance<0,FSourceControlFileStatusMonitor,1,void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FSourceControlFileStatusMonitor,1,void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVISourceControlProvider__0_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFSourceControlFileStatusMonitor___00__A6AXAEAVISourceControlProvider__0_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146b11c70

void __thiscall
TBaseSPMethodDelegateInstance<0,FSourceControlFileStatusMonitor,1,void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FSourceControlFileStatusMonitor,1,void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVISourceControlProvider__0_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFSourceControlFileStatusMonitor___00__A6AXAEAVISourceControlProvider__0_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146b11ce0

void __thiscall
TBaseSPMethodDelegateInstance<0,FSourceControlFileStatusMonitor,1,void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,FSourceControlFileStatusMonitor,1,void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEAVISourceControlProvider__0_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFSourceControlFileStatusMonitor___00__A6AXAEAVISourceControlProvider__0_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146b11da0

void __thiscall
TBaseSPMethodDelegateInstance<0,FSourceControlFileStatusMonitor,1,void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VISourceControlOperation___00__W4Type_ECommandResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFSourceControlFileStatusMonitor___00__A6AXAEBV__TSharedRef_VISourceControlOperation___00__W4Type_ECommandResult___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146b11e40

void __thiscall
TBaseSPMethodDelegateInstance<0,FSourceControlFileStatusMonitor,1,void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VISourceControlOperation___00__W4Type_ECommandResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFSourceControlFileStatusMonitor___00__A6AXAEBV__TSharedRef_VISourceControlOperation___00__W4Type_ECommandResult___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146b11eb0

void __thiscall
TBaseSPMethodDelegateInstance<0,FSourceControlFileStatusMonitor,1,void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VISourceControlOperation___00__W4Type_ECommandResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFSourceControlFileStatusMonitor___00__A6AXAEBV__TSharedRef_VISourceControlOperation___00__W4Type_ECommandResult___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146b11f70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlLogin,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SSourceControlLogin,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSSourceControlLogin___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146b12010

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlLogin,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SSourceControlLogin,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSSourceControlLogin___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146b12080

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlLogin,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SSourceControlLogin,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSSourceControlLogin___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146b12140

void __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlLogin,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSSourceControlLogin___00__A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146b121e0

void __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlLogin,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSSourceControlLogin___00__A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146b12250

void __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlLogin,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSSourceControlLogin___00__A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146b12310

void __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlLogin,1,void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VISourceControlOperation___00__W4Type_ECommandResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSSourceControlLogin___00__A6AXAEBV__TSharedRef_VISourceControlOperation___00__W4Type_ECommandResult___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146b123b0

void __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlLogin,1,void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VISourceControlOperation___00__W4Type_ECommandResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSSourceControlLogin___00__A6AXAEBV__TSharedRef_VISourceControlOperation___00__W4Type_ECommandResult___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146b12420

void __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlLogin,1,void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VISourceControlOperation___00__W4Type_ECommandResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSSourceControlLogin___00__A6AXAEBV__TSharedRef_VISourceControlOperation___00__W4Type_ECommandResult___ZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146b124e0

void __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlPicker,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SSourceControlPicker,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseSPMethodDelegateInstance__0A_VSSourceControlPicker___00__A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146b12580

void __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlPicker,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SSourceControlPicker,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseSPMethodDelegateInstance__0A_VSSourceControlPicker___00__A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146b125f0

void __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlPicker,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SSourceControlPicker,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseSPMethodDelegateInstance__0A_VSSourceControlPicker___00__A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146b126b0

void __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlProgress,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SSourceControlProgress,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSSourceControlProgress___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146b12750

void __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlProgress,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SSourceControlProgress,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)param_1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSSourceControlProgress___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
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

// CreateCopy @ 146b127c0

void __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlProgress,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseSPMethodDelegateInstance<0,SSourceControlProgress,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[2] = this->_padding_;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSSourceControlProgress___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
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

// Execute @ 146b13de0

EVisibility __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlControls_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<1,SSourceControlControls_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SSourceControlControls *pSVar3;
  TEnumAsByte<EVisibility::Private> in_DL;
  SSourceControlControls *pSVar4;
  bool bVar5;
  SSourceControlControls *local_res8;
  
  pSVar3 = (SSourceControlControls *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SSourceControlControls *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SSourceControlControls *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_146b13e21;
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
LAB_146b13e21:
  pSVar3 = UE::Core::Private::
           DereferenceIfNecessary<SSourceControlControls,SSourceControlControls_*_&>(&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)in_DL.Value;
}

// Execute @ 146b13e70

/* WARNING: Enum "Type": Some values do not have unique names */

EVisibility __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlLogin_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<1,SSourceControlLogin_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SSourceControlLogin *pSVar3;
  TEnumAsByte<EVisibility::Private> in_DL;
  SSourceControlLogin *pSVar4;
  bool bVar5;
  SSourceControlLogin *local_res8;
  
  pSVar3 = (SSourceControlLogin *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SSourceControlLogin *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SSourceControlLogin *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_146b13eb1;
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
LAB_146b13eb1:
  pSVar3 = UE::Core::Private::DereferenceIfNecessary<SSourceControlLogin,SSourceControlLogin_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)in_DL.Value;
}

// Execute @ 146b13f00

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlLogin_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<1,SSourceControlLogin_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  atomic<int> aVar1;
  undefined1 uVar2;
  atomic<int> aVar3;
  SSourceControlLogin *pSVar4;
  SSourceControlLogin *pSVar5;
  bool bVar6;
  SSourceControlLogin *local_res8;
  
  pSVar4 = (SSourceControlLogin *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SSourceControlLogin *)0x0;
  pSVar5 = pSVar4;
  if (pSVar4 != (SSourceControlLogin *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar4->_padding_;
    do {
      pSVar5 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_146b13f31;
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
LAB_146b13f31:
  pSVar4 = UE::Core::Private::DereferenceIfNecessary<SSourceControlLogin,SSourceControlLogin_*_&>
                     (&local_res8);
  uVar2 = (**(code **)&this->MethodPtr)
                    ((longlong)&pSVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return (bool)uVar2;
}

// Execute @ 146b13f80

FText * __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlPicker_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<1,SSourceControlPicker_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
          *this,FText *__return_storage_ptr__)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SSourceControlPicker *pSVar3;
  SSourceControlPicker *pSVar4;
  bool bVar5;
  SSourceControlPicker *local_res8;
  
  pSVar3 = (SSourceControlPicker *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SSourceControlPicker *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SSourceControlPicker *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_146b13fc1;
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
LAB_146b13fc1:
  pSVar3 = UE::Core::Private::DereferenceIfNecessary<SSourceControlPicker,SSourceControlPicker_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
             __return_storage_ptr__);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return __return_storage_ptr__;
}

// Execute @ 146b14010

void __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlPicker_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
::Execute(TBaseSPMethodDelegateInstance<1,SSourceControlPicker_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
          *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SSourceControlPicker *pSVar3;
  SSourceControlPicker *pSVar4;
  bool bVar5;
  SSourceControlPicker *local_res8;
  
  pSVar3 = (SSourceControlPicker *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SSourceControlPicker *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SSourceControlPicker *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_146b14041;
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
LAB_146b14041:
  pSVar3 = UE::Core::Private::DereferenceIfNecessary<SSourceControlPicker,SSourceControlPicker_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
             (int)this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return;
}

// Execute @ 146b14090

EVisibility __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlProgress_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<1,SSourceControlProgress_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SSourceControlProgress *pSVar3;
  TEnumAsByte<EVisibility::Private> in_DL;
  SSourceControlProgress *pSVar4;
  bool bVar5;
  SSourceControlProgress *local_res8;
  
  pSVar3 = (SSourceControlProgress *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SSourceControlProgress *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SSourceControlProgress *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_146b140d1;
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
LAB_146b140d1:
  pSVar3 = UE::Core::Private::
           DereferenceIfNecessary<SSourceControlProgress,SSourceControlProgress_*_&>(&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)in_DL.Value;
}

// Execute @ 146b14120

bool __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlProgress_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<1,SSourceControlProgress_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  atomic<int> aVar1;
  undefined1 uVar2;
  atomic<int> aVar3;
  SSourceControlProgress *pSVar4;
  SSourceControlProgress *pSVar5;
  bool bVar6;
  SSourceControlProgress *local_res8;
  
  pSVar4 = (SSourceControlProgress *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SSourceControlProgress *)0x0;
  pSVar5 = pSVar4;
  if (pSVar4 != (SSourceControlProgress *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar4->_padding_;
    do {
      pSVar5 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_146b14151;
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
LAB_146b14151:
  pSVar4 = UE::Core::Private::
           DereferenceIfNecessary<SSourceControlProgress,SSourceControlProgress_*_&>(&local_res8);
  uVar2 = (**(code **)&this->MethodPtr)
                    ((longlong)&pSVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return (bool)uVar2;
}

// Execute @ 146b141a0

void __thiscall
TBaseSPMethodDelegateInstance<0,FSourceControlFileStatusMonitor,1,void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,FSourceControlFileStatusMonitor,1,void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy>
          *this,ISourceControlProvider *param_1,ISourceControlProvider *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FSourceControlFileStatusMonitor *pFVar3;
  FSourceControlFileStatusMonitor *pFVar4;
  bool bVar5;
  FSourceControlFileStatusMonitor *local_res8;
  
  pFVar3 = (FSourceControlFileStatusMonitor *)
           (this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (FSourceControlFileStatusMonitor *)0x0;
  pFVar4 = pFVar3;
  if (pFVar3 != (FSourceControlFileStatusMonitor *)0x0) {
    aVar1 = *(atomic<int> *)&pFVar3->_padding_;
    do {
      pFVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_146b141e1;
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
LAB_146b141e1:
  pFVar3 = UE::Core::Private::
           DereferenceIfNecessary<FSourceControlFileStatusMonitor,FSourceControlFileStatusMonitor_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pFVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,
             param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar4);
  return;
}

// Execute @ 146b14240

void __thiscall
TBaseSPMethodDelegateInstance<0,FSourceControlFileStatusMonitor,1,void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy>
::Execute(void *this,TSharedRef<ISourceControlOperation,1> *param_1,Type param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FSourceControlFileStatusMonitor *pFVar3;
  FSourceControlFileStatusMonitor *pFVar4;
  bool bVar5;
  FSourceControlFileStatusMonitor *local_res8;
  
  pFVar3 = *(FSourceControlFileStatusMonitor **)((longlong)this + 0x20);
  local_res8 = (FSourceControlFileStatusMonitor *)0x0;
  pFVar4 = pFVar3;
  if (pFVar3 != (FSourceControlFileStatusMonitor *)0x0) {
    aVar1 = *(atomic<int> *)&pFVar3->_padding_;
    do {
      pFVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_146b14281;
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
    local_res8 = *(FSourceControlFileStatusMonitor **)((longlong)this + 0x18);
    pFVar4 = pFVar3;
  }
LAB_146b14281:
  pFVar3 = UE::Core::Private::
           DereferenceIfNecessary<FSourceControlFileStatusMonitor,FSourceControlFileStatusMonitor_*_&>
                     (&local_res8);
  (**(code **)((longlong)this + 0x28))
            ((longlong)&pFVar3->_padding_ + (longlong)*(int *)((longlong)this + 0x30),param_1,
             param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar4);
  return;
}

// Execute @ 146b142e0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlLogin,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,SSourceControlLogin,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
          *this,FReply *__return_storage_ptr__)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SSourceControlLogin *pSVar3;
  SSourceControlLogin *pSVar4;
  bool bVar5;
  SSourceControlLogin *local_res8;
  
  pSVar3 = (SSourceControlLogin *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SSourceControlLogin *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SSourceControlLogin *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_146b14321;
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
LAB_146b14321:
  pSVar3 = UE::Core::Private::DereferenceIfNecessary<SSourceControlLogin,SSourceControlLogin_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
             __return_storage_ptr__);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return __return_storage_ptr__;
}

// Execute @ 146b14370

/* WARNING: Enum "Type": Some values do not have unique names */

EActiveTimerReturnType __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlLogin,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::Execute(void *this,double param_1,float param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  atomic<int> aVar3;
  EActiveTimerReturnType EVar4;
  atomic<int> aVar5;
  SSourceControlLogin *pSVar6;
  SSourceControlLogin *pSVar7;
  bool bVar8;
  SSourceControlLogin *local_res8;
  
  pSVar6 = *(SSourceControlLogin **)((longlong)this + 0x20);
  local_res8 = (SSourceControlLogin *)0x0;
  pSVar7 = pSVar6;
  if (pSVar6 != (SSourceControlLogin *)0x0) {
    aVar3 = *(atomic<int> *)&pSVar6->_padding_;
    do {
      pSVar7 = local_res8;
      if (aVar3 == (atomic<int>)0x0) goto LAB_146b143b7;
      LOCK();
      aVar5 = *(atomic<int> *)&pSVar6->_padding_;
      bVar8 = aVar3 == aVar5;
      if (bVar8) {
        *(atomic<int> *)&pSVar6->_padding_ = (atomic<int>)((int)aVar3 + 1);
        aVar5 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar5;
    } while (!bVar8);
    local_res8 = *(SSourceControlLogin **)((longlong)this + 0x18);
    pSVar7 = pSVar6;
  }
LAB_146b143b7:
  pcVar1 = *(code **)((longlong)this + 0x28);
  uVar2 = *(undefined8 *)((longlong)this + 0x30);
  pSVar6 = UE::Core::Private::DereferenceIfNecessary<SSourceControlLogin,SSourceControlLogin_*_&>
                     (&local_res8);
  EVar4 = (*pcVar1)((longlong)&pSVar6->_padding_ + (longlong)(int)uVar2,SUB84(param_1,0),param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar7);
  return EVar4;
}

// Execute @ 146b14430

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlLogin,1,void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy>
::Execute(void *this,TSharedRef<ISourceControlOperation,1> *param_1,Type param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SSourceControlLogin *pSVar3;
  SSourceControlLogin *pSVar4;
  bool bVar5;
  SSourceControlLogin *local_res8;
  
  pSVar3 = *(SSourceControlLogin **)((longlong)this + 0x20);
  local_res8 = (SSourceControlLogin *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SSourceControlLogin *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_146b14471;
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
    local_res8 = *(SSourceControlLogin **)((longlong)this + 0x18);
    pSVar4 = pSVar3;
  }
LAB_146b14471:
  pSVar3 = UE::Core::Private::DereferenceIfNecessary<SSourceControlLogin,SSourceControlLogin_*_&>
                     (&local_res8);
  (**(code **)((longlong)this + 0x28))
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)((longlong)this + 0x30),param_1,
             param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return;
}

// Execute @ 146b144d0

TSharedRef<SWidget,1> * __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlPicker,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,SSourceControlPicker,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
          *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SSourceControlPicker *pSVar3;
  SSourceControlPicker *pSVar4;
  bool bVar5;
  SSourceControlPicker *local_res8;
  
  pSVar3 = (SSourceControlPicker *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SSourceControlPicker *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SSourceControlPicker *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_146b14511;
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
LAB_146b14511:
  pSVar3 = UE::Core::Private::DereferenceIfNecessary<SSourceControlPicker,SSourceControlPicker_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
             __return_storage_ptr__);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return __return_storage_ptr__;
}

// Execute @ 146b14560

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlProgress,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseSPMethodDelegateInstance<0,SSourceControlProgress,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
          *this,FReply *__return_storage_ptr__)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SSourceControlProgress *pSVar3;
  SSourceControlProgress *pSVar4;
  bool bVar5;
  SSourceControlProgress *local_res8;
  
  pSVar3 = (SSourceControlProgress *)(this->UserObject).WeakReferenceCount.ReferenceController;
  local_res8 = (SSourceControlProgress *)0x0;
  pSVar4 = pSVar3;
  if (pSVar3 != (SSourceControlProgress *)0x0) {
    aVar1 = *(atomic<int> *)&pSVar3->_padding_;
    do {
      pSVar4 = local_res8;
      if (aVar1 == (atomic<int>)0x0) goto LAB_146b145a1;
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
LAB_146b145a1:
  pSVar3 = UE::Core::Private::
           DereferenceIfNecessary<SSourceControlProgress,SSourceControlProgress_*_&>(&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
             __return_storage_ptr__);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar4);
  return __return_storage_ptr__;
}

// ExecuteIfSafe @ 146b14c80

bool __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlControls_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<1,SSourceControlControls_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SSourceControlControls *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  SSourceControlControls *local_res10;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146b14cb0;
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
    if (local_res10 != (SSourceControlControls *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<SSourceControlControls,SSourceControlControls_*_&>
                         (&local_res10);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 local_res8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_146b14cb0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 146b14d10

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlLogin_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<1,SSourceControlLogin_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SSourceControlLogin *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  SSourceControlLogin *local_res10;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146b14d40;
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
    if (local_res10 != (SSourceControlLogin *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<SSourceControlLogin,SSourceControlLogin_*_&>(&local_res10);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 local_res8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_146b14d40:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 146b14da0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlLogin_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<1,SSourceControlLogin_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SSourceControlLogin *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SSourceControlLogin *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146b14dd0;
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
    if (local_res8 != (SSourceControlLogin *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<SSourceControlLogin,SSourceControlLogin_*_&>(&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_146b14dd0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 146b14e30

bool __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlPicker_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<1,SSourceControlPicker_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SSourceControlPicker *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SSourceControlPicker *local_res8;
  longlong *local_18 [2];
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146b14e60;
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
    if (local_res8 != (SSourceControlPicker *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<SSourceControlPicker,SSourceControlPicker_*_&>(&local_res8);
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
LAB_146b14e60:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 146b14ed0

bool __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlPicker_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<1,SSourceControlPicker_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SSourceControlPicker *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SSourceControlPicker *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146b14f00;
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
    if (local_res8 != (SSourceControlPicker *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<SSourceControlPicker,SSourceControlPicker_*_&>(&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 (int)this->_padding_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_146b14f00:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 146b14f60

bool __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlProgress_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<1,SSourceControlProgress_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SSourceControlProgress *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  SSourceControlProgress *local_res10;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146b14f90;
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
    if (local_res10 != (SSourceControlProgress *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<SSourceControlProgress,SSourceControlProgress_*_&>
                         (&local_res10);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 local_res8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_146b14f90:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 146b14ff0

bool __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlProgress_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<1,SSourceControlProgress_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SSourceControlProgress *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SSourceControlProgress *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146b15020;
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
    if (local_res8 != (SSourceControlProgress *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<SSourceControlProgress,SSourceControlProgress_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_146b15020:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 146b15080

bool __thiscall
TBaseSPMethodDelegateInstance<0,FSourceControlFileStatusMonitor,1,void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,FSourceControlFileStatusMonitor,1,void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy>
                *this,ISourceControlProvider *param_1,ISourceControlProvider *param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FSourceControlFileStatusMonitor *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FSourceControlFileStatusMonitor *local_res8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146b150c0;
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
    if (local_res8 != (FSourceControlFileStatusMonitor *)0x0) {
      pFVar3 = UE::Core::Private::
               DereferenceIfNecessary<FSourceControlFileStatusMonitor,FSourceControlFileStatusMonitor_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pFVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 param_1,param_2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_146b150c0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 146b15130

bool __thiscall
TBaseSPMethodDelegateInstance<0,FSourceControlFileStatusMonitor,1,void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,TSharedRef<ISourceControlOperation,1> *param_1,Type param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  FSourceControlFileStatusMonitor *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FSourceControlFileStatusMonitor *local_res8;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146b15170;
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
    local_res8 = *(FSourceControlFileStatusMonitor **)((longlong)this + 0x18);
    if (local_res8 != (FSourceControlFileStatusMonitor *)0x0) {
      pFVar3 = UE::Core::Private::
               DereferenceIfNecessary<FSourceControlFileStatusMonitor,FSourceControlFileStatusMonitor_*_&>
                         (&local_res8);
      (**(code **)((longlong)this + 0x28))
                ((longlong)&pFVar3->_padding_ + (longlong)*(int *)((longlong)this + 0x30),param_1,
                 param_2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_146b15170:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 146b151e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlLogin,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,SSourceControlLogin,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SSourceControlLogin *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SSourceControlLogin *local_res8;
  FReply local_c8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146b15210;
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
    if (local_res8 != (SSourceControlLogin *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<SSourceControlLogin,SSourceControlLogin_*_&>(&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 &local_c8);
      FReply::~FReply(&local_c8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_146b15210:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 146b15290

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlLogin,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,double param_1,float param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  SSourceControlLogin *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  SSourceControlLogin *local_res8 [4];
  
  pTVar6 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar6->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146b152d0;
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
    local_res8[0] = *(SSourceControlLogin **)((longlong)this + 0x18);
    if (local_res8[0] != (SSourceControlLogin *)0x0) {
      pcVar1 = *(code **)((longlong)this + 0x28);
      uVar2 = *(undefined8 *)((longlong)this + 0x30);
      pSVar5 = UE::Core::Private::
               DereferenceIfNecessary<SSourceControlLogin,SSourceControlLogin_*_&>(local_res8);
      (*pcVar1)((longlong)&pSVar5->_padding_ + (longlong)(int)uVar2,SUB84(param_1,0),param_2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      return true;
    }
  }
LAB_146b152d0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return false;
}

// ExecuteIfSafe @ 146b15360

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlLogin,1,void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,TSharedRef<ISourceControlOperation,1> *param_1,Type param_2)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SSourceControlLogin *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SSourceControlLogin *local_res8;
  
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146b153a0;
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
    local_res8 = *(SSourceControlLogin **)((longlong)this + 0x18);
    if (local_res8 != (SSourceControlLogin *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<SSourceControlLogin,SSourceControlLogin_*_&>(&local_res8);
      (**(code **)((longlong)this + 0x28))
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)((longlong)this + 0x30),param_1,
                 param_2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_146b153a0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 146b15410

bool __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlPicker,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,SSourceControlPicker,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SSourceControlPicker *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SSourceControlPicker *local_res8;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146b15440;
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
    if (local_res8 != (SSourceControlPicker *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<SSourceControlPicker,SSourceControlPicker_*_&>(&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 local_18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_146b15440:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// ExecuteIfSafe @ 146b154b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlProgress,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseSPMethodDelegateInstance<0,SSourceControlProgress,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  SSourceControlProgress *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  SSourceControlProgress *local_res8;
  FReply local_c8;
  
  pTVar4 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146b154e0;
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
    if (local_res8 != (SSourceControlProgress *)0x0) {
      pSVar3 = UE::Core::Private::
               DereferenceIfNecessary<SSourceControlProgress,SSourceControlProgress_*_&>
                         (&local_res8);
      (**(code **)&this->MethodPtr)
                ((longlong)&pSVar3->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                 &local_c8);
      FReply::~FReply(&local_c8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return true;
    }
  }
LAB_146b154e0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return false;
}

// GetBoundProgramCounterForTimerManager @ 146b16cf0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlControls_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<1,SSourceControlControls_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146b16d00

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlLogin_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<1,SSourceControlLogin_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146b16d10

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlLogin_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<1,SSourceControlLogin_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146b16d20

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlPicker_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<1,SSourceControlPicker_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146b16d30

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlPicker_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<1,SSourceControlPicker_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146b16d40

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlProgress_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<1,SSourceControlProgress_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146b16d50

ulong64 __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlProgress_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<1,SSourceControlProgress_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146b16d60

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,FSourceControlFileStatusMonitor,1,void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,FSourceControlFileStatusMonitor,1,void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146b16d70

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,FSourceControlFileStatusMonitor,1,void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x28);
}

// GetBoundProgramCounterForTimerManager @ 146b16d80

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlLogin,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,SSourceControlLogin,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146b16d90

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlLogin,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x28);
}

// GetBoundProgramCounterForTimerManager @ 146b16da0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlLogin,1,void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x28);
}

// GetBoundProgramCounterForTimerManager @ 146b16db0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlPicker,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,SSourceControlPicker,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 146b16dc0

ulong64 __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlProgress,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseSPMethodDelegateInstance<0,SSourceControlProgress,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetObjectForTimerManager @ 146b18d10

void * __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlControls_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<1,SSourceControlControls_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SSourceControlControls *pSVar2;
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

// GetObjectForTimerManager @ 146b18d70

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlLogin_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<1,SSourceControlLogin_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SSourceControlLogin *pSVar2;
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

// GetObjectForTimerManager @ 146b18dd0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlLogin_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<1,SSourceControlLogin_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SSourceControlLogin *pSVar2;
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

// GetObjectForTimerManager @ 146b18e30

void * __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlPicker_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<1,SSourceControlPicker_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SSourceControlPicker *pSVar2;
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

// GetObjectForTimerManager @ 146b18e90

void * __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlPicker_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<1,SSourceControlPicker_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SSourceControlPicker *pSVar2;
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

// GetObjectForTimerManager @ 146b18ef0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlProgress_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<1,SSourceControlProgress_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SSourceControlProgress *pSVar2;
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

// GetObjectForTimerManager @ 146b18f50

void * __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlProgress_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<1,SSourceControlProgress_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SSourceControlProgress *pSVar2;
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

// GetObjectForTimerManager @ 146b18fb0

void * __thiscall
TBaseSPMethodDelegateInstance<0,FSourceControlFileStatusMonitor,1,void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,FSourceControlFileStatusMonitor,1,void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FSourceControlFileStatusMonitor *pFVar2;
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

// GetObjectForTimerManager @ 146b19010

void * __thiscall
TBaseSPMethodDelegateInstance<0,FSourceControlFileStatusMonitor,1,void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy>
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

// GetObjectForTimerManager @ 146b19070

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlLogin,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,SSourceControlLogin,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SSourceControlLogin *pSVar2;
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

// GetObjectForTimerManager @ 146b190d0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlLogin,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
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

// GetObjectForTimerManager @ 146b19130

void * __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlLogin,1,void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy>
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

// GetObjectForTimerManager @ 146b19190

void * __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlPicker,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,SSourceControlPicker,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SSourceControlPicker *pSVar2;
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

// GetObjectForTimerManager @ 146b191f0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlProgress,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseSPMethodDelegateInstance<0,SSourceControlProgress,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SSourceControlProgress *pSVar2;
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

// GetUObject @ 146b1ae70

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlControls_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<1,SSourceControlControls_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146b1ae80

/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlLogin_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<1,SSourceControlLogin_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146b1ae90

/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlLogin_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<1,SSourceControlLogin_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146b1aea0

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlPicker_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<1,SSourceControlPicker_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146b1aeb0

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlPicker_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
::GetUObject(TBaseSPMethodDelegateInstance<1,SSourceControlPicker_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146b1aec0

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlProgress_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<1,SSourceControlProgress_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146b1aed0

UObject * __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlProgress_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<1,SSourceControlProgress_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146b1aee0

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,FSourceControlFileStatusMonitor,1,void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,FSourceControlFileStatusMonitor,1,void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146b1aef0

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,FSourceControlFileStatusMonitor,1,void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146b1af00

/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlLogin,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,SSourceControlLogin,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146b1af10

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlLogin,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146b1af20

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlLogin,1,void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146b1af30

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlPicker,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,SSourceControlPicker,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 146b1af40

UObject * __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlProgress,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseSPMethodDelegateInstance<0,SSourceControlProgress,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 146b1b150

bool __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlControls_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<1,SSourceControlControls_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SSourceControlControls *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SSourceControlControls *pSVar4;
  SSourceControlControls *pSVar5;
  bool bVar6;
  
  pSVar1 = (SSourceControlControls *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SSourceControlControls *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SSourceControlControls *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_146b1b185;
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
LAB_146b1b185:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 146b1b1b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlLogin_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<1,SSourceControlLogin_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SSourceControlLogin *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SSourceControlLogin *pSVar4;
  SSourceControlLogin *pSVar5;
  bool bVar6;
  
  pSVar1 = (SSourceControlLogin *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SSourceControlLogin *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SSourceControlLogin *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_146b1b1e5;
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
LAB_146b1b1e5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 146b1b210

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlLogin_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<1,SSourceControlLogin_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SSourceControlLogin *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SSourceControlLogin *pSVar4;
  SSourceControlLogin *pSVar5;
  bool bVar6;
  
  pSVar1 = (SSourceControlLogin *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SSourceControlLogin *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SSourceControlLogin *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_146b1b245;
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
LAB_146b1b245:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 146b1b270

bool __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlPicker_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<1,SSourceControlPicker_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SSourceControlPicker *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SSourceControlPicker *pSVar4;
  SSourceControlPicker *pSVar5;
  bool bVar6;
  
  pSVar1 = (SSourceControlPicker *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SSourceControlPicker *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SSourceControlPicker *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_146b1b2a5;
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
LAB_146b1b2a5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 146b1b2d0

bool __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlPicker_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
::HasSameObject(TBaseSPMethodDelegateInstance<1,SSourceControlPicker_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
                *this,void *param_1)

{
  SSourceControlPicker *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SSourceControlPicker *pSVar4;
  SSourceControlPicker *pSVar5;
  bool bVar6;
  
  pSVar1 = (SSourceControlPicker *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SSourceControlPicker *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SSourceControlPicker *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_146b1b305;
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
LAB_146b1b305:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 146b1b330

bool __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlProgress_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<1,SSourceControlProgress_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SSourceControlProgress *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SSourceControlProgress *pSVar4;
  SSourceControlProgress *pSVar5;
  bool bVar6;
  
  pSVar1 = (SSourceControlProgress *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SSourceControlProgress *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SSourceControlProgress *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_146b1b365;
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
LAB_146b1b365:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 146b1b390

bool __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlProgress_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<1,SSourceControlProgress_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SSourceControlProgress *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SSourceControlProgress *pSVar4;
  SSourceControlProgress *pSVar5;
  bool bVar6;
  
  pSVar1 = (SSourceControlProgress *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SSourceControlProgress *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SSourceControlProgress *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_146b1b3c5;
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
LAB_146b1b3c5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 146b1b3f0

bool __thiscall
TBaseSPMethodDelegateInstance<0,FSourceControlFileStatusMonitor,1,void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,FSourceControlFileStatusMonitor,1,void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  FSourceControlFileStatusMonitor *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FSourceControlFileStatusMonitor *pFVar4;
  FSourceControlFileStatusMonitor *pFVar5;
  bool bVar6;
  
  pFVar1 = (FSourceControlFileStatusMonitor *)
           (this->UserObject).WeakReferenceCount.ReferenceController;
  pFVar4 = (FSourceControlFileStatusMonitor *)0x0;
  pFVar5 = pFVar1;
  if (pFVar1 != (FSourceControlFileStatusMonitor *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->_padding_;
    do {
      pFVar5 = pFVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_146b1b425;
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
LAB_146b1b425:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return pFVar4 == param_1;
}

// HasSameObject @ 146b1b450

bool __thiscall
TBaseSPMethodDelegateInstance<0,FSourceControlFileStatusMonitor,1,void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy>
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
      if (aVar2 == (atomic<int>)0x0) goto LAB_146b1b485;
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
LAB_146b1b485:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return pTVar4 == param_1;
}

// HasSameObject @ 146b1b4b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlLogin,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,SSourceControlLogin,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SSourceControlLogin *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SSourceControlLogin *pSVar4;
  SSourceControlLogin *pSVar5;
  bool bVar6;
  
  pSVar1 = (SSourceControlLogin *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SSourceControlLogin *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SSourceControlLogin *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_146b1b4e5;
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
LAB_146b1b4e5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 146b1b510

bool __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlLogin,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
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
      if (aVar2 == (atomic<int>)0x0) goto LAB_146b1b545;
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
LAB_146b1b545:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return pTVar4 == param_1;
}

// HasSameObject @ 146b1b570

bool __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlLogin,1,void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy>
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
      if (aVar2 == (atomic<int>)0x0) goto LAB_146b1b5a5;
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
LAB_146b1b5a5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return pTVar4 == param_1;
}

// HasSameObject @ 146b1b5d0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlPicker,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,SSourceControlPicker,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SSourceControlPicker *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SSourceControlPicker *pSVar4;
  SSourceControlPicker *pSVar5;
  bool bVar6;
  
  pSVar1 = (SSourceControlPicker *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SSourceControlPicker *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SSourceControlPicker *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_146b1b605;
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
LAB_146b1b605:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// HasSameObject @ 146b1b630

bool __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlProgress,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseSPMethodDelegateInstance<0,SSourceControlProgress,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  SSourceControlProgress *pSVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SSourceControlProgress *pSVar4;
  SSourceControlProgress *pSVar5;
  bool bVar6;
  
  pSVar1 = (SSourceControlProgress *)(this->UserObject).WeakReferenceCount.ReferenceController;
  pSVar4 = (SSourceControlProgress *)0x0;
  pSVar5 = pSVar1;
  if (pSVar1 != (SSourceControlProgress *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar5 = pSVar4;
      if (aVar2 == (atomic<int>)0x0) goto LAB_146b1b665;
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
LAB_146b1b665:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return pSVar4 == param_1;
}

// IsSafeToExecute @ 146b1bec0

bool __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlControls_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<1,SSourceControlControls_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SSourceControlControls *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 146b1bef0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlLogin_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<1,SSourceControlLogin_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SSourceControlLogin *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 146b1bf20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlLogin_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<1,SSourceControlLogin_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SSourceControlLogin *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 146b1bf50

bool __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlPicker_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<1,SSourceControlPicker_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SSourceControlPicker *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 146b1bf80

bool __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlPicker_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<1,SSourceControlPicker_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SSourceControlPicker *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 146b1bfb0

bool __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlProgress_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<1,SSourceControlProgress_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SSourceControlProgress *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 146b1bfe0

bool __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlProgress_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<1,SSourceControlProgress_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SSourceControlProgress *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 146b1c010

bool __thiscall
TBaseSPMethodDelegateInstance<0,FSourceControlFileStatusMonitor,1,void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,FSourceControlFileStatusMonitor,1,void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (FSourceControlFileStatusMonitor *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 146b1c040

bool __thiscall
TBaseSPMethodDelegateInstance<0,FSourceControlFileStatusMonitor,1,void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  if (((*(longlong *)((longlong)this + 0x18) != 0) && (*(longlong *)((longlong)this + 0x20) != 0))
     && (0 < *(int *)(*(longlong *)((longlong)this + 0x20) + 8))) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 146b1c070

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlLogin,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,SSourceControlLogin,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SSourceControlLogin *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 146b1c0a0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlLogin,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  if (((*(longlong *)((longlong)this + 0x18) != 0) && (*(longlong *)((longlong)this + 0x20) != 0))
     && (0 < *(int *)(*(longlong *)((longlong)this + 0x20) + 8))) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 146b1c0d0

bool __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlLogin,1,void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  if (((*(longlong *)((longlong)this + 0x18) != 0) && (*(longlong *)((longlong)this + 0x20) != 0))
     && (0 < *(int *)(*(longlong *)((longlong)this + 0x20) + 8))) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 146b1c100

bool __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlPicker,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,SSourceControlPicker,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SSourceControlPicker *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsSafeToExecute @ 146b1c130

bool __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlProgress,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseSPMethodDelegateInstance<0,SSourceControlProgress,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->UserObject).Object != (SSourceControlProgress *)0x0) &&
      (pTVar1 = (this->UserObject).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// TryGetBoundFunctionName @ 146b295f0

FName __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlControls_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<1,SSourceControlControls_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146b29600

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlLogin_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<1,SSourceControlLogin_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146b29610

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlLogin_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<1,SSourceControlLogin_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146b29620

FName __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlPicker_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<1,SSourceControlPicker_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146b29630

FName __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlPicker_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<1,SSourceControlPicker_const_,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146b29640

FName __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlProgress_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<1,SSourceControlProgress_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146b29650

FName __thiscall
TBaseSPMethodDelegateInstance<1,SSourceControlProgress_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<1,SSourceControlProgress_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146b29660

FName __thiscall
TBaseSPMethodDelegateInstance<0,FSourceControlFileStatusMonitor,1,void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,FSourceControlFileStatusMonitor,1,void___cdecl(ISourceControlProvider_&,ISourceControlProvider_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146b29670

FName __thiscall
TBaseSPMethodDelegateInstance<0,FSourceControlFileStatusMonitor,1,void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146b29680

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlLogin,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,SSourceControlLogin,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146b29690

FName __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlLogin,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146b296a0

FName __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlLogin,1,void___cdecl(TSharedRef<ISourceControlOperation,1>_const_&,enum_ECommandResult::Type),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146b296b0

FName __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlPicker,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,SSourceControlPicker,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 146b296c0

FName __thiscall
TBaseSPMethodDelegateInstance<0,SSourceControlProgress,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseSPMethodDelegateInstance<0,SSourceControlProgress,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

