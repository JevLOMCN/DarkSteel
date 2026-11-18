// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowSimulation
// Functions: 33

// CreateCopy @ 1462f4af0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_*),FDefaultDelegateUserPolicy,`UDataflowSimulationManager::OnStartup'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUActorComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_*),FDefaultDelegateUserPolicy,`UDataflowSimulationManager::OnStartup'::`2'::<lambda_2>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1462f4b70

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_*),FDefaultDelegateUserPolicy,`UDataflowSimulationManager::OnStartup'::__l2::<lambda_2>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUActorComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_*),FDefaultDelegateUserPolicy,`UDataflowSimulationManager::OnStartup'::`2'::<lambda_2>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 1462f4bb0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_*),FDefaultDelegateUserPolicy,`UDataflowSimulationManager::OnStartup'::__l2::<lambda_2>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUActorComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_*),FDefaultDelegateUserPolicy,`UDataflowSimulationManager::OnStartup'::`2'::<lambda_2>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1462f4c50

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_*),FDefaultDelegateUserPolicy,`UDataflowSimulationManager::OnStartup'::__l2::<lambda_3>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUActorComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_*),FDefaultDelegateUserPolicy,`UDataflowSimulationManager::OnStartup'::`2'::<lambda_3>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1462f4cd0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_*),FDefaultDelegateUserPolicy,`UDataflowSimulationManager::OnStartup'::__l2::<lambda_3>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUActorComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_*),FDefaultDelegateUserPolicy,`UDataflowSimulationManager::OnStartup'::`2'::<lambda_3>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 1462f4d10

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_*),FDefaultDelegateUserPolicy,`UDataflowSimulationManager::OnStartup'::__l2::<lambda_3>_>
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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUActorComponent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_*),FDefaultDelegateUserPolicy,`UDataflowSimulationManager::OnStartup'::`2'::<lambda_3>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 1462f4db0

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy,`UDataflowSimulationManager::OnStartup'::__l2::<lambda_1>_>
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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy,`UDataflowSimulationManager::OnStartup'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 1462f4e30

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy,`UDataflowSimulationManager::OnStartup'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld__W4ELevelTick__M_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy,`UDataflowSimulationManager::OnStartup'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 1462f4e70

void __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy,`UDataflowSimulationManager::OnStartup'::__l2::<lambda_1>_>
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
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy,`UDataflowSimulationManager::OnStartup'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 1462f58c0

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
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_*),FDefaultDelegateUserPolicy,`UDataflowSimulationManager::OnStartup'::__l2::<lambda_2>_>
::Execute(void *this,UActorComponent *param_1)

{
  UActorComponent *local_res10 [3];
  
  local_res10[0] = param_1;
  UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int>_>::
  ApplyAfter<_UDataflowSimulationManager::OnStartup_::__l2::<lambda_2>_&,UActorComponent_*>
            ((TTupleBase<TIntegerSequence<unsigned_int>_> *)((longlong)this + 8),
             (<lambda_2> *)((longlong)this + 0x18),local_res10);
  return;
}

// Execute @ 1462f58f0

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
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_*),FDefaultDelegateUserPolicy,`UDataflowSimulationManager::OnStartup'::__l2::<lambda_3>_>
::Execute(void *this,UActorComponent *param_1)

{
  UActorComponent *local_res10 [3];
  
  local_res10[0] = param_1;
  UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int>_>::
  ApplyAfter<_UDataflowSimulationManager::OnStartup_::__l2::<lambda_3>_&,UActorComponent_*>
            ((TTupleBase<TIntegerSequence<unsigned_int>_> *)((longlong)this + 8),
             (<lambda_3> *)((longlong)this + 0x18),local_res10);
  return;
}

// Execute @ 1462f5920

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
TBaseFunctorDelegateInstance<void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy,`UDataflowSimulationManager::OnStartup'::__l2::<lambda_1>_>
::Execute(void *this,UWorld *param_1,ELevelTick param_2,float param_3)

{
  UDataflowSimulationManager *this_00;
  bool bVar1;
  
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId229,"UDataflowSimulationManager::OnWorldPostActorTick",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Simulation\\Private\\Dataflow\\DataflowSimulationManager.cpp"
               ,0xe5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId229);
  }
  if ((((param_1 != (UWorld *)0x0) &&
       (this_00 = UWorld::GetSubsystem<UDataflowSimulationManager>(param_1),
       this_00 != (UDataflowSimulationManager *)0x0)) && (this_00->bIsSimulationEnabled != false))
     && (UE::Dataflow::Private::DataflowSimulationThreadingMode == 2)) {
    UDataflowSimulationManager::CompleteSimulationTasks(this_00);
    UDataflowSimulationManager::WriteSimulationInterfaces(this_00,param_3,false);
  }
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ExecuteIfSafe @ 1462f59e0

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
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_*),FDefaultDelegateUserPolicy,`UDataflowSimulationManager::OnStartup'::__l2::<lambda_2>_>
::ExecuteIfSafe(void *this,UActorComponent *param_1)

{
  UActorComponent *local_res10 [3];
  
  local_res10[0] = param_1;
  UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int>_>::
  ApplyAfter<_UDataflowSimulationManager::OnStartup_::__l2::<lambda_2>_&,UActorComponent_*>
            ((TTupleBase<TIntegerSequence<unsigned_int>_> *)((longlong)this + 8),
             (<lambda_2> *)((longlong)this + 0x18),local_res10);
  return true;
}

// ExecuteIfSafe @ 1462f5a10

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
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_*),FDefaultDelegateUserPolicy,`UDataflowSimulationManager::OnStartup'::__l2::<lambda_3>_>
::ExecuteIfSafe(void *this,UActorComponent *param_1)

{
  UActorComponent *local_res10 [3];
  
  local_res10[0] = param_1;
  UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int>_>::
  ApplyAfter<_UDataflowSimulationManager::OnStartup_::__l2::<lambda_3>_&,UActorComponent_*>
            ((TTupleBase<TIntegerSequence<unsigned_int>_> *)((longlong)this + 8),
             (<lambda_3> *)((longlong)this + 0x18),local_res10);
  return true;
}

// ExecuteIfSafe @ 1462f5a40

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
TBaseFunctorDelegateInstance<void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy,`UDataflowSimulationManager::OnStartup'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,UWorld *param_1,ELevelTick param_2,float param_3)

{
  UDataflowSimulationManager *this_00;
  bool bVar1;
  
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId229,"UDataflowSimulationManager::OnWorldPostActorTick",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Simulation\\Private\\Dataflow\\DataflowSimulationManager.cpp"
               ,0xe5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId229);
  }
  if ((((param_1 != (UWorld *)0x0) &&
       (this_00 = UWorld::GetSubsystem<UDataflowSimulationManager>(param_1),
       this_00 != (UDataflowSimulationManager *)0x0)) && (this_00->bIsSimulationEnabled != false))
     && (UE::Dataflow::Private::DataflowSimulationThreadingMode == 2)) {
    UDataflowSimulationManager::CompleteSimulationTasks(this_00);
    UDataflowSimulationManager::WriteSimulationInterfaces(this_00,param_3,false);
  }
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// GetBoundProgramCounterForTimerManager @ 1462f6480

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_*),FDefaultDelegateUserPolicy,`UDataflowSimulationManager::OnStartup'::__l2::<lambda_2>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 1462f6490

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_*),FDefaultDelegateUserPolicy,`UDataflowSimulationManager::OnStartup'::__l2::<lambda_3>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetBoundProgramCounterForTimerManager @ 1462f64a0

ulong64 __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy,`UDataflowSimulationManager::OnStartup'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 1462f67e0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_*),FDefaultDelegateUserPolicy,`UDataflowSimulationManager::OnStartup'::__l2::<lambda_2>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1462f67f0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_*),FDefaultDelegateUserPolicy,`UDataflowSimulationManager::OnStartup'::__l2::<lambda_3>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetObjectForTimerManager @ 1462f6800

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy,`UDataflowSimulationManager::OnStartup'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 1462f7bc0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_*),FDefaultDelegateUserPolicy,`UDataflowSimulationManager::OnStartup'::__l2::<lambda_2>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1462f7bd0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_*),FDefaultDelegateUserPolicy,`UDataflowSimulationManager::OnStartup'::__l2::<lambda_3>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 1462f7be0

UObject * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy,`UDataflowSimulationManager::OnStartup'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 1462f7dd0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_*),FDefaultDelegateUserPolicy,`UDataflowSimulationManager::OnStartup'::__l2::<lambda_2>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 1462f7de0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_*),FDefaultDelegateUserPolicy,`UDataflowSimulationManager::OnStartup'::__l2::<lambda_3>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// HasSameObject @ 1462f7df0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy,`UDataflowSimulationManager::OnStartup'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 1462f8b90

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_*),FDefaultDelegateUserPolicy,`UDataflowSimulationManager::OnStartup'::__l2::<lambda_2>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 1462f8ba0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_*),FDefaultDelegateUserPolicy,`UDataflowSimulationManager::OnStartup'::__l2::<lambda_3>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// IsSafeToExecute @ 1462f8bb0

bool __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy,`UDataflowSimulationManager::OnStartup'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 1462fe370

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_*),FDefaultDelegateUserPolicy,`UDataflowSimulationManager::OnStartup'::__l2::<lambda_2>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1462fe380

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UActorComponent_*),FDefaultDelegateUserPolicy,`UDataflowSimulationManager::OnStartup'::__l2::<lambda_3>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 1462fe390

FName __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorld_*,enum_ELevelTick,float),FDefaultDelegateUserPolicy,`UDataflowSimulationManager::OnStartup'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

