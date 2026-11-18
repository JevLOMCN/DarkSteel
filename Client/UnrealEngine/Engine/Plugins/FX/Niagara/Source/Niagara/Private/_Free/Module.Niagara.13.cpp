// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 435

// ParticleSpawnUpdateName'' @ 14118f8e0

void __cdecl `dynamic_initializer_for_'UNiagaraSimulationStageBase::ParticleSpawnUpdateName__(void)

{
  ::FName::FName(&UNiagaraSimulationStageBase::ParticleSpawnUpdateName,"ParticleSpawnUpdate");
  return;
}

// SpriteRendererPropertiesToDeferredInit'' @ 14118f900

void __cdecl
`dynamic_initializer_for_'UNiagaraSpriteRendererProperties::SpriteRendererPropertiesToDeferredInit__
          (void)

{
  atexit(`dynamic_atexit_destructor_for_'UNiagaraSpriteRendererProperties::
         SpriteRendererPropertiesToDeferredInit__);
  return;
}

// `dynamic_initializer_for_'CCmdDumpPriorities'' @ 14118f920

void __cdecl NiagaraSimulationTaskPriority::_dynamic_initializer_for__CCmdDumpPriorities__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,NiagaraSimulationTaskPriority::<lambda_24>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&CCmdDumpPriorities,L"fx.Niagara.TaskPriorities.Dump",L"Dump currently set priorities",
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CCmdDumpPriorities__);
  return;
}

// `dynamic_initializer_for_'CCmdRunTest'' @ 14118fa50

void __cdecl NiagaraSimulationTaskPriority::_dynamic_initializer_for__CCmdRunTest__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,NiagaraSimulationTaskPriority::<lambda_25>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x90))
                     (IConsoleManager::Singleton,L"fx.Niagara.TaskPriorities.RunTest",
                      L"Run a test set of priorites",&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&CCmdRunTest,pIVar5);
  CCmdRunTest._0_8_ = &___7FAutoConsoleCommandWithWorldAndArgs__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(_dynamic_atexit_destructor_for__CCmdRunTest__);
  return;
}

// `dynamic_initializer_for_'CVarCleanStatelessEmitterHandles'' @ 14118fbe0

void __cdecl
NiagaraSystemPrivate::_dynamic_initializer_for__CVarCleanStatelessEmitterHandles__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarCleanStatelessEmitterHandles,L"fx.Niagara.CleanStatelessEmitterHandles",
             &GCleanStatelessEmitterHandles,
             L"When enabled stateless emitter handles will clean the stateful emitter during cook to save memory."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarCleanStatelessEmitterHandles__);
  return;
}

// `dynamic_initializer_for_'CVarEnableNiagaraRuntimeCycleCounts'' @ 14118fc30

void __cdecl _dynamic_initializer_for__CVarEnableNiagaraRuntimeCycleCounts__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableNiagaraRuntimeCycleCounts,L"fx.EnableNiagaraRuntimeCycleCounts",
             &GEnableNiagaraRuntimeCycleCounts,
             L"Toggle for runtime cylce counts tracking Niagara\'s frame time. \n",4);
  atexit(_dynamic_atexit_destructor_for__CVarEnableNiagaraRuntimeCycleCounts__);
  return;
}

// `dynamic_initializer_for_'CVarGTickTaskShouldWait'' @ 14118fc80

void __cdecl NiagaraSystemSimulationLocal::_dynamic_initializer_for__CVarGTickTaskShouldWait__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGTickTaskShouldWait,L"fx.Niagara.SystemSimulation.TickTaskShouldWait",
             &GTickTaskShouldWait,
             L"When enabled the tick task will wait for concurrent work to complete, when disabled the task is complete once the GT tick is complete."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarGTickTaskShouldWait__);
  return;
}

// `dynamic_initializer_for_'CVarLastRenderTimeSafetyBias'' @ 14118fcd0

void __cdecl _dynamic_initializer_for__CVarLastRenderTimeSafetyBias__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLastRenderTimeSafetyBias,L"fx.LastRenderTimeSafetyBias",&GLastRenderTimeSafetyBias
             ,
             L"The time to bias the LastRenderTime value to allow for the delay from it being written by the RT."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarLastRenderTimeSafetyBias__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraAllowDeferredReset'' @ 14118fd20

void __cdecl _dynamic_initializer_for__CVarNiagaraAllowDeferredReset__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraAllowDeferredReset,L"fx.Niagara.AllowDeferredReset",
             &GNiagaraAllowDeferredReset,
             L"If we are running async work when a reset is requested we will instead queue for the finalize to perform, this avoid stalling the GameThread."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraAllowDeferredReset__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraBatchGPUTickSubmit'' @ 14118fd70

void __cdecl _dynamic_initializer_for__CVarNiagaraBatchGPUTickSubmit__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraBatchGPUTickSubmit,L"fx.Niagara.SystemSimulation.BatchGPUTickSubmit",
             &GNiagaraSystemSimulationBatchGPUTickSubmit,
             L"The if non zero we allow GPU Ticks to be submitted to the Render Thread in batches.",
             0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraBatchGPUTickSubmit__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraCompileWaitLoggingTerminationCap'' @ 14118fdc0

void __cdecl _dynamic_initializer_for__CVarNiagaraCompileWaitLoggingTerminationCap__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraCompileWaitLoggingTerminationCap,L"fx.Niagara.CompileWaitLoggingCap",
             &GNiagaraCompileWaitLoggingTerminationCap,
             L"During automation, how many times do we log before failing compilation?",0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraCompileWaitLoggingTerminationCap__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraCompileWaitLoggingThreshold'' @ 14118fe10

void __cdecl _dynamic_initializer_for__CVarNiagaraCompileWaitLoggingThreshold__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraCompileWaitLoggingThreshold,L"fx.Niagara.CompileWaitLoggingThreshold",
             &GNiagaraCompileWaitLoggingThreshold,
             L"During automation, how long do we wait for a compile result before logging.",0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraCompileWaitLoggingThreshold__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraConcurrentGPUTickInit'' @ 14118fe60

void __cdecl _dynamic_initializer_for__CVarNiagaraConcurrentGPUTickInit__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraConcurrentGPUTickInit,L"fx.Niagara.SystemSimulation.ConcurrentGPUTickInit",
             &GNiagaraSystemSimulationConcurrentGPUTickInit,
             L"The if non zero we allow GPU Ticks to be initialized in the System\'s concurrent tick rather than on the game thread."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraConcurrentGPUTickInit__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraDumpSystemData'' @ 14118feb0

void __cdecl _dynamic_initializer_for__CVarNiagaraDumpSystemData__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraDumpSystemData,L"fx.DumpSystemData",&GbDumpSystemData,
             L"If > 0, results of system simulations will be dumped to the log. \n",0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraDumpSystemData__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraEmitterBoundsDynamicExpandMultiplier'' @ 14118ff00

void __cdecl _dynamic_initializer_for__CVarNiagaraEmitterBoundsDynamicExpandMultiplier__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraEmitterBoundsDynamicExpandMultiplier,
             L"fx.Niagara.EmitterBounds.DynamicExpandMultiplier",
             &GNiagaraEmitterBoundsDynamicExpandMultiplier,
             L"Multiplier used on dynamic bounds gathering, i.e. 1 means no change, 1.1 means increase by 10%.\nThis value is applied after we calculate any dynamic bounds snapping."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraEmitterBoundsDynamicExpandMultiplier__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraEmitterBoundsDynamicSnapValue'' @ 14118ff50

void __cdecl _dynamic_initializer_for__CVarNiagaraEmitterBoundsDynamicSnapValue__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraEmitterBoundsDynamicSnapValue,L"fx.Niagara.EmitterBounds.DynamicSnapValue",
             &GNiagaraEmitterBoundsDynamicSnapValue,
             L"The value used to snap (round up) dynamic bounds calculations to.For example, a snap of 128 and a value of 1 would result in 128"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraEmitterBoundsDynamicSnapValue__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraEmitterBoundsFixedExpandMultiplier'' @ 14118ffa0

void __cdecl _dynamic_initializer_for__CVarNiagaraEmitterBoundsFixedExpandMultiplier__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraEmitterBoundsFixedExpandMultiplier,
             L"fx.Niagara.EmitterBounds.FixedExpandMultiplier",
             &GNiagaraEmitterBoundsFixedExpandMultiplier,
             L"Multiplier used on fixed bounds gathering, i.e. 1 means no change, 1.1 means increase by 10%."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraEmitterBoundsFixedExpandMultiplier__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraForceLastTickGroup'' @ 14118fff0

void __cdecl _dynamic_initializer_for__CVarNiagaraForceLastTickGroup__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraForceLastTickGroup,L"fx.Niagara.ForceLastTickGroup",
             &GNiagaraForceLastTickGroup,
             L"Force Niagara ticks to be in the last tick group, this mirrors old behavour and can be useful to test for async overlapping issues."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraForceLastTickGroup__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraPrecachePSOAtAssetLoadingTime'' @ 141190040

void __cdecl _dynamic_initializer_for__CVarNiagaraPrecachePSOAtAssetLoadingTime__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraPrecachePSOAtAssetLoadingTime,
             L"r.PSOPrecache.NiagaraPrecachePSOAtAssetLoadingTime",
             &GNiagaraPrecachePSOAtAssetLoadingTime,
             L"Controls whether Niagara systems start PSO precaching at asset loading time (1 = default) or only when activated (0)."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraPrecachePSOAtAssetLoadingTime__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraScalabiltiyMinumumMaxDistance'' @ 141190090

void __cdecl _dynamic_initializer_for__CVarNiagaraScalabiltiyMinumumMaxDistance__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraScalabiltiyMinumumMaxDistance,L"fx.Niagara.Scalability.MinMaxDistance",
             &GNiagaraScalabiltiyMinumumMaxDistance,
             L"Minimum value for Niagara\'s Max distance value. Primariy to prevent divide by zero issues and ensure a sensible distance value for sorted significance culling."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraScalabiltiyMinumumMaxDistance__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraSkipTickDeltaSeconds'' @ 1411900e0

void __cdecl _dynamic_initializer_for__CVarNiagaraSkipTickDeltaSeconds__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraSkipTickDeltaSeconds,L"fx.Niagara.SystemSimulation.SkipTickDeltaSeconds",
             &GNiagaraSystemSimulationSkipTickDeltaSeconds,
             L"When none zero we skip all ticks with a delta seconds less than equal to this number."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraSkipTickDeltaSeconds__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraSystemSimulationAllowASync'' @ 141190130

void __cdecl _dynamic_initializer_for__CVarNiagaraSystemSimulationAllowASync__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraSystemSimulationAllowASync,L"fx.Niagara.SystemSimulation.AllowASync",
             &GNiagaraSystemSimulationAllowASync,
             L"If > 0, system simulation tick is parallelized. \n",0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraSystemSimulationAllowASync__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraSystemSimulationAllowASyncSimCache'' @ 141190180

void __cdecl _dynamic_initializer_for__CVarNiagaraSystemSimulationAllowASyncSimCache__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraSystemSimulationAllowASyncSimCache,
             L"fx.Niagara.SystemSimulation.AllowASyncSimCache",
             &GNiagaraSystemSimulationAllowASyncSimCache,
             L"If > 0, sim cache tick is parallelized. \n",0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraSystemSimulationAllowASyncSimCache__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraSystemSimulationMaxTickSubsteps'' @ 1411901d0

void __cdecl _dynamic_initializer_for__CVarNiagaraSystemSimulationMaxTickSubsteps__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraSystemSimulationMaxTickSubsteps,
             L"fx.Niagara.SystemSimulation.MaxTickSubsteps",&GNiagaraSystemSimulationMaxTickSubsteps
             ,
             L"The max number of possible substeps per frame when a system uses a fixed tick delta."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraSystemSimulationMaxTickSubsteps__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraSystemSimulationTaskStallTimeout'' @ 141190220

void __cdecl _dynamic_initializer_for__CVarNiagaraSystemSimulationTaskStallTimeout__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraSystemSimulationTaskStallTimeout,
             L"fx.Niagara.SystemSimulation.TaskStallTimeout",
             &GNiagaraSystemSimulationTaskStallTimeout,
             L"Timeout in microseconds for Niagara simulation tasks to be considered stalled.\nWhen this is > 0 we busy wait as opposed to joining the TG so avoid using execpt for debugging."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraSystemSimulationTaskStallTimeout__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraSystemSimulationTickBatchMode'' @ 141190270

void __cdecl _dynamic_initializer_for__CVarNiagaraSystemSimulationTickBatchMode__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraSystemSimulationTickBatchMode,L"fx.Niagara.SystemSimulation.TickBatchMode",
             &GNiagaraSystemSimulationTickBatchMode,
             L"Controls what we do with each batch of instances in a simulation0 - Spawn tasks for all batches.1 - Spawn tasks for all but the final batch.2 - Run all instance inline with the main simulation task."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraSystemSimulationTickBatchMode__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraSystemSimulationTickBatchSize'' @ 1411902c0

void __cdecl _dynamic_initializer_for__CVarNiagaraSystemSimulationTickBatchSize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraSystemSimulationTickBatchSize,L"fx.Niagara.SystemSimulation.TickBatchSize",
             &GNiagaraSystemSimulationTickBatchSize,
             L"The number of system instances to process per async task. \n",0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraSystemSimulationTickBatchSize__);
  return;
}

// `dynamic_initializer_for_'CVarNoneOverlappingPriority'' @ 141190310

void __cdecl
NiagaraSimulationTaskPriority::_dynamic_initializer_for__CVarNoneOverlappingPriority__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNoneOverlappingPriority,L"fx.Niagara.TaskPriorities.NoneOverlappingPriority",
             &GNoneOverlappingPriority,
             L"Priority to use when we are not allowed to overlap tick groups.Default is 1, set to -1 to not override the default priorities."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNoneOverlappingPriority__);
  return;
}

// `dynamic_initializer_for_'CVarPerfCapturePriority'' @ 141190360

void __cdecl
NiagaraSimulationTaskPriority::_dynamic_initializer_for__CVarPerfCapturePriority__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPerfCapturePriority,L"fx.Niagara.TaskPriorities.PerfCapturePriority",
             &GPerfCapturePriority,
             L"Priority to use if performance captures are enabled.  Reduces the amount of context switching for Niagara to make performance measurements more reliable.Default is 1, set to -1 to not override the default priorities."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarPerfCapturePriority__);
  return;
}

// `dynamic_initializer_for_'CVarPostActorTickPriority'' @ 1411903b0

void __cdecl
NiagaraSimulationTaskPriority::_dynamic_initializer_for__CVarPostActorTickPriority__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPostActorTickPriority,L"fx.Niagara.TaskPriorities.PostActorTickPriority",
             &GPostActorTickPriority,
             L"Any tasks we execute, such as spawning, in post actor tick will run at this priority."
             ,0x40);
  atexit(_dynamic_atexit_destructor_for__CVarPostActorTickPriority__);
  return;
}

// `dynamic_initializer_for_'CVarSystemUpdateOnSpawn'' @ 141190400

void __cdecl _dynamic_initializer_for__CVarSystemUpdateOnSpawn__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSystemUpdateOnSpawn,L"fx.Niagara.SystemSimulation.UpdateOnSpawn",
             &GNiagaraSystemSimulationUpdateOnSpawn,
             L"If > 0, system simulations are given a small update after spawn. \n",0);
  atexit(_dynamic_atexit_destructor_for__CVarSystemUpdateOnSpawn__);
  return;
}

// `dynamic_initializer_for_'CVarTickGroupPriorities'' @ 141190450

void __cdecl
NiagaraSimulationTaskPriority::_dynamic_initializer_for__CVarTickGroupPriorities__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = UpdateTickGroupPriorities;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarTickGroupPriorities,L"fx.Niagara.TaskPriorities.TickGroupPriority",
             &GTickGroupPrioritiesString,
             L"Set tick group priories for Niagara.For example, TG_PrePhysics:2,TG_DuringPhysics:2",
             (TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,0x40
            );
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CVarTickGroupPriorities__);
  return;
}

// `dynamic_initializer_for_'CVarTickTaskAllowFrameOverlap'' @ 1411905a0

void __cdecl
NiagaraSystemSimulationLocal::_dynamic_initializer_for__CVarTickTaskAllowFrameOverlap__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarTickTaskAllowFrameOverlap,L"fx.Niagara.SystemSimulation.TickTaskAllowFrameOverlap"
             ,&GTickTaskAllowFrameOverlap,
             L"When enabled we allow ticks to overlap beyond PostActorTick until either EOF updates or the next tick."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarTickTaskAllowFrameOverlap__);
  return;
}

// `dynamic_initializer_for_'CVarWaitForAsyncStallWarnThresholdMS'' @ 1411905f0

void __cdecl _dynamic_initializer_for__CVarWaitForAsyncStallWarnThresholdMS__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarWaitForAsyncStallWarnThresholdMS,L"fx.WaitForAsyncStallWarnThresholdMS",
             &GWaitForAsyncStallWarnThresholdMS,
             L"If we stall in WaitForAsync for longer than this threshold then we emit a stall warning message."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarWaitForAsyncStallWarnThresholdMS__);
  return;
}

// `dynamic_initializer_for_'CmdReportSystemMem'' @ 141190640

void __cdecl NiagaraMemReportInternal::_dynamic_initializer_for__CmdReportSystemMem__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,NiagaraMemReportInternal::<lambda_26>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x90))
                     (IConsoleManager::Singleton,L"NiagaraReportSystemMemory",
                      L"Dumps some rough information about system memory breakdown",&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&CmdReportSystemMem,pIVar5);
  CmdReportSystemMem._0_8_ = &___7FAutoConsoleCommandWithWorldAndArgs__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(_dynamic_atexit_destructor_for__CmdReportSystemMem__);
  return;
}

// `dynamic_initializer_for_'GTaskPriorities'' @ 1411907d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl NiagaraSimulationTaskPriority::_dynamic_initializer_for__GTaskPriorities__(void)

{
  FAutoConsoleTaskPriority::FAutoConsoleTaskPriority
            (GTaskPriorities,L"fx.Niagara.TaskPriorities.High",L"Task Priority When Set to High",
             HighThreadPriority,HighTaskPriority,HighTaskPriority);
  FAutoConsoleTaskPriority::FAutoConsoleTaskPriority
            (GTaskPriorities + 1,L"fx.Niagara.TaskPriorities.Normal",
             L"Task Priority When Set to Normal",HighThreadPriority,MainQueue,MainQueue);
  FAutoConsoleTaskPriority::FAutoConsoleTaskPriority
            (GTaskPriorities + 2,L"fx.Niagara.TaskPriorities.Low",L"Task Priority When Set to Low",
             MainQueue,HighTaskPriority,MainQueue);
  FAutoConsoleTaskPriority::FAutoConsoleTaskPriority
            (GTaskPriorities + 3,L"fx.Niagara.TaskPriorities.Background",
             L"Task Priority When Set to Background",BackgroundThreadPriority,MainQueue,MainQueue);
  atexit(_dynamic_atexit_destructor_for__GTaskPriorities__);
  return;
}

// `dynamic_initializer_for_'GTickGroupPrioritiesString'' @ 1411908a0

void __cdecl
NiagaraSimulationTaskPriority::_dynamic_initializer_for__GTickGroupPrioritiesString__(void)

{
  atexit(_dynamic_atexit_destructor_for__GTickGroupPrioritiesString__);
  return;
}

// `dynamic_initializer_for_'ModuleName'' @ 1411908c0

void __cdecl AssetRegistryConstants::_dynamic_initializer_for__ModuleName__(void)

{
  ::FName::FName(&ModuleName,"AssetRegistry");
  return;
}

// `dynamic_initializer_for_'NAME_ActiveDIs'' @ 1411908e0

void __cdecl NiagaraSystemPrivate::_dynamic_initializer_for__NAME_ActiveDIs__(void)

{
  ::FName::FName(&NAME_ActiveDIs,"ActiveDIs");
  return;
}

// `dynamic_initializer_for_'NAME_ActiveEmitters'' @ 141190900

void __cdecl NiagaraSystemPrivate::_dynamic_initializer_for__NAME_ActiveEmitters__(void)

{
  ::FName::FName(&NAME_ActiveEmitters,"ActiveEmitters");
  return;
}

// `dynamic_initializer_for_'NAME_ActiveRenderers'' @ 141190920

void __cdecl NiagaraSystemPrivate::_dynamic_initializer_for__NAME_ActiveRenderers__(void)

{
  ::FName::FName(&NAME_ActiveRenderers,"ActiveRenderers");
  return;
}

// `dynamic_initializer_for_'NAME_ActiveStatelessEmitters'' @ 141190940

void __cdecl NiagaraSystemPrivate::_dynamic_initializer_for__NAME_ActiveStatelessEmitters__(void)

{
  ::FName::FName(&NAME_ActiveStatelessEmitters,"ActiveStatelessEmitters");
  return;
}

// `dynamic_initializer_for_'NAME_ByteCode'' @ 141190960

void __cdecl NiagaraMemReportInternal::_dynamic_initializer_for__NAME_ByteCode__(void)

{
  ::FName::FName(&NAME_ByteCode,"ByteCode");
  return;
}

// `dynamic_initializer_for_'NAME_EffectType'' @ 141190980

void __cdecl NiagaraSystemPrivate::_dynamic_initializer_for__NAME_EffectType__(void)

{
  ::FName::FName(&NAME_EffectType,"EffectType");
  return;
}

// `dynamic_initializer_for_'NAME_FixedBoundsSize'' @ 1411909a0

void __cdecl NiagaraSystemPrivate::_dynamic_initializer_for__NAME_FixedBoundsSize__(void)

{
  ::FName::FName(&NAME_FixedBoundsSize,"FixedBoundsSize");
  return;
}

// `dynamic_initializer_for_'NAME_GPUSimsMissingFixedBounds'' @ 1411909c0

void __cdecl NiagaraSystemPrivate::_dynamic_initializer_for__NAME_GPUSimsMissingFixedBounds__(void)

{
  ::FName::FName(&NAME_GPUSimsMissingFixedBounds,"GPUSimsMissingFixedBounds");
  return;
}

// `dynamic_initializer_for_'NAME_HasDIsWithPostSimulateTick'' @ 1411909e0

void __cdecl NiagaraSystemPrivate::_dynamic_initializer_for__NAME_HasDIsWithPostSimulateTick__(void)

{
  ::FName::FName(&NAME_HasDIsWithPostSimulateTick,"HasDIsWithPostSimulateTick");
  return;
}

// `dynamic_initializer_for_'NAME_HasGPUEmitter'' @ 141190a00

void __cdecl NiagaraSystemPrivate::_dynamic_initializer_for__NAME_HasGPUEmitter__(void)

{
  ::FName::FName(&NAME_HasGPUEmitter,"HasGPUEmitter");
  return;
}

// `dynamic_initializer_for_'NAME_HasOverrideScalabilityForSystem'' @ 141190a20

void __cdecl
NiagaraSystemPrivate::_dynamic_initializer_for__NAME_HasOverrideScalabilityForSystem__(void)

{
  ::FName::FName(&NAME_HasOverrideScalabilityForSystem,"HasOverrideScalabilityForSystem");
  return;
}

// `dynamic_initializer_for_'NAME_NeedsSortedSignificanceCull'' @ 141190a40

void __cdecl
NiagaraSystemPrivate::_dynamic_initializer_for__NAME_NeedsSortedSignificanceCull__(void)

{
  ::FName::FName(&NAME_NeedsSortedSignificanceCull,"NeedsSortedSignificanceCull");
  return;
}

// `dynamic_initializer_for_'NAME_NumEmitters'' @ 141190a60

void __cdecl NiagaraSystemPrivate::_dynamic_initializer_for__NAME_NumEmitters__(void)

{
  ::FName::FName(&NAME_NumEmitters,"NumEmitters");
  return;
}

// `dynamic_initializer_for_'NAME_Particles_StateIndex'' @ 141190a80

void __cdecl
NiagaraSimulationStageLocal::_dynamic_initializer_for__NAME_Particles_StateIndex__(void)

{
  ::FName::FName(&NAME_Particles_StateIndex,"Particles.StateIndex");
  return;
}

// `dynamic_initializer_for_'NAME_RapidIterationParameters'' @ 141190aa0

void __cdecl
NiagaraMemReportInternal::_dynamic_initializer_for__NAME_RapidIterationParameters__(void)

{
  ::FName::FName(&NAME_RapidIterationParameters,"RapidIterationParameters");
  return;
}

// `dynamic_initializer_for_'NAME_ScriptExecutionParamStore'' @ 141190ac0

void __cdecl
NiagaraMemReportInternal::_dynamic_initializer_for__NAME_ScriptExecutionParamStore__(void)

{
  ::FName::FName(&NAME_ScriptExecutionParamStore,"ScriptExecutionParamStore");
  return;
}

// `dynamic_initializer_for_'NAME_WarmupTime'' @ 141190ae0

void __cdecl NiagaraSystemPrivate::_dynamic_initializer_for__NAME_WarmupTime__(void)

{
  ::FName::FName(&NAME_WarmupTime,"WarmupTime");
  return;
}

// `dynamic_initializer_for_'NiagaraChannelReg'' @ 141190b00

void __cdecl _dynamic_initializer_for__NiagaraChannelReg__(void)

{
  InitArgs local_18;
  
  local_18.Desc = (char *)0x0;
  local_18.bReadOnly = false;
  local_18._9_7_ = 0;
  UE::Trace::FChannel::Setup(&NiagaraChannelObject,"NiagaraChannel",&local_18);
  return;
}

// `dynamic_initializer_for_'RegisteredTypeIndexCacheTLS'' @ 141190b30

void __cdecl NiagaraTypeRegistryLocal::_dynamic_initializer_for__RegisteredTypeIndexCacheTLS__(void)

{
  __tlregdtor(_dynamic_atexit_destructor_for__RegisteredTypeIndexCacheTLS__);
  return;
}

// `dynamic_initializer_for_'RegistryProxyContents'' @ 141190b50

void __cdecl NiagaraTypeRegistryLocal::_dynamic_initializer_for__RegistryProxyContents__(void)

{
  __tlregdtor(_dynamic_atexit_destructor_for__RegistryProxyContents__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraCollision'' @ 141190b70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraCollision__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraCollision == (FThreadSafeStaticStat<FStat_STAT_NiagaraCollision>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraCollision");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraCollision,*pFVar1,L"Collision",
               "STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraConstants'' @ 141190c00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraConstants__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraConstants == (FThreadSafeStaticStat<FStat_STAT_NiagaraConstants>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraConstants");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraConstants,*pFVar1,
               L"Constant Setup [CNC]","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraGPUDataInterfaceMemory'' @ 141190c90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraGPUDataInterfaceMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraGPUDataInterfaceMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory,*pFVar1,
               L"Niagara GPU data interface memory","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara"
               ,true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraGPUParticleMemory'' @ 141190d20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraGPUParticleMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraGPUParticleMemory ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUParticleMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraGPUParticleMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUParticleMemory,*pFVar1,
               L"Niagara GPU particle data memory","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",
               true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraInitGPUSystemTick'' @ 141190db0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraInitGPUSystemTick__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraInitGPUSystemTick ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraInitGPUSystemTick>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraInitGPUSystemTick");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraInitGPUSystemTick,*pFVar1,
               L"InitGPUSystemTick","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraNumParticles'' @ 141190e40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraNumParticles__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraNumParticles == (FThreadSafeStaticStat<FStat_STAT_NiagaraNumParticles>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraNumParticles");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraNumParticles,*pFVar1,
               L"# CPU Particles","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraNumSystems'' @ 141190ed0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraNumSystems__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraNumSystems == (FThreadSafeStaticStat<FStat_STAT_NiagaraNumSystems>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraNumSystems");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraNumSystems,*pFVar1,L"NumSystems",
               "STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,ST_int64,false,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraOverview_GT'' @ 141190f60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraOverview_GT__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraOverview_GT == (FThreadSafeStaticStat<FStat_STAT_NiagaraOverview_GT>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraOverview_GT");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraOverview_GT,*pFVar1,L"GT Total",
               "STATGROUP_NiagaraOverview","STATCAT_Niagara",L"NiagaraOverview",true,true,ST_int64,
               true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraOverview_GT_CNC'' @ 141190ff0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraOverview_GT_CNC__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraOverview_GT_CNC ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraOverview_GT_CNC>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraOverview_GT_CNC");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraOverview_GT_CNC,*pFVar1,
               L"GT Concurrent Total","STATGROUP_NiagaraOverview","STATCAT_Niagara",
               L"NiagaraOverview",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraOverview_RT'' @ 141191080

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraOverview_RT__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraOverview_RT == (FThreadSafeStaticStat<FStat_STAT_NiagaraOverview_RT>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraOverview_RT");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraOverview_RT,*pFVar1,L"RT Total",
               "STATGROUP_NiagaraOverview","STATCAT_Niagara",L"NiagaraOverview",true,true,ST_int64,
               true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraOverview_RT_CNC'' @ 141191110

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraOverview_RT_CNC__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraOverview_RT_CNC ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraOverview_RT_CNC>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraOverview_RT_CNC");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraOverview_RT_CNC,*pFVar1,
               L"RT Concurrent Total","STATGROUP_NiagaraOverview","STATCAT_Niagara",
               L"NiagaraOverview",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraParticleMemory'' @ 1411911a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraParticleMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraParticleMemory ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraParticleMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraParticleMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraParticleMemory,*pFVar1,
               L"Niagara particle data memory","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true
               ,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraRenderTargetMemory'' @ 141191230

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraRenderTargetMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraRenderTargetMemory ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraRenderTargetMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraRenderTargetMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraRenderTargetMemory,*pFVar1,
               L"Niagara RenderTarget memory","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,
               false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraSystemActivate'' @ 1411912c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraSystemActivate__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraSystemActivate ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemActivate>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraSystemActivate");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSystemActivate,*pFVar1,
               L"System Activate [GT]","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraSystemAdvanceSim'' @ 141191350

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraSystemAdvanceSim__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraSystemAdvanceSim ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemAdvanceSim>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraSystemAdvanceSim");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSystemAdvanceSim,*pFVar1,
               L"System Advance Simulation [GT] ","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraSystemComplete'' @ 1411913e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraSystemComplete__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraSystemComplete ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemComplete>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraSystemComplete");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSystemComplete,*pFVar1,
               L"System Complete [GT]","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraSystemDeactivate'' @ 141191470

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraSystemDeactivate__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraSystemDeactivate ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemDeactivate>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraSystemDeactivate");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSystemDeactivate,*pFVar1,
               L"System Deactivate [GT]","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraSystemInitEmitters'' @ 141191500

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraSystemInitEmitters__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraSystemInitEmitters ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemInitEmitters>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraSystemInitEmitters");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSystemInitEmitters,*pFVar1,
               L"System Init Emitters [GT]","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraSystemInst_ComponentTickGT'' @ 141191590

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraSystemInst_ComponentTickGT__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraSystemInst_ComponentTickGT ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemInst_ComponentTickGT>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraSystemInst_ComponentTickGT");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSystemInst_ComponentTickGT,*pFVar1,
               L"System Instance Tick (Component) [GT]","STATGROUP_Niagara","STATCAT_Niagara",
               L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraSystemInst_FinalizeGT'' @ 141191620

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraSystemInst_FinalizeGT__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraSystemInst_FinalizeGT ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemInst_FinalizeGT>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraSystemInst_FinalizeGT");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSystemInst_FinalizeGT,*pFVar1,
               L"System Instance Finalize [GT]","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraSystemInst_TickCNC'' @ 1411916b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraSystemInst_TickCNC__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraSystemInst_TickCNC ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemInst_TickCNC>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraSystemInst_TickCNC");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSystemInst_TickCNC,*pFVar1,
               L"System Instance Tick [CNC]","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraSystemInst_TickGT'' @ 141191740

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraSystemInst_TickGT__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraSystemInst_TickGT ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemInst_TickGT>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraSystemInst_TickGT");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSystemInst_TickGT,*pFVar1,
               L"System Instance Tick [GT]","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraSystemReinit'' @ 1411917d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraSystemReinit__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraSystemReinit == (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemReinit>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraSystemReinit");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSystemReinit,*pFVar1,
               L"System Reinit [GT]","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraSystemReset'' @ 141191860

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraSystemReset__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraSystemReset == (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemReset>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraSystemReset");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSystemReset,*pFVar1,
               L"System Reset [GT]","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraSystemSetSolo'' @ 1411918f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraSystemSetSolo__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraSystemSetSolo ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemSetSolo>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraSystemSetSolo");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSystemSetSolo,*pFVar1,
               L"System SetSolo[GT] ","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraSystemSim_ForceWaitFakeStall'' @ 141191980

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraSystemSim_ForceWaitFakeStall__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraSystemSim_ForceWaitFakeStall ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemSim_ForceWaitFakeStall>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraSystemSim_ForceWaitFakeStall");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSystemSim_ForceWaitFakeStall,
               *pFVar1,L"ForcedWait Fake Stall","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraSystemSim_ForceWaitForAsync'' @ 141191a10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraSystemSim_ForceWaitForAsync__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraSystemSim_ForceWaitForAsync ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemSim_ForceWaitForAsync>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraSystemSim_ForceWaitForAsync");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSystemSim_ForceWaitForAsync,*pFVar1
               ,L"ForcedWaitForAsync","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraSystemSim_Init'' @ 141191aa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraSystemSim_Init__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraSystemSim_Init ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemSim_Init>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraSystemSim_Init");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSystemSim_Init,*pFVar1,
               L"System Sim Init [GT]","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraSystemSim_Init_BindParams'' @ 141191b30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraSystemSim_Init_BindParams__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraSystemSim_Init_BindParams ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemSim_Init_BindParams>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraSystemSim_Init_BindParams");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSystemSim_Init_BindParams,*pFVar1,
               L"System Sim Init (BindParams) [GT]","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara"
               ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraSystemSim_Init_DataSets'' @ 141191bc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraSystemSim_Init_DataSets__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraSystemSim_Init_DataSets ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemSim_Init_DataSets>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraSystemSim_Init_DataSets");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSystemSim_Init_DataSets,*pFVar1,
               L"System Sim Init (DataSets) [GT]","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraSystemSim_Init_DatasetAccessors'' @ 141191c50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraSystemSim_Init_DatasetAccessors__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraSystemSim_Init_DatasetAccessors ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemSim_Init_DatasetAccessors>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraSystemSim_Init_DatasetAccessors");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSystemSim_Init_DatasetAccessors,
               *pFVar1,L"System Sim Init (DatasetAccessors) [GT]","STATGROUP_Niagara",
               "STATCAT_Niagara",L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraSystemSim_Init_DirectBindings'' @ 141191ce0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraSystemSim_Init_DirectBindings__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraSystemSim_Init_DirectBindings ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemSim_Init_DirectBindings>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraSystemSim_Init_DirectBindings");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSystemSim_Init_DirectBindings,
               *pFVar1,L"System Sim Init (DirectBindings) [GT]","STATGROUP_Niagara",
               "STATCAT_Niagara",L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraSystemSim_Init_ExecContexts'' @ 141191d70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraSystemSim_Init_ExecContexts__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraSystemSim_Init_ExecContexts ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemSim_Init_ExecContexts>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraSystemSim_Init_ExecContexts");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSystemSim_Init_ExecContexts,*pFVar1
               ,L"System Sim Init (ExecContexts) [GT]","STATGROUP_Niagara","STATCAT_Niagara",
               L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraSystemSim_PrepareForSimulateCNC'' @ 141191e00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraSystemSim_PrepareForSimulateCNC__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraSystemSim_PrepareForSimulateCNC ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemSim_PrepareForSimulateCNC>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraSystemSim_PrepareForSimulateCNC");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSystemSim_PrepareForSimulateCNC,
               *pFVar1,L"System Prepare For Simulate [CNC]","STATGROUP_Niagara","STATCAT_Niagara",
               L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraSystemSim_SpawnCNC'' @ 141191e90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraSystemSim_SpawnCNC__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraSystemSim_SpawnCNC ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemSim_SpawnCNC>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraSystemSim_SpawnCNC");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSystemSim_SpawnCNC,*pFVar1,
               L"System Sim Spawn [CNC]","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraSystemSim_SpawnNewGT'' @ 141191f20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraSystemSim_SpawnNewGT__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraSystemSim_SpawnNewGT ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemSim_SpawnNewGT>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraSystemSim_SpawnNewGT");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSystemSim_SpawnNewGT,*pFVar1,
               L"System Simulation SpawnNew [GT]","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraSystemSim_TickCNC'' @ 141191fb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraSystemSim_TickCNC__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraSystemSim_TickCNC ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemSim_TickCNC>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraSystemSim_TickCNC");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSystemSim_TickCNC,*pFVar1,
               L"System Simulation Tick [CNC]","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true
               ,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraSystemSim_TickGT'' @ 141192040

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraSystemSim_TickGT__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraSystemSim_TickGT ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemSim_TickGT>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraSystemSim_TickGT");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSystemSim_TickGT,*pFVar1,
               L"System Simulation Tick [GT]","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraSystemSim_TransferResultsCNC'' @ 1411920d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraSystemSim_TransferResultsCNC__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraSystemSim_TransferResultsCNC ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemSim_TransferResultsCNC>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraSystemSim_TransferResultsCNC");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSystemSim_TransferResultsCNC,
               *pFVar1,L"System Sim Transfer Results [CNC]","STATGROUP_Niagara","STATCAT_Niagara",
               L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraSystemSim_UpdateCNC'' @ 141192160

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraSystemSim_UpdateCNC__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraSystemSim_UpdateCNC ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemSim_UpdateCNC>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraSystemSim_UpdateCNC");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSystemSim_UpdateCNC,*pFVar1,
               L"System Sim Update [CNC]","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true
               ,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraSystemWaitForAsyncTick'' @ 1411921f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraSystemWaitForAsyncTick__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraSystemWaitForAsyncTick ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemWaitForAsyncTick>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraSystemWaitForAsyncTick");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSystemWaitForAsyncTick,*pFVar1,
               L"System Instance WaitForAsyncTick [GT]","STATGROUP_Niagara","STATCAT_Niagara",
               L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraTick'' @ 141192280

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraTick__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraTick == (FThreadSafeStaticStat<FStat_STAT_NiagaraTick>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraTick");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraTick,*pFVar1,L"Emitter Tick [CNC]",
               "STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraVBMemory'' @ 141192310

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraVBMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraVBMemory == (FThreadSafeStaticStat<FStat_STAT_NiagaraVBMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraVBMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraVBMemory,*pFVar1,
               L"Niagara vertex buffer memory","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true
               ,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Niagara_System_CompileScript'' @ 1411923a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Niagara_System_CompileScript__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Niagara_System_CompileScript ==
      (FThreadSafeStaticStat<FStat_STAT_Niagara_System_CompileScript>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Niagara_System_CompileScript");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Niagara_System_CompileScript,*pFVar1,
               L"Niagara - System - CompileScript","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Niagara_System_CompileScriptResetAfter'' @ 141192430

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Niagara_System_CompileScriptResetAfter__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Niagara_System_CompileScriptResetAfter ==
      (FThreadSafeStaticStat<FStat_STAT_Niagara_System_CompileScriptResetAfter>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Niagara_System_CompileScriptResetAfter");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Niagara_System_CompileScriptResetAfter,
               *pFVar1,L"Niagara - System - CompileScript_ResetAfter","STATGROUP_Niagara",
               "STATCAT_Niagara",L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TotalNiagaraSystemInstances'' @ 1411924c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TotalNiagaraSystemInstances__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TotalNiagaraSystemInstances ==
      (FThreadSafeStaticStat<FStat_STAT_TotalNiagaraSystemInstances>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TotalNiagaraSystemInstances");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TotalNiagaraSystemInstances,*pFVar1,
               L"Total System Instances","STATGROUP_NiagaraSystemCounts","STATCAT_Niagara",
               L"Niagara System Counts",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TotalNiagaraSystemInstancesSolo'' @ 141192550

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TotalNiagaraSystemInstancesSolo__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TotalNiagaraSystemInstancesSolo ==
      (FThreadSafeStaticStat<FStat_STAT_TotalNiagaraSystemInstancesSolo>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TotalNiagaraSystemInstancesSolo");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TotalNiagaraSystemInstancesSolo,*pFVar1,
               L"Total Solo System Instances","STATGROUP_NiagaraSystemCounts","STATCAT_Niagara",
               L"Niagara System Counts",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h__Script_Niagara_3165440512'' @ 1411925e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h__Script_Niagara_3165440512__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h__Script_Niagara_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h__Script_Niagara_Statics
             ::ScriptStructInfo,5,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSystem_h__Script_Niagara_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_NiagaraSystemEmitterState_h__Script_Niagara_3702430611'' @ 141192630

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_NiagaraSystemEmitterState_h__Script_Niagara_3702430611__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_NiagaraSystemEmitterState_h__Script_Niagara_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_NiagaraSystemEmitterState_h__Script_Niagara_Statics
             ::EnumInfo,4);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSimStageExecutionData_h__Script_Niagara_4126759220'' @ 141192680

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSimStageExecutionData_h__Script_Niagara_4126759220__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSimStageExecutionData_h__Script_Niagara_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSimulationStageBase_h__Script_Niagara_4195692810'' @ 1411926c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSimulationStageBase_h__Script_Niagara_4195692810__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSimulationStageBase_h__Script_Niagara_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSpriteRendererProperties_h__Script_Niagara_3442871639'' @ 141192700

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSpriteRendererProperties_h__Script_Niagara_3442871639__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSpriteRendererProperties_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSpriteRendererProperties_h__Script_Niagara_Statics
             ::EnumInfo,3);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSystemCollection_h__Script_Niagara_3767257834'' @ 141192750

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSystemCollection_h__Script_Niagara_3767257834__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSystemCollection_h__Script_Niagara_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSystemCollection_h__Script_Niagara_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// Z_Construct_UClass_UNiagaraSystemCollection @ 1493c1f80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraSystemCollection(void)

{
  if (Z_Registration_Info_UClass_UNiagaraSystemCollection.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraSystemCollection.OuterSingleton,
               &Z_Construct_UClass_UNiagaraSystemCollection_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraSystemCollection.OuterSingleton;
}

// Z_Construct_UScriptStruct_FNiagaraSystemCollectionData @ 1493c1fc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraSystemCollectionData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraSystemCollectionData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraSystemCollectionData.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraSystemCollectionData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraSystemCollectionData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraSystemCollectionData.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewStructOps @ 1493c2040

void * __cdecl Z_Construct_UScriptStruct_FNiagaraSystemCollectionData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraSystemCollectionData,&UE::CoreUObject::Private::Construct<FNiagaraSystemCollectionData>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraSystemCollectionData>,&UE::CoreUObject::Private::Destruct<FNiagaraSystemCollectionData>,&UE::CoreUObject::Private::Copy<FNiagaraSystemCollectionData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1493c2270

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,NiagaraMemReportInternal::<lambda_26>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,NiagaraMemReportInternal::<lambda_26>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UFunction_UNiagaraSystemCollection_GetSystems @ 1493c23c0

UFunction * __cdecl Z_Construct_UFunction_UNiagaraSystemCollection_GetSystems(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraSystemCollection_GetSystems_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNiagaraSystemCollection_LoadAsync @ 1493c2400

UFunction * __cdecl Z_Construct_UFunction_UNiagaraSystemCollection_LoadAsync(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraSystemCollection_LoadAsync_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNiagaraSystemCollection_LoadSynchronous @ 1493c2450

UFunction * __cdecl Z_Construct_UFunction_UNiagaraSystemCollection_LoadSynchronous(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraSystemCollection_LoadSynchronous_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNiagaraSystemCollection_Num @ 1493c2630

UFunction * __cdecl Z_Construct_UFunction_UNiagaraSystemCollection_Num(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraSystemCollection_Num_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNiagaraSystemCollection_Release @ 1493c2860

UFunction * __cdecl Z_Construct_UFunction_UNiagaraSystemCollection_Release(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraSystemCollection_Release_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 1493c28a0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,NiagaraSimulationTaskPriority::<lambda_24>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,NiagaraSimulationTaskPriority::<lambda_24>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// NewProp_bLoadImmediately_SetBit @ 1493c28d0

void __cdecl
Z_Construct_UClass_UNiagaraSystemCollection_Statics::NewProp_bLoadImmediately_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x60) = 1;
  return;
}

// `scalar_deleting_destructor' @ 1493c2ad0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,NiagaraSimulationTaskPriority::<lambda_25>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,NiagaraSimulationTaskPriority::<lambda_25>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UEnum_Niagara_ENiagaraEmitterInactiveResponse @ 1493c2b80

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraEmitterInactiveResponse(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraEmitterInactiveResponse.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraEmitterInactiveResponse.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraEmitterInactiveResponse_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraEmitterInactiveResponse.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraLoopBehavior @ 1493c2bc0

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraLoopBehavior(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraLoopBehavior.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraLoopBehavior.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraLoopBehavior_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraLoopBehavior.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraLoopDurationMode @ 1493c2c00

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraLoopDurationMode(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraLoopDurationMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraLoopDurationMode.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraLoopDurationMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraLoopDurationMode.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraSystemInactiveResponse @ 1493c2c40

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraSystemInactiveResponse(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraSystemInactiveResponse.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraSystemInactiveResponse.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraSystemInactiveResponse_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraSystemInactiveResponse.InnerSingleton;
}

// ENiagaraSystemInactiveResponse_StaticEnum @ 1493c2c80

UEnum * __cdecl ENiagaraSystemInactiveResponse_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraSystemInactiveResponse.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraSystemInactiveResponse.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraSystemInactiveResponse,(UObject *)pUVar1,
                       L"ENiagaraSystemInactiveResponse");
  }
  return Z_Registration_Info_UEnum_ENiagaraSystemInactiveResponse.OuterSingleton;
}

// ENiagaraEmitterInactiveResponse_StaticEnum @ 1493c2cc0

UEnum * __cdecl ENiagaraEmitterInactiveResponse_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraEmitterInactiveResponse.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraEmitterInactiveResponse.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraEmitterInactiveResponse,(UObject *)pUVar1,
                       L"ENiagaraEmitterInactiveResponse");
  }
  return Z_Registration_Info_UEnum_ENiagaraEmitterInactiveResponse.OuterSingleton;
}

// ENiagaraLoopBehavior_StaticEnum @ 1493c2d00

UEnum * __cdecl ENiagaraLoopBehavior_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraLoopBehavior.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraLoopBehavior.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraLoopBehavior,(UObject *)pUVar1,
                       L"ENiagaraLoopBehavior");
  }
  return Z_Registration_Info_UEnum_ENiagaraLoopBehavior.OuterSingleton;
}

// ENiagaraLoopDurationMode_StaticEnum @ 1493c2d40

UEnum * __cdecl ENiagaraLoopDurationMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraLoopDurationMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraLoopDurationMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraLoopDurationMode,(UObject *)pUVar1,
                       L"ENiagaraLoopDurationMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraLoopDurationMode.OuterSingleton;
}

// NewProp_bRunSpawnScript_SetBit @ 1493c2d80

void __cdecl
Z_Construct_UScriptStruct_FNiagaraSystemStateData_Statics::NewProp_bRunSpawnScript_SetBit
          (void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 1;
  return;
}

// NewProp_bRunUpdateScript_SetBit @ 1493c2d90

void __cdecl
Z_Construct_UScriptStruct_FNiagaraSystemStateData_Statics::NewProp_bRunUpdateScript_SetBit
          (void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 2;
  return;
}

// NewProp_bIgnoreSystemState_SetBit @ 1493c2da0

void __cdecl
Z_Construct_UScriptStruct_FNiagaraSystemStateData_Statics::NewProp_bIgnoreSystemState_SetBit
          (void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 4;
  return;
}

// NewProp_bRecalculateDurationEachLoop_SetBit @ 1493c2db0

void __cdecl
Z_Construct_UScriptStruct_FNiagaraSystemStateData_Statics::
NewProp_bRecalculateDurationEachLoop_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 8;
  return;
}

// NewProp_bLoopDelayEnabled_SetBit @ 1493c2dc0

void __cdecl
Z_Construct_UScriptStruct_FNiagaraSystemStateData_Statics::NewProp_bLoopDelayEnabled_SetBit
          (void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 0x10;
  return;
}

// NewProp_bDelayFirstLoopOnly_SetBit @ 1493c2dd0

void __cdecl
Z_Construct_UScriptStruct_FNiagaraSystemStateData_Statics::NewProp_bDelayFirstLoopOnly_SetBit
          (void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 0x20;
  return;
}

// NewProp_bRecalculateDelayEachLoop_SetBit @ 1493c2de0

void __cdecl
Z_Construct_UScriptStruct_FNiagaraSystemStateData_Statics::NewProp_bRecalculateDelayEachLoop_SetBit
          (void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 0x40;
  return;
}

// NewStructOps @ 1493c2e10

void * __cdecl Z_Construct_UScriptStruct_FNiagaraSystemStateData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraSystemStateData,&UE::CoreUObject::Private::Construct<FNiagaraSystemStateData>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraSystemStateData>,&UE::CoreUObject::Private::Destruct<FNiagaraSystemStateData>,&UE::CoreUObject::Private::Copy<FNiagaraSystemStateData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UNiagaraSimulationStageBase @ 1493c2ec0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraSimulationStageBase(void)

{
  if (Z_Registration_Info_UClass_UNiagaraSimulationStageBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraSimulationStageBase.OuterSingleton,
               &Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraSimulationStageBase.OuterSingleton;
}

// Z_Construct_UClass_UNiagaraSimulationStageGeneric @ 1493c2f00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraSimulationStageGeneric(void)

{
  if (Z_Registration_Info_UClass_UNiagaraSimulationStageGeneric.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraSimulationStageGeneric.OuterSingleton,
               &Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraSimulationStageGeneric.OuterSingleton;
}

// NewProp_bEnabled_SetBit @ 1493c2f40

void __cdecl
Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::NewProp_bEnabled_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x38) = *(uint *)((longlong)param_1 + 0x38) | 1;
  return;
}

// NewProp_bLoopDelayEnabled_SetBit @ 1493c2f50

void __cdecl
Z_Construct_UScriptStruct_FNiagaraEmitterStateData_Statics::NewProp_bLoopDelayEnabled_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x70) = *(uint *)((longlong)param_1 + 0x70) | 1;
  return;
}

// NewProp_bRecalculateDurationEachLoop_SetBit @ 1493c2f60

void __cdecl
Z_Construct_UScriptStruct_FNiagaraEmitterStateData_Statics::
NewProp_bRecalculateDurationEachLoop_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x70) = *(uint *)((longlong)param_1 + 0x70) | 2;
  return;
}

// NewProp_bDelayFirstLoopOnly_SetBit @ 1493c2f70

void __cdecl
Z_Construct_UScriptStruct_FNiagaraEmitterStateData_Statics::NewProp_bDelayFirstLoopOnly_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x70) = *(uint *)((longlong)param_1 + 0x70) | 4;
  return;
}

// NewProp_bRecalculateDelayEachLoop_SetBit @ 1493c2f80

void __cdecl
Z_Construct_UScriptStruct_FNiagaraEmitterStateData_Statics::NewProp_bRecalculateDelayEachLoop_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x70) = *(uint *)((longlong)param_1 + 0x70) | 8;
  return;
}

// NewProp_bEnableDistanceCulling_SetBit @ 1493c2f90

void __cdecl
Z_Construct_UScriptStruct_FNiagaraEmitterStateData_Statics::NewProp_bEnableDistanceCulling_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x70) = *(uint *)((longlong)param_1 + 0x70) | 0x10;
  return;
}

// NewProp_bEnableVisibilityCulling_SetBit @ 1493c2fa0

void __cdecl
Z_Construct_UScriptStruct_FNiagaraEmitterStateData_Statics::NewProp_bEnableVisibilityCulling_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x70) = *(uint *)((longlong)param_1 + 0x70) | 0x20;
  return;
}

// NewProp_bMinDistanceEnabled_SetBit @ 1493c2fb0

void __cdecl
Z_Construct_UScriptStruct_FNiagaraEmitterStateData_Statics::NewProp_bMinDistanceEnabled_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x70) = *(uint *)((longlong)param_1 + 0x70) | 0x40;
  return;
}

// NewProp_bDisablePartialParticleUpdate_SetBit @ 1493c2fc0

void __cdecl
Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::
NewProp_bDisablePartialParticleUpdate_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x8c) = *(uint *)((longlong)param_1 + 0x8c) | 1;
  return;
}

// NewProp_bMaxDistanceEnabled_SetBit @ 1493c2fd0

void __cdecl
Z_Construct_UScriptStruct_FNiagaraEmitterStateData_Statics::NewProp_bMaxDistanceEnabled_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x70) = *(uint *)((longlong)param_1 + 0x70) | 0x80;
  return;
}

// NewProp_bResetAgeOnAwaken_SetBit @ 1493c2fe0

void __cdecl
Z_Construct_UScriptStruct_FNiagaraEmitterStateData_Statics::NewProp_bResetAgeOnAwaken_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x70) = *(uint *)((longlong)param_1 + 0x70) | 0x100;
  return;
}

// NewProp_bParticleIterationStateEnabled_SetBit @ 1493c2ff0

void __cdecl
Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::
NewProp_bParticleIterationStateEnabled_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0xb0) = *(uint *)((longlong)param_1 + 0xb0) | 1;
  return;
}

// NewProp_bGpuDispatchForceLinear_SetBit @ 1493c3000

void __cdecl
Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bGpuDispatchForceLinear_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0xdc) = *(uint *)((longlong)param_1 + 0xdc) | 1;
  return;
}

// NewProp_bOverrideGpuDispatchNumThreads_SetBit @ 1493c3010

void __cdecl
Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::
NewProp_bOverrideGpuDispatchNumThreads_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0xdc) = *(uint *)((longlong)param_1 + 0xdc) | 2;
  return;
}

// NewStructOps @ 1493c3020

void * __cdecl Z_Construct_UScriptStruct_FNiagaraEmitterStateData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x90;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraEmitterStateData,&UE::CoreUObject::Private::Construct<FNiagaraEmitterStateData>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraEmitterStateData>,&UE::CoreUObject::Private::Destruct<FNiagaraEmitterStateData>,&UE::CoreUObject::Private::Copy<FNiagaraEmitterStateData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UNiagaraSystem @ 1493c32d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraSystem(void)

{
  if (Z_Registration_Info_UClass_UNiagaraSystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraSystem.OuterSingleton,
               &Z_Construct_UClass_UNiagaraSystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraSystem.OuterSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraLwcTileUpdateMode @ 1493c3310

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraLwcTileUpdateMode(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraLwcTileUpdateMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraLwcTileUpdateMode.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraLwcTileUpdateMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraLwcTileUpdateMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding @ 1493c3350

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraParameterDataSetBinding.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraParameterDataSetBinding.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraParameterDataSetBinding.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraParameterDataSetBinding.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection @ 1493c33d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraParameterDataSetBindingCollection.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraParameterDataSetBindingCollection.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraParameterDataSetBindingCollection.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraParameterDataSetBindingCollection.
           InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FNiagaraSystemCompiledData @ 1493c3450

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraSystemCompiledData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraSystemCompiledData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraSystemCompiledData.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraSystemCompiledData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraSystemCompiledData.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides @ 1493c34d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraSystemScalabilityOverrides.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraSystemScalabilityOverrides.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraSystemScalabilityOverrides.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraSystemScalabilityOverrides.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewStructOps @ 1493c3550

void * __cdecl Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x180;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraEmitterCompiledData,&UE::CoreUObject::Private::Construct<FNiagaraEmitterCompiledData>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraEmitterCompiledData>,&UE::CoreUObject::Private::Destruct<FNiagaraEmitterCompiledData>,&UE::CoreUObject::Private::Copy<FNiagaraEmitterCompiledData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1493c3590

void * __cdecl Z_Construct_UScriptStruct_FNiagaraParameterDataSetBinding_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraParameterDataSetBinding,&UE::CoreUObject::Private::Construct<FNiagaraParameterDataSetBinding>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraParameterDataSetBinding>,&UE::CoreUObject::Private::Destruct<FNiagaraParameterDataSetBinding>,&UE::CoreUObject::Private::Copy<FNiagaraParameterDataSetBinding>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1493c35d0

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraParameterDataSetBindingCollection_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraParameterDataSetBindingCollection,&UE::CoreUObject::Private::Construct<FNiagaraParameterDataSetBindingCollection>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraParameterDataSetBindingCollection>,&UE::CoreUObject::Private::Destruct<FNiagaraParameterDataSetBindingCollection>,&UE::CoreUObject::Private::Copy<FNiagaraParameterDataSetBindingCollection>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1493c3610

void * __cdecl Z_Construct_UScriptStruct_FNiagaraSystemCompiledData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x240;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraSystemCompiledData,&UE::CoreUObject::Private::Construct<FNiagaraSystemCompiledData>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraSystemCompiledData>,&UE::CoreUObject::Private::Destruct<FNiagaraSystemCompiledData>,&UE::CoreUObject::Private::Copy<FNiagaraSystemCompiledData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1493c3740

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverrides_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraSystemScalabilityOverrides,&UE::CoreUObject::Private::Construct<FNiagaraSystemScalabilityOverrides>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraSystemScalabilityOverrides>,&UE::CoreUObject::Private::Destruct<FNiagaraSystemScalabilityOverrides>,&UE::CoreUObject::Private::Copy<FNiagaraSystemScalabilityOverrides>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// ENiagaraLwcTileUpdateMode_StaticEnum @ 1493c38c0

UEnum * __cdecl ENiagaraLwcTileUpdateMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraLwcTileUpdateMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraLwcTileUpdateMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraLwcTileUpdateMode,(UObject *)pUVar1,
                       L"ENiagaraLwcTileUpdateMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraLwcTileUpdateMode.OuterSingleton;
}

// NewProp_bSupportLargeWorldCoordinates_SetBit @ 1493c3900

void __cdecl
Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bSupportLargeWorldCoordinates_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x58) = *(byte *)((longlong)param_1 + 0x58) | 1;
  return;
}

// NewProp_bOverrideCastShadow_SetBit @ 1493c3910

void __cdecl
Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideCastShadow_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x58) = *(byte *)((longlong)param_1 + 0x58) | 2;
  return;
}

// NewProp_bOverrideReceivesDecals_SetBit @ 1493c3920

void __cdecl
Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideReceivesDecals_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x58) = *(byte *)((longlong)param_1 + 0x58) | 4;
  return;
}

// NewProp_bOverrideRenderCustomDepth_SetBit @ 1493c3930

void __cdecl
Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideRenderCustomDepth_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x58) = *(byte *)((longlong)param_1 + 0x58) | 8;
  return;
}

// NewProp_bOverrideCustomDepthStencilValue_SetBit @ 1493c3940

void __cdecl
Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideCustomDepthStencilValue_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x58) = *(byte *)((longlong)param_1 + 0x58) | 0x10;
  return;
}

// NewProp_bOverrideCustomDepthStencilWriteMask_SetBit @ 1493c3950

void __cdecl
Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideCustomDepthStencilWriteMask_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x58) = *(byte *)((longlong)param_1 + 0x58) | 0x20;
  return;
}

// NewProp_bOverrideTranslucencySortPriority_SetBit @ 1493c3960

void __cdecl
Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideTranslucencySortPriority_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x58) = *(byte *)((longlong)param_1 + 0x58) | 0x40;
  return;
}

// NewProp_bOverrideTranslucencySortDistanceOffset_SetBit @ 1493c3970

void __cdecl
Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideTranslucencySortDistanceOffset_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x58) = *(byte *)((longlong)param_1 + 0x58) | 0x80;
  return;
}

// NewProp_bCastShadow_SetBit @ 1493c3980

void __cdecl Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bCastShadow_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x59) = *(byte *)((longlong)param_1 + 0x59) | 1;
  return;
}

// NewProp_bReceivesDecals_SetBit @ 1493c3990

void __cdecl
Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bReceivesDecals_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x59) = *(byte *)((longlong)param_1 + 0x59) | 2;
  return;
}

// NewProp_bRenderCustomDepth_SetBit @ 1493c39a0

void __cdecl
Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bRenderCustomDepth_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x59) = *(byte *)((longlong)param_1 + 0x59) | 4;
  return;
}

// NewProp_bInitialOwnerVelocityFromActor_SetBit @ 1493c39b0

void __cdecl
Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bInitialOwnerVelocityFromActor_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x59) = *(byte *)((longlong)param_1 + 0x59) | 8;
  return;
}

// NewProp_bDumpDebugSystemInfo_SetBit @ 1493c39c0

void __cdecl
Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDumpDebugSystemInfo_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x6c) = *(byte *)((longlong)param_1 + 0x6c) | 1;
  return;
}

// NewProp_bDumpDebugEmitterInfo_SetBit @ 1493c39d0

void __cdecl
Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDumpDebugEmitterInfo_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x6c) = *(byte *)((longlong)param_1 + 0x6c) | 2;
  return;
}

// NewProp_bRequireCurrentFrameData_SetBit @ 1493c39e0

void __cdecl
Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bRequireCurrentFrameData_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x6c) = *(byte *)((longlong)param_1 + 0x6c) | 8;
  return;
}

// NewProp_bOverrideScalabilitySettings_SetBit @ 1493c39f0

void __cdecl
Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideScalabilitySettings_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x6c) = *(byte *)((longlong)param_1 + 0x6c) | 0x10;
  return;
}

// NewProp_bFixedBounds_SetBit @ 1493c3a00

void __cdecl Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bFixedBounds_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x70) = *(uint *)((longlong)param_1 + 0x70) | 1;
  return;
}

// NewProp_bOverrideAllowCullingForLocalPlayers_SetBit @ 1493c3a10

void __cdecl
Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bOverrideAllowCullingForLocalPlayers_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x80) = *(uint *)((longlong)param_1 + 0x80) | 1;
  return;
}

// NewProp_bAllowCullingForLocalPlayersOverride_SetBit @ 1493c3a20

void __cdecl
Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bAllowCullingForLocalPlayersOverride_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x80) = *(uint *)((longlong)param_1 + 0x80) | 2;
  return;
}

// NewProp_bUseInitialStreamingBounds_SetBit @ 1493c3a30

void __cdecl
Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bUseInitialStreamingBounds_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x458) = 1;
  return;
}

// NewProp_bNeedsGPUContextInitForDataInterfaces_SetBit @ 1493c3a40

void __cdecl
Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bNeedsGPUContextInitForDataInterfaces_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x498) = 1;
  return;
}

// NewProp_bDeterminism_SetBit @ 1493c3a50

void __cdecl Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bDeterminism_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x499) = 1;
  return;
}

// NewProp_bFixedTickDelta_SetBit @ 1493c3a60

void __cdecl
Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bFixedTickDelta_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x49a) = 1;
  return;
}

// NewProp_bAllowSystemStateFastPath_SetBit @ 1493c3a70

void __cdecl
Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bAllowSystemStateFastPath_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x5d0) = *(uint *)((longlong)param_1 + 0x5d0) | 0x40;
  return;
}

// NewProp_bSystemStateFastPathEnabled_SetBit @ 1493c3a80

void __cdecl
Z_Construct_UClass_UNiagaraSystem_Statics::NewProp_bSystemStateFastPathEnabled_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x5d0) = *(uint *)((longlong)param_1 + 0x5d0) | 0x80;
  return;
}

// NewStructOps @ 1493c3cb0

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraSimStageExecutionLoopEditorData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraSimStageExecutionLoopEditorData,&UE::CoreUObject::Private::Construct<FNiagaraSimStageExecutionLoopEditorData>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraSimStageExecutionLoopEditorData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UNiagaraSystem_NoRegister @ 1493c3cf0

UClass * __cdecl Z_Construct_UClass_UNiagaraSystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraSystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraSystem",
               &Z_Registration_Info_UClass_UNiagaraSystem.InnerSingleton,
               UNiagaraSystem::StaticRegisterNativesUNiagaraSystem,0x5f8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraSystem>,
               InternalVTableHelperCtorCaller<UNiagaraSystem>,local_res8,UFXSystemAsset::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraSystem.InnerSingleton;
}

// NewStructOps @ 1493c3eb0

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraSimStageExecutionLoopData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraSimStageExecutionLoopData,&UE::CoreUObject::Private::Construct<FNiagaraSimStageExecutionLoopData>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraSimStageExecutionLoopData>,&UE::CoreUObject::Private::Destruct<FNiagaraSimStageExecutionLoopData>,&UE::CoreUObject::Private::Copy<FNiagaraSimStageExecutionLoopData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UNiagaraSpriteRendererProperties @ 1493c3ef0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraSpriteRendererProperties(void)

{
  if (Z_Registration_Info_UClass_UNiagaraSpriteRendererProperties.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraSpriteRendererProperties.OuterSingleton,
               &Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraSpriteRendererProperties.OuterSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraRendererPixelCoverageMode @ 1493c3f30

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraRendererPixelCoverageMode(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraRendererPixelCoverageMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraRendererPixelCoverageMode.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraRendererPixelCoverageMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraRendererPixelCoverageMode.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraSpriteAlignment @ 1493c3f70

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraSpriteAlignment(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraSpriteAlignment.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraSpriteAlignment.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraSpriteAlignment_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraSpriteAlignment.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraSpriteFacingMode @ 1493c3fb0

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraSpriteFacingMode(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraSpriteFacingMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraSpriteFacingMode.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraSpriteFacingMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraSpriteFacingMode.InnerSingleton;
}

// ENiagaraSpriteAlignment_StaticEnum @ 1493c3ff0

UEnum * __cdecl ENiagaraSpriteAlignment_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraSpriteAlignment.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraSpriteAlignment.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraSpriteAlignment,(UObject *)pUVar1,
                       L"ENiagaraSpriteAlignment");
  }
  return Z_Registration_Info_UEnum_ENiagaraSpriteAlignment.OuterSingleton;
}

// ENiagaraSpriteFacingMode_StaticEnum @ 1493c4030

UEnum * __cdecl ENiagaraSpriteFacingMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraSpriteFacingMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraSpriteFacingMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraSpriteFacingMode,(UObject *)pUVar1,
                       L"ENiagaraSpriteFacingMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraSpriteFacingMode.OuterSingleton;
}

// ENiagaraRendererPixelCoverageMode_StaticEnum @ 1493c4070

UEnum * __cdecl ENiagaraRendererPixelCoverageMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraRendererPixelCoverageMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraRendererPixelCoverageMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraRendererPixelCoverageMode,(UObject *)pUVar1
                       ,L"ENiagaraRendererPixelCoverageMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraRendererPixelCoverageMode.OuterSingleton;
}

// NewProp_bSubImageBlend_SetBit @ 1493c40f0

void __cdecl
Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bSubImageBlend_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xf0) = *(byte *)((longlong)param_1 + 0xf0) | 1;
  return;
}

// NewProp_bRemoveHMDRollInVR_SetBit @ 1493c4100

void __cdecl
Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bRemoveHMDRollInVR_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xf0) = *(byte *)((longlong)param_1 + 0xf0) | 2;
  return;
}

// NewProp_bSortOnlyWhenTranslucent_SetBit @ 1493c4110

void __cdecl
Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bSortOnlyWhenTranslucent_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xf0) = *(byte *)((longlong)param_1 + 0xf0) | 4;
  return;
}

// NewProp_bEnableCameraDistanceCulling_SetBit @ 1493c4120

void __cdecl
Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::
NewProp_bEnableCameraDistanceCulling_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0xf0) = *(byte *)((longlong)param_1 + 0xf0) | 8;
  return;
}

// NewProp_bCastShadows_SetBit @ 1493c4130

void __cdecl
Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics::NewProp_bCastShadows_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xf0) = *(byte *)((longlong)param_1 + 0xf0) | 0x10;
  return;
}

// CastChecked<UNiagaraDataInterfaceBase,UObject> @ 1493c4830

UNiagaraDataInterfaceBase * __cdecl CastChecked<UNiagaraDataInterfaceBase,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDataInterfaceBase>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UNiagaraDataInterfaceBase_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UNiagaraDataInterfaceBase *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceBase>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UNiagaraSpriteRendererProperties,UObject> @ 1493c48f0

UNiagaraSpriteRendererProperties * __cdecl
CastChecked<UNiagaraSpriteRendererProperties,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UNiagaraSpriteRendererProperties>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraSpriteRendererProperties::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UNiagaraSpriteRendererProperties *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraSpriteRendererProperties>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// ConstructItems<TSoftObjectPtr<UNiagaraSystem>,TSoftObjectPtr<UNiagaraSystem>,int> @ 1493c4c40

void __cdecl
ConstructItems<TSoftObjectPtr<UNiagaraSystem>,TSoftObjectPtr<UNiagaraSystem>,int>
          (void *param_1,TSoftObjectPtr<UNiagaraSystem> *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      *(undefined8 *)(lVar1 + (longlong)param_2) = *(undefined8 *)&param_2->SoftObjectPtr;
      FSoftObjectPath::FSoftObjectPath
                ((FSoftObjectPath *)(lVar1 + 8 + (longlong)param_2),
                 (FSoftObjectPath *)&(param_2->SoftObjectPtr).field_0x8);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>,TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>,int> @ 1493c4ca0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
ConstructItems<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>,TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>,int>
          (void *param_1,TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick> *param_2,
          int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      *(undefined8 *)(lVar1 + (longlong)param_2) = *(undefined8 *)param_2;
      FNiagaraGPUSystemTick::FNiagaraGPUSystemTick
                ((FNiagaraGPUSystemTick *)(lVar1 + 8 + (longlong)param_2),
                 (FNiagaraGPUSystemTick *)&param_2->field_0x8);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FNiagaraParameterDataSetBindingCollection,FNiagaraParameterDataSetBindingCollection,int> @ 1493c4d00

void __cdecl
ConstructItems<FNiagaraParameterDataSetBindingCollection,FNiagaraParameterDataSetBindingCollection,int>
          (void *param_1,FNiagaraParameterDataSetBindingCollection *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  void *_Src_00;
  int *piVar3;
  int *piVar4;
  longlong lVar5;
  
  if (param_3 != 0) {
    piVar3 = (int *)((longlong)param_1 + 0xc);
    piVar4 = &(param_2->FloatOffsets).ArrayNum;
    lVar5 = (longlong)param_1 + (-8 - (longlong)param_2);
    do {
      *(undefined8 *)((longlong)piVar4 + lVar5) = 0;
      pFVar1 = (ForAnyElementType *)((longlong)piVar4 + lVar5);
      iVar2 = *piVar4;
      _Src = (((TArray<FNiagaraParameterDataSetBinding,TSizedDefaultAllocator<32>_> *)(piVar4 + -2))
             ->AllocatorInstance).Data;
      piVar3[-1] = iVar2;
      if (iVar2 == 0) {
        *piVar3 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,iVar2,0,pFVar1,iVar2,piVar3);
        memcpy(pFVar1->Data,_Src,(longlong)iVar2 << 3);
      }
      piVar3[1] = 0;
      piVar3[2] = 0;
      iVar2 = piVar4[4];
      _Src_00 = *(void **)(piVar4 + 2);
      piVar3[3] = iVar2;
      if (iVar2 == 0) {
        piVar3[4] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,iVar2,0,(ForAnyElementType *)(piVar3 + 1),iVar2,piVar3 + 4);
        memcpy(((ForAnyElementType *)(piVar3 + 1))->Data,_Src_00,(longlong)iVar2 << 3);
      }
      piVar3 = piVar3 + 8;
      piVar4 = piVar4 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FNiagaraSystemScalabilityOverride,FNiagaraSystemScalabilityOverride,int> @ 1493c4e40

void __cdecl
ConstructItems<FNiagaraSystemScalabilityOverride,FNiagaraSystemScalabilityOverride,int>
          (void *param_1,FNiagaraSystemScalabilityOverride *param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  if (param_3 != 0) {
    puVar2 = (uint *)&param_2->field_0x98;
    puVar3 = (uint *)((longlong)param_1 + 0x98);
    do {
      FNiagaraSystemScalabilitySettings::FNiagaraSystemScalabilitySettings
                ((FNiagaraSystemScalabilitySettings *)
                 ((longlong)param_1 + (-0x98 - (longlong)param_2) + (longlong)puVar2),
                 (FNiagaraSystemScalabilitySettings *)(puVar2 + -0x26));
      uVar1 = (*puVar3 ^ *puVar2) & 1 ^ *puVar3;
      *puVar3 = uVar1;
      uVar1 = (uVar1 ^ *puVar2) & 2 ^ uVar1;
      *puVar3 = uVar1;
      uVar1 = (uVar1 ^ *puVar2) & 4 ^ uVar1;
      *puVar3 = uVar1;
      uVar1 = (uVar1 ^ *puVar2) & 8 ^ uVar1;
      *puVar3 = uVar1;
      uVar1 = (uVar1 ^ *puVar2) & 0x10 ^ uVar1;
      *puVar3 = uVar1;
      *puVar3 = (uVar1 ^ *puVar2) & 0x20 ^ uVar1;
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 0x28;
      puVar3 = puVar3 + 0x28;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TRefCountPtr<FRHIUniformBuffer>,TRefCountPtr<FRHIUniformBuffer>,int> @ 1493c4f40

void __cdecl
ConstructItems<TRefCountPtr<FRHIUniformBuffer>,TRefCountPtr<FRHIUniformBuffer>,int>
          (void *param_1,TRefCountPtr<FRHIUniformBuffer> *param_2,int param_3)

{
  FRHIResource *this;
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = 0;
      this = *(FRHIResource **)(lVar1 + (longlong)param_1);
      *(FRHIResource **)param_1 = this;
      if (this != (FRHIResource *)0x0) {
        FRHIResource::AddRef(this);
      }
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FNiagaraDataSetAccessor<enum_ENiagaraExecutionState>,int> @ 1493c4fb0

void __cdecl
DefaultConstructItems<FNiagaraDataSetAccessor<enum_ENiagaraExecutionState>,int>
          (void *param_1,int param_2)

{
  if (param_2 != 0) {
    memset(param_1,-1,(ulonglong)(uint)param_2 << 2);
    return;
  }
  return;
}

// DefaultConstructItems<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>,int> @ 1493c4fd0

void __cdecl
DefaultConstructItems<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *(undefined4 *)((longlong)puVar1 + 0x52) = 0;
      *(undefined2 *)((longlong)puVar1 + 0x56) = 0;
      puVar1[0xc] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1[8] = 0;
      puVar1[9] = 0;
      *(undefined2 *)(puVar1 + 10) = 0;
      puVar1[0xb] = 0;
      param_2 = param_2 + -1;
      puVar1 = puVar1 + 0xe;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TTuple<TWeakObjectPtr<UNiagaraDataInterface,FWeakObjectPtr>,int>,int> @ 1493c5040

void __cdecl
DefaultConstructItems<TTuple<TWeakObjectPtr<UNiagaraDataInterface,FWeakObjectPtr>,int>,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 8) = 0;
    param_1 = (void *)((longlong)param_1 + 0xc);
  }
  return;
}

// DefaultConstructItems<FNiagaraEmitterExecutionIndex,int> @ 1493c5070

void __cdecl DefaultConstructItems<FNiagaraEmitterExecutionIndex,int>(void *param_1,int param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)(uint)param_2 << 2);
    return;
  }
  return;
}

// DefaultConstructItems<FNiagaraEmitterParameters,int> @ 1493c5090

void __cdecl DefaultConstructItems<FNiagaraEmitterParameters,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0x3f800000;
      puVar1[1] = 0;
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FNiagaraParameterStoreToDataSetBinding,int> @ 1493c50c0

void __cdecl
DefaultConstructItems<FNiagaraParameterStoreToDataSetBinding,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined8 *)(lVar1 + 0x1c) = 0;
      lVar1 = lVar1 + 0x30;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FNiagaraTypeDefinition,int> @ 1493c5100

void __cdecl DefaultConstructItems<FNiagaraTypeDefinition,int>(void *param_1,int param_2)

{
  undefined1 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined1 *)((longlong)param_1 + 10);
    do {
      *(undefined8 *)(puVar1 + -10) = 0;
      *(undefined2 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      *(undefined8 *)(puVar1 + 2) = 0xffffffffffffffff;
      *(undefined4 *)(puVar1 + 10) = 0xffffffff;
      puVar1 = puVar1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FVersionedNiagaraEmitter,int> @ 1493c5140

void __cdecl DefaultConstructItems<FVersionedNiagaraEmitter,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      lVar1 = lVar1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>,int> @ 1493c5170

void __cdecl
DestructItems<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>,int>
          (TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick> *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x8;
    do {
      DestructItems<TRefCountPtr<FRHIUniformBuffer>,int>
                ((TRefCountPtr<FRHIUniformBuffer> *)*puVar1,*(int *)(puVar1 + 1));
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 0xe;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNiagaraParameterDataSetBindingCollection,int> @ 1493c51c0

void __cdecl
DestructItems<FNiagaraParameterDataSetBindingCollection,int>
          (FNiagaraParameterDataSetBindingCollection *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Int32Offsets).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->FloatOffsets).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FNiagaraParameterStoreToDataSetBinding,int> @ 1493c5210

void __cdecl
DestructItems<FNiagaraParameterStoreToDataSetBinding,int>
          (FNiagaraParameterStoreToDataSetBinding *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FNiagaraParameterStoreToDataSetBinding::FDataOffsets,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Int32Offsets;
    do {
      pFVar1 = (((TArray<FNiagaraParameterStoreToDataSetBinding::FHalfDataOffsets,TSizedDefaultAllocator<32>_>
                  *)(pTVar2 + 1))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FNiagaraParameterStoreToDataSetBinding *)(pTVar2 + -1))->FloatOffsets).
               AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNiagaraPerInstanceDIFuncInfo,int> @ 1493c5270

void __cdecl
DestructItems<FNiagaraPerInstanceDIFuncInfo,int>(FNiagaraPerInstanceDIFuncInfo *param_1,int param_2)

{
  void *pvVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
    pvVar1 = *(void **)&(param_1->Function).field_0x8;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FNiagaraSystemScalabilityOverride,int> @ 1493c52c0

void __cdecl
DestructItems<FNiagaraSystemScalabilityOverride,int>
          (FNiagaraSystemScalabilityOverride *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if ((void *)param_1->_padding_ != (void *)0x0) {
      FMemory::Free((void *)param_1->_padding_);
    }
    if ((void *)param_1->_padding_ != (void *)0x0) {
      FMemory::Free((void *)param_1->_padding_);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TArray<FNiagaraDataSetAccessor<FNiagaraSpawnInfo>,TSizedDefaultAllocator<32>_>,int> @ 1493c5310

void __cdecl
DestructItems<TArray<FNiagaraDataSetAccessor<FNiagaraSpawnInfo>,TSizedDefaultAllocator<32>_>,int>
          (TArray<FNiagaraDataSetAccessor<FNiagaraSpawnInfo>,TSizedDefaultAllocator<32>_> *param_1,
          int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TArray<FNiagaraParameterStoreToDataSetBinding,TSizedDefaultAllocator<32>_>,int> @ 1493c5350

void __cdecl
DestructItems<TArray<FNiagaraParameterStoreToDataSetBinding,TSizedDefaultAllocator<32>_>,int>
          (TArray<FNiagaraParameterStoreToDataSetBinding,TSizedDefaultAllocator<32>_> *param_1,
          int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    DestructItems<FNiagaraParameterStoreToDataSetBinding,int>
              ((FNiagaraParameterStoreToDataSetBinding *)(param_1->AllocatorInstance).Data,
               param_1->ArrayNum);
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TSharedPtr<FNiagaraScriptDebuggerInfo,1>,int> @ 1493c53a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
DestructItems<TSharedPtr<FNiagaraScriptDebuggerInfo,1>,int>
          (TSharedPtr<FNiagaraScriptDebuggerInfo,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedRef<FNiagaraEmitterCompiledData_const_,1>,int> @ 1493c53e0

void __cdecl
DestructItems<TSharedRef<FNiagaraEmitterCompiledData_const_,1>,int>
          (TSharedRef<FNiagaraEmitterCompiledData_const_,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedRef<FNiagaraEmitterInstance,1>,int> @ 1493c5420

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
DestructItems<TSharedRef<FNiagaraEmitterInstance,1>,int>
          (TSharedRef<FNiagaraEmitterInstance,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TUniquePtr<FNiagaraTypeDefinition,TDefaultDelete<FNiagaraTypeDefinition>_>,int> @ 1493c5460

void __cdecl
DestructItems<TUniquePtr<FNiagaraTypeDefinition,TDefaultDelete<FNiagaraTypeDefinition>_>,int>
          (TUniquePtr<FNiagaraTypeDefinition,TDefaultDelete<FNiagaraTypeDefinition>_> *param_1,
          int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    operator_delete(param_1->Ptr,0x18);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FNiagaraGPUSystemTick,int> @ 1493c54a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl DestructItems<FNiagaraGPUSystemTick,int>(FNiagaraGPUSystemTick *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    DestructItems<TRefCountPtr<FRHIUniformBuffer>,int>
              ((TRefCountPtr<FRHIUniformBuffer> *)
               (param_1->ExternalUnformBuffers_RT).AllocatorInstance.Data,
               (param_1->ExternalUnformBuffers_RT).ArrayNum);
    pFVar1 = (param_1->ExternalUnformBuffers_RT).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// Enqueue<TRenderCommandTag<`FNiagaraSystemGpuComputeProxy::AddToRenderThread'::__l2::TSTR_AddProxyToComputeDispatchInterface88>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1493c5b30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FNiagaraSystemGpuComputeProxy::AddToRenderThread_::__l2::TSTR_AddProxyToComputeDispatchInterface88>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FNiagaraSystemGpuComputeProxy::AddToRenderThread'::__l2::TSTR_AddProxyToComputeDispatchInterface88>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_1493c5c81;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_1493c5e75;
  }
LAB_1493c5c81:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_1493c5d5f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1493c5d5f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_1493c5e75:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FNiagaraSystemGpuComputeProxy::ClearTicksFromRenderThread'::__l2::TSTR_ClearTicksFromProxy157>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1493c5eb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FNiagaraSystemGpuComputeProxy::ClearTicksFromRenderThread_::__l2::TSTR_ClearTicksFromProxy157>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FNiagaraSystemGpuComputeProxy::ClearTicksFromRenderThread'::__l2::TSTR_ClearTicksFromProxy157>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_1493c6001;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_1493c61f5;
  }
LAB_1493c6001:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_1493c60df:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1493c60df;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_1493c61f5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FNiagaraSystemInstance::GenerateAndSubmitGPUTick'::__l5::TSTR_FNiagaraGiveSystemInstanceTickToRT2896>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1493c6230

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FNiagaraSystemInstance::GenerateAndSubmitGPUTick_::__l5::TSTR_FNiagaraGiveSystemInstanceTickToRT2896>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FNiagaraSystemInstance::GenerateAndSubmitGPUTick'::__l5::TSTR_FNiagaraGiveSystemInstanceTickToRT2896>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_1493c6381;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_1493c6575;
  }
LAB_1493c6381:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_1493c645f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1493c645f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_1493c6575:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FNiagaraSystemInstanceTickConcurrentTask::DoTask'::__l18::TSTR_FNiagaraGiveSystemInstanceTickToRT420>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1493c65b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FNiagaraSystemInstanceTickConcurrentTask::DoTask_::__l18::TSTR_FNiagaraGiveSystemInstanceTickToRT420>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FNiagaraSystemInstanceTickConcurrentTask::DoTask'::__l18::TSTR_FNiagaraGiveSystemInstanceTickToRT420>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_1493c6701;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_1493c68f5;
  }
LAB_1493c6701:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_1493c67df:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1493c67df;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_1493c68f5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FNiagaraSystemInstanceFinalizeTask::DoTask'::__l28::TSTR_FNiagaraGiveSystemInstanceTickToRT507>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1493c6930

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FNiagaraSystemInstanceFinalizeTask::DoTask_::__l28::TSTR_FNiagaraGiveSystemInstanceTickToRT507>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FNiagaraSystemInstanceFinalizeTask::DoTask'::__l28::TSTR_FNiagaraGiveSystemInstanceTickToRT507>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_1493c6a81;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_1493c6c75;
  }
LAB_1493c6a81:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_1493c6b5f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1493c6b5f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_1493c6c75:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FNiagaraSystemRenderData::SetRenderingEnabled_GT'::__l12::TSTR_FNiagaraSystemRenderData_SetRenderingEnabled379>_> @ 1493c6cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FRenderCommandDispatcher::
Enqueue<TRenderCommandTag<_FNiagaraSystemRenderData::SetRenderingEnabled_GT_::__l12::TSTR_FNiagaraSystemRenderData_SetRenderingEnabled379>_>
          (FRenderCommandPipe *param_1,TUniqueFunction<void___cdecl(void)> *param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  longlong lVar3;
  bool bVar4;
  FRenderCommandList *this;
  FCommandList *this_00;
  FRenderCommandTag *pFVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 auStack_b8 [48];
  undefined1 local_88 [48];
  byte local_58;
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  this = FRenderCommandList::GetInstanceTLS();
  if (this == (FRenderCommandList *)0x0) {
    if ((GRenderCommandPipeMode == All) && (param_1 != (FRenderCommandPipe *)0x0)) {
      bVar4 = UE::RenderCommandPipe::IsReplaying(param_1);
      if (bVar4) {
        pFVar5 = (FRenderCommandTag *)
                 TRenderCommandTag<`FNiagaraSystemRenderData::SetRenderingEnabled_GT'::__l12::TSTR_FNiagaraSystemRenderData_SetRenderingEnabled379>
                 ::Get();
        FRenderCommandPipe::ExecuteCommand(param_1,param_2,pFVar5);
        return;
      }
      plVar6 = &param_1->_padding_;
      if ((plVar6 == (longlong *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      LOCK();
      bVar4 = (char)*plVar6 == '\0';
      if (bVar4) {
        *(undefined1 *)plVar6 = 1;
      }
      UNLOCK();
      if (!bVar4) {
        UE::FMutex::LockSlow((FMutex *)plVar6);
      }
      if ((param_1->RecordTask).Pimpl.Reference != (FTaskBase *)0x0) {
        pFVar5 = (FRenderCommandTag *)
                 TRenderCommandTag<`FNiagaraSystemRenderData::SetRenderingEnabled_GT'::__l12::TSTR_FNiagaraSystemRenderData_SetRenderingEnabled379>
                 ::Get();
        FRenderCommandPipe::EnqueueAndLaunch(param_1,param_2,pFVar5);
        if (plVar6 == (longlong *)0x0) {
          return;
        }
        LOCK();
        lVar3 = *plVar6;
        *(char *)plVar6 = (char)*plVar6 + -1;
        UNLOCK();
        if ((lVar3 & 2) == 0) {
          return;
        }
        UE::FMutex::WakeWaitingThread((FMutex *)plVar6);
        return;
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        lVar3 = *plVar6;
        *(char *)plVar6 = (char)*plVar6 + -1;
        UNLOCK();
        if ((lVar3 & 2) != 0) {
          UE::FMutex::WakeWaitingThread((FMutex *)plVar6);
        }
      }
    }
    local_48._0_8_ = *(undefined8 *)param_2;
    local_48._40_8_ = *(undefined8 *)&param_2->field_0x28;
    *(undefined8 *)&param_2->field_0x28 = 0;
    local_48._32_8_ = *(undefined8 *)&param_2->field_0x20;
    local_48._16_8_ = *(undefined8 *)&param_2->field_0x10;
    local_48._24_8_ = *(undefined8 *)&param_2->field_0x18;
    if (local_48._0_8_ != 0) {
      *(undefined8 *)param_2 = 0;
    }
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FNiagaraSystemRenderData::SetRenderingEnabled_GT_::__l12::TSTR_FNiagaraSystemRenderData_SetRenderingEnabled379>,_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<_FNiagaraSystemRenderData::SetRenderingEnabled_GT_::__l12::TSTR_FNiagaraSystemRenderData_SetRenderingEnabled379>_>_::__l2::<lambda_1>_>
              ((<lambda_1> *)local_48);
    if (local_48._0_8_ == 0) {
      return;
    }
    puVar2 = local_48;
    plVar6 = (longlong *)local_48._40_8_;
  }
  else {
    this_00 = FRenderCommandList::Get(this,param_1);
    local_88._0_8_ = *(undefined8 *)param_2;
    local_88._40_8_ = *(undefined8 *)&param_2->field_0x28;
    *(undefined8 *)&param_2->field_0x28 = 0;
    local_88._32_8_ = *(undefined8 *)&param_2->field_0x20;
    local_88._16_8_ = *(undefined8 *)&param_2->field_0x10;
    local_88._24_8_ = *(undefined8 *)&param_2->field_0x18;
    if (local_88._0_8_ != 0) {
      *(undefined8 *)param_2 = 0;
    }
    local_58 = 0;
    pFVar5 = (FRenderCommandTag *)
             TRenderCommandTag<`FNiagaraSystemRenderData::SetRenderingEnabled_GT'::__l12::TSTR_FNiagaraSystemRenderData_SetRenderingEnabled379>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_00,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_88,pFVar5);
    uVar8 = (ulonglong)local_58;
    if ((2 < uVar8) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8] !=
        UE::Core::Private::TDestructorCaller<TUniqueFunction<void___cdecl(void)>_>::Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8])(local_88);
      return;
    }
    if (local_88._0_8_ == 0) {
      return;
    }
    puVar2 = local_88;
    plVar6 = (longlong *)local_88._40_8_;
  }
  plVar7 = (longlong *)(puVar2 + 0x10);
  if (plVar6 != (longlong *)0x0) {
    plVar7 = plVar6;
  }
  (**(code **)(*plVar7 + 0x10))();
  return;
}

// Enqueue<TRenderCommandTag<`FNiagaraSystemRenderData::SetRenderingEnabled_GT'::__l12::TSTR_FNiagaraSystemRenderData_SetRenderingEnabled379>,`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FNiagaraSystemRenderData::SetRenderingEnabled_GT'::__l12::TSTR_FNiagaraSystemRenderData_SetRenderingEnabled379>_>'::__l2::<lambda_1>_> @ 1493c6f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FNiagaraSystemRenderData::SetRenderingEnabled_GT_::__l12::TSTR_FNiagaraSystemRenderData_SetRenderingEnabled379>,_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<_FNiagaraSystemRenderData::SetRenderingEnabled_GT_::__l12::TSTR_FNiagaraSystemRenderData_SetRenderingEnabled379>_>_::__l2::<lambda_1>_>
          (<lambda_1> *param_1)

{
  atomic<unsigned_int> *paVar1;
  int *piVar2;
  atomic<unsigned_int> aVar3;
  TStatIdData *pTVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined2 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  bool bVar15;
  uint uVar16;
  FRenderCommandTag *pFVar17;
  FTaskBase *this;
  undefined8 uVar18;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  code **ppcVar19;
  longlong *plVar20;
  FTaskBase *this_02;
  FName FVar21;
  FNameEntryId FVar22;
  FNameEntryId FVar23;
  undefined1 auStackY_d8 [32];
  EExtendedTaskPriority local_a8;
  ETaskPriority local_a7 [3];
  FColor_u_0 local_a4;
  FName local_a0;
  FName local_98;
  LARGE_INTEGER local_88;
  FStatMessage local_80;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pFVar17 = (FRenderCommandTag *)
            TRenderCommandTag<`FNiagaraSystemRenderData::SetRenderingEnabled_GT'::__l12::TSTR_FNiagaraSystemRenderData_SetRenderingEnabled379>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar17->SpecId,pFVar17->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar17->SpecId);
  }
  bVar15 = IsInRenderingThread();
  if ((!bVar15) && ((GIsThreadedRendering != false || (bVar15 = IsInGameThread(), !bVar15)))) {
    if ((GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) &&
       ((bVar15 = IsInGameThread(), bVar15 &&
        (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<2708370973442179152>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                             ,0x50,
                             "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                            ), bVar15)))) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (GRenderCommandPipeMode == None) {
      this = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x120,0x10);
      this_02 = (FTaskBase *)0x0;
      if (this != (FTaskBase *)0x0) {
        FBaseGraphTask::FBaseGraphTask
                  ((FBaseGraphTask *)this,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)0x0);
        this->_padding_ =
             (longlong)
             &TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FNiagaraSystemRenderData::SetRenderingEnabled_GT'::`12'::TSTR_FNiagaraSystemRenderData_SetRenderingEnabled379>_>'::`2'::<lambda_1>_>_>
              ::_vftable_;
        this_02 = this;
      }
      this_02[1]._padding_ = (longlong)pFVar17;
      this_02[1]._padding_ = *(longlong *)&param_1->Function;
      uVar10 = (param_1->Function).field_0x2c;
      uVar11 = (param_1->Function).field_0x2d;
      uVar12 = *(undefined2 *)&(param_1->Function).field_0x2e;
      this_02[1].StateChangeEvent =
           (TEventCount<unsigned_int>)*(undefined4 *)&(param_1->Function).field_0x28;
      this_02[1].ExtendedPriority = uVar10;
      this_02[1].TaskTriggered = (atomic<bool>)uVar11;
      this_02[1]._padding_ = uVar12;
      *(undefined8 *)&(param_1->Function).field_0x28 = 0;
      uVar13 = *(undefined4 *)&(param_1->Function).field_0x18;
      uVar14 = *(undefined4 *)&(param_1->Function).field_0x1c;
      this_02[1]._padding_ = *(longlong *)&(param_1->Function).field_0x10;
      this_02[1].RefCount = (atomic<unsigned_int>)uVar13;
      this_02[1].NumLocks = (atomic<unsigned_int>)uVar14;
      this_02[1].Pipe = *(FPipe **)&(param_1->Function).field_0x20;
      if (this_02[1]._padding_ != 0) {
        *(undefined8 *)&param_1->Function = 0;
      }
      if (((GIsThreadedRendering != false) &&
          (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1))
         && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                                 ,0x21d,L""), bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      UE::Tasks::Private::TranslatePriority
                ((Type)ENamedThreads::FRenderThreadStatics::RenderThread,local_a7,&local_a8);
      UE::Tasks::Private::FTaskBase::Init(this_02,L"GraphTask",local_a7[0],local_a8,None);
      if (this_02 == (FTaskBase *)0x0) {
        UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x120);
      }
      else {
        LOCK();
        this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
        UNLOCK();
        UE::Tasks::Private::FTaskBase::TryLaunch(this_02,0x120);
        LOCK();
        paVar1 = &this_02->RefCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<unsigned_int>)0x1) {
          (**(code **)this_02->_padding_)(this_02,1);
        }
      }
    }
    else {
      local_68[0] = (code *)0x0;
      local_40 = FMemory::Malloc(0x40,0x10);
      *local_40 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FNiagaraSystemRenderData::SetRenderingEnabled_GT'::`12'::TSTR_FNiagaraSystemRenderData_SetRenderingEnabled379>_>'::`2'::<lambda_1>,1,1>
                           ::_vftable_;
      ppcVar19 = local_40 + 2;
      *ppcVar19 = *(code **)&param_1->Function;
      local_40[7] = *(code **)&(param_1->Function).field_0x28;
      *(undefined8 *)&(param_1->Function).field_0x28 = 0;
      pcVar6 = *(code **)&(param_1->Function).field_0x18;
      local_40[4] = *(code **)&(param_1->Function).field_0x10;
      local_40[5] = pcVar6;
      local_40[6] = *(code **)&(param_1->Function).field_0x20;
      if (*ppcVar19 != (code *)0x0) {
        *(undefined8 *)&param_1->Function = 0;
      }
      if (ppcVar19 != (code **)0x0) {
        local_68[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FNiagaraSystemRenderData::SetRenderingEnabled_GT'::__l12::TSTR_FNiagaraSystemRenderData_SetRenderingEnabled379>_>'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                      ::Call;
      }
      EnqueueAndLaunch(&Instance,
                       (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_68,pFVar17
                      );
      if (local_68[0] != (code *)0x0) {
        ppcVar19 = local_68 + 2;
        if (local_40 != (code **)0x0) {
          ppcVar19 = local_40;
        }
        (**(code **)(*ppcVar19 + 0x10))();
      }
    }
    goto LAB_1493c73bb;
  }
  pTVar4 = (pFVar17->StatId).StatIdPtr;
  FVar23.Value = 0;
  bVar15 = false;
  bVar9 = false;
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  FVar21 = *(FName *)&pTVar4->Name;
  FVar22 = FVar21.ComparisonIndex.Value;
  uVar16 = FVar21.Number;
  if ((FVar22.Value == 0) && (uVar16 == 0)) {
LAB_1493c72b7:
    bVar7 = false;
    FVar21 = local_98;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_a4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_a4._s_0,(pTVar4->StatDescriptionAnsi).Ptr);
      bVar15 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a0.ComparisonIndex.Value = FVar22.Value;
        local_a0.Number = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_a0,(pTVar4->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar15 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1493c72b7;
    local_a0.ComparisonIndex.Value = FVar22.Value;
    local_a0.Number = uVar16;
    local_98 = FVar21;
    FThreadStats::AddMessage(FVar21,CycleScopeStart);
    bVar7 = true;
    FVar23.Value = local_98.ComparisonIndex.Value;
  }
  GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)&param_1->Function);
  plVar5 = *(longlong **)&(param_1->Function).field_0x28;
  pcVar6 = *(code **)&param_1->Function;
  plVar20 = (longlong *)&(param_1->Function).field_0x10;
  if (plVar5 != (longlong *)0x0) {
    plVar20 = plVar5;
  }
  uVar18 = (**(code **)(*plVar20 + 8))();
  (*pcVar6)(uVar18);
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar7) && (FVar21 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_80.NameAndInfo.Number = FVar21.Number & 0xffff6fff | 0x6000;
      local_80.NameAndInfo.Index.Value = FVar23.Value;
      QueryPerformanceCounter(&local_88);
      local_80.StatData.Pad[4] = '\0';
      local_80.StatData.Pad[5] = '\0';
      local_80.StatData.Pad[6] = '\0';
      local_80.StatData.Pad[7] = '\0';
      local_80.StatData.Pad[0] = local_88.s.LowPart._0_1_;
      local_80.StatData.Pad[1] = local_88.s.LowPart._1_1_;
      local_80.StatData.Pad[2] = local_88.s.LowPart._2_1_;
      local_80.StatData.Pad[3] = local_88.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_80);
      piVar2 = &this_00->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
LAB_1493c73bb:
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FNiagaraSystemStaticBuffers::Finalize'::__l12::TSTR_InitBuffers19>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1493c7410

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FNiagaraSystemStaticBuffers::Finalize_::__l12::TSTR_InitBuffers19>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FNiagaraSystemStaticBuffers::Finalize'::__l12::TSTR_InitBuffers19>::
            Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_1493c7561;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_1493c7755;
  }
LAB_1493c7561:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_1493c763f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1493c763f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_1493c7755:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FNiagaraSystemRenderData::RecacheRenderers'::__l2::TSTR_NiagaraRecacheRenderers333>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1493c7790

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FNiagaraSystemRenderData::RecacheRenderers_::__l2::TSTR_NiagaraRecacheRenderers333>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FNiagaraSystemRenderData::RecacheRenderers'::__l2::TSTR_NiagaraRecacheRenderers333>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_1493c78e1;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_1493c7ad5;
  }
LAB_1493c78e1:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_1493c79bf:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1493c79bf;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_1493c7ad5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FNiagaraSystemGpuComputeProxy::RemoveFromRenderThread'::__l2::TSTR_RemoveFromRenderThread121>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1493c7b10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FNiagaraSystemGpuComputeProxy::RemoveFromRenderThread_::__l2::TSTR_RemoveFromRenderThread121>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FNiagaraSystemGpuComputeProxy::RemoveFromRenderThread'::__l2::TSTR_RemoveFromRenderThread121>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_1493c7c61;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_1493c7e55;
  }
LAB_1493c7c61:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_1493c7d3f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1493c7d3f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_1493c7e55:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UNiagaraSystem::FStaticBuffersDeletor::operator()'::__l2::TSTR_ScriptSafeDelete335>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1493c7e90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UNiagaraSystem::FStaticBuffersDeletor::operator()_::__l2::TSTR_ScriptSafeDelete335>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UNiagaraSystem::FStaticBuffersDeletor::operator()'::__l2::TSTR_ScriptSafeDelete335>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_1493c7fe1;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_1493c81d5;
  }
LAB_1493c7fe1:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_1493c80bf:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1493c80bf;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_1493c81d5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FNiagaraSystemGpuComputeProxy::FNiagaraSystemGpuComputeProxy'::__l2::TSTR_SetStaticBuffers64>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1493c8210

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FNiagaraSystemGpuComputeProxy::FNiagaraSystemGpuComputeProxy_::__l2::TSTR_SetStaticBuffers64>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FNiagaraSystemGpuComputeProxy::FNiagaraSystemGpuComputeProxy'::__l2::TSTR_SetStaticBuffers64>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_1493c8361;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_1493c8555;
  }
LAB_1493c8361:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_1493c843f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1493c843f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_1493c8555:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FNiagaraSystemRenderData::RecacheRenderers'::__l2::TSTR_SignalFence326>_> @ 1493c8590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FRenderCommandDispatcher::
Enqueue<TRenderCommandTag<_FNiagaraSystemRenderData::RecacheRenderers_::__l2::TSTR_SignalFence326>_>
          (FRenderCommandPipe *param_1,TUniqueFunction<void___cdecl(void)> *param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  longlong lVar3;
  bool bVar4;
  FRenderCommandList *this;
  FCommandList *this_00;
  FRenderCommandTag *pFVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 auStack_b8 [48];
  undefined1 local_88 [48];
  byte local_58;
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  this = FRenderCommandList::GetInstanceTLS();
  if (this == (FRenderCommandList *)0x0) {
    if ((GRenderCommandPipeMode == All) && (param_1 != (FRenderCommandPipe *)0x0)) {
      bVar4 = UE::RenderCommandPipe::IsReplaying(param_1);
      if (bVar4) {
        pFVar5 = (FRenderCommandTag *)
                 TRenderCommandTag<`FNiagaraSystemRenderData::RecacheRenderers'::__l2::TSTR_SignalFence326>
                 ::Get();
        FRenderCommandPipe::ExecuteCommand(param_1,param_2,pFVar5);
        return;
      }
      plVar6 = &param_1->_padding_;
      if ((plVar6 == (longlong *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      LOCK();
      bVar4 = (char)*plVar6 == '\0';
      if (bVar4) {
        *(undefined1 *)plVar6 = 1;
      }
      UNLOCK();
      if (!bVar4) {
        UE::FMutex::LockSlow((FMutex *)plVar6);
      }
      if ((param_1->RecordTask).Pimpl.Reference != (FTaskBase *)0x0) {
        pFVar5 = (FRenderCommandTag *)
                 TRenderCommandTag<`FNiagaraSystemRenderData::RecacheRenderers'::__l2::TSTR_SignalFence326>
                 ::Get();
        FRenderCommandPipe::EnqueueAndLaunch(param_1,param_2,pFVar5);
        if (plVar6 == (longlong *)0x0) {
          return;
        }
        LOCK();
        lVar3 = *plVar6;
        *(char *)plVar6 = (char)*plVar6 + -1;
        UNLOCK();
        if ((lVar3 & 2) == 0) {
          return;
        }
        UE::FMutex::WakeWaitingThread((FMutex *)plVar6);
        return;
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        lVar3 = *plVar6;
        *(char *)plVar6 = (char)*plVar6 + -1;
        UNLOCK();
        if ((lVar3 & 2) != 0) {
          UE::FMutex::WakeWaitingThread((FMutex *)plVar6);
        }
      }
    }
    local_48._0_8_ = *(undefined8 *)param_2;
    local_48._40_8_ = *(undefined8 *)&param_2->field_0x28;
    *(undefined8 *)&param_2->field_0x28 = 0;
    local_48._32_8_ = *(undefined8 *)&param_2->field_0x20;
    local_48._16_8_ = *(undefined8 *)&param_2->field_0x10;
    local_48._24_8_ = *(undefined8 *)&param_2->field_0x18;
    if (local_48._0_8_ != 0) {
      *(undefined8 *)param_2 = 0;
    }
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FNiagaraSystemRenderData::RecacheRenderers_::__l2::TSTR_SignalFence326>,_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<_FNiagaraSystemRenderData::RecacheRenderers_::__l2::TSTR_SignalFence326>_>_::__l2::<lambda_1>_>
              ((<lambda_1> *)local_48);
    if (local_48._0_8_ == 0) {
      return;
    }
    puVar2 = local_48;
    plVar6 = (longlong *)local_48._40_8_;
  }
  else {
    this_00 = FRenderCommandList::Get(this,param_1);
    local_88._0_8_ = *(undefined8 *)param_2;
    local_88._40_8_ = *(undefined8 *)&param_2->field_0x28;
    *(undefined8 *)&param_2->field_0x28 = 0;
    local_88._32_8_ = *(undefined8 *)&param_2->field_0x20;
    local_88._16_8_ = *(undefined8 *)&param_2->field_0x10;
    local_88._24_8_ = *(undefined8 *)&param_2->field_0x18;
    if (local_88._0_8_ != 0) {
      *(undefined8 *)param_2 = 0;
    }
    local_58 = 0;
    pFVar5 = (FRenderCommandTag *)
             TRenderCommandTag<`FNiagaraSystemRenderData::RecacheRenderers'::__l2::TSTR_SignalFence326>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_00,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_88,pFVar5);
    uVar8 = (ulonglong)local_58;
    if ((2 < uVar8) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8] !=
        UE::Core::Private::TDestructorCaller<TUniqueFunction<void___cdecl(void)>_>::Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8])(local_88);
      return;
    }
    if (local_88._0_8_ == 0) {
      return;
    }
    puVar2 = local_88;
    plVar6 = (longlong *)local_88._40_8_;
  }
  plVar7 = (longlong *)(puVar2 + 0x10);
  if (plVar6 != (longlong *)0x0) {
    plVar7 = plVar6;
  }
  (**(code **)(*plVar7 + 0x10))();
  return;
}

// Enqueue<TRenderCommandTag<`FNiagaraSystemRenderData::RecacheRenderers'::__l2::TSTR_SignalFence326>,`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FNiagaraSystemRenderData::RecacheRenderers'::__l2::TSTR_SignalFence326>_>'::__l2::<lambda_1>_> @ 1493c8810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FNiagaraSystemRenderData::RecacheRenderers_::__l2::TSTR_SignalFence326>,_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<_FNiagaraSystemRenderData::RecacheRenderers_::__l2::TSTR_SignalFence326>_>_::__l2::<lambda_1>_>
          (<lambda_1> *param_1)

{
  atomic<unsigned_int> *paVar1;
  int *piVar2;
  atomic<unsigned_int> aVar3;
  TStatIdData *pTVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined2 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  bool bVar15;
  uint uVar16;
  FRenderCommandTag *pFVar17;
  FTaskBase *this;
  undefined8 uVar18;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  code **ppcVar19;
  longlong *plVar20;
  FTaskBase *this_02;
  FName FVar21;
  FNameEntryId FVar22;
  FNameEntryId FVar23;
  undefined1 auStackY_d8 [32];
  EExtendedTaskPriority local_a8;
  ETaskPriority local_a7 [3];
  FColor_u_0 local_a4;
  FName local_a0;
  FName local_98;
  LARGE_INTEGER local_88;
  FStatMessage local_80;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pFVar17 = (FRenderCommandTag *)
            TRenderCommandTag<`FNiagaraSystemRenderData::RecacheRenderers'::__l2::TSTR_SignalFence326>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar17->SpecId,pFVar17->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar17->SpecId);
  }
  bVar15 = IsInRenderingThread();
  if ((!bVar15) && ((GIsThreadedRendering != false || (bVar15 = IsInGameThread(), !bVar15)))) {
    if ((GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) &&
       ((bVar15 = IsInGameThread(), bVar15 &&
        (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<2708370973442179152>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                             ,0x50,
                             "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                            ), bVar15)))) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (GRenderCommandPipeMode == None) {
      this = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x120,0x10);
      this_02 = (FTaskBase *)0x0;
      if (this != (FTaskBase *)0x0) {
        FBaseGraphTask::FBaseGraphTask
                  ((FBaseGraphTask *)this,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)0x0);
        this->_padding_ =
             (longlong)
             &TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FNiagaraSystemRenderData::RecacheRenderers'::`2'::TSTR_SignalFence326>_>'::`2'::<lambda_1>_>_>
              ::_vftable_;
        this_02 = this;
      }
      this_02[1]._padding_ = (longlong)pFVar17;
      this_02[1]._padding_ = *(longlong *)&param_1->Function;
      uVar10 = (param_1->Function).field_0x2c;
      uVar11 = (param_1->Function).field_0x2d;
      uVar12 = *(undefined2 *)&(param_1->Function).field_0x2e;
      this_02[1].StateChangeEvent =
           (TEventCount<unsigned_int>)*(undefined4 *)&(param_1->Function).field_0x28;
      this_02[1].ExtendedPriority = uVar10;
      this_02[1].TaskTriggered = (atomic<bool>)uVar11;
      this_02[1]._padding_ = uVar12;
      *(undefined8 *)&(param_1->Function).field_0x28 = 0;
      uVar13 = *(undefined4 *)&(param_1->Function).field_0x18;
      uVar14 = *(undefined4 *)&(param_1->Function).field_0x1c;
      this_02[1]._padding_ = *(longlong *)&(param_1->Function).field_0x10;
      this_02[1].RefCount = (atomic<unsigned_int>)uVar13;
      this_02[1].NumLocks = (atomic<unsigned_int>)uVar14;
      this_02[1].Pipe = *(FPipe **)&(param_1->Function).field_0x20;
      if (this_02[1]._padding_ != 0) {
        *(undefined8 *)&param_1->Function = 0;
      }
      if (((GIsThreadedRendering != false) &&
          (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1))
         && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                                 ,0x21d,L""), bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      UE::Tasks::Private::TranslatePriority
                ((Type)ENamedThreads::FRenderThreadStatics::RenderThread,local_a7,&local_a8);
      UE::Tasks::Private::FTaskBase::Init(this_02,L"GraphTask",local_a7[0],local_a8,None);
      if (this_02 == (FTaskBase *)0x0) {
        UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x120);
      }
      else {
        LOCK();
        this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
        UNLOCK();
        UE::Tasks::Private::FTaskBase::TryLaunch(this_02,0x120);
        LOCK();
        paVar1 = &this_02->RefCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<unsigned_int>)0x1) {
          (**(code **)this_02->_padding_)(this_02,1);
        }
      }
    }
    else {
      local_68[0] = (code *)0x0;
      local_40 = FMemory::Malloc(0x40,0x10);
      *local_40 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FNiagaraSystemRenderData::RecacheRenderers'::`2'::TSTR_SignalFence326>_>'::`2'::<lambda_1>,1,1>
                           ::_vftable_;
      ppcVar19 = local_40 + 2;
      *ppcVar19 = *(code **)&param_1->Function;
      local_40[7] = *(code **)&(param_1->Function).field_0x28;
      *(undefined8 *)&(param_1->Function).field_0x28 = 0;
      pcVar6 = *(code **)&(param_1->Function).field_0x18;
      local_40[4] = *(code **)&(param_1->Function).field_0x10;
      local_40[5] = pcVar6;
      local_40[6] = *(code **)&(param_1->Function).field_0x20;
      if (*ppcVar19 != (code *)0x0) {
        *(undefined8 *)&param_1->Function = 0;
      }
      if (ppcVar19 != (code **)0x0) {
        local_68[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FNiagaraSystemRenderData::RecacheRenderers'::__l2::TSTR_SignalFence326>_>'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                      ::Call;
      }
      EnqueueAndLaunch(&Instance,
                       (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_68,pFVar17
                      );
      if (local_68[0] != (code *)0x0) {
        ppcVar19 = local_68 + 2;
        if (local_40 != (code **)0x0) {
          ppcVar19 = local_40;
        }
        (**(code **)(*ppcVar19 + 0x10))();
      }
    }
    goto LAB_1493c8c9b;
  }
  pTVar4 = (pFVar17->StatId).StatIdPtr;
  FVar23.Value = 0;
  bVar15 = false;
  bVar9 = false;
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  FVar21 = *(FName *)&pTVar4->Name;
  FVar22 = FVar21.ComparisonIndex.Value;
  uVar16 = FVar21.Number;
  if ((FVar22.Value == 0) && (uVar16 == 0)) {
LAB_1493c8b97:
    bVar7 = false;
    FVar21 = local_98;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_a4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_a4._s_0,(pTVar4->StatDescriptionAnsi).Ptr);
      bVar15 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a0.ComparisonIndex.Value = FVar22.Value;
        local_a0.Number = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_a0,(pTVar4->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar15 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1493c8b97;
    local_a0.ComparisonIndex.Value = FVar22.Value;
    local_a0.Number = uVar16;
    local_98 = FVar21;
    FThreadStats::AddMessage(FVar21,CycleScopeStart);
    bVar7 = true;
    FVar23.Value = local_98.ComparisonIndex.Value;
  }
  GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)&param_1->Function);
  plVar5 = *(longlong **)&(param_1->Function).field_0x28;
  pcVar6 = *(code **)&param_1->Function;
  plVar20 = (longlong *)&(param_1->Function).field_0x10;
  if (plVar5 != (longlong *)0x0) {
    plVar20 = plVar5;
  }
  uVar18 = (**(code **)(*plVar20 + 8))();
  (*pcVar6)(uVar18);
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar7) && (FVar21 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_80.NameAndInfo.Number = FVar21.Number & 0xffff6fff | 0x6000;
      local_80.NameAndInfo.Index.Value = FVar23.Value;
      QueryPerformanceCounter(&local_88);
      local_80.StatData.Pad[4] = '\0';
      local_80.StatData.Pad[5] = '\0';
      local_80.StatData.Pad[6] = '\0';
      local_80.StatData.Pad[7] = '\0';
      local_80.StatData.Pad[0] = local_88.s.LowPart._0_1_;
      local_80.StatData.Pad[1] = local_88.s.LowPart._1_1_;
      local_80.StatData.Pad[2] = local_88.s.LowPart._2_1_;
      local_80.StatData.Pad[3] = local_88.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_80);
      piVar2 = &this_00->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
LAB_1493c8c9b:
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ForEachEnabledRenderer<`FNiagaraSystemRenderData::RecacheRenderers'::__l6::<lambda_1>_> @ 1493c8e50

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
FNiagaraEmitterInstance::
ForEachEnabledRenderer<_FNiagaraSystemRenderData::RecacheRenderers_::__l6::<lambda_1>_>
          (FNiagaraEmitterInstance *this,<lambda_1> *param_1)

{
  int *piVar1;
  longlong *plVar2;
  FNiagaraEmitterInstance *pFVar3;
  FNiagaraSystemRenderData *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  longlong *plVar10;
  undefined8 local_38;
  longlong *local_30;
  int local_28;
  
  (**(code **)(this->_padding_ + 0x78))(this,&local_30);
  if ((local_28 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  plVar10 = local_30;
  do {
    if (plVar10 == local_30 + local_28) {
      return;
    }
    plVar2 = (longlong *)*plVar10;
    if (((plVar2 != (longlong *)0x0) &&
        (cVar8 = (**(code **)(*plVar2 + 0x318))(plVar2), cVar8 != '\0')) &&
       (cVar8 = (**(code **)(*plVar2 + 0x2e8))(plVar2,this->SimTarget), cVar8 != '\0')) {
      local_38 = 0;
      cVar8 = (**(code **)(*plVar2 + 0x310))(plVar2);
      if (cVar8 != '\0') {
        pFVar3 = param_1->EmitterInst->Object;
        if ((pFVar3->ParticleDataSet == (FNiagaraDataSet *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("ParticleDataSet",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraEmitterInstance.h"
                               ,0x39,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((pFVar3->ParticleDataSet->bInitialized != false) &&
           (pFVar3 = param_1->EmitterInst->Object, pFVar3->ExecutionState != Disabled)) {
          pFVar4 = param_1->__this;
          local_38 = (**(code **)(*plVar2 + 0x2b0))
                               (plVar2,pFVar4->FeatureLevel,pFVar3,param_1->Controller);
          if (*(char *)((longlong)plVar2 + 0x5c) != '\x03') {
            pFVar4->bAnyMotionBlurEnabled = true;
          }
          cVar8 = (**(code **)(*plVar2 + 0x348))(plVar2);
          if (cVar8 != '\0') {
            pFVar4->bAnyHeterogeneousVolumesEnabled = true;
          }
        }
      }
      pFVar4 = param_1->__this;
      pFVar5 = (pFVar4->EmitterRenderers_GT).AllocatorInstance.Data;
      if (((pFVar5 <= (FScriptContainerElement *)&local_38) &&
          ((FScriptContainerElement *)&local_38 <
           pFVar5 + (longlong)(pFVar4->EmitterRenderers_GT).ArrayMax * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = (pFVar4->EmitterRenderers_GT).ArrayNum;
      piVar1 = &(pFVar4->EmitterRenderers_GT).ArrayMax;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(pFVar4->EmitterRenderers_GT).AllocatorInstance,piVar1);
      }
      (pFVar4->EmitterRenderers_GT).ArrayNum = iVar9 + 1;
      *(undefined8 *)((pFVar4->EmitterRenderers_GT).AllocatorInstance.Data + (longlong)iVar9 * 8) =
           local_38;
    }
    plVar10 = plVar10 + 1;
  } while( true );
}

// ForEachPlatformSet<`UNiagaraSystem::PostLoad'::__l2::<lambda_1>_> @ 1493c9090

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
UNiagaraSystem::ForEachPlatformSet<_UNiagaraSystem::PostLoad_::__l2::<lambda_1>_>
          (UNiagaraSystem *this,<lambda_1> param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  UNiagaraScript *pUVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  <lambda_1> <Var9;
  bool bVar10;
  UClass *pUVar11;
  FVersionedNiagaraEmitterData *this_00;
  FNiagaraPlatformSet *pFVar12;
  longlong *plVar13;
  FScriptContainerElement *pFVar14;
  FNiagaraPlatformSet *pFVar15;
  FNiagaraEmitterHandle *pFVar16;
  FNiagaraEmitterHandle *this_01;
  FNiagaraEmitterHandle *local_res8;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_48;
  undefined1 local_47 [15];
  
  iVar3 = (this->SystemScalabilityOverrides).Overrides.ArrayNum;
  pFVar12 = (FNiagaraPlatformSet *)
            (this->SystemScalabilityOverrides).Overrides.AllocatorInstance.Data;
  pFVar15 = (FNiagaraPlatformSet *)((longlong)pFVar12 + (longlong)iVar3 * 0xa0);
  while( true ) {
    if ((this->SystemScalabilityOverrides).Overrides.ArrayNum != iVar3) {
      local_res8 = (FNiagaraEmitterHandle *)((ulonglong)local_res8 & 0xffffffffffffff00);
      `TCheckedPointerIterator<FNiagaraSystemScalabilityOverride,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (pFVar12 == pFVar15) break;
    FNiagaraPlatformSet::ApplyRedirects(pFVar12);
    pFVar12 = (FNiagaraPlatformSet *)&pFVar12[3].CVarConditions;
  }
  plVar13 = (longlong *)(this->ExposedParameters)._padding_;
  iVar3 = (int)(this->ExposedParameters)._padding_;
  plVar2 = plVar13 + iVar3;
  while( true ) {
    if ((int)(this->ExposedParameters)._padding_ != iVar3) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<UNiagaraDataInterface_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (plVar13 == plVar2) break;
    lVar5 = *plVar13;
    if (lVar5 != 0) {
      pUVar11 = Z_Construct_UClass_UNiagaraDataInterfacePlatformSet_NoRegister();
      iVar4 = (int)pUVar11->_padding_;
      if ((iVar4 <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar4 * 8)
          == &pUVar11->_padding_)) {
        FNiagaraPlatformSet::ApplyRedirects((FNiagaraPlatformSet *)(lVar5 + 0x38));
      }
    }
    plVar13 = plVar13 + 1;
  }
  pUVar6 = (this->SystemSpawnScript).field0_0x0.DebugPtr;
  if (pUVar6 != (UNiagaraScript *)0x0) {
    iVar3 = (pUVar6->ResolvedDataInterfaces).ArrayNum;
    pFVar7 = (pUVar6->ResolvedDataInterfaces).AllocatorInstance.Data;
    if (iVar3 < 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L"");
      if (bVar10) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    if (pFVar7 != pFVar7 + (longlong)iVar3 * 0x50) {
      pFVar14 = pFVar7 + 0x40;
      do {
        if (*(longlong *)pFVar14 != 0) {
          pUVar11 = Z_Construct_UClass_UNiagaraDataInterfacePlatformSet_NoRegister();
          bVar10 = FObjectPtr::IsA((FObjectPtr *)pFVar14,pUVar11);
          if ((bVar10) && (*(longlong *)pFVar14 != 0)) {
            FNiagaraPlatformSet::ApplyRedirects
                      ((FNiagaraPlatformSet *)(*(longlong *)pFVar14 + 0x38));
          }
        }
        pFVar1 = pFVar14 + 0x10;
        pFVar14 = pFVar14 + 0x50;
      } while (pFVar1 != pFVar7 + (longlong)iVar3 * 0x50);
    }
  }
  pUVar6 = (this->SystemUpdateScript).field0_0x0.DebugPtr;
  if (pUVar6 != (UNiagaraScript *)0x0) {
    iVar3 = (pUVar6->ResolvedDataInterfaces).ArrayNum;
    pFVar7 = (pUVar6->ResolvedDataInterfaces).AllocatorInstance.Data;
    if (iVar3 < 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L"");
      if (bVar10) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    if (pFVar7 != pFVar7 + (longlong)iVar3 * 0x50) {
      pFVar14 = pFVar7 + 0x40;
      do {
        if (*(longlong *)pFVar14 != 0) {
          pUVar11 = Z_Construct_UClass_UNiagaraDataInterfacePlatformSet_NoRegister();
          bVar10 = FObjectPtr::IsA((FObjectPtr *)pFVar14,pUVar11);
          if ((bVar10) && (*(longlong *)pFVar14 != 0)) {
            FNiagaraPlatformSet::ApplyRedirects
                      ((FNiagaraPlatformSet *)(*(longlong *)pFVar14 + 0x38));
          }
        }
        pFVar1 = pFVar14 + 0x10;
        pFVar14 = pFVar14 + 0x50;
      } while (pFVar1 != pFVar7 + (longlong)iVar3 * 0x50);
    }
  }
  iVar3 = (this->EmitterHandles).ArrayNum;
  this_01 = (FNiagaraEmitterHandle *)(this->EmitterHandles).AllocatorInstance.Data;
  pFVar16 = this_01 + iVar3;
  local_res8._0_1_ = SUB81(pFVar16,0);
  <Var9.Func = local_res8._0_1_;
  local_res8 = pFVar16;
  while( true ) {
    if ((this->EmitterHandles).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FNiagaraEmitterHandle,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (this_01 == pFVar16) break;
    this_00 = FNiagaraEmitterHandle::GetEmitterData(this_01);
    if (this_00 != (FVersionedNiagaraEmitterData *)0x0) {
      FNiagaraPlatformSet::ApplyRedirects(&this_00->Platforms);
      iVar4 = (this_00->ScalabilityOverrides).Overrides.ArrayNum;
      pFVar12 = (FNiagaraPlatformSet *)
                (this_00->ScalabilityOverrides).Overrides.AllocatorInstance.Data;
      pFVar15 = (FNiagaraPlatformSet *)((longlong)pFVar12 + (longlong)iVar4 * 0x40);
      while( true ) {
        if ((this_00->ScalabilityOverrides).Overrides.ArrayNum != iVar4) {
          `TCheckedPointerIterator<FNiagaraEmitterScalabilityOverride,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_48);
        }
        if (pFVar12 == pFVar15) break;
        FNiagaraPlatformSet::ApplyRedirects(pFVar12);
        pFVar12 = (FNiagaraPlatformSet *)&pFVar12[1].CVarConditions;
      }
      pFVar14 = (this_00->RendererProperties).AllocatorInstance.Data;
      iVar4 = (this_00->RendererProperties).ArrayNum;
      pFVar7 = pFVar14 + (longlong)iVar4 * 8;
      while( true ) {
        if ((this_00->RendererProperties).ArrayNum != iVar4) {
          `TCheckedPointerIterator<TObjectPtr<UNiagaraRendererProperties>,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_47);
        }
        if (pFVar14 == pFVar7) break;
        if (*(longlong *)pFVar14 != 0) {
          FNiagaraPlatformSet::ApplyRedirects((FNiagaraPlatformSet *)(*(longlong *)pFVar14 + 0x28));
        }
        pFVar14 = pFVar14 + 8;
      }
      FVersionedNiagaraEmitterData::
      ForEachScript<_FVersionedNiagaraEmitterData::ForEachPlatformSet<_UNiagaraSystem::PostLoad_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                (this_00,<Var9);
      pFVar16 = local_res8;
    }
    this_01 = this_01 + 1;
  }
  return;
}

// ForEachScript<`FVersionedNiagaraEmitterData::ForEachPlatformSet<`UNiagaraSystem::PostLoad'::__l2::<lambda_1>_>'::__l2::<lambda_1>_> @ 1493c93b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FVersionedNiagaraEmitterData::
ForEachScript<_FVersionedNiagaraEmitterData::ForEachPlatformSet<_UNiagaraSystem::PostLoad_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
          (FVersionedNiagaraEmitterData *this,<lambda_1> param_1)

{
  int iVar1;
  int iVar2;
  UNiagaraScript *pUVar3;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  undefined1 local_res8 [8];
  <lambda_1> local_res10 [8];
  
  pUVar3 = (this->SpawnScriptProps).Script.field0_0x0.DebugPtr;
  local_res10[0] = param_1.Func;
  if (pUVar3 != (UNiagaraScript *)0x0) {
    iVar1 = (pUVar3->ResolvedDataInterfaces).ArrayNum;
    pFVar7 = (pUVar3->ResolvedDataInterfaces).AllocatorInstance.Data;
    if ((iVar1 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar9 = pFVar7 + (longlong)iVar1 * 0x50;
    for (; pFVar7 != pFVar9; pFVar7 = pFVar7 + 0x50) {
      if (*(longlong *)(pFVar7 + 0x40) != 0) {
        pUVar6 = Z_Construct_UClass_UNiagaraDataInterfacePlatformSet_NoRegister();
        bVar5 = FObjectPtr::IsA((FObjectPtr *)(pFVar7 + 0x40),pUVar6);
        if ((bVar5) && (*(longlong *)(pFVar7 + 0x40) != 0)) {
          FNiagaraPlatformSet::ApplyRedirects
                    ((FNiagaraPlatformSet *)(*(longlong *)(pFVar7 + 0x40) + 0x38));
        }
      }
    }
  }
  pUVar3 = (this->UpdateScriptProps).Script.field0_0x0.DebugPtr;
  if (pUVar3 != (UNiagaraScript *)0x0) {
    iVar1 = (pUVar3->ResolvedDataInterfaces).ArrayNum;
    pFVar7 = (pUVar3->ResolvedDataInterfaces).AllocatorInstance.Data;
    if ((iVar1 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar9 = pFVar7 + (longlong)iVar1 * 0x50;
    for (; pFVar7 != pFVar9; pFVar7 = pFVar7 + 0x50) {
      if (*(longlong *)(pFVar7 + 0x40) != 0) {
        pUVar6 = Z_Construct_UClass_UNiagaraDataInterfacePlatformSet_NoRegister();
        bVar5 = FObjectPtr::IsA((FObjectPtr *)(pFVar7 + 0x40),pUVar6);
        if ((bVar5) && (*(longlong *)(pFVar7 + 0x40) != 0)) {
          FNiagaraPlatformSet::ApplyRedirects
                    ((FNiagaraPlatformSet *)(*(longlong *)(pFVar7 + 0x40) + 0x38));
        }
      }
    }
  }
  pUVar3 = (this->GPUComputeScript).field0_0x0.DebugPtr;
  if (pUVar3 != (UNiagaraScript *)0x0) {
    `FVersionedNiagaraEmitterData::
    ForEachPlatformSet<`UNiagaraSystem::PostLoad'::__l2::<lambda_1>_>'::__l2::<lambda_1>::operator()
              (local_res10,pUVar3);
  }
  iVar1 = (this->EventHandlerScriptProps).ArrayNum;
  pFVar7 = (this->EventHandlerScriptProps).AllocatorInstance.Data;
  pFVar9 = pFVar7 + (longlong)iVar1 * 0x58;
  while( true ) {
    if ((this->EventHandlerScriptProps).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FNiagaraEventScriptProperties_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar9) break;
    lVar8 = *(longlong *)pFVar7;
    if (lVar8 != 0) {
      iVar2 = *(int *)(lVar8 + 800);
      lVar8 = *(longlong *)(lVar8 + 0x318);
      if ((iVar2 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar10 = (longlong)iVar2 * 0x50 + lVar8;
      for (; lVar8 != lVar10; lVar8 = lVar8 + 0x50) {
        if (*(longlong *)(lVar8 + 0x40) != 0) {
          pUVar6 = Z_Construct_UClass_UNiagaraDataInterfacePlatformSet_NoRegister();
          bVar5 = FObjectPtr::IsA((FObjectPtr *)(lVar8 + 0x40),pUVar6);
          if ((bVar5) && (*(longlong *)(lVar8 + 0x40) != 0)) {
            FNiagaraPlatformSet::ApplyRedirects
                      ((FNiagaraPlatformSet *)(*(longlong *)(lVar8 + 0x40) + 0x38));
          }
        }
      }
    }
    pFVar7 = pFVar7 + 0x58;
  }
  return;
}

// ForEachScript<`FNiagaraSystemInstance::EvaluateBoundFunction'::__l2::<lambda_1>_> @ 1493c95f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FVersionedNiagaraEmitterData::
ForEachScript<_FNiagaraSystemInstance::EvaluateBoundFunction_::__l2::<lambda_1>_>
          (FVersionedNiagaraEmitterData *this,<lambda_1> *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  UNiagaraScript *pUVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  FName *pFVar8;
  ulonglong uVar9;
  FName *pFVar10;
  longlong lVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res8 [8];
  
  `FNiagaraSystemInstance::EvaluateBoundFunction'::__l2::<lambda_1>::operator()
            (param_1,(this->SpawnScriptProps).Script.field0_0x0.DebugPtr);
  `FNiagaraSystemInstance::EvaluateBoundFunction'::__l2::<lambda_1>::operator()
            (param_1,(this->UpdateScriptProps).Script.field0_0x0.DebugPtr);
  pUVar4 = (this->GPUComputeScript).field0_0x0.DebugPtr;
  if (pUVar4 != (UNiagaraScript *)0x0) {
    `FNiagaraSystemInstance::EvaluateBoundFunction'::__l2::<lambda_1>::operator()(param_1,pUVar4);
  }
  uVar2 = (this->EventHandlerScriptProps).ArrayNum;
  uVar9 = (ulonglong)(int)uVar2;
  pFVar14 = (this->EventHandlerScriptProps).AllocatorInstance.Data;
  pFVar13 = pFVar14 + uVar9 * 0x58;
  do {
    while( true ) {
      if ((this->EventHandlerScriptProps).ArrayNum != (int)uVar9) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FNiagaraEventScriptProperties_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar14 == pFVar13) {
        return;
      }
      lVar5 = *(longlong *)pFVar14;
      if (lVar5 != 0) break;
LAB_1493c977f:
      uVar9 = (ulonglong)uVar2;
      pFVar14 = pFVar14 + 0x58;
    }
    cVar1 = *(char *)(lVar5 + 0x30);
    if ((*param_1->UsedOnGpu == false) && (cVar1 == '\b')) {
      iVar3 = *(int *)(lVar5 + 0x288);
      lVar11 = *(longlong *)(lVar5 + 0x280);
      if ((iVar3 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar12 = (longlong)iVar3 * 0x38 + lVar11;
      if (lVar11 != lVar12) {
        do {
          pFVar8 = *(FName **)(lVar11 + 0x28);
          pFVar10 = pFVar8 + (longlong)*(int *)(lVar11 + 0x30) * 10;
          if (pFVar8 != pFVar10) {
            do {
              if (*pFVar8 == *param_1->FunctionName) {
                *param_1->UsedOnGpu = true;
                goto LAB_1493c972f;
              }
              pFVar8 = pFVar8 + 10;
            } while (pFVar8 != pFVar10);
          }
          lVar11 = lVar11 + 0x38;
        } while (lVar11 != lVar12);
      }
    }
LAB_1493c972f:
    if ((*param_1->UsedOnCpu != false) || (cVar1 == '\b')) goto LAB_1493c977f;
    pFVar8 = *(FName **)(lVar5 + 0x230);
    pFVar10 = pFVar8 + (longlong)*(int *)(lVar5 + 0x238) * 0xb;
    if (pFVar8 == pFVar10) goto LAB_1493c977f;
    do {
      if (*pFVar8 == *param_1->FunctionName) {
        *param_1->UsedOnCpu = true;
        goto LAB_1493c977f;
      }
      pFVar8 = pFVar8 + 0xb;
    } while (pFVar8 != pFVar10);
    uVar9 = (ulonglong)uVar2;
    pFVar14 = pFVar14 + 0x58;
  } while( true );
}

// ForEachScript<`UNiagaraSystem::UpdatePostCompileDIInfo'::__l2::<lambda_1>_> @ 1493c97b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
UNiagaraSystem::ForEachScript<_UNiagaraSystem::UpdatePostCompileDIInfo_::__l2::<lambda_1>_>
          (UNiagaraSystem *this,<lambda_1> param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  UNiagaraScript *pUVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  FVersionedNiagaraEmitterData *pFVar8;
  ulonglong uVar9;
  UNiagaraSystem *pUVar10;
  longlong lVar11;
  FNiagaraEmitterHandle *pFVar12;
  longlong lVar13;
  FNiagaraEmitterHandle *this_00;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  UNiagaraSystem *local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  UNiagaraSystem *local_60;
  FNiagaraEmitterHandle *local_58;
  
  local_res10 = param_1.__this;
  `UNiagaraSystem::UpdatePostCompileDIInfo'::__l2::<lambda_1>::operator()
            (&local_res10,(this->SystemSpawnScript).field0_0x0.DebugPtr);
  `UNiagaraSystem::UpdatePostCompileDIInfo'::__l2::<lambda_1>::operator()
            (&local_res10,(this->SystemUpdateScript).field0_0x0.DebugPtr);
  uVar1 = (this->EmitterHandles).ArrayNum;
  uVar9 = (ulonglong)(int)uVar1;
  this_00 = (FNiagaraEmitterHandle *)(this->EmitterHandles).AllocatorInstance.Data;
  pFVar12 = this_00 + uVar9;
  local_58 = pFVar12;
  while( true ) {
    if ((this->EmitterHandles).ArrayNum != (int)uVar9) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FNiagaraEmitterHandle_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (this_00 == pFVar12) break;
    bVar7 = FNiagaraEmitterHandle::GetIsEnabled(this_00);
    pUVar10 = param_1.__this;
    if ((bVar7) &&
       (pFVar8 = FNiagaraEmitterHandle::GetEmitterData(this_00),
       pFVar8 != (FVersionedNiagaraEmitterData *)0x0)) {
      local_60 = param_1.__this;
      `UNiagaraSystem::UpdatePostCompileDIInfo'::__l2::<lambda_1>::operator()
                (&local_60,(pFVar8->SpawnScriptProps).Script.field0_0x0.DebugPtr);
      `UNiagaraSystem::UpdatePostCompileDIInfo'::__l2::<lambda_1>::operator()
                (&local_60,(pFVar8->UpdateScriptProps).Script.field0_0x0.DebugPtr);
      pUVar4 = (pFVar8->GPUComputeScript).field0_0x0.DebugPtr;
      if (pUVar4 != (UNiagaraScript *)0x0) {
        `UNiagaraSystem::UpdatePostCompileDIInfo'::__l2::<lambda_1>::operator()(&local_60,pUVar4);
      }
      iVar2 = (pFVar8->EventHandlerScriptProps).ArrayNum;
      pFVar14 = (pFVar8->EventHandlerScriptProps).AllocatorInstance.Data;
      pFVar15 = pFVar14 + (longlong)iVar2 * 0x58;
      while( true ) {
        if ((pFVar8->EventHandlerScriptProps).ArrayNum != iVar2) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<FNiagaraEventScriptProperties_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res20);
        }
        pUVar10 = local_res10;
        pFVar12 = local_58;
        if (pFVar14 == pFVar15) break;
        iVar3 = *(int *)(*(longlong *)pFVar14 + 800);
        lVar13 = *(longlong *)(*(longlong *)pFVar14 + 0x318);
        if ((iVar3 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar11 = (longlong)iVar3 * 0x50 + lVar13;
        for (; lVar13 != lVar11; lVar13 = lVar13 + 0x50) {
          plVar5 = *(longlong **)(lVar13 + 0x40);
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x368))(plVar5,param_1.__this);
          }
        }
        pFVar14 = pFVar14 + 0x58;
      }
    }
    uVar9 = (ulonglong)uVar1;
    this_00 = this_00 + 1;
    param_1.__this = pUVar10;
  }
  return;
}

// ForEachScript<`UNiagaraSystem::ResolveScalabilitySettings'::__l41::<lambda_1>_> @ 1493c9990

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
UNiagaraSystem::ForEachScript<_UNiagaraSystem::ResolveScalabilitySettings_::__l41::<lambda_1>_>
          (UNiagaraSystem *this,<lambda_1> param_1)

{
  FNiagaraEmitterHandle *pFVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  UNiagaraScript *pUVar5;
  bool bVar6;
  FVersionedNiagaraEmitterData *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FNiagaraEmitterHandle *this_00;
  undefined1 local_res8 [8];
  
  pUVar5 = (this->SystemSpawnScript).field0_0x0.DebugPtr;
  if ((pUVar5 != (UNiagaraScript *)0x0) &&
     (uVar2 = *(undefined4 *)&(param_1.__this)->field_0x5d0, ZPULL(uVar2,5,1) == 0)) {
    *(uint *)&(param_1.__this)->field_0x5d0 =
         (*(int *)&(pUVar5->CachedScriptVM).field_0x148 << 5 ^ uVar2) & 0x20U ^ uVar2;
  }
  pUVar5 = (this->SystemUpdateScript).field0_0x0.DebugPtr;
  if ((pUVar5 != (UNiagaraScript *)0x0) &&
     (uVar2 = *(undefined4 *)&(param_1.__this)->field_0x5d0, ZPULL(uVar2,5,1) == 0)) {
    *(uint *)&(param_1.__this)->field_0x5d0 =
         (*(int *)&(pUVar5->CachedScriptVM).field_0x148 << 5 ^ uVar2) & 0x20U ^ uVar2;
  }
  iVar3 = (this->EmitterHandles).ArrayNum;
  this_00 = (FNiagaraEmitterHandle *)(this->EmitterHandles).AllocatorInstance.Data;
  pFVar1 = this_00 + iVar3;
  while( true ) {
    if ((this->EmitterHandles).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FNiagaraEmitterHandle_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_00 == pFVar1) break;
    bVar6 = FNiagaraEmitterHandle::GetIsEnabled(this_00);
    if ((bVar6) &&
       (pFVar7 = FNiagaraEmitterHandle::GetEmitterData(this_00),
       pFVar7 != (FVersionedNiagaraEmitterData *)0x0)) {
      pUVar5 = (pFVar7->SpawnScriptProps).Script.field0_0x0.DebugPtr;
      if ((pUVar5 != (UNiagaraScript *)0x0) &&
         (uVar2 = *(undefined4 *)&(param_1.__this)->field_0x5d0, ZPULL(uVar2,5,1) == 0)) {
        *(uint *)&(param_1.__this)->field_0x5d0 =
             (*(int *)&(pUVar5->CachedScriptVM).field_0x148 << 5 ^ uVar2) & 0x20U ^ uVar2;
      }
      pUVar5 = (pFVar7->UpdateScriptProps).Script.field0_0x0.DebugPtr;
      if ((pUVar5 != (UNiagaraScript *)0x0) &&
         (uVar2 = *(undefined4 *)&(param_1.__this)->field_0x5d0, ZPULL(uVar2,5,1) == 0)) {
        *(uint *)&(param_1.__this)->field_0x5d0 =
             (*(int *)&(pUVar5->CachedScriptVM).field_0x148 << 5 ^ uVar2) & 0x20U ^ uVar2;
      }
      pUVar5 = (pFVar7->GPUComputeScript).field0_0x0.DebugPtr;
      if ((pUVar5 != (UNiagaraScript *)0x0) &&
         (uVar2 = *(undefined4 *)&(param_1.__this)->field_0x5d0, ZPULL(uVar2,5,1) == 0)) {
        *(uint *)&(param_1.__this)->field_0x5d0 =
             (*(int *)&(pUVar5->CachedScriptVM).field_0x148 << 5 ^ uVar2) & 0x20U ^ uVar2;
      }
      iVar4 = (pFVar7->EventHandlerScriptProps).ArrayNum;
      pFVar9 = (pFVar7->EventHandlerScriptProps).AllocatorInstance.Data;
      pFVar8 = pFVar9 + (longlong)iVar4 * 0x58;
      while( true ) {
        if ((pFVar7->EventHandlerScriptProps).ArrayNum != iVar4) {
          `TCheckedPointerIterator<FNiagaraEventScriptProperties_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (pFVar9 == pFVar8) break;
        if ((*(longlong *)pFVar9 != 0) &&
           (uVar2 = *(undefined4 *)&(param_1.__this)->field_0x5d0, ZPULL(uVar2,5,1) == 0)) {
          *(uint *)&(param_1.__this)->field_0x5d0 =
               (*(int *)(*(longlong *)pFVar9 + 0x300) << 5 ^ uVar2) & 0x20U ^ uVar2;
        }
        pFVar9 = pFVar9 + 0x58;
      }
    }
    this_00 = this_00 + 1;
  }
  return;
}

// GetTypeName<UNiagaraDataInterfaceBase> @ 1493c9c60

FString * __cdecl GetTypeName<UNiagaraDataInterfaceBase>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UNiagaraDataInterfaceBase_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraSpriteRendererProperties> @ 1493c9ca0

FString * __cdecl GetTypeName<UNiagaraSpriteRendererProperties>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraSpriteRendererProperties::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSortInternal<`UNiagaraSystem::ComputeRenderersDrawOrder'::__l2::FSortInfo,int,FIdentityFunctor,TDereferenceWrapper<`UNiagaraSystem::ComputeRenderersDrawOrder'::__l2::FSortInfo,`UNiagaraSystem::ComputeRenderersDrawOrder'::__l2::<lambda_2>_>_> @ 1493c9ce0

void __cdecl
AlgoImpl::
HeapSortInternal<_UNiagaraSystem::ComputeRenderersDrawOrder_::__l2::FSortInfo,int,FIdentityFunctor,TDereferenceWrapper<_UNiagaraSystem::ComputeRenderersDrawOrder_::__l2::FSortInfo,_UNiagaraSystem::ComputeRenderersDrawOrder_::__l2::<lambda_2>_>_>
          (FSortInfo *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_public:_void___cdecl_UNiagaraSystem::ComputeRenderersDrawOrder(void)_::_2_::FSortInfo,_public:_void___cdecl_UNiagaraSystem::ComputeRenderersDrawOrder(void)_::_2_::<lambda_2>_>
          param_4)

{
  FSortInfo *pFVar1;
  FSortInfo *pFVar2;
  FSortInfo FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar7 = iVar6 * 2 + 1;
  iVar9 = iVar7;
  iVar10 = iVar6;
  do {
    while (param_2 <= iVar7) {
LAB_1493c9dc2:
      if (iVar10 == 0) {
        iVar7 = param_2 + -1;
        lVar11 = (longlong)iVar7;
        if (0 < iVar7) {
          do {
            iVar9 = 0;
            FVar3 = *param_1;
            *param_1 = param_1[lVar11];
            param_1[lVar11] = FVar3;
            if (1 < iVar7) {
              do {
                iVar10 = iVar9 * 2;
                iVar6 = iVar10 + 1;
                if (iVar10 + 2 < iVar7) {
                  if (param_1[(longlong)iVar10 + 2].SortHint < param_1[iVar6].SortHint) {
                    iVar6 = iVar10;
                  }
                  iVar6 = iVar6 + 1;
                }
                pFVar1 = param_1 + iVar6;
                pFVar2 = param_1 + iVar9;
                if (pFVar1->SortHint <= pFVar2->SortHint) break;
                FVar3 = *pFVar2;
                *pFVar2 = *pFVar1;
                *pFVar1 = FVar3;
                iVar9 = iVar6;
              } while (iVar6 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar11 = lVar11 + -1;
          } while (0 < lVar11);
        }
        return;
      }
      iVar6 = iVar10 + -1;
      iVar7 = iVar9 + -2;
      iVar9 = iVar7;
      iVar10 = iVar6;
    }
    iVar7 = iVar6 * 2;
    iVar8 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      if (param_1[(longlong)iVar7 + 2].SortHint < param_1[iVar8].SortHint) {
        iVar8 = iVar7;
      }
      iVar8 = iVar8 + 1;
    }
    pFVar1 = param_1 + iVar8;
    pFVar2 = param_1 + iVar6;
    if (pFVar1->SortHint <= pFVar2->SortHint) goto LAB_1493c9dc2;
    FVar3 = *pFVar2;
    *pFVar2 = *pFVar1;
    iVar7 = iVar8 * 2 + 1;
    *pFVar1 = FVar3;
    iVar6 = iVar8;
  } while( true );
}

// InternalConstructor<UNiagaraSimulationStageBase> @ 1493c9e70

void __cdecl InternalConstructor<UNiagaraSimulationStageBase>(FObjectInitializer *param_1)

{
  UNiagaraMergeable *this;
  
  this = (UNiagaraMergeable *)param_1->Obj;
  if (this != (UNiagaraMergeable *)0x0) {
    UNiagaraMergeable::UNiagaraMergeable(this);
    *(undefined ***)this = &___7UNiagaraSimulationStageBase__6B_;
    *(uint *)&this[1].field_0x10 = *(uint *)&this[1].field_0x10 | 1;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UNiagaraSimulationStageGeneric> @ 1493c9eb0

void __cdecl InternalConstructor<UNiagaraSimulationStageGeneric>(FObjectInitializer *param_1)

{
  UNiagaraMergeable *this;
  int iVar1;
  
  this = (UNiagaraMergeable *)param_1->Obj;
  if (this == (UNiagaraMergeable *)0x0) {
    return;
  }
  UNiagaraMergeable::UNiagaraMergeable(this);
  *(uint *)&this[1].field_0x10 = *(uint *)&this[1].field_0x10 | 1;
  *(undefined ***)this = &___7UNiagaraSimulationStageGeneric__6B_;
  *(undefined8 *)(this + 1) = 0;
  *(undefined8 *)&this[1].field_0x8 = 0;
  *(undefined8 *)&this[1].field_0x18 = 0;
  *(undefined8 *)&this[1].field_0x20 = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)(this + 2),&FNiagaraTypeDefinition::Vec4Def);
  *(int *)(this + 2) = iVar1;
  this[2].field_0xd = this[2].field_0xd & 0xfe;
  this[2].field_0xd = this[2].field_0xd | 2;
  *(undefined8 *)&this[2].field_0x4 = 0;
  this[2].field_0xc = 0;
  *(undefined8 *)&this[2].field_0x18 = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[2].field_0x20,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[2].field_0x20 = iVar1;
  *(undefined8 *)(this + 3) = 0;
  *(undefined8 *)&this[3].field_0x8 = 0;
  this[3].field_0x10 = 0;
  *(undefined8 *)&this[3].field_0x18 = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[3].field_0x20,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[3].field_0x20 = iVar1;
  *(undefined8 *)(this + 4) = 0;
  *(undefined8 *)&this[4].field_0x8 = 0;
  *(undefined8 *)&this[4].field_0x14 = 0;
  *(undefined8 *)&this[4].field_0x1c = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[4].field_0x24,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[4].field_0x24 = iVar1;
  this[5].field_0x9 = this[5].field_0x9 & 0xfe;
  this[5].field_0x9 = this[5].field_0x9 | 2;
  *(undefined8 *)(this + 5) = 0;
  this[5].field_0x8 = 0;
  *(undefined8 *)&this[5].field_0xc = 0;
  *(undefined8 *)&this[5].field_0x18 = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[5].field_0x20,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[5].field_0x20 = iVar1;
  *(undefined8 *)(this + 6) = 0;
  *(undefined8 *)&this[6].field_0x8 = 0;
  *(undefined8 *)&this[6].field_0x10 = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[6].field_0x18,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[6].field_0x18 = iVar1;
  *(undefined8 *)&this[6].field_0x20 = 0;
  *(undefined8 *)(this + 7) = 0;
  *(undefined8 *)&this[7].field_0x8 = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[7].field_0x10,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[7].field_0x10 = iVar1;
  *(undefined8 *)&this[7].field_0x18 = 0;
  *(undefined8 *)&this[7].field_0x20 = 0;
  *(undefined2 *)(this + 8) = 0;
  *(undefined8 *)&this[8].field_0x8 = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[8].field_0x10,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[8].field_0x10 = iVar1;
  *(undefined8 *)&this[8].field_0x18 = 0;
  *(undefined8 *)&this[8].field_0x20 = 0;
  *(undefined8 *)(this + 9) = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[9].field_0x8,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[9].field_0x8 = iVar1;
  *(undefined8 *)&this[9].field_0x10 = 0;
  *(undefined8 *)&this[9].field_0x18 = 0;
  *(undefined8 *)&this[9].field_0x20 = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)(this + 10),&FNiagaraTypeDefinition::Vec4Def);
  *(int *)(this + 10) = iVar1;
  *(undefined8 *)&this[10].field_0x8 = 0;
  *(undefined8 *)&this[10].field_0x10 = 0;
  return;
}

// InternalConstructor<UNiagaraSpriteRendererProperties> @ 1493c9ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl InternalConstructor<UNiagaraSpriteRendererProperties>(FObjectInitializer *param_1)

{
  byte bVar1;
  UNiagaraMergeable *this;
  longlong *plVar2;
  int iVar3;
  undefined1 auStackY_178 [32];
  TObjectPtr<UObject>_u_0 TStack_130;
  undefined2 uStack_128;
  undefined1 uStack_126;
  undefined8 uStack_124;
  undefined4 uStack_11c;
  undefined1 *puStack_118;
  undefined1 *puStack_110;
  undefined1 *puStack_108;
  undefined1 *puStack_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  undefined1 *puStack_e8;
  undefined1 *puStack_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined1 *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  UNiagaraMergeable *pUStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  UNiagaraMergeable *pUStack_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  ulonglong uStack_38;
  
  this = (UNiagaraMergeable *)param_1->Obj;
  if (this == (UNiagaraMergeable *)0x0) {
    return;
  }
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  UNiagaraMergeable::UNiagaraMergeable(this);
  *(undefined ***)this = &___7UNiagaraRendererProperties__6B_;
  FNiagaraPlatformSet::FNiagaraPlatformSet((FNiagaraPlatformSet *)(this + 1));
  *(undefined2 *)&this[2].field_0xd = 0x101;
  *(undefined8 *)&this[2].field_0x10 = 0;
  *(undefined8 *)&this[2].field_0x18 = 0;
  iVar3 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[2].field_0x20,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[2].field_0x20 = iVar3;
  this[3].field_0x5 = this[3].field_0x5 & 0xfe;
  this[3].field_0x5 = this[3].field_0x5 | 2;
  *(undefined8 *)&this[2].field_0x24 = 0;
  this[3].field_0x4 = 0;
  *(undefined8 *)&this[3].field_0x8 = 0;
  *(undefined8 *)&this[3].field_0x10 = 0;
  *(undefined8 *)&this[3].field_0x18 = 0;
  *(undefined8 *)&this[3].field_0x20 = 0;
  *(undefined ***)this = &___7UNiagaraSpriteRendererProperties__6B_;
  *(undefined8 *)(this + 4) = 0;
  TStack_130.DebugPtr = (UObject *)Z_Construct_UClass_UMaterialInterface_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)TStack_130.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable(TStack_130.DebugPtr);
  }
  uStack_126 = 0;
  uStack_128 = 1;
  uStack_124 = 0xffffffffffffffff;
  uStack_11c = 0xffffffff;
  FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&TStack_130.ObjectPtr);
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding
            ((FNiagaraUserParameterBinding *)&this[4].field_0x8,
             (FNiagaraTypeDefinition *)&TStack_130.ObjectPtr);
  *(undefined8 *)(this + 5) = 0x50300;
  *(undefined8 *)&this[5].field_0x8 = 0x3fe0000000000000;
  *(undefined8 *)&this[5].field_0x10 = 0x3fe0000000000000;
  *(undefined2 *)&this[6].field_0x1 = 0;
  *(undefined8 *)&this[5].field_0x18 = 0x3ff0000000000000;
  *(undefined8 *)&this[5].field_0x20 = 0x3ff0000000000000;
  bVar1 = *(byte *)(this + 6);
  this[6].field_0x3 = 0;
  *(undefined8 *)&this[6].field_0x4 = 0x3f800000;
  *(byte *)(this + 6) = bVar1 & 0xfd | 0x15;
  *(undefined4 *)&this[6].field_0xc = 0;
  *(undefined8 *)&this[6].field_0x14 = 0x447a0000;
  *(undefined8 *)&this[6].field_0x1c = 0;
  *(undefined8 *)&this[6].field_0x24 = 0;
  iVar3 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[7].field_0x4,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[7].field_0x4 = iVar3;
  this[7].field_0x11 = this[7].field_0x11 & 0xfe;
  this[7].field_0x11 = this[7].field_0x11 | 2;
  *(undefined8 *)&this[7].field_0x8 = 0;
  this[7].field_0x10 = 0;
  *(undefined8 *)&this[7].field_0x14 = 0;
  *(undefined8 *)&this[7].field_0x1c = 0;
  iVar3 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[7].field_0x24,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[7].field_0x24 = iVar3;
  this[8].field_0x9 = this[8].field_0x9 & 0xfe;
  this[8].field_0x9 = this[8].field_0x9 | 2;
  *(undefined8 *)(this + 8) = 0;
  this[8].field_0x8 = 0;
  *(undefined8 *)&this[8].field_0xc = 0;
  *(undefined8 *)&this[8].field_0x14 = 0;
  iVar3 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[8].field_0x1c,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[8].field_0x1c = iVar3;
  this[9].field_0x1 = this[9].field_0x1 & 0xfe;
  this[9].field_0x1 = this[9].field_0x1 | 2;
  *(undefined8 *)&this[8].field_0x20 = 0;
  *(undefined1 *)(this + 9) = 0;
  *(undefined8 *)&this[9].field_0x4 = 0;
  *(undefined8 *)&this[9].field_0xc = 0;
  iVar3 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[9].field_0x14,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[9].field_0x14 = iVar3;
  this[9].field_0x21 = this[9].field_0x21 & 0xfe;
  this[9].field_0x21 = this[9].field_0x21 | 2;
  *(undefined8 *)&this[9].field_0x18 = 0;
  this[9].field_0x20 = 0;
  *(undefined8 *)&this[9].field_0x24 = 0;
  *(undefined8 *)&this[10].field_0x4 = 0;
  iVar3 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[10].field_0xc,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[10].field_0xc = iVar3;
  this[10].field_0x19 = this[10].field_0x19 & 0xfe;
  this[10].field_0x19 = this[10].field_0x19 | 2;
  *(undefined8 *)&this[10].field_0x10 = 0;
  this[10].field_0x18 = 0;
  *(undefined8 *)&this[10].field_0x1c = 0;
  *(undefined8 *)&this[10].field_0x24 = 0;
  iVar3 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[0xb].field_0x4,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[0xb].field_0x4 = iVar3;
  this[0xb].field_0x11 = this[0xb].field_0x11 & 0xfe;
  this[0xb].field_0x11 = this[0xb].field_0x11 | 2;
  *(undefined8 *)&this[0xb].field_0x8 = 0;
  this[0xb].field_0x10 = 0;
  *(undefined8 *)&this[0xb].field_0x14 = 0;
  *(undefined8 *)&this[0xb].field_0x1c = 0;
  iVar3 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[0xb].field_0x24,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[0xb].field_0x24 = iVar3;
  this[0xc].field_0x9 = this[0xc].field_0x9 & 0xfe;
  this[0xc].field_0x9 = this[0xc].field_0x9 | 2;
  *(undefined8 *)(this + 0xc) = 0;
  this[0xc].field_0x8 = 0;
  *(undefined8 *)&this[0xc].field_0xc = 0;
  *(undefined8 *)&this[0xc].field_0x14 = 0;
  iVar3 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[0xc].field_0x1c,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[0xc].field_0x1c = iVar3;
  this[0xd].field_0x1 = this[0xd].field_0x1 & 0xfe;
  this[0xd].field_0x1 = this[0xd].field_0x1 | 2;
  *(undefined8 *)&this[0xc].field_0x20 = 0;
  *(undefined1 *)(this + 0xd) = 0;
  *(undefined8 *)&this[0xd].field_0x4 = 0;
  *(undefined8 *)&this[0xd].field_0xc = 0;
  iVar3 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[0xd].field_0x14,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[0xd].field_0x14 = iVar3;
  this[0xd].field_0x21 = this[0xd].field_0x21 & 0xfe;
  this[0xd].field_0x21 = this[0xd].field_0x21 | 2;
  *(undefined8 *)&this[0xd].field_0x18 = 0;
  this[0xd].field_0x20 = 0;
  *(undefined8 *)&this[0xd].field_0x24 = 0;
  *(undefined8 *)&this[0xe].field_0x4 = 0;
  iVar3 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[0xe].field_0xc,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[0xe].field_0xc = iVar3;
  this[0xe].field_0x19 = this[0xe].field_0x19 & 0xfe;
  this[0xe].field_0x19 = this[0xe].field_0x19 | 2;
  *(undefined8 *)&this[0xe].field_0x10 = 0;
  this[0xe].field_0x18 = 0;
  *(undefined8 *)&this[0xe].field_0x1c = 0;
  *(undefined8 *)&this[0xe].field_0x24 = 0;
  iVar3 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[0xf].field_0x4,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[0xf].field_0x4 = iVar3;
  this[0xf].field_0x11 = this[0xf].field_0x11 & 0xfe;
  this[0xf].field_0x11 = this[0xf].field_0x11 | 2;
  *(undefined8 *)&this[0xf].field_0x8 = 0;
  this[0xf].field_0x10 = 0;
  *(undefined8 *)&this[0xf].field_0x14 = 0;
  *(undefined8 *)&this[0xf].field_0x1c = 0;
  iVar3 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[0xf].field_0x24,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[0xf].field_0x24 = iVar3;
  this[0x10].field_0x9 = this[0x10].field_0x9 & 0xfe;
  this[0x10].field_0x9 = this[0x10].field_0x9 | 2;
  *(undefined8 *)(this + 0x10) = 0;
  this[0x10].field_0x8 = 0;
  *(undefined8 *)&this[0x10].field_0xc = 0;
  *(undefined8 *)&this[0x10].field_0x14 = 0;
  iVar3 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[0x10].field_0x1c,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[0x10].field_0x1c = iVar3;
  this[0x11].field_0x1 = this[0x11].field_0x1 & 0xfe;
  this[0x11].field_0x1 = this[0x11].field_0x1 | 2;
  *(undefined8 *)&this[0x10].field_0x20 = 0;
  *(undefined1 *)(this + 0x11) = 0;
  *(undefined8 *)&this[0x11].field_0x4 = 0;
  *(undefined8 *)&this[0x11].field_0xc = 0;
  iVar3 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[0x11].field_0x14,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[0x11].field_0x14 = iVar3;
  this[0x11].field_0x21 = this[0x11].field_0x21 & 0xfe;
  this[0x11].field_0x21 = this[0x11].field_0x21 | 2;
  *(undefined8 *)&this[0x11].field_0x18 = 0;
  this[0x11].field_0x20 = 0;
  *(undefined8 *)&this[0x11].field_0x24 = 0;
  *(undefined8 *)&this[0x12].field_0x4 = 0;
  iVar3 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[0x12].field_0xc,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[0x12].field_0xc = iVar3;
  this[0x12].field_0x19 = this[0x12].field_0x19 & 0xfe;
  this[0x12].field_0x19 = this[0x12].field_0x19 | 2;
  *(undefined8 *)&this[0x12].field_0x10 = 0;
  this[0x12].field_0x18 = 0;
  *(undefined8 *)&this[0x12].field_0x1c = 0;
  *(undefined8 *)&this[0x12].field_0x24 = 0;
  iVar3 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[0x13].field_0x4,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[0x13].field_0x4 = iVar3;
  this[0x13].field_0x11 = this[0x13].field_0x11 & 0xfe;
  this[0x13].field_0x11 = this[0x13].field_0x11 | 2;
  *(undefined8 *)&this[0x13].field_0x8 = 0;
  this[0x13].field_0x10 = 0;
  *(undefined8 *)&this[0x13].field_0x14 = 0;
  *(undefined8 *)&this[0x13].field_0x1c = 0;
  iVar3 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[0x13].field_0x24,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[0x13].field_0x24 = iVar3;
  this[0x14].field_0x9 = this[0x14].field_0x9 & 0xfe;
  this[0x14].field_0x9 = this[0x14].field_0x9 | 2;
  *(undefined8 *)(this + 0x14) = 0;
  this[0x14].field_0x8 = 0;
  *(undefined8 *)&this[0x14].field_0xc = 0;
  *(undefined8 *)&this[0x14].field_0x14 = 0;
  iVar3 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[0x14].field_0x1c,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[0x14].field_0x1c = iVar3;
  this[0x15].field_0x1 = this[0x15].field_0x1 & 0xfe;
  this[0x15].field_0x1 = this[0x15].field_0x1 | 2;
  *(undefined8 *)&this[0x14].field_0x20 = 0;
  *(undefined1 *)(this + 0x15) = 0;
  *(undefined8 *)&this[0x15].field_0x4 = 0;
  *(undefined8 *)&this[0x15].field_0xc = 0;
  iVar3 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[0x15].field_0x14,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[0x15].field_0x14 = iVar3;
  this[0x15].field_0x21 = this[0x15].field_0x21 & 0xfe;
  this[0x15].field_0x21 = this[0x15].field_0x21 | 2;
  *(undefined8 *)&this[0x15].field_0x18 = 0;
  this[0x15].field_0x20 = 0;
  *(undefined8 *)(this + 0x16) = 0;
  *(undefined8 *)&this[0x16].field_0x8 = 0;
  *(undefined8 *)&this[0x16].field_0x10 = 0;
  *(undefined8 *)&this[0x16].field_0x18 = 0;
  *(undefined8 *)&this[0x16].field_0x20 = 0;
  *(undefined8 *)(this + 0x17) = 0;
  *(undefined8 *)&this[0x17].field_0x8 = 0;
  *(undefined8 *)&this[0x17].field_0x10 = 0;
  *(undefined8 *)&this[0x17].field_0x18 = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)&this[0x17].field_0x20 = 0;
  *(undefined8 *)&this[0x18].field_0x8 = 0;
  iVar3 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[0x18].field_0x10,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[0x18].field_0x10 = iVar3;
  this[0x18].field_0x1d = this[0x18].field_0x1d & 0xfe;
  this[0x18].field_0x1d = this[0x18].field_0x1d | 2;
  *(undefined8 *)&this[0x18].field_0x14 = 0;
  this[0x18].field_0x1c = 0;
  *(undefined8 *)&this[0x18].field_0x20 = 0;
  *(undefined8 *)(this + 0x19) = 0;
  iVar3 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[0x19].field_0x8,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[0x19].field_0x8 = iVar3;
  this[0x19].field_0x15 = this[0x19].field_0x15 & 0xfe;
  this[0x19].field_0x15 = this[0x19].field_0x15 | 2;
  *(undefined8 *)&this[0x19].field_0xc = 0;
  this[0x19].field_0x14 = 0;
  *(undefined8 *)&this[0x19].field_0x18 = 0;
  *(undefined8 *)&this[0x19].field_0x20 = 0;
  iVar3 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)(this + 0x1a),&FNiagaraTypeDefinition::Vec4Def)
  ;
  *(int *)(this + 0x1a) = iVar3;
  this[0x1a].field_0xd = this[0x1a].field_0xd & 0xfe;
  this[0x1a].field_0xd = this[0x1a].field_0xd | 2;
  *(undefined8 *)&this[0x1a].field_0x4 = 0;
  this[0x1a].field_0xc = 0;
  *(undefined8 *)&this[0x1a].field_0x10 = 0;
  *(undefined8 *)&this[0x1a].field_0x18 = 0;
  iVar3 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[0x1a].field_0x20,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[0x1a].field_0x20 = iVar3;
  this[0x1b].field_0x5 = this[0x1b].field_0x5 & 0xfe;
  this[0x1b].field_0x5 = this[0x1b].field_0x5 | 2;
  *(undefined8 *)&this[0x1a].field_0x24 = 0;
  this[0x1b].field_0x4 = 0;
  *(undefined8 *)&this[0x1b].field_0x8 = 0;
  *(undefined8 *)&this[0x1b].field_0x10 = 0;
  iVar3 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[0x1b].field_0x18,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[0x1b].field_0x18 = iVar3;
  this[0x1b].field_0x25 = this[0x1b].field_0x25 & 0xfe;
  this[0x1b].field_0x25 = this[0x1b].field_0x25 | 2;
  *(undefined8 *)&this[0x1b].field_0x1c = 0;
  this[0x1b].field_0x24 = 0;
  *(undefined8 *)(this + 0x1c) = 0;
  *(undefined8 *)&this[0x1c].field_0x8 = 0;
  iVar3 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[0x1c].field_0x10,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[0x1c].field_0x10 = iVar3;
  this[0x1c].field_0x1d = this[0x1c].field_0x1d & 0xfe;
  this[0x1c].field_0x1d = this[0x1c].field_0x1d | 2;
  *(undefined8 *)&this[0x1c].field_0x14 = 0;
  this[0x1c].field_0x1c = 0;
  *(undefined8 *)&this[0x1c].field_0x20 = 0;
  *(undefined8 *)(this + 0x1d) = 0;
  iVar3 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[0x1d].field_0x8,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[0x1d].field_0x8 = iVar3;
  this[0x1d].field_0x15 = this[0x1d].field_0x15 & 0xfe;
  this[0x1d].field_0x15 = this[0x1d].field_0x15 | 2;
  *(undefined8 *)&this[0x1d].field_0xc = 0;
  this[0x1d].field_0x14 = 0;
  *(undefined8 *)&this[0x1d].field_0x18 = 0;
  *(undefined8 *)&this[0x1d].field_0x20 = 0;
  iVar3 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)(this + 0x1e),&FNiagaraTypeDefinition::Vec4Def)
  ;
  *(int *)(this + 0x1e) = iVar3;
  this[0x1e].field_0xd = this[0x1e].field_0xd & 0xfe;
  this[0x1e].field_0xd = this[0x1e].field_0xd | 2;
  *(undefined8 *)&this[0x1e].field_0x4 = 0;
  this[0x1e].field_0xc = 0;
  *(undefined4 *)&this[0x1e].field_0x10 = 0;
  *(undefined8 *)&this[0x1e].field_0x18 = 0;
  *(undefined8 *)&this[0x1e].field_0x20 = 0;
  *(undefined8 *)(this + 0x1f) = 0;
  *(undefined8 *)&this[0x1f].field_0x8 = 0;
  *(undefined8 *)&this[0x1f].field_0x10 = 0;
  *(undefined8 *)&this[0x1f].field_0x18 = 0;
  *(undefined8 *)&this[0x1f].field_0x20 = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)&this[0x20].field_0x8 = 0;
  *(undefined8 *)&this[0x20].field_0x10 = 0;
  *(undefined8 *)&this[0x20].field_0x18 = 0;
  *(undefined8 *)&this[0x20].field_0x20 = 0;
  puStack_118 = &this[6].field_0x1c;
  puStack_110 = &this[7].field_0x14;
  puStack_108 = &this[8].field_0xc;
  puStack_100 = &this[9].field_0x4;
  puStack_f8 = &this[9].field_0x24;
  puStack_f0 = &this[10].field_0x1c;
  puStack_e8 = &this[0xb].field_0x14;
  puStack_e0 = &this[0xc].field_0xc;
  puStack_d8 = &this[0xd].field_0x4;
  puStack_d0 = &this[0xd].field_0x24;
  puStack_c8 = &this[0xe].field_0x1c;
  puStack_c0 = &this[0xf].field_0x14;
  puStack_b8 = &this[0x10].field_0xc;
  puStack_b0 = &this[0x11].field_0x4;
  puStack_a8 = &this[0x11].field_0x24;
  puStack_a0 = &this[0x12].field_0x1c;
  puStack_98 = &this[0x13].field_0x14;
  puStack_90 = &this[0x14].field_0xc;
  pUStack_88 = this + 0x18;
  puStack_80 = &this[0x18].field_0x20;
  puStack_48 = &this[0x15].field_0x4;
  *(undefined4 *)&this[3].field_0x20 = 0x1b;
  puStack_78 = &this[0x19].field_0x18;
  puStack_70 = &this[0x1a].field_0x10;
  puStack_68 = &this[0x1b].field_0x8;
  pUStack_60 = this + 0x1c;
  puStack_58 = &this[0x1c].field_0x20;
  puStack_50 = &this[0x1d].field_0x18;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,0x1b,*(int *)&this[3].field_0x24,(ForAnyElementType *)&this[3].field_0x18,0x1b,
             (int *)&this[3].field_0x24);
  plVar2 = *(longlong **)&this[3].field_0x18;
  *plVar2 = (longlong)puStack_118;
  plVar2[1] = (longlong)puStack_110;
  plVar2[2] = (longlong)puStack_108;
  plVar2[3] = (longlong)puStack_100;
  plVar2[4] = (longlong)puStack_f8;
  plVar2[5] = (longlong)puStack_f0;
  plVar2[6] = (longlong)puStack_e8;
  plVar2[7] = (longlong)puStack_e0;
  plVar2[8] = (longlong)puStack_d8;
  plVar2[9] = (longlong)puStack_d0;
  plVar2[10] = (longlong)puStack_c8;
  plVar2[0xb] = (longlong)puStack_c0;
  plVar2[0xc] = (longlong)puStack_b8;
  plVar2[0xd] = (longlong)puStack_b0;
  plVar2[0xe] = (longlong)puStack_a8;
  plVar2[0xf] = (longlong)puStack_a0;
  plVar2[0x10] = (longlong)puStack_98;
  plVar2[0x11] = (longlong)puStack_90;
  plVar2[0x12] = (longlong)pUStack_88;
  plVar2[0x13] = (longlong)puStack_80;
  plVar2[0x14] = (longlong)puStack_78;
  plVar2[0x15] = (longlong)puStack_70;
  plVar2[0x16] = (longlong)puStack_68;
  plVar2[0x17] = (longlong)pUStack_60;
  plVar2[0x18] = (longlong)puStack_58;
  plVar2[0x19] = (longlong)puStack_50;
  plVar2[0x1a] = (longlong)puStack_48;
  return;
}

// InternalConstructor<UNiagaraSystem> @ 1493c9ef0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl InternalConstructor<UNiagaraSystem>(FObjectInitializer *param_1)

{
  if ((UNiagaraSystem *)param_1->Obj != (UNiagaraSystem *)0x0) {
    UNiagaraSystem::UNiagaraSystem((UNiagaraSystem *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UNiagaraSystemCollection> @ 1493c9f10

void __cdecl InternalConstructor<UNiagaraSystemCollection>(FObjectInitializer *param_1)

{
  UDataAsset *this;
  
  this = (UDataAsset *)param_1->Obj;
  if (this != (UDataAsset *)0x0) {
    UDataAsset::UDataAsset(this,param_1);
    *(undefined1 *)&this[2]._padding_ = 1;
    this->_padding_ = (longlong)&___7UNiagaraSystemCollection__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].NativeClass.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  }
  return;
}

// InternalVTableHelperCtorCaller<UNiagaraSimulationStageBase> @ 1493c9f60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraSimulationStageBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraSimulationStageBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UNiagaraMergeable::UNiagaraMergeable((UNiagaraMergeable *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNiagaraSimulationStageBase__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraSimulationStageGeneric> @ 1493ca020

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraSimulationStageGeneric>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraSimulationStageGeneric *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraSimulationStageGeneric::GetPrivateStaticClass();
  pUVar3 = (UNiagaraSimulationStageGeneric *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UNiagaraSimulationStageGeneric *)0x0) {
    pUVar3 = UNiagaraSimulationStageGeneric::UNiagaraSimulationStageGeneric(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraSpriteRendererProperties> @ 1493ca0c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraSpriteRendererProperties>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraSpriteRendererProperties *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraSpriteRendererProperties::GetPrivateStaticClass();
  pUVar3 = (UNiagaraSpriteRendererProperties *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UNiagaraSpriteRendererProperties *)0x0) {
    pUVar3 = UNiagaraSpriteRendererProperties::UNiagaraSpriteRendererProperties(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraSystem> @ 1493ca160

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNiagaraSystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraSystem *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraSystem::GetPrivateStaticClass();
  pUVar3 = (UNiagaraSystem *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UNiagaraSystem *)0x0) {
    pUVar3 = UNiagaraSystem::UNiagaraSystem(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraSystemCollection> @ 1493ca200

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNiagaraSystemCollection>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDataAsset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraSystemCollection::GetPrivateStaticClass();
  this = (UDataAsset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDataAsset *)0x0) {
    UDataAsset::UDataAsset(this,param_1);
    *(undefined1 *)&this[2]._padding_ = 1;
    this->_padding_ = (longlong)&___7UNiagaraSystemCollection__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].NativeClass.Class.field0_0x0.DebugPtr = (UClass *)0x0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<`UNiagaraSystem::ComputeRenderersDrawOrder'::__l2::FSortInfo,int,FIdentityFunctor,TDereferenceWrapper<`UNiagaraSystem::ComputeRenderersDrawOrder'::__l2::FSortInfo,`UNiagaraSystem::ComputeRenderersDrawOrder'::__l2::<lambda_2>_>_> @ 1493ca2d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<_UNiagaraSystem::ComputeRenderersDrawOrder_::__l2::FSortInfo,int,FIdentityFunctor,TDereferenceWrapper<_UNiagaraSystem::ComputeRenderersDrawOrder_::__l2::FSortInfo,_UNiagaraSystem::ComputeRenderersDrawOrder_::__l2::<lambda_2>_>_>
          (FSortInfo *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_public:_void___cdecl_UNiagaraSystem::ComputeRenderersDrawOrder(void)_::_2_::FSortInfo,_public:_void___cdecl_UNiagaraSystem::ComputeRenderersDrawOrder(void)_::_2_::<lambda_2>_>
          param_4)

{
  FSortInfo *pFVar1;
  FSortInfo FVar2;
  int iVar3;
  FSortInfo *pFVar4;
  FSortInfo **ppFVar5;
  FSortInfo *pFVar6;
  FSortInfo *pFVar7;
  FSortInfo *pFVar8;
  FSortInfo *pFVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  FSortInfo *local_338;
  FSortInfo *local_328;
  FSortInfo *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar10;
    memset(local_310,0,0x2e8);
    ppFVar5 = &local_328;
    do {
      pFVar8 = ppFVar5[1];
      pFVar4 = *ppFVar5;
      pFVar1 = ppFVar5[2];
      iVar3 = (int)((longlong)pFVar8 - (longlong)pFVar4 >> 3) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar9 = pFVar4;
      if ((int)local_338 != 0) {
LAB_1493ca380:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          pFVar6 = pFVar8 + 1;
          FVar2 = pFVar9[iVar3 >> 1];
          pFVar9[iVar3 >> 1] = *pFVar9;
          *pFVar9 = FVar2;
          pFVar4 = pFVar9;
LAB_1493ca3b0:
          pFVar4 = pFVar4 + 1;
          if (pFVar4 <= pFVar8) goto code_r0x0001493ca3b9;
          goto LAB_1493ca3c0;
        }
        for (; pFVar4 = pFVar9, pFVar1 = pFVar9, pFVar9 < pFVar8; pFVar8 = pFVar8 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar8) {
            if (pFVar4->SortHint < pFVar1->SortHint) {
              pFVar4 = pFVar1;
            }
          }
          FVar2 = *pFVar4;
          *pFVar4 = *pFVar8;
          *pFVar8 = FVar2;
        }
        goto LAB_1493ca47a;
      }
LAB_1493ca469:
      local_338 = pFVar1;
      HeapSortInternal<_UNiagaraSystem::ComputeRenderersDrawOrder_::__l2::FSortInfo,int,FIdentityFunctor,TDereferenceWrapper<_UNiagaraSystem::ComputeRenderersDrawOrder_::__l2::FSortInfo,_UNiagaraSystem::ComputeRenderersDrawOrder_::__l2::<lambda_2>_>_>
                (pFVar4,iVar3,param_3,param_4);
LAB_1493ca47a:
      ppFVar5 = ppFVar5 + -3;
    } while (&local_328 <= ppFVar5);
  }
  return;
code_r0x0001493ca3b9:
  if (pFVar4->SortHint <= pFVar9->SortHint) goto LAB_1493ca3b0;
LAB_1493ca3c0:
  do {
    pFVar7 = pFVar6;
    pFVar6 = pFVar7 + -1;
    if (pFVar6 <= pFVar9) break;
  } while (pFVar9->SortHint <= pFVar6->SortHint);
  if (pFVar4 <= pFVar6) {
    FVar2 = *pFVar4;
    *pFVar4 = *pFVar6;
    *pFVar6 = FVar2;
    goto LAB_1493ca3b0;
  }
  FVar2 = *pFVar9;
  local_338._0_4_ = (int)local_338 + -1;
  *pFVar9 = *pFVar6;
  *pFVar6 = FVar2;
  if ((longlong)((longlong)pFVar6 + (-8 - (longlong)pFVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)pFVar8 - (longlong)pFVar4 & 0xfffffffffffffff8U)) {
    if (pFVar4 < pFVar8) {
      *ppFVar5 = pFVar4;
      ppFVar5[1] = pFVar8;
      *(int *)(ppFVar5 + 2) = (int)local_338;
      ppFVar5 = ppFVar5 + 3;
    }
    if (pFVar6 <= pFVar9 + 1) goto LAB_1493ca47a;
    pFVar8 = pFVar7 + -2;
    pFVar4 = pFVar9;
  }
  else {
    if (pFVar9 + 1 < pFVar6) {
      *ppFVar5 = pFVar9;
      ppFVar5[1] = pFVar7 + -2;
      *(int *)(ppFVar5 + 2) = (int)local_338;
      ppFVar5 = ppFVar5 + 3;
    }
    if (pFVar8 <= pFVar4) goto LAB_1493ca47a;
  }
  iVar3 = (int)((longlong)pFVar8 - (longlong)pFVar4 >> 3) + 1;
  pFVar9 = pFVar4;
  if ((int)local_338 == 0) goto LAB_1493ca469;
  goto LAB_1493ca380;
}

// IsObjectPtrEqual<UNiagaraParameterCollection,UNiagaraParameterCollection_*,0> @ 1493ca510

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UNiagaraParameterCollection,UNiagaraParameterCollection_*,0>
          (TObjectPtr<UNiagaraParameterCollection> *param_1,UNiagaraParameterCollection **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UNiagaraParameterCollection *)0x0) {
    return *param_2 == (UNiagaraParameterCollection *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UObject,UMaterialInterface_*,0> @ 1493ca530

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UObject,UMaterialInterface_*,0>
          (TObjectPtr<UObject> *param_1,UMaterialInterface **param_2)

{
  if ((UMaterialInterface *)(param_1->field0_0x0).DebugPtr == (UMaterialInterface *)0x0) {
    return *param_2 == (UMaterialInterface *)0x0;
  }
  return (UMaterialInterface *)(param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UObject,UScriptStruct_*,0> @ 1493ca550

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UObject,UScriptStruct_*,0>
          (TObjectPtr<UObject> *param_1,UScriptStruct **param_2)

{
  if ((UScriptStruct *)(param_1->field0_0x0).DebugPtr == (UScriptStruct *)0x0) {
    return *param_2 == (UScriptStruct *)0x0;
  }
  return (UScriptStruct *)(param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UObject,UStaticMesh_*,0> @ 1493ca570

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UObject,UStaticMesh_*,0>
          (TObjectPtr<UObject> *param_1,UStaticMesh **param_2)

{
  if ((UStaticMesh *)(param_1->field0_0x0).DebugPtr == (UStaticMesh *)0x0) {
    return *param_2 == (UStaticMesh *)0x0;
  }
  return (UStaticMesh *)(param_1->field0_0x0).DebugPtr == *param_2;
}

// Merge<FNiagaraEmitterExecutionIndex,FIdentityFunctor,`UNiagaraSystem::ComputeEmittersExecutionOrder'::__l56::<lambda_2>_> @ 1493ca590

void __cdecl
AlgoImpl::
Merge<FNiagaraEmitterExecutionIndex,FIdentityFunctor,_UNiagaraSystem::ComputeEmittersExecutionOrder_::__l56::<lambda_2>_>
          (FNiagaraEmitterExecutionIndex *param_1,int param_2,int param_3,FIdentityFunctor param_4,
          <lambda_2> param_5)

{
  FNiagaraEmitterExecutionIndex *pFVar1;
  FNiagaraEmitterExecutionIndex FVar2;
  ForElementType<int> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FNiagaraEmitterExecutionIndex *pFVar7;
  FNiagaraEmitterExecutionIndex *pFVar9;
  int iVar10;
  <lambda_2> <Var11;
  uint uVar12;
  uint uVar13;
  FNiagaraEmitterExecutionIndex *pFVar14;
  FNiagaraEmitterExecutionIndex *pFVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int local_58;
  FNiagaraEmitterExecutionIndex *pFVar8;
  
  local_58 = 0;
  if (0 < param_2) {
    do {
      if (param_3 <= param_2) {
        return;
      }
      iVar6 = 0;
      if (0 < param_2 - local_58) {
        uVar16 = param_2 - local_58;
        do {
          uVar13 = param_1[param_2].EmitterIndex;
          iVar18 = (uVar16 >> 1) + iVar6;
          if (((param_5.EmitterPriorities)->ArrayNum <= (int)uVar13) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar3 = ((param_5.EmitterPriorities)->AllocatorInstance).SecondaryData;
          <Var11.EmitterPriorities = param_5.EmitterPriorities;
          if (FVar3 != (ForElementType<int>)0x0) {
            <Var11.EmitterPriorities =
                 (TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *)FVar3;
          }
          uVar17 = param_1[(longlong)iVar18 + (longlong)local_58].EmitterIndex;
          iVar10 = *(int *)((longlong)<Var11.EmitterPriorities + (ulonglong)uVar13 * 4);
          if (((param_5.EmitterPriorities)->ArrayNum <= (int)uVar17) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar3 = ((param_5.EmitterPriorities)->AllocatorInstance).SecondaryData;
          <Var11.EmitterPriorities = param_5.EmitterPriorities;
          if (FVar3 != (ForElementType<int>)0x0) {
            <Var11.EmitterPriorities =
                 (TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *)FVar3;
          }
          if (*(int *)((longlong)<Var11.EmitterPriorities + (ulonglong)uVar17 * 4) <= iVar10) {
            iVar6 = iVar18 + (uVar16 & 1);
          }
          uVar13 = uVar16 >> 1;
          uVar16 = uVar16 >> 1;
        } while (uVar13 != 0);
      }
      local_58 = local_58 + iVar6;
      if (param_2 <= local_58) {
        return;
      }
      uVar16 = param_3 - param_2;
      iVar6 = 0;
      iVar18 = 0;
      pFVar1 = param_1 + local_58;
      if (0 < (int)uVar16) {
        do {
          uVar17 = uVar16 >> 1;
          uVar13 = param_1[(longlong)(int)(uVar17 + iVar6) + (longlong)param_2].EmitterIndex;
          if (((param_5.EmitterPriorities)->ArrayNum <= (int)uVar13) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar3 = ((param_5.EmitterPriorities)->AllocatorInstance).SecondaryData;
          <Var11.EmitterPriorities = param_5.EmitterPriorities;
          if (FVar3 != (ForElementType<int>)0x0) {
            <Var11.EmitterPriorities =
                 (TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *)FVar3;
          }
          uVar12 = pFVar1->EmitterIndex;
          iVar10 = *(int *)((longlong)<Var11.EmitterPriorities + (ulonglong)uVar13 * 4);
          if (((param_5.EmitterPriorities)->ArrayNum <= (int)uVar12) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar3 = ((param_5.EmitterPriorities)->AllocatorInstance).SecondaryData;
          <Var11.EmitterPriorities = param_5.EmitterPriorities;
          if (FVar3 != (ForElementType<int>)0x0) {
            <Var11.EmitterPriorities =
                 (TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *)FVar3;
          }
          iVar18 = iVar6;
          if (iVar10 < *(int *)((longlong)<Var11.EmitterPriorities + (ulonglong)uVar12 * 4)) {
            iVar18 = (uVar16 & 1) + uVar17 + iVar6;
          }
          uVar16 = uVar17;
          iVar6 = iVar18;
        } while (uVar17 != 0);
      }
      iVar10 = (iVar18 - local_58) + param_2;
      iVar6 = param_2 - local_58;
      if ((iVar6 != 0) && (iVar6 < iVar10)) {
        pFVar7 = pFVar1 + iVar6;
        pFVar14 = pFVar1;
        pFVar8 = pFVar1 + iVar6;
        do {
          while( true ) {
            pFVar9 = pFVar7 + 1;
            pFVar15 = pFVar14 + 1;
            FVar2 = *pFVar14;
            *pFVar14 = *pFVar7;
            *pFVar7 = FVar2;
            pFVar14 = pFVar15;
            if (pFVar9 == pFVar1 + iVar10) break;
            pFVar7 = pFVar9;
            if (pFVar15 == pFVar8) {
              pFVar8 = pFVar9;
            }
          }
          pFVar7 = pFVar8;
        } while (pFVar15 != pFVar8);
      }
      local_58 = local_58 + 1 + iVar18;
      param_2 = param_2 + iVar18;
    } while (local_58 < param_2);
  }
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<`UNiagaraSystem::ComputeRenderersDrawOrder'::__l2::FSortInfo>_> @ 1493cad20

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<_UNiagaraSystem::ComputeRenderersDrawOrder_::__l2::FSortInfo>_>
          (ushort param_1,
          ForElementType<_public:_void___cdecl_UNiagaraSystem::ComputeRenderersDrawOrder(void)_::_2_::FSortInfo>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<`UNiagaraSystem::ComputeRenderersDrawOrder'::__l2::FSortInfo>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// RotateInternal<FNiagaraEmitterExecutionIndex> @ 1493cb130

int __cdecl
AlgoImpl::RotateInternal<FNiagaraEmitterExecutionIndex>
          (FNiagaraEmitterExecutionIndex *param_1,int param_2,int param_3)

{
  FNiagaraEmitterExecutionIndex FVar1;
  FNiagaraEmitterExecutionIndex *pFVar2;
  FNiagaraEmitterExecutionIndex *pFVar4;
  FNiagaraEmitterExecutionIndex *pFVar5;
  FNiagaraEmitterExecutionIndex *pFVar6;
  FNiagaraEmitterExecutionIndex *pFVar3;
  
  if (param_3 != 0) {
    if (param_2 <= param_3) {
      return 0;
    }
    pFVar2 = param_1 + param_3;
    pFVar5 = param_1;
    pFVar3 = param_1 + param_3;
    do {
      while( true ) {
        pFVar4 = pFVar2 + 1;
        pFVar6 = pFVar5 + 1;
        FVar1 = *pFVar5;
        *pFVar5 = *pFVar2;
        *pFVar2 = FVar1;
        pFVar5 = pFVar6;
        if (pFVar4 == param_1 + param_2) break;
        pFVar2 = pFVar4;
        if (pFVar6 == pFVar3) {
          pFVar3 = pFVar4;
        }
      }
      pFVar2 = pFVar3;
    } while (pFVar6 != pFVar3);
    param_2 = param_2 - param_3;
  }
  return param_2;
}

// StableSortInternal<FNiagaraEmitterExecutionIndex,FIdentityFunctor,`UNiagaraSystem::ComputeEmittersExecutionOrder'::__l56::<lambda_2>_> @ 1493cb1b0

void __cdecl
AlgoImpl::
StableSortInternal<FNiagaraEmitterExecutionIndex,FIdentityFunctor,_UNiagaraSystem::ComputeEmittersExecutionOrder_::__l56::<lambda_2>_>
          (FNiagaraEmitterExecutionIndex *param_1,int param_2,FIdentityFunctor param_3,
          <lambda_2> param_4)

{
  FNiagaraEmitterExecutionIndex FVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  FNiagaraEmitterExecutionIndex *pFVar7;
  int iVar8;
  TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> *local_res20;
  
  iVar4 = 0;
  pFVar7 = param_1;
  local_res20 = param_4.EmitterPriorities;
  if (0 < param_2) {
    do {
      if ((iVar4 + 1 < param_2) &&
         (bVar3 = `UNiagaraSystem::ComputeEmittersExecutionOrder'::__l56::<lambda_2>::operator()
                            (&local_res20,pFVar7[1],*pFVar7), bVar3)) {
        FVar1 = *pFVar7;
        *pFVar7 = pFVar7[1];
        pFVar7[1] = FVar1;
      }
      iVar4 = iVar4 + 2;
      pFVar7 = pFVar7 + 2;
    } while (iVar4 < param_2);
  }
  iVar4 = 2;
  if (2 < param_2) {
    do {
      iVar2 = iVar4 * 2;
      iVar6 = 0;
      iVar5 = param_2;
      do {
        iVar8 = iVar5;
        if (iVar2 <= iVar5) {
          iVar8 = iVar2;
        }
        Merge<FNiagaraEmitterExecutionIndex,FIdentityFunctor,_UNiagaraSystem::ComputeEmittersExecutionOrder_::__l56::<lambda_2>_>
                  (param_1 + iVar6,iVar4,iVar8,param_3,param_4);
        iVar6 = iVar6 + iVar2;
        iVar5 = iVar5 + iVar4 * -2;
      } while (iVar6 < param_2);
      iVar4 = iVar2;
    } while (iVar2 < param_2);
  }
  return;
}

// StaticEnum<enum_ENiagaraEmitterInactiveResponse> @ 1493cb2a0

UEnum * __cdecl StaticEnum<enum_ENiagaraEmitterInactiveResponse>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraEmitterInactiveResponse.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraEmitterInactiveResponse.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraEmitterInactiveResponse,(UObject *)pUVar1,
                       L"ENiagaraEmitterInactiveResponse");
  }
  return Z_Registration_Info_UEnum_ENiagaraEmitterInactiveResponse.OuterSingleton;
}

// StaticEnum<enum_ENiagaraLoopBehavior> @ 1493cb2e0

UEnum * __cdecl StaticEnum<enum_ENiagaraLoopBehavior>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraLoopBehavior.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraLoopBehavior.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraLoopBehavior,(UObject *)pUVar1,
                       L"ENiagaraLoopBehavior");
  }
  return Z_Registration_Info_UEnum_ENiagaraLoopBehavior.OuterSingleton;
}

// StaticEnum<enum_ENiagaraLoopDurationMode> @ 1493cb320

UEnum * __cdecl StaticEnum<enum_ENiagaraLoopDurationMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraLoopDurationMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraLoopDurationMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraLoopDurationMode,(UObject *)pUVar1,
                       L"ENiagaraLoopDurationMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraLoopDurationMode.OuterSingleton;
}

// StaticEnum<enum_ENiagaraLwcTileUpdateMode> @ 1493cb360

UEnum * __cdecl StaticEnum<enum_ENiagaraLwcTileUpdateMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraLwcTileUpdateMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraLwcTileUpdateMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraLwcTileUpdateMode,(UObject *)pUVar1,
                       L"ENiagaraLwcTileUpdateMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraLwcTileUpdateMode.OuterSingleton;
}

// StaticEnum<enum_ENiagaraRendererPixelCoverageMode> @ 1493cb3a0

UEnum * __cdecl StaticEnum<enum_ENiagaraRendererPixelCoverageMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraRendererPixelCoverageMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraRendererPixelCoverageMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraRendererPixelCoverageMode,(UObject *)pUVar1
                       ,L"ENiagaraRendererPixelCoverageMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraRendererPixelCoverageMode.OuterSingleton;
}

// StaticEnum<enum_ENiagaraSpriteAlignment> @ 1493cb3e0

UEnum * __cdecl StaticEnum<enum_ENiagaraSpriteAlignment>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraSpriteAlignment.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraSpriteAlignment.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraSpriteAlignment,(UObject *)pUVar1,
                       L"ENiagaraSpriteAlignment");
  }
  return Z_Registration_Info_UEnum_ENiagaraSpriteAlignment.OuterSingleton;
}

// StaticEnum<enum_ENiagaraSpriteFacingMode> @ 1493cb420

UEnum * __cdecl StaticEnum<enum_ENiagaraSpriteFacingMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraSpriteFacingMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraSpriteFacingMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraSpriteFacingMode,(UObject *)pUVar1,
                       L"ENiagaraSpriteFacingMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraSpriteFacingMode.OuterSingleton;
}

// StaticEnum<enum_ENiagaraSystemInactiveResponse> @ 1493cb460

UEnum * __cdecl StaticEnum<enum_ENiagaraSystemInactiveResponse>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraSystemInactiveResponse.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraSystemInactiveResponse.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraSystemInactiveResponse,(UObject *)pUVar1,
                       L"ENiagaraSystemInactiveResponse");
  }
  return Z_Registration_Info_UEnum_ENiagaraSystemInactiveResponse.OuterSingleton;
}

// TransformIf<TArray<TUniquePtr<FNiagaraTypeDefinition,TDefaultDelete<FNiagaraTypeDefinition>_>,TSizedDefaultAllocator<32>_>,TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_>_&,`FNiagaraTypeRegistry::ForAllSelectedRegisteredTypes<`FNiagaraTypeRegistry::GetRegisteredTypeByName'::__l2::<lambda_1>,`FNiagaraTypeRegistry::GetRegisteredTypeByName'::__l2::<lambda_2>_>'::__l3::<lambda_1>,`FNiagaraTypeRegistry::ForAllSelectedRegisteredTypes<`FNiagaraTypeRegistry::GetRegisteredTypeByName'::__l2::<lambda_1>,`FNiagaraTypeRegistry::GetRegisteredTypeByName'::__l2::<lambda_2>_>'::__l3::<lambda_2>_> @ 1493cb4a0

void __cdecl
Algo::
TransformIf<TArray<TUniquePtr<FNiagaraTypeDefinition,TDefaultDelete<FNiagaraTypeDefinition>_>,TSizedDefaultAllocator<32>_>,TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_>_&,_FNiagaraTypeRegistry::ForAllSelectedRegisteredTypes<_FNiagaraTypeRegistry::GetRegisteredTypeByName_::__l2::<lambda_1>,_FNiagaraTypeRegistry::GetRegisteredTypeByName_::__l2::<lambda_2>_>_::__l3::<lambda_1>,_FNiagaraTypeRegistry::ForAllSelectedRegisteredTypes<_FNiagaraTypeRegistry::GetRegisteredTypeByName_::__l2::<lambda_1>,_FNiagaraTypeRegistry::GetRegisteredTypeByName_::__l2::<lambda_2>_>_::__l3::<lambda_2>_>
          (TArray<TUniquePtr<FNiagaraTypeDefinition,TDefaultDelete<FNiagaraTypeDefinition>_>,TSizedDefaultAllocator<32>_>
           *param_1,TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_> *param_2,
          <lambda_1> param_3,<lambda_2> param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined8 *puVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FName FVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  UObject *local_40;
  undefined2 local_38;
  FScriptContainerElement local_36;
  undefined2 local_34;
  undefined2 local_32;
  undefined4 local_30;
  undefined4 local_2c;
  
  pFVar9 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar9 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<FNiagaraTypeDefinition,TDefaultDelete<FNiagaraTypeDefinition>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar1) break;
    if ((*(longlong **)pFVar9 != (longlong *)0x0) && (**(longlong **)pFVar9 != 0)) {
      FVar8 = UE::CoreUObject::Private::GetFName((UObject *)&stack0xffffffffffffffb8);
                    /* WARNING: Load size is inaccurate */
      if (*FVar8 == (FName)param_3.Select.TypeName) {
        puVar3 = *(undefined8 **)pFVar9;
        local_40 = (UObject *)*puVar3;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_40 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_40);
        }
        local_38 = *(undefined2 *)(puVar3 + 1);
        pFVar4 = (param_2->AllocatorInstance).Data;
        local_36 = *(FScriptContainerElement *)((longlong)puVar3 + 10);
        local_34 = *(undefined2 *)((longlong)puVar3 + 0xc);
        local_32 = *(undefined2 *)((longlong)puVar3 + 0xe);
        local_30 = *(undefined4 *)(puVar3 + 2);
        local_2c = *(undefined4 *)((longlong)puVar3 + 0x14);
        if ((pFVar4 <= (FScriptContainerElement *)&local_40) &&
           ((FScriptContainerElement *)&local_40 < pFVar4 + (longlong)param_2->ArrayMax * 0x18)) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        iVar7 = param_2->ArrayNum;
        if (iVar7 == param_2->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar7 + 1;
        pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar7 * 0x18;
        *(UObject **)pFVar4 = local_40;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_40 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_40);
        }
        *(undefined2 *)(pFVar4 + 8) = local_38;
        pFVar4[10] = local_36;
        *(undefined2 *)(pFVar4 + 0xc) = local_34;
        *(undefined2 *)(pFVar4 + 0xe) = local_32;
        *(undefined4 *)(pFVar4 + 0x10) = local_30;
        *(undefined4 *)(pFVar4 + 0x14) = local_2c;
      }
    }
    pFVar9 = pFVar9 + 8;
  }
  return;
}

// TransformIf<TArray<TUniquePtr<FNiagaraTypeDefinition,TDefaultDelete<FNiagaraTypeDefinition>_>,TSizedDefaultAllocator<32>_>,TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_>_&,`FNiagaraTypeRegistry::ForAllSelectedRegisteredTypes<`FNiagaraTypeRegistry::GetTypeForStruct'::__l2::<lambda_1>,`FNiagaraTypeRegistry::GetTypeForStruct'::__l2::<lambda_2>_>'::__l3::<lambda_1>,`FNiagaraTypeRegistry::ForAllSelectedRegisteredTypes<`FNiagaraTypeRegistry::GetTypeForStruct'::__l2::<lambda_1>,`FNiagaraTypeRegistry::GetTypeForStruct'::__l2::<lambda_2>_>'::__l3::<lambda_2>_> @ 1493cb690

void __cdecl
Algo::
TransformIf<TArray<TUniquePtr<FNiagaraTypeDefinition,TDefaultDelete<FNiagaraTypeDefinition>_>,TSizedDefaultAllocator<32>_>,TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_>_&,_FNiagaraTypeRegistry::ForAllSelectedRegisteredTypes<_FNiagaraTypeRegistry::GetTypeForStruct_::__l2::<lambda_1>,_FNiagaraTypeRegistry::GetTypeForStruct_::__l2::<lambda_2>_>_::__l3::<lambda_1>,_FNiagaraTypeRegistry::ForAllSelectedRegisteredTypes<_FNiagaraTypeRegistry::GetTypeForStruct_::__l2::<lambda_1>,_FNiagaraTypeRegistry::GetTypeForStruct_::__l2::<lambda_2>_>_::__l3::<lambda_2>_>
          (TArray<TUniquePtr<FNiagaraTypeDefinition,TDefaultDelete<FNiagaraTypeDefinition>_>,TSizedDefaultAllocator<32>_>
           *param_1,TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_> *param_2,
          <lambda_1> param_3,<lambda_2> param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined8 *puVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  <lambda_1> local_res18 [2];
  UObject *local_48;
  undefined2 local_40;
  FScriptContainerElement local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined4 local_38;
  undefined4 local_34;
  
  pFVar8 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  local_res18[0] = param_3.Select.InStruct;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<FNiagaraTypeDefinition,TDefaultDelete<FNiagaraTypeDefinition>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar1) break;
    bVar6 = `FNiagaraTypeRegistry::
            ForAllSelectedRegisteredTypes<`FNiagaraTypeRegistry::GetTypeForStruct'::__l2::<lambda_1>,`FNiagaraTypeRegistry::GetTypeForStruct'::__l2::<lambda_2>_>'
            ::__l3::<lambda_1>::operator()
                      (local_res18,
                       (TUniquePtr<FNiagaraTypeDefinition,TDefaultDelete<FNiagaraTypeDefinition>_> *
                       )pFVar8);
    if (bVar6) {
      puVar3 = *(undefined8 **)&pFVar8->field_0x0;
      local_48 = (UObject *)*puVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_48 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_48);
      }
      local_40 = *(undefined2 *)(puVar3 + 1);
      pFVar4 = (param_2->AllocatorInstance).Data;
      local_3e = *(FScriptContainerElement *)((longlong)puVar3 + 10);
      local_3c = *(undefined2 *)((longlong)puVar3 + 0xc);
      local_3a = *(undefined2 *)((longlong)puVar3 + 0xe);
      local_38 = *(undefined4 *)(puVar3 + 2);
      local_34 = *(undefined4 *)((longlong)puVar3 + 0x14);
      if ((pFVar4 <= (FScriptContainerElement *)&local_48) &&
         ((FScriptContainerElement *)&local_48 < pFVar4 + (longlong)param_2->ArrayMax * 0x18)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar7 = param_2->ArrayNum;
      if (iVar7 == param_2->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar7 + 1;
      pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar7 * 0x18;
      *(UObject **)pFVar4 = local_48;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_48 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_48);
      }
      *(undefined2 *)(pFVar4 + 8) = local_40;
      pFVar4[10] = local_3e;
      *(undefined2 *)(pFVar4 + 0xc) = local_3c;
      *(undefined2 *)(pFVar4 + 0xe) = local_3a;
      *(undefined4 *)(pFVar4 + 0x10) = local_38;
      *(undefined4 *)(pFVar4 + 0x14) = local_34;
    }
    pFVar8 = pFVar8 + 8;
  }
  return;
}

// TransformIf<TArray<TUniquePtr<FNiagaraTypeDefinition,TDefaultDelete<FNiagaraTypeDefinition>_>,TSizedDefaultAllocator<32>_>,TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_>_&,`FNiagaraTypeRegistry::ForAllSelectedRegisteredTypes<`FNiagaraTypeRegistry::IsStaticPossible'::__l2::<lambda_1>,`FNiagaraTypeRegistry::IsStaticPossible'::__l2::<lambda_2>_>'::__l3::<lambda_1>,`FNiagaraTypeRegistry::ForAllSelectedRegisteredTypes<`FNiagaraTypeRegistry::IsStaticPossible'::__l2::<lambda_1>,`FNiagaraTypeRegistry::IsStaticPossible'::__l2::<lambda_2>_>'::__l3::<lambda_2>_> @ 1493cb860

void __cdecl
Algo::
TransformIf<TArray<TUniquePtr<FNiagaraTypeDefinition,TDefaultDelete<FNiagaraTypeDefinition>_>,TSizedDefaultAllocator<32>_>,TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_>_&,_FNiagaraTypeRegistry::ForAllSelectedRegisteredTypes<_FNiagaraTypeRegistry::IsStaticPossible_::__l2::<lambda_1>,_FNiagaraTypeRegistry::IsStaticPossible_::__l2::<lambda_2>_>_::__l3::<lambda_1>,_FNiagaraTypeRegistry::ForAllSelectedRegisteredTypes<_FNiagaraTypeRegistry::IsStaticPossible_::__l2::<lambda_1>,_FNiagaraTypeRegistry::IsStaticPossible_::__l2::<lambda_2>_>_::__l3::<lambda_2>_>
          (TArray<TUniquePtr<FNiagaraTypeDefinition,TDefaultDelete<FNiagaraTypeDefinition>_>,TSizedDefaultAllocator<32>_>
           *param_1,TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_> *param_2,
          <lambda_1> param_3,<lambda_2> param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined8 *puVar3;
  UObject *pUVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  UObject *local_48;
  undefined2 local_40;
  FScriptContainerElement local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined4 local_38;
  undefined4 local_34;
  
  pFVar9 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar9 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<FNiagaraTypeDefinition,TDefaultDelete<FNiagaraTypeDefinition>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar1) break;
    puVar3 = *(undefined8 **)pFVar9;
    if ((((puVar3 != (undefined8 *)0x0) && (pUVar4 = (UObject *)*puVar3, pUVar4 != (UObject *)0x0))
        && (*(UObject **)param_3.Select.InSrc == pUVar4)) &&
       ((*(short *)((longlong)param_3.Select.InSrc + 8) == *(short *)(puVar3 + 1) &&
        ((*(byte *)((longlong)puVar3 + 10) & 1) != 0)))) {
      local_48 = pUVar4;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      local_40 = *(undefined2 *)(puVar3 + 1);
      pFVar5 = (param_2->AllocatorInstance).Data;
      local_3e = *(FScriptContainerElement *)((longlong)puVar3 + 10);
      local_3c = *(undefined2 *)((longlong)puVar3 + 0xc);
      local_3a = *(undefined2 *)((longlong)puVar3 + 0xe);
      local_38 = *(undefined4 *)(puVar3 + 2);
      local_34 = *(undefined4 *)((longlong)puVar3 + 0x14);
      if ((pFVar5 <= (FScriptContainerElement *)&local_48) &&
         ((FScriptContainerElement *)&local_48 < pFVar5 + (longlong)param_2->ArrayMax * 0x18)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar8 = param_2->ArrayNum;
      if (iVar8 == param_2->ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar8 + 1;
      pFVar5 = (param_2->AllocatorInstance).Data + (longlong)iVar8 * 0x18;
      *(UObject **)pFVar5 = local_48;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_48 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_48);
      }
      *(undefined2 *)(pFVar5 + 8) = local_40;
      pFVar5[10] = local_3e;
      *(undefined2 *)(pFVar5 + 0xc) = local_3c;
      *(undefined2 *)(pFVar5 + 0xe) = local_3a;
      *(undefined4 *)(pFVar5 + 0x10) = local_38;
      *(undefined4 *)(pFVar5 + 0x14) = local_34;
    }
    pFVar9 = pFVar9 + 8;
  }
  return;
}

// TransformIf<TArray<TUniquePtr<FNiagaraTypeDefinition,TDefaultDelete<FNiagaraTypeDefinition>_>,TSizedDefaultAllocator<32>_>,TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_>_&,`FNiagaraTypeRegistry::GetRegisteredTypes'::__l3::<lambda_1>,`FNiagaraTypeRegistry::GetRegisteredTypes'::__l3::<lambda_2>_> @ 1493cba50

void __cdecl
Algo::
TransformIf<TArray<TUniquePtr<FNiagaraTypeDefinition,TDefaultDelete<FNiagaraTypeDefinition>_>,TSizedDefaultAllocator<32>_>,TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_>_&,_FNiagaraTypeRegistry::GetRegisteredTypes_::__l3::<lambda_1>,_FNiagaraTypeRegistry::GetRegisteredTypes_::__l3::<lambda_2>_>
          (TArray<TUniquePtr<FNiagaraTypeDefinition,TDefaultDelete<FNiagaraTypeDefinition>_>,TSizedDefaultAllocator<32>_>
           *param_1,TArray<FNiagaraTypeDefinition,TSizedDefaultAllocator<32>_> *param_2,
          <lambda_1> param_3,<lambda_2> param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined8 *puVar3;
  UObject *pUVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  UObject *local_38;
  undefined2 local_30;
  FScriptContainerElement local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined4 local_28;
  undefined4 local_24;
  
  pFVar9 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar9 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<FNiagaraTypeDefinition,TDefaultDelete<FNiagaraTypeDefinition>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar1) break;
    puVar3 = *(undefined8 **)pFVar9;
    if ((puVar3 != (undefined8 *)0x0) && (pUVar4 = (UObject *)*puVar3, pUVar4 != (UObject *)0x0)) {
      local_38 = pUVar4;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      local_30 = *(undefined2 *)(puVar3 + 1);
      pFVar5 = (param_2->AllocatorInstance).Data;
      local_2e = *(FScriptContainerElement *)((longlong)puVar3 + 10);
      local_2c = *(undefined2 *)((longlong)puVar3 + 0xc);
      local_2a = *(undefined2 *)((longlong)puVar3 + 0xe);
      local_28 = *(undefined4 *)(puVar3 + 2);
      local_24 = *(undefined4 *)((longlong)puVar3 + 0x14);
      if ((pFVar5 <= (FScriptContainerElement *)&local_38) &&
         ((FScriptContainerElement *)&local_38 < pFVar5 + (longlong)param_2->ArrayMax * 0x18)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar8 = param_2->ArrayNum;
      if (iVar8 == param_2->ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar8 + 1;
      pFVar5 = (param_2->AllocatorInstance).Data + (longlong)iVar8 * 0x18;
      *(UObject **)pFVar5 = local_38;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_38);
      }
      *(undefined2 *)(pFVar5 + 8) = local_30;
      pFVar5[10] = local_2e;
      *(undefined2 *)(pFVar5 + 0xc) = local_2c;
      *(undefined2 *)(pFVar5 + 0xe) = local_2a;
      *(undefined4 *)(pFVar5 + 0x10) = local_28;
      *(undefined4 *)(pFVar5 + 0x14) = local_24;
    }
    pFVar9 = pFVar9 + 8;
  }
  return;
}

// __builtin_array_init_helper<FNiagaraGlobalParameters> @ 1493cbc20

void __cdecl
__builtin_array_init_helper<FNiagaraGlobalParameters>
          (FNiagaraGlobalParameters *param_1,ulong64 param_2)

{
  float *pfVar1;
  
  if (param_2 != 0) {
    pfVar1 = &param_1->EngineDeltaTime;
    do {
      *(undefined8 *)(pfVar1 + 5) = 0;
      ((FNiagaraGlobalParameters *)(pfVar1 + -1))->WorldDeltaTime = 0.0;
      ((FNiagaraGlobalParameters *)(pfVar1 + -1))->EngineDeltaTime = 0.0;
      *(undefined8 *)(pfVar1 + 1) = 0;
      *(undefined8 *)(pfVar1 + 3) = 0;
      pfVar1 = pfVar1 + 8;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return;
}

// __builtin_array_init_helper<FNiagaraSystemParameters> @ 1493cbc60

void __cdecl
__builtin_array_init_helper<FNiagaraSystemParameters>
          (FNiagaraSystemParameters *param_1,ulong64 param_2)

{
  float *pfVar1;
  
  if (param_2 != 0) {
    pfVar1 = &param_1->EngineLodDistance;
    do {
      *(undefined8 *)(pfVar1 + 0xd) = 0;
      ((FNiagaraSystemParameters *)(pfVar1 + -1))->EngineTimeSinceRendered = 0.0;
      ((FNiagaraSystemParameters *)(pfVar1 + -1))->EngineLodDistance = 0.0;
      *(undefined8 *)(pfVar1 + 1) = 0;
      *(undefined8 *)(pfVar1 + 3) = 0;
      *(undefined8 *)(pfVar1 + 5) = 0;
      *(undefined8 *)(pfVar1 + 7) = 0;
      *(undefined8 *)(pfVar1 + 9) = 0;
      *(undefined8 *)(pfVar1 + 0xb) = 0;
      pfVar1 = pfVar1 + 0x10;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return;
}

// FThreadSafeStaticStat<`FNiagaraSystemInstanceFinalizeTask::GetStatId'::__l2::FStat_FNiagaraSystemInstanceFinalizeTask> @ 1493cbcb0

/* WARNING: Enum "Type": Some values do not have unique names */

FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_FNiagaraSystemInstanceFinalizeTask::GetStatId(void)const_::_2_::FStat_FNiagaraSystemInstanceFinalizeTask>
* __thiscall
FThreadSafeStaticStat<`FNiagaraSystemInstanceFinalizeTask::GetStatId'::__l2::FStat_FNiagaraSystemInstanceFinalizeTask>
::
FThreadSafeStaticStat<_FNiagaraSystemInstanceFinalizeTask::GetStatId_::__l2::FStat_FNiagaraSystemInstanceFinalizeTask>
          (void *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  *(undefined8 *)this = 0;
  if (*(longlong *)this == 0) {
    pFVar1 = ::FName::FName(local_res8,"FNiagaraSystemInstanceFinalizeTask");
    FThreadSafeStaticStatBase::DoSetup
              (this,*pFVar1,L"FNiagaraSystemInstanceFinalizeTask","STATGROUP_TaskGraphTasks",
               "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return this;
}

// FThreadSafeStaticStat<`FNiagaraSystemInstanceTickConcurrentTask::GetStatId'::__l2::FStat_FNiagaraSystemInstanceTickConcurrentTask> @ 1493cbd40

/* WARNING: Enum "Type": Some values do not have unique names */

FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_FNiagaraSystemInstanceTickConcurrentTask::GetStatId(void)const_::_2_::FStat_FNiagaraSystemInstanceTickConcurrentTask>
* __thiscall
FThreadSafeStaticStat<`FNiagaraSystemInstanceTickConcurrentTask::GetStatId'::__l2::FStat_FNiagaraSystemInstanceTickConcurrentTask>
::
FThreadSafeStaticStat<_FNiagaraSystemInstanceTickConcurrentTask::GetStatId_::__l2::FStat_FNiagaraSystemInstanceTickConcurrentTask>
          (void *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  *(undefined8 *)this = 0;
  if (*(longlong *)this == 0) {
    pFVar1 = ::FName::FName(local_res8,"FNiagaraSystemInstanceTickConcurrentTask");
    FThreadSafeStaticStatBase::DoSetup
              (this,*pFVar1,L"FNiagaraSystemInstanceTickConcurrentTask","STATGROUP_TaskGraphTasks",
               "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return this;
}

// FThreadSafeStaticStat<`FNiagaraSystemNullCompletionTask::GetStatId'::__l2::FStat_FNiagaraSystemNullCompletionTask> @ 1493cbdd0

/* WARNING: Enum "Type": Some values do not have unique names */

FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_FNiagaraSystemNullCompletionTask::GetStatId(void)const_::_2_::FStat_FNiagaraSystemNullCompletionTask>
* __thiscall
FThreadSafeStaticStat<`FNiagaraSystemNullCompletionTask::GetStatId'::__l2::FStat_FNiagaraSystemNullCompletionTask>
::
FThreadSafeStaticStat<_FNiagaraSystemNullCompletionTask::GetStatId_::__l2::FStat_FNiagaraSystemNullCompletionTask>
          (void *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  *(undefined8 *)this = 0;
  if (*(longlong *)this == 0) {
    pFVar1 = ::FName::FName(local_res8,"FNiagaraSystemNullCompletionTask");
    FThreadSafeStaticStatBase::DoSetup
              (this,*pFVar1,L"FNiagaraSystemNullCompletionTask","STATGROUP_TaskGraphTasks",
               "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return this;
}

// FThreadSafeStaticStat<`FNiagaraSystemSimulationAllWorkCompleteTask::GetStatId'::__l2::FStat_FNiagaraSystemSimulationAllWorkCompleteTask> @ 1493cbe60

/* WARNING: Enum "Type": Some values do not have unique names */

FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_FNiagaraSystemSimulationAllWorkCompleteTask::GetStatId(void)const_::_2_::FStat_FNiagaraSystemSimulationAllWorkCompleteTask>
* __thiscall
FThreadSafeStaticStat<`FNiagaraSystemSimulationAllWorkCompleteTask::GetStatId'::__l2::FStat_FNiagaraSystemSimulationAllWorkCompleteTask>
::
FThreadSafeStaticStat<_FNiagaraSystemSimulationAllWorkCompleteTask::GetStatId_::__l2::FStat_FNiagaraSystemSimulationAllWorkCompleteTask>
          (void *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  *(undefined8 *)this = 0;
  if (*(longlong *)this == 0) {
    pFVar1 = ::FName::FName(local_res8,"FNiagaraSystemSimulationAllWorkCompleteTask");
    FThreadSafeStaticStatBase::DoSetup
              (this,*pFVar1,L"FNiagaraSystemSimulationAllWorkCompleteTask",
               "STATGROUP_TaskGraphTasks","STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,
               true,false,MCR_Invalid);
  }
  return this;
}

// FThreadSafeStaticStat<`FNiagaraSystemSimulationSpawnConcurrentTask::GetStatId'::__l2::FStat_FNiagaraSystemSimulationSpawnConcurrentTask> @ 1493cbef0

/* WARNING: Enum "Type": Some values do not have unique names */

FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_FNiagaraSystemSimulationSpawnConcurrentTask::GetStatId(void)const_::_2_::FStat_FNiagaraSystemSimulationSpawnConcurrentTask>
* __thiscall
FThreadSafeStaticStat<`FNiagaraSystemSimulationSpawnConcurrentTask::GetStatId'::__l2::FStat_FNiagaraSystemSimulationSpawnConcurrentTask>
::
FThreadSafeStaticStat<_FNiagaraSystemSimulationSpawnConcurrentTask::GetStatId_::__l2::FStat_FNiagaraSystemSimulationSpawnConcurrentTask>
          (void *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  *(undefined8 *)this = 0;
  if (*(longlong *)this == 0) {
    pFVar1 = ::FName::FName(local_res8,"FNiagaraSystemSimulationSpawnConcurrentTask");
    FThreadSafeStaticStatBase::DoSetup
              (this,*pFVar1,L"FNiagaraSystemSimulationSpawnConcurrentTask",
               "STATGROUP_TaskGraphTasks","STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,
               true,false,MCR_Invalid);
  }
  return this;
}

// FThreadSafeStaticStat<`FNiagaraSystemSimulationTickConcurrentTask::GetStatId'::__l2::FStat_FNiagaraSystemSimulationTickConcurrentTask> @ 1493cbf80

/* WARNING: Enum "Type": Some values do not have unique names */

FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_FNiagaraSystemSimulationTickConcurrentTask::GetStatId(void)const_::_2_::FStat_FNiagaraSystemSimulationTickConcurrentTask>
* __thiscall
FThreadSafeStaticStat<`FNiagaraSystemSimulationTickConcurrentTask::GetStatId'::__l2::FStat_FNiagaraSystemSimulationTickConcurrentTask>
::
FThreadSafeStaticStat<_FNiagaraSystemSimulationTickConcurrentTask::GetStatId_::__l2::FStat_FNiagaraSystemSimulationTickConcurrentTask>
          (void *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  *(undefined8 *)this = 0;
  if (*(longlong *)this == 0) {
    pFVar1 = ::FName::FName(local_res8,"FNiagaraSystemSimulationTickConcurrentTask");
    FThreadSafeStaticStatBase::DoSetup
              (this,*pFVar1,L"FNiagaraSystemSimulationTickConcurrentTask","STATGROUP_TaskGraphTasks"
               ,"STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return this;
}

// ~TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FNiagaraSystemRenderData::SetRenderingEnabled_GT'::__l12::TSTR_FNiagaraSystemRenderData_SetRenderingEnabled379>_>'::__l2::<lambda_1>,1,1> @ 1493d08f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FNiagaraSystemRenderData::SetRenderingEnabled_GT'::__l12::TSTR_FNiagaraSystemRenderData_SetRenderingEnabled379>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<_FNiagaraSystemRenderData::SetRenderingEnabled_GT_::__l12::TSTR_FNiagaraSystemRenderData_SetRenderingEnabled379>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FNiagaraSystemRenderData::SetRenderingEnabled_GT'::`12'::TSTR_FNiagaraSystemRenderData_SetRenderingEnabled379>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x0001493d0913. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FNiagaraSystemRenderData::RecacheRenderers'::__l2::TSTR_SignalFence326>_>'::__l2::<lambda_1>,1,1> @ 1493d0920

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FNiagaraSystemRenderData::RecacheRenderers'::__l2::TSTR_SignalFence326>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<_FNiagaraSystemRenderData::RecacheRenderers_::__l2::TSTR_SignalFence326>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FNiagaraSystemRenderData::RecacheRenderers'::`2'::TSTR_SignalFence326>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x0001493d0943. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FNiagaraSystemGpuComputeProxy::FNiagaraSystemGpuComputeProxy'::__l2::<lambda_1>,1,0> @ 1493d0950

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSystemGpuComputeProxy::FNiagaraSystemGpuComputeProxy'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_FNiagaraSystemGpuComputeProxy::FNiagaraSystemGpuComputeProxy_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraSystemGpuComputeProxy::FNiagaraSystemGpuComputeProxy'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraSystem::FStaticBuffersDeletor::operator()'::__l2::<lambda_1>,1,0> @ 1493d0970

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraSystem::FStaticBuffersDeletor::operator()'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UNiagaraSystem::FStaticBuffersDeletor::operator()_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraSystem::FStaticBuffersDeletor::operator()'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNiagaraSystemGpuComputeProxy::AddToRenderThread'::__l2::<lambda_1>,1,0> @ 1493d0990

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSystemGpuComputeProxy::AddToRenderThread'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FNiagaraSystemGpuComputeProxy::AddToRenderThread_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraSystemGpuComputeProxy::AddToRenderThread'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNiagaraSystemGpuComputeProxy::ClearTicksFromRenderThread'::__l2::<lambda_1>,1,0> @ 1493d09b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSystemGpuComputeProxy::ClearTicksFromRenderThread'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_FNiagaraSystemGpuComputeProxy::ClearTicksFromRenderThread_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraSystemGpuComputeProxy::ClearTicksFromRenderThread'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNiagaraSystemGpuComputeProxy::RemoveFromRenderThread'::__l2::<lambda_1>,1,1> @ 1493d09d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSystemGpuComputeProxy::RemoveFromRenderThread'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FNiagaraSystemGpuComputeProxy::RemoveFromRenderThread_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraSystemGpuComputeProxy::RemoveFromRenderThread'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraSystem::ComputeEmittersExecutionOrder'::__l4::<lambda_1>,0,1> @ 1493d09f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraSystem::ComputeEmittersExecutionOrder'::__l4::<lambda_1>,0,1>::
~TFunction_OwnedObject<_UNiagaraSystem::ComputeEmittersExecutionOrder_::__l4::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraSystem::ComputeEmittersExecutionOrder'::`4'::<lambda_1>,0,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNiagaraSystemInstance::GenerateAndSubmitGPUTick'::__l5::<lambda_1>,1,1> @ 1493d0a10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSystemInstance::GenerateAndSubmitGPUTick'::__l5::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FNiagaraSystemInstance::GenerateAndSubmitGPUTick_::__l5::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraSystemInstance::GenerateAndSubmitGPUTick'::`5'::<lambda_1>,1,1>
        ::_vftable_;
  DestructItems<TRefCountPtr<FRHIUniformBuffer>,int>
            (*(TRefCountPtr<FRHIUniformBuffer> **)((longlong)this + 0x10),
             *(int *)((longlong)this + 0x18));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`UNiagaraSystem::ComputeRenderersDrawOrder'::__l6::<lambda_1>,0,0> @ 1493d0a50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraSystem::ComputeRenderersDrawOrder'::__l6::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UNiagaraSystem::ComputeRenderersDrawOrder_::__l6::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraSystem::ComputeRenderersDrawOrder'::`6'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`UNiagaraSystem::PrecachePSOs'::__l9::<lambda_1>,0,0> @ 1493d0a70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraSystem::PrecachePSOs'::__l9::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UNiagaraSystem::PrecachePSOs_::__l9::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraSystem::PrecachePSOs'::`9'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNiagaraSystemInstanceTickConcurrentTask::DoTask'::__l18::<lambda_1>,1,1> @ 1493d0a90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSystemInstanceTickConcurrentTask::DoTask'::__l18::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FNiagaraSystemInstanceTickConcurrentTask::DoTask_::__l18::<lambda_1>,1,1>
          (void *this)

{
  TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick> *pTVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__BC___DoTask_FNiagaraSystemInstanceTickConcurrentTask__QEAAXW4Type_ENamedThreads__AEBV__TRefCountPtr_VFBaseGraphTask_____Z__00_00_Function_Private_Core_UE__6B_
  ;
  pTVar1 = *(TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick> **)
            ((longlong)this + 0x1c8);
  if (*(TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick> **)((longlong)this + 0x1c8) ==
      (TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick> *)0x0) {
    pTVar1 = (TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick> *)((longlong)this + 8);
  }
  DestructItems<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>,int>
            (pTVar1,*(int *)((longlong)this + 0x1d0));
  if (*(void **)((longlong)this + 0x1c8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x1c8));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FNiagaraSystemInstanceFinalizeTask::DoTask'::__l28::<lambda_1>,1,1> @ 1493d0af0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSystemInstanceFinalizeTask::DoTask'::__l28::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FNiagaraSystemInstanceFinalizeTask::DoTask_::__l28::<lambda_1>,1,1>
          (void *this)

{
  TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick> *pTVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__BM___DoTask_FNiagaraSystemInstanceFinalizeTask__QEAAXW4Type_ENamedThreads__AEBV__TRefCountPtr_VFBaseGraphTask_____Z__00_00_Function_Private_Core_UE__6B_
  ;
  pTVar1 = *(TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick> **)
            ((longlong)this + 0x1c8);
  if (*(TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick> **)((longlong)this + 0x1c8) ==
      (TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick> *)0x0) {
    pTVar1 = (TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick> *)((longlong)this + 8);
  }
  DestructItems<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>,int>
            (pTVar1,*(int *)((longlong)this + 0x1d0));
  if (*(void **)((longlong)this + 0x1c8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x1c8));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FNiagaraSystemStaticBuffers::Finalize'::__l12::<lambda_1>,1,0> @ 1493d0b50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSystemStaticBuffers::Finalize'::__l12::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FNiagaraSystemStaticBuffers::Finalize_::__l12::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraSystemStaticBuffers::Finalize'::`12'::<lambda_1>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNiagaraSystemRenderData::SetRenderingEnabled_GT'::__l12::<lambda_1>,1,0> @ 1493d0b70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSystemRenderData::SetRenderingEnabled_GT'::__l12::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FNiagaraSystemRenderData::SetRenderingEnabled_GT_::__l12::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraSystemRenderData::SetRenderingEnabled_GT'::`12'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNiagaraSystemRenderData::RecacheRenderers'::__l2::<lambda_2>,1,0> @ 1493d0b90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSystemRenderData::RecacheRenderers'::__l2::<lambda_2>,1,0>::
~TFunction_OwnedObject<_FNiagaraSystemRenderData::RecacheRenderers_::__l2::<lambda_2>,1,0>
          (void *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraSystemRenderData::RecacheRenderers'::`2'::<lambda_2>,1,0>::
        _vftable_;
  puVar3 = *(undefined8 **)((longlong)this + 8);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001493d0bba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// ~TFunction_OwnedObject<`FNiagaraSystemRenderData::RecacheRenderers'::__l2::<lambda_3>,1,1> @ 1493d0bd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSystemRenderData::RecacheRenderers'::__l2::<lambda_3>,1,1>::
~TFunction_OwnedObject<_FNiagaraSystemRenderData::RecacheRenderers_::__l2::<lambda_3>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraSystemRenderData::RecacheRenderers'::`2'::<lambda_3>,1,1>::
        _vftable_;
  puVar3 = *(undefined8 **)((longlong)this + 0x20);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
    return;
  }
  return;
}

// operator() @ 1493d26e0

void __thiscall
`UNiagaraSystem::FStaticBuffersDeletor::operator()'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  void *pvVar1;
  FRHIResource *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  pvVar1 = *(void **)this;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  bVar4 = IsInRenderingThread();
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemStaticBuffers.cpp"
                       ,8,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(undefined4 *)((longlong)pvVar1 + 0x48) = 0;
  pFVar2 = *(FRHIResource **)((longlong)pvVar1 + 0x38);
  if (pFVar2 != (FRHIResource *)0x0) {
    *(undefined8 *)((longlong)pvVar1 + 0x38) = 0;
    FRHIResource::Release(pFVar2);
  }
  pFVar2 = *(FRHIResource **)((longlong)pvVar1 + 0x40);
  if (pFVar2 != (FRHIResource *)0x0) {
    *(undefined8 *)((longlong)pvVar1 + 0x40) = 0;
    FRHIResource::Release(pFVar2);
  }
  if (*(FRHIResource **)((longlong)pvVar1 + 0x40) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)pvVar1 + 0x40));
  }
  if (*(FRHIResource **)((longlong)pvVar1 + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)pvVar1 + 0x38));
  }
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)((longlong)pvVar1 + 0x20));
  *(undefined ***)((longlong)pvVar1 + 0x18) = &___7FResourceArrayUploadInterface__6B_;
  if (*(void **)((longlong)pvVar1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)pvVar1 + 8));
  }
  ::operator_delete(pvVar1,0x50);
  return;
}

// operator() @ 1493d4260

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall NiagaraSimulationTaskPriority::<lambda_24>::operator()(<lambda_24> *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  Type TVar4;
  UEnum *this_00;
  int iVar5;
  uint uVar6;
  FString local_38;
  
  if (4 < (byte)LogNiagara._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
  }
  iVar5 = 3;
  if (GPostActorTickPriority < 3) {
    iVar5 = GPostActorTickPriority;
  }
  iVar3 = 0;
  if (0 < iVar5) {
    iVar3 = iVar5;
  }
  TVar4 = FAutoConsoleTaskPriority::Get(GTaskPriorities + iVar3,AnyNormalThreadNormalTask);
  if (4 < (byte)LogNiagara._0_1_) {
    if ((2 < ((int)TVar4 >> 10 & 3U)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result >= 0 && Result < NumThreadPriorities",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                           ,0xa6,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u__s____d___Threa_151e0d598,
               (FLogCategoryBase *)&LogNiagara);
  }
  this_00 = StaticEnum<enum_ETickingGroup>();
  if ((this_00 == (UEnum *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TickingGroupEnum",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimulationTaskPriority.cpp"
                         ,0x69,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar6 = 0;
  do {
    UEnum::GetNameStringByValue(this_00,&local_38,(longlong)(int)uVar6);
    iVar5 = GTickGroupPriorities[0];
    if ((-1 < GPerfCapturePriority) &&
       ((0 < (int)FParticlePerfStats::SystemStatsReaders ||
        (0 < (int)FParticlePerfStats::ComponentStatsReaders)))) {
      iVar5 = GPerfCapturePriority;
    }
    iVar3 = 3;
    if (iVar5 < 3) {
      iVar3 = iVar5;
    }
    iVar5 = 0;
    if (0 < iVar3) {
      iVar5 = iVar3;
    }
    TVar4 = FAutoConsoleTaskPriority::Get(GTaskPriorities + iVar5,AnyNormalThreadNormalTask);
    if (4 < (byte)LogNiagara._0_1_) {
      if ((2 < ((int)TVar4 >> 10 & 3U)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Result >= 0 && Result < NumThreadPriorities",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                             ,0xa6,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)&PTR_u__s____d___Threa_151e0d598,
                 (FLogCategoryBase *)&LogNiagara);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 8);
  return;
}

// operator() @ 1493d44a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
NiagaraSimulationTaskPriority::<lambda_25>::operator()
          (<lambda_25> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  wchar_t *_Str;
  
  if (0 < param_1->ArrayNum) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar1 + 8) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)pFVar1;
    }
    iVar2 = _wtoi(_Str);
    if (iVar2 != 0) {
      if (iVar2 == 1) {
        GTickGroupPriorities._0_8_ = &DAT_200000002;
        GTickGroupPriorities[2] = 2;
        GPostActorTickPriority = 1;
        return;
      }
      if (iVar2 != 2) {
        if (iVar2 != 3) {
          return;
        }
        GPostActorTickPriority = 0;
        GTickGroupPriorities._24_8_ = GTickGroupPriorities._24_8_ & 0xffffffff00000000;
        GTickGroupPriorities._0_8_ = &DAT_200000002;
        GTickGroupPriorities[2] = 2;
        return;
      }
      GPostActorTickPriority = 0;
      GTickGroupPriorities._0_8_ = &DAT_200000002;
      GTickGroupPriorities[2] = 2;
      return;
    }
  }
  GTickGroupPriorities[6] = _UNK_15066df68;
  GTickGroupPriorities[7] = _UNK_15066df6c;
  GTickGroupPriorities[4] = ___xmm_00000002000000020000000200000002;
  GTickGroupPriorities[5] = _UNK_15066df64;
  GTickGroupPriorities[2] = _UNK_15066df68;
  GTickGroupPriorities[3] = _UNK_15066df6c;
  GTickGroupPriorities[0] = ___xmm_00000002000000020000000200000002;
  GTickGroupPriorities[1] = _UNK_15066df64;
  GPostActorTickPriority = 1;
  return;
}

// operator() @ 1493d45a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
NiagaraMemReportInternal::<lambda_26>::operator()
          (<lambda_26> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2)

{
  FName *pFVar1;
  int iVar2;
  UObjectBaseUtility *this_00;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  EReportType EVar6;
  EInternalObjectFlags EVar7;
  uint uVar8;
  UClass *pUVar9;
  EReportType EVar10;
  ForAnyElementType FVar11;
  wchar_t *pwVar12;
  int *piVar13;
  FScriptContainerElement *this_01;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  int iVar16;
  ForAnyElementType FVar17;
  int iVar18;
  undefined1 local_res10 [16];
  EReportType local_res20;
  TObjectIterator<UNiagaraSystem> local_b8;
  FString local_a0;
  FNiagaraSystemMemReport local_90;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  EVar6 = Basic;
  FVar17.Data = (FScriptContainerElement *)0x0;
  iVar18 = 0;
  piVar13 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar13 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString(&FilterPrefix,"-filter=");
    atexit(`NiagaraMemReportInternal::<lambda_26>::operator()'::__l2::
           _dynamic_atexit_destructor_for__FilterPrefix__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar13 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FString::FString(&TypePrefix,"-type=");
    atexit(`NiagaraMemReportInternal::<lambda_26>::operator()'::__l2::
           _dynamic_atexit_destructor_for__TypePrefix__);
    _Init_thread_footer(&::_TSS1);
  }
  iVar2 = param_1->ArrayNum;
  this_01 = (param_1->AllocatorInstance).Data;
  pFVar15 = this_01 + (longlong)iVar2 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (this_01 == pFVar15) break;
    pwVar12 = L"";
    iVar16 = FilterPrefix.Data.ArrayNum;
    if (iVar16 != 0) {
      pwVar12 = (wchar_t *)FilterPrefix.Data.AllocatorInstance.Data;
    }
    iVar4 = iVar16 + -1;
    if (iVar16 == 0) {
      iVar4 = 0;
    }
    bVar5 = ::FString::StartsWith((FString *)this_01,pwVar12,iVar4,IgnoreCase);
    if (bVar5) {
      iVar18 = FilterPrefix.Data.ArrayNum + -1;
      if (FilterPrefix.Data.ArrayNum == 0) {
        iVar18 = 0;
      }
      ::FString::RightChop((FString *)this_01,&local_a0,iVar18);
      if (FVar17.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar17.Data);
      }
      FVar17.Data = local_a0.Data.AllocatorInstance.Data;
      iVar18 = local_a0.Data.ArrayNum;
      this_01 = this_01 + 0x10;
      local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a0.Data.ArrayNum = 0;
      local_a0.Data.ArrayMax = 0;
    }
    else {
      pwVar12 = L"";
      iVar16 = TypePrefix.Data.ArrayNum;
      if (iVar16 != 0) {
        pwVar12 = (wchar_t *)TypePrefix.Data.AllocatorInstance;
      }
      iVar4 = iVar16 + -1;
      if (iVar16 == 0) {
        iVar4 = 0;
      }
      bVar5 = ::FString::StartsWith((FString *)this_01,pwVar12,iVar4,IgnoreCase);
      if (bVar5) {
        iVar16 = TypePrefix.Data.ArrayNum + -1;
        if (TypePrefix.Data.ArrayNum == 0) {
          iVar16 = 0;
        }
        ::FString::RightChop((FString *)this_01,&local_78,iVar16);
        FVar11.Data = (FScriptContainerElement *)L"";
        if (local_78.Data.ArrayNum != 0) {
          FVar11.Data = local_78.Data.AllocatorInstance.Data;
        }
        EVar6 = _wtoi((wchar_t *)FVar11.Data);
        EVar10 = Verbose;
        if ((int)EVar6 < 1) {
          EVar10 = EVar6;
        }
        EVar6 = Basic;
        if (0 < (int)EVar10) {
          EVar6 = EVar10;
        }
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
      }
      this_01 = this_01 + 0x10;
    }
  }
  local_res20 = EVar6;
  if (4 < (byte)LogNiagara._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
  }
  local_b8.Index = 0xffffffff;
  local_b8.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ObjectArray.ArrayNum = 0;
  local_b8.ObjectArray.ArrayMax = 0;
  EVar7 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar9 = UNiagaraSystem::StaticClass();
  GetObjectsOfClass(pUVar9,&local_b8.ObjectArray,true,RF_ClassDefaultObject,
                    EVar7 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  do {
    while( true ) {
      do {
        TObjectIterator<UNiagaraSystem>::Advance(&local_b8);
        lVar14 = (longlong)local_b8.Index;
        if ((local_b8.Index < 0) || (local_b8.ObjectArray.ArrayNum <= local_b8.Index)) {
          if (local_b8.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.ObjectArray.AllocatorInstance.Data);
          }
          if (FVar17.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar17.Data);
          }
          return;
        }
        uVar8 = 0;
        if (local_b8.Index < local_b8.ObjectArray.ArrayNum) {
          uVar8 = (uint)~local_b8.Index >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        this_00 = *(UObjectBaseUtility **)(local_b8.ObjectArray.AllocatorInstance.Data + lVar14 * 8)
        ;
      } while ((this_00 == (UObjectBaseUtility *)0x0) ||
              ((*(uint *)&this_00->field_0x8 >> 0x1e & 1) != 0));
      if (1 < iVar18) break;
LAB_1493d486b:
      local_90.Nodes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_90.Nodes.ArrayNum = 0;
      local_90.Nodes.ArrayMax = 0;
      local_90.DataInterfaceSizeBytes = 0;
      FNiagaraSystemMemReport::GatherResourceMemory(&local_90,EVar6,(UObject *)this_00,0);
      FVar11.Data = local_90.Nodes.AllocatorInstance.Data;
      lVar14 = (longlong)local_90.Nodes.ArrayNum;
      if ((local_90.Nodes.ArrayNum < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (FName *)(FVar11.Data + lVar14 * 0x28);
      for (; (FName *)FVar11.Data != pFVar1; FVar11.Data = FVar11.Data + 0x28) {
        if (4 < (byte)LogNiagara._0_1_) {
          ::FName::ToString((FName *)FVar11.Data,&local_48);
          ::FName::ToString((FName *)((longlong)FVar11.Data + 8),&local_58);
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
        }
      }
      if (4 < (byte)LogNiagara._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      }
      EVar6 = local_res20;
      if ((FName *)local_90.Nodes.AllocatorInstance.Data != (FName *)0x0) {
        FMemory::Free(local_90.Nodes.AllocatorInstance.Data);
        EVar6 = local_res20;
      }
    }
    UObjectBaseUtility::GetPathName(this_00,&local_68,(UObject *)0x0);
    bVar5 = ::FString::MatchesWildcard(&local_68,(wchar_t *)FVar17.Data,iVar18 + -1,IgnoreCase);
    if (bVar5) {
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      goto LAB_1493d486b;
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  } while( true );
}

// `scalar_deleting_destructor' @ 1493d4e60

void * __thiscall
FNiagaraBoundsCalculatorHelper<1,0,0>::_scalar_deleting_destructor_
          (FNiagaraBoundsCalculatorHelper<1,0,0> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FNiagaraBoundsCalculator__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1493d4ea0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`FNiagaraSystemSimulation::SimCacheTick_GameThread'::__l17::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1493d4f10

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`FNiagaraSystemSimulation::SimCacheTick_GameThread'::__l17::<lambda_2>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
      ::Free((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              *)&SmallTaskAllocator,this);
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1493d4f80

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FNiagaraSystemSimulation::SimCacheTick_GameThread'::__l17::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1493d4fc0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FNiagaraSystemSimulation::SimCacheTick_GameThread'::__l17::<lambda_2>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1493d5000

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FNiagaraSystemRenderData::SetRenderingEnabled_GT'::__l12::TSTR_FNiagaraSystemRenderData_SetRenderingEnabled379>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FNiagaraSystemRenderData::SetRenderingEnabled_GT'::`12'::TSTR_FNiagaraSystemRenderData_SetRenderingEnabled379>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1493d5060

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FNiagaraSystemRenderData::RecacheRenderers'::__l2::TSTR_SignalFence326>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FNiagaraSystemRenderData::RecacheRenderers'::`2'::TSTR_SignalFence326>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1493d50c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSystemGpuComputeProxy::FNiagaraSystemGpuComputeProxy'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraSystemGpuComputeProxy::FNiagaraSystemGpuComputeProxy'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1493d5100

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraSystem::FStaticBuffersDeletor::operator()'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraSystem::FStaticBuffersDeletor::operator()'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1493d5140

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSystemGpuComputeProxy::AddToRenderThread'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraSystemGpuComputeProxy::AddToRenderThread'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1493d5180

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSystemGpuComputeProxy::ClearTicksFromRenderThread'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraSystemGpuComputeProxy::ClearTicksFromRenderThread'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1493d51c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSystemGpuComputeProxy::RemoveFromRenderThread'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraSystemGpuComputeProxy::RemoveFromRenderThread'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1493d5200

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraSystem::ComputeEmittersExecutionOrder'::__l4::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraSystem::ComputeEmittersExecutionOrder'::`4'::<lambda_1>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1493d5240

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSystemInstance::GenerateAndSubmitGPUTick'::__l5::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraSystemInstance::GenerateAndSubmitGPUTick'::`5'::<lambda_1>,1,1>
        ::_vftable_;
  DestructItems<TRefCountPtr<FRHIUniformBuffer>,int>
            (*(TRefCountPtr<FRHIUniformBuffer> **)((longlong)this + 0x10),
             *(int *)((longlong)this + 0x18));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1493d52a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraSystem::ComputeRenderersDrawOrder'::__l6::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraSystem::ComputeRenderersDrawOrder'::`6'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1493d52e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UNiagaraSystem::PrecachePSOs'::__l9::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UNiagaraSystem::PrecachePSOs'::`9'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1493d5320

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSystemInstanceTickConcurrentTask::DoTask'::__l18::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick> *pTVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__BC___DoTask_FNiagaraSystemInstanceTickConcurrentTask__QEAAXW4Type_ENamedThreads__AEBV__TRefCountPtr_VFBaseGraphTask_____Z__00_00_Function_Private_Core_UE__6B_
  ;
  pTVar1 = *(TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick> **)
            ((longlong)this + 0x1c8);
  if (*(TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick> **)((longlong)this + 0x1c8) ==
      (TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick> *)0x0) {
    pTVar1 = (TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick> *)((longlong)this + 8);
  }
  DestructItems<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>,int>
            (pTVar1,*(int *)((longlong)this + 0x1d0));
  if (*(void **)((longlong)this + 0x1c8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x1c8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1493d53a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSystemInstanceFinalizeTask::DoTask'::__l28::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick> *pTVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__BM___DoTask_FNiagaraSystemInstanceFinalizeTask__QEAAXW4Type_ENamedThreads__AEBV__TRefCountPtr_VFBaseGraphTask_____Z__00_00_Function_Private_Core_UE__6B_
  ;
  pTVar1 = *(TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick> **)
            ((longlong)this + 0x1c8);
  if (*(TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick> **)((longlong)this + 0x1c8) ==
      (TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick> *)0x0) {
    pTVar1 = (TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick> *)((longlong)this + 8);
  }
  DestructItems<TTuple<FNiagaraSystemGpuComputeProxy_*,FNiagaraGPUSystemTick>,int>
            (pTVar1,*(int *)((longlong)this + 0x1d0));
  if (*(void **)((longlong)this + 0x1c8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x1c8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1493d5420

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSystemStaticBuffers::Finalize'::__l12::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraSystemStaticBuffers::Finalize'::`12'::<lambda_1>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1493d5460

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSystemRenderData::SetRenderingEnabled_GT'::__l12::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraSystemRenderData::SetRenderingEnabled_GT'::`12'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1493d54a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSystemRenderData::RecacheRenderers'::__l2::<lambda_2>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraSystemRenderData::RecacheRenderers'::`2'::<lambda_2>,1,0>::
        _vftable_;
  puVar3 = *(undefined8 **)((longlong)this + 8);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1493d5510

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraSystemRenderData::RecacheRenderers'::__l2::<lambda_3>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraSystemRenderData::RecacheRenderers'::`2'::<lambda_3>,1,1>::
        _vftable_;
  puVar3 = *(undefined8 **)((longlong)this + 0x20);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1493d5580

void * __thiscall
TGraphTask<FNiagaraSystemInstanceFinalizeTask>::_scalar_deleting_destructor_
          (TGraphTask<FNiagaraSystemInstanceFinalizeTask> *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1493d55e0

void * __thiscall
TGraphTask<FNiagaraSystemInstanceTickConcurrentTask>::_scalar_deleting_destructor_
          (TGraphTask<FNiagaraSystemInstanceTickConcurrentTask> *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1493d5640

void * __thiscall
TGraphTask<FNiagaraSystemSimulationAllWorkCompleteTask>::_scalar_deleting_destructor_
          (TGraphTask<FNiagaraSystemSimulationAllWorkCompleteTask> *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1493d56a0

void * __thiscall
TGraphTask<FNiagaraSystemSimulationSpawnConcurrentTask>::_scalar_deleting_destructor_
          (TGraphTask<FNiagaraSystemSimulationSpawnConcurrentTask> *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0x188);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1493d5700

void * __thiscall
TGraphTask<FNiagaraSystemSimulationTickConcurrentTask>::_scalar_deleting_destructor_
          (TGraphTask<FNiagaraSystemSimulationTickConcurrentTask> *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0x188);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1493d5760

void * __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FNiagaraSystemRenderData::SetRenderingEnabled_GT'::__l12::TSTR_FNiagaraSystemRenderData_SetRenderingEnabled379>_>'::__l2::<lambda_1>_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1493d57c0

void * __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FNiagaraSystemRenderData::RecacheRenderers'::__l2::TSTR_SignalFence326>_>'::__l2::<lambda_1>_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1493d5820

void * __thiscall
TGraphTask<FNiagaraSystemNullCompletionTask>::_scalar_deleting_destructor_
          (TGraphTask<FNiagaraSystemNullCompletionTask> *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1493d5880

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FGuid,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FGuid,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1493d58c0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNiagaraEmitterCompiledData,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FNiagaraEmitterCompiledData,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1493d5900

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNiagaraScriptDebuggerInfo,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FNiagaraScriptDebuggerInfo,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x188);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1493d5940

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TArray<TSharedPtr<FNiagaraScriptDebuggerInfo,1>,TSizedDefaultAllocator<32>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TArray<TSharedPtr<FNiagaraScriptDebuggerInfo,1>,TSizedDefaultAllocator<32>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1493d5980

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNiagaraEmitterInstanceImpl,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FNiagaraEmitterInstanceImpl,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x8d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1493d59c0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNiagaraStatelessEmitterInstance,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FNiagaraStatelessEmitterInstance,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1493d5a00

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNiagaraSystemInstance,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FNiagaraSystemInstance,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1493d5a40

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNiagaraSystemSimulation,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FNiagaraSystemSimulation,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x6d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1493d5a80

void * __thiscall
FNiagaraDistributionBase::_scalar_deleting_destructor_(FNiagaraDistributionBase *this,uint param_1)

{
  FInstancedStruct::Reset(&this->ParameterExpression);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1493d5ac0

void * __thiscall
FNiagaraDistributionRangeFloat::_scalar_deleting_destructor_
          (FNiagaraDistributionRangeFloat *this,uint param_1)

{
  FInstancedStruct::Reset((FInstancedStruct *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1493d5b00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
FNiagaraSystemGpuComputeProxy::_scalar_deleting_destructor_
          (FNiagaraSystemGpuComputeProxy *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  FRHIShaderResourceView *this_00;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  
  bVar3 = IsInRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemGpuComputeProxy.cpp"
                       ,0x4e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  if (this->DebugOwnerComputeDispatchInterface != (FNiagaraGpuComputeDispatchInterface *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DebugOwnerComputeDispatchInterface == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemGpuComputeProxy.cpp"
                       ,0x4f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  DestructItems<FNiagaraGPUSystemTick,int>
            ((FNiagaraGPUSystemTick *)(this->PendingTicks).AllocatorInstance.Data,
             (this->PendingTicks).ArrayNum);
  pFVar1 = (this->PendingTicks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ComputeContexts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this_00 = (this->StaticFloatBuffer).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1493d5bd0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
FNiagaraSystemInstance::_scalar_deleting_destructor_(FNiagaraSystemInstance *this,uint param_1)

{
  ~FNiagaraSystemInstance(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1493d5c10

void * __thiscall
FNiagaraSystemInstanceFixLayout::_scalar_deleting_destructor_
          (FNiagaraSystemInstanceFixLayout *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1493d5c40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void * __thiscall
FNiagaraSystemScriptExecutionContext::_scalar_deleting_destructor_
          (FNiagaraSystemScriptExecutionContext *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FNiagaraSystemScriptExecutionContext::FExternalFuncInfo,int>
            ((FExternalFuncInfo *)(this->ExtFunctionInfo).AllocatorInstance.Data,
             (this->ExtFunctionInfo).ArrayNum);
  pFVar1 = (this->ExtFunctionInfo).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FNiagaraScriptExecutionContextBase::~FNiagaraScriptExecutionContextBase
            ((FNiagaraScriptExecutionContextBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1493d5cb0

void * __thiscall
FNiagaraTypeRegistry::_scalar_deleting_destructor_(FNiagaraTypeRegistry *this,uint param_1)

{
  ~FNiagaraTypeRegistry(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1493d5cf0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void * __thiscall
UNiagaraSimulationStageBase::_scalar_deleting_destructor_
          (UNiagaraSimulationStageBase *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UNiagaraSimulationStageBase__6B_;
  UNiagaraMergeable::~UNiagaraMergeable((UNiagaraMergeable *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1493d5d50

void * __thiscall
UNiagaraSimulationStageGeneric::_scalar_deleting_destructor_
          (UNiagaraSimulationStageGeneric *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraSimulationStageGeneric__6B_;
  pFVar1 = (this->ElementCountZ).DefaultValue.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ElementCountY).DefaultValue.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ElementCountX).DefaultValue.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OverrideGpuDispatchNumThreadsZ).DefaultValue.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OverrideGpuDispatchNumThreadsY).DefaultValue.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OverrideGpuDispatchNumThreadsX).DefaultValue.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DataInterface).BoundVariable.VarData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NumIterations).DefaultValue.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UNiagaraSimulationStageBase__6B_;
  UNiagaraMergeable::~UNiagaraMergeable((UNiagaraMergeable *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1a8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1493d5e40

void * __thiscall
UNiagaraSpriteRendererProperties::_scalar_deleting_destructor_
          (UNiagaraSpriteRendererProperties *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraSpriteRendererProperties__6B_;
  pFVar1 = (this->DerivedData).BoundingGeometry.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RendererLayoutWithoutCustomSort).VFVariables_RT.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RendererLayoutWithoutCustomSort).VFVariables_GT.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RendererLayoutWithCustomSort).VFVariables_RT.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RendererLayoutWithCustomSort).VFVariables_GT.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaterialParameters).StaticBoolParameters.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaterialParameters).TextureParameters.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaterialParameters).VectorParameters.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaterialParameters).ScalarParameters.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaterialParameters).AttributeBindings.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaterialUserParamBinding).Parameter.VarData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UNiagaraRendererProperties::~UNiagaraRendererProperties((UNiagaraRendererProperties *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x528);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1493d5f60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void * __thiscall UNiagaraSystem::_scalar_deleting_destructor_(UNiagaraSystem *this,uint param_1)

{
  ~UNiagaraSystem(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x5f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1493d5fc0

void * __thiscall
UNiagaraSystemCollection::_scalar_deleting_destructor_(UNiagaraSystemCollection *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraSystemCollection__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SystemCollection).AsyncLoadHandle.SharedReferenceCount.ReferenceController);
  pFVar1 = (this->SystemCollection).SystemsInternal.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSoftObjectPtr<UNiagaraSystem>,int>
            ((TSoftObjectPtr<UNiagaraSystem> *)
             (this->SystemCollection).Systems.AllocatorInstance.Data,
             (this->SystemCollection).Systems.ArrayNum);
  pFVar1 = (this->SystemCollection).Systems.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDataAsset::~UDataAsset((UDataAsset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x68);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraSimStageExecutionData @ 1493e0310

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraSimStageExecutionData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraSimulationStageBase @ 1493e0320

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraSimulationStageBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraSpriteRendererProperties @ 1493e0330

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraSpriteRendererProperties(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraSystem @ 1493e0340

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraSystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraSystemCollection @ 1493e0350

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraSystemCollection(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraSystemEmitterState @ 1493e0360

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraSystemEmitterState(void)

{
  return;
}

// GetPostActorTickPriority @ 1493e8600

/* WARNING: Enum "Type": Some values do not have unique names */

Type __cdecl NiagaraSimulationTaskPriority::GetPostActorTickPriority(void)

{
  int iVar1;
  Type TVar2;
  int iVar3;
  
  iVar3 = 3;
  if (GPostActorTickPriority < 3) {
    iVar3 = GPostActorTickPriority;
  }
  iVar1 = 0;
  if (0 < iVar3) {
    iVar1 = iVar3;
  }
  TVar2 = FAutoConsoleTaskPriority::Get(GTaskPriorities + iVar1,AnyNormalThreadNormalTask);
  return TVar2;
}

// GetTickGroupPriority @ 1493e9de0

/* WARNING: Enum "Type": Some values do not have unique names */

Type __cdecl NiagaraSimulationTaskPriority::GetTickGroupPriority(ETickingGroup param_1,bool param_2)

{
  Type TVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = GTickGroupPriorities[0];
  if ((-1 < GPerfCapturePriority) &&
     ((0 < (int)FParticlePerfStats::SystemStatsReaders ||
      (0 < (int)FParticlePerfStats::ComponentStatsReaders)))) {
    iVar3 = GPerfCapturePriority;
  }
  if ((!param_2) && (-1 < GNoneOverlappingPriority)) {
    iVar3 = GNoneOverlappingPriority;
  }
  iVar2 = 3;
  if (iVar3 < 3) {
    iVar2 = iVar3;
  }
  iVar3 = 0;
  if (0 < iVar2) {
    iVar3 = iVar2;
  }
  TVar1 = FAutoConsoleTaskPriority::Get(GTaskPriorities + iVar3,AnyNormalThreadNormalTask);
  return TVar1;
}

// GetTypeHash @ 1493ea1b0

uint __cdecl GetTypeHash(FNiagaraTypeDefinition *param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar1 = param_1->UnderlyingType;
  uVar3 = param_1->UnderlyingTypePathNameHash - (uint)uVar1 ^ (uint)(uVar1 >> 0xd);
  uVar2 = (-0x61c88647 - uVar3) - (uint)uVar1 ^ uVar3 << 8;
  uVar5 = (uVar1 - uVar2) - uVar3 ^ uVar2 >> 0xd;
  uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 >> 0xc;
  uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 << 0x10;
  uVar5 = (uVar5 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 << 10;
  uVar2 = (uVar5 - uVar2) - uVar3 ^ uVar2 >> 0xf;
  iVar4 = uVar2 - param_1->Flags;
  uVar3 = 0x9e3779b9 - uVar2 ^ iVar4 * 0x100;
  uVar5 = (param_1->Flags - uVar3) - iVar4 ^ uVar3 >> 0xd;
  uVar2 = (iVar4 - uVar5) - uVar3 ^ uVar5 >> 0xc;
  uVar3 = (uVar3 - uVar2) - uVar5 ^ uVar2 << 0x10;
  uVar5 = (uVar5 - uVar2) - uVar3 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar5) - uVar3 ^ uVar5 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar5 ^ uVar2 << 10;
  return (uVar5 - uVar3) - uVar2 ^ uVar3 >> 0xf;
}

// Initialize @ 1493ee850

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl NiagaraSimulationTaskPriority::Initialize(void)

{
  if (!GIsInitialized) {
    GTickGroupPriorities._0_8_ = ___xmm_00000001000000010000000100000001;
    GTickGroupPriorities._8_8_ = _UNK_150631da8;
    GIsInitialized = true;
    GTickGroupPriorities._16_8_ = ___xmm_00000001000000010000000100000001;
    GTickGroupPriorities._24_8_ = _UNK_150631da8;
  }
  return;
}

// PluginUnmounted @ 1493f1300

void __cdecl NiagaraTypeRegistryLocal::PluginUnmounted(IPlugin *param_1)

{
  FString local_18;
  
  (**(code **)(*(longlong *)param_1 + 0x38))(param_1,&local_18);
  FNiagaraTypeRegistry::Get();
  FNiagaraTypeRegistry::InvalidateTypesByPath(&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// UpdateTickGroupPriorities @ 149407c80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl NiagaraSimulationTaskPriority::UpdateTickGroupPriorities(IConsoleVariable *param_1)

{
  short *psVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  UEnum *this;
  ForAnyElementType _Str;
  ForAnyElementType this_00;
  FScriptContainerElement *pFVar8;
  int iVar9;
  short *psVar10;
  undefined1 local_res10 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  FString local_38;
  
  if (!GIsInitialized) {
    GTickGroupPriorities._0_8_ = ___xmm_00000001000000010000000100000001;
    GTickGroupPriorities._8_8_ = _UNK_150631da8;
    GIsInitialized = true;
    GTickGroupPriorities._16_8_ = ___xmm_00000001000000010000000100000001;
    GTickGroupPriorities._24_8_ = _UNK_150631da8;
  }
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  ::FString::ParseIntoArray(&GTickGroupPrioritiesString,&local_58,L",",true);
  this = StaticEnum<enum_ETickingGroup>();
  if (this == (UEnum *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TickingGroupEnum",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSimulationTaskPriority.cpp"
                       ,0x3b,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar3 = local_58.ArrayNum;
  pFVar8 = local_58.AllocatorInstance.Data + (longlong)local_58.ArrayNum * 0x10;
  this_00.Data = local_58.AllocatorInstance.Data;
  do {
    while( true ) {
      if (local_58.ArrayNum != iVar3) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (this_00.Data == pFVar8) {
        DestructItems<FString,int>((FString *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
        if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.AllocatorInstance.Data);
        }
        return;
      }
      psVar1 = *(short **)this_00.Data;
      iVar7 = *(int *)(this_00.Data + 8);
      psVar10 = psVar1;
      if (psVar1 != psVar1 + iVar7) break;
LAB_149407e45:
      this_00.Data = this_00.Data + 0x10;
    }
    do {
      if (*psVar10 == 0x3a) {
        iVar9 = (int)((longlong)psVar10 - (longlong)psVar1 >> 1);
        if (iVar9 != -1) {
          iVar5 = iVar7 + -1;
          if (iVar7 == 0) {
            iVar5 = 0;
          }
          if (iVar9 + 1 <= iVar5) {
            ::FString::Mid((FString *)this_00.Data,&local_38,0,iVar9);
            uVar6 = UEnum::GetIndexByNameString(this,&local_38,None);
            if (uVar6 < 8) {
              ::FString::RightChop((FString *)this_00.Data,&local_48,iVar9 + 1);
              _Str.Data = (FScriptContainerElement *)L"";
              if (local_48.Data.ArrayNum != 0) {
                _Str.Data = local_48.Data.AllocatorInstance.Data;
              }
              iVar7 = _wtoi((wchar_t *)_Str.Data);
              if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_48.Data.AllocatorInstance.Data);
              }
              iVar9 = 3;
              if (iVar7 < 3) {
                iVar9 = iVar7;
              }
              iVar7 = 0;
              if (0 < iVar9) {
                iVar7 = iVar9;
              }
              GTickGroupPriorities[(int)uVar6] = iVar7;
            }
            if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_38.Data.AllocatorInstance.Data);
            }
          }
        }
        goto LAB_149407e45;
      }
      psVar10 = psVar10 + 1;
    } while (psVar10 != psVar1 + iVar7);
    this_00.Data = this_00.Data + 0x10;
  } while( true );
}

// Z_Construct_UClass_UNiagaraSimulationStageBase_NoRegister @ 149409b40

UClass * __cdecl Z_Construct_UClass_UNiagaraSimulationStageBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraSimulationStageBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraSimulationStageBase",
               &Z_Registration_Info_UClass_UNiagaraSimulationStageBase.InnerSingleton,
               UNiagaraSimulationStageBase::StaticRegisterNativesUNiagaraSimulationStageBase,0x40,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraSimulationStageBase>,
               InternalVTableHelperCtorCaller<UNiagaraSimulationStageBase>,local_res8,
               UNiagaraMergeable::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraSimulationStageBase.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraSimulationStageGeneric_NoRegister @ 149409c00

UClass * __cdecl Z_Construct_UClass_UNiagaraSimulationStageGeneric_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraSimulationStageGeneric.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraSimulationStageGeneric",
               &Z_Registration_Info_UClass_UNiagaraSimulationStageGeneric.InnerSingleton,
               UNiagaraSimulationStageGeneric::StaticRegisterNativesUNiagaraSimulationStageGeneric,
               0x1a8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraSimulationStageGeneric>,
               InternalVTableHelperCtorCaller<UNiagaraSimulationStageGeneric>,local_res8,
               UNiagaraSimulationStageBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraSimulationStageGeneric.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraSpriteRendererProperties_NoRegister @ 149409cc0

UClass * __cdecl Z_Construct_UClass_UNiagaraSpriteRendererProperties_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraSpriteRendererProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraSpriteRendererProperties",
               &Z_Registration_Info_UClass_UNiagaraSpriteRendererProperties.InnerSingleton,
               UNiagaraSpriteRendererProperties::
               StaticRegisterNativesUNiagaraSpriteRendererProperties,0x528,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraSpriteRendererProperties>,
               InternalVTableHelperCtorCaller<UNiagaraSpriteRendererProperties>,local_res8,
               UNiagaraRendererProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraSpriteRendererProperties.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraSystemCollection_NoRegister @ 149409d80

UClass * __cdecl Z_Construct_UClass_UNiagaraSystemCollection_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraSystemCollection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraSystemCollection",
               &Z_Registration_Info_UClass_UNiagaraSystemCollection.InnerSingleton,
               UNiagaraSystemCollection::StaticRegisterNativesUNiagaraSystemCollection,0x68,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraSystemCollection>,
               InternalVTableHelperCtorCaller<UNiagaraSystemCollection>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraSystemCollection.InnerSingleton;
}

// Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData @ 149409e40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraEmitterCompiledData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraEmitterCompiledData.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraEmitterCompiledData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraEmitterCompiledData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraEmitterCompiledData.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FNiagaraEmitterStateData @ 149409ec0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraEmitterStateData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraEmitterStateData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraEmitterStateData.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraEmitterStateData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraEmitterStateData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraEmitterStateData.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FNiagaraSimStageExecutionLoopData @ 149409f40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraSimStageExecutionLoopData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraSimStageExecutionLoopData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraSimStageExecutionLoopData.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraSimStageExecutionLoopData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraSimStageExecutionLoopData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraSimStageExecutionLoopData.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FNiagaraSimStageExecutionLoopEditorData @ 149409fc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraSimStageExecutionLoopEditorData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraSimStageExecutionLoopEditorData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraSimStageExecutionLoopEditorData.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraSimStageExecutionLoopEditorData_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraSimStageExecutionLoopEditorData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraSimStageExecutionLoopEditorData.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FNiagaraSystemStateData @ 14940a040

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraSystemStateData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraSystemStateData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraSystemStateData.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraSystemStateData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraSystemStateData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraSystemStateData.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// SpriteRendererPropertiesToDeferredInit'' @ 150415340

void __cdecl
`dynamic_atexit_destructor_for_'UNiagaraSpriteRendererProperties::
SpriteRendererPropertiesToDeferredInit__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UNiagaraSpriteRendererProperties::SpriteRendererPropertiesToDeferredInit.
               AllocatorInstance.Data;
  if (UNiagaraSpriteRendererProperties::SpriteRendererPropertiesToDeferredInit.AllocatorInstance.
      Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (UNiagaraSpriteRendererProperties::SpriteRendererPropertiesToDeferredInit.AllocatorInstance.
      Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'CCmdDumpPriorities'' @ 150415360

void __cdecl
NiagaraSimulationTaskPriority::_dynamic_atexit_destructor_for__CCmdDumpPriorities__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CCmdDumpPriorities);
  return;
}

// `dynamic_atexit_destructor_for_'CCmdRunTest'' @ 150415380

void __cdecl NiagaraSimulationTaskPriority::_dynamic_atexit_destructor_for__CCmdRunTest__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CCmdRunTest);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCleanStatelessEmitterHandles'' @ 1504153a0

void __cdecl
NiagaraSystemPrivate::_dynamic_atexit_destructor_for__CVarCleanStatelessEmitterHandles__(void)

{
  CVarCleanStatelessEmitterHandles._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCleanStatelessEmitterHandles);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableNiagaraRuntimeCycleCounts'' @ 1504153c0

void __cdecl _dynamic_atexit_destructor_for__CVarEnableNiagaraRuntimeCycleCounts__(void)

{
  CVarEnableNiagaraRuntimeCycleCounts._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarEnableNiagaraRuntimeCycleCounts);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGTickTaskShouldWait'' @ 1504153e0

void __cdecl
NiagaraSystemSimulationLocal::_dynamic_atexit_destructor_for__CVarGTickTaskShouldWait__(void)

{
  CVarGTickTaskShouldWait._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGTickTaskShouldWait);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLastRenderTimeSafetyBias'' @ 150415400

void __cdecl _dynamic_atexit_destructor_for__CVarLastRenderTimeSafetyBias__(void)

{
  CVarLastRenderTimeSafetyBias._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLastRenderTimeSafetyBias);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraAllowDeferredReset'' @ 150415420

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraAllowDeferredReset__(void)

{
  CVarNiagaraAllowDeferredReset._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNiagaraAllowDeferredReset);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraBatchGPUTickSubmit'' @ 150415440

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraBatchGPUTickSubmit__(void)

{
  CVarNiagaraBatchGPUTickSubmit._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNiagaraBatchGPUTickSubmit);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraCompileWaitLoggingTerminationCap'' @ 150415460

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraCompileWaitLoggingTerminationCap__(void)

{
  CVarNiagaraCompileWaitLoggingTerminationCap._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNiagaraCompileWaitLoggingTerminationCap);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraCompileWaitLoggingThreshold'' @ 150415480

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraCompileWaitLoggingThreshold__(void)

{
  CVarNiagaraCompileWaitLoggingThreshold._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNiagaraCompileWaitLoggingThreshold);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraConcurrentGPUTickInit'' @ 1504154a0

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraConcurrentGPUTickInit__(void)

{
  CVarNiagaraConcurrentGPUTickInit._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNiagaraConcurrentGPUTickInit);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraDumpSystemData'' @ 1504154c0

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraDumpSystemData__(void)

{
  CVarNiagaraDumpSystemData._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNiagaraDumpSystemData);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraEmitterBoundsDynamicExpandMultiplier'' @ 1504154e0

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraEmitterBoundsDynamicExpandMultiplier__(void)

{
  CVarNiagaraEmitterBoundsDynamicExpandMultiplier._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNiagaraEmitterBoundsDynamicExpandMultiplier);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraEmitterBoundsDynamicSnapValue'' @ 150415500

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraEmitterBoundsDynamicSnapValue__(void)

{
  CVarNiagaraEmitterBoundsDynamicSnapValue._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNiagaraEmitterBoundsDynamicSnapValue);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraEmitterBoundsFixedExpandMultiplier'' @ 150415520

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraEmitterBoundsFixedExpandMultiplier__(void)

{
  CVarNiagaraEmitterBoundsFixedExpandMultiplier._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNiagaraEmitterBoundsFixedExpandMultiplier);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraForceLastTickGroup'' @ 150415540

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraForceLastTickGroup__(void)

{
  CVarNiagaraForceLastTickGroup._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNiagaraForceLastTickGroup);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraPrecachePSOAtAssetLoadingTime'' @ 150415560

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraPrecachePSOAtAssetLoadingTime__(void)

{
  CVarNiagaraPrecachePSOAtAssetLoadingTime._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNiagaraPrecachePSOAtAssetLoadingTime);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraScalabiltiyMinumumMaxDistance'' @ 150415580

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraScalabiltiyMinumumMaxDistance__(void)

{
  CVarNiagaraScalabiltiyMinumumMaxDistance._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNiagaraScalabiltiyMinumumMaxDistance);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraSkipTickDeltaSeconds'' @ 1504155a0

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraSkipTickDeltaSeconds__(void)

{
  CVarNiagaraSkipTickDeltaSeconds._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNiagaraSkipTickDeltaSeconds);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraSystemSimulationAllowASync'' @ 1504155c0

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraSystemSimulationAllowASync__(void)

{
  CVarNiagaraSystemSimulationAllowASync._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNiagaraSystemSimulationAllowASync);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraSystemSimulationAllowASyncSimCache'' @ 1504155e0

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraSystemSimulationAllowASyncSimCache__(void)

{
  CVarNiagaraSystemSimulationAllowASyncSimCache._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNiagaraSystemSimulationAllowASyncSimCache);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraSystemSimulationMaxTickSubsteps'' @ 150415600

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraSystemSimulationMaxTickSubsteps__(void)

{
  CVarNiagaraSystemSimulationMaxTickSubsteps._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNiagaraSystemSimulationMaxTickSubsteps);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraSystemSimulationTaskStallTimeout'' @ 150415620

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraSystemSimulationTaskStallTimeout__(void)

{
  CVarNiagaraSystemSimulationTaskStallTimeout._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNiagaraSystemSimulationTaskStallTimeout);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraSystemSimulationTickBatchMode'' @ 150415640

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraSystemSimulationTickBatchMode__(void)

{
  CVarNiagaraSystemSimulationTickBatchMode._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNiagaraSystemSimulationTickBatchMode);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraSystemSimulationTickBatchSize'' @ 150415660

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraSystemSimulationTickBatchSize__(void)

{
  CVarNiagaraSystemSimulationTickBatchSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNiagaraSystemSimulationTickBatchSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNoneOverlappingPriority'' @ 150415680

void __cdecl
NiagaraSimulationTaskPriority::_dynamic_atexit_destructor_for__CVarNoneOverlappingPriority__(void)

{
  CVarNoneOverlappingPriority._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNoneOverlappingPriority);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPerfCapturePriority'' @ 1504156a0

void __cdecl
NiagaraSimulationTaskPriority::_dynamic_atexit_destructor_for__CVarPerfCapturePriority__(void)

{
  CVarPerfCapturePriority._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPerfCapturePriority);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPostActorTickPriority'' @ 1504156c0

void __cdecl
NiagaraSimulationTaskPriority::_dynamic_atexit_destructor_for__CVarPostActorTickPriority__(void)

{
  CVarPostActorTickPriority._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPostActorTickPriority);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSystemUpdateOnSpawn'' @ 1504156e0

void __cdecl _dynamic_atexit_destructor_for__CVarSystemUpdateOnSpawn__(void)

{
  CVarSystemUpdateOnSpawn._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSystemUpdateOnSpawn);
  return;
}

// `dynamic_atexit_destructor_for_'CVarTickGroupPriorities'' @ 150415700

void __cdecl
NiagaraSimulationTaskPriority::_dynamic_atexit_destructor_for__CVarTickGroupPriorities__(void)

{
  CVarTickGroupPriorities._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarTickGroupPriorities);
  return;
}

// `dynamic_atexit_destructor_for_'CVarTickTaskAllowFrameOverlap'' @ 150415720

void __cdecl
NiagaraSystemSimulationLocal::_dynamic_atexit_destructor_for__CVarTickTaskAllowFrameOverlap__(void)

{
  CVarTickTaskAllowFrameOverlap._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarTickTaskAllowFrameOverlap);
  return;
}

// `dynamic_atexit_destructor_for_'CVarWaitForAsyncStallWarnThresholdMS'' @ 150415740

void __cdecl _dynamic_atexit_destructor_for__CVarWaitForAsyncStallWarnThresholdMS__(void)

{
  CVarWaitForAsyncStallWarnThresholdMS._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarWaitForAsyncStallWarnThresholdMS);
  return;
}

// `dynamic_atexit_destructor_for_'CmdReportSystemMem'' @ 150415760

void __cdecl NiagaraMemReportInternal::_dynamic_atexit_destructor_for__CmdReportSystemMem__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CmdReportSystemMem);
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 150415780

void __cdecl
`InternalGetDefaultObject<TResourceArray<float,0>_>'::__l3::
_dynamic_atexit_destructor_for__Default__(void)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)
             &`class_TResourceArray<float,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<float,0>_>(void)'
              ::__l3::Default._padding_);
  `class_TResourceArray<float,0>_const*___ptr64___cdecl_InternalGetDefaultObject<TResourceArray<float,0>_>(void)'
  ::__l3::Default._padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'DefaultSystemStateData'' @ 1504157b0

void __cdecl
`UNiagaraSystem::GetSystemStateData'::__l2::_dynamic_atexit_destructor_for__DefaultSystemStateData__
          (void)

{
  FInstancedStruct::Reset((FInstancedStruct *)&DefaultSystemStateData.LoopDelay._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&DefaultSystemStateData.LoopDuration._padding_);
  return;
}

// `dynamic_atexit_destructor_for_'Dummy'' @ 1504157e0

void __cdecl
`UNiagaraSystem::GetCurrentOverrideSettings'::__l2::_dynamic_atexit_destructor_for__Dummy__(void)

{
  if (::Dummy._padding_ != 0) {
    FMemory::Free((void *)::Dummy._padding_);
  }
  if (::Dummy._padding_ != 0) {
    FMemory::Free((void *)::Dummy._padding_);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'FilterPrefix'' @ 150415820

void __cdecl
`NiagaraMemReportInternal::<lambda_26>::operator()'::__l2::
_dynamic_atexit_destructor_for__FilterPrefix__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FilterPrefix.Data.AllocatorInstance.Data;
  if (FilterPrefix.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (FilterPrefix.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'GNullUtils'' @ 150415840

void __cdecl
`FNiagaraSystemInstance::GetSceneComponentUtils'::__l2::_dynamic_atexit_destructor_for__GNullUtils__
          (void)

{
  return;
}

// `dynamic_atexit_destructor_for_'GTaskPriorities'' @ 150415850

void __cdecl NiagaraSimulationTaskPriority::_dynamic_atexit_destructor_for__GTaskPriorities__(void)

{
  void *pvVar1;
  FAutoConsoleVariableRef *pFVar2;
  longlong lVar3;
  
  lVar3 = 4;
  pFVar2 = &CVarTickGroupPriorities;
  do {
    lVar3 = lVar3 + -1;
    ((FAutoConsoleObject *)(pFVar2 + -2))->_padding_ = (longlong)&___7FAutoConsoleVariableRef__6B_;
    FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)(pFVar2 + -2));
    if (*(void **)(pFVar2 + -3) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar2 + -3));
    }
    pvVar1 = *(void **)(pFVar2 + -4);
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    pFVar2 = pFVar2 + -4;
  } while (lVar3 != 0);
  return;
}

// `dynamic_atexit_destructor_for_'GTickGroupPrioritiesString'' @ 1504158c0

void __cdecl
NiagaraSimulationTaskPriority::_dynamic_atexit_destructor_for__GTickGroupPrioritiesString__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GTickGroupPrioritiesString.Data.AllocatorInstance.Data;
  if (GTickGroupPrioritiesString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (GTickGroupPrioritiesString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'RegisteredTypeIndexCacheTLS'' @ 1504158e0

void __cdecl
NiagaraTypeRegistryLocal::_dynamic_atexit_destructor_for__RegisteredTypeIndexCacheTLS__(void)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  *(undefined4 *)(lVar1 + 0x90a8) = 0;
  if (*(void **)(lVar1 + 0x90a0) != (void *)0x0) {
    FMemory::Free(*(void **)(lVar1 + 0x90a0));
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(lVar1 + 0x9060));
  return;
}

// `dynamic_atexit_destructor_for_'RegistryProxyContents'' @ 150415930

void __cdecl NiagaraTypeRegistryLocal::_dynamic_atexit_destructor_for__RegistryProxyContents__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9048);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Singleton'' @ 150415960

void __cdecl
`TLazySingleton<FNiagaraTypeRegistry>::GetLazy'::__l2::_dynamic_atexit_destructor_for__Singleton__
          (void)

{
  if (DAT_15527c7f0 != (undefined8 *)0x0) {
    (**(code **)*DAT_15527c7f0)(DAT_15527c7f0,0);
    DAT_15527c7f0 = (undefined8 *)0x0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'TypePrefix'' @ 150415990

void __cdecl
`NiagaraMemReportInternal::<lambda_26>::operator()'::__l2::
_dynamic_atexit_destructor_for__TypePrefix__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = TypePrefix.Data.AllocatorInstance.Data;
  if (TypePrefix.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (TypePrefix.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// operator() @ 150541fa0

bool __thiscall
``FNiagaraSystemSimulation::SimCacheTick_GameThread'::__l17::<lambda_2>::operator()'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_110362534745209178>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_110362534745209178>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

