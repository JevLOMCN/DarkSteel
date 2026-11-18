// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 77

// CreateCopy @ 14d4b8330

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(double),FDefaultDelegateUserPolicy,`FStateTreeDebugger::FStateTreeDebugger'::__l2::<lambda_3>_>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXN_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(double),FDefaultDelegateUserPolicy,`FStateTreeDebugger::FStateTreeDebugger'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d4b83b0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(double),FDefaultDelegateUserPolicy,`FStateTreeDebugger::FStateTreeDebugger'::__l2::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXN_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(double),FDefaultDelegateUserPolicy,`FStateTreeDebugger::FStateTreeDebugger'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d4b8400

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(double),FDefaultDelegateUserPolicy,`FStateTreeDebugger::FStateTreeDebugger'::__l2::<lambda_3>_>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXN_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(double),FDefaultDelegateUserPolicy,`FStateTreeDebugger::FStateTreeDebugger'::`2'::<lambda_3>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d4b84a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy,`UE::StateTreeTrace::RegisterGlobalDelegates'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld__W4ELevelTick__M_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy,`UE::StateTreeTrace::RegisterGlobalDelegates'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d4b8520

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy,`UE::StateTreeTrace::RegisterGlobalDelegates'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld__W4ELevelTick__M_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy,`UE::StateTreeTrace::RegisterGlobalDelegates'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 14d4b8560

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy,`UE::StateTreeTrace::RegisterGlobalDelegates'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld__W4ELevelTick__M_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy,`UE::StateTreeTrace::RegisterGlobalDelegates'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d4b8600

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EStateTreeTraceAnalysisStatus),FDefaultDelegateUserPolicy,`FStateTreeDebugger::FStateTreeDebugger'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6AXW4EStateTreeTraceAnalysisStatus___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EStateTreeTraceAnalysisStatus),FDefaultDelegateUserPolicy,`FStateTreeDebugger::FStateTreeDebugger'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d4b8680

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EStateTreeTraceAnalysisStatus),FDefaultDelegateUserPolicy,`FStateTreeDebugger::FStateTreeDebugger'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EStateTreeTraceAnalysisStatus___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EStateTreeTraceAnalysisStatus),FDefaultDelegateUserPolicy,`FStateTreeDebugger::FStateTreeDebugger'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d4b86d0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EStateTreeTraceAnalysisStatus),FDefaultDelegateUserPolicy,`FStateTreeDebugger::FStateTreeDebugger'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6AXW4EStateTreeTraceAnalysisStatus___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EStateTreeTraceAnalysisStatus),FDefaultDelegateUserPolicy,`FStateTreeDebugger::FStateTreeDebugger'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d4b8770

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EStateTreeTraceStatus),FDefaultDelegateUserPolicy,`FStateTreeDebugger::FStateTreeDebugger'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXW4EStateTreeTraceStatus___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EStateTreeTraceStatus),FDefaultDelegateUserPolicy,`FStateTreeDebugger::FStateTreeDebugger'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d4b87f0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EStateTreeTraceStatus),FDefaultDelegateUserPolicy,`FStateTreeDebugger::FStateTreeDebugger'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EStateTreeTraceStatus___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EStateTreeTraceStatus),FDefaultDelegateUserPolicy,`FStateTreeDebugger::FStateTreeDebugger'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  return;
}

// CreateCopy @ 14d4b8840

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EStateTreeTraceStatus),FDefaultDelegateUserPolicy,`FStateTreeDebugger::FStateTreeDebugger'::__l2::<lambda_1>_>
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
              ___7__TCommonDelegateInstanceState___A6AXW4EStateTreeTraceStatus___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EStateTreeTraceStatus),FDefaultDelegateUserPolicy,`FStateTreeDebugger::FStateTreeDebugger'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *(undefined8 *)((longlong)this + 0x18);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d4b88e0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EStateTreeTraceStatus),FDefaultDelegateUserPolicy,`UE::StateTreeTrace::RegisterGlobalDelegates'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6AXW4EStateTreeTraceStatus___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EStateTreeTraceStatus),FDefaultDelegateUserPolicy,`UE::StateTreeTrace::RegisterGlobalDelegates'::`2'::<lambda_2>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d4b8960

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EStateTreeTraceStatus),FDefaultDelegateUserPolicy,`UE::StateTreeTrace::RegisterGlobalDelegates'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EStateTreeTraceStatus___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EStateTreeTraceStatus),FDefaultDelegateUserPolicy,`UE::StateTreeTrace::RegisterGlobalDelegates'::`2'::<lambda_2>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 14d4b89a0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EStateTreeTraceStatus),FDefaultDelegateUserPolicy,`UE::StateTreeTrace::RegisterGlobalDelegates'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6AXW4EStateTreeTraceStatus___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EStateTreeTraceStatus),FDefaultDelegateUserPolicy,`UE::StateTreeTrace::RegisterGlobalDelegates'::`2'::<lambda_2>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14d4bbe00

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(double),FDefaultDelegateUserPolicy,`FStateTreeDebugger::FStateTreeDebugger'::__l2::<lambda_3>_>
::Execute(void *this,double param_1)

{
  FStateTreeDebugger::SetScrubTime(*(FStateTreeDebugger **)((longlong)this + 0x18),param_1);
  return;
}

// Execute @ 14d4bbe10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy,`UE::StateTreeTrace::RegisterGlobalDelegates'::__l2::<lambda_1>_>
::Execute(void *this,UWorld *param_1,ELevelTick param_2,float param_3)

{
  code *pcVar1;
  bool bVar2;
  double dVar3;
  
  dVar3 = FObjectTrace::GetWorldElapsedTime(param_1);
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\Debugger\\StateTreeTrace.cpp"
                       ,0x1f7,
                       L"Expecting to only be called by the world delegate on the main thread before worker threads trace events."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UE::StateTreeTrace::GBufferedEvents.RecordingWorldTime = dVar3;
  LOCK();
  UE::StateTreeTrace::GBufferedEvents.TracedRecordingWorldTime = (atomic<double>)0xbff0000000000000;
  UNLOCK();
  return;
}

// Execute @ 14d4bbe80

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EStateTreeTraceAnalysisStatus),FDefaultDelegateUserPolicy,`FStateTreeDebugger::FStateTreeDebugger'::__l2::<lambda_2>_>
::Execute(void *this,EStateTreeTraceAnalysisStatus param_1)

{
  if ((byte)(param_1 - Stopped) < 2) {
    FStateTreeDebugger::StopSessionAnalysis(*(FStateTreeDebugger **)((longlong)this + 0x18));
    return;
  }
  return;
}

// Execute @ 14d4bbea0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EStateTreeTraceStatus),FDefaultDelegateUserPolicy,`FStateTreeDebugger::FStateTreeDebugger'::__l2::<lambda_1>_>
::Execute(void *this,EStateTreeTraceStatus param_1)

{
  FTraceDescriptor *pFVar1;
  FStateTreeDebugger *this_00;
  FScriptContainerElement *pFVar2;
  FInstanceEventCollection *pFVar3;
  void *pvStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  FSessionInfo FStack_90;
  
  if ((param_1 == TracesStarted) &&
     (this_00 = *(FStateTreeDebugger **)((longlong)this + 0x18),
     this_00->bSessionAnalysisActive == false)) {
    uStack_98 = 0xffffffff;
    pvStack_a8 = (void *)0x0;
    uStack_94 = 0;
    pFVar1 = &this_00->ActiveSessionTraceDescriptor;
    FStack_90.Changelist = 0;
    FStack_90.ConfigurationType = Unknown;
    FStack_90.TargetType = Unknown;
    FStack_90._118_2_ = 0;
    uStack_a0 = 0;
    FStack_90.Platform.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_90.Platform.Data.ArrayNum = 0;
    FStack_90.Platform.Data.ArrayMax = 0;
    FStack_90.AppName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_90.AppName.Data.ArrayNum = 0;
    FStack_90.AppName.Data.ArrayMax = 0;
    FStack_90.ProjectName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_90.ProjectName.Data.ArrayNum = 0;
    FStack_90.ProjectName.Data.ArrayMax = 0;
    FStack_90.CommandLine.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_90.CommandLine.Data.ArrayNum = 0;
    FStack_90.CommandLine.Data.ArrayMax = 0;
    FStack_90.Branch.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_90.Branch.Data.ArrayNum = 0;
    FStack_90.Branch.Data.ArrayMax = 0;
    FStack_90.BuildVersion.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_90.BuildVersion.Data.ArrayNum = 0;
    FStack_90.BuildVersion.Data.ArrayMax = 0;
    FStack_90.VFSPaths.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_90.VFSPaths.Data.ArrayNum = 0;
    FStack_90.VFSPaths.Data.ArrayMax = 0;
    FStack_90.InstanceId.A = 0;
    FStack_90.InstanceId.B = 0;
    FStack_90.InstanceId.C = 0;
    FStack_90.InstanceId.D = 0;
    if (pFVar1 != (FTraceDescriptor *)&pvStack_a8) {
      pFVar2 = (pFVar1->Name).Data.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar1->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this_00->ActiveSessionTraceDescriptor).Name.Data.ArrayNum = 0;
      (this_00->ActiveSessionTraceDescriptor).Name.Data.ArrayMax = 0;
    }
    (this_00->ActiveSessionTraceDescriptor).TraceId = 0xffffffff;
    TraceServices::FSessionInfo::operator=
              (&(this_00->ActiveSessionTraceDescriptor).SessionInfo,&FStack_90);
    if (FStack_90.VFSPaths.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_90.VFSPaths.Data.AllocatorInstance.Data);
    }
    if (FStack_90.BuildVersion.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_90.BuildVersion.Data.AllocatorInstance.Data);
    }
    if (FStack_90.Branch.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_90.Branch.Data.AllocatorInstance.Data);
    }
    if (FStack_90.CommandLine.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_90.CommandLine.Data.AllocatorInstance.Data);
    }
    if (FStack_90.ProjectName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_90.ProjectName.Data.AllocatorInstance.Data);
    }
    if (FStack_90.AppName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_90.AppName.Data.AllocatorInstance.Data);
    }
    if (FStack_90.Platform.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_90.Platform.Data.AllocatorInstance.Data);
    }
    if (pvStack_a8 != (void *)0x0) {
      FMemory::Free(pvStack_a8);
    }
    if (((this_00->SelectedInstanceId).Id != 0xffffffff) ||
       ((this_00->SelectedInstanceId).SerialNumber != 0xffffffff)) {
      (this_00->SelectedInstanceId).Id = 0xffffffff;
      (this_00->SelectedInstanceId).SerialNumber = 0xffffffff;
      pFVar3 = FStateTreeDebugger::GetMutableEventCollection
                         (this_00,(FStateTreeInstanceDebugId)0xffffffffffffffff);
      FStateTreeDebugger::SetScrubStateCollection(this_00,pFVar3);
    }
    FStateTreeDebugger::StopSessionAnalysis(this_00);
    FStateTreeDebugger::TryStartNewLiveSessionAnalysis(this_00,__real_3f800000);
    return;
  }
  return;
}

// Execute @ 14d4bbec0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EStateTreeTraceStatus),FDefaultDelegateUserPolicy,`UE::StateTreeTrace::RegisterGlobalDelegates'::__l2::<lambda_2>_>
::Execute(void *this,EStateTreeTraceStatus param_1)

{
  `UE::StateTreeTrace::RegisterGlobalDelegates'::__l2::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return;
}

// ExecuteIfSafe @ 14d4bbfa0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(double),FDefaultDelegateUserPolicy,`FStateTreeDebugger::FStateTreeDebugger'::__l2::<lambda_3>_>
::ExecuteIfSafe(void *this,double param_1)

{
  FStateTreeDebugger::SetScrubTime(*(FStateTreeDebugger **)((longlong)this + 0x18),param_1);
  return true;
}

// ExecuteIfSafe @ 14d4bbfc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy,`UE::StateTreeTrace::RegisterGlobalDelegates'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,UWorld *param_1,ELevelTick param_2,float param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  double dVar4;
  
  dVar4 = FObjectTrace::GetWorldElapsedTime(param_1);
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\Debugger\\StateTreeTrace.cpp"
                       ,0x1f7,
                       L"Expecting to only be called by the world delegate on the main thread before worker threads trace events."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  UE::StateTreeTrace::GBufferedEvents.RecordingWorldTime = dVar4;
  LOCK();
  UE::StateTreeTrace::GBufferedEvents.TracedRecordingWorldTime = (atomic<double>)0xbff0000000000000;
  UNLOCK();
  return true;
}

// ExecuteIfSafe @ 14d4bc030

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EStateTreeTraceAnalysisStatus),FDefaultDelegateUserPolicy,`FStateTreeDebugger::FStateTreeDebugger'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this,EStateTreeTraceAnalysisStatus param_1)

{
  if ((byte)(param_1 - Stopped) < 2) {
    FStateTreeDebugger::StopSessionAnalysis(*(FStateTreeDebugger **)((longlong)this + 0x18));
  }
  return true;
}

// ExecuteIfSafe @ 14d4bc060

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EStateTreeTraceStatus),FDefaultDelegateUserPolicy,`FStateTreeDebugger::FStateTreeDebugger'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,EStateTreeTraceStatus param_1)

{
  if ((param_1 == TracesStarted) &&
     ((*(FStateTreeDebugger **)((longlong)this + 0x18))->bSessionAnalysisActive == false)) {
    FStateTreeDebugger::RequestAnalysisOfLatestTrace
              (*(FStateTreeDebugger **)((longlong)this + 0x18));
  }
  return true;
}

// ExecuteIfSafe @ 14d4bc090

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EStateTreeTraceStatus),FDefaultDelegateUserPolicy,`UE::StateTreeTrace::RegisterGlobalDelegates'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this,EStateTreeTraceStatus param_1)

{
  `UE::StateTreeTrace::RegisterGlobalDelegates'::__l2::<lambda_2>::operator()
            ((void *)((longlong)this + 0x18),param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14d4bd570

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(double),FDefaultDelegateUserPolicy,`FStateTreeDebugger::FStateTreeDebugger'::__l2::<lambda_3>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d4bd580

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy,`UE::StateTreeTrace::RegisterGlobalDelegates'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d4bd590

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EStateTreeTraceAnalysisStatus),FDefaultDelegateUserPolicy,`FStateTreeDebugger::FStateTreeDebugger'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d4bd5a0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EStateTreeTraceStatus),FDefaultDelegateUserPolicy,`FStateTreeDebugger::FStateTreeDebugger'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d4bd5b0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EStateTreeTraceStatus),FDefaultDelegateUserPolicy,`UE::StateTreeTrace::RegisterGlobalDelegates'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14d4bea80

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(double),FDefaultDelegateUserPolicy,`FStateTreeDebugger::FStateTreeDebugger'::__l2::<lambda_3>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d4bea90

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy,`UE::StateTreeTrace::RegisterGlobalDelegates'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d4beaa0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EStateTreeTraceAnalysisStatus),FDefaultDelegateUserPolicy,`FStateTreeDebugger::FStateTreeDebugger'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d4beab0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EStateTreeTraceStatus),FDefaultDelegateUserPolicy,`FStateTreeDebugger::FStateTreeDebugger'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d4beac0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EStateTreeTraceStatus),FDefaultDelegateUserPolicy,`UE::StateTreeTrace::RegisterGlobalDelegates'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 14d4c07a0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(double),FDefaultDelegateUserPolicy,`FStateTreeDebugger::FStateTreeDebugger'::__l2::<lambda_3>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d4c07b0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy,`UE::StateTreeTrace::RegisterGlobalDelegates'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d4c07c0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EStateTreeTraceAnalysisStatus),FDefaultDelegateUserPolicy,`FStateTreeDebugger::FStateTreeDebugger'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d4c07d0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EStateTreeTraceStatus),FDefaultDelegateUserPolicy,`FStateTreeDebugger::FStateTreeDebugger'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d4c07e0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EStateTreeTraceStatus),FDefaultDelegateUserPolicy,`UE::StateTreeTrace::RegisterGlobalDelegates'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14d4c25a0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(double),FDefaultDelegateUserPolicy,`FStateTreeDebugger::FStateTreeDebugger'::__l2::<lambda_3>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d4c25b0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy,`UE::StateTreeTrace::RegisterGlobalDelegates'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d4c25c0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EStateTreeTraceAnalysisStatus),FDefaultDelegateUserPolicy,`FStateTreeDebugger::FStateTreeDebugger'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d4c25d0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EStateTreeTraceStatus),FDefaultDelegateUserPolicy,`FStateTreeDebugger::FStateTreeDebugger'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d4c25e0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EStateTreeTraceStatus),FDefaultDelegateUserPolicy,`UE::StateTreeTrace::RegisterGlobalDelegates'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14d4c4020

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(double),FDefaultDelegateUserPolicy,`FStateTreeDebugger::FStateTreeDebugger'::__l2::<lambda_3>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d4c4030

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy,`UE::StateTreeTrace::RegisterGlobalDelegates'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d4c4040

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EStateTreeTraceAnalysisStatus),FDefaultDelegateUserPolicy,`FStateTreeDebugger::FStateTreeDebugger'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d4c4050

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EStateTreeTraceStatus),FDefaultDelegateUserPolicy,`FStateTreeDebugger::FStateTreeDebugger'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d4c4060

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EStateTreeTraceStatus),FDefaultDelegateUserPolicy,`UE::StateTreeTrace::RegisterGlobalDelegates'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14d4d2e20

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(double),FDefaultDelegateUserPolicy,`FStateTreeDebugger::FStateTreeDebugger'::__l2::<lambda_3>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d4d2e30

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy,`UE::StateTreeTrace::RegisterGlobalDelegates'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d4d2e40

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EStateTreeTraceAnalysisStatus),FDefaultDelegateUserPolicy,`FStateTreeDebugger::FStateTreeDebugger'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d4d2e50

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EStateTreeTraceStatus),FDefaultDelegateUserPolicy,`FStateTreeDebugger::FStateTreeDebugger'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d4d2e60

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(enum_EStateTreeTraceStatus),FDefaultDelegateUserPolicy,`UE::StateTreeTrace::RegisterGlobalDelegates'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CreateCopy @ 14d52de20

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FStateTreeModule::FStateTreeModule'::__l1::<lambda_24_>_>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FStateTreeModule::FStateTreeModule'::`1'::<lambda_24_>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d52dea0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FStateTreeModule::FStateTreeModule'::__l1::<lambda_24_>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FStateTreeModule::FStateTreeModule'::`1'::<lambda_24_>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 14d52dee0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FStateTreeModule::FStateTreeModule'::__l1::<lambda_24_>_>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FStateTreeModule::FStateTreeModule'::`1'::<lambda_24_>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 14d52df80

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FStateTreeModule::FStateTreeModule'::__l1::<lambda_25_>_>
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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FStateTreeModule::FStateTreeModule'::`1'::<lambda_25_>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14d52e000

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FStateTreeModule::FStateTreeModule'::__l1::<lambda_25_>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FStateTreeModule::FStateTreeModule'::`1'::<lambda_25_>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 14d52e040

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FStateTreeModule::FStateTreeModule'::__l1::<lambda_25_>_>
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
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FStateTreeModule::FStateTreeModule'::`1'::<lambda_25_>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14d52f3c0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FStateTreeModule::FStateTreeModule'::__l1::<lambda_24_>_>
::Execute(void *this)

{
  FName FVar1;
  FName *pFVar2;
  FModuleManager *this_00;
  IModuleInterface *pIVar3;
  ulonglong local_res8;
  FName local_res10 [3];
  
  local_res8 = (ulonglong)this & 0xffffffff00000000;
  pFVar2 = ::FName::FName(local_res10,"StateTreeModule");
  FVar1 = *pFVar2;
  this_00 = FModuleManager::Get();
  pIVar3 = FModuleManager::LoadModuleChecked(this_00,FVar1);
  (**(code **)((longlong)*pIVar3 + 0x40))(pIVar3,&local_res8);
  return;
}

// Execute @ 14d52f420

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FStateTreeModule::FStateTreeModule'::__l1::<lambda_25_>_>
::Execute(void *this)

{
  FName FVar1;
  FName *pFVar2;
  FModuleManager *this_00;
  IModuleInterface *pIVar3;
  FName local_res8 [4];
  
  local_res8[0] = (FName)this;
  pFVar2 = ::FName::FName(local_res8,"StateTreeModule");
  FVar1 = *pFVar2;
  this_00 = FModuleManager::Get();
  pIVar3 = FModuleManager::LoadModuleChecked(this_00,FVar1);
  (**(code **)((longlong)*pIVar3 + 0x48))(pIVar3);
  return;
}

// ExecuteIfSafe @ 14d52f4b0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FStateTreeModule::FStateTreeModule'::__l1::<lambda_24_>_>
::ExecuteIfSafe(void *this)

{
  FName FVar1;
  FName *pFVar2;
  FModuleManager *this_00;
  IModuleInterface *pIVar3;
  ulonglong local_res8;
  FName local_res10 [3];
  
  local_res8 = (ulonglong)this & 0xffffffff00000000;
  pFVar2 = ::FName::FName(local_res10,"StateTreeModule");
  FVar1 = *pFVar2;
  this_00 = FModuleManager::Get();
  pIVar3 = FModuleManager::LoadModuleChecked(this_00,FVar1);
  (**(code **)((longlong)*pIVar3 + 0x40))(pIVar3,&local_res8);
  return true;
}

// ExecuteIfSafe @ 14d52f510

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FStateTreeModule::FStateTreeModule'::__l1::<lambda_25_>_>
::ExecuteIfSafe(void *this)

{
  FName FVar1;
  FName *pFVar2;
  FModuleManager *this_00;
  IModuleInterface *pIVar3;
  FName local_res8 [4];
  
  local_res8[0] = (FName)this;
  pFVar2 = ::FName::FName(local_res8,"StateTreeModule");
  FVar1 = *pFVar2;
  this_00 = FModuleManager::Get();
  pIVar3 = FModuleManager::LoadModuleChecked(this_00,FVar1);
  (**(code **)((longlong)*pIVar3 + 0x48))(pIVar3);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14d52fd90

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FStateTreeModule::FStateTreeModule'::__l1::<lambda_24_>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 14d52fda0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FStateTreeModule::FStateTreeModule'::__l1::<lambda_25_>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14d530ba0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FStateTreeModule::FStateTreeModule'::__l1::<lambda_24_>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 14d530bb0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FStateTreeModule::FStateTreeModule'::__l1::<lambda_25_>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 14d531610

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FStateTreeModule::FStateTreeModule'::__l1::<lambda_24_>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 14d531620

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FStateTreeModule::FStateTreeModule'::__l1::<lambda_25_>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14d531680

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FStateTreeModule::FStateTreeModule'::__l1::<lambda_24_>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 14d531690

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FStateTreeModule::FStateTreeModule'::__l1::<lambda_25_>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14d532070

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FStateTreeModule::FStateTreeModule'::__l1::<lambda_24_>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 14d532080

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FStateTreeModule::FStateTreeModule'::__l1::<lambda_25_>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14d5347a0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FStateTreeModule::FStateTreeModule'::__l1::<lambda_24_>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 14d5347b0

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FStateTreeModule::FStateTreeModule'::__l1::<lambda_25_>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

