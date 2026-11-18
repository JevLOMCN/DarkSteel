// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdpcmAudioDecoder
// Functions: 11

// TryGetBoundFunctionName @ 146bcb5a0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FAdpcmAudioDecoderModule::StartupModule'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetUObject @ 146bcb5b0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FAdpcmAudioDecoderModule::StartupModule'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetObjectForTimerManager @ 146bcb5c0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FAdpcmAudioDecoderModule::StartupModule'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetBoundProgramCounterForTimerManager @ 146bcb5d0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FAdpcmAudioDecoderModule::StartupModule'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// HasSameObject @ 146bcb5e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FAdpcmAudioDecoderModule::StartupModule'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 146bcb5f0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FAdpcmAudioDecoderModule::StartupModule'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// CreateCopy @ 146bcb600

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FAdpcmAudioDecoderModule::StartupModule'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__StartupModule_FAdpcmAudioDecoderModule__UEAAXXZ___V__6B_
    ;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 146bcb6a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FAdpcmAudioDecoderModule::StartupModule'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__StartupModule_FAdpcmAudioDecoderModule__UEAAXXZ___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 146bcb720

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FAdpcmAudioDecoderModule::StartupModule'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__StartupModule_FAdpcmAudioDecoderModule__UEAAXXZ___V__6B_
    ;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// Execute @ 146bcb770

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FAdpcmAudioDecoderModule::StartupModule'::__l2::<lambda_1>_>
::Execute(void *this,IConsoleVariable *param_1)

{
  FAdpcmAudioDecoderModule *this_00;
  bool bVar1;
  
  this_00 = *(FAdpcmAudioDecoderModule **)((longlong)this + 0x18);
  bVar1 = (bool)(**(code **)(*(longlong *)param_1 + 0xc0))(param_1);
  FAdpcmAudioDecoderModule::Register(this_00,bVar1);
  return;
}

// ExecuteIfSafe @ 146bcb7a0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,`FAdpcmAudioDecoderModule::StartupModule'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,IConsoleVariable *param_1)

{
  FAdpcmAudioDecoderModule *this_00;
  bool bVar1;
  
  this_00 = *(FAdpcmAudioDecoderModule **)((longlong)this + 0x18);
  bVar1 = (bool)(**(code **)(*(longlong *)param_1 + 0xc0))(param_1);
  FAdpcmAudioDecoderModule::Register(this_00,bVar1);
  return true;
}

