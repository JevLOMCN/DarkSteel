// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 22

// CreateCopy @ 14a24b620

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FAnimNode_ControlRig,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FAnimNode_ControlRig,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_UFAnimNode_ControlRig____A6AXPEAVURigVMHost__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_b47d16fa *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a24b6b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FAnimNode_ControlRig,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FAnimNode_ControlRig,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_UFAnimNode_ControlRig____A6AXPEAVURigVMHost__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_b47d16fa *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14a24b700

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FAnimNode_ControlRig,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FAnimNode_ControlRig,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_UFAnimNode_ControlRig____A6AXPEAVURigVMHost__AEBVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_b47d16fa *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14a24b7b0

void __thiscall
TBaseRawMethodDelegateInstance<0,FControlEvaluationGraphBinding,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FControlEvaluationGraphBinding,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_UFControlEvaluationGraphBinding____A6AXPEAVUControlRig__PEAUFRigControlElement__AEBUFRigControlModifiedContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_23f11218 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14a24b840

void __thiscall
TBaseRawMethodDelegateInstance<0,FControlEvaluationGraphBinding,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FControlEvaluationGraphBinding,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_UFControlEvaluationGraphBinding____A6AXPEAVUControlRig__PEAUFRigControlElement__AEBUFRigControlModifiedContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_23f11218 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 14a24b890

void __thiscall
TBaseRawMethodDelegateInstance<0,FControlEvaluationGraphBinding,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FControlEvaluationGraphBinding,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_UFControlEvaluationGraphBinding____A6AXPEAVUControlRig__PEAUFRigControlElement__AEBUFRigControlModifiedContext___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_23f11218 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14a253b20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FAnimNode_ControlRig,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FAnimNode_ControlRig,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
          *this,URigVMHost *param_1,FName *param_2)

{
  FAnimNode_ControlRig *pFVar1;
  FAnimNode_ControlRig *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FAnimNode_ControlRig,FAnimNode_ControlRig_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1,param_2);
  return;
}

// Execute @ 14a253b80

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FControlEvaluationGraphBinding,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FControlEvaluationGraphBinding,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
          *this,UControlRig *param_1,FRigControlElement *param_2,FRigControlModifiedContext *param_3
         )

{
  FControlEvaluationGraphBinding *pFVar1;
  FControlEvaluationGraphBinding *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FControlEvaluationGraphBinding,FControlEvaluationGraphBinding_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1,param_2,param_3);
  return;
}

// ExecuteIfSafe @ 14a2576e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FAnimNode_ControlRig,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FAnimNode_ControlRig,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
                *this,URigVMHost *param_1,FName *param_2)

{
  FAnimNode_ControlRig *pFVar1;
  FAnimNode_ControlRig *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FAnimNode_ControlRig,FAnimNode_ControlRig_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 14a257740

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FControlEvaluationGraphBinding,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FControlEvaluationGraphBinding,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
                *this,UControlRig *param_1,FRigControlElement *param_2,
               FRigControlModifiedContext *param_3)

{
  FControlEvaluationGraphBinding *pFVar1;
  FControlEvaluationGraphBinding *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FControlEvaluationGraphBinding,FControlEvaluationGraphBinding_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1,param_2,param_3);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14a25fa60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FAnimNode_ControlRig,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FAnimNode_ControlRig,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14a25fa70

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FControlEvaluationGraphBinding,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FControlEvaluationGraphBinding,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 14a2664a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FAnimNode_ControlRig,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FAnimNode_ControlRig,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14a2664b0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FControlEvaluationGraphBinding,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FControlEvaluationGraphBinding,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 14a26cc90

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FAnimNode_ControlRig,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FAnimNode_ControlRig,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14a26cca0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FControlEvaluationGraphBinding,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FControlEvaluationGraphBinding,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14a26f890

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FAnimNode_ControlRig,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FAnimNode_ControlRig,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14a26f8a0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FControlEvaluationGraphBinding,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FControlEvaluationGraphBinding,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 14a2753e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FAnimNode_ControlRig,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FAnimNode_ControlRig,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 14a2753f0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FControlEvaluationGraphBinding,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FControlEvaluationGraphBinding,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14a29ddb0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FName __thiscall
TBaseRawMethodDelegateInstance<0,FAnimNode_ControlRig,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FAnimNode_ControlRig,void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14a29ddc0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FControlEvaluationGraphBinding,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FControlEvaluationGraphBinding,void___cdecl(UControlRig_*,FRigControlElement_*,FRigControlModifiedContext_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

