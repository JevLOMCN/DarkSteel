// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 11

// CreateCopy @ 14375c000

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_EChaosVDFullCaptureFlags),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXW4EChaosVDFullCaptureFlags___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXW4EChaosVDFullCaptureFlags___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14375c080

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_EChaosVDFullCaptureFlags),FDefaultDelegateUserPolicy>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EChaosVDFullCaptureFlags___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXW4EChaosVDFullCaptureFlags___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14375c0d0

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_EChaosVDFullCaptureFlags),FDefaultDelegateUserPolicy>
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
              ___7__TCommonDelegateInstanceState___A6AXW4EChaosVDFullCaptureFlags___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXW4EChaosVDFullCaptureFlags___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14376f490

void __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_EChaosVDFullCaptureFlags),FDefaultDelegateUserPolicy>
::Execute(void *this,EChaosVDFullCaptureFlags param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014376f496. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)this + 0x18))(param_1);
  return;
}

// ExecuteIfSafe @ 14376f4f0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_EChaosVDFullCaptureFlags),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(void *this,EChaosVDFullCaptureFlags param_1)

{
  (**(code **)((longlong)this + 0x18))(param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14378f290

ulong64 __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_EChaosVDFullCaptureFlags),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return *(ulong64 *)((longlong)this + 0x18);
}

// GetObjectForTimerManager @ 143791dc0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_EChaosVDFullCaptureFlags),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 143793680

UObject * __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_EChaosVDFullCaptureFlags),FDefaultDelegateUserPolicy>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 1437948e0

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_EChaosVDFullCaptureFlags),FDefaultDelegateUserPolicy>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 143798390

bool __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_EChaosVDFullCaptureFlags),FDefaultDelegateUserPolicy>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 1437b7500

FName __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_EChaosVDFullCaptureFlags),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

