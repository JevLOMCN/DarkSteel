// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaAssets
// Functions: 11

// CreateCopy @ 146c252b0

void __thiscall
TBaseRawMethodDelegateInstance<0,FLatentOpenMediaSourceAction,void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXW4EMediaEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLatentOpenMediaSourceAction____A6AXW4EMediaEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146c25340

void __thiscall
TBaseRawMethodDelegateInstance<0,FLatentOpenMediaSourceAction,void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EMediaEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLatentOpenMediaSourceAction____A6AXW4EMediaEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar1[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  return;
}

// CreateCopy @ 146c25390

void __thiscall
TBaseRawMethodDelegateInstance<0,FLatentOpenMediaSourceAction,void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXW4EMediaEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFLatentOpenMediaSourceAction____A6AXW4EMediaEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
    puVar3[4] = *(undefined8 *)((longlong)this + 0x20);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 146c27400

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
TBaseRawMethodDelegateInstance<0,FLatentOpenMediaSourceAction,void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>
::Execute(void *this,EMediaEvent param_1)

{
  FLatentOpenMediaSourceAction *pFVar1;
  FLatentOpenMediaSourceAction *local_res8;
  
  local_res8 = *(FLatentOpenMediaSourceAction **)((longlong)this + 0x18);
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FLatentOpenMediaSourceAction,FLatentOpenMediaSourceAction_*_&>
                     (&local_res8);
  (**(code **)((longlong)this + 0x20))(pFVar1,param_1);
  return;
}

// ExecuteIfSafe @ 146c274a0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall
TBaseRawMethodDelegateInstance<0,FLatentOpenMediaSourceAction,void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,EMediaEvent param_1)

{
  FLatentOpenMediaSourceAction *pFVar1;
  FLatentOpenMediaSourceAction *local_res8;
  
  local_res8 = *(FLatentOpenMediaSourceAction **)((longlong)this + 0x18);
  pFVar1 = UE::Core::Private::
           DereferenceIfNecessary<FLatentOpenMediaSourceAction,FLatentOpenMediaSourceAction_*_&>
                     (&local_res8);
  (**(code **)((longlong)this + 0x20))(pFVar1,param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 146c281e0

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FLatentOpenMediaSourceAction,void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x20);
}

// GetObjectForTimerManager @ 146c2b3c0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FLatentOpenMediaSourceAction,void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  return *(void **)((longlong)this + 0x18);
}

// GetUObject @ 146c2dfa0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FLatentOpenMediaSourceAction,void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 146c2ef80

bool __thiscall
TBaseRawMethodDelegateInstance<0,FLatentOpenMediaSourceAction,void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  return *(void **)((longlong)this + 0x18) == param_1;
}

// IsSafeToExecute @ 146c2f720

bool __thiscall
TBaseRawMethodDelegateInstance<0,FLatentOpenMediaSourceAction,void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 146c38e30

FName __thiscall
TBaseRawMethodDelegateInstance<0,FLatentOpenMediaSourceAction,void___cdecl(enum_EMediaEvent),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

