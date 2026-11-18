// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationController
// Functions: 22

// TryGetBoundFunctionName @ 148c4c950

FName __thiscall
TBaseRawMethodDelegateInstance<0,FAutomationExecCmd,void___cdecl(void),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FAutomationExecCmd,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 148c4c960

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FAutomationExecCmd,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetUObject(TBaseRawMethodDelegateInstance<0,FAutomationExecCmd,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 148c4c970

void * __thiscall
TBaseRawMethodDelegateInstance<0,FAutomationExecCmd,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FAutomationExecCmd,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetBoundProgramCounterForTimerManager @ 148c4c980

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FAutomationExecCmd,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FAutomationExecCmd,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// HasSameObject @ 148c4c990

bool __thiscall
TBaseRawMethodDelegateInstance<0,FAutomationExecCmd,void___cdecl(void),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseRawMethodDelegateInstance<0,FAutomationExecCmd,void___cdecl(void),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 148c4c9a0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FAutomationExecCmd,void___cdecl(void),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FAutomationExecCmd,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  return true;
}

// CreateCopy @ 148c4c9b0

void __thiscall
TBaseRawMethodDelegateInstance<0,FAutomationExecCmd,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,FAutomationExecCmd,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFAutomationExecCmd____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_f87bdd76 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 148c4ca60

void __thiscall
TBaseRawMethodDelegateInstance<0,FAutomationExecCmd,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,FAutomationExecCmd,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFAutomationExecCmd____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_f87bdd76 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 148c4caf0

void __thiscall
TBaseRawMethodDelegateInstance<0,FAutomationExecCmd,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,FAutomationExecCmd,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAutomationExecCmd____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_f87bdd76 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// Execute @ 148c4cb40

void __thiscall
TBaseRawMethodDelegateInstance<0,FAutomationExecCmd,void___cdecl(void),FDefaultDelegateUserPolicy>::
Execute(TBaseRawMethodDelegateInstance<0,FAutomationExecCmd,void___cdecl(void),FDefaultDelegateUserPolicy>
        *this)

{
  FAutomationExecCmd *pFVar1;
  FAutomationExecCmd *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FAutomationExecCmd,FAutomationExecCmd_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return;
}

// ExecuteIfSafe @ 148c4cb80

bool __thiscall
TBaseRawMethodDelegateInstance<0,FAutomationExecCmd,void___cdecl(void),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FAutomationExecCmd,void___cdecl(void),FDefaultDelegateUserPolicy>
              *this)

{
  FAutomationExecCmd *pFVar1;
  FAutomationExecCmd *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FAutomationExecCmd,FAutomationExecCmd_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return true;
}

// TryGetBoundFunctionName @ 148c4d880

FName __thiscall
TBaseRawMethodDelegateInstance<0,FAutomationExecCmd,bool___cdecl(float),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FAutomationExecCmd,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 148c4d890

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FAutomationExecCmd,bool___cdecl(float),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FAutomationExecCmd,bool___cdecl(float),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 148c4d8a0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FAutomationExecCmd,bool___cdecl(float),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FAutomationExecCmd,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetBoundProgramCounterForTimerManager @ 148c4d8b0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FAutomationExecCmd,bool___cdecl(float),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FAutomationExecCmd,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// HasSameObject @ 148c4d8c0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FAutomationExecCmd,bool___cdecl(float),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FAutomationExecCmd,bool___cdecl(float),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 148c4d8d0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FAutomationExecCmd,bool___cdecl(float),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FAutomationExecCmd,bool___cdecl(float),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// CreateCopy @ 148c4d8e0

void __thiscall
TBaseRawMethodDelegateInstance<0,FAutomationExecCmd,bool___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FAutomationExecCmd,bool___cdecl(float),FDefaultDelegateUserPolicy>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAutomationExecCmd____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_61edb766 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 148c4d990

void __thiscall
TBaseRawMethodDelegateInstance<0,FAutomationExecCmd,bool___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FAutomationExecCmd,bool___cdecl(float),FDefaultDelegateUserPolicy>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAutomationExecCmd____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_61edb766 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 148c4da20

void __thiscall
TBaseRawMethodDelegateInstance<0,FAutomationExecCmd,bool___cdecl(float),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FAutomationExecCmd,bool___cdecl(float),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFAutomationExecCmd____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_61edb766 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// Execute @ 148c4da70

bool __thiscall
TBaseRawMethodDelegateInstance<0,FAutomationExecCmd,bool___cdecl(float),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FAutomationExecCmd,bool___cdecl(float),FDefaultDelegateUserPolicy>
          *this,float param_1)

{
  undefined1 uVar1;
  FAutomationExecCmd *pFVar2;
  FAutomationExecCmd *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar2 = UE::Core::Private::DereferenceIfNecessary<FAutomationExecCmd,FAutomationExecCmd_*_&>
                     (local_res8);
  uVar1 = (*(code *)this->MethodPtr)(pFVar2,param_1);
  return (bool)uVar1;
}

// ExecuteIfSafe @ 148c4dac0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FAutomationExecCmd,bool___cdecl(float),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FAutomationExecCmd,bool___cdecl(float),FDefaultDelegateUserPolicy>
                *this,float param_1)

{
  FAutomationExecCmd *pFVar1;
  FAutomationExecCmd *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FAutomationExecCmd,FAutomationExecCmd_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

