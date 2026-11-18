// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetaHumanSDKRuntime
// Functions: 11

// CreateCopy @ 14df8ce00

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UMetaHumanComponentBase::LoadAndRunAnimBP'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  void *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  this_00 = UE::Core::Private::DelegateAllocate(0x58,(FDelegateAllocation *)local_10);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,_UMetaHumanComponentBase::LoadAndRunAnimBP_::__l2::<lambda_1>_>
              (this_00,this);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14df8ce70

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UMetaHumanComponentBase::LoadAndRunAnimBP'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  void *this_00;
  
  this_00 = UE::Core::Private::DelegateAllocate(0x58,(FDelegateAllocation *)param_1);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,_UMetaHumanComponentBase::LoadAndRunAnimBP_::__l2::<lambda_1>_>
              (this_00,this);
    return;
  }
  return;
}

// CreateCopy @ 14df8ceb0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UMetaHumanComponentBase::LoadAndRunAnimBP'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *this_00;
  
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
  this_00 = UE::Core::Private::DelegateAllocate(0x58,(FDelegateAllocation *)&param_1->field_0x28);
  if (this_00 != (void *)0x0) {
    TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,_UMetaHumanComponentBase::LoadAndRunAnimBP_::__l2::<lambda_1>_>
              (this_00,this);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14df8cf90

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UMetaHumanComponentBase::LoadAndRunAnimBP'::__l2::<lambda_1>_>
::Execute(void *this)

{
  `UMetaHumanComponentBase::LoadAndRunAnimBP'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18));
  return;
}

// ExecuteIfSafe @ 14df8cfa0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UMetaHumanComponentBase::LoadAndRunAnimBP'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this)

{
  `UMetaHumanComponentBase::LoadAndRunAnimBP'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18));
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14df8d040

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UMetaHumanComponentBase::LoadAndRunAnimBP'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14df8d050

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UMetaHumanComponentBase::LoadAndRunAnimBP'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 14df8d4d0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UMetaHumanComponentBase::LoadAndRunAnimBP'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14df8d4e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UMetaHumanComponentBase::LoadAndRunAnimBP'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14df8d520

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UMetaHumanComponentBase::LoadAndRunAnimBP'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14df8e680

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UMetaHumanComponentBase::LoadAndRunAnimBP'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

