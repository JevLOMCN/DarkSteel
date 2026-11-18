// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 22

// CreateCopy @ 14257bfa0

void __thiscall
TBaseStaticDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,int>::CreateCopy
          (TBaseStaticDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,int> *this,
          TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AHXZUFDefaultDelegateUserPolicy__H__6B_;
    *(int *)(puVar1 + 1) = (int)this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AHXZUFDefaultDelegateUserPolicy__H__6B_;
    puVar1[3] = this->StaticFuncPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14257c030

void __thiscall
TBaseStaticDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,int>::CreateCopy
          (TBaseStaticDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,int> *this,
          TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AHXZUFDefaultDelegateUserPolicy__H__6B_;
    *(int *)(puVar1 + 1) = (int)this->_padding_;
    puVar1[2] = this->_padding_;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AHXZUFDefaultDelegateUserPolicy__H__6B_;
    puVar1[3] = this->StaticFuncPtr;
  }
  return;
}

// CreateCopy @ 14257c080

void __thiscall
TBaseStaticDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,int>::CreateCopy
          (TBaseStaticDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,int> *this,
          TDelegateBase<FThreadSafeDelegateMode> *param_1)

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
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AHXZUFDefaultDelegateUserPolicy__H__6B_;
    *(int *)(puVar3 + 1) = (int)this->_padding_;
    puVar3[2] = this->_padding_;
    *puVar3 = &___7__TBaseStaticDelegateInstance___A6AHXZUFDefaultDelegateUserPolicy__H__6B_;
    puVar3[3] = this->StaticFuncPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14257d610

int __thiscall
TBaseStaticDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,int>::Execute
          (TBaseStaticDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,int> *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014257d617. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*this->StaticFuncPtr)((int)this->_padding_);
  return iVar1;
}

// ExecuteIfSafe @ 14257d940

bool __thiscall
TBaseStaticDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,int>::ExecuteIfSafe
          (TBaseStaticDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,int> *this)

{
  (*this->StaticFuncPtr)((int)this->_padding_);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14257ead0

ulong64 __thiscall
TBaseStaticDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,int>::
GetBoundProgramCounterForTimerManager
          (TBaseStaticDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,int> *this)

{
  return (ulong64)this->StaticFuncPtr;
}

// GetObjectForTimerManager @ 142582220

void * __thiscall
TBaseStaticDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,int>::
GetObjectForTimerManager
          (TBaseStaticDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,int> *this)

{
  return (void *)0x0;
}

// GetUObject @ 142589ff0

UObject * __thiscall
TBaseStaticDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,int>::GetUObject
          (TBaseStaticDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,int> *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14258a710

bool __thiscall
TBaseStaticDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,int>::HasSameObject
          (TBaseStaticDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,int> *this,
          void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14258bf50

bool __thiscall
TBaseStaticDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,int>::IsSafeToExecute
          (TBaseStaticDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,int> *this)

{
  return true;
}

// TryGetBoundFunctionName @ 1425a9160

FName __thiscall
TBaseStaticDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,int>::
TryGetBoundFunctionName
          (TBaseStaticDelegateInstance<int___cdecl(void),FDefaultDelegateUserPolicy,int> *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 1425d96e0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EConnectionType_FTraceAuxiliary__AEBVFString___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXW4EConnectionType_FTraceAuxiliary__AEBVFString___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1425d9760

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EConnectionType_FTraceAuxiliary__AEBVFString___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXW4EConnectionType_FTraceAuxiliary__AEBVFString___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 1425d97b0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
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
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EConnectionType_FTraceAuxiliary__AEBVFString___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXW4EConnectionType_FTraceAuxiliary__AEBVFString___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 1425db270

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
::Execute(void *this,EConnectionType param_1,FString *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001425db27f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)this + 0x18))(param_1,param_2);
  return;
}

// ExecuteIfSafe @ 1425db9f0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
::ExecuteIfSafe(void *this,EConnectionType param_1,FString *param_2)

{
  (**(code **)((longlong)this + 0x18))(param_1,param_2);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 1425de330

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x18);
}

// GetObjectForTimerManager @ 1425e1fb0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 1425e4300

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 1425e6410

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 1425e9aa0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 142602310

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

