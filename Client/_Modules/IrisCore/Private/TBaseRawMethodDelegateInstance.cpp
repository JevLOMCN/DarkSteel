// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 110

// TryGetBoundFunctionName @ 1441f31d0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 1441f31e0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetUObject(TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 1441f31f0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetBoundProgramCounterForTimerManager @ 1441f3200

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// HasSameObject @ 1441f3210

bool __thiscall
TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(void),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 1441f3220

bool __thiscall
TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  return true;
}

// CreateCopy @ 1441f3230

void __thiscall
TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFIrisCoreModule____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_20682e56 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1441f32e0

void __thiscall
TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFIrisCoreModule____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_20682e56 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1441f3370

void __thiscall
TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFIrisCoreModule____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_20682e56 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// Execute @ 1441f33c0

void __thiscall
TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
Execute(TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(void),FDefaultDelegateUserPolicy>
        *this)

{
  FIrisCoreModule *pFVar1;
  FIrisCoreModule *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FIrisCoreModule,FIrisCoreModule_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return;
}

// ExecuteIfSafe @ 1441f3400

bool __thiscall
TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(void),FDefaultDelegateUserPolicy>
              *this)

{
  FIrisCoreModule *pFVar1;
  FIrisCoreModule *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FIrisCoreModule,FIrisCoreModule_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return true;
}

// TryGetBoundFunctionName @ 1441f34b0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(FName,enum_EModuleChangeReason),FDefaultTSDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 1441f34c0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(FName,enum_EModuleChangeReason),FDefaultTSDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 1441f34d0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(FName,enum_EModuleChangeReason),FDefaultTSDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  return *(void **)((longlong)this + 0x18);
}

// GetBoundProgramCounterForTimerManager @ 1441f34e0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(FName,enum_EModuleChangeReason),FDefaultTSDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// HasSameObject @ 1441f34f0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(FName,enum_EModuleChangeReason),FDefaultTSDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  return *(void **)((longlong)this + 0x18) == param_1;
}

// IsSafeToExecute @ 1441f3540

bool __thiscall
TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(FName,enum_EModuleChangeReason),FDefaultTSDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  return true;
}

// CreateCopy @ 1441f3550

void __thiscall
TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(FName,enum_EModuleChangeReason),FDefaultTSDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXVFName__W4EModuleChangeReason___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFIrisCoreModule____A6AXVFName__W4EModuleChangeReason___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1441f3600

void __thiscall
TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(FName,enum_EModuleChangeReason),FDefaultTSDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXVFName__W4EModuleChangeReason___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFIrisCoreModule____A6AXVFName__W4EModuleChangeReason___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1441f3690

void __thiscall
TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(FName,enum_EModuleChangeReason),FDefaultTSDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXVFName__W4EModuleChangeReason___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFIrisCoreModule____A6AXVFName__W4EModuleChangeReason___ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// Execute @ 1441f36e0

void __thiscall
TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(FName,enum_EModuleChangeReason),FDefaultTSDelegateUserPolicy>
::Execute(void *this,FName param_1,EModuleChangeReason param_2)

{
  FIrisCoreModule *pFVar1;
  FIrisCoreModule *local_res8;
  
  local_res8 = *(FIrisCoreModule **)((longlong)this + 0x18);
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FIrisCoreModule,FIrisCoreModule_*_&>
                     (&local_res8);
  (**(code **)((longlong)this + 0x20))(pFVar1,param_1,param_2);
  return;
}

// ExecuteIfSafe @ 1441f3780

bool __thiscall
TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(FName,enum_EModuleChangeReason),FDefaultTSDelegateUserPolicy>
::ExecuteIfSafe(void *this,FName param_1,EModuleChangeReason param_2)

{
  FIrisCoreModule *pFVar1;
  FIrisCoreModule *local_res8;
  
  local_res8 = *(FIrisCoreModule **)((longlong)this + 0x18);
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FIrisCoreModule,FIrisCoreModule_*_&>
                     (&local_res8);
  (**(code **)((longlong)this + 0x20))(pFVar1,param_1,param_2);
  return true;
}

// TryGetBoundFunctionName @ 1441f3940

FName __thiscall
TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(UReplicationSystem_*),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(UReplicationSystem_*),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 1441f3950

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(UReplicationSystem_*),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(UReplicationSystem_*),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 1441f3960

void * __thiscall
TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(UReplicationSystem_*),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(UReplicationSystem_*),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetBoundProgramCounterForTimerManager @ 1441f3970

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(UReplicationSystem_*),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(UReplicationSystem_*),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// HasSameObject @ 1441f3980

bool __thiscall
TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(UReplicationSystem_*),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(UReplicationSystem_*),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 1441f3990

bool __thiscall
TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(UReplicationSystem_*),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(UReplicationSystem_*),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// CreateCopy @ 1441f39a0

void __thiscall
TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(UReplicationSystem_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(UReplicationSystem_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUReplicationSystem___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFIrisCoreModule____A6AXPEAVUReplicationSystem___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_07da096c *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1441f3a50

void __thiscall
TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(UReplicationSystem_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(UReplicationSystem_*),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUReplicationSystem___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFIrisCoreModule____A6AXPEAVUReplicationSystem___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_07da096c *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1441f3ae0

void __thiscall
TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(UReplicationSystem_*),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(UReplicationSystem_*),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUReplicationSystem___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFIrisCoreModule____A6AXPEAVUReplicationSystem___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_07da096c *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// Execute @ 1441f3b30

void __thiscall
TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(UReplicationSystem_*),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(UReplicationSystem_*),FDefaultDelegateUserPolicy>
          *this,UReplicationSystem *param_1)

{
  FIrisCoreModule *pFVar1;
  FIrisCoreModule *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FIrisCoreModule,FIrisCoreModule_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// ExecuteIfSafe @ 1441f3b80

bool __thiscall
TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(UReplicationSystem_*),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FIrisCoreModule,void___cdecl(UReplicationSystem_*),FDefaultDelegateUserPolicy>
                *this,UReplicationSystem *param_1)

{
  FIrisCoreModule *pFVar1;
  FIrisCoreModule *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FIrisCoreModule,FIrisCoreModule_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// TryGetBoundFunctionName @ 1441f40d0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FIrisCoreModule,bool___cdecl(float),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FIrisCoreModule,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 1441f40e0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FIrisCoreModule,bool___cdecl(float),FDefaultDelegateUserPolicy>::
GetUObject(TBaseRawMethodDelegateInstance<0,FIrisCoreModule,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 1441f40f0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FIrisCoreModule,bool___cdecl(float),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FIrisCoreModule,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetBoundProgramCounterForTimerManager @ 1441f4100

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FIrisCoreModule,bool___cdecl(float),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FIrisCoreModule,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// HasSameObject @ 1441f4110

bool __thiscall
TBaseRawMethodDelegateInstance<0,FIrisCoreModule,bool___cdecl(float),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseRawMethodDelegateInstance<0,FIrisCoreModule,bool___cdecl(float),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 1441f4120

bool __thiscall
TBaseRawMethodDelegateInstance<0,FIrisCoreModule,bool___cdecl(float),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FIrisCoreModule,bool___cdecl(float),FDefaultDelegateUserPolicy>
                *this)

{
  return true;
}

// CreateCopy @ 1441f4130

void __thiscall
TBaseRawMethodDelegateInstance<0,FIrisCoreModule,bool___cdecl(float),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,FIrisCoreModule,bool___cdecl(float),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFIrisCoreModule____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_56776708 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1441f41e0

void __thiscall
TBaseRawMethodDelegateInstance<0,FIrisCoreModule,bool___cdecl(float),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,FIrisCoreModule,bool___cdecl(float),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFIrisCoreModule____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_56776708 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1441f4270

void __thiscall
TBaseRawMethodDelegateInstance<0,FIrisCoreModule,bool___cdecl(float),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,FIrisCoreModule,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFIrisCoreModule____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_56776708 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// Execute @ 1441f42c0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FIrisCoreModule,bool___cdecl(float),FDefaultDelegateUserPolicy>::
Execute(TBaseRawMethodDelegateInstance<0,FIrisCoreModule,bool___cdecl(float),FDefaultDelegateUserPolicy>
        *this,float param_1)

{
  undefined1 uVar1;
  FIrisCoreModule *pFVar2;
  FIrisCoreModule *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar2 = UE::Core::Private::DereferenceIfNecessary<FIrisCoreModule,FIrisCoreModule_*_&>
                     (local_res8);
  uVar1 = (*(code *)this->MethodPtr)(pFVar2,param_1);
  return (bool)uVar1;
}

// ExecuteIfSafe @ 1441f4310

bool __thiscall
TBaseRawMethodDelegateInstance<0,FIrisCoreModule,bool___cdecl(float),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FIrisCoreModule,bool___cdecl(float),FDefaultDelegateUserPolicy>
              *this,float param_1)

{
  FIrisCoreModule *pFVar1;
  FIrisCoreModule *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FIrisCoreModule,FIrisCoreModule_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// CreateCopy @ 144234790

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FDirtyNetObjectTracker,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Net::Private::FDirtyNetObjectTracker,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXI_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFDirtyNetObjectTracker_Private_Net_UE____A6AXI_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_e6480c10 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 144234820

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FDirtyNetObjectTracker,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Net::Private::FDirtyNetObjectTracker,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXI_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFDirtyNetObjectTracker_Private_Net_UE____A6AXI_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_e6480c10 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 144234870

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FDirtyNetObjectTracker,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Net::Private::FDirtyNetObjectTracker,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXI_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFDirtyNetObjectTracker_Private_Net_UE____A6AXI_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_e6480c10 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 144234920

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FDirtyNetObjectTracker,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Net::Private::FDirtyNetObjectTracker,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFDirtyNetObjectTracker_Private_Net_UE____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_b8a34524 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1442349b0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FDirtyNetObjectTracker,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Net::Private::FDirtyNetObjectTracker,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFDirtyNetObjectTracker_Private_Net_UE____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_b8a34524 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 144234a00

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FDirtyNetObjectTracker,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Net::Private::FDirtyNetObjectTracker,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFDirtyNetObjectTracker_Private_Net_UE____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_b8a34524 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 144238310

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FDirtyNetObjectTracker,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,UE::Net::Private::FDirtyNetObjectTracker,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
          *this,uint param_1)

{
  FDirtyNetObjectTracker *pFVar1;
  FDirtyNetObjectTracker *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::Net::Private::FDirtyNetObjectTracker,UE::Net::Private::FDirtyNetObjectTracker_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// Execute @ 144238360

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FDirtyNetObjectTracker,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,UE::Net::Private::FDirtyNetObjectTracker,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  FDirtyNetObjectTracker *pFVar1;
  FDirtyNetObjectTracker *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::Net::Private::FDirtyNetObjectTracker,UE::Net::Private::FDirtyNetObjectTracker_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return;
}

// ExecuteIfSafe @ 1442383a0

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FDirtyNetObjectTracker,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,UE::Net::Private::FDirtyNetObjectTracker,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
                *this,uint param_1)

{
  FDirtyNetObjectTracker *pFVar1;
  FDirtyNetObjectTracker *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::Net::Private::FDirtyNetObjectTracker,UE::Net::Private::FDirtyNetObjectTracker_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 1442383f0

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FDirtyNetObjectTracker,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,UE::Net::Private::FDirtyNetObjectTracker,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  FDirtyNetObjectTracker *pFVar1;
  FDirtyNetObjectTracker *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::Net::Private::FDirtyNetObjectTracker,UE::Net::Private::FDirtyNetObjectTracker_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14423b480

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FDirtyNetObjectTracker,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Net::Private::FDirtyNetObjectTracker,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 14423b490

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FDirtyNetObjectTracker,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Net::Private::FDirtyNetObjectTracker,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 14423d0c0

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FDirtyNetObjectTracker,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Net::Private::FDirtyNetObjectTracker,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 14423d0d0

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FDirtyNetObjectTracker,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Net::Private::FDirtyNetObjectTracker,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 14423f7b0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FDirtyNetObjectTracker,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,UE::Net::Private::FDirtyNetObjectTracker,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14423f7c0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FDirtyNetObjectTracker,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,UE::Net::Private::FDirtyNetObjectTracker,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14423f940

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FDirtyNetObjectTracker,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,UE::Net::Private::FDirtyNetObjectTracker,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 14423f950

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FDirtyNetObjectTracker,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,UE::Net::Private::FDirtyNetObjectTracker,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 144244090

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FDirtyNetObjectTracker,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,UE::Net::Private::FDirtyNetObjectTracker,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 1442440a0

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FDirtyNetObjectTracker,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,UE::Net::Private::FDirtyNetObjectTracker,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 144254e30

FName __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FDirtyNetObjectTracker,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,UE::Net::Private::FDirtyNetObjectTracker,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 144254e40

FName __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FDirtyNetObjectTracker,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,UE::Net::Private::FDirtyNetObjectTracker,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 1442fd9f0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationSystemImpl,void___cdecl(TArrayView<unsigned_int_const_,int>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationSystemImpl,void___cdecl(TArrayView<unsigned_int_const_,int>_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArrayView___CBIH___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFReplicationSystemImpl_Private_Net_UE____A6AXAEBV__TArrayView___CBIH___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_b6f2ba6a *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1442fda80

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationSystemImpl,void___cdecl(TArrayView<unsigned_int_const_,int>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationSystemImpl,void___cdecl(TArrayView<unsigned_int_const_,int>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArrayView___CBIH___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFReplicationSystemImpl_Private_Net_UE____A6AXAEBV__TArrayView___CBIH___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_b6f2ba6a *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1442fdad0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationSystemImpl,void___cdecl(TArrayView<unsigned_int_const_,int>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationSystemImpl,void___cdecl(TArrayView<unsigned_int_const_,int>_const_&),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArrayView___CBIH___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFReplicationSystemImpl_Private_Net_UE____A6AXAEBV__TArrayView___CBIH___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_b6f2ba6a *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1442fdb80

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationSystemImpl,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationSystemImpl,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXI_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFReplicationSystemImpl_Private_Net_UE____A6AXI_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_1bd65603 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1442fdc10

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationSystemImpl,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationSystemImpl,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXI_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFReplicationSystemImpl_Private_Net_UE____A6AXI_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_1bd65603 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1442fdc60

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationSystemImpl,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationSystemImpl,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXI_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFReplicationSystemImpl_Private_Net_UE____A6AXI_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_1bd65603 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1442fdd10

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationWriter,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationWriter,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXI_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFReplicationWriter_Private_Net_UE____A6AXI_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_8a57c27f *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1442fdda0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationWriter,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationWriter,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXI_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFReplicationWriter_Private_Net_UE____A6AXI_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_8a57c27f *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 1442fddf0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationWriter,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationWriter,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXI_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFReplicationWriter_Private_Net_UE____A6AXI_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_8a57c27f *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 144301e70

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationSystemImpl,void___cdecl(TArrayView<unsigned_int_const_,int>_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationSystemImpl,void___cdecl(TArrayView<unsigned_int_const_,int>_const_&),FDefaultDelegateUserPolicy>
          *this,TArrayView<unsigned_int_const_,int> *param_1)

{
  FReplicationSystemImpl *pFVar1;
  FReplicationSystemImpl *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::Net::Private::FReplicationSystemImpl,UE::Net::Private::FReplicationSystemImpl_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// Execute @ 144301ec0

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationSystemImpl,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationSystemImpl,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
          *this,uint param_1)

{
  FReplicationSystemImpl *pFVar1;
  FReplicationSystemImpl *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::Net::Private::FReplicationSystemImpl,UE::Net::Private::FReplicationSystemImpl_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// Execute @ 144301f10

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationWriter,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationWriter,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
          *this,uint param_1)

{
  FReplicationWriter *pFVar1;
  FReplicationWriter *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::Net::Private::FReplicationWriter,UE::Net::Private::FReplicationWriter_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return;
}

// ExecuteIfSafe @ 144301fa0

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationSystemImpl,void___cdecl(TArrayView<unsigned_int_const_,int>_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationSystemImpl,void___cdecl(TArrayView<unsigned_int_const_,int>_const_&),FDefaultDelegateUserPolicy>
                *this,TArrayView<unsigned_int_const_,int> *param_1)

{
  FReplicationSystemImpl *pFVar1;
  FReplicationSystemImpl *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::Net::Private::FReplicationSystemImpl,UE::Net::Private::FReplicationSystemImpl_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 144301ff0

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationSystemImpl,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationSystemImpl,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
                *this,uint param_1)

{
  FReplicationSystemImpl *pFVar1;
  FReplicationSystemImpl *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::Net::Private::FReplicationSystemImpl,UE::Net::Private::FReplicationSystemImpl_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 144302040

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationWriter,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationWriter,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
                *this,uint param_1)

{
  FReplicationWriter *pFVar1;
  FReplicationWriter *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::Net::Private::FReplicationWriter,UE::Net::Private::FReplicationWriter_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 1443030d0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationSystemImpl,void___cdecl(TArrayView<unsigned_int_const_,int>_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationSystemImpl,void___cdecl(TArrayView<unsigned_int_const_,int>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 1443030e0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationSystemImpl,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationSystemImpl,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 1443030f0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationWriter,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationWriter,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 144303c20

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationSystemImpl,void___cdecl(TArrayView<unsigned_int_const_,int>_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationSystemImpl,void___cdecl(TArrayView<unsigned_int_const_,int>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 144303c30

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationSystemImpl,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationSystemImpl,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 144303c40

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationWriter,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationWriter,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 144304b00

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationSystemImpl,void___cdecl(TArrayView<unsigned_int_const_,int>_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationSystemImpl,void___cdecl(TArrayView<unsigned_int_const_,int>_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 144304b10

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationSystemImpl,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationSystemImpl,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 144304b20

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationWriter,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationWriter,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 144306530

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationSystemImpl,void___cdecl(TArrayView<unsigned_int_const_,int>_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationSystemImpl,void___cdecl(TArrayView<unsigned_int_const_,int>_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 144306540

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationSystemImpl,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationSystemImpl,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 144306550

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationWriter,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationWriter,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 144308ca0

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationSystemImpl,void___cdecl(TArrayView<unsigned_int_const_,int>_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationSystemImpl,void___cdecl(TArrayView<unsigned_int_const_,int>_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 144308cb0

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationSystemImpl,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationSystemImpl,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 144308cc0

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationWriter,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationWriter,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 144316210

FName __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationSystemImpl,void___cdecl(TArrayView<unsigned_int_const_,int>_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationSystemImpl,void___cdecl(TArrayView<unsigned_int_const_,int>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 144316220

FName __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationSystemImpl,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationSystemImpl,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 144316230

FName __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationWriter,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,UE::Net::Private::FReplicationWriter,void___cdecl(unsigned_int),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 144329380

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::FNetSerializerRegistryDelegates,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Net::FNetSerializerRegistryDelegates,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFNetSerializerRegistryDelegates_Net_UE____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_515b9d87 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 144329410

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::FNetSerializerRegistryDelegates,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Net::FNetSerializerRegistryDelegates,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFNetSerializerRegistryDelegates_Net_UE____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_515b9d87 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 144329460

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::FNetSerializerRegistryDelegates,void___cdecl(void),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,UE::Net::FNetSerializerRegistryDelegates,void___cdecl(void),FDefaultDelegateUserPolicy>
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
              ___7__TBaseRawMethodDelegateInstance__0A_VFNetSerializerRegistryDelegates_Net_UE____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_515b9d87 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14432f850

void __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::FNetSerializerRegistryDelegates,void___cdecl(void),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,UE::Net::FNetSerializerRegistryDelegates,void___cdecl(void),FDefaultDelegateUserPolicy>
          *this)

{
  FNetSerializerRegistryDelegates *pFVar1;
  FNetSerializerRegistryDelegates *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::Net::FNetSerializerRegistryDelegates,UE::Net::FNetSerializerRegistryDelegates_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return;
}

// ExecuteIfSafe @ 14432f890

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::FNetSerializerRegistryDelegates,void___cdecl(void),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,UE::Net::FNetSerializerRegistryDelegates,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  FNetSerializerRegistryDelegates *pFVar1;
  FNetSerializerRegistryDelegates *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<UE::Net::FNetSerializerRegistryDelegates,UE::Net::FNetSerializerRegistryDelegates_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 144330180

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::FNetSerializerRegistryDelegates,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Net::FNetSerializerRegistryDelegates,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 144330710

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::FNetSerializerRegistryDelegates,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,UE::Net::FNetSerializerRegistryDelegates,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 1443312e0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::FNetSerializerRegistryDelegates,void___cdecl(void),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,UE::Net::FNetSerializerRegistryDelegates,void___cdecl(void),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 144331960

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::FNetSerializerRegistryDelegates,void___cdecl(void),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,UE::Net::FNetSerializerRegistryDelegates,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 144334910

bool __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::FNetSerializerRegistryDelegates,void___cdecl(void),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,UE::Net::FNetSerializerRegistryDelegates,void___cdecl(void),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14433ef70

FName __thiscall
TBaseRawMethodDelegateInstance<0,UE::Net::FNetSerializerRegistryDelegates,void___cdecl(void),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,UE::Net::FNetSerializerRegistryDelegates,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

