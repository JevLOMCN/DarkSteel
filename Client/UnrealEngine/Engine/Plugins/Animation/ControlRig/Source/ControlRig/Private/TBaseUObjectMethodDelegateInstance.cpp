// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 240

// CreateCopy @ 14a24b940

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UControlRig_const_,bool___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<1,UControlRig_const_,bool___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
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
              ___7__TCommonDelegateInstanceState___A6A_NAEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUControlRig____A6A_NAEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a24b9d0

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UControlRig_const_,bool___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<1,UControlRig_const_,bool___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_NAEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUControlRig____A6A_NAEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a24ba20

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UControlRig_const_,bool___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<1,UControlRig_const_,bool___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6A_NAEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUControlRig____A6A_NAEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar6 + 3) = (this->UserObject).WeakPtr;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14a24bad0

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UControlRigReplay_const_,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<1,UControlRigReplay_const_,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUControlRig__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUControlRigReplay____A6AXPEAVUControlRig__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_14831c5a *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a24bb60

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UControlRigReplay_const_,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<1,UControlRigReplay_const_,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUControlRig__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUControlRigReplay____A6AXPEAVUControlRig__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_14831c5a *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14a24bbb0

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UControlRigReplay_const_,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<1,UControlRigReplay_const_,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUControlRig__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUControlRigReplay____A6AXPEAVUControlRig__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_14831c5a *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14a24bc60

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AControlRigControlActor,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AControlRigControlActor,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAControlRigControlActor____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_c8c0c65e *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a24bcf0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AControlRigControlActor,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AControlRigControlActor,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAControlRigControlActor____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_c8c0c65e *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14a24bd40

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AControlRigControlActor,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,AControlRigControlActor,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAControlRigControlActor____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_c8c0c65e *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14a24bdf0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUControlRig__PEAUFRigControlElement__AEBUFRigControlModifiedContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUControlRig____A6AXPEAV1_PEAUFRigControlElement__AEBUFRigControlModifiedContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a24be80

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUControlRig__PEAUFRigControlElement__AEBUFRigControlModifiedContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUControlRig____A6AXPEAV1_PEAUFRigControlElement__AEBUFRigControlModifiedContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a24bed0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUControlRig__PEAUFRigControlElement__AEBUFRigControlModifiedContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUControlRig____A6AXPEAV1_PEAUFRigControlElement__AEBUFRigControlModifiedContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar6 + 3) = (this->UserObject).WeakPtr;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14a24bf80

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(URigHierarchy_*,FRigEventContext_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(URigHierarchy_*,FRigEventContext_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVURigHierarchy__AEBUFRigEventContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUControlRig____A6AXPEAVURigHierarchy__AEBUFRigEventContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a24c010

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(URigHierarchy_*,FRigEventContext_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(URigHierarchy_*,FRigEventContext_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVURigHierarchy__AEBUFRigEventContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUControlRig____A6AXPEAVURigHierarchy__AEBUFRigEventContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a24c060

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(URigHierarchy_*,FRigEventContext_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(URigHierarchy_*,FRigEventContext_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVURigHierarchy__AEBUFRigEventContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUControlRig____A6AXPEAVURigHierarchy__AEBUFRigEventContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar6 + 3) = (this->UserObject).WeakPtr;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14a24c110

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(FControlRigExecuteContext_const_*,FString_const_&,UControlRigShapeLibrary_*,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(FControlRigExecuteContext_const_*,FString_const_&,UControlRigShapeLibrary_*,bool),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
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
              ___7__TCommonDelegateInstanceState___A6AXPEBUFControlRigExecuteContext__AEBVFString__PEAVUControlRigShapeLibrary___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUControlRig____A6AXPEBUFControlRigExecuteContext__AEBVFString__PEAVUControlRigShapeLibrary___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a24c1a0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(FControlRigExecuteContext_const_*,FString_const_&,UControlRigShapeLibrary_*,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(FControlRigExecuteContext_const_*,FString_const_&,UControlRigShapeLibrary_*,bool),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBUFControlRigExecuteContext__AEBVFString__PEAVUControlRigShapeLibrary___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUControlRig____A6AXPEBUFControlRigExecuteContext__AEBVFString__PEAVUControlRigShapeLibrary___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a24c1f0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(FControlRigExecuteContext_const_*,FString_const_&,UControlRigShapeLibrary_*,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(FControlRigExecuteContext_const_*,FString_const_&,UControlRigShapeLibrary_*,bool),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBUFControlRigExecuteContext__AEBVFString__PEAVUControlRigShapeLibrary___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUControlRig____A6AXPEBUFControlRigExecuteContext__AEBVFString__PEAVUControlRigShapeLibrary___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar6 + 3) = (this->UserObject).WeakPtr;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14a24c2a0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(UControlRigOverrideAsset_const_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(UControlRigOverrideAsset_const_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
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
              ___7__TCommonDelegateInstanceState___A6AXPEBVUControlRigOverrideAsset___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUControlRig____A6AXPEBVUControlRigOverrideAsset___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a24c330

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(UControlRigOverrideAsset_const_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(UControlRigOverrideAsset_const_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBVUControlRigOverrideAsset___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUControlRig____A6AXPEBVUControlRigOverrideAsset___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a24c380

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(UControlRigOverrideAsset_const_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(UControlRigOverrideAsset_const_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXPEBVUControlRigOverrideAsset___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUControlRig____A6AXPEBVUControlRigOverrideAsset___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar6 + 3) = (this->UserObject).WeakPtr;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14a24c430

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(enum_ERigHierarchyNotification,URigHierarchy_*,FRigNotificationSubject_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
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
              ___7__TCommonDelegateInstanceState___A6AXW4ERigHierarchyNotification__PEAVURigHierarchy__AEBUFRigNotificationSubject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUControlRig____A6AXW4ERigHierarchyNotification__PEAVURigHierarchy__AEBUFRigNotificationSubject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a24c4c0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(enum_ERigHierarchyNotification,URigHierarchy_*,FRigNotificationSubject_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXW4ERigHierarchyNotification__PEAVURigHierarchy__AEBUFRigNotificationSubject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUControlRig____A6AXW4ERigHierarchyNotification__PEAVURigHierarchy__AEBUFRigNotificationSubject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar1 = *(undefined8 *)((longlong)this + 0x28);
    puVar2[4] = *(undefined8 *)((longlong)this + 0x20);
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a24c510

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(enum_ERigHierarchyNotification,URigHierarchy_*,FRigNotificationSubject_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXW4ERigHierarchyNotification__PEAVURigHierarchy__AEBUFRigNotificationSubject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUControlRig____A6AXW4ERigHierarchyNotification__PEAVURigHierarchy__AEBUFRigNotificationSubject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = *(undefined8 *)((longlong)this + 0x18);
    uVar2 = *(undefined4 *)((longlong)this + 0x24);
    uVar3 = *(undefined4 *)((longlong)this + 0x28);
    uVar4 = *(undefined4 *)((longlong)this + 0x2c);
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)((longlong)this + 0x20);
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14a24c5c0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRigComponent,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UControlRigComponent,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUControlRig__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUControlRigComponent____A6AXPEAVUControlRig__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a24c650

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRigComponent,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UControlRigComponent,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUControlRig__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUControlRigComponent____A6AXPEAVUControlRig__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a24c6a0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRigComponent,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UControlRigComponent,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUControlRig__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUControlRigComponent____A6AXPEAVUControlRig__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar6 + 3) = (this->UserObject).WeakPtr;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14a24c750

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRigComponent,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UControlRigComponent,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVURigVMHost__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUControlRigComponent____A6AXPEAVURigVMHost__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a24c7e0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRigComponent,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UControlRigComponent,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVURigVMHost__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUControlRigComponent____A6AXPEAVURigVMHost__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a24c830

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRigComponent,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UControlRigComponent,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVURigVMHost__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUControlRigComponent____A6AXPEAVURigVMHost__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar6 + 3) = (this->UserObject).WeakPtr;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14a24c8e0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRigValidator,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UControlRigValidator,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVURigVMHost__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUControlRigValidator____A6AXPEAVURigVMHost__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_f06aaa00 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a24c970

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRigValidator,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UControlRigValidator,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVURigVMHost__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUControlRigValidator____A6AXPEAVURigVMHost__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_f06aaa00 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14a24c9c0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRigValidator,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UControlRigValidator,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVURigVMHost__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUControlRigValidator____A6AXPEAVURigVMHost__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_f06aaa00 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14a24ca70

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UControlRig_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UControlRig_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUControlRig___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTransformableControlHandle____A6AXPEAVUControlRig___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_a01f6e4a *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a24cb00

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UControlRig_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UControlRig_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUControlRig___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTransformableControlHandle____A6AXPEAVUControlRig___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_a01f6e4a *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14a24cb50

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UControlRig_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UControlRig_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUControlRig___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTransformableControlHandle____A6AXPEAVUControlRig___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_a01f6e4a *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14a24cc00

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUControlRig__PEAUFRigControlElement__AEBUFRigControlModifiedContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTransformableControlHandle____A6AXPEAVUControlRig__PEAUFRigControlElement__AEBUFRigControlModifiedContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_f3a22cb3 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a24cc90

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUControlRig__PEAUFRigControlElement__AEBUFRigControlModifiedContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTransformableControlHandle____A6AXPEAVUControlRig__PEAUFRigControlElement__AEBUFRigControlModifiedContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_f3a22cb3 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14a24cce0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUControlRig__PEAUFRigControlElement__AEBUFRigControlModifiedContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTransformableControlHandle____A6AXPEAVUControlRig__PEAUFRigControlElement__AEBUFRigControlModifiedContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_f3a22cb3 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14a24cd90

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTransformableControlHandle____A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_3f10437e *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a24ce20

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTransformableControlHandle____A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_3f10437e *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14a24ce70

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTransformableControlHandle____A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_3f10437e *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14a24cf20

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(enum_ERigHierarchyNotification,URigHierarchy_*,FRigNotificationSubject_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4ERigHierarchyNotification__PEAVURigHierarchy__AEBUFRigNotificationSubject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTransformableControlHandle____A6AXW4ERigHierarchyNotification__PEAVURigHierarchy__AEBUFRigNotificationSubject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a24cfb0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(enum_ERigHierarchyNotification,URigHierarchy_*,FRigNotificationSubject_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4ERigHierarchyNotification__PEAVURigHierarchy__AEBUFRigNotificationSubject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTransformableControlHandle____A6AXW4ERigHierarchyNotification__PEAVURigHierarchy__AEBUFRigNotificationSubject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 14a24d000

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(enum_ERigHierarchyNotification,URigHierarchy_*,FRigNotificationSubject_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXW4ERigHierarchyNotification__PEAVURigHierarchy__AEBUFRigNotificationSubject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTransformableControlHandle____A6AXW4ERigHierarchyNotification__PEAVURigHierarchy__AEBUFRigNotificationSubject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14a253bf0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UControlRig_const_,bool___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<1,UControlRig_const_,bool___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
          *this,FName *param_1)

{
  undefined1 uVar1;
  UControlRig *pUVar2;
  UControlRig *local_res8;
  
  local_res8 = (UControlRig *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar2 = UE::Core::Private::DereferenceIfNecessary<UControlRig,UControlRig_*_&>(&local_res8);
  uVar1 = (**(code **)&this->MethodPtr)
                    ((longlong)&pUVar2->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,
                     param_1);
  return (bool)uVar1;
}

// Execute @ 14a253c40

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UControlRigReplay_const_,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<1,UControlRigReplay_const_,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
          *this,UControlRig *param_1,FName *param_2)

{
  UControlRigReplay *pUVar1;
  UControlRigReplay *local_res8;
  
  local_res8 = (UControlRigReplay *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UControlRigReplay,UControlRigReplay_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1,param_2);
  return;
}

// Execute @ 14a253ca0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,AControlRigControlActor,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,AControlRigControlActor,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  AControlRigControlActor *pAVar1;
  AControlRigControlActor *local_res8 [4];
  
  local_res8[0] = (AControlRigControlActor *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pAVar1 = UE::Core::Private::
           DereferenceIfNecessary<AControlRigControlActor,AControlRigControlActor_*_&>(local_res8);
  (*(code *)this->MethodPtr)(pAVar1);
  return;
}

// Execute @ 14a253ce0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
          *this,UControlRig *param_1,FRigControlElement *param_2,FRigControlModifiedContext *param_3
         )

{
  UControlRig *pUVar1;
  UControlRig *local_res8;
  
  local_res8 = (UControlRig *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UControlRig,UControlRig_*_&>(&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,
             param_2,param_3);
  return;
}

// Execute @ 14a253d50

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(URigHierarchy_*,FRigEventContext_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(URigHierarchy_*,FRigEventContext_const_&),FDefaultDelegateUserPolicy>
          *this,URigHierarchy *param_1,FRigEventContext *param_2)

{
  UControlRig *pUVar1;
  UControlRig *local_res8;
  
  local_res8 = (UControlRig *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UControlRig,UControlRig_*_&>(&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,
             param_2);
  return;
}

// Execute @ 14a253db0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(FControlRigExecuteContext_const_*,FString_const_&,UControlRigShapeLibrary_*,bool),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(FControlRigExecuteContext_const_*,FString_const_&,UControlRigShapeLibrary_*,bool),FDefaultDelegateUserPolicy>
          *this,FControlRigExecuteContext *param_1,FString *param_2,UControlRigShapeLibrary *param_3
         ,bool param_4)

{
  UControlRig *pUVar1;
  UControlRig *local_res8;
  
  local_res8 = (UControlRig *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UControlRig,UControlRig_*_&>(&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,
             param_2,param_3,param_4);
  return;
}

// Execute @ 14a253e30

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(UControlRigOverrideAsset_const_*),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(UControlRigOverrideAsset_const_*),FDefaultDelegateUserPolicy>
          *this,UControlRigOverrideAsset *param_1)

{
  UControlRig *pUVar1;
  UControlRig *local_res8;
  
  local_res8 = (UControlRig *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UControlRig,UControlRig_*_&>(&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1);
  return;
}

// Execute @ 14a253e80

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(enum_ERigHierarchyNotification,URigHierarchy_*,FRigNotificationSubject_const_&),FDefaultDelegateUserPolicy>
::Execute(void *this,ERigHierarchyNotification param_1,URigHierarchy *param_2,
         FRigNotificationSubject *param_3)

{
  UControlRig *pUVar1;
  UControlRig *local_res8;
  
  local_res8 = (UControlRig *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UControlRig,UControlRig_*_&>(&local_res8);
  (**(code **)((longlong)this + 0x20))
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)((longlong)this + 0x28),param_1,
             param_2,param_3);
  return;
}

// Execute @ 14a253ef0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRigComponent,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UControlRigComponent,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
          *this,UControlRig *param_1,FName *param_2)

{
  UControlRigComponent *pUVar1;
  UControlRigComponent *local_res8;
  
  local_res8 = (UControlRigComponent *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UControlRigComponent,UControlRigComponent_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,
             param_2);
  return;
}

// Execute @ 14a253f50

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRigComponent,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UControlRigComponent,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
          *this,URigVMHost *param_1,FName *param_2)

{
  UControlRigComponent *pUVar1;
  UControlRigComponent *local_res8;
  
  local_res8 = (UControlRigComponent *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UControlRigComponent,UControlRigComponent_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,
             param_2);
  return;
}

// Execute @ 14a253fb0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRigValidator,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UControlRigValidator,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
          *this,URigVMHost *param_1,FName *param_2)

{
  UControlRigValidator *pUVar1;
  UControlRigValidator *local_res8;
  
  local_res8 = (UControlRigValidator *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<UControlRigValidator,UControlRigValidator_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1,param_2);
  return;
}

// Execute @ 14a254010

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UControlRig_*),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UControlRig_*),FDefaultDelegateUserPolicy>
          *this,UControlRig *param_1)

{
  UTransformableControlHandle *pUVar1;
  UTransformableControlHandle *local_res8;
  
  local_res8 = (UTransformableControlHandle *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UTransformableControlHandle,UTransformableControlHandle_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1);
  return;
}

// Execute @ 14a254060

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
          *this,UControlRig *param_1,FRigControlElement *param_2,FRigControlModifiedContext *param_3
         )

{
  UTransformableControlHandle *pUVar1;
  UTransformableControlHandle *local_res8;
  
  local_res8 = (UTransformableControlHandle *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UTransformableControlHandle,UTransformableControlHandle_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1,param_2,param_3);
  return;
}

// Execute @ 14a2540d0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
          *this,UObject *param_1)

{
  UTransformableControlHandle *pUVar1;
  UTransformableControlHandle *local_res8;
  
  local_res8 = (UTransformableControlHandle *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UTransformableControlHandle,UTransformableControlHandle_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,param_1);
  return;
}

// Execute @ 14a254120

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(enum_ERigHierarchyNotification,URigHierarchy_*,FRigNotificationSubject_const_&),FDefaultDelegateUserPolicy>
::Execute(void *this,ERigHierarchyNotification param_1,URigHierarchy *param_2,
         FRigNotificationSubject *param_3)

{
  UTransformableControlHandle *pUVar1;
  UTransformableControlHandle *local_res8;
  
  local_res8 = (UTransformableControlHandle *)
               FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UTransformableControlHandle,UTransformableControlHandle_*_&>
                     (&local_res8);
  (**(code **)((longlong)this + 0x20))(pUVar1,param_1,param_2,param_3);
  return;
}

// ExecuteIfSafe @ 14a2577b0

/* WARNING: Removing unreachable block (ram,0x00014a25781e) */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UControlRig_const_,bool___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<1,UControlRig_const_,bool___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
                *this,FName *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UControlRig *pUVar3;
  UControlRig *pUVar4;
  UObject *pUVar5;
  UControlRig *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UControlRig *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UControlRig *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UControlRig *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UControlRig *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UControlRig,UControlRig_*_&>(&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1
              );
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UControlRig *)0x0;
}

// ExecuteIfSafe @ 14a257890

/* WARNING: Removing unreachable block (ram,0x00014a257906) */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UControlRigReplay_const_,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<1,UControlRigReplay_const_,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
                *this,UControlRig *param_1,FName *param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UControlRigReplay *pUVar3;
  UControlRigReplay *pUVar4;
  UObject *pUVar5;
  UControlRigReplay *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UControlRigReplay *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UControlRigReplay *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UControlRigReplay *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UControlRigReplay *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UControlRigReplay,UControlRigReplay_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1,param_2);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UControlRigReplay *)0x0;
}

// ExecuteIfSafe @ 14a257980

/* WARNING: Removing unreachable block (ram,0x00014a2579e6) */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AControlRigControlActor,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,AControlRigControlActor,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  AControlRigControlActor *pAVar3;
  AControlRigControlActor *pAVar4;
  UObject *pUVar5;
  AControlRigControlActor *local_res8;
  undefined8 local_res10;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (AControlRigControlActor *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (AControlRigControlActor *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
    local_res10 = 0;
  }
  pAVar3 = (AControlRigControlActor *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pAVar3 != (AControlRigControlActor *)0x0) {
    local_res8 = pAVar3;
    pAVar4 = UE::Core::Private::
             DereferenceIfNecessary<AControlRigControlActor,AControlRigControlActor_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pAVar4);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pAVar3 != (AControlRigControlActor *)0x0;
}

// ExecuteIfSafe @ 14a257a50

/* WARNING: Removing unreachable block (ram,0x00014a257ace) */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
                *this,UControlRig *param_1,FRigControlElement *param_2,
               FRigControlModifiedContext *param_3)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UControlRig *pUVar3;
  UControlRig *pUVar4;
  UObject *pUVar5;
  UControlRig *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UControlRig *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UControlRig *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UControlRig *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UControlRig *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UControlRig,UControlRig_*_&>(&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1
               ,param_2,param_3);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UControlRig *)0x0;
}

// ExecuteIfSafe @ 14a257b50

/* WARNING: Removing unreachable block (ram,0x00014a257bc6) */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(URigHierarchy_*,FRigEventContext_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(URigHierarchy_*,FRigEventContext_const_&),FDefaultDelegateUserPolicy>
                *this,URigHierarchy *param_1,FRigEventContext *param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UControlRig *pUVar3;
  UControlRig *pUVar4;
  UObject *pUVar5;
  UControlRig *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UControlRig *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UControlRig *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UControlRig *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UControlRig *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UControlRig,UControlRig_*_&>(&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1
               ,param_2);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UControlRig *)0x0;
}

// ExecuteIfSafe @ 14a257c40

/* WARNING: Removing unreachable block (ram,0x00014a257cbb) */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(FControlRigExecuteContext_const_*,FString_const_&,UControlRigShapeLibrary_*,bool),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(FControlRigExecuteContext_const_*,FString_const_&,UControlRigShapeLibrary_*,bool),FDefaultDelegateUserPolicy>
                *this,FControlRigExecuteContext *param_1,FString *param_2,
               UControlRigShapeLibrary *param_3,bool param_4)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UControlRig *pUVar3;
  UControlRig *pUVar4;
  UObject *pUVar5;
  UControlRig *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UControlRig *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UControlRig *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UControlRig *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UControlRig *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UControlRig,UControlRig_*_&>(&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1
               ,param_2,param_3,param_4);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UControlRig *)0x0;
}

// ExecuteIfSafe @ 14a257d50

/* WARNING: Removing unreachable block (ram,0x00014a257dbe) */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(UControlRigOverrideAsset_const_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(UControlRigOverrideAsset_const_*),FDefaultDelegateUserPolicy>
                *this,UControlRigOverrideAsset *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UControlRig *pUVar3;
  UControlRig *pUVar4;
  UObject *pUVar5;
  UControlRig *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UControlRig *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UControlRig *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UControlRig *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UControlRig *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UControlRig,UControlRig_*_&>(&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1
              );
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UControlRig *)0x0;
}

// ExecuteIfSafe @ 14a257e30

/* WARNING: Removing unreachable block (ram,0x00014a257eaf) */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(enum_ERigHierarchyNotification,URigHierarchy_*,FRigNotificationSubject_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,ERigHierarchyNotification param_1,URigHierarchy *param_2,
               FRigNotificationSubject *param_3)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UControlRig *pUVar3;
  UControlRig *pUVar4;
  UObject *pUVar5;
  UControlRig *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UControlRig *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin((FWeakObjectPtr *)((longlong)this + 0x18));
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UControlRig *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UControlRig *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  if (pUVar3 != (UControlRig *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<UControlRig,UControlRig_*_&>(&local_res8);
    (**(code **)((longlong)this + 0x20))
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)((longlong)this + 0x28),param_1,
               param_2,param_3);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UControlRig *)0x0;
}

// ExecuteIfSafe @ 14a257f30

/* WARNING: Removing unreachable block (ram,0x00014a257fa6) */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRigComponent,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UControlRigComponent,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
                *this,UControlRig *param_1,FName *param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UControlRigComponent *pUVar3;
  UControlRigComponent *pUVar4;
  UObject *pUVar5;
  UControlRigComponent *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UControlRigComponent *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UControlRigComponent *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UControlRigComponent *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UControlRigComponent *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UControlRigComponent,UControlRigComponent_*_&>(&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1
               ,param_2);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UControlRigComponent *)0x0;
}

// ExecuteIfSafe @ 14a258020

/* WARNING: Removing unreachable block (ram,0x00014a258096) */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRigComponent,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UControlRigComponent,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
                *this,URigVMHost *param_1,FName *param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UControlRigComponent *pUVar3;
  UControlRigComponent *pUVar4;
  UObject *pUVar5;
  UControlRigComponent *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UControlRigComponent *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UControlRigComponent *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UControlRigComponent *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UControlRigComponent *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UControlRigComponent,UControlRigComponent_*_&>(&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1
               ,param_2);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UControlRigComponent *)0x0;
}

// ExecuteIfSafe @ 14a258110

/* WARNING: Removing unreachable block (ram,0x00014a258186) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRigValidator,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UControlRigValidator,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
                *this,URigVMHost *param_1,FName *param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UControlRigValidator *pUVar3;
  UControlRigValidator *pUVar4;
  UObject *pUVar5;
  UControlRigValidator *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UControlRigValidator *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UControlRigValidator *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UControlRigValidator *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UControlRigValidator *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UControlRigValidator,UControlRigValidator_*_&>(&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1,param_2);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UControlRigValidator *)0x0;
}

// ExecuteIfSafe @ 14a258200

/* WARNING: Removing unreachable block (ram,0x00014a25826e) */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UControlRig_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UControlRig_*),FDefaultDelegateUserPolicy>
                *this,UControlRig *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UTransformableControlHandle *pUVar3;
  UTransformableControlHandle *pUVar4;
  UObject *pUVar5;
  UTransformableControlHandle *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UTransformableControlHandle *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UTransformableControlHandle *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UTransformableControlHandle *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UTransformableControlHandle *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UTransformableControlHandle,UTransformableControlHandle_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UTransformableControlHandle *)0x0;
}

// ExecuteIfSafe @ 14a2582e0

/* WARNING: Removing unreachable block (ram,0x00014a25835e) */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
                *this,UControlRig *param_1,FRigControlElement *param_2,
               FRigControlModifiedContext *param_3)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UTransformableControlHandle *pUVar3;
  UTransformableControlHandle *pUVar4;
  UObject *pUVar5;
  UTransformableControlHandle *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UTransformableControlHandle *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UTransformableControlHandle *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UTransformableControlHandle *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UTransformableControlHandle *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UTransformableControlHandle,UTransformableControlHandle_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1,param_2,param_3);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UTransformableControlHandle *)0x0;
}

// ExecuteIfSafe @ 14a2583e0

/* WARNING: Removing unreachable block (ram,0x00014a25844e) */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                *this,UObject *param_1)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UTransformableControlHandle *pUVar3;
  UTransformableControlHandle *pUVar4;
  UObject *pUVar5;
  UTransformableControlHandle *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UTransformableControlHandle *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UTransformableControlHandle *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UTransformableControlHandle *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UTransformableControlHandle *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UTransformableControlHandle,UTransformableControlHandle_*_&>
                       (&local_res8);
    (*(code *)this->MethodPtr)(pUVar4,param_1);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UTransformableControlHandle *)0x0;
}

// ExecuteIfSafe @ 14a2584c0

/* WARNING: Removing unreachable block (ram,0x00014a25853f) */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(enum_ERigHierarchyNotification,URigHierarchy_*,FRigNotificationSubject_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,ERigHierarchyNotification param_1,URigHierarchy *param_2,
               FRigNotificationSubject *param_3)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UTransformableControlHandle *pUVar3;
  UTransformableControlHandle *pUVar4;
  UObject *pUVar5;
  UTransformableControlHandle *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UTransformableControlHandle *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin((FWeakObjectPtr *)((longlong)this + 0x18));
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UTransformableControlHandle *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UTransformableControlHandle *)
           FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  if (pUVar3 != (UTransformableControlHandle *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UTransformableControlHandle,UTransformableControlHandle_*_&>
                       (&local_res8);
    (**(code **)((longlong)this + 0x20))(pUVar4,param_1,param_2,param_3);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UTransformableControlHandle *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 14a25fa80

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<1,UControlRig_const_,bool___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<1,UControlRig_const_,bool___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a25fa90

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<1,UControlRigReplay_const_,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<1,UControlRigReplay_const_,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a25faa0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,AControlRigControlActor,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,AControlRigControlActor,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a25fab0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a25fac0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(URigHierarchy_*,FRigEventContext_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(URigHierarchy_*,FRigEventContext_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a25fad0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(FControlRigExecuteContext_const_*,FString_const_&,UControlRigShapeLibrary_*,bool),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(FControlRigExecuteContext_const_*,FString_const_&,UControlRigShapeLibrary_*,bool),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a25fae0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(UControlRigOverrideAsset_const_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(UControlRigOverrideAsset_const_*),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a25faf0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(enum_ERigHierarchyNotification,URigHierarchy_*,FRigNotificationSubject_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetBoundProgramCounterForTimerManager @ 14a25fb00

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRigComponent,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UControlRigComponent,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a25fb10

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRigComponent,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UControlRigComponent,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a25fb20

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRigValidator,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UControlRigValidator,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a25fb30

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UControlRig_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UControlRig_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a25fb40

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a25fb50

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a25fb60

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(enum_ERigHierarchyNotification,URigHierarchy_*,FRigNotificationSubject_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetObjectForTimerManager @ 14a2664c0

void * __thiscall
TBaseUObjectMethodDelegateInstance<1,UControlRig_const_,bool___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<1,UControlRig_const_,bool___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a2664d0

void * __thiscall
TBaseUObjectMethodDelegateInstance<1,UControlRigReplay_const_,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<1,UControlRigReplay_const_,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a2664e0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,AControlRigControlActor,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,AControlRigControlActor,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a2664f0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a266500

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(URigHierarchy_*,FRigEventContext_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(URigHierarchy_*,FRigEventContext_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a266510

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(FControlRigExecuteContext_const_*,FString_const_&,UControlRigShapeLibrary_*,bool),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(FControlRigExecuteContext_const_*,FString_const_&,UControlRigShapeLibrary_*,bool),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a266520

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(UControlRigOverrideAsset_const_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(UControlRigOverrideAsset_const_*),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a266530

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(enum_ERigHierarchyNotification,URigHierarchy_*,FRigNotificationSubject_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 14a266540

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRigComponent,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UControlRigComponent,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a266550

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRigComponent,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UControlRigComponent,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a266560

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRigValidator,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UControlRigValidator,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a266570

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UControlRig_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UControlRig_*),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a266580

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a266590

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a2665a0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(enum_ERigHierarchyNotification,URigHierarchy_*,FRigNotificationSubject_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14a26ccb0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<1,UControlRig_const_,bool___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<1,UControlRig_const_,bool___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a26ccc0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<1,UControlRigReplay_const_,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<1,UControlRigReplay_const_,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a26ccd0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,AControlRigControlActor,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,AControlRigControlActor,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a26cce0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a26ccf0

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(URigHierarchy_*,FRigEventContext_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(URigHierarchy_*,FRigEventContext_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a26cd00

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(FControlRigExecuteContext_const_*,FString_const_&,UControlRigShapeLibrary_*,bool),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(FControlRigExecuteContext_const_*,FString_const_&,UControlRigShapeLibrary_*,bool),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a26cd10

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(UControlRigOverrideAsset_const_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(UControlRigOverrideAsset_const_*),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a26cd20

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(enum_ERigHierarchyNotification,URigHierarchy_*,FRigNotificationSubject_const_&),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14a26cd30

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRigComponent,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UControlRigComponent,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a26cd40

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRigComponent,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UControlRigComponent,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a26cd50

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRigValidator,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UControlRigValidator,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a26cd60

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UControlRig_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UControlRig_*),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a26cd70

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a26cd80

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a26cd90

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(enum_ERigHierarchyNotification,URigHierarchy_*,FRigNotificationSubject_const_&),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// HasSameObject @ 14a26f8b0

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UControlRig_const_,bool___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<1,UControlRig_const_,bool___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a26f8e0

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UControlRigReplay_const_,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<1,UControlRigReplay_const_,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a26f910

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AControlRigControlActor,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,AControlRigControlActor,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a26f940

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a26f970

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(URigHierarchy_*,FRigEventContext_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(URigHierarchy_*,FRigEventContext_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a26f9a0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(FControlRigExecuteContext_const_*,FString_const_&,UControlRigShapeLibrary_*,bool),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(FControlRigExecuteContext_const_*,FString_const_&,UControlRigShapeLibrary_*,bool),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a26f9d0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(UControlRigOverrideAsset_const_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(UControlRigOverrideAsset_const_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a26fa00

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(enum_ERigHierarchyNotification,URigHierarchy_*,FRigNotificationSubject_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 14a26fa30

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRigComponent,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UControlRigComponent,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a26fa60

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRigComponent,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UControlRigComponent,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a26fa90

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRigValidator,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UControlRigValidator,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a26fac0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UControlRig_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UControlRig_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a26faf0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a26fb20

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a26fb50

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(enum_ERigHierarchyNotification,URigHierarchy_*,FRigNotificationSubject_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// IsCompactable @ 14a273f30

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UControlRig_const_,bool___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<1,UControlRig_const_,bool___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a273f50

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UControlRigReplay_const_,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<1,UControlRigReplay_const_,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a273f70

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AControlRigControlActor,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,AControlRigControlActor,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a273f90

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a273fb0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(URigHierarchy_*,FRigEventContext_const_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(URigHierarchy_*,FRigEventContext_const_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a273fd0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(FControlRigExecuteContext_const_*,FString_const_&,UControlRigShapeLibrary_*,bool),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(FControlRigExecuteContext_const_*,FString_const_&,UControlRigShapeLibrary_*,bool),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a273ff0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(UControlRigOverrideAsset_const_*),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(UControlRigOverrideAsset_const_*),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a274010

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(enum_ERigHierarchyNotification,URigHierarchy_*,FRigNotificationSubject_const_&),FDefaultDelegateUserPolicy>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a274030

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRigComponent,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UControlRigComponent,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a274050

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRigComponent,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UControlRigComponent,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a274070

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRigValidator,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UControlRigValidator,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a274090

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UControlRig_*),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UControlRig_*),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a2740b0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a2740d0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a2740f0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(enum_ERigHierarchyNotification,URigHierarchy_*,FRigNotificationSubject_const_&),FDefaultDelegateUserPolicy>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 14a275400

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UControlRig_const_,bool___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<1,UControlRig_const_,bool___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a275420

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UControlRigReplay_const_,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<1,UControlRigReplay_const_,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a275440

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,AControlRigControlActor,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,AControlRigControlActor,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a275460

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a275480

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(URigHierarchy_*,FRigEventContext_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(URigHierarchy_*,FRigEventContext_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a2754a0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(FControlRigExecuteContext_const_*,FString_const_&,UControlRigShapeLibrary_*,bool),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(FControlRigExecuteContext_const_*,FString_const_&,UControlRigShapeLibrary_*,bool),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a2754c0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(UControlRigOverrideAsset_const_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(UControlRigOverrideAsset_const_*),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a2754e0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(enum_ERigHierarchyNotification,URigHierarchy_*,FRigNotificationSubject_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a275500

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRigComponent,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UControlRigComponent,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a275520

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRigComponent,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UControlRigComponent,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a275540

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRigValidator,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UControlRigValidator,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a275560

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UControlRig_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UControlRig_*),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a275580

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a2755a0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a2755c0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(enum_ERigHierarchyNotification,URigHierarchy_*,FRigNotificationSubject_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 != (UObject *)0x0;
}

// TryGetBoundFunctionName @ 14a29ddd0

FName __thiscall
TBaseUObjectMethodDelegateInstance<1,UControlRig_const_,bool___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<1,UControlRig_const_,bool___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a29dde0

FName __thiscall
TBaseUObjectMethodDelegateInstance<1,UControlRigReplay_const_,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<1,UControlRigReplay_const_,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a29ddf0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,AControlRigControlActor,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,AControlRigControlActor,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a29de00

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a29de10

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(URigHierarchy_*,FRigEventContext_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(URigHierarchy_*,FRigEventContext_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a29de20

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(FControlRigExecuteContext_const_*,FString_const_&,UControlRigShapeLibrary_*,bool),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(FControlRigExecuteContext_const_*,FString_const_&,UControlRigShapeLibrary_*,bool),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a29de30

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(UControlRigOverrideAsset_const_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(UControlRigOverrideAsset_const_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a29de40

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRig,void___cdecl(enum_ERigHierarchyNotification,URigHierarchy_*,FRigNotificationSubject_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a29de50

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRigComponent,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UControlRigComponent,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a29de60

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRigComponent,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UControlRigComponent,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a29de70

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UControlRigValidator,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UControlRigValidator,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a29de80

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UControlRig_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UControlRig_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a29de90

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a29dea0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(UObject_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a29deb0

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UTransformableControlHandle,void___cdecl(enum_ERigHierarchyNotification,URigHierarchy_*,FRigNotificationSubject_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 14a2fe070

void __thiscall
TBaseUObjectMethodDelegateInstance<1,URigHierarchyController_const_,void___cdecl(enum_ERigHierarchyNotification,URigHierarchy_*,FRigNotificationSubject_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4ERigHierarchyNotification__PEAVURigHierarchy__AEBUFRigNotificationSubject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVURigHierarchyController____A6AXW4ERigHierarchyNotification__PEAVURigHierarchy__AEBUFRigNotificationSubject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a2fe100

void __thiscall
TBaseUObjectMethodDelegateInstance<1,URigHierarchyController_const_,void___cdecl(enum_ERigHierarchyNotification,URigHierarchy_*,FRigNotificationSubject_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4ERigHierarchyNotification__PEAVURigHierarchy__AEBUFRigNotificationSubject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVURigHierarchyController____A6AXW4ERigHierarchyNotification__PEAVURigHierarchy__AEBUFRigNotificationSubject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 14a2fe150

void __thiscall
TBaseUObjectMethodDelegateInstance<1,URigHierarchyController_const_,void___cdecl(enum_ERigHierarchyNotification,URigHierarchy_*,FRigNotificationSubject_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXW4ERigHierarchyNotification__PEAVURigHierarchy__AEBUFRigNotificationSubject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVURigHierarchyController____A6AXW4ERigHierarchyNotification__PEAVURigHierarchy__AEBUFRigNotificationSubject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14a2fe200

void __thiscall
TBaseUObjectMethodDelegateInstance<0,URigHierarchy,UE::Math::TTransform<double>___cdecl(FRigVMExecuteContext_const_*,FRigElementKey_const_&,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,URigHierarchy,UE::Math::TTransform<double>___cdecl(FRigVMExecuteContext_const_*,FRigElementKey_const_&,bool),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TTransform_N_Math_UE__PEBUFRigVMExecuteContext__AEBUFRigElementKey___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VURigHierarchy____A6A_AU__TTransform_N_Math_UE__PEBUFRigVMExecuteContext__AEBUFRigElementKey___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_cc431a12 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a2fe290

void __thiscall
TBaseUObjectMethodDelegateInstance<0,URigHierarchy,UE::Math::TTransform<double>___cdecl(FRigVMExecuteContext_const_*,FRigElementKey_const_&,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,URigHierarchy,UE::Math::TTransform<double>___cdecl(FRigVMExecuteContext_const_*,FRigElementKey_const_&,bool),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TTransform_N_Math_UE__PEBUFRigVMExecuteContext__AEBUFRigElementKey___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VURigHierarchy____A6A_AU__TTransform_N_Math_UE__PEBUFRigVMExecuteContext__AEBUFRigElementKey___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar1 + 3) = (this->UserObject).WeakPtr;
    *(pmf_cc431a12 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14a2fe2e0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,URigHierarchy,UE::Math::TTransform<double>___cdecl(FRigVMExecuteContext_const_*,FRigElementKey_const_&,bool),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,URigHierarchy,UE::Math::TTransform<double>___cdecl(FRigVMExecuteContext_const_*,FRigElementKey_const_&,bool),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AU__TTransform_N_Math_UE__PEBUFRigVMExecuteContext__AEBUFRigElementKey___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VURigHierarchy____A6A_AU__TTransform_N_Math_UE__PEBUFRigVMExecuteContext__AEBUFRigElementKey___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar3 + 3) = (this->UserObject).WeakPtr;
    *(pmf_cc431a12 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14a3015e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<1,URigHierarchyController_const_,void___cdecl(enum_ERigHierarchyNotification,URigHierarchy_*,FRigNotificationSubject_const_&),FDefaultDelegateUserPolicy>
::Execute(void *this,ERigHierarchyNotification param_1,URigHierarchy *param_2,
         FRigNotificationSubject *param_3)

{
  URigHierarchyController *pUVar1;
  URigHierarchyController *local_res8;
  
  local_res8 = (URigHierarchyController *)
               FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<URigHierarchyController,URigHierarchyController_*_&>(&local_res8);
  (**(code **)((longlong)this + 0x20))(pUVar1,param_1,param_2,param_3);
  return;
}

// Execute @ 14a301650

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTransform<double> * __thiscall
TBaseUObjectMethodDelegateInstance<0,URigHierarchy,UE::Math::TTransform<double>___cdecl(FRigVMExecuteContext_const_*,FRigElementKey_const_&,bool),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,URigHierarchy,UE::Math::TTransform<double>___cdecl(FRigVMExecuteContext_const_*,FRigElementKey_const_&,bool),FDefaultDelegateUserPolicy>
          *this,TTransform<double> *__return_storage_ptr__,FRigVMExecuteContext *param_1,
         FRigElementKey *param_2,bool param_3)

{
  URigHierarchy *pUVar1;
  URigHierarchy *local_res8;
  
  local_res8 = (URigHierarchy *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::DereferenceIfNecessary<URigHierarchy,URigHierarchy_*_&>(&local_res8);
  (*(code *)this->MethodPtr)(pUVar1,__return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// ExecuteIfSafe @ 14a3016d0

/* WARNING: Removing unreachable block (ram,0x00014a30174f) */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,URigHierarchyController_const_,void___cdecl(enum_ERigHierarchyNotification,URigHierarchy_*,FRigNotificationSubject_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,ERigHierarchyNotification param_1,URigHierarchy *param_2,
               FRigNotificationSubject *param_3)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  URigHierarchyController *pUVar3;
  URigHierarchyController *pUVar4;
  UObject *pUVar5;
  URigHierarchyController *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (URigHierarchyController *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin((FWeakObjectPtr *)((longlong)this + 0x18));
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (URigHierarchyController *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (URigHierarchyController *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18))
  ;
  if (pUVar3 != (URigHierarchyController *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<URigHierarchyController,URigHierarchyController_*_&>
                       (&local_res8);
    (**(code **)((longlong)this + 0x20))(pUVar4,param_1,param_2,param_3);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (URigHierarchyController *)0x0;
}

// ExecuteIfSafe @ 14a3017d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014a301861) */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,URigHierarchy,UE::Math::TTransform<double>___cdecl(FRigVMExecuteContext_const_*,FRigElementKey_const_&,bool),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,URigHierarchy,UE::Math::TTransform<double>___cdecl(FRigVMExecuteContext_const_*,FRigElementKey_const_&,bool),FDefaultDelegateUserPolicy>
                *this,FRigVMExecuteContext *param_1,FRigElementKey *param_2,bool param_3)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  URigHierarchy *pUVar3;
  URigHierarchy *pUVar4;
  UObject *pUVar5;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  URigHierarchy *local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [96];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_b8 = (URigHierarchy *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_b8 != (URigHierarchy *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_b8);
    }
    local_b0 = 0;
  }
  pUVar3 = (URigHierarchy *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (URigHierarchy *)0x0) {
    local_b8 = pUVar3;
    pUVar4 = UE::Core::Private::DereferenceIfNecessary<URigHierarchy,URigHierarchy_*_&>(&local_b8);
    local_c8 = param_3;
    (*(code *)this->MethodPtr)(pUVar4,local_a8,param_1,param_2);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (URigHierarchy *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 14a309900

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<1,URigHierarchyController_const_,void___cdecl(enum_ERigHierarchyNotification,URigHierarchy_*,FRigNotificationSubject_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetBoundProgramCounterForTimerManager @ 14a309910

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,URigHierarchy,UE::Math::TTransform<double>___cdecl(FRigVMExecuteContext_const_*,FRigElementKey_const_&,bool),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,URigHierarchy,UE::Math::TTransform<double>___cdecl(FRigVMExecuteContext_const_*,FRigElementKey_const_&,bool),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 14a312010

void * __thiscall
TBaseUObjectMethodDelegateInstance<1,URigHierarchyController_const_,void___cdecl(enum_ERigHierarchyNotification,URigHierarchy_*,FRigNotificationSubject_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetObjectForTimerManager @ 14a312020

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,URigHierarchy,UE::Math::TTransform<double>___cdecl(FRigVMExecuteContext_const_*,FRigElementKey_const_&,bool),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,URigHierarchy,UE::Math::TTransform<double>___cdecl(FRigVMExecuteContext_const_*,FRigElementKey_const_&,bool),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a31be20

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<1,URigHierarchyController_const_,void___cdecl(enum_ERigHierarchyNotification,URigHierarchy_*,FRigNotificationSubject_const_&),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1;
}

// GetUObject @ 14a31be30

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,URigHierarchy,UE::Math::TTransform<double>___cdecl(FRigVMExecuteContext_const_*,FRigElementKey_const_&,bool),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,URigHierarchy,UE::Math::TTransform<double>___cdecl(FRigVMExecuteContext_const_*,FRigElementKey_const_&,bool),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 14a31c5e0

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,URigHierarchyController_const_,void___cdecl(enum_ERigHierarchyNotification,URigHierarchy_*,FRigNotificationSubject_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 == param_1;
}

// HasSameObject @ 14a31c610

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,URigHierarchy,UE::Math::TTransform<double>___cdecl(FRigVMExecuteContext_const_*,FRigElementKey_const_&,bool),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,URigHierarchy,UE::Math::TTransform<double>___cdecl(FRigVMExecuteContext_const_*,FRigElementKey_const_&,bool),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 14a326ef0

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,URigHierarchyController_const_,void___cdecl(enum_ERigHierarchyNotification,URigHierarchy_*,FRigNotificationSubject_const_&),FDefaultDelegateUserPolicy>
::IsCompactable(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18),true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a326f10

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,URigHierarchy,UE::Math::TTransform<double>___cdecl(FRigVMExecuteContext_const_*,FRigElementKey_const_&,bool),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,URigHierarchy,UE::Math::TTransform<double>___cdecl(FRigVMExecuteContext_const_*,FRigElementKey_const_&,bool),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 14a328b90

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,URigHierarchyController_const_,void___cdecl(enum_ERigHierarchyNotification,URigHierarchy_*,FRigNotificationSubject_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x18));
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a328bb0

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,URigHierarchy,UE::Math::TTransform<double>___cdecl(FRigVMExecuteContext_const_*,FRigElementKey_const_&,bool),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,URigHierarchy,UE::Math::TTransform<double>___cdecl(FRigVMExecuteContext_const_*,FRigElementKey_const_&,bool),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// TryGetBoundFunctionName @ 14a35a160

FName __thiscall
TBaseUObjectMethodDelegateInstance<1,URigHierarchyController_const_,void___cdecl(enum_ERigHierarchyNotification,URigHierarchy_*,FRigNotificationSubject_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a35a170

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,URigHierarchy,UE::Math::TTransform<double>___cdecl(FRigVMExecuteContext_const_*,FRigElementKey_const_&,bool),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,URigHierarchy,UE::Math::TTransform<double>___cdecl(FRigVMExecuteContext_const_*,FRigElementKey_const_&,bool),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 14a400660

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UMovieSceneControlRigParameterTrack_const_,void___cdecl(IMovieSceneConstrainedSection_*,FMovieSceneConstraintChannel_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<1,UMovieSceneControlRigParameterTrack_const_,void___cdecl(IMovieSceneConstrainedSection_*,FMovieSceneConstraintChannel_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVIMovieSceneConstrainedSection__PEAUFMovieSceneConstraintChannel___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUMovieSceneControlRigParameterTrack____A6AXPEAVIMovieSceneConstrainedSection__PEAUFMovieSceneConstraintChannel___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a4006f0

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UMovieSceneControlRigParameterTrack_const_,void___cdecl(IMovieSceneConstrainedSection_*,FMovieSceneConstraintChannel_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<1,UMovieSceneControlRigParameterTrack_const_,void___cdecl(IMovieSceneConstrainedSection_*,FMovieSceneConstraintChannel_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIMovieSceneConstrainedSection__PEAUFMovieSceneConstraintChannel___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUMovieSceneControlRigParameterTrack____A6AXPEAVIMovieSceneConstrainedSection__PEAUFMovieSceneConstraintChannel___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a400740

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UMovieSceneControlRigParameterTrack_const_,void___cdecl(IMovieSceneConstrainedSection_*,FMovieSceneConstraintChannel_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<1,UMovieSceneControlRigParameterTrack_const_,void___cdecl(IMovieSceneConstrainedSection_*,FMovieSceneConstraintChannel_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIMovieSceneConstrainedSection__PEAUFMovieSceneConstraintChannel___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUMovieSceneControlRigParameterTrack____A6AXPEAVIMovieSceneConstrainedSection__PEAUFMovieSceneConstraintChannel___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar6 + 3) = (this->UserObject).WeakPtr;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14a4007f0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneControlRigParameterTrack,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMovieSceneControlRigParameterTrack,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUControlRig__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieSceneControlRigParameterTrack____A6AXPEAVUControlRig__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a400880

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneControlRigParameterTrack,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMovieSceneControlRigParameterTrack,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUControlRig__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieSceneControlRigParameterTrack____A6AXPEAVUControlRig__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a4008d0

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneControlRigParameterTrack,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMovieSceneControlRigParameterTrack,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUControlRig__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieSceneControlRigParameterTrack____A6AXPEAVUControlRig__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar6 + 3) = (this->UserObject).WeakPtr;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14a400980

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneControlRigParameterTrack,void___cdecl(UMovieSceneControlRigParameterSection_*,FName_const_&,FMovieSceneControlRigSpaceChannel_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMovieSceneControlRigParameterTrack,void___cdecl(UMovieSceneControlRigParameterSection_*,FName_const_&,FMovieSceneControlRigSpaceChannel_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 uVar1;
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMovieSceneControlRigParameterSection__AEBVFName__PEAUFMovieSceneControlRigSpaceChannel___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieSceneControlRigParameterTrack____A6AXPEAVUMovieSceneControlRigParameterSection__AEBVFName__PEAUFMovieSceneControlRigSpaceChannel___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a400a10

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneControlRigParameterTrack,void___cdecl(UMovieSceneControlRigParameterSection_*,FName_const_&,FMovieSceneControlRigSpaceChannel_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMovieSceneControlRigParameterTrack,void___cdecl(UMovieSceneControlRigParameterSection_*,FName_const_&,FMovieSceneControlRigSpaceChannel_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)param_1);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMovieSceneControlRigParameterSection__AEBVFName__PEAUFMovieSceneControlRigSpaceChannel___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar2[2] = this->_padding_;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieSceneControlRigParameterTrack____A6AXPEAVUMovieSceneControlRigParameterSection__AEBVFName__PEAUFMovieSceneControlRigSpaceChannel___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar2 + 3) = (this->UserObject).WeakPtr;
    uVar1 = *(undefined8 *)&(this->MethodPtr).field_0x8;
    puVar2[4] = *(undefined8 *)&this->MethodPtr;
    puVar2[5] = uVar1;
  }
  return;
}

// CreateCopy @ 14a400a60

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneControlRigParameterTrack,void___cdecl(UMovieSceneControlRigParameterSection_*,FName_const_&,FMovieSceneControlRigSpaceChannel_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseUObjectMethodDelegateInstance<0,UMovieSceneControlRigParameterTrack,void___cdecl(UMovieSceneControlRigParameterSection_*,FName_const_&,FMovieSceneControlRigSpaceChannel_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUMovieSceneControlRigParameterSection__AEBVFName__PEAUFMovieSceneControlRigSpaceChannel___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[2] = this->_padding_;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieSceneControlRigParameterTrack____A6AXPEAVUMovieSceneControlRigParameterSection__AEBVFName__PEAUFMovieSceneControlRigSpaceChannel___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FWeakObjectPtr *)(puVar6 + 3) = (this->UserObject).WeakPtr;
    uVar2 = *(undefined4 *)&(this->MethodPtr).field_0x4;
    uVar3 = *(undefined4 *)&(this->MethodPtr).field_0x8;
    uVar4 = *(undefined4 *)&(this->MethodPtr).field_0xc;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)&this->MethodPtr;
    *(undefined4 *)((longlong)puVar6 + 0x24) = uVar2;
    *(undefined4 *)(puVar6 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar4;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14a407ed0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<1,UMovieSceneControlRigParameterTrack_const_,void___cdecl(IMovieSceneConstrainedSection_*,FMovieSceneConstraintChannel_*),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<1,UMovieSceneControlRigParameterTrack_const_,void___cdecl(IMovieSceneConstrainedSection_*,FMovieSceneConstraintChannel_*),FDefaultDelegateUserPolicy>
          *this,IMovieSceneConstrainedSection *param_1,FMovieSceneConstraintChannel *param_2)

{
  UMovieSceneControlRigParameterTrack *pUVar1;
  UMovieSceneControlRigParameterTrack *local_res8;
  
  local_res8 = (UMovieSceneControlRigParameterTrack *)
               FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UMovieSceneControlRigParameterTrack,UMovieSceneControlRigParameterTrack_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,
             param_2);
  return;
}

// Execute @ 14a407f30

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneControlRigParameterTrack,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UMovieSceneControlRigParameterTrack,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
          *this,UControlRig *param_1,FName *param_2)

{
  UMovieSceneControlRigParameterTrack *pUVar1;
  UMovieSceneControlRigParameterTrack *local_res8;
  
  local_res8 = (UMovieSceneControlRigParameterTrack *)
               FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UMovieSceneControlRigParameterTrack,UMovieSceneControlRigParameterTrack_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,
             param_2);
  return;
}

// Execute @ 14a407f90

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneControlRigParameterTrack,void___cdecl(UMovieSceneControlRigParameterSection_*,FName_const_&,FMovieSceneControlRigSpaceChannel_*),FDefaultDelegateUserPolicy>
::Execute(TBaseUObjectMethodDelegateInstance<0,UMovieSceneControlRigParameterTrack,void___cdecl(UMovieSceneControlRigParameterSection_*,FName_const_&,FMovieSceneControlRigSpaceChannel_*),FDefaultDelegateUserPolicy>
          *this,UMovieSceneControlRigParameterSection *param_1,FName *param_2,
         FMovieSceneControlRigSpaceChannel *param_3)

{
  UMovieSceneControlRigParameterTrack *pUVar1;
  UMovieSceneControlRigParameterTrack *local_res8;
  
  local_res8 = (UMovieSceneControlRigParameterTrack *)
               FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  pUVar1 = UE::Core::Private::
           DereferenceIfNecessary<UMovieSceneControlRigParameterTrack,UMovieSceneControlRigParameterTrack_*_&>
                     (&local_res8);
  (**(code **)&this->MethodPtr)
            ((longlong)&pUVar1->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1,
             param_2,param_3);
  return;
}

// ExecuteIfSafe @ 14a4090e0

/* WARNING: Removing unreachable block (ram,0x00014a409156) */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UMovieSceneControlRigParameterTrack_const_,void___cdecl(IMovieSceneConstrainedSection_*,FMovieSceneConstraintChannel_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<1,UMovieSceneControlRigParameterTrack_const_,void___cdecl(IMovieSceneConstrainedSection_*,FMovieSceneConstraintChannel_*),FDefaultDelegateUserPolicy>
                *this,IMovieSceneConstrainedSection *param_1,FMovieSceneConstraintChannel *param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UMovieSceneControlRigParameterTrack *pUVar3;
  UMovieSceneControlRigParameterTrack *pUVar4;
  UObject *pUVar5;
  UMovieSceneControlRigParameterTrack *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UMovieSceneControlRigParameterTrack *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UMovieSceneControlRigParameterTrack *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UMovieSceneControlRigParameterTrack *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UMovieSceneControlRigParameterTrack *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UMovieSceneControlRigParameterTrack,UMovieSceneControlRigParameterTrack_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1
               ,param_2);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UMovieSceneControlRigParameterTrack *)0x0;
}

// ExecuteIfSafe @ 14a4091d0

/* WARNING: Removing unreachable block (ram,0x00014a409246) */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneControlRigParameterTrack,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UMovieSceneControlRigParameterTrack,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
                *this,UControlRig *param_1,FName *param_2)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UMovieSceneControlRigParameterTrack *pUVar3;
  UMovieSceneControlRigParameterTrack *pUVar4;
  UObject *pUVar5;
  UMovieSceneControlRigParameterTrack *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UMovieSceneControlRigParameterTrack *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UMovieSceneControlRigParameterTrack *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UMovieSceneControlRigParameterTrack *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UMovieSceneControlRigParameterTrack *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UMovieSceneControlRigParameterTrack,UMovieSceneControlRigParameterTrack_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1
               ,param_2);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UMovieSceneControlRigParameterTrack *)0x0;
}

// ExecuteIfSafe @ 14a4092c0

/* WARNING: Removing unreachable block (ram,0x00014a40933e) */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneControlRigParameterTrack,void___cdecl(UMovieSceneControlRigParameterSection_*,FName_const_&,FMovieSceneControlRigSpaceChannel_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseUObjectMethodDelegateInstance<0,UMovieSceneControlRigParameterTrack,void___cdecl(UMovieSceneControlRigParameterSection_*,FName_const_&,FMovieSceneControlRigSpaceChannel_*),FDefaultDelegateUserPolicy>
                *this,UMovieSceneControlRigParameterSection *param_1,FName *param_2,
               FMovieSceneControlRigSpaceChannel *param_3)

{
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  UMovieSceneControlRigParameterTrack *pUVar3;
  UMovieSceneControlRigParameterTrack *pUVar4;
  UObject *pUVar5;
  UMovieSceneControlRigParameterTrack *local_res8;
  
  pUVar5 = (UObject *)0x0;
  bVar1 = IsInGameThread();
  if (bVar1) {
    local_res8 = (UMovieSceneControlRigParameterTrack *)0x0;
  }
  else {
    TVar2 = FWeakObjectPtr::Pin(&(this->UserObject).WeakPtr);
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar2.Object;
    *(undefined8 *)TVar2.Object = 0;
    if (local_res8 != (UMovieSceneControlRigParameterTrack *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_res8);
    }
  }
  pUVar3 = (UMovieSceneControlRigParameterTrack *)FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  if (pUVar3 != (UMovieSceneControlRigParameterTrack *)0x0) {
    local_res8 = pUVar3;
    pUVar4 = UE::Core::Private::
             DereferenceIfNecessary<UMovieSceneControlRigParameterTrack,UMovieSceneControlRigParameterTrack_*_&>
                       (&local_res8);
    (**(code **)&this->MethodPtr)
              ((longlong)&pUVar4->_padding_ + (longlong)*(int *)&(this->MethodPtr).field_0x8,param_1
               ,param_2,param_3);
  }
  if (pUVar5 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar5);
  }
  return pUVar3 != (UMovieSceneControlRigParameterTrack *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 14a4115d0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<1,UMovieSceneControlRigParameterTrack_const_,void___cdecl(IMovieSceneConstrainedSection_*,FMovieSceneConstraintChannel_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<1,UMovieSceneControlRigParameterTrack_const_,void___cdecl(IMovieSceneConstrainedSection_*,FMovieSceneConstraintChannel_*),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a4115e0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneControlRigParameterTrack,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMovieSceneControlRigParameterTrack,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a4115f0

ulong64 __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneControlRigParameterTrack,void___cdecl(UMovieSceneControlRigParameterSection_*,FName_const_&,FMovieSceneControlRigSpaceChannel_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMovieSceneControlRigParameterTrack,void___cdecl(UMovieSceneControlRigParameterSection_*,FName_const_&,FMovieSceneControlRigSpaceChannel_*),FDefaultDelegateUserPolicy>
           *this)

{
  return *(ulong64 *)&this->MethodPtr;
}

// GetObjectForTimerManager @ 14a4169d0

void * __thiscall
TBaseUObjectMethodDelegateInstance<1,UMovieSceneControlRigParameterTrack_const_,void___cdecl(IMovieSceneConstrainedSection_*,FMovieSceneConstraintChannel_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<1,UMovieSceneControlRigParameterTrack_const_,void___cdecl(IMovieSceneConstrainedSection_*,FMovieSceneConstraintChannel_*),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a4169e0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneControlRigParameterTrack,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMovieSceneControlRigParameterTrack,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetObjectForTimerManager @ 14a4169f0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneControlRigParameterTrack,void___cdecl(UMovieSceneControlRigParameterSection_*,FName_const_&,FMovieSceneControlRigSpaceChannel_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseUObjectMethodDelegateInstance<0,UMovieSceneControlRigParameterTrack,void___cdecl(UMovieSceneControlRigParameterSection_*,FName_const_&,FMovieSceneControlRigSpaceChannel_*),FDefaultDelegateUserPolicy>
           *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a41a660

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<1,UMovieSceneControlRigParameterTrack_const_,void___cdecl(IMovieSceneConstrainedSection_*,FMovieSceneConstraintChannel_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<1,UMovieSceneControlRigParameterTrack_const_,void___cdecl(IMovieSceneConstrainedSection_*,FMovieSceneConstraintChannel_*),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a41a670

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneControlRigParameterTrack,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UMovieSceneControlRigParameterTrack,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// GetUObject @ 14a41a680

UObject * __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneControlRigParameterTrack,void___cdecl(UMovieSceneControlRigParameterSection_*,FName_const_&,FMovieSceneControlRigSpaceChannel_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseUObjectMethodDelegateInstance<0,UMovieSceneControlRigParameterTrack,void___cdecl(UMovieSceneControlRigParameterSection_*,FName_const_&,FMovieSceneControlRigSpaceChannel_*),FDefaultDelegateUserPolicy>
             *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1;
}

// HasSameObject @ 14a41ce10

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UMovieSceneControlRigParameterTrack_const_,void___cdecl(IMovieSceneConstrainedSection_*,FMovieSceneConstraintChannel_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<1,UMovieSceneControlRigParameterTrack_const_,void___cdecl(IMovieSceneConstrainedSection_*,FMovieSceneConstraintChannel_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a41ce40

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneControlRigParameterTrack,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UMovieSceneControlRigParameterTrack,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// HasSameObject @ 14a41ce70

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneControlRigParameterTrack,void___cdecl(UMovieSceneControlRigParameterSection_*,FName_const_&,FMovieSceneControlRigSpaceChannel_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseUObjectMethodDelegateInstance<0,UMovieSceneControlRigParameterTrack,void___cdecl(UMovieSceneControlRigParameterSection_*,FName_const_&,FMovieSceneControlRigSpaceChannel_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 == param_1;
}

// IsCompactable @ 14a425320

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UMovieSceneControlRigParameterTrack_const_,void___cdecl(IMovieSceneConstrainedSection_*,FMovieSceneConstraintChannel_*),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<1,UMovieSceneControlRigParameterTrack_const_,void___cdecl(IMovieSceneConstrainedSection_*,FMovieSceneConstraintChannel_*),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a425340

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneControlRigParameterTrack,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UMovieSceneControlRigParameterTrack,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsCompactable @ 14a425360

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneControlRigParameterTrack,void___cdecl(UMovieSceneControlRigParameterSection_*,FName_const_&,FMovieSceneControlRigSpaceChannel_*),FDefaultDelegateUserPolicy>
::IsCompactable(TBaseUObjectMethodDelegateInstance<0,UMovieSceneControlRigParameterTrack,void___cdecl(UMovieSceneControlRigParameterSection_*,FName_const_&,FMovieSceneControlRigSpaceChannel_*),FDefaultDelegateUserPolicy>
                *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr,true);
  return pUVar1 == (UObject *)0x0;
}

// IsSafeToExecute @ 14a428410

bool __thiscall
TBaseUObjectMethodDelegateInstance<1,UMovieSceneControlRigParameterTrack_const_,void___cdecl(IMovieSceneConstrainedSection_*,FMovieSceneConstraintChannel_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<1,UMovieSceneControlRigParameterTrack_const_,void___cdecl(IMovieSceneConstrainedSection_*,FMovieSceneConstraintChannel_*),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a428430

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneControlRigParameterTrack,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UMovieSceneControlRigParameterTrack,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// IsSafeToExecute @ 14a428450

bool __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneControlRigParameterTrack,void___cdecl(UMovieSceneControlRigParameterSection_*,FName_const_&,FMovieSceneControlRigSpaceChannel_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseUObjectMethodDelegateInstance<0,UMovieSceneControlRigParameterTrack,void___cdecl(UMovieSceneControlRigParameterSection_*,FName_const_&,FMovieSceneControlRigSpaceChannel_*),FDefaultDelegateUserPolicy>
                  *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->UserObject).WeakPtr);
  return pUVar1 != (UObject *)0x0;
}

// TryGetBoundFunctionName @ 14a45cb10

FName __thiscall
TBaseUObjectMethodDelegateInstance<1,UMovieSceneControlRigParameterTrack_const_,void___cdecl(IMovieSceneConstrainedSection_*,FMovieSceneConstraintChannel_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<1,UMovieSceneControlRigParameterTrack_const_,void___cdecl(IMovieSceneConstrainedSection_*,FMovieSceneConstraintChannel_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a45cb20

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneControlRigParameterTrack,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UMovieSceneControlRigParameterTrack,void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a45cb30

FName __thiscall
TBaseUObjectMethodDelegateInstance<0,UMovieSceneControlRigParameterTrack,void___cdecl(UMovieSceneControlRigParameterSection_*,FName_const_&,FMovieSceneControlRigSpaceChannel_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseUObjectMethodDelegateInstance<0,UMovieSceneControlRigParameterTrack,void___cdecl(UMovieSceneControlRigParameterSection_*,FName_const_&,FMovieSceneControlRigSpaceChannel_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

