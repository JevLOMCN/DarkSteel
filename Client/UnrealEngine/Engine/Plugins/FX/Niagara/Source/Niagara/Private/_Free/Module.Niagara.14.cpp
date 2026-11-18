// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 819

// ConvertedSWCStructSuffix'' @ 1411927a0

void __cdecl `dynamic_initializer_for_'FNiagaraTypeHelper::ConvertedSWCStructSuffix__(void)

{
  ::FString::FString(&FNiagaraTypeHelper::ConvertedSWCStructSuffix,L"_SWC");
  atexit(`dynamic_atexit_destructor_for_'FNiagaraTypeHelper::ConvertedSWCStructSuffix__);
  return;
}

// RemapTable'' @ 1411927d0

void __cdecl `dynamic_initializer_for_'FNiagaraTypeHelper::RemapTable__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FNiagaraTypeHelper::RemapTable__);
  return;
}

// RemapTableLock'' @ 1411927f0

void __cdecl `dynamic_initializer_for_'FNiagaraTypeHelper::RemapTableLock__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FNiagaraTypeHelper::RemapTableLock__);
  return;
}

// WorldManagers'' @ 141192810

void __cdecl `dynamic_initializer_for_'FNiagaraWorldManager::WorldManagers__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FNiagaraWorldManager::WorldManagers__);
  return;
}

// `dynamic_initializer_for_'CVarAllowCullProxies'' @ 141192830

void __cdecl _dynamic_initializer_for__CVarAllowCullProxies__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAllowCullProxies,L"fx.Niagara.AllowCullProxies",&GNiagaraAllowCullProxies,
             L"Toggles whether Niagara will use Cull Proxy systems in place of systems culled by scalability."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAllowCullProxies__);
  return;
}

// `dynamic_initializer_for_'CVarAllowVisibilityCullingForDynamicBounds'' @ 141192880

void __cdecl _dynamic_initializer_for__CVarAllowVisibilityCullingForDynamicBounds__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAllowVisibilityCullingForDynamicBounds,
             L"fx.Niagara.AllowVisibilityCullingForDynamicBounds",
             &GbAllowVisibilityCullingForDynamicBounds,
             L"Allow async work to continue until the end of the frame, if false it will complete within the tick group it\'s started in."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAllowVisibilityCullingForDynamicBounds__);
  return;
}

// `dynamic_initializer_for_'CVarCPUThreshold'' @ 1411928d0

void __cdecl
NiagaraStatelessComputeManagerPrivate::_dynamic_initializer_for__CVarCPUThreshold__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarCPUThreshold,L"fx.NiagaraStateless.ComputeManager.CPUThreshold",
             &GParticleCountCPUThreshold,
             L"When lower than this particle count prefer to use the CPU over dispatching a compute shader."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarCPUThreshold__);
  return;
}

// `dynamic_initializer_for_'CVarCSVSplitTime'' @ 141192920

void __cdecl _dynamic_initializer_for__CVarCSVSplitTime__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarCSVSplitTime,L"fx.Niagara.CSVSplitTime",&GNiagaraCSVSplitTime,
             L"Length of Niagara\'s split time events passed to the CSV profiler. There are used to give check more confined stat averages."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarCSVSplitTime__);
  return;
}

// `dynamic_initializer_for_'CVarEnableNiagaraDistanceCulling'' @ 141192970

void __cdecl _dynamic_initializer_for__CVarEnableNiagaraDistanceCulling__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableNiagaraDistanceCulling,L"fx.Niagara.Scalability.DistanceCulling",
             &GEnableNiagaraDistanceCulling,
             L"When non-zero, high level scalability culling based on distance is enabled.",0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableNiagaraDistanceCulling__);
  return;
}

// `dynamic_initializer_for_'CVarEnableNiagaraGlobalBudgetCulling'' @ 1411929c0

void __cdecl _dynamic_initializer_for__CVarEnableNiagaraGlobalBudgetCulling__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableNiagaraGlobalBudgetCulling,L"fx.Niagara.Scalability.GlobalBudgetCulling",
             &GEnableNiagaraGlobalBudgetCulling,
             L"When non-zero, high level scalability culling based on global time budget is enabled."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableNiagaraGlobalBudgetCulling__);
  return;
}

// `dynamic_initializer_for_'CVarEnableNiagaraInstanceCountCulling'' @ 141192a10

void __cdecl _dynamic_initializer_for__CVarEnableNiagaraInstanceCountCulling__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableNiagaraInstanceCountCulling,L"fx.Niagara.Scalability.InstanceCountCulling",
             &GEnableNiagaraInstanceCountCulling,
             L"When non-zero, high level scalability culling based on instance count is enabled.",0)
  ;
  atexit(_dynamic_atexit_destructor_for__CVarEnableNiagaraInstanceCountCulling__);
  return;
}

// `dynamic_initializer_for_'CVarEnableNiagaraVisCulling'' @ 141192a60

void __cdecl _dynamic_initializer_for__CVarEnableNiagaraVisCulling__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableNiagaraVisCulling,L"fx.Niagara.Scalability.VisibilityCulling",
             &GEnableNiagaraVisCulling,
             L"When non-zero, high level scalability culling based on visibility is enabled.",0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableNiagaraVisCulling__);
  return;
}

// `dynamic_initializer_for_'CVarFeatureMask_ExecuteCPU'' @ 141192ab0

void __cdecl NiagaraStatelessCommon::_dynamic_initializer_for__CVarFeatureMask_ExecuteCPU__(void)

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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,NiagaraStatelessCommon::<lambda_31>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarFeatureMask_ExecuteCPU,L"fx.NiagaraStateless.Feature.ExecuteCPU",
             &bFeatureMask_ExecuteCPU,L"When enabled simulations are allowed to execute on the CPU",
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
  atexit(_dynamic_atexit_destructor_for__CVarFeatureMask_ExecuteCPU__);
  return;
}

// `dynamic_initializer_for_'CVarFeatureMask_ExecuteGPU'' @ 141192bf0

void __cdecl NiagaraStatelessCommon::_dynamic_initializer_for__CVarFeatureMask_ExecuteGPU__(void)

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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,NiagaraStatelessCommon::<lambda_30>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarFeatureMask_ExecuteGPU,L"fx.NiagaraStateless.Feature.ExecuteGPU",
             &bFeatureMask_ExecuteGPU,L"When enabled simulations are allowed to execute on the GPU",
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
  atexit(_dynamic_atexit_destructor_for__CVarFeatureMask_ExecuteGPU__);
  return;
}

// `dynamic_initializer_for_'CVarFirstHighPriTickGroup'' @ 141192d30

void __cdecl
NiagaraWorldManagerInternal::_dynamic_initializer_for__CVarFirstHighPriTickGroup__(void)

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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,NiagaraWorldManagerInternal::<lambda_28>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarFirstHighPriTickGroup,L"fx.Niagara.WorldManager.FirstHighPriTickGroup",
             &GFirstHighPriTickGroup,
             L"Defines which tick groups should be set to high priority for the world manager.\n0 - (Default) all tick groups will run high priority.\n1 - The first tick group will be normal priority, all others high, etc."
             ,(TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,0);
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
  atexit(_dynamic_atexit_destructor_for__CVarFirstHighPriTickGroup__);
  return;
}

// `dynamic_initializer_for_'CVarFrequencyLUTNormalize'' @ 141192e70

void __cdecl
NiagaraStatelessModuleSolveVelocitiesAndForcesPrivate::
_dynamic_initializer_for__CVarFrequencyLUTNormalize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarFrequencyLUTNormalize,
             L"fx.NiagaraStateless.SolveVelocities.Noise.FrequencyLUTNormalize",
             &GFrequencyLUTNormalize,
             L"Modifier applied when looking up from normalized total travel into the LUT.",0);
  atexit(_dynamic_atexit_destructor_for__CVarFrequencyLUTNormalize__);
  return;
}

// `dynamic_initializer_for_'CVarFrequencyNormalize'' @ 141192ec0

void __cdecl
NiagaraStatelessModuleSolveVelocitiesAndForcesPrivate::
_dynamic_initializer_for__CVarFrequencyNormalize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarFrequencyNormalize,L"fx.NiagaraStateless.SolveVelocities.Noise.FrequencyNormalize"
             ,&GFrequencyNormalize,L"Translation from position -> lookup space.",0);
  atexit(_dynamic_atexit_destructor_for__CVarFrequencyNormalize__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraSpawnPerTickGroup'' @ 141192f10

void __cdecl _dynamic_initializer_for__CVarNiagaraSpawnPerTickGroup__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraSpawnPerTickGroup,L"fx.Niagara.WorldManager.SpawnPerTickGroup",
             &GNiagaraSpawnPerTickGroup,
             L"Will attempt to spawn new systems earlier (default enabled).",0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraSpawnPerTickGroup__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraWaitOnPreGC'' @ 141192f60

void __cdecl _dynamic_initializer_for__CVarNiagaraWaitOnPreGC__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraWaitOnPreGC,L"fx.Niagara.WaitOnPreGC",&GNiagaraWaitOnPreGC,
             L"Toggles whether Niagara will wait for all async tasks to complete before any GC calls."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraWaitOnPreGC__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraWorldManagerObjectPoolEnabled'' @ 141192fb0

void __cdecl _dynamic_initializer_for__CVarNiagaraWorldManagerObjectPoolEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraWorldManagerObjectPoolEnabled,L"fx.Niagara.WorldManager.ObjectPoolEnabled",
             &GNiagaraWorldManagerObjectPoolEnabled,L"Should we pool objects, yay or nay.",0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraWorldManagerObjectPoolEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraWorldManagerUseTickPasses'' @ 141193000

void __cdecl _dynamic_initializer_for__CVarNiagaraWorldManagerUseTickPasses__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraWorldManagerUseTickPasses,L"fx.Niagara.WorldManager.UseTickPasses",
             &GNiagaraWorldManagerUseTickPasses,
             L"When enabled we will use the tick passes to avoid blocking overlapping sims at tick boundaries."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraWorldManagerUseTickPasses__);
  return;
}

// `dynamic_initializer_for_'CVarNigaraAllowPrimedPools'' @ 141193050

void __cdecl _dynamic_initializer_for__CVarNigaraAllowPrimedPools__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNigaraAllowPrimedPools,L"fx.Niagara.AllowPrimedPools",&GNigaraAllowPrimedPools,
             L"Allow Niagara pools to be primed.",0);
  atexit(_dynamic_atexit_destructor_for__CVarNigaraAllowPrimedPools__);
  return;
}

// `dynamic_initializer_for_'CVarRollback_DelayNDCManagerInitialiation'' @ 1411930a0

void __cdecl
NiagaraRollbackCVars::_dynamic_initializer_for__CVarRollback_DelayNDCManagerInitialiation__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRollback_DelayNDCManagerInitialiation,
             L"fx.Niagara.Rollback.DelayNDCManagerInitialiation",&DelayNDCManagerInitialiation,
             L"When true, Niagara will not initialize it\'s NDC managers until the first tick of the world manager or first NDC use."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRollback_DelayNDCManagerInitialiation__);
  return;
}

// `dynamic_initializer_for_'CVarRollback_NewWorldCleanup'' @ 1411930f0

void __cdecl NiagaraRollbackCVars::_dynamic_initializer_for__CVarRollback_NewWorldCleanup__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRollback_NewWorldCleanup,L"fx.Niagara.Rollback.NewWorldCleanup",&NewWorldCleanup,
             L"When true we\'ll use the new World Manager Cleanup flows. False will use old legacy code."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRollback_NewWorldCleanup__);
  return;
}

// `dynamic_initializer_for_'CVarRollback_WorldManagerRespectsWorldCreateFXSystem'' @ 141193140

void __cdecl
NiagaraRollbackCVars::
_dynamic_initializer_for__CVarRollback_WorldManagerRespectsWorldCreateFXSystem__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRollback_WorldManagerRespectsWorldCreateFXSystem,
             L"fx.Niagara.Rollback.WorldManagerRespectsWorldCreateFXSystem",
             &WorldManagerRespectsWorldCreateFXSystem,
             L"When true, Niagara world managers will only be created for worlds with bCreateFXSystem==true in it\'s initialization options."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRollback_WorldManagerRespectsWorldCreateFXSystem__);
  return;
}

// `dynamic_initializer_for_'CVarTickParameterCollectionsOncePerFrame'' @ 141193190

void __cdecl
NiagaraWorldManagerInternal::_dynamic_initializer_for__CVarTickParameterCollectionsOncePerFrame__
          (void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarTickParameterCollectionsOncePerFrame,
             L"fx.Niagara.WorldManager.TickParameterCollectionsOncePerFrame",
             &GTickParameterCollectionsOncePerFrame,
             L"When true parameter collection updates will occur once per frame in the first tick group.\nWhen false updates will occur every tick group.\nUpdating constantly can cost performance but can fix issues with NPC values updated then used from a system in a later tick group, this would be a frame out without updateing each tick group."
             ,0x40);
  atexit(_dynamic_atexit_destructor_for__CVarTickParameterCollectionsOncePerFrame__);
  return;
}

// `dynamic_initializer_for_'CVarUseCache'' @ 1411931e0

void __cdecl NiagaraStatelessComputeManagerPrivate::_dynamic_initializer_for__CVarUseCache__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUseCache,L"fx.NiagaraStateless.ComputeManager.UseCache",&GUseDataBufferCache,
             L"When enabled we will attempt to reuse allocated buffers between frames.",0);
  atexit(_dynamic_atexit_destructor_for__CVarUseCache__);
  return;
}

// `dynamic_initializer_for_'CVarWorldLoopTime'' @ 141193230

void __cdecl _dynamic_initializer_for__CVarWorldLoopTime__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarWorldLoopTime,L"fx.Niagara.Debug.GlobalLoopTime",&GWorldLoopTime,
             L"If > 0 all Niagara FX will reset every N seconds. \n",0);
  atexit(_dynamic_atexit_destructor_for__CVarWorldLoopTime__);
  return;
}

// `dynamic_initializer_for_'Dummy'' @ 141193280

void __cdecl NiagaraVersionedObject::_dynamic_initializer_for__Dummy__(void)

{
  FGuid::NewGuid(&Dummy.Version.VersionGuid);
  Dummy.Version.bIsVisibleInVersionSelector = true;
  FText::FText(&Dummy.Desc);
  Dummy.Type = None;
  Dummy.Script.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  Dummy.Script.Data.ArrayNum = 0;
  Dummy.Script.Data.ArrayMax = 0;
  Dummy.Path.FilePath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  Dummy.Path.FilePath.Data.ArrayNum = 0;
  Dummy.Path.FilePath.Data.ArrayMax = 0;
  atexit(_dynamic_atexit_destructor_for__Dummy__);
  return;
}

// `dynamic_initializer_for_'DumpNiagaraWorldManagerCommand'' @ 1411932e0

void __cdecl _dynamic_initializer_for__DumpNiagaraWorldManagerCommand__(void)

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
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_24>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
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
                     (IConsoleManager::Singleton,L"DumpNiagaraWorldManager",
                      L"Dump Information About the Niagara World Manager Contents",&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject
            ((FAutoConsoleObject *)&DumpNiagaraWorldManagerCommand,pIVar5);
  DumpNiagaraWorldManagerCommand._0_8_ = &___7FAutoConsoleCommandWithWorldAndArgs__6B_;
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
  atexit(_dynamic_atexit_destructor_for__DumpNiagaraWorldManagerCommand__);
  return;
}

// `dynamic_initializer_for_'GCmdNiagaraPlaybackMode'' @ 141193470

void __cdecl _dynamic_initializer_for__GCmdNiagaraPlaybackMode__(void)

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
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_25>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
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
                     (IConsoleManager::Singleton,L"fx.Niagara.Debug.PlaybackMode",
                      L"Set playback mode\n0 - Play\n1 - Paused\n2 - Step\n",&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&GCmdNiagaraPlaybackMode,pIVar5);
  GCmdNiagaraPlaybackMode._0_8_ = &___7FAutoConsoleCommandWithWorldAndArgs__6B_;
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
  atexit(_dynamic_atexit_destructor_for__GCmdNiagaraPlaybackMode__);
  return;
}

// `dynamic_initializer_for_'GCmdNiagaraPlaybackRate'' @ 141193600

void __cdecl _dynamic_initializer_for__GCmdNiagaraPlaybackRate__(void)

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
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_26>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
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
                     (IConsoleManager::Singleton,L"fx.Niagara.Debug.PlaybackRate",
                      L"Set playback rate\n",&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&GCmdNiagaraPlaybackRate,pIVar5);
  GCmdNiagaraPlaybackRate._0_8_ = &___7FAutoConsoleCommandWithWorldAndArgs__6B_;
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
  atexit(_dynamic_atexit_destructor_for__GCmdNiagaraPlaybackRate__);
  return;
}

// `dynamic_initializer_for_'GCmdNiagaraScalabilityCullingMode'' @ 141193790

void __cdecl _dynamic_initializer_for__GCmdNiagaraScalabilityCullingMode__(void)

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
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_27>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
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
                     (IConsoleManager::Singleton,L"fx.Niagara.Scalability.CullingMode",
                      L"Set scalability culling mode\n0 - Enabled. Culling is enabled as normal.\n1 - Paused. No culling will occur but FX will still be tracked internally so culling can be resumed correctly later.\n2 - Disabled. No culling will occur and no FX will be tracked. Culling may not work correctly for some FX if enabled again after this.\n"
                      ,&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject
            ((FAutoConsoleObject *)&GCmdNiagaraScalabilityCullingMode,pIVar5);
  GCmdNiagaraScalabilityCullingMode._0_8_ = &___7FAutoConsoleCommandWithWorldAndArgs__6B_;
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
  atexit(_dynamic_atexit_destructor_for__GCmdNiagaraScalabilityCullingMode__);
  return;
}

// `dynamic_initializer_for_'GDumpNiagaraScalabilityData'' @ 141193920

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__GDumpNiagaraScalabilityData__(void)

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
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = <lambda_29>::<lambda_invoker_cdecl>;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
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
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x98))
                     (IConsoleManager::Singleton,L"fx.DumpNiagaraScalabilityState",
                      L"Dumps state information for all Niagara Scalability Mangers.",&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&GDumpNiagaraScalabilityData,pIVar5);
  GDumpNiagaraScalabilityData._0_8_ = &___7FAutoConsoleCommandWithWorld__6B_;
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
  atexit(_dynamic_atexit_destructor_for__GDumpNiagaraScalabilityData__);
  return;
}

// `dynamic_initializer_for_'GGlobals'' @ 141193ac0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __cdecl NiagaraStatelessCommon::_dynamic_initializer_for__GGlobals__(void)

{
  FNiagaraStatelessGlobals::FNiagaraStatelessGlobals(&GGlobals);
  return;
}

// `dynamic_initializer_for_'GPUStat_NiagaraStatelessGPUSimulation'' @ 141193ae0

void __cdecl _dynamic_initializer_for__GPUStat_NiagaraStatelessGPUSimulation__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPUStat_NiagaraStatelessGPUSimulation__);
  return;
}

// `dynamic_initializer_for_'GlobalDeferredCallbacks'' @ 141193b00

void __cdecl NiagaraWorldManagerInternal::_dynamic_initializer_for__GlobalDeferredCallbacks__(void)

{
  TNode *pTVar1;
  
  pTVar1 = ::operator_new(0x40);
  GlobalDeferredCallbacks.Head = (TNode *)0x0;
  if (pTVar1 != (TNode *)0x0) {
    pTVar1->NextNode = (TNode *)0x0;
    pTVar1->_padding_ = 0;
    *(undefined8 *)&pTVar1->Item = 0;
    *(undefined8 *)&(pTVar1->Item).field_0x8 = 0;
    *(undefined8 *)&(pTVar1->Item).field_0x10 = 0;
    *(undefined8 *)&(pTVar1->Item).field_0x18 = 0;
    *(undefined8 *)&(pTVar1->Item).field_0x20 = 0;
    *(undefined8 *)&(pTVar1->Item).field_0x28 = 0;
    pTVar1->NextNode = (TNode *)0x0;
    *(undefined8 *)&pTVar1->Item = 0;
    *(undefined8 *)&(pTVar1->Item).field_0x28 = 0;
    GlobalDeferredCallbacks.Head = pTVar1;
  }
  GlobalDeferredCallbacks.Tail = GlobalDeferredCallbacks.Head;
  atexit(_dynamic_atexit_destructor_for__GlobalDeferredCallbacks__);
  return;
}

// `dynamic_initializer_for_'NAME_NiagaraDouble'' @ 141193b60

void __cdecl _dynamic_initializer_for__NAME_NiagaraDouble__(void)

{
  FName::FName(&NAME_NiagaraDouble,L"NiagaraDouble");
  return;
}

// `dynamic_initializer_for_'NAME_NiagaraPosition'' @ 141193b80

void __cdecl _dynamic_initializer_for__NAME_NiagaraPosition__(void)

{
  FName::FName(&NAME_NiagaraPosition,L"NiagaraPosition");
  return;
}

// `dynamic_initializer_for_'RendererPropertiesToDeferredInit'' @ 141193ba0

void __cdecl
NiagaraVolumeRendererPropertiesLocal::_dynamic_initializer_for__RendererPropertiesToDeferredInit__
          (void)

{
  atexit(_dynamic_atexit_destructor_for__RendererPropertiesToDeferredInit__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraCollision'' @ 141193bc0

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

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraConstants'' @ 141193c50

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

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraGPUDataInterfaceMemory'' @ 141193ce0

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

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraGPUParticleMemory'' @ 141193d70

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

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraNumParticles'' @ 141193e00

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

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraNumSystems'' @ 141193e90

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

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraOverview_GT'' @ 141193f20

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

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraOverview_GT_CNC'' @ 141193fb0

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

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraOverview_RT'' @ 141194040

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

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraOverview_RT_CNC'' @ 1411940d0

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

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraParticleMemory'' @ 141194160

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

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraRenderTargetMemory'' @ 1411941f0

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

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraStateless_BufferMemory'' @ 141194280

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraStateless_BufferMemory__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraStateless_BufferMemory ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraStateless_BufferMemory>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraStateless_BufferMemory");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraStateless_BufferMemory,*pFVar1,
               L"Buffer Memory","STATGROUP_NiagaraStateless","STATCAT_NiagaraStateless",
               L"NiagaraStateless",true,false,ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraStateless_CPUParticleCount'' @ 141194310

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraStateless_CPUParticleCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraStateless_CPUParticleCount ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraStateless_CPUParticleCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraStateless_CPUParticleCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraStateless_CPUParticleCount,*pFVar1,
               L"CPU Particle Count","STATGROUP_NiagaraStateless","STATCAT_NiagaraStateless",
               L"NiagaraStateless",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraStateless_CPUSimulate'' @ 1411943a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraStateless_CPUSimulate__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraStateless_CPUSimulate ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraStateless_CPUSimulate>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraStateless_CPUSimulate");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraStateless_CPUSimulate,*pFVar1,
               L"CPU Simulate","STATGROUP_NiagaraStateless","STATCAT_NiagaraStateless",
               L"NiagaraStateless",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraStateless_GPUParticleEstimate'' @ 141194430

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraStateless_GPUParticleEstimate__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraStateless_GPUParticleEstimate ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraStateless_GPUParticleEstimate>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraStateless_GPUParticleEstimate");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraStateless_GPUParticleEstimate,
               *pFVar1,L"GPU Particle Estimate","STATGROUP_NiagaraStateless",
               "STATCAT_NiagaraStateless",L"NiagaraStateless",true,true,ST_int64,false,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraStateless_GPUSimulate'' @ 1411944c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraStateless_GPUSimulate__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraStateless_GPUSimulate ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraStateless_GPUSimulate>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraStateless_GPUSimulate");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraStateless_GPUSimulate,*pFVar1,
               L"GPU Simulate","STATGROUP_NiagaraStateless","STATCAT_NiagaraStateless",
               L"NiagaraStateless",true,true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraStateless_GenerateGPUData'' @ 141194550

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraStateless_GenerateGPUData__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraStateless_GenerateGPUData ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraStateless_GenerateGPUData>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraStateless_GenerateGPUData");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraStateless_GenerateGPUData,*pFVar1,
               L"GenerateGPUData","STATGROUP_NiagaraStateless","STATCAT_NiagaraStateless",
               L"NiagaraStateless",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraStateless_GetDataBuffer'' @ 1411945e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraStateless_GetDataBuffer__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraStateless_GetDataBuffer ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraStateless_GetDataBuffer>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraStateless_GetDataBuffer");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraStateless_GetDataBuffer,*pFVar1,
               L"GetDataBuffer","STATGROUP_NiagaraStateless","STATCAT_NiagaraStateless",
               L"NiagaraStateless",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraTick'' @ 141194670

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

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraVBMemory'' @ 141194700

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

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraWorldManRefreshOwnerAllowsScalability'' @ 141194790

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_NiagaraWorldManRefreshOwnerAllowsScalability__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraWorldManRefreshOwnerAllowsScalability ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraWorldManRefreshOwnerAllowsScalability>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraWorldManRefreshOwnerAllowsScalability");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_NiagaraWorldManRefreshOwnerAllowsScalability,*pFVar1,
               L"Niagara Manager Refresh Owner Allows Scalability","STATGROUP_Niagara",
               "STATCAT_Niagara",L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraWorldManTick'' @ 141194820

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraWorldManTick__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraWorldManTick == (FThreadSafeStaticStat<FStat_STAT_NiagaraWorldManTick>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraWorldManTick");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraWorldManTick,*pFVar1,
               L"Niagara Manager Tick [GT]","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraWorldManTickParamCollections'' @ 1411948b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraWorldManTickParamCollections__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraWorldManTickParamCollections ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraWorldManTickParamCollections>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraWorldManTickParamCollections");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraWorldManTickParamCollections,
               *pFVar1,L"Niagara Manager Tick Parameter Collections [GT]","STATGROUP_Niagara",
               "STATCAT_Niagara",L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraWorldManWaitOnRender'' @ 141194940

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraWorldManWaitOnRender__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraWorldManWaitOnRender ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraWorldManWaitOnRender>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraWorldManWaitOnRender");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraWorldManWaitOnRender,*pFVar1,
               L"Niagara Manager Wait On Render [GT]","STATGROUP_Niagara","STATCAT_Niagara",
               L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraWorldManWaitPreGC'' @ 1411949d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraWorldManWaitPreGC__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraWorldManWaitPreGC ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraWorldManWaitPreGC>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraWorldManWaitPreGC");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraWorldManWaitPreGC,*pFVar1,
               L"Niagara Manager Wait Pre Garbage Collect [GT]","STATGROUP_Niagara",
               "STATCAT_Niagara",L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TotalNiagaraSystemInstances'' @ 141194a60

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

// `dynamic_initializer_for_'StatPtr_STAT_TotalNiagaraSystemInstancesSolo'' @ 141194af0

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

// `dynamic_initializer_for_'StatPtr_STAT_UpdateScalabilityManagers'' @ 141194b80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UpdateScalabilityManagers__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UpdateScalabilityManagers ==
      (FThreadSafeStaticStat<FStat_STAT_UpdateScalabilityManagers>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_UpdateScalabilityManagers");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateScalabilityManagers,*pFVar1,
               L"Niagara Manager Update Scalability Managers [GT]","STATGROUP_Niagara",
               "STATCAT_Niagara",L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraValidationRule_h__Script_Niagara_3347012969'' @ 141194c10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraValidationRule_h__Script_Niagara_3347012969__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraValidationRule_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraValidationRule_h__Script_Niagara_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Expressions_NiagaraStatelessExpressionColor_h__Script_Niagara_3257992356'' @ 141194c60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Expressions_NiagaraStatelessExpressionColor_h__Script_Niagara_3257992356__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Expressions_NiagaraStatelessExpressionColor_h__Script_Niagara_Statics
             ::ScriptStructInfo,7,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Expressions_NiagaraStatelessExpressionFloat_h__Script_Niagara_1111577835'' @ 141194ca0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Expressions_NiagaraStatelessExpressionFloat_h__Script_Niagara_1111577835__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Expressions_NiagaraStatelessExpressionFloat_h__Script_Niagara_Statics
             ::ScriptStructInfo,7,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Expressions_NiagaraStatelessExpressionVec2_h__Script_Niagara_1791636214'' @ 141194ce0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Expressions_NiagaraStatelessExpressionVec2_h__Script_Niagara_1791636214__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Expressions_NiagaraStatelessExpressionVec2_h__Script_Niagara_Statics
             ::ScriptStructInfo,7,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Expressions_NiagaraStatelessExpressionVec3_h__Script_Niagara_2481205044'' @ 141194d20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Expressions_NiagaraStatelessExpressionVec3_h__Script_Niagara_2481205044__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Expressions_NiagaraStatelessExpressionVec3_h__Script_Niagara_Statics
             ::ScriptStructInfo,7,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Expressions_NiagaraStatelessExpressionVec4_h__Script_Niagara_2636521741'' @ 141194d60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Expressions_NiagaraStatelessExpressionVec4_h__Script_Niagara_2636521741__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Expressions_NiagaraStatelessExpressionVec4_h__Script_Niagara_Statics
             ::ScriptStructInfo,7,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_AccelerationForce_h__Script_Niagara_2116552609'' @ 141194da0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_AccelerationForce_h__Script_Niagara_2116552609__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_AccelerationForce_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_AddVelocity_h__Script_Niagara_2722386008'' @ 141194de0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_AddVelocity_h__Script_Niagara_2722386008__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_AddVelocity_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_AddVelocity_h__Script_Niagara_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_CalculateAccurateVelocity_h__Script_Niagara_775974770'' @ 141194e30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_CalculateAccurateVelocity_h__Script_Niagara_775974770__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_CalculateAccurateVelocity_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_CameraOffset_h__Script_Niagara_3572533012'' @ 141194e70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_CameraOffset_h__Script_Niagara_3572533012__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_CameraOffset_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_CurlNoiseForce_h__Script_Niagara_1382793675'' @ 141194eb0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_CurlNoiseForce_h__Script_Niagara_1382793675__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_CurlNoiseForce_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_DecalAttributes_h__Script_Niagara_4025577508'' @ 141194ef0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_DecalAttributes_h__Script_Niagara_4025577508__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_DecalAttributes_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_Drag_h__Script_Niagara_2204736729'' @ 141194f30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_Drag_h__Script_Niagara_2204736729__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_Drag_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_DynamicMaterialParameters_h__Script_Niagara_2550875280'' @ 141194f70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_DynamicMaterialParameters_h__Script_Niagara_2550875280__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_DynamicMaterialParameters_h__Script_Niagara_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_DynamicMaterialParameters_h__Script_Niagara_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_GravityForce_h__Script_Niagara_3046949672'' @ 141194fc0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_GravityForce_h__Script_Niagara_3046949672__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_GravityForce_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_InitialMeshOrientation_h__Script_Niagara_1380142736'' @ 141195000

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_InitialMeshOrientation_h__Script_Niagara_1380142736__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_InitialMeshOrientation_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_InitialMeshOrientation_h__Script_Niagara_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_InitializeParticle_h__Script_Niagara_2239966028'' @ 141195050

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_InitializeParticle_h__Script_Niagara_2239966028__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_InitializeParticle_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_LightAttributes_h__Script_Niagara_2217524251'' @ 141195090

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_LightAttributes_h__Script_Niagara_2217524251__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_LightAttributes_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_MeshIndex_h__Script_Niagara_3221549294'' @ 1411950d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_MeshIndex_h__Script_Niagara_3221549294__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_MeshIndex_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_MeshRotationRate_h__Script_Niagara_3759379095'' @ 141195110

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_MeshRotationRate_h__Script_Niagara_3759379095__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_MeshRotationRate_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_RotateAroundPoint_h__Script_Niagara_4285021676'' @ 141195150

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_RotateAroundPoint_h__Script_Niagara_4285021676__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_RotateAroundPoint_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_ScaleColor_h__Script_Niagara_666011803'' @ 141195190

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_ScaleColor_h__Script_Niagara_666011803__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_ScaleColor_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_ScaleMeshSizeBySpeed_h__Script_Niagara_3328592598'' @ 1411951d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_ScaleMeshSizeBySpeed_h__Script_Niagara_3328592598__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_ScaleMeshSizeBySpeed_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_ScaleMeshSize_h__Script_Niagara_932365203'' @ 141195210

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_ScaleMeshSize_h__Script_Niagara_932365203__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_ScaleMeshSize_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_ScaleRibbonWidth_h__Script_Niagara_2312023881'' @ 141195250

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_ScaleRibbonWidth_h__Script_Niagara_2312023881__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_ScaleRibbonWidth_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_ScaleSpriteSizeBySpeed_h__Script_Niagara_2228446267'' @ 141195290

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_ScaleSpriteSizeBySpeed_h__Script_Niagara_2228446267__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_ScaleSpriteSizeBySpeed_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_ScaleSpriteSize_h__Script_Niagara_406291316'' @ 1411952d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_ScaleSpriteSize_h__Script_Niagara_406291316__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_ScaleSpriteSize_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_ShapeLocation_h__Script_Niagara_628655324'' @ 141195310

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_ShapeLocation_h__Script_Niagara_628655324__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_ShapeLocation_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_ShapeLocation_h__Script_Niagara_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_SolveVelocitiesAndForces_h__Script_Niagara_4076526821'' @ 141195360

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_SolveVelocitiesAndForces_h__Script_Niagara_4076526821__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_SolveVelocitiesAndForces_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_SpriteFacingAndAlignment_h__Script_Niagara_1588469102'' @ 1411953a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_SpriteFacingAndAlignment_h__Script_Niagara_1588469102__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_SpriteFacingAndAlignment_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_SpriteRotationRate_h__Script_Niagara_2131675036'' @ 1411953e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_SpriteRotationRate_h__Script_Niagara_2131675036__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_SpriteRotationRate_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_SubUVAnimation_h__Script_Niagara_3097896023'' @ 141195420

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_SubUVAnimation_h__Script_Niagara_3097896023__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_SubUVAnimation_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_Modules_NiagaraStatelessModule_SubUVAnimation_h__Script_Niagara_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessCommon_h__Script_Niagara_4091570625'' @ 141195470

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessCommon_h__Script_Niagara_4091570625__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessCommon_h__Script_Niagara_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessEmitter_h__Script_Niagara_2672499109'' @ 1411954c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessEmitter_h__Script_Niagara_2672499109__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessEmitter_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraTypes_h__Script_Niagara_1380271165'' @ 141195500

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraTypes_h__Script_Niagara_1380271165__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraTypes_h__Script_Niagara_Statics
             ::ScriptStructInfo,0x1a,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraTypes_h__Script_Niagara_Statics
             ::EnumInfo,8);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraUserRedirectionParameterStore_h__Script_Niagara_2451223863'' @ 141195550

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraUserRedirectionParameterStore_h__Script_Niagara_2451223863__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraUserRedirectionParameterStore_h__Script_Niagara_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraVariableMetaData_h__Script_Niagara_1254075501'' @ 141195590

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraVariableMetaData_h__Script_Niagara_1254075501__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraVariableMetaData_h__Script_Niagara_Statics
             ::ScriptStructInfo,8,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraVariableMetaData_h__Script_Niagara_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraVariant_h__Script_Niagara_3533433473'' @ 1411955e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraVariant_h__Script_Niagara_3533433473__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraVariant_h__Script_Niagara_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraVariant_h__Script_Niagara_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraVolumeRendererProperties_h__Script_Niagara_102365435'' @ 141195630

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraVolumeRendererProperties_h__Script_Niagara_102365435__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraVolumeRendererProperties_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraWorldManager_h__Script_Niagara_813993045'' @ 141195670

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraWorldManager_h__Script_Niagara_813993045__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraWorldManager_h__Script_Niagara_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_Stateless_NiagaraStatelessDistribution_h__Script_Niagara_745667717'' @ 1411956b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_Stateless_NiagaraStatelessDistribution_h__Script_Niagara_745667717__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_Stateless_NiagaraStatelessDistribution_h__Script_Niagara_Statics
             ::ScriptStructInfo,0xe,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_Stateless_NiagaraStatelessDistribution_h__Script_Niagara_Statics
             ::EnumInfo,6);
  return;
}

// NewStructOps @ 14940a360

void * __cdecl Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraStructConversionStep,&UE::CoreUObject::Private::Construct<FNiagaraStructConversionStep>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraStructConversionStep>,&UE::CoreUObject::Private::Destruct<FNiagaraStructConversionStep>,&UE::CoreUObject::Private::Copy<FNiagaraStructConversionStep>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14940a3e0

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec3Add_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraStatelessExpressionVec3Add,&UE::CoreUObject::Private::Construct<FNiagaraStatelessExpressionVec3Add>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraStatelessExpressionVec3Add>,&UE::CoreUObject::Private::Destruct<FNiagaraStatelessExpressionVec3Add>,&UE::CoreUObject::Private::Copy<FNiagaraStatelessExpressionVec3Add>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14940a420

void * __cdecl Z_Construct_UScriptStruct_FNiagaraLwcStructConverter_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraLwcStructConverter,&UE::CoreUObject::Private::Construct<FNiagaraLwcStructConverter>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraLwcStructConverter>,&UE::CoreUObject::Private::Destruct<FNiagaraLwcStructConverter>,&UE::CoreUObject::Private::Copy<FNiagaraLwcStructConverter>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14940a5f0

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec3Subtract_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraStatelessExpressionVec3Subtract,&UE::CoreUObject::Private::Construct<FNiagaraStatelessExpressionVec3Subtract>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraStatelessExpressionVec3Subtract>,&UE::CoreUObject::Private::Destruct<FNiagaraStatelessExpressionVec3Subtract>,&UE::CoreUObject::Private::Copy<FNiagaraStatelessExpressionVec3Subtract>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UNiagaraStatelessModule_GravityForce @ 14940a6c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraStatelessModule_GravityForce(void)

{
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_GravityForce.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraStatelessModule_GravityForce.OuterSingleton,
               &Z_Construct_UClass_UNiagaraStatelessModule_GravityForce_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_GravityForce.OuterSingleton;
}

// NewStructOps @ 14940a780

void * __cdecl Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraSpawnInfo,&UE::CoreUObject::Private::Construct<FNiagaraSpawnInfo>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraSpawnInfo>,&UE::CoreUObject::Private::Destruct<FNiagaraSpawnInfo>,&UE::CoreUObject::Private::Copy<FNiagaraSpawnInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UEnum_Niagara_ENiagaraVariantMode @ 14940ab00

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraVariantMode(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraVariantMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraVariantMode.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraVariantMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraVariantMode.InnerSingleton;
}

// ENiagaraVariantMode_StaticEnum @ 14940ab40

UEnum * __cdecl ENiagaraVariantMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraVariantMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraVariantMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraVariantMode,(UObject *)pUVar1,
                       L"ENiagaraVariantMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraVariantMode.OuterSingleton;
}

// NewStructOps @ 14940abb0

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec3Multiply_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraStatelessExpressionVec3Multiply,&UE::CoreUObject::Private::Construct<FNiagaraStatelessExpressionVec3Multiply>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraStatelessExpressionVec3Multiply>,&UE::CoreUObject::Private::Destruct<FNiagaraStatelessExpressionVec3Multiply>,&UE::CoreUObject::Private::Copy<FNiagaraStatelessExpressionVec3Multiply>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14940abf0

void * __cdecl Z_Construct_UScriptStruct_FNiagaraVariant_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraVariant,&UE::CoreUObject::Private::Construct<FNiagaraVariant>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraVariant>,&UE::CoreUObject::Private::Destruct<FNiagaraVariant>,&UE::CoreUObject::Private::Copy<FNiagaraVariant>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14940ac30

void * __cdecl Z_Construct_UScriptStruct_FNiagaraID_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraID,&UE::CoreUObject::Private::Construct<FNiagaraID>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraID>,&UE::CoreUObject::Private::Destruct<FNiagaraID>,&UE::CoreUObject::Private::Copy<FNiagaraID>,&UE::CoreUObject::Private::GetStructTypeHash<FNiagaraID>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14940ae70

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xd8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraUserRedirectionParameterStore,&UE::CoreUObject::Private::Construct<FNiagaraUserRedirectionParameterStore>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraUserRedirectionParameterStore>,&UE::CoreUObject::Private::Destruct<FNiagaraUserRedirectionParameterStore>,&UE::CoreUObject::Private::Copy<FNiagaraUserRedirectionParameterStore>,&UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FNiagaraUserRedirectionParameterStore>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UNiagaraStatelessModule_InitializeParticle @ 14940aeb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraStatelessModule_InitializeParticle(void)

{
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_InitializeParticle.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraStatelessModule_InitializeParticle.OuterSingleton
               ,&Z_Construct_UClass_UNiagaraStatelessModule_InitializeParticle_Statics::ClassParams)
    ;
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_InitializeParticle.OuterSingleton;
}

// Z_Construct_UScriptStruct_FNiagaraDistributionColor @ 14940aef0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraDistributionColor(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraDistributionColor.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraDistributionColor.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraDistributionColor_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraDistributionColor.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraDistributionColor.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraDistributionPosition @ 14940af70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraDistributionPosition(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraDistributionPosition.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraDistributionPosition.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraDistributionPosition_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraDistributionPosition.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraDistributionPosition.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector2 @ 14940aff0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector2(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraDistributionRangeVector2.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraDistributionRangeVector2.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector2_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraDistributionRangeVector2.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraDistributionRangeVector2.InnerSingleton;
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

// NewStructOps @ 14940b070

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec3Divide_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraStatelessExpressionVec3Divide,&UE::CoreUObject::Private::Construct<FNiagaraStatelessExpressionVec3Divide>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraStatelessExpressionVec3Divide>,&UE::CoreUObject::Private::Destruct<FNiagaraStatelessExpressionVec3Divide>,&UE::CoreUObject::Private::Copy<FNiagaraStatelessExpressionVec3Divide>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14940b0b0

void * __cdecl Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraRandInfo,&UE::CoreUObject::Private::Construct<FNiagaraRandInfo>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraRandInfo>,&UE::CoreUObject::Private::Destruct<FNiagaraRandInfo>,&UE::CoreUObject::Private::Copy<FNiagaraRandInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bWriteRibbonWidth_SetBit @ 14940b0f0

void __cdecl
Z_Construct_UClass_UNiagaraStatelessModule_InitializeParticle_Statics::
NewProp_bWriteRibbonWidth_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x178) = 1;
  return;
}

// NewStructOps @ 14940b100

void * __cdecl Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraTypeLayoutInfo,&UE::CoreUObject::Private::Construct<FNiagaraTypeLayoutInfo>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraTypeLayoutInfo>,&UE::CoreUObject::Private::Destruct<FNiagaraTypeLayoutInfo>,&UE::CoreUObject::Private::Copy<FNiagaraTypeLayoutInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// GetObjectVersion @ 14940b140

FNiagaraAssetVersion * __thiscall
NiagaraVersionedObject::DummyObject::GetObjectVersion(DummyObject *this)

{
  return &this->Version;
}

// GetVersionChangeDescription @ 14940b150

FText * __thiscall
NiagaraVersionedObject::DummyObject::GetVersionChangeDescription(DummyObject *this)

{
  return &this->Desc;
}

// GetUpdateScriptExecutionType @ 14940b160

ENiagaraPythonUpdateScriptReference * __thiscall
NiagaraVersionedObject::DummyObject::GetUpdateScriptExecutionType(DummyObject *this)

{
  return &this->Type;
}

// GetPythonUpdateScript @ 14940b170

FString * __thiscall NiagaraVersionedObject::DummyObject::GetPythonUpdateScript(DummyObject *this)

{
  return &this->Script;
}

// GetScriptAsset @ 14940b180

FFilePath * __thiscall NiagaraVersionedObject::DummyObject::GetScriptAsset(DummyObject *this)

{
  return &this->Path;
}

// IsDeprecated @ 14940b190

bool * __thiscall NiagaraVersionedObject::DummyObject::IsDeprecated(DummyObject *this)

{
  return &this->bDeprecated;
}

// `scalar_deleting_destructor' @ 14940b1a0

void * __thiscall
NiagaraVersionedObject::DummyObject::_scalar_deleting_destructor_(DummyObject *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  
  pFVar1 = (this->Path).FilePath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Script).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->Desc).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// ENiagaraNumericOutputTypeSelectionMode_StaticEnum @ 14940b520

UEnum * __cdecl ENiagaraNumericOutputTypeSelectionMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraNumericOutputTypeSelectionMode.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraNumericOutputTypeSelectionMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraNumericOutputTypeSelectionMode,
                       (UObject *)pUVar1,L"ENiagaraNumericOutputTypeSelectionMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraNumericOutputTypeSelectionMode.OuterSingleton;
}

// ENiagaraExecutionStateSource_StaticEnum @ 14940b560

UEnum * __cdecl ENiagaraExecutionStateSource_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraExecutionStateSource.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraExecutionStateSource.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraExecutionStateSource,(UObject *)pUVar1,
                       L"ENiagaraExecutionStateSource");
  }
  return Z_Registration_Info_UEnum_ENiagaraExecutionStateSource.OuterSingleton;
}

// ENiagaraExecutionState_StaticEnum @ 14940b660

UEnum * __cdecl ENiagaraExecutionState_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraExecutionState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraExecutionState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraExecutionState,(UObject *)pUVar1,
                       L"ENiagaraExecutionState");
  }
  return Z_Registration_Info_UEnum_ENiagaraExecutionState.OuterSingleton;
}

// ENiagaraExecutionStateManagement_StaticEnum @ 14940b730

UEnum * __cdecl ENiagaraExecutionStateManagement_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraExecutionStateManagement.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraExecutionStateManagement.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraExecutionStateManagement,(UObject *)pUVar1,
                       L"ENiagaraExecutionStateManagement");
  }
  return Z_Registration_Info_UEnum_ENiagaraExecutionStateManagement.OuterSingleton;
}

// ENiagaraCoordinateSpace_StaticEnum @ 14940b8a0

UEnum * __cdecl ENiagaraCoordinateSpace_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraCoordinateSpace.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraCoordinateSpace.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraCoordinateSpace,(UObject *)pUVar1,
                       L"ENiagaraCoordinateSpace");
  }
  return Z_Registration_Info_UEnum_ENiagaraCoordinateSpace.OuterSingleton;
}

// ENiagaraPythonUpdateScriptReference_StaticEnum @ 14940b9d0

UEnum * __cdecl ENiagaraPythonUpdateScriptReference_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraPythonUpdateScriptReference.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraPythonUpdateScriptReference.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraPythonUpdateScriptReference,
                       (UObject *)pUVar1,L"ENiagaraPythonUpdateScriptReference");
  }
  return Z_Registration_Info_UEnum_ENiagaraPythonUpdateScriptReference.OuterSingleton;
}

// Z_Construct_UClass_UNiagaraStatelessModule_InitialMeshOrientation @ 14940ba60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraStatelessModule_InitialMeshOrientation(void)

{
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_InitialMeshOrientation.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraStatelessModule_InitialMeshOrientation.
                OuterSingleton,
               &Z_Construct_UClass_UNiagaraStatelessModule_InitialMeshOrientation_Statics::
                ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_InitialMeshOrientation.OuterSingleton;
}

// Z_Construct_UEnum_Niagara_ENSMInitialMeshOrientationMode @ 14940baa0

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENSMInitialMeshOrientationMode(void)

{
  if (Z_Registration_Info_UEnum_ENSMInitialMeshOrientationMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENSMInitialMeshOrientationMode.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENSMInitialMeshOrientationMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENSMInitialMeshOrientationMode.InnerSingleton;
}

// ENSMInitialMeshOrientationMode_StaticEnum @ 14940bb20

UEnum * __cdecl ENSMInitialMeshOrientationMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENSMInitialMeshOrientationMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENSMInitialMeshOrientationMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENSMInitialMeshOrientationMode,(UObject *)pUVar1,
                       L"ENSMInitialMeshOrientationMode");
  }
  return Z_Registration_Info_UEnum_ENSMInitialMeshOrientationMode.OuterSingleton;
}

// ENiagaraOrientationAxis_StaticEnum @ 14940bb60

UEnum * __cdecl ENiagaraOrientationAxis_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraOrientationAxis.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraOrientationAxis.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraOrientationAxis,(UObject *)pUVar1,
                       L"ENiagaraOrientationAxis");
  }
  return Z_Registration_Info_UEnum_ENiagaraOrientationAxis.OuterSingleton;
}

// Z_Construct_UClass_UNiagaraStatelessModule_SolveVelocitiesAndForces @ 14940bbe0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraStatelessModule_SolveVelocitiesAndForces(void)

{
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_SolveVelocitiesAndForces.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraStatelessModule_SolveVelocitiesAndForces.
                OuterSingleton,
               &Z_Construct_UClass_UNiagaraStatelessModule_SolveVelocitiesAndForces_Statics::
                ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_SolveVelocitiesAndForces.OuterSingleton;
}

// Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec4 @ 14940bc20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec4(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec4.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec4.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec4_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec4.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec4.InnerSingleton;
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

// NewStructOps @ 14940bca0

void * __cdecl Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraTypeDefinition,&UE::CoreUObject::Private::Construct<FNiagaraTypeDefinition>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraTypeDefinition>,&UE::CoreUObject::Private::Destruct<FNiagaraTypeDefinition>,&UE::CoreUObject::Private::SerializeArchive<FNiagaraTypeDefinition>,&UE::CoreUObject::Private::Copy<FNiagaraTypeDefinition>,&UE::CoreUObject::Private::ImportTextItem<FNiagaraTypeDefinition>,&UE::CoreUObject::Private::GetStructTypeHash<FNiagaraTypeDefinition>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14940bce0

void * __cdecl Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec4_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraStatelessExpressionVec4,&UE::CoreUObject::Private::Construct<FNiagaraStatelessExpressionVec4>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraStatelessExpressionVec4>,&UE::CoreUObject::Private::Destruct<FNiagaraStatelessExpressionVec4>,&UE::CoreUObject::Private::Copy<FNiagaraStatelessExpressionVec4>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14940bdf0

void * __cdecl Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraTypeDefinitionHandle,&UE::CoreUObject::Private::Construct<FNiagaraTypeDefinitionHandle>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraTypeDefinitionHandle>,&UE::CoreUObject::Private::Destruct<FNiagaraTypeDefinitionHandle>,&UE::CoreUObject::Private::Copy<FNiagaraTypeDefinitionHandle>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14940bf80

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec4Constant_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraStatelessExpressionVec4Constant,&UE::CoreUObject::Private::Construct<FNiagaraStatelessExpressionVec4Constant>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraStatelessExpressionVec4Constant>,&UE::CoreUObject::Private::Destruct<FNiagaraStatelessExpressionVec4Constant>,&UE::CoreUObject::Private::Copy<FNiagaraStatelessExpressionVec4Constant>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14940bfc0

void * __cdecl Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraVariableBase,&UE::CoreUObject::Private::Construct<FNiagaraVariableBase>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraVariableBase>,&UE::CoreUObject::Private::Destruct<FNiagaraVariableBase>,&UE::CoreUObject::Private::SerializeArchive<FNiagaraVariableBase>,&UE::CoreUObject::Private::Copy<FNiagaraVariableBase>,&UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FNiagaraVariableBase>,&UE::CoreUObject::Private::GetStructTypeHash<FNiagaraVariableBase>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14940c050

void * __cdecl Z_Construct_UScriptStruct_FNiagaraVariable_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraVariable,&UE::CoreUObject::Private::Construct<FNiagaraVariable>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraVariable>,&UE::CoreUObject::Private::Destruct<FNiagaraVariable>,&UE::CoreUObject::Private::SerializeArchive<FNiagaraVariable>,&UE::CoreUObject::Private::Copy<FNiagaraVariable>,&UE::CoreUObject::Private::GetStructTypeHash<FNiagaraVariable>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14940c1f0

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec4Binding_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraStatelessExpressionVec4Binding,&UE::CoreUObject::Private::Construct<FNiagaraStatelessExpressionVec4Binding>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraStatelessExpressionVec4Binding>,&UE::CoreUObject::Private::Destruct<FNiagaraStatelessExpressionVec4Binding>,&UE::CoreUObject::Private::Copy<FNiagaraStatelessExpressionVec4Binding>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14940c2d0

void * __cdecl Z_Construct_UScriptStruct_FVersionedNiagaraEmitter_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FVersionedNiagaraEmitter,&UE::CoreUObject::Private::Construct<FVersionedNiagaraEmitter>,&UE::CoreUObject::Private::ConstructForTests<FVersionedNiagaraEmitter>,&UE::CoreUObject::Private::Destruct<FVersionedNiagaraEmitter>,&UE::CoreUObject::Private::Copy<FVersionedNiagaraEmitter>,&UE::CoreUObject::Private::GetStructTypeHash<FVersionedNiagaraEmitter>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UNiagaraStatelessModule_LightAttributes @ 14940c310

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraStatelessModule_LightAttributes(void)

{
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_LightAttributes.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraStatelessModule_LightAttributes.OuterSingleton,
               &Z_Construct_UClass_UNiagaraStatelessModule_LightAttributes_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_LightAttributes.OuterSingleton;
}

// NewProp_bApplyRadius_SetBit @ 14940c350

void __cdecl
Z_Construct_UClass_UNiagaraStatelessModule_LightAttributes_Statics::NewProp_bApplyRadius_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x30) = *(uint *)((longlong)param_1 + 0x30) | 1;
  return;
}

// NewProp_bApplyFalloffExponent_SetBit @ 14940c360

void __cdecl
Z_Construct_UClass_UNiagaraStatelessModule_LightAttributes_Statics::
NewProp_bApplyFalloffExponent_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x30) = *(uint *)((longlong)param_1 + 0x30) | 2;
  return;
}

// NewProp_bApplyDiffuseScale_SetBit @ 14940c370

void __cdecl
Z_Construct_UClass_UNiagaraStatelessModule_LightAttributes_Statics::
NewProp_bApplyDiffuseScale_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x30) = *(uint *)((longlong)param_1 + 0x30) | 4;
  return;
}

// NewProp_bApplySpecularScale_SetBit @ 14940c380

void __cdecl
Z_Construct_UClass_UNiagaraStatelessModule_LightAttributes_Statics::
NewProp_bApplySpecularScale_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x30) = *(uint *)((longlong)param_1 + 0x30) | 8;
  return;
}

// NewProp_bApplyVolumetricScattering_SetBit @ 14940c390

void __cdecl
Z_Construct_UClass_UNiagaraStatelessModule_LightAttributes_Statics::
NewProp_bApplyVolumetricScattering_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x30) = *(uint *)((longlong)param_1 + 0x30) | 0x10;
  return;
}

// NewStructOps @ 14940c460

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec4Add_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraStatelessExpressionVec4Add,&UE::CoreUObject::Private::Construct<FNiagaraStatelessExpressionVec4Add>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraStatelessExpressionVec4Add>,&UE::CoreUObject::Private::Destruct<FNiagaraStatelessExpressionVec4Add>,&UE::CoreUObject::Private::Copy<FNiagaraStatelessExpressionVec4Add>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UNiagaraStatelessModule_SpriteFacingAndAlignment @ 14940c7a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraStatelessModule_SpriteFacingAndAlignment(void)

{
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_SpriteFacingAndAlignment.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraStatelessModule_SpriteFacingAndAlignment.
                OuterSingleton,
               &Z_Construct_UClass_UNiagaraStatelessModule_SpriteFacingAndAlignment_Statics::
                ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_SpriteFacingAndAlignment.OuterSingleton;
}

// NewProp_bSpriteFacingEnabled_SetBit @ 14940c8a0

void __cdecl
Z_Construct_UClass_UNiagaraStatelessModule_SpriteFacingAndAlignment_Statics::
NewProp_bSpriteFacingEnabled_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// NewProp_bSpriteAlignmentEnabled_SetBit @ 14940c8b0

void __cdecl
Z_Construct_UClass_UNiagaraStatelessModule_SpriteFacingAndAlignment_Statics::
NewProp_bSpriteAlignmentEnabled_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x31) = 1;
  return;
}

// NewStructOps @ 14940c8c0

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec4Subtract_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraStatelessExpressionVec4Subtract,&UE::CoreUObject::Private::Construct<FNiagaraStatelessExpressionVec4Subtract>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraStatelessExpressionVec4Subtract>,&UE::CoreUObject::Private::Destruct<FNiagaraStatelessExpressionVec4Subtract>,&UE::CoreUObject::Private::Copy<FNiagaraStatelessExpressionVec4Subtract>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14940cd40

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec4Multiply_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraStatelessExpressionVec4Multiply,&UE::CoreUObject::Private::Construct<FNiagaraStatelessExpressionVec4Multiply>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraStatelessExpressionVec4Multiply>,&UE::CoreUObject::Private::Destruct<FNiagaraStatelessExpressionVec4Multiply>,&UE::CoreUObject::Private::Copy<FNiagaraStatelessExpressionVec4Multiply>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UNiagaraStatelessModule_MeshIndex @ 14940d080

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraStatelessModule_MeshIndex(void)

{
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_MeshIndex.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraStatelessModule_MeshIndex.OuterSingleton,
               &Z_Construct_UClass_UNiagaraStatelessModule_MeshIndex_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_MeshIndex.OuterSingleton;
}

// Z_Construct_UScriptStruct_FNiagaraDistributionRangeInt @ 14940d0c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraDistributionRangeInt(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraDistributionRangeInt.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraDistributionRangeInt.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraDistributionRangeInt_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraDistributionRangeInt.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraDistributionRangeInt.InnerSingleton;
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

// NewProp_ReturnValue_SetBit @ 14940d140

void __cdecl
Z_Construct_UFunction_UNiagaraStatelessModule_MeshIndex_NeedsMeshIndexWeights_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UNiagaraStatelessModule_MeshIndex_NeedsMeshIndexWeights @ 14940d1e0

UFunction * __cdecl
Z_Construct_UFunction_UNiagaraStatelessModule_MeshIndex_NeedsMeshIndexWeights(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraStatelessModule_MeshIndex_NeedsMeshIndexWeights_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14940d220

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec4Divide_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraStatelessExpressionVec4Divide,&UE::CoreUObject::Private::Construct<FNiagaraStatelessExpressionVec4Divide>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraStatelessExpressionVec4Divide>,&UE::CoreUObject::Private::Destruct<FNiagaraStatelessExpressionVec4Divide>,&UE::CoreUObject::Private::Copy<FNiagaraStatelessExpressionVec4Divide>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UNiagaraStatelessModule_SpriteRotationRate @ 14940d260

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraStatelessModule_SpriteRotationRate(void)

{
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_SpriteRotationRate.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraStatelessModule_SpriteRotationRate.OuterSingleton
               ,&Z_Construct_UClass_UNiagaraStatelessModule_SpriteRotationRate_Statics::ClassParams)
    ;
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_SpriteRotationRate.OuterSingleton;
}

// Z_Construct_UScriptStruct_FNiagaraDistributionCurveFloat @ 14940d2a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraDistributionCurveFloat(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraDistributionCurveFloat.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraDistributionCurveFloat.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraDistributionCurveFloat_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraDistributionCurveFloat.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraDistributionCurveFloat.InnerSingleton;
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

// NewProp_bUseRateScale_SetBit @ 14940d3b0

void __cdecl
Z_Construct_UClass_UNiagaraStatelessModule_SpriteRotationRate_Statics::NewProp_bUseRateScale_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// Z_Construct_UClass_UNiagaraValidationRule @ 14940d510

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraValidationRule(void)

{
  if (Z_Registration_Info_UClass_UNiagaraValidationRule.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraValidationRule.OuterSingleton,
               &Z_Construct_UClass_UNiagaraValidationRule_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraValidationRule.OuterSingleton;
}

// ENiagaraValidationSeverity_StaticEnum @ 14940d550

UEnum * __cdecl ENiagaraValidationSeverity_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraValidationSeverity.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraValidationSeverity.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraValidationSeverity,(UObject *)pUVar1,
                       L"ENiagaraValidationSeverity");
  }
  return Z_Registration_Info_UEnum_ENiagaraValidationSeverity.OuterSingleton;
}

// Z_Construct_UClass_UNiagaraStatelessModule_SubUVAnimation @ 14940d800

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraStatelessModule_SubUVAnimation(void)

{
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_SubUVAnimation.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraStatelessModule_SubUVAnimation.OuterSingleton,
               &Z_Construct_UClass_UNiagaraStatelessModule_SubUVAnimation_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_SubUVAnimation.OuterSingleton;
}

// Z_Construct_UEnum_Niagara_ENSMSubUVAnimation_Mode @ 14940d840

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENSMSubUVAnimation_Mode(void)

{
  if (Z_Registration_Info_UEnum_ENSMSubUVAnimation_Mode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENSMSubUVAnimation_Mode.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENSMSubUVAnimation_Mode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENSMSubUVAnimation_Mode.InnerSingleton;
}

// NewProp_bIsConfigDisabled_SetBit @ 14940d880

void __cdecl
Z_Construct_UClass_UNiagaraValidationRule_Statics::NewProp_bIsConfigDisabled_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// ENSMSubUVAnimation_Mode_StaticEnum @ 14940d890

UEnum * __cdecl ENSMSubUVAnimation_Mode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENSMSubUVAnimation_Mode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENSMSubUVAnimation_Mode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENSMSubUVAnimation_Mode,(UObject *)pUVar1,
                       L"ENSMSubUVAnimation_Mode");
  }
  return Z_Registration_Info_UEnum_ENSMSubUVAnimation_Mode.OuterSingleton;
}

// NewProp_bStartFrameRangeOverride_Enabled_SetBit @ 14940d8d0

void __cdecl
Z_Construct_UClass_UNiagaraStatelessModule_SubUVAnimation_Statics::
NewProp_bStartFrameRangeOverride_Enabled_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x60) = 1;
  return;
}

// NewProp_bEndFrameRangeOverride_Enabled_SetBit @ 14940d8e0

void __cdecl
Z_Construct_UClass_UNiagaraStatelessModule_SubUVAnimation_Statics::
NewProp_bEndFrameRangeOverride_Enabled_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x61) = 1;
  return;
}

// Z_Construct_UClass_UNiagaraStatelessModule_AddVelocity @ 14940d930

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraStatelessModule_AddVelocity(void)

{
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_AddVelocity.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraStatelessModule_AddVelocity.OuterSingleton,
               &Z_Construct_UClass_UNiagaraStatelessModule_AddVelocity_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_AddVelocity.OuterSingleton;
}

// Z_Construct_UEnum_Niagara_ENSM_VelocityType @ 14940d970

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENSM_VelocityType(void)

{
  if (Z_Registration_Info_UEnum_ENSM_VelocityType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENSM_VelocityType.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENSM_VelocityType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENSM_VelocityType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FNiagaraDistributionRangeFloat @ 14940d9b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraDistributionRangeFloat(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraDistributionRangeFloat.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraDistributionRangeFloat.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraDistributionRangeFloat_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraDistributionRangeFloat.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraDistributionRangeFloat.InnerSingleton;
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

// ENSM_VelocityType_StaticEnum @ 14940da30

UEnum * __cdecl ENSM_VelocityType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENSM_VelocityType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENSM_VelocityType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENSM_VelocityType,(UObject *)pUVar1,
                       L"ENSM_VelocityType");
  }
  return Z_Registration_Info_UEnum_ENSM_VelocityType.OuterSingleton;
}

// NewProp_bSpeedFalloffFromConeAxisEnabled_SetBit @ 14940db90

void __cdecl
Z_Construct_UClass_UNiagaraStatelessModule_AddVelocity_Statics::
NewProp_bSpeedFalloffFromConeAxisEnabled_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x134) = 1;
  return;
}

// Z_Construct_UClass_UNiagaraStatelessModule_AccelerationForce @ 14940e260

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraStatelessModule_AccelerationForce(void)

{
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_AccelerationForce.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraStatelessModule_AccelerationForce.OuterSingleton,
               &Z_Construct_UClass_UNiagaraStatelessModule_AccelerationForce_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_AccelerationForce.OuterSingleton;
}

// Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector3 @ 14940e2d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector3(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraDistributionRangeVector3.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraDistributionRangeVector3.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector3_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraDistributionRangeVector3.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraDistributionRangeVector3.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraStatelessExpressionColor @ 14940e3e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraStatelessExpressionColor(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionColor.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionColor.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraStatelessExpressionColor_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionColor.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionColor.InnerSingleton;
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

// NewStructOps @ 14940e460

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraStatelessExpressionColor_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraStatelessExpressionColor,&UE::CoreUObject::Private::Construct<FNiagaraStatelessExpressionColor>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraStatelessExpressionColor>,&UE::CoreUObject::Private::Destruct<FNiagaraStatelessExpressionColor>,&UE::CoreUObject::Private::Copy<FNiagaraStatelessExpressionColor>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14940e980

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraStatelessExpressionColorConstant_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraStatelessExpressionColorConstant,&UE::CoreUObject::Private::Construct<FNiagaraStatelessExpressionColorConstant>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraStatelessExpressionColorConstant>,&UE::CoreUObject::Private::Destruct<FNiagaraStatelessExpressionColorConstant>,&UE::CoreUObject::Private::Copy<FNiagaraStatelessExpressionColorConstant>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UNiagaraVolumeRendererProperties @ 14940ea90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraVolumeRendererProperties(void)

{
  if (Z_Registration_Info_UClass_UNiagaraVolumeRendererProperties.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraVolumeRendererProperties.OuterSingleton,
               &Z_Construct_UClass_UNiagaraVolumeRendererProperties_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraVolumeRendererProperties.OuterSingleton;
}

// NewStructOps @ 14940eba0

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraStatelessExpressionColorBinding_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraStatelessExpressionColorBinding,&UE::CoreUObject::Private::Construct<FNiagaraStatelessExpressionColorBinding>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraStatelessExpressionColorBinding>,&UE::CoreUObject::Private::Destruct<FNiagaraStatelessExpressionColorBinding>,&UE::CoreUObject::Private::Copy<FNiagaraStatelessExpressionColorBinding>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14940f0c0

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraStatelessExpressionColorAdd_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraStatelessExpressionColorAdd,&UE::CoreUObject::Private::Construct<FNiagaraStatelessExpressionColorAdd>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraStatelessExpressionColorAdd>,&UE::CoreUObject::Private::Destruct<FNiagaraStatelessExpressionColorAdd>,&UE::CoreUObject::Private::Copy<FNiagaraStatelessExpressionColorAdd>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14940f2f0

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraStatelessExpressionColorSubtract_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraStatelessExpressionColorSubtract,&UE::CoreUObject::Private::Construct<FNiagaraStatelessExpressionColorSubtract>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraStatelessExpressionColorSubtract>,&UE::CoreUObject::Private::Destruct<FNiagaraStatelessExpressionColorSubtract>,&UE::CoreUObject::Private::Copy<FNiagaraStatelessExpressionColorSubtract>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UEnum_Niagara_ENiagaraDistributionMode @ 14940f480

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraDistributionMode(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraDistributionMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraDistributionMode.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraDistributionMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraDistributionMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FNiagaraDistributionBase @ 14940f4c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraDistributionBase(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraDistributionBase.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraDistributionBase.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraDistributionBase_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraDistributionBase.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraDistributionBase.InnerSingleton;
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

// NewStructOps @ 14940f680

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraStatelessExpressionColorMultiply_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraStatelessExpressionColorMultiply,&UE::CoreUObject::Private::Construct<FNiagaraStatelessExpressionColorMultiply>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraStatelessExpressionColorMultiply>,&UE::CoreUObject::Private::Destruct<FNiagaraStatelessExpressionColorMultiply>,&UE::CoreUObject::Private::Copy<FNiagaraStatelessExpressionColorMultiply>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// ENiagaraDistributionMode_StaticEnum @ 14940f6c0

UEnum * __cdecl ENiagaraDistributionMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraDistributionMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraDistributionMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDistributionMode,(UObject *)pUVar1,
                       L"ENiagaraDistributionMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraDistributionMode.OuterSingleton;
}

// ENiagaraDistributionInterpolationMode_StaticEnum @ 14940f770

UEnum * __cdecl ENiagaraDistributionInterpolationMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraDistributionInterpolationMode.OuterSingleton == (UEnum *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraDistributionInterpolationMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDistributionInterpolationMode,
                       (UObject *)pUVar1,L"ENiagaraDistributionInterpolationMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraDistributionInterpolationMode.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14940fa80

void * __thiscall
FNiagaraVersionDataAccessor::_scalar_deleting_destructor_
          (FNiagaraVersionDataAccessor *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// ENiagaraDistributionAddressMode_StaticEnum @ 14940fab0

UEnum * __cdecl ENiagaraDistributionAddressMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraDistributionAddressMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraDistributionAddressMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDistributionAddressMode,(UObject *)pUVar1,
                       L"ENiagaraDistributionAddressMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraDistributionAddressMode.OuterSingleton;
}

// ENiagaraDistributionTimeRangeMode_StaticEnum @ 14940fc50

UEnum * __cdecl ENiagaraDistributionTimeRangeMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraDistributionTimeRangeMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraDistributionTimeRangeMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDistributionTimeRangeMode,(UObject *)pUVar1
                       ,L"ENiagaraDistributionTimeRangeMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraDistributionTimeRangeMode.OuterSingleton;
}

// NewStructOps @ 14940fc90

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraStatelessExpressionColorDivide_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraStatelessExpressionColorDivide,&UE::CoreUObject::Private::Construct<FNiagaraStatelessExpressionColorDivide>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraStatelessExpressionColorDivide>,&UE::CoreUObject::Private::Destruct<FNiagaraStatelessExpressionColorDivide>,&UE::CoreUObject::Private::Copy<FNiagaraStatelessExpressionColorDivide>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// ENiagaraDistributionLookupValueMode_StaticEnum @ 14940fd70

UEnum * __cdecl ENiagaraDistributionLookupValueMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraDistributionLookupValueMode.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraDistributionLookupValueMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDistributionLookupValueMode,
                       (UObject *)pUVar1,L"ENiagaraDistributionLookupValueMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraDistributionLookupValueMode.OuterSingleton;
}

// ENiagaraDistributionInitialLookupValueMode_StaticEnum @ 14940fe50

UEnum * __cdecl ENiagaraDistributionInitialLookupValueMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraDistributionInitialLookupValueMode.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraDistributionInitialLookupValueMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDistributionInitialLookupValueMode,
                       (UObject *)pUVar1,L"ENiagaraDistributionInitialLookupValueMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraDistributionInitialLookupValueMode.OuterSingleton;
}

// NewProp_InterpolationMode_SetBit @ 14940ff30

void __cdecl
Z_Construct_UScriptStruct_FNiagaraDistributionBase_Statics::NewProp_InterpolationMode_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 9) = *(byte *)((longlong)param_1 + 9) | 1;
  return;
}

// NewProp_AddressMode_SetBit @ 149410280

void __cdecl
Z_Construct_UScriptStruct_FNiagaraDistributionBase_Statics::NewProp_AddressMode_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 9) = *(byte *)((longlong)param_1 + 9) | 2;
  return;
}

// NewStructOps @ 149410290

void * __cdecl Z_Construct_UScriptStruct_FNiagaraDistributionBase_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraDistributionBase,&UE::CoreUObject::Private::Construct<FNiagaraDistributionBase>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraDistributionBase>,&UE::CoreUObject::Private::Destruct<FNiagaraDistributionBase>,&UE::CoreUObject::Private::Copy<FNiagaraDistributionBase>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1494106b0

void * __cdecl Z_Construct_UScriptStruct_FNiagaraDistributionRangeInt_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraDistributionRangeInt,&UE::CoreUObject::Private::Construct<FNiagaraDistributionRangeInt>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraDistributionRangeInt>,&UE::CoreUObject::Private::Destruct<FNiagaraDistributionRangeInt>,&UE::CoreUObject::Private::Copy<FNiagaraDistributionRangeInt>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UNiagaraStatelessModule_MeshRotationRate @ 149410770

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraStatelessModule_MeshRotationRate(void)

{
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_MeshRotationRate.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraStatelessModule_MeshRotationRate.OuterSingleton,
               &Z_Construct_UClass_UNiagaraStatelessModule_MeshRotationRate_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_MeshRotationRate.OuterSingleton;
}

// Z_Construct_UScriptStruct_FNiagaraDistributionCurveVector3 @ 1494107b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraDistributionCurveVector3(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraDistributionCurveVector3.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraDistributionCurveVector3.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraDistributionCurveVector3_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraDistributionCurveVector3.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraDistributionCurveVector3.InnerSingleton;
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

// NewProp_bUseRateScale_SetBit @ 149410830

void __cdecl
Z_Construct_UClass_UNiagaraStatelessModule_MeshRotationRate_Statics::NewProp_bUseRateScale_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// NewStructOps @ 1494108b0

void * __cdecl Z_Construct_UScriptStruct_FNiagaraDistributionRangeFloat_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraDistributionRangeFloat,&UE::CoreUObject::Private::Construct<FNiagaraDistributionRangeFloat>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraDistributionRangeFloat>,&UE::CoreUObject::Private::Destruct<FNiagaraDistributionRangeFloat>,&UE::CoreUObject::Private::Copy<FNiagaraDistributionRangeFloat>,&UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FNiagaraDistributionRangeFloat>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 149410bf0

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector2_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraDistributionRangeVector2,&UE::CoreUObject::Private::Construct<FNiagaraDistributionRangeVector2>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraDistributionRangeVector2>,&UE::CoreUObject::Private::Destruct<FNiagaraDistributionRangeVector2>,&UE::CoreUObject::Private::Copy<FNiagaraDistributionRangeVector2>,&UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FNiagaraDistributionRangeVector2>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 149410f90

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector3_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraDistributionRangeVector3,&UE::CoreUObject::Private::Construct<FNiagaraDistributionRangeVector3>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraDistributionRangeVector3>,&UE::CoreUObject::Private::Destruct<FNiagaraDistributionRangeVector3>,&UE::CoreUObject::Private::Copy<FNiagaraDistributionRangeVector3>,&UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FNiagaraDistributionRangeVector3>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FNiagaraStatelessExpressionFloat @ 149410fd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraStatelessExpressionFloat(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionFloat.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionFloat.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraStatelessExpressionFloat_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionFloat.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionFloat.InnerSingleton;
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

// NewStructOps @ 1494110a0

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraStatelessExpressionFloat_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraStatelessExpressionFloat,&UE::CoreUObject::Private::Construct<FNiagaraStatelessExpressionFloat>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraStatelessExpressionFloat>,&UE::CoreUObject::Private::Destruct<FNiagaraStatelessExpressionFloat>,&UE::CoreUObject::Private::Copy<FNiagaraStatelessExpressionFloat>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UNiagaraStatelessModule_RotateAroundPoint @ 149411130

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraStatelessModule_RotateAroundPoint(void)

{
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_RotateAroundPoint.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraStatelessModule_RotateAroundPoint.OuterSingleton,
               &Z_Construct_UClass_UNiagaraStatelessModule_RotateAroundPoint_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_RotateAroundPoint.OuterSingleton;
}

// NewStructOps @ 149411170

void * __cdecl Z_Construct_UScriptStruct_FNiagaraDistributionRangeColor_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraDistributionRangeColor,&UE::CoreUObject::Private::Construct<FNiagaraDistributionRangeColor>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraDistributionRangeColor>,&UE::CoreUObject::Private::Destruct<FNiagaraDistributionRangeColor>,&UE::CoreUObject::Private::Copy<FNiagaraDistributionRangeColor>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1494111e0

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraStatelessExpressionFloatConstant_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraStatelessExpressionFloatConstant,&UE::CoreUObject::Private::Construct<FNiagaraStatelessExpressionFloatConstant>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraStatelessExpressionFloatConstant>,&UE::CoreUObject::Private::Destruct<FNiagaraStatelessExpressionFloatConstant>,&UE::CoreUObject::Private::Copy<FNiagaraStatelessExpressionFloatConstant>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UNiagaraStatelessModule_CalculateAccurateVelocity @ 149411220

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraStatelessModule_CalculateAccurateVelocity(void)

{
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_CalculateAccurateVelocity.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraStatelessModule_CalculateAccurateVelocity.
                OuterSingleton,
               &Z_Construct_UClass_UNiagaraStatelessModule_CalculateAccurateVelocity_Statics::
                ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_CalculateAccurateVelocity.OuterSingleton
  ;
}

// NewStructOps @ 149411290

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraDistributionRangeRotator_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraDistributionRangeRotator,&UE::CoreUObject::Private::Construct<FNiagaraDistributionRangeRotator>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraDistributionRangeRotator>,&UE::CoreUObject::Private::Destruct<FNiagaraDistributionRangeRotator>,&UE::CoreUObject::Private::Copy<FNiagaraDistributionRangeRotator>,&UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FNiagaraDistributionRangeRotator>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 149411430

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraStatelessExpressionFloatBinding_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraStatelessExpressionFloatBinding,&UE::CoreUObject::Private::Construct<FNiagaraStatelessExpressionFloatBinding>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraStatelessExpressionFloatBinding>,&UE::CoreUObject::Private::Destruct<FNiagaraStatelessExpressionFloatBinding>,&UE::CoreUObject::Private::Copy<FNiagaraStatelessExpressionFloatBinding>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 149411540

void * __cdecl Z_Construct_UScriptStruct_FNiagaraDistributionFloat_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraDistributionFloat,&UE::CoreUObject::Private::Construct<FNiagaraDistributionFloat>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraDistributionFloat>,&UE::CoreUObject::Private::Destruct<FNiagaraDistributionFloat>,&UE::CoreUObject::Private::Copy<FNiagaraDistributionFloat>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 149411890

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraStatelessExpressionFloatAdd_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraStatelessExpressionFloatAdd,&UE::CoreUObject::Private::Construct<FNiagaraStatelessExpressionFloatAdd>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraStatelessExpressionFloatAdd>,&UE::CoreUObject::Private::Destruct<FNiagaraStatelessExpressionFloatAdd>,&UE::CoreUObject::Private::Copy<FNiagaraStatelessExpressionFloatAdd>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UNiagaraStatelessModule_ScaleColor @ 1494118d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraStatelessModule_ScaleColor(void)

{
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleColor.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleColor.OuterSingleton,
               &Z_Construct_UClass_UNiagaraStatelessModule_ScaleColor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleColor.OuterSingleton;
}

// NewStructOps @ 149411960

void * __cdecl Z_Construct_UScriptStruct_FNiagaraDistributionVector2_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraDistributionVector2,&UE::CoreUObject::Private::Construct<FNiagaraDistributionVector2>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraDistributionVector2>,&UE::CoreUObject::Private::Destruct<FNiagaraDistributionVector2>,&UE::CoreUObject::Private::Copy<FNiagaraDistributionVector2>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 149411b40

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraWorldManagerTickFunction_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraWorldManagerTickFunction,&UE::CoreUObject::Private::Construct<FNiagaraWorldManagerTickFunction>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraWorldManagerTickFunction>,&UE::CoreUObject::Private::Destruct<FNiagaraWorldManagerTickFunction>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UNiagaraStatelessModule_CameraOffset @ 149411bb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraStatelessModule_CameraOffset(void)

{
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_CameraOffset.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraStatelessModule_CameraOffset.OuterSingleton,
               &Z_Construct_UClass_UNiagaraStatelessModule_CameraOffset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_CameraOffset.OuterSingleton;
}

// Z_Construct_UScriptStruct_FNiagaraDistributionFloat @ 149411bf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraDistributionFloat(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraDistributionFloat.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraDistributionFloat.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraDistributionFloat_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraDistributionFloat.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraDistributionFloat.InnerSingleton;
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

// NewStructOps @ 149411c70

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraStatelessExpressionFloatSubtract_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraStatelessExpressionFloatSubtract,&UE::CoreUObject::Private::Construct<FNiagaraStatelessExpressionFloatSubtract>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraStatelessExpressionFloatSubtract>,&UE::CoreUObject::Private::Destruct<FNiagaraStatelessExpressionFloatSubtract>,&UE::CoreUObject::Private::Copy<FNiagaraStatelessExpressionFloatSubtract>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 149411ce0

void * __cdecl Z_Construct_UScriptStruct_FNiagaraDistributionVector3_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraDistributionVector3,&UE::CoreUObject::Private::Construct<FNiagaraDistributionVector3>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraDistributionVector3>,&UE::CoreUObject::Private::Destruct<FNiagaraDistributionVector3>,&UE::CoreUObject::Private::Copy<FNiagaraDistributionVector3>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// ENiagaraStatelessFeatureMask_StaticEnum @ 149411de0

UEnum * __cdecl ENiagaraStatelessFeatureMask_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraStatelessFeatureMask.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraStatelessFeatureMask.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraStatelessFeatureMask,(UObject *)pUVar1,
                       L"ENiagaraStatelessFeatureMask");
  }
  return Z_Registration_Info_UEnum_ENiagaraStatelessFeatureMask.OuterSingleton;
}

// NewStructOps @ 149411e80

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraStatelessExpressionFloatMultiply_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraStatelessExpressionFloatMultiply,&UE::CoreUObject::Private::Construct<FNiagaraStatelessExpressionFloatMultiply>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraStatelessExpressionFloatMultiply>,&UE::CoreUObject::Private::Destruct<FNiagaraStatelessExpressionFloatMultiply>,&UE::CoreUObject::Private::Copy<FNiagaraStatelessExpressionFloatMultiply>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSize @ 149411f50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSize(void)

{
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleMeshSize.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleMeshSize.OuterSingleton,
               &Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSize_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleMeshSize.OuterSingleton;
}

// NewStructOps @ 149411f90

void * __cdecl Z_Construct_UScriptStruct_FNiagaraDistributionPosition_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraDistributionPosition,&UE::CoreUObject::Private::Construct<FNiagaraDistributionPosition>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraDistributionPosition>,&UE::CoreUObject::Private::Destruct<FNiagaraDistributionPosition>,&UE::CoreUObject::Private::Copy<FNiagaraDistributionPosition>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_ReturnValue_SetBit @ 149412070

void __cdecl
Z_Construct_UFunction_UNiagaraStatelessModule_ScaleMeshSize_UseScaleCurveRange_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UNiagaraStatelessModule_ScaleMeshSize_UseScaleCurveRange @ 149412170

UFunction * __cdecl
Z_Construct_UFunction_UNiagaraStatelessModule_ScaleMeshSize_UseScaleCurveRange(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraStatelessModule_ScaleMeshSize_UseScaleCurveRange_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 149412300

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraStatelessExpressionFloatDivide_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraStatelessExpressionFloatDivide,&UE::CoreUObject::Private::Construct<FNiagaraStatelessExpressionFloatDivide>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraStatelessExpressionFloatDivide>,&UE::CoreUObject::Private::Destruct<FNiagaraStatelessExpressionFloatDivide>,&UE::CoreUObject::Private::Copy<FNiagaraStatelessExpressionFloatDivide>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UNiagaraStatelessModule_CurlNoiseForce @ 149412340

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraStatelessModule_CurlNoiseForce(void)

{
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_CurlNoiseForce.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraStatelessModule_CurlNoiseForce.OuterSingleton,
               &Z_Construct_UClass_UNiagaraStatelessModule_CurlNoiseForce_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_CurlNoiseForce.OuterSingleton;
}

// NewStructOps @ 1494124b0

void * __cdecl Z_Construct_UScriptStruct_FNiagaraDistributionColor_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraDistributionColor,&UE::CoreUObject::Private::Construct<FNiagaraDistributionColor>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraDistributionColor>,&UE::CoreUObject::Private::Destruct<FNiagaraDistributionColor>,&UE::CoreUObject::Private::Copy<FNiagaraDistributionColor>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 149412660

void * __cdecl Z_Construct_UScriptStruct_FNiagaraDistributionCurveFloat_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraDistributionCurveFloat,&UE::CoreUObject::Private::Construct<FNiagaraDistributionCurveFloat>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraDistributionCurveFloat>,&UE::CoreUObject::Private::Destruct<FNiagaraDistributionCurveFloat>,&UE::CoreUObject::Private::Copy<FNiagaraDistributionCurveFloat>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed @ 1494127b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed(void)

{
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed.
                OuterSingleton,
               &Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed_Statics::ClassParams
              );
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed.OuterSingleton;
}

// NewProp_bSampleScaleFactorByCurve_SetBit @ 149412810

void __cdecl
Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed_Statics::
NewProp_bSampleScaleFactorByCurve_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xe0) = 1;
  return;
}

// NewStructOps @ 149412820

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraDistributionCurveVector3_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraDistributionCurveVector3,&UE::CoreUObject::Private::Construct<FNiagaraDistributionCurveVector3>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraDistributionCurveVector3>,&UE::CoreUObject::Private::Destruct<FNiagaraDistributionCurveVector3>,&UE::CoreUObject::Private::Copy<FNiagaraDistributionCurveVector3>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UEnum_Niagara_ENiagaraCoordinateSpace @ 149412860

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraCoordinateSpace(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraCoordinateSpace.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraCoordinateSpace.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraCoordinateSpace_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraCoordinateSpace.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraStructConversionType @ 149412920

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraStructConversionType(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraStructConversionType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraStructConversionType.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraStructConversionType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraStructConversionType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FNiagaraStructConversionStep @ 1494129b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraStructConversionStep(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStructConversionStep.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraStructConversionStep.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraStructConversionStep.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraStructConversionStep.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle @ 149412a30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraTypeDefinitionHandle.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraTypeDefinitionHandle.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraTypeDefinitionHandle.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraTypeDefinitionHandle.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraVariable @ 149412af0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraVariable(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraVariable.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraVariable.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraVariable_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraVariable.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraVariable.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraVariableBase @ 149412b70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraVariableBase(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraVariableBase.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraVariableBase.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraVariableBase.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FNiagaraVariableBase.InnerSingleton;
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

// NewStructOps @ 149412c00

void * __cdecl Z_Construct_UScriptStruct_FNiagaraWildcard_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraWildcard,&UE::CoreUObject::Private::Construct<FNiagaraWildcard>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraWildcard>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 149413220

void * __cdecl Z_Construct_UScriptStruct_FNiagaraFloat_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraFloat,&UE::CoreUObject::Private::Construct<FNiagaraFloat>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraFloat>,&UE::CoreUObject::Private::Destruct<FNiagaraFloat>,&UE::CoreUObject::Private::Copy<FNiagaraFloat>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec2 @ 149413340

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec2(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec2.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec2.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec2_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec2.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec2.InnerSingleton;
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

// NewStructOps @ 149413480

void * __cdecl Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec2_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraStatelessExpressionVec2,&UE::CoreUObject::Private::Construct<FNiagaraStatelessExpressionVec2>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraStatelessExpressionVec2>,&UE::CoreUObject::Private::Destruct<FNiagaraStatelessExpressionVec2>,&UE::CoreUObject::Private::Copy<FNiagaraStatelessExpressionVec2>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 149413580

void * __cdecl Z_Construct_UScriptStruct_FNiagaraInt32_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraInt32,&UE::CoreUObject::Private::Construct<FNiagaraInt32>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraInt32>,&UE::CoreUObject::Private::Destruct<FNiagaraInt32>,&UE::CoreUObject::Private::Copy<FNiagaraInt32>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UNiagaraStatelessModule_ScaleRibbonWidth @ 149413600

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraStatelessModule_ScaleRibbonWidth(void)

{
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleRibbonWidth.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleRibbonWidth.OuterSingleton,
               &Z_Construct_UClass_UNiagaraStatelessModule_ScaleRibbonWidth_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleRibbonWidth.OuterSingleton;
}

// Z_Construct_UClass_UNiagaraStatelessModule_DecalAttributes @ 1494136b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraStatelessModule_DecalAttributes(void)

{
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_DecalAttributes.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraStatelessModule_DecalAttributes.OuterSingleton,
               &Z_Construct_UClass_UNiagaraStatelessModule_DecalAttributes_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_DecalAttributes.OuterSingleton;
}

// Z_Construct_UScriptStruct_FNiagaraDistributionVector3 @ 149413720

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraDistributionVector3(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraDistributionVector3.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraDistributionVector3.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraDistributionVector3_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraDistributionVector3.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraDistributionVector3.InnerSingleton;
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

// NewProp_ReturnValue_SetBit @ 149413900

void __cdecl
Z_Construct_UFunction_UNiagaraStatelessModule_ScaleRibbonWidth_UseScaleCurveRange_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 149413980

void __cdecl
Z_Construct_UFunction_UNiagaraStatelessModule_DecalAttributes_IsOrientationEnabled_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// `scalar_deleting_destructor' @ 149413990

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_24>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_24>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// NewStructOps @ 1494139c0

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec2Constant_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraStatelessExpressionVec2Constant,&UE::CoreUObject::Private::Construct<FNiagaraStatelessExpressionVec2Constant>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraStatelessExpressionVec2Constant>,&UE::CoreUObject::Private::Destruct<FNiagaraStatelessExpressionVec2Constant>,&UE::CoreUObject::Private::Copy<FNiagaraStatelessExpressionVec2Constant>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UNiagaraStatelessModule_ScaleRibbonWidth_UseScaleCurveRange @ 149413a40

UFunction * __cdecl
Z_Construct_UFunction_UNiagaraStatelessModule_ScaleRibbonWidth_UseScaleCurveRange(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraStatelessModule_ScaleRibbonWidth_UseScaleCurveRange_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UNiagaraStatelessModule_DecalAttributes_IsOrientationEnabled @ 149413a80

UFunction * __cdecl
Z_Construct_UFunction_UNiagaraStatelessModule_DecalAttributes_IsOrientationEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraStatelessModule_DecalAttributes_IsOrientationEnabled_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 149413b00

void * __cdecl Z_Construct_UScriptStruct_FNiagaraBool_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraBool,&UE::CoreUObject::Private::Construct<FNiagaraBool>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraBool>,&UE::CoreUObject::Private::Destruct<FNiagaraBool>,&UE::CoreUObject::Private::Copy<FNiagaraBool>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bApplyOrientation_SetBit @ 149413b40

void __cdecl
Z_Construct_UClass_UNiagaraStatelessModule_DecalAttributes_Statics::NewProp_bApplyOrientation_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// NewProp_bApplySize_SetBit @ 149413b50

void __cdecl
Z_Construct_UClass_UNiagaraStatelessModule_DecalAttributes_Statics::NewProp_bApplySize_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x31) = 1;
  return;
}

// NewProp_bApplyFade_SetBit @ 149413b60

void __cdecl
Z_Construct_UClass_UNiagaraStatelessModule_DecalAttributes_Statics::NewProp_bApplyFade_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x32) = 1;
  return;
}

// `scalar_deleting_destructor' @ 149413dc0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_25>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_25>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// NewStructOps @ 149413eb0

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec2Binding_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraStatelessExpressionVec2Binding,&UE::CoreUObject::Private::Construct<FNiagaraStatelessExpressionVec2Binding>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraStatelessExpressionVec2Binding>,&UE::CoreUObject::Private::Destruct<FNiagaraStatelessExpressionVec2Binding>,&UE::CoreUObject::Private::Copy<FNiagaraStatelessExpressionVec2Binding>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1494140c0

void * __cdecl Z_Construct_UScriptStruct_FNiagaraPosition_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraPosition,&UE::CoreUObject::Private::Construct<FNiagaraPosition>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraPosition>,&UE::CoreUObject::Private::Destruct<FNiagaraPosition>,&UE::CoreUObject::Private::Copy<FNiagaraPosition>,&UE::CoreUObject::Private::GetStructTypeHash<FNiagaraPosition>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 149414120

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_26>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_26>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149414410

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,NiagaraStatelessCommon::<lambda_30>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,NiagaraStatelessCommon::<lambda_30>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UEnum_Niagara_ENiagaraBoolDisplayMode @ 1494146a0

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraBoolDisplayMode(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraBoolDisplayMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraBoolDisplayMode.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraBoolDisplayMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraBoolDisplayMode.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraInputWidgetType @ 149414780

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraInputWidgetType(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraInputWidgetType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraInputWidgetType.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraInputWidgetType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraInputWidgetType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData @ 1494147c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraBoolParameterMetaData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraBoolParameterMetaData.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraBoolParameterMetaData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraBoolParameterMetaData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData @ 1494148c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraEnumParameterMetaData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraEnumParameterMetaData.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraEnumParameterMetaData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraEnumParameterMetaData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata @ 149414950

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraInputConditionMetadata.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraInputConditionMetadata.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraInputConditionMetadata.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraInputConditionMetadata.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization @ 149414a20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraInputParameterCustomization.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraInputParameterCustomization.InnerSingleton
               ,&Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraInputParameterCustomization.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraInputParameterCustomization.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraWidgetNamedIntegerInputValue @ 149414b10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraWidgetNamedIntegerInputValue(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraWidgetNamedIntegerInputValue.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraWidgetNamedIntegerInputValue.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraWidgetNamedIntegerInputValue_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraWidgetNamedIntegerInputValue.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraWidgetNamedIntegerInputValue.InnerSingleton;
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

// Z_Construct_UScriptStruct_FWidgetNamedInputValue @ 149414b90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWidgetNamedInputValue(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWidgetNamedInputValue.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWidgetNamedInputValue.InnerSingleton,
               &Z_Construct_UScriptStruct_FWidgetNamedInputValue_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWidgetNamedInputValue.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWidgetNamedInputValue.InnerSingleton;
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

// Z_Construct_UScriptStruct_FWidgetSegmentValueOverride @ 149414c30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWidgetSegmentValueOverride(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWidgetSegmentValueOverride.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWidgetSegmentValueOverride.InnerSingleton,
               &Z_Construct_UScriptStruct_FWidgetSegmentValueOverride_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWidgetSegmentValueOverride.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWidgetSegmentValueOverride.InnerSingleton;
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

// NewStructOps @ 149414eb0

void * __cdecl Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraInputConditionMetadata,&UE::CoreUObject::Private::Construct<FNiagaraInputConditionMetadata>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraInputConditionMetadata>,&UE::CoreUObject::Private::Destruct<FNiagaraInputConditionMetadata>,&UE::CoreUObject::Private::Copy<FNiagaraInputConditionMetadata>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 149414f30

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_27>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_27>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// NewStructOps @ 149414f60

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec2Add_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraStatelessExpressionVec2Add,&UE::CoreUObject::Private::Construct<FNiagaraStatelessExpressionVec2Add>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraStatelessExpressionVec2Add>,&UE::CoreUObject::Private::Destruct<FNiagaraStatelessExpressionVec2Add>,&UE::CoreUObject::Private::Copy<FNiagaraStatelessExpressionVec2Add>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 149414fa0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,NiagaraStatelessCommon::<lambda_31>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,NiagaraStatelessCommon::<lambda_31>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// NewStructOps @ 149415070

void * __cdecl Z_Construct_UScriptStruct_FNiagaraHalf_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 2;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraHalf,&UE::CoreUObject::Private::Construct<FNiagaraHalf>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraHalf>,&UE::CoreUObject::Private::Destruct<FNiagaraHalf>,&UE::CoreUObject::Private::Copy<FNiagaraHalf>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 2;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSize @ 1494150b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSize(void)

{
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleSpriteSize.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleSpriteSize.OuterSingleton,
               &Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSize_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleSpriteSize.OuterSingleton;
}

// Z_Construct_UScriptStruct_FNiagaraDistributionVector2 @ 1494150f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraDistributionVector2(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraDistributionVector2.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraDistributionVector2.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraDistributionVector2_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraDistributionVector2.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraDistributionVector2.InnerSingleton;
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

// NewProp_ReturnValue_SetBit @ 149415170

void __cdecl
Z_Construct_UFunction_UNiagaraStatelessModule_ScaleSpriteSize_UseScaleCurveRange_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UNiagaraStatelessModule_ScaleSpriteSize_UseScaleCurveRange @ 149415180

UFunction * __cdecl
Z_Construct_UFunction_UNiagaraStatelessModule_ScaleSpriteSize_UseScaleCurveRange(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UNiagaraStatelessModule_ScaleSpriteSize_UseScaleCurveRange_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bUseColorOverride_SetBit @ 1494151c0

void __cdecl
Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData_Statics::NewProp_bUseColorOverride_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewStructOps @ 1494151e0

void * __cdecl Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraEnumParameterMetaData,&UE::CoreUObject::Private::Construct<FNiagaraEnumParameterMetaData>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraEnumParameterMetaData>,&UE::CoreUObject::Private::Destruct<FNiagaraEnumParameterMetaData>,&UE::CoreUObject::Private::Copy<FNiagaraEnumParameterMetaData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 149415460

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec2Subtract_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraStatelessExpressionVec2Subtract,&UE::CoreUObject::Private::Construct<FNiagaraStatelessExpressionVec2Subtract>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraStatelessExpressionVec2Subtract>,&UE::CoreUObject::Private::Destruct<FNiagaraStatelessExpressionVec2Subtract>,&UE::CoreUObject::Private::Copy<FNiagaraStatelessExpressionVec2Subtract>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1494154a0

void * __cdecl Z_Construct_UScriptStruct_FNiagaraHalfVector2_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraHalfVector2,&UE::CoreUObject::Private::Construct<FNiagaraHalfVector2>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraHalfVector2>,&UE::CoreUObject::Private::Destruct<FNiagaraHalfVector2>,&UE::CoreUObject::Private::Copy<FNiagaraHalfVector2>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 2;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1494154e0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,NiagaraWorldManagerInternal::<lambda_28>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,NiagaraWorldManagerInternal::<lambda_28>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// ENiagaraInputWidgetType_StaticEnum @ 149415590

UEnum * __cdecl ENiagaraInputWidgetType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraInputWidgetType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraInputWidgetType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraInputWidgetType,(UObject *)pUVar1,
                       L"ENiagaraInputWidgetType");
  }
  return Z_Registration_Info_UEnum_ENiagaraInputWidgetType.OuterSingleton;
}

// NewStructOps @ 1494156e0

void * __cdecl Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 6;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraHalfVector3,&UE::CoreUObject::Private::Construct<FNiagaraHalfVector3>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraHalfVector3>,&UE::CoreUObject::Private::Destruct<FNiagaraHalfVector3>,&UE::CoreUObject::Private::Copy<FNiagaraHalfVector3>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 2;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 149415720

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec2Multiply_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraStatelessExpressionVec2Multiply,&UE::CoreUObject::Private::Construct<FNiagaraStatelessExpressionVec2Multiply>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraStatelessExpressionVec2Multiply>,&UE::CoreUObject::Private::Destruct<FNiagaraStatelessExpressionVec2Multiply>,&UE::CoreUObject::Private::Copy<FNiagaraStatelessExpressionVec2Multiply>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 149415760

void * __cdecl Z_Construct_UScriptStruct_FWidgetNamedInputValue_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWidgetNamedInputValue,&UE::CoreUObject::Private::Construct<FWidgetNamedInputValue>,&UE::CoreUObject::Private::ConstructForTests<FWidgetNamedInputValue>,&UE::CoreUObject::Private::Destruct<FWidgetNamedInputValue>,&UE::CoreUObject::Private::Copy<FWidgetNamedInputValue>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1494159d0

void * __cdecl Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraHalfVector4,&UE::CoreUObject::Private::Construct<FNiagaraHalfVector4>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraHalfVector4>,&UE::CoreUObject::Private::Destruct<FNiagaraHalfVector4>,&UE::CoreUObject::Private::Copy<FNiagaraHalfVector4>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 2;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bOverrideDisplayName_SetBit @ 149415a60

void __cdecl
Z_Construct_UScriptStruct_FWidgetSegmentValueOverride_Statics::NewProp_bOverrideDisplayName_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// NewStructOps @ 149415b00

void * __cdecl Z_Construct_UScriptStruct_FWidgetSegmentValueOverride_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWidgetSegmentValueOverride,&UE::CoreUObject::Private::Construct<FWidgetSegmentValueOverride>,&UE::CoreUObject::Private::ConstructForTests<FWidgetSegmentValueOverride>,&UE::CoreUObject::Private::Destruct<FWidgetSegmentValueOverride>,&UE::CoreUObject::Private::Copy<FWidgetSegmentValueOverride>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 149415b40

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec2Divide_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraStatelessExpressionVec2Divide,&UE::CoreUObject::Private::Construct<FNiagaraStatelessExpressionVec2Divide>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraStatelessExpressionVec2Divide>,&UE::CoreUObject::Private::Destruct<FNiagaraStatelessExpressionVec2Divide>,&UE::CoreUObject::Private::Copy<FNiagaraStatelessExpressionVec2Divide>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 149415bb0

void * __thiscall
FNiagaraDistributionRangeVector2::_scalar_deleting_destructor_
          (FNiagaraDistributionRangeVector2 *this,uint param_1)

{
  FInstancedStruct::Reset((FInstancedStruct *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed @ 149415c90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed(void)

{
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed.
                OuterSingleton,
               &Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed_Statics::
                ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed.OuterSingleton;
}

// `scalar_deleting_destructor' @ 149415d10

void * __thiscall
FNiagaraDistributionRangeVector3::_scalar_deleting_destructor_
          (FNiagaraDistributionRangeVector3 *this,uint param_1)

{
  FInstancedStruct::Reset((FInstancedStruct *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// NewProp_bSampleScaleFactorByCurve_SetBit @ 149415d50

void __cdecl
Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed_Statics::
NewProp_bSampleScaleFactorByCurve_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd0) = 1;
  return;
}

// NewStructOps @ 149415da0

void * __cdecl Z_Construct_UScriptStruct_FNiagaraNumeric_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraNumeric,&UE::CoreUObject::Private::Construct<FNiagaraNumeric>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraNumeric>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 149415de0

void * __thiscall
FNiagaraDistributionRangeColor::_scalar_deleting_destructor_
          (FNiagaraDistributionRangeColor *this,uint param_1)

{
  FInstancedStruct::Reset((FInstancedStruct *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// NewStructOps @ 149415f20

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraWidgetNamedIntegerInputValue_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraWidgetNamedIntegerInputValue,&UE::CoreUObject::Private::Construct<FNiagaraWidgetNamedIntegerInputValue>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraWidgetNamedIntegerInputValue>,&UE::CoreUObject::Private::Destruct<FNiagaraWidgetNamedIntegerInputValue>,&UE::CoreUObject::Private::Copy<FNiagaraWidgetNamedIntegerInputValue>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 149415fe0

void * __thiscall
FNiagaraDistributionFloat::_scalar_deleting_destructor_
          (FNiagaraDistributionFloat *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// Z_Construct_UClass_UNiagaraStatelessEmitter @ 1494160b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraStatelessEmitter(void)

{
  if (Z_Registration_Info_UClass_UNiagaraStatelessEmitter.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraStatelessEmitter.OuterSingleton,
               &Z_Construct_UClass_UNiagaraStatelessEmitter_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessEmitter.OuterSingleton;
}

// NewStructOps @ 1494160f0

void * __cdecl Z_Construct_UScriptStruct_FNiagaraParameterMap_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraParameterMap,&UE::CoreUObject::Private::Construct<FNiagaraParameterMap>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraParameterMap>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UNiagaraStatelessModule_Drag @ 149416170

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraStatelessModule_Drag(void)

{
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_Drag.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraStatelessModule_Drag.OuterSingleton,
               &Z_Construct_UClass_UNiagaraStatelessModule_Drag_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_Drag.OuterSingleton;
}

// NewProp_bDeterministic_SetBit @ 1494161d0

void __cdecl
Z_Construct_UClass_UNiagaraStatelessEmitter_Statics::NewProp_bDeterministic_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x50) = *(uint *)((longlong)param_1 + 0x50) | 1;
  return;
}

// `scalar_deleting_destructor' @ 1494161e0

void * __thiscall
FNiagaraDistributionVector2::_scalar_deleting_destructor_
          (FNiagaraDistributionVector2 *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// NewProp_bHasMinValue_SetBit @ 149416230

void __cdecl
Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization_Statics::NewProp_bHasMinValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// NewProp_bHasMaxValue_SetBit @ 149416240

void __cdecl
Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization_Statics::NewProp_bHasMaxValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_bHasStepWidth_SetBit @ 149416290

void __cdecl
Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization_Statics::NewProp_bHasStepWidth_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bBroadcastValueChangesOnCommitOnly_SetBit @ 1494162c0

void __cdecl
Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization_Statics::
NewProp_bBroadcastValueChangesOnCommitOnly_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x50) = 1;
  return;
}

// NewStructOps @ 149416370

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraInputParameterCustomization,&UE::CoreUObject::Private::Construct<FNiagaraInputParameterCustomization>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraInputParameterCustomization>,&UE::CoreUObject::Private::Destruct<FNiagaraInputParameterCustomization>,&UE::CoreUObject::Private::Copy<FNiagaraInputParameterCustomization>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1494164e0

void * __cdecl Z_Construct_UScriptStruct_FNiagaraDouble_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraDouble,&UE::CoreUObject::Private::Construct<FNiagaraDouble>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraDouble>,&UE::CoreUObject::Private::Destruct<FNiagaraDouble>,&UE::CoreUObject::Private::Copy<FNiagaraDouble>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1494166d0

void * __thiscall
FNiagaraDistributionPosition::_scalar_deleting_destructor_
          (FNiagaraDistributionPosition *this,uint param_1)

{
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&this->field_0x18);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1494168e0

void * __thiscall
FNiagaraDistributionColor::_scalar_deleting_destructor_
          (FNiagaraDistributionColor *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// NewStructOps @ 149416b00

void * __cdecl Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraMatrix,&UE::CoreUObject::Private::Construct<FNiagaraMatrix>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraMatrix>,&UE::CoreUObject::Private::Destruct<FNiagaraMatrix>,&UE::CoreUObject::Private::Copy<FNiagaraMatrix>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UNiagaraStatelessModule_ShapeLocation @ 149416c00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraStatelessModule_ShapeLocation(void)

{
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_ShapeLocation.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraStatelessModule_ShapeLocation.OuterSingleton,
               &Z_Construct_UClass_UNiagaraStatelessModule_ShapeLocation_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_ShapeLocation.OuterSingleton;
}

// Z_Construct_UEnum_Niagara_ENSM_ShapePrimitive @ 149416c80

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENSM_ShapePrimitive(void)

{
  if (Z_Registration_Info_UEnum_ENSM_ShapePrimitive.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENSM_ShapePrimitive.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENSM_ShapePrimitive_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENSM_ShapePrimitive.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENSM_SurfaceExpansionMode @ 149416cc0

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENSM_SurfaceExpansionMode(void)

{
  if (Z_Registration_Info_UEnum_ENSM_SurfaceExpansionMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENSM_SurfaceExpansionMode.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENSM_SurfaceExpansionMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENSM_SurfaceExpansionMode.InnerSingleton;
}

// ENiagaraBoolDisplayMode_StaticEnum @ 149416d00

UEnum * __cdecl ENiagaraBoolDisplayMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraBoolDisplayMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraBoolDisplayMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraBoolDisplayMode,(UObject *)pUVar1,
                       L"ENiagaraBoolDisplayMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraBoolDisplayMode.OuterSingleton;
}

// Z_Construct_UScriptStruct_FNiagaraDistributionRangeRotator @ 149416d40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraDistributionRangeRotator(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraDistributionRangeRotator.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraDistributionRangeRotator.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraDistributionRangeRotator_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraDistributionRangeRotator.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraDistributionRangeRotator.InnerSingleton;
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

// ENSM_ShapePrimitive_StaticEnum @ 149416dc0

UEnum * __cdecl ENSM_ShapePrimitive_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENSM_ShapePrimitive.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENSM_ShapePrimitive.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENSM_ShapePrimitive,(UObject *)pUVar1,
                       L"ENSM_ShapePrimitive");
  }
  return Z_Registration_Info_UEnum_ENSM_ShapePrimitive.OuterSingleton;
}

// Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters @ 149416ee0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters(void)

{
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_DynamicMaterialParameters.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraStatelessModule_DynamicMaterialParameters.
                OuterSingleton,
               &Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::
                ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_DynamicMaterialParameters.OuterSingleton
  ;
}

// Z_Construct_UScriptStruct_FNiagaraStatelessDynamicParameterSet @ 149416f20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraStatelessDynamicParameterSet(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessDynamicParameterSet.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraStatelessDynamicParameterSet.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraStatelessDynamicParameterSet_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessDynamicParameterSet.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraStatelessDynamicParameterSet.InnerSingleton;
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

// NewProp_bXChannelEnabled_SetBit @ 149416fe0

void __cdecl
Z_Construct_UScriptStruct_FNiagaraStatelessDynamicParameterSet_Statics::
NewProp_bXChannelEnabled_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 1;
  return;
}

// NewProp_bYChannelEnabled_SetBit @ 149416ff0

void __cdecl
Z_Construct_UScriptStruct_FNiagaraStatelessDynamicParameterSet_Statics::
NewProp_bYChannelEnabled_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 2;
  return;
}

// NewProp_bZChannelEnabled_SetBit @ 149417000

void __cdecl
Z_Construct_UScriptStruct_FNiagaraStatelessDynamicParameterSet_Statics::
NewProp_bZChannelEnabled_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 4;
  return;
}

// NewProp_bWChannelEnabled_SetBit @ 149417010

void __cdecl
Z_Construct_UScriptStruct_FNiagaraStatelessDynamicParameterSet_Statics::
NewProp_bWChannelEnabled_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 8;
  return;
}

// ENSM_SurfaceExpansionMode_StaticEnum @ 149417020

UEnum * __cdecl ENSM_SurfaceExpansionMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENSM_SurfaceExpansionMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENSM_SurfaceExpansionMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENSM_SurfaceExpansionMode,(UObject *)pUVar1,
                       L"ENSM_SurfaceExpansionMode");
  }
  return Z_Registration_Info_UEnum_ENSM_SurfaceExpansionMode.OuterSingleton;
}

// NewStructOps @ 149417060

void * __cdecl Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraBoolParameterMetaData,&UE::CoreUObject::Private::Construct<FNiagaraBoolParameterMetaData>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraBoolParameterMetaData>,&UE::CoreUObject::Private::Destruct<FNiagaraBoolParameterMetaData>,&UE::CoreUObject::Private::Copy<FNiagaraBoolParameterMetaData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1494170e0

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraStatelessDynamicParameterSet_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x108;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraStatelessDynamicParameterSet,&UE::CoreUObject::Private::Construct<FNiagaraStatelessDynamicParameterSet>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraStatelessDynamicParameterSet>,&UE::CoreUObject::Private::Destruct<FNiagaraStatelessDynamicParameterSet>,&UE::CoreUObject::Private::Copy<FNiagaraStatelessDynamicParameterSet>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec3 @ 149417160

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec3(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec3.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec3.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec3_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec3.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec3.InnerSingleton;
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

// NewStructOps @ 1494171e0

void * __cdecl Z_Construct_UScriptStruct_FNiagaraEmitterID_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraEmitterID,&UE::CoreUObject::Private::Construct<FNiagaraEmitterID>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraEmitterID>,&UE::CoreUObject::Private::Destruct<FNiagaraEmitterID>,&UE::CoreUObject::Private::Copy<FNiagaraEmitterID>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 149417220

void * __cdecl Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec3_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraStatelessExpressionVec3,&UE::CoreUObject::Private::Construct<FNiagaraStatelessExpressionVec3>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraStatelessExpressionVec3>,&UE::CoreUObject::Private::Destruct<FNiagaraStatelessExpressionVec3>,&UE::CoreUObject::Private::Copy<FNiagaraStatelessExpressionVec3>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bBoxSurfaceOnly_SetBit @ 149417260

void __cdecl
Z_Construct_UClass_UNiagaraStatelessModule_ShapeLocation_Statics::NewProp_bBoxSurfaceOnly_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x78) = 1;
  return;
}

// NewProp_bPlaneEdgesOnly_SetBit @ 149417270

void __cdecl
Z_Construct_UClass_UNiagaraStatelessModule_ShapeLocation_Statics::NewProp_bPlaneEdgesOnly_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xe8) = 1;
  return;
}

// NewProp_bCylinderSurfaceOnly_SetBit @ 149417280

void __cdecl
Z_Construct_UClass_UNiagaraStatelessModule_ShapeLocation_Statics::
NewProp_bCylinderSurfaceOnly_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1b0) = 1;
  return;
}

// NewProp_bCylinderSurfaceOnlyIncludeEndCaps_SetBit @ 149417290

void __cdecl
Z_Construct_UClass_UNiagaraStatelessModule_ShapeLocation_Statics::
NewProp_bCylinderSurfaceOnlyIncludeEndCaps_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1b1) = 1;
  return;
}

// NewProp_bAdvancedDisplay_SetBit @ 1494172e0

void __cdecl
Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bAdvancedDisplay_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// NewProp_bDisplayInOverviewStack_SetBit @ 1494172f0

void __cdecl
Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bDisplayInOverviewStack_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x12) = 1;
  return;
}

// NewProp_bOverrideColor_SetBit @ 149417300

void __cdecl
Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bOverrideColor_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_bEnableBoolOverride_SetBit @ 149417310

void __cdecl
Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bEnableBoolOverride_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x40) = 1;
  return;
}

// NewProp_bInlineEditConditionToggle_SetBit @ 149417320

void __cdecl
Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::
NewProp_bInlineEditConditionToggle_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x70) = 1;
  return;
}

// NewProp_bIsVisibleInVersionSelector_SetBit @ 1494173b0

void __cdecl
Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewProp_bIsVisibleInVersionSelector_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewStructOps @ 1494173c0

void * __cdecl Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1c;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraAssetVersion,&UE::CoreUObject::Private::Construct<FNiagaraAssetVersion>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraAssetVersion>,&UE::CoreUObject::Private::Destruct<FNiagaraAssetVersion>,&UE::CoreUObject::Private::Copy<FNiagaraAssetVersion>,&UE::CoreUObject::Private::GetStructTypeHash<FNiagaraAssetVersion>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bIsStaticSwitch_SetBit @ 149417400

void __cdecl
Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bIsStaticSwitch_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x170) = 1;
  return;
}

// NewProp_bParameter0Enabled_SetBit @ 149417410

void __cdecl
Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::
NewProp_bParameter0Enabled_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x30) = *(uint *)((longlong)param_1 + 0x30) | 1;
  return;
}

// NewProp_bParameter1Enabled_SetBit @ 149417420

void __cdecl
Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::
NewProp_bParameter1Enabled_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x30) = *(uint *)((longlong)param_1 + 0x30) | 2;
  return;
}

// NewStructOps @ 149417430

void * __cdecl Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x198;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraVariableMetaData,&UE::CoreUObject::Private::Construct<FNiagaraVariableMetaData>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraVariableMetaData>,&UE::CoreUObject::Private::Destruct<FNiagaraVariableMetaData>,&UE::CoreUObject::Private::Copy<FNiagaraVariableMetaData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bParameter2Enabled_SetBit @ 149417470

void __cdecl
Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::
NewProp_bParameter2Enabled_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x30) = *(uint *)((longlong)param_1 + 0x30) | 4;
  return;
}

// NewStructOps @ 149417480

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec3Constant_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraStatelessExpressionVec3Constant,&UE::CoreUObject::Private::Construct<FNiagaraStatelessExpressionVec3Constant>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraStatelessExpressionVec3Constant>,&UE::CoreUObject::Private::Destruct<FNiagaraStatelessExpressionVec3Constant>,&UE::CoreUObject::Private::Copy<FNiagaraStatelessExpressionVec3Constant>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bParameter3Enabled_SetBit @ 1494174c0

void __cdecl
Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_Statics::
NewProp_bParameter3Enabled_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x30) = *(uint *)((longlong)param_1 + 0x30) | 8;
  return;
}

// ENiagaraStructConversionType_StaticEnum @ 149417890

UEnum * __cdecl ENiagaraStructConversionType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraStructConversionType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraStructConversionType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraStructConversionType,(UObject *)pUVar1,
                       L"ENiagaraStructConversionType");
  }
  return Z_Registration_Info_UEnum_ENiagaraStructConversionType.OuterSingleton;
}

// NewStructOps @ 1494178d0

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec3Binding_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraStatelessExpressionVec3Binding,&UE::CoreUObject::Private::Construct<FNiagaraStatelessExpressionVec3Binding>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraStatelessExpressionVec3Binding>,&UE::CoreUObject::Private::Destruct<FNiagaraStatelessExpressionVec3Binding>,&UE::CoreUObject::Private::Copy<FNiagaraStatelessExpressionVec3Binding>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// <lambda_invoker_cdecl> @ 149417940

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

void __cdecl <lambda_29>::<lambda_invoker_cdecl>(UWorld *param_1)

{
  FNiagaraWorldManager *this;
  
  this = FNiagaraWorldManager::Get(param_1);
  FNiagaraWorldManager::DumpScalabilityState(this);
  return;
}

// TRotator<float>,0> @ 149417c20

void __cdecl
operator<<<UE::Math::TRotator<float>_0>(FStructuredArchiveSlot param_1,TRotator<float> *param_2)

{
  float *pfVar1;
  float *pfVar2;
  FArchive *this;
  FSlotBase local_res8;
  
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  this = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
  pfVar1 = (float *)**(undefined8 **)&this->field_0x8;
  if ((float *)(*(undefined8 **)&this->field_0x8)[1] < pfVar1 + 1) {
    if ((this->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this + 0x188))(this,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this,(uint *)param_2);
    }
  }
  else {
    param_2->Pitch = *pfVar1;
    **(longlong **)&this->field_0x8 = **(longlong **)&this->field_0x8 + 4;
  }
  pfVar1 = &param_2->Yaw;
  pfVar2 = (float *)**(undefined8 **)&this->field_0x8;
  if ((float *)(*(undefined8 **)&this->field_0x8)[1] < pfVar2 + 1) {
    if ((this->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this + 0x188))(this,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&this->field_0x8 = **(longlong **)&this->field_0x8 + 4;
  }
  pfVar1 = &param_2->Roll;
  pfVar2 = (float *)**(undefined8 **)&this->field_0x8;
  if (pfVar2 + 1 <= (float *)(*(undefined8 **)&this->field_0x8)[1]) {
    *pfVar1 = *pfVar2;
    **(longlong **)&this->field_0x8 = **(longlong **)&this->field_0x8 + 4;
    return;
  }
  if ((this->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)this + 0x188))(this,pfVar1,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(this,(uint *)pfVar1);
  return;
}

// AddLambda<`FNiagaraWorldManager::OnStartup'::__l2::<lambda_1>_> @ 149419260

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>::
AddLambda<_FNiagaraWorldManager::OnStartup_::__l2::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultDelegateUserPolicy> *this,
          <lambda_1> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  undefined8 uVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  uVar5 = 0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(UWorld_*),FDefaultDelegateUserPolicy,`FNiagaraWorldManager::OnStartup'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  *(undefined8 *)param_1 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      uVar5 = *puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    *(undefined8 *)param_1 = uVar5;
    if (iVar2 == *(int *)&this->field_0x14) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar2 + 1;
    pFVar6 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar2 * 0x10);
    *pFVar6 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar6 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_60.DelegateSize;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// AddLambda<`FNiagaraWorldManager::OnStartup'::__l5::<lambda_2>_> @ 149419490

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(APlayerController_*,AActor_*,AActor_*),FDefaultDelegateUserPolicy>
::AddLambda<_FNiagaraWorldManager::OnStartup_::__l5::<lambda_2>_>
          (TMulticastDelegateRegistration<void___cdecl(APlayerController_*,AActor_*,AActor_*),FDefaultDelegateUserPolicy>
           *this,<lambda_2> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  undefined8 uVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  uVar5 = 0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVAPlayerController__PEAVAActor__1_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(APlayerController_*,AActor_*,AActor_*),FDefaultDelegateUserPolicy,`FNiagaraWorldManager::OnStartup'::`5'::<lambda_2>_>
               ::_vftable_;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  *(undefined8 *)param_1 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      uVar5 = *puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    *(undefined8 *)param_1 = uVar5;
    if (iVar2 == *(int *)&this->field_0x14) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar2 + 1;
    pFVar6 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar2 * 0x10);
    *pFVar6 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar6 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_60.DelegateSize;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// CastChecked<UNiagaraParameterCollectionInstance,UObject> @ 149419de0

UNiagaraParameterCollectionInstance * __cdecl
CastChecked<UNiagaraParameterCollectionInstance,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UNiagaraParameterCollectionInstance>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UNiagaraParameterCollectionInstance_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UNiagaraParameterCollectionInstance *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraParameterCollectionInstance>(&local_28);
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

// CastChecked<UNiagaraStatelessModule,UObject> @ 149419ea0

UNiagaraStatelessModule * __cdecl CastChecked<UNiagaraStatelessModule,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UNiagaraStatelessModule>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UNiagaraStatelessModule_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UNiagaraStatelessModule *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraStatelessModule>(&local_28);
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

// CastChecked<UNiagaraVolumeRendererProperties,UObject> @ 149419f60

UNiagaraVolumeRendererProperties * __cdecl
CastChecked<UNiagaraVolumeRendererProperties,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UNiagaraVolumeRendererProperties>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraVolumeRendererProperties::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UNiagaraVolumeRendererProperties *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraVolumeRendererProperties>(&local_28);
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

// DefaultConstructItems<FNiagaraCachedViewInfo,int> @ 14941bcd0

void __cdecl DefaultConstructItems<FNiagaraCachedViewInfo,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 0x2d0);
    do {
      *(undefined8 *)(puVar1 + -4) = 0;
      *puVar1 = 0;
      puVar1[1] = 6;
      puVar1 = puVar1 + 0xb8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNiagaraCachedViewInfo,int> @ 14941bd20

void __cdecl DestructItems<FNiagaraCachedViewInfo,int>(FNiagaraCachedViewInfo *param_1,int param_2)

{
  ForElementType<UE::Math::TPlane<double>_> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->FrutumPlanes).AllocatorInstance.SecondaryData;
    do {
      if (*pFVar1 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      pFVar1 = pFVar1 + 0x5c;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNiagaraStatelessSpawnInfo,int> @ 14941bd70

void __cdecl
DestructItems<FNiagaraStatelessSpawnInfo,int>(FNiagaraStatelessSpawnInfo *param_1,int param_2)

{
  FInstancedStruct *this;
  
  if (param_2 != 0) {
    this = (FInstancedStruct *)&(param_1->SpawnProbability)._padding_;
    do {
      FInstancedStruct::Reset((FInstancedStruct *)&this[2].StructMemory);
      FInstancedStruct::Reset(this);
      FInstancedStruct::Reset((FInstancedStruct *)&this[-4].StructMemory);
      FInstancedStruct::Reset((FInstancedStruct *)&this[-7].StructMemory);
      this = this + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNiagaraStatelessComputeManager::FStatelessDataGenerationRequest,int> @ 14941bdd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __cdecl
DestructItems<FNiagaraStatelessComputeManager::FStatelessDataGenerationRequest,int>
          (FStatelessDataGenerationRequest *param_1,int param_2)

{
  FNiagaraDataBuffer *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  do {
    if (param_2 == 0) {
      return;
    }
    pFVar1 = (param_1->DestinationData).Reference;
    if (pFVar1 != (FNiagaraDataBuffer *)0x0) {
      if (((int)pFVar1->_padding_ < 1) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("IsBeingRead()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                             ,0x2c,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      LOCK();
      *(int *)&pFVar1->_padding_ = (int)pFVar1->_padding_ + -1;
      UNLOCK();
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  } while( true );
}

// DestructItems<TSharedPtr<FNiagaraSystemInstance,1>,int> @ 14941be50

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
DestructItems<TSharedPtr<FNiagaraSystemInstance,1>,int>
          (TSharedPtr<FNiagaraSystemInstance,1> *param_1,int param_2)

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

// DestructItems<TSharedRef<FNiagaraSystemSimulation,1>,int> @ 14941be90

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
DestructItems<TSharedRef<FNiagaraSystemSimulation,1>,int>
          (TSharedRef<FNiagaraSystemSimulation,1> *param_1,int param_2)

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

// DestructItems<TUniquePtr<FNiagaraStatelessComputeManager::FStatelessDataCache,TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>_>,int> @ 14941bed0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
DestructItems<TUniquePtr<FNiagaraStatelessComputeManager::FStatelessDataCache,TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>_>,int>
          (TUniquePtr<FNiagaraStatelessComputeManager::FStatelessDataCache,TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>_>
           *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>::operator()
              ((TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache> *)param_1,
               param_1->Ptr);
    param_1 = (TUniquePtr<FNiagaraStatelessComputeManager::FStatelessDataCache,TDefaultDelete<FNiagaraStatelessComputeManager::FStatelessDataCache>_>
               *)((longlong)param_1 + 8);
  }
  return;
}

// Enqueue<TRenderCommandTag<`FNiagaraWorldManager::TickStart'::__l2::TSTR_FNiagaraWorldManagerRTUpdateTime1298>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14941d630

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FNiagaraWorldManager::TickStart_::__l2::TSTR_FNiagaraWorldManagerRTUpdateTime1298>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FNiagaraWorldManager::TickStart'::__l2::TSTR_FNiagaraWorldManagerRTUpdateTime1298>
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
      if (bVar8) goto LAB_14941d781;
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
    goto LAB_14941d975;
  }
LAB_14941d781:
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
LAB_14941d85f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14941d85f;
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
LAB_14941d975:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FNiagaraRenderThreadDeletor<FNiagaraStatelessEmitterData>::operator()'::__l7::TSTR_NiagaraRenderThreadDeletor21>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14941d9b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FNiagaraRenderThreadDeletor<FNiagaraStatelessEmitterData>::operator()_::__l7::TSTR_NiagaraRenderThreadDeletor21>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FNiagaraRenderThreadDeletor<FNiagaraStatelessEmitterData>::operator()'::__l7::TSTR_NiagaraRenderThreadDeletor21>
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
      if (bVar8) goto LAB_14941db01;
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
    goto LAB_14941dcf5;
  }
LAB_14941db01:
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
LAB_14941dbdf:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14941dbdf;
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
LAB_14941dcf5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ForAllSystemSimulations<`FNiagaraWorldManager::WaitForAsyncWork'::__l2::<lambda_1>_> @ 14941e240

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraWorldManager::
ForAllSystemSimulations<_FNiagaraWorldManager::WaitForAsyncWork_::__l2::<lambda_1>_>
          (FNiagaraWorldManager *this,<lambda_1> param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  TBitArray<FDefaultBitArrayAllocator> *pTVar11;
  uint *puVar12;
  undefined8 *puVar13;
  undefined1 local_res18 [8];
  int local_res20;
  longlong local_d8;
  longlong local_d0;
  undefined4 uStack_94;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  
  puVar13 = (undefined8 *)&this->SystemSimulations[0][0].field_0x20;
  local_d0 = 7;
  do {
    local_d8 = 2;
    do {
      uVar9 = *(uint *)(puVar13 + 1);
      iVar6 = 0;
      iVar10 = 0;
      uVar4 = 1;
      uVar5 = 0;
      if (uVar9 != 0) {
        puVar12 = (uint *)*puVar13;
        if ((uint *)*puVar13 == (uint *)0x0) {
          puVar12 = (uint *)(puVar13 + -2);
        }
        uVar5 = *puVar12;
        while (uVar5 == 0) {
          lVar7 = (longlong)iVar6;
          iVar10 = iVar10 + 0x20;
          iVar6 = iVar6 + 1;
          uVar5 = uVar9;
          if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar6)
          goto LAB_14941e2fd;
          uVar5 = puVar12[lVar7 + 1];
        }
        uVar4 = -uVar5 & uVar5;
        uVar1 = (ulonglong)uVar4 * 2 + 1;
        lVar7 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        local_res20 = (int)lVar7;
        uVar5 = local_res20 + -1 + iVar10;
        if ((int)uVar9 < (int)uVar5) {
          uVar5 = uVar9;
        }
      }
LAB_14941e2fd:
      TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)(puVar13 + -2);
      uVar8 = uVar9 & 0xffffffe0;
      TStack_88._padding_ = CONCAT44(uVar4,iVar6);
      TStack_88.CurrentBitIndex = uVar5;
      TStack_88.UnvisitedBitMask = 0xffffffff;
      iVar6 = (int)uVar9 >> 5;
      TStack_88._28_4_ = local_44;
      TStack_88.BaseBitIndex = iVar10;
      uStack_68 = CONCAT44(uStack_94,*(int *)(puVar13 + -3) - *(int *)((longlong)puVar13 + 0x14));
      if (((int)uVar9 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar5 = *(uint *)(puVar13 + 1);
      if (uVar9 != uVar5) {
        pTVar11 = (TBitArray<FDefaultBitArrayAllocator> *)*puVar13;
        if ((TBitArray<FDefaultBitArrayAllocator> *)*puVar13 ==
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar11 = (TBitArray<FDefaultBitArrayAllocator> *)(puVar13 + -2);
        }
        uVar9 = -1 << ((byte)uVar9 & 0x1f) &
                *(uint *)((pTVar11->AllocatorInstance).InlineData + (longlong)iVar6 * 4);
        while (uVar9 == 0) {
          lVar7 = (longlong)iVar6;
          uVar8 = uVar8 + 0x20;
          iVar6 = iVar6 + 1;
          uVar9 = uVar5;
          if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar6)
          goto LAB_14941e400;
          uVar9 = *(uint *)((pTVar11->AllocatorInstance).InlineData + lVar7 * 4 + 4);
        }
        uVar1 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
        lVar7 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        uVar9 = (int)lVar7 + -1 + uVar8;
        if ((int)uVar5 < (int)uVar9) {
          uVar9 = uVar5;
        }
      }
LAB_14941e400:
      while( true ) {
        if (*(int *)(puVar13 + -3) - *(int *)((longlong)puVar13 + 0x14) != (int)uStack_68) {
          local_res18[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if ((TStack_88.CurrentBitIndex == uVar9) &&
           (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)(puVar13 + -2))) break;
        FNiagaraSystemSimulation::WaitForInstancesTickComplete
                  (*(FNiagaraSystemSimulation **)
                    ((longlong)TStack_88.CurrentBitIndex * 0x20 + 8 + puVar13[-4]),false);
        TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
      }
      puVar13 = puVar13 + 10;
      local_d8 = local_d8 + -1;
    } while (local_d8 != 0);
    local_d0 = local_d0 + -1;
    if (local_d0 == 0) {
      return;
    }
  } while( true );
}

// ForAllWorldManagers<`NiagaraWorldManagerInternal::<lambda_28>::operator()'::__l2::<lambda_1>_> @ 14941e4a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
FNiagaraWorldManager::
ForAllWorldManagers<_NiagaraWorldManagerInternal::<lambda_28>::operator()_::__l2::<lambda_1>_>
          (<lambda_1> param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  FTickFunction *this;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  ulonglong uVar13;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar9 = 0;
  iVar10 = 0;
  uVar4 = 1;
  uVar11 = WorldManagers._40_4_;
  uVar5 = 0;
  if (uVar11 != 0) {
    puVar12 = (uint *)&WorldManagers.field_0x10;
    if (WorldManagers._32_8_ != 0) {
      puVar12 = (uint *)WorldManagers._32_8_;
    }
    uVar5 = *puVar12;
    while (uVar5 == 0) {
      lVar6 = (longlong)iVar9;
      iVar10 = iVar10 + 0x20;
      iVar9 = iVar9 + 1;
      uVar5 = uVar11;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
      goto LAB_14941e54d;
      uVar5 = puVar12[lVar6 + 1];
    }
    uVar4 = -uVar5 & uVar5;
    uVar13 = (ulonglong)uVar4 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_res18 = (int)lVar6;
    uVar5 = local_res18 + -1 + iVar10;
    if ((int)uVar11 < (int)uVar5) {
      uVar5 = uVar11;
    }
  }
LAB_14941e54d:
  bVar2 = WorldManagers._40_1_;
  uVar8 = uVar11 & 0xffffffe0;
  uVar13 = WorldManagers._40_8_ & 0xffffffff;
  TStack_60._padding_ = CONCAT44(uVar4,iVar9);
  TStack_60.CurrentBitIndex = uVar5;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar9 = (int)uVar11 >> 5;
  TStack_60._28_4_ = uVar5;
  TStack_60.BaseBitIndex = iVar10;
  uStack_40 = CONCAT44(uStack_6c,WorldManagers._8_4_ - WorldManagers._52_4_);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&WorldManagers.field_0x10;
  if (((int)uVar11 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar5 = WorldManagers._40_4_;
  if (uVar11 != uVar5) {
    uVar13 = WorldManagers._40_8_ & 0xffffffff;
    lVar6 = 0x154c84770;
    if (WorldManagers._32_8_ != 0) {
      lVar6 = WorldManagers._32_8_;
    }
    uVar4 = -1 << (bVar2 & 0x1f) & *(uint *)(lVar6 + (longlong)iVar9 * 4);
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar9;
      uVar8 = uVar8 + 0x20;
      iVar9 = iVar9 + 1;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_14941e660;
      uVar4 = *(uint *)(lVar6 + 4 + lVar7 * 4);
    }
    uVar13 = (ulonglong)(-uVar4 & uVar4) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar8 = (int)lVar6 + -1 + uVar8;
    if ((int)uVar5 < (int)uVar8) {
      uVar8 = uVar5;
    }
    uVar13 = (ulonglong)uVar8;
  }
LAB_14941e660:
  while( true ) {
    if (WorldManagers._8_4_ - WorldManagers._52_4_ != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<UWorld_*,FNiagaraWorldManager_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == (int)uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)&WorldManagers.field_0x10))
    break;
    lVar6 = *(longlong *)(WorldManagers._0_8_ + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    if (lVar6 != 0) {
      iVar9 = 0;
      this = (FTickFunction *)(lVar6 + 0x20);
      do {
        lVar6 = 2;
        bVar3 = NiagaraWorldManagerInternal::GFirstHighPriTickGroup <= iVar9;
        do {
          FTickFunction::SetPriorityIncludingPrerequisites(this,bVar3);
          this = (FTickFunction *)&this[1].Prerequisites;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
        iVar9 = iVar9 + 1;
      } while (iVar9 < 7);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForAllWorldManagers<`FNiagaraWorldManager::SetScalabilityCullingMode'::__l5::<lambda_1>_> @ 14941e720

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

void __cdecl
FNiagaraWorldManager::
ForAllWorldManagers<_FNiagaraWorldManager::SetScalabilityCullingMode_::__l5::<lambda_1>_>
          (<lambda_1> param_1)

{
  ulonglong uVar1;
  FNiagaraWorldManager *this;
  code *pcVar2;
  byte bVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar12 = 0;
  uVar6 = 1;
  uVar13 = 0;
  uVar8 = WorldManagers._40_4_;
  uVar7 = uVar13;
  if (uVar8 != 0) {
    puVar14 = (uint *)&WorldManagers.field_0x10;
    if (WorldManagers._32_8_ != 0) {
      puVar14 = (uint *)WorldManagers._32_8_;
    }
    uVar7 = *puVar14;
    uVar13 = 0;
    while (uVar7 == 0) {
      lVar9 = (longlong)iVar12;
      uVar13 = uVar13 + 0x20;
      iVar12 = iVar12 + 1;
      uVar7 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14941e7cd;
      uVar7 = puVar14[lVar9 + 1];
    }
    uVar6 = -uVar7 & uVar7;
    uVar1 = (ulonglong)uVar6 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res18 = (int)lVar9;
    uVar7 = local_res18 + -1 + uVar13;
    if ((int)uVar8 < (int)uVar7) {
      uVar7 = uVar8;
    }
  }
LAB_14941e7cd:
  bVar3 = WorldManagers._40_1_;
  uVar11 = uVar8 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar12);
  TStack_60.CurrentBitIndex = uVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar8 >> 5;
  TStack_60._28_4_ = uVar7;
  TStack_60.BaseBitIndex = uVar13;
  uStack_40 = CONCAT44(uStack_6c,WorldManagers._8_4_ - WorldManagers._52_4_);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&WorldManagers.field_0x10;
  uVar13 = uVar8;
  if ((int)uVar8 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x7af,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar13 = WorldManagers._40_4_;
  }
  fVar4 = __real_3c23d70a;
  if (uVar8 != uVar13) {
    lVar9 = 0x154c84770;
    if (WorldManagers._32_8_ != 0) {
      lVar9 = WorldManagers._32_8_;
    }
    uVar7 = -1 << (bVar3 & 0x1f) & *(uint *)(lVar9 + (longlong)iVar12 * 4);
    while (uVar7 == 0) {
      lVar10 = (longlong)iVar12;
      uVar11 = uVar11 + 0x20;
      iVar12 = iVar12 + 1;
      uVar8 = uVar13;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
      goto LAB_14941e8e1;
      uVar7 = *(uint *)(lVar9 + 4 + lVar10 * 4);
    }
    uVar1 = (ulonglong)(-uVar7 & uVar7) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar8 = (int)lVar9 + -1 + uVar11;
    if ((int)uVar13 < (int)uVar8) {
      uVar8 = uVar13;
    }
  }
LAB_14941e8e1:
  while( true ) {
    if (WorldManagers._8_4_ - WorldManagers._52_4_ != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<UWorld_*,FNiagaraWorldManager_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar8) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)&WorldManagers.field_0x10))
    break;
    this = *(FNiagaraWorldManager **)
            (WorldManagers._0_8_ + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    if (this != (FNiagaraWorldManager *)0x0) {
      UpdateScalabilityManagers(this,fVar4,false);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// GetTypeName<UNiagaraParameterCollectionInstance> @ 149420250

FString * __cdecl GetTypeName<UNiagaraParameterCollectionInstance>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UNiagaraParameterCollectionInstance_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraStatelessModule> @ 149420290

FString * __cdecl GetTypeName<UNiagaraStatelessModule>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UNiagaraStatelessModule_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraVolumeRendererProperties> @ 1494202d0

FString * __cdecl GetTypeName<UNiagaraVolumeRendererProperties>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraVolumeRendererProperties::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// InternalConstructor<UNiagaraStatelessEmitter> @ 149421220

void __cdecl InternalConstructor<UNiagaraStatelessEmitter>(FObjectInitializer *param_1)

{
  UNiagaraEmitterBase *this;
  
  this = (UNiagaraEmitterBase *)param_1->Obj;
  if (this != (UNiagaraEmitterBase *)0x0) {
    UNiagaraEmitterBase::UNiagaraEmitterBase(this,param_1);
    *(uint *)&this[1]._padding_ = (uint)this[1]._padding_ & 0xfffffffe;
    this->_padding_ = (longlong)&___7UNiagaraStatelessEmitter__6B_;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 3;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].UniqueEmitterName.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0xc059000000000000;
    this[1].UniqueEmitterName.Data.ArrayNum = 0;
    this[1].UniqueEmitterName.Data.ArrayMax = -0x3fa70000;
    this[2]._padding_ = -0x3fa7000000000000;
    this[2]._padding_ = 0x4059000000000000;
    this[2]._padding_ = 0x4059000000000000;
    this[2]._padding_ = 0x4059000000000000;
    *(undefined1 *)&this[2]._padding_ = 1;
    FNiagaraEmitterStateData::FNiagaraEmitterStateData
              ((FNiagaraEmitterStateData *)&this[2].UniqueEmitterName);
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    this[5].UniqueEmitterName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[5].UniqueEmitterName.Data.ArrayNum = 0;
    this[5].UniqueEmitterName.Data.ArrayMax = 0;
    this[6]._padding_ = 0;
    FNiagaraPlatformSet::FNiagaraPlatformSet((FNiagaraPlatformSet *)&this[6]._padding_);
    this[7]._padding_ = 0;
    this[7]._padding_ = 0;
    FNiagaraDataSetCompiledData::FNiagaraDataSetCompiledData
              ((FNiagaraDataSetCompiledData *)&this[7]._padding_);
    this[8]._padding_ = 0;
    this[8].UniqueEmitterName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[8].UniqueEmitterName.Data.ArrayNum = 0;
    this[8].UniqueEmitterName.Data.ArrayMax = 0;
    this[9]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UNiagaraStatelessModule_AccelerationForce> @ 149421330

void __cdecl
InternalConstructor<UNiagaraStatelessModule_AccelerationForce>(FObjectInitializer *param_1)

{
  UNiagaraStatelessModule *this;
  
  this = (UNiagaraStatelessModule *)param_1->Obj;
  if (this != (UNiagaraStatelessModule *)0x0) {
    UNiagaraStatelessModule::UNiagaraStatelessModule(this);
    this->_padding_ = (longlong)&___7UNiagaraStatelessModule_AccelerationForce__6B_;
    FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
              ((FNiagaraDistributionRangeVector3 *)(this + 1),&UE::Math::TVector<float>::ZeroVector)
    ;
    *(undefined4 *)&this[2]._padding_ = 2;
  }
  return;
}

// InternalConstructor<UNiagaraStatelessModule_AddVelocity> @ 149421380

void __cdecl InternalConstructor<UNiagaraStatelessModule_AddVelocity>(FObjectInitializer *param_1)

{
  UNiagaraStatelessModule *this;
  float fVar1;
  double dVar2;
  TVector<float>_u_0 local_18;
  
  this = (UNiagaraStatelessModule *)param_1->Obj;
  if (this != (UNiagaraStatelessModule *)0x0) {
    UNiagaraStatelessModule::UNiagaraStatelessModule(this);
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UNiagaraStatelessModule_AddVelocity__6B_;
    local_18._0_8_ = 0;
    local_18._s_0.Z = 100.0;
    FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
              ((FNiagaraDistributionRangeVector3 *)&this[1]._padding_,
               (TVector<float> *)&local_18._s_0);
    FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
              ((FNiagaraDistributionRangeFloat *)&this[2]._padding_,__real_3f800000);
    FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
              ((FNiagaraDistributionRangeFloat *)&this[3]._padding_,__real_43fa0000);
    dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    fVar1 = __real_42c80000;
    this[4]._padding_ = (longlong)UE::Math::TRotator<double>::ZeroRotator.Pitch;
    this[4]._padding_ = (longlong)dVar2;
    *(double *)&this[4].field_0x28 = UE::Math::TRotator<double>::ZeroRotator.Roll;
    this[5]._padding_ = 0x42340000;
    FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
              ((FNiagaraDistributionRangeFloat *)&this[5]._padding_,fVar1);
    this[6]._padding_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    *(float *)&this[6]._padding_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined1 *)((longlong)&this[6]._padding_ + 4) = 0;
    *(undefined4 *)&this[6]._padding_ = 0;
    *(undefined4 *)((longlong)&this[6]._padding_ + 4) = 2;
  }
  return;
}

// InternalConstructor<UNiagaraStatelessModule_CalculateAccurateVelocity> @ 149421470

void __cdecl
InternalConstructor<UNiagaraStatelessModule_CalculateAccurateVelocity>(FObjectInitializer *param_1)

{
  UNiagaraStatelessModule *this;
  
  this = (UNiagaraStatelessModule *)param_1->Obj;
  if (this != (UNiagaraStatelessModule *)0x0) {
    UNiagaraStatelessModule::UNiagaraStatelessModule(this);
    this->_padding_ = (longlong)&___7UNiagaraStatelessModule_CalculateAccurateVelocity__6B_;
  }
  return;
}

// InternalConstructor<UNiagaraStatelessModule_CameraOffset> @ 1494214a0

void __cdecl InternalConstructor<UNiagaraStatelessModule_CameraOffset>(FObjectInitializer *param_1)

{
  UNiagaraStatelessModule *this;
  
  this = (UNiagaraStatelessModule *)param_1->Obj;
  if (this != (UNiagaraStatelessModule *)0x0) {
    UNiagaraStatelessModule::UNiagaraStatelessModule(this);
    this->_padding_ = (longlong)&___7UNiagaraStatelessModule_CameraOffset__6B_;
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)(this + 1),0.0);
    return;
  }
  return;
}

// InternalConstructor<UNiagaraStatelessModule_CurlNoiseForce> @ 1494214e0

void __cdecl
InternalConstructor<UNiagaraStatelessModule_CurlNoiseForce>(FObjectInitializer *param_1)

{
  UNiagaraStatelessModule *this;
  
  this = (UNiagaraStatelessModule *)param_1->Obj;
  if (this != (UNiagaraStatelessModule *)0x0) {
    UNiagaraStatelessModule::UNiagaraStatelessModule(this);
    *(undefined4 *)&this[1]._padding_ = 0x41200000;
    this->_padding_ = (longlong)&___7UNiagaraStatelessModule_CurlNoiseForce__6B_;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x42480000;
  }
  return;
}

// InternalConstructor<UNiagaraStatelessModule_DecalAttributes> @ 149421520

void __cdecl
InternalConstructor<UNiagaraStatelessModule_DecalAttributes>(FObjectInitializer *param_1)

{
  UNiagaraStatelessModule *this;
  TVector<float>_u_0 local_18;
  
  this = (UNiagaraStatelessModule *)param_1->Obj;
  if (this != (UNiagaraStatelessModule *)0x0) {
    UNiagaraStatelessModule::UNiagaraStatelessModule(this);
    *(undefined2 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UNiagaraStatelessModule_DecalAttributes__6B_;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    FNiagaraDistributionVector3::FNiagaraDistributionVector3
              ((FNiagaraDistributionVector3 *)&this[1]._padding_,
               &UE::Math::TVector<float>::ZeroVector);
    *(undefined4 *)&this[2]._padding_ = 2;
    local_18._s_0.X = 50.0;
    local_18._s_0.Y = 50.0;
    local_18._s_0.Z = 50.0;
    FNiagaraDistributionVector3::FNiagaraDistributionVector3
              ((FNiagaraDistributionVector3 *)&this[2]._padding_,(TVector<float> *)&local_18._s_0);
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)(this + 4),__real_3f800000);
    return;
  }
  return;
}

// InternalConstructor<UNiagaraStatelessModule_Drag> @ 1494215b0

void __cdecl InternalConstructor<UNiagaraStatelessModule_Drag>(FObjectInitializer *param_1)

{
  UNiagaraStatelessModule *this;
  float fVar1;
  
  this = (UNiagaraStatelessModule *)param_1->Obj;
  if (this != (UNiagaraStatelessModule *)0x0) {
    UNiagaraStatelessModule::UNiagaraStatelessModule(this);
    fVar1 = __real_3f800000;
    this->_padding_ = (longlong)&___7UNiagaraStatelessModule_Drag__6B_;
    FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
              ((FNiagaraDistributionRangeFloat *)(this + 1),fVar1);
    return;
  }
  return;
}

// InternalConstructor<UNiagaraStatelessModule_DynamicMaterialParameters> @ 149421600

void __cdecl
InternalConstructor<UNiagaraStatelessModule_DynamicMaterialParameters>(FObjectInitializer *param_1)

{
  UNiagaraStatelessModule *this;
  
  this = (UNiagaraStatelessModule *)param_1->Obj;
  if (this != (UNiagaraStatelessModule *)0x0) {
    UNiagaraStatelessModule::UNiagaraStatelessModule(this);
    this->_padding_ = (longlong)&___7UNiagaraStatelessModule_DynamicMaterialParameters__6B_;
    *(uint *)&this[1]._padding_ = (uint)this[1]._padding_ | 0xf;
    *(uint *)&this[1]._padding_ = (uint)this[1]._padding_ & 0xfffffff1 | 1;
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)&this[1]._padding_,0.0);
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)&this[2]._padding_,0.0);
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)(this + 4),0.0);
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)&this[5]._padding_,0.0);
    *(uint *)&this[6]._padding_ = (uint)this[6]._padding_ | 0xf;
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)&this[6].field_0x28,0.0);
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)&this[8]._padding_,0.0);
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)&this[9]._padding_,0.0);
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)&this[10].field_0x28,0.0);
    *(uint *)&this[0xc]._padding_ = (uint)this[0xc]._padding_ | 0xf;
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)&this[0xc]._padding_,0.0);
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)&this[0xd]._padding_,0.0);
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)(this + 0xf),0.0);
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)&this[0x10]._padding_,0.0);
    *(uint *)&this[0x11]._padding_ = (uint)this[0x11]._padding_ | 0xf;
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)&this[0x11].field_0x28,0.0);
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)&this[0x13]._padding_,0.0);
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)&this[0x14]._padding_,0.0);
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)&this[0x15].field_0x28,0.0);
    return;
  }
  return;
}

// InternalConstructor<UNiagaraStatelessModule_GravityForce> @ 149421750

void __cdecl InternalConstructor<UNiagaraStatelessModule_GravityForce>(FObjectInitializer *param_1)

{
  UNiagaraStatelessModule *this;
  TVector<float>_u_0 local_18;
  
  this = (UNiagaraStatelessModule *)param_1->Obj;
  if (this != (UNiagaraStatelessModule *)0x0) {
    UNiagaraStatelessModule::UNiagaraStatelessModule(this);
    local_18._0_8_ = 0;
    this->_padding_ = (longlong)&___7UNiagaraStatelessModule_GravityForce__6B_;
    local_18._s_0.Z = -980.0;
    FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
              ((FNiagaraDistributionRangeVector3 *)(this + 1),(TVector<float> *)&local_18._s_0);
  }
  return;
}

// InternalConstructor<UNiagaraStatelessModule_InitialMeshOrientation> @ 1494217a0

void __cdecl
InternalConstructor<UNiagaraStatelessModule_InitialMeshOrientation>(FObjectInitializer *param_1)

{
  UNiagaraStatelessModule *this;
  
  this = (UNiagaraStatelessModule *)param_1->Obj;
  if (this != (UNiagaraStatelessModule *)0x0) {
    UNiagaraStatelessModule::UNiagaraStatelessModule(this);
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UNiagaraStatelessModule_InitialMeshOrientation__6B_;
    FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
              ((FNiagaraDistributionRangeVector3 *)&this[1]._padding_,
               &UE::Math::TVector<float>::XAxisVector);
    FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
              ((FNiagaraDistributionRangeVector3 *)&this[2]._padding_,
               &UE::Math::TVector<float>::XAxisVector);
    FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
              ((FNiagaraDistributionRangeVector3 *)&this[3].field_0x28,
               &UE::Math::TVector<float>::ZeroVector);
    return;
  }
  return;
}

// InternalConstructor<UNiagaraStatelessModule_InitializeParticle> @ 149421810

void __cdecl
InternalConstructor<UNiagaraStatelessModule_InitializeParticle>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  UNiagaraStatelessModule *this;
  float fVar2;
  int iVar3;
  FLinearColor_u_0 local_18;
  
  this = (UNiagaraStatelessModule *)param_1->Obj;
  if (this != (UNiagaraStatelessModule *)0x0) {
    UNiagaraStatelessModule::UNiagaraStatelessModule(this);
    fVar2 = __real_3f800000;
    this->_padding_ = (longlong)&___7UNiagaraStatelessModule_InitializeParticle__6B_;
    FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
              ((FNiagaraDistributionRangeFloat *)(this + 1),fVar2);
    local_18 = FLinearColor::White.field0_0x0;
    FNiagaraDistributionColor::FNiagaraDistributionColor
              ((FNiagaraDistributionColor *)(this + 2),(FLinearColor *)&local_18._s_0);
    FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
              ((FNiagaraDistributionRangeFloat *)&this[3]._padding_,__real_3f800000);
    pbVar1 = (byte *)((longlong)&this[4]._padding_ + 1);
    *pbVar1 = *pbVar1 & 0xfc;
    this[4]._padding_ = (longlong)&___7FNiagaraDistributionBase__6B_;
    *(undefined1 *)&this[4]._padding_ = 3;
    *(undefined1 *)((longlong)&this[4]._padding_ + 2) = 0;
    *(undefined8 *)((longlong)&this[4]._padding_ + 4) = 0;
    iVar3 = FNiagaraTypeDefinitionHandle::Register
                      ((FNiagaraTypeDefinitionHandle *)((longlong)&this[4]._padding_ + 4),
                       &FNiagaraTypeDefinition::Vec4Def);
    *(int *)((longlong)&this[4]._padding_ + 4) = iVar3;
    FInstancedStruct::FInstancedStruct((FInstancedStruct *)&this[4].field_0x28);
    *(undefined1 *)&this[4]._padding_ = 4;
    this[4]._padding_ = (longlong)&___7FNiagaraDistributionRangeVector2__6B_;
    this[5]._padding_ = 0x4120000041200000;
    this[5]._padding_ = 0x4120000041200000;
    FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
              ((FNiagaraDistributionRangeFloat *)&this[5]._padding_,0.0);
    local_18._s_0.B = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
    local_18._0_8_ = UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
    FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
              ((FNiagaraDistributionRangeVector3 *)&this[6]._padding_,
               (TVector<float> *)&local_18._s_0);
    fVar2 = __real_41200000;
    this[7].field_0x28 = 0;
    FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
              ((FNiagaraDistributionRangeFloat *)(this + 8),fVar2);
    FNiagaraDistributionVector3::FNiagaraDistributionVector3
              ((FNiagaraDistributionVector3 *)(this + 9));
    this[9]._padding_ = (longlong)&___7FNiagaraDistributionPosition__6B_;
    FNiagaraDistributionVector3::InitConstant
              ((FNiagaraDistributionVector3 *)(this + 9),&UE::Math::TVector<float>::ZeroVector);
  }
  return;
}

// InternalConstructor<UNiagaraStatelessModule_LightAttributes> @ 1494219a0

void __cdecl
InternalConstructor<UNiagaraStatelessModule_LightAttributes>(FObjectInitializer *param_1)

{
  UNiagaraStatelessModule *this;
  float fVar1;
  
  this = (UNiagaraStatelessModule *)param_1->Obj;
  if (this != (UNiagaraStatelessModule *)0x0) {
    UNiagaraStatelessModule::UNiagaraStatelessModule(this);
    fVar1 = __real_42c80000;
    *(uint *)&this[1]._padding_ = (uint)this[1]._padding_ & 0xffffffe0;
    this->_padding_ = (longlong)&___7UNiagaraStatelessModule_LightAttributes__6B_;
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)&this[1]._padding_,fVar1);
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)&this[2]._padding_,__real_3f800000);
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)&this[3].field_0x28,__real_3f800000);
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)&this[5]._padding_,__real_3f800000);
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)&this[6]._padding_,0.0);
    return;
  }
  return;
}

// InternalConstructor<UNiagaraStatelessModule_MeshIndex> @ 149421a30

void __cdecl InternalConstructor<UNiagaraStatelessModule_MeshIndex>(FObjectInitializer *param_1)

{
  UNiagaraStatelessModule *this;
  int iVar1;
  
  this = (UNiagaraStatelessModule *)param_1->Obj;
  if (this != (UNiagaraStatelessModule *)0x0) {
    UNiagaraStatelessModule::UNiagaraStatelessModule(this);
    this->_padding_ = (longlong)&___7UNiagaraStatelessModule_MeshIndex__6B_;
    *(undefined1 *)&this[1]._padding_ = 3;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    iVar1 = FNiagaraTypeDefinitionHandle::Register
                      ((FNiagaraTypeDefinitionHandle *)((longlong)&this[1]._padding_ + 4),
                       &FNiagaraTypeDefinition::Vec4Def);
    *(int *)((longlong)&this[1]._padding_ + 4) = iVar1;
    FInstancedStruct::FInstancedStruct((FInstancedStruct *)&this[1]._padding_);
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 3;
    *(undefined8 *)&this[1].field_0x28 = 0;
    this[2]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UNiagaraStatelessModule_MeshRotationRate> @ 149421ab0

void __cdecl
InternalConstructor<UNiagaraStatelessModule_MeshRotationRate>(FObjectInitializer *param_1)

{
  UNiagaraStatelessModule *this;
  
  this = (UNiagaraStatelessModule *)param_1->Obj;
  if (this != (UNiagaraStatelessModule *)0x0) {
    UNiagaraStatelessModule::UNiagaraStatelessModule(this);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UNiagaraStatelessModule_MeshRotationRate__6B_;
    FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
              ((FNiagaraDistributionRangeVector3 *)&this[1]._padding_,
               &UE::Math::TVector<float>::ZeroVector);
    FNiagaraDistributionCurveVector3::FNiagaraDistributionCurveVector3
              ((FNiagaraDistributionCurveVector3 *)&this[2]._padding_,Accumulate);
    return;
  }
  return;
}

// InternalConstructor<UNiagaraStatelessModule_RotateAroundPoint> @ 149421b10

void __cdecl
InternalConstructor<UNiagaraStatelessModule_RotateAroundPoint>(FObjectInitializer *param_1)

{
  UNiagaraStatelessModule *this;
  float fVar1;
  
  this = (UNiagaraStatelessModule *)param_1->Obj;
  if (this != (UNiagaraStatelessModule *)0x0) {
    UNiagaraStatelessModule::UNiagaraStatelessModule(this);
    fVar1 = __real_43b40000;
    this->_padding_ = (longlong)&___7UNiagaraStatelessModule_RotateAroundPoint__6B_;
    FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
              ((FNiagaraDistributionRangeFloat *)(this + 1),fVar1);
    FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
              ((FNiagaraDistributionRangeFloat *)(this + 2),__real_42c80000);
    FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
              ((FNiagaraDistributionRangeFloat *)(this + 3),0.0);
    *(undefined4 *)&this[4]._padding_ = 0;
    FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
              ((FNiagaraDistributionRangeVector3 *)&this[4]._padding_,
               &UE::Math::TVector<float>::ZeroVector);
    *(undefined4 *)&this[5]._padding_ = 0;
    FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
              ((FNiagaraDistributionRangeVector3 *)&this[5]._padding_,
               &UE::Math::TVector<float>::ZeroVector);
    return;
  }
  return;
}

// InternalConstructor<UNiagaraStatelessModule_ScaleColor> @ 149421bb0

void __cdecl InternalConstructor<UNiagaraStatelessModule_ScaleColor>(FObjectInitializer *param_1)

{
  UNiagaraStatelessModule *this;
  
  this = (UNiagaraStatelessModule *)param_1->Obj;
  if (this != (UNiagaraStatelessModule *)0x0) {
    UNiagaraStatelessModule::UNiagaraStatelessModule(this);
    this->_padding_ = (longlong)&___7UNiagaraStatelessModule_ScaleColor__6B_;
    FNiagaraDistributionColor::FNiagaraDistributionColor
              ((FNiagaraDistributionColor *)(this + 1),&FLinearColor::White);
    return;
  }
  return;
}

// InternalConstructor<UNiagaraStatelessModule_ScaleMeshSize> @ 149421c00

void __cdecl InternalConstructor<UNiagaraStatelessModule_ScaleMeshSize>(FObjectInitializer *param_1)

{
  UNiagaraStatelessModule *this;
  int iVar1;
  
  this = (UNiagaraStatelessModule *)param_1->Obj;
  if (this != (UNiagaraStatelessModule *)0x0) {
    UNiagaraStatelessModule::UNiagaraStatelessModule(this);
    this->_padding_ = (longlong)&___7UNiagaraStatelessModule_ScaleMeshSize__6B_;
    FNiagaraDistributionVector3::FNiagaraDistributionVector3
              ((FNiagaraDistributionVector3 *)(this + 1),&UE::Math::TVector<float>::OneVector);
    this[2]._padding_ = 0;
    iVar1 = FNiagaraTypeDefinitionHandle::Register
                      ((FNiagaraTypeDefinitionHandle *)&this[2]._padding_,
                       &FNiagaraTypeDefinition::Vec4Def);
    *(int *)&this[2]._padding_ = iVar1;
    this[2]._padding_ = 0;
    *(undefined8 *)&this[2].field_0x28 = 0;
  }
  return;
}

// InternalConstructor<UNiagaraStatelessModule_ScaleMeshSizeBySpeed> @ 149421c80

void __cdecl
InternalConstructor<UNiagaraStatelessModule_ScaleMeshSizeBySpeed>(FObjectInitializer *param_1)

{
  UNiagaraStatelessModule *this;
  float fVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  float local_res10 [6];
  undefined1 local_18 [16];
  
  this = (UNiagaraStatelessModule *)param_1->Obj;
  if (this != (UNiagaraStatelessModule *)0x0) {
    UNiagaraStatelessModule::UNiagaraStatelessModule(this);
    fVar1 = __real_447a0000;
    this->_padding_ = (longlong)&___7UNiagaraStatelessModule_ScaleMeshSizeBySpeed__6B_;
    FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
              ((FNiagaraDistributionRangeFloat *)(this + 1),fVar1);
    local_18._0_8_ = 0x3f8000003f800000;
    local_18._8_4_ = 1.0;
    FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
              ((FNiagaraDistributionRangeVector3 *)(this + 2),(TVector<float> *)local_18);
    local_18._0_8_ = 0x4000000040000000;
    local_18._8_4_ = 0x40000000;
    FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
              ((FNiagaraDistributionRangeVector3 *)&this[3]._padding_,(TVector<float> *)local_18);
    local_18._0_8_ = &local_res8;
    *(undefined1 *)&this[4]._padding_ = 0;
    local_18._8_8_ = local_res10;
    local_res8 = 0;
    local_resc = 0x3f800000;
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)&this[4].field_0x28,(initializer_list<float> *)local_18)
    ;
  }
  return;
}

// InternalConstructor<UNiagaraStatelessModule_ScaleRibbonWidth> @ 149421d50

void __cdecl
InternalConstructor<UNiagaraStatelessModule_ScaleRibbonWidth>(FObjectInitializer *param_1)

{
  UNiagaraStatelessModule *this;
  float fVar1;
  int iVar2;
  
  this = (UNiagaraStatelessModule *)param_1->Obj;
  if (this != (UNiagaraStatelessModule *)0x0) {
    UNiagaraStatelessModule::UNiagaraStatelessModule(this);
    fVar1 = __real_3f800000;
    this->_padding_ = (longlong)&___7UNiagaraStatelessModule_ScaleRibbonWidth__6B_;
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)(this + 1),fVar1);
    this[2]._padding_ = 0;
    iVar2 = FNiagaraTypeDefinitionHandle::Register
                      ((FNiagaraTypeDefinitionHandle *)&this[2]._padding_,
                       &FNiagaraTypeDefinition::Vec4Def);
    *(int *)&this[2]._padding_ = iVar2;
    this[2]._padding_ = 0;
    *(undefined8 *)&this[2].field_0x28 = 0;
  }
  return;
}

// InternalConstructor<UNiagaraStatelessModule_ScaleSpriteSize> @ 149421dd0

void __cdecl
InternalConstructor<UNiagaraStatelessModule_ScaleSpriteSize>(FObjectInitializer *param_1)

{
  UNiagaraStatelessModule *this;
  int iVar1;
  TVector2<float>_u_0 local_res8;
  
  this = (UNiagaraStatelessModule *)param_1->Obj;
  if (this != (UNiagaraStatelessModule *)0x0) {
    UNiagaraStatelessModule::UNiagaraStatelessModule(this);
    this->_padding_ = (longlong)&___7UNiagaraStatelessModule_ScaleSpriteSize__6B_;
    local_res8 = UE::Math::TVector2<float>::UnitVector.field0_0x0;
    FNiagaraDistributionVector2::FNiagaraDistributionVector2
              ((FNiagaraDistributionVector2 *)(this + 1),(TVector2<float> *)&local_res8._s_0);
    this[2]._padding_ = 0;
    iVar1 = FNiagaraTypeDefinitionHandle::Register
                      ((FNiagaraTypeDefinitionHandle *)&this[2]._padding_,
                       &FNiagaraTypeDefinition::Vec4Def);
    *(int *)&this[2]._padding_ = iVar1;
    this[2]._padding_ = 0;
    *(undefined8 *)&this[2].field_0x28 = 0;
  }
  return;
}

// InternalConstructor<UNiagaraStatelessModule_ScaleSpriteSizeBySpeed> @ 149421e60

void __cdecl
InternalConstructor<UNiagaraStatelessModule_ScaleSpriteSizeBySpeed>(FObjectInitializer *param_1)

{
  UNiagaraStatelessModule *this;
  float fVar1;
  TVector2<float>_u_0 local_res8;
  float local_res10 [6];
  initializer_list<float> local_18;
  
  this = (UNiagaraStatelessModule *)param_1->Obj;
  if (this != (UNiagaraStatelessModule *)0x0) {
    UNiagaraStatelessModule::UNiagaraStatelessModule(this);
    fVar1 = __real_447a0000;
    this->_padding_ = (longlong)&___7UNiagaraStatelessModule_ScaleSpriteSizeBySpeed__6B_;
    FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
              ((FNiagaraDistributionRangeFloat *)(this + 1),fVar1);
    local_res8._s_0.X = 1.0;
    local_res8._s_0.Y = 1.0;
    FNiagaraDistributionRangeVector2::FNiagaraDistributionRangeVector2
              ((FNiagaraDistributionRangeVector2 *)(this + 2),(TVector2<float> *)&local_res8._s_0);
    local_res8._s_0.X = 2.0;
    local_res8._s_0.Y = 2.0;
    FNiagaraDistributionRangeVector2::FNiagaraDistributionRangeVector2
              ((FNiagaraDistributionRangeVector2 *)&this[3]._padding_,
               (TVector2<float> *)&local_res8._s_0);
    local_18._First = (float *)&local_res8;
    *(undefined1 *)&this[4]._padding_ = 0;
    local_18._Last = local_res10;
    local_res8._s_0.X = 0.0;
    local_res8._s_0.Y = 1.0;
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)&this[4]._padding_,&local_18);
  }
  return;
}

// InternalConstructor<UNiagaraStatelessModule_ShapeLocation> @ 149421f20

void __cdecl InternalConstructor<UNiagaraStatelessModule_ShapeLocation>(FObjectInitializer *param_1)

{
  UNiagaraStatelessModule *this;
  float fVar1;
  TVector2<float>_u_0 local_res8 [4];
  TVector<float>_u_0 local_28 [2];
  
  this = (UNiagaraStatelessModule *)param_1->Obj;
  if (this != (UNiagaraStatelessModule *)0x0) {
    UNiagaraStatelessModule::UNiagaraStatelessModule(this);
    fVar1 = __real_42c80000;
    this->_padding_ = (longlong)&___7UNiagaraStatelessModule_ShapeLocation__6B_;
    *(undefined1 *)&this[1]._padding_ = 4;
    local_28[0]._s_0.X = 100.0;
    local_28[0]._s_0.Y = 100.0;
    local_28[0]._s_0.Z = 100.0;
    FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
              ((FNiagaraDistributionRangeVector3 *)&this[1]._padding_,
               (TVector<float> *)&local_28[0]._s_0);
    *(undefined2 *)&this[2]._padding_ = 0x100;
    FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
              ((FNiagaraDistributionRangeFloat *)&this[2]._padding_,0.0);
    local_res8[0]._s_0.X = 100.0;
    local_res8[0]._s_0.Y = 100.0;
    FNiagaraDistributionRangeVector2::FNiagaraDistributionRangeVector2
              ((FNiagaraDistributionRangeVector2 *)&this[3]._padding_,
               (TVector2<float> *)&local_res8[0]._s_0);
    *(undefined2 *)&this[4].field_0x28 = 0x100;
    FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
              ((FNiagaraDistributionRangeFloat *)(this + 5),0.0);
    FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
              ((FNiagaraDistributionRangeFloat *)(this + 6),fVar1);
    FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
              ((FNiagaraDistributionRangeFloat *)(this + 7),fVar1);
    FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
              ((FNiagaraDistributionRangeFloat *)(this + 8),__real_3f000000);
    *(undefined2 *)&this[9]._padding_ = 0x100;
    *(undefined1 *)((longlong)&this[9]._padding_ + 2) = 1;
    FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
              ((FNiagaraDistributionRangeFloat *)&this[9]._padding_,0.0);
    FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
              ((FNiagaraDistributionRangeFloat *)&this[10]._padding_,fVar1);
    FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
              ((FNiagaraDistributionRangeFloat *)&this[0xb]._padding_,0.0);
    FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
              ((FNiagaraDistributionRangeFloat *)&this[0xc]._padding_,0.0);
    FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
              ((FNiagaraDistributionRangeFloat *)&this[0xd]._padding_,fVar1);
    *(undefined4 *)&this[0xe]._padding_ = 0;
    FNiagaraDistributionRangeRotator::FNiagaraDistributionRangeRotator
              ((FNiagaraDistributionRangeRotator *)&this[0xe]._padding_);
    FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
              ((FNiagaraDistributionRangeVector3 *)&this[0xf]._padding_,
               &UE::Math::TVector<float>::OneVector);
  }
  return;
}

// InternalConstructor<UNiagaraStatelessModule_SolveVelocitiesAndForces> @ 149422090

void __cdecl
InternalConstructor<UNiagaraStatelessModule_SolveVelocitiesAndForces>(FObjectInitializer *param_1)

{
  UNiagaraStatelessModule *this;
  
  this = (UNiagaraStatelessModule *)param_1->Obj;
  if (this != (UNiagaraStatelessModule *)0x0) {
    UNiagaraStatelessModule::UNiagaraStatelessModule(this);
    this->_padding_ = (longlong)&___7UNiagaraStatelessModule_SolveVelocitiesAndForces__6B_;
  }
  return;
}

// InternalConstructor<UNiagaraStatelessModule_SpriteFacingAndAlignment> @ 1494220c0

void __cdecl
InternalConstructor<UNiagaraStatelessModule_SpriteFacingAndAlignment>(FObjectInitializer *param_1)

{
  UNiagaraStatelessModule *this;
  
  this = (UNiagaraStatelessModule *)param_1->Obj;
  if (this != (UNiagaraStatelessModule *)0x0) {
    UNiagaraStatelessModule::UNiagaraStatelessModule(this);
    *(undefined2 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UNiagaraStatelessModule_SpriteFacingAndAlignment__6B_;
    FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
              ((FNiagaraDistributionRangeVector3 *)&this[1]._padding_,
               &UE::Math::TVector<float>::XAxisVector);
    FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
              ((FNiagaraDistributionRangeVector3 *)&this[2]._padding_,
               &UE::Math::TVector<float>::YAxisVector);
    return;
  }
  return;
}

// InternalConstructor<UNiagaraStatelessModule_SpriteRotationRate> @ 149422120

void __cdecl
InternalConstructor<UNiagaraStatelessModule_SpriteRotationRate>(FObjectInitializer *param_1)

{
  UNiagaraStatelessModule *this;
  
  this = (UNiagaraStatelessModule *)param_1->Obj;
  if (this != (UNiagaraStatelessModule *)0x0) {
    UNiagaraStatelessModule::UNiagaraStatelessModule(this);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UNiagaraStatelessModule_SpriteRotationRate__6B_;
    FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
              ((FNiagaraDistributionRangeFloat *)&this[1]._padding_,0.0);
    FNiagaraDistributionCurveFloat::FNiagaraDistributionCurveFloat
              ((FNiagaraDistributionCurveFloat *)&this[2]._padding_,Accumulate);
    return;
  }
  return;
}

// InternalConstructor<UNiagaraStatelessModule_SubUVAnimation> @ 149422170

void __cdecl
InternalConstructor<UNiagaraStatelessModule_SubUVAnimation>(FObjectInitializer *param_1)

{
  UNiagaraStatelessModule *this;
  int iVar1;
  
  this = (UNiagaraStatelessModule *)param_1->Obj;
  if (this != (UNiagaraStatelessModule *)0x0) {
    UNiagaraStatelessModule::UNiagaraStatelessModule(this);
    *(undefined4 *)&this[1]._padding_ = 0x10;
    this->_padding_ = (longlong)&___7UNiagaraStatelessModule_SubUVAnimation__6B_;
    *(undefined1 *)&this[1]._padding_ = 3;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    iVar1 = FNiagaraTypeDefinitionHandle::Register
                      ((FNiagaraTypeDefinitionHandle *)((longlong)&this[1]._padding_ + 4),
                       &FNiagaraTypeDefinition::Vec4Def);
    *(int *)((longlong)&this[1]._padding_ + 4) = iVar1;
    FInstancedStruct::FInstancedStruct((FInstancedStruct *)&this[1]._padding_);
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined1 *)&this[1]._padding_ = 3;
    *(undefined2 *)&this[2]._padding_ = 0;
    *(undefined8 *)((longlong)&this[2]._padding_ + 4) = 0;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 2;
    *(undefined4 *)&this[2]._padding_ = 0x3f800000;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0x3dcccccd;
  }
  return;
}

// InternalConstructor<UNiagaraValidationRule> @ 149422210

void __cdecl InternalConstructor<UNiagaraValidationRule>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined1 *)(this + 1) = 0;
    *(undefined ***)this = &___7UNiagaraValidationRule__6B_;
  }
  return;
}

// InternalConstructor<UNiagaraVolumeRendererProperties> @ 149422250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl InternalConstructor<UNiagaraVolumeRendererProperties>(FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  UNiagaraMergeable *this;
  longlong *plVar2;
  int iVar3;
  
  this = (UNiagaraMergeable *)param_1->Obj;
  if (this == (UNiagaraMergeable *)0x0) {
    return;
  }
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
  puVar1 = &this[3].field_0x24;
  this[3].field_0x5 = this[3].field_0x5 & 0xfe;
  this[3].field_0x5 = this[3].field_0x5 | 2;
  *(undefined8 *)&this[2].field_0x24 = 0;
  this[3].field_0x4 = 0;
  *(undefined8 *)&this[3].field_0x8 = 0;
  *(undefined8 *)&this[3].field_0x10 = 0;
  *(undefined8 *)&this[3].field_0x18 = 0;
  *(undefined4 *)&this[3].field_0x20 = 0;
  *(undefined4 *)puVar1 = 0;
  *(undefined ***)this = &___7UNiagaraVolumeRendererProperties__6B_;
  *(undefined8 *)(this + 4) = 0;
  *(undefined8 *)&this[4].field_0x8 = 0;
  iVar3 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[4].field_0x10,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[4].field_0x10 = iVar3;
  this[4].field_0x14 = 1;
  *(undefined4 *)&this[4].field_0x18 = 0;
  *(undefined4 *)&this[4].field_0x1c = 0x3f800000;
  *(undefined4 *)&this[4].field_0x20 = 0x40000000;
  *(undefined4 *)&this[4].field_0x24 = 0x40000000;
  *(undefined4 *)(this + 5) = 0x3f000000;
  *(undefined8 *)&this[5].field_0x4 = 0;
  *(undefined8 *)&this[5].field_0xc = 0;
  iVar3 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[5].field_0x14,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[5].field_0x14 = iVar3;
  this[5].field_0x21 = this[5].field_0x21 & 0xfe;
  this[5].field_0x21 = this[5].field_0x21 | 2;
  *(undefined8 *)&this[5].field_0x18 = 0;
  this[5].field_0x20 = 0;
  *(undefined8 *)&this[5].field_0x24 = 0;
  *(undefined8 *)&this[6].field_0x4 = 0;
  iVar3 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[6].field_0xc,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[6].field_0xc = iVar3;
  this[6].field_0x19 = this[6].field_0x19 & 0xfe;
  this[6].field_0x19 = this[6].field_0x19 | 2;
  *(undefined8 *)&this[6].field_0x10 = 0;
  this[6].field_0x18 = 0;
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
  *(undefined8 *)(this + 8) = 0;
  this[8].field_0x8 = 0;
  this[8].field_0x9 = this[8].field_0x9 & 0xfe;
  this[8].field_0x9 = this[8].field_0x9 | 2;
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
  *(undefined8 *)(this + 10) = 0;
  *(undefined8 *)&this[10].field_0x8 = 0;
  *(undefined8 *)&this[10].field_0x10 = 0;
  *(undefined8 *)&this[10].field_0x18 = 0;
  *(undefined8 *)&this[10].field_0x20 = 0;
  *(undefined8 *)(this + 0xb) = 0;
  *(undefined8 *)&this[0xb].field_0x8 = 0;
  *(undefined8 *)&this[0xb].field_0x10 = 0;
  *(undefined8 *)&this[0xb].field_0x18 = 0;
  *(undefined8 *)&this[0xb].field_0x20 = 0;
  *(undefined1 *)(this + 0xc) = 1;
  *(undefined4 *)&this[0xc].field_0x4 = 0xffffffff;
  this[0xc].field_0x8 = 1;
  *(undefined4 *)&this[0xc].field_0xc = 0xffffffff;
  this[0xc].field_0x10 = 1;
  *(undefined8 *)&this[0xc].field_0x14 = 0xffffffffffffffff;
  *(undefined4 *)&this[0xc].field_0x1c = 0xffffffff;
  this[0xc].field_0x20 = 1;
  *(undefined4 *)&this[0xc].field_0x24 = 0xffffffff;
  *(undefined4 *)&this[3].field_0x20 = 6;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,6,*(int *)puVar1,(ForAnyElementType *)&this[3].field_0x18,6,(int *)puVar1);
  plVar2 = *(longlong **)&this[3].field_0x18;
  *plVar2 = (longlong)&this[5].field_0x4;
  plVar2[1] = (longlong)&this[5].field_0x24;
  plVar2[2] = (longlong)&this[6].field_0x1c;
  plVar2[3] = (longlong)&this[7].field_0x14;
  plVar2[4] = (longlong)&this[8].field_0xc;
  plVar2[5] = (longlong)&this[9].field_0x4;
  return;
}

// InternalVTableHelperCtorCaller<UNiagaraStatelessEmitter> @ 149422270

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNiagaraStatelessEmitter>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraEmitterBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraStatelessEmitter::GetPrivateStaticClass();
  this = (UNiagaraEmitterBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraEmitterBase *)0x0) {
    UNiagaraEmitterBase::UNiagaraEmitterBase(this,param_1);
    *(uint *)&this[1]._padding_ = (uint)this[1]._padding_ & 0xfffffffe;
    this->_padding_ = (longlong)&___7UNiagaraStatelessEmitter__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 3;
    this[1].UniqueEmitterName.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0xc059000000000000;
    this[1].UniqueEmitterName.Data.ArrayNum = 0;
    this[1].UniqueEmitterName.Data.ArrayMax = -0x3fa70000;
    this[2]._padding_ = -0x3fa7000000000000;
    this[2]._padding_ = 0x4059000000000000;
    this[2]._padding_ = 0x4059000000000000;
    this[2]._padding_ = 0x4059000000000000;
    *(undefined1 *)&this[2]._padding_ = 1;
    FNiagaraEmitterStateData::FNiagaraEmitterStateData
              ((FNiagaraEmitterStateData *)&this[2].UniqueEmitterName);
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    this[5].UniqueEmitterName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[5].UniqueEmitterName.Data.ArrayNum = 0;
    this[5].UniqueEmitterName.Data.ArrayMax = 0;
    this[6]._padding_ = 0;
    FNiagaraPlatformSet::FNiagaraPlatformSet((FNiagaraPlatformSet *)&this[6]._padding_);
    this[7]._padding_ = 0;
    this[7]._padding_ = 0;
    FNiagaraDataSetCompiledData::FNiagaraDataSetCompiledData
              ((FNiagaraDataSetCompiledData *)&this[7]._padding_);
    this[8]._padding_ = 0;
    this[8].UniqueEmitterName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[8].UniqueEmitterName.Data.ArrayNum = 0;
    this[8].UniqueEmitterName.Data.ArrayMax = 0;
    this[9]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraStatelessModule_AccelerationForce> @ 1494223f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraStatelessModule_AccelerationForce>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraStatelessModule *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraStatelessModule_AccelerationForce::GetPrivateStaticClass();
  this = (UNiagaraStatelessModule *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraStatelessModule *)0x0) {
    UNiagaraStatelessModule::UNiagaraStatelessModule(this,param_1);
    this->_padding_ = (longlong)&___7UNiagaraStatelessModule_AccelerationForce__6B_;
    FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
              ((FNiagaraDistributionRangeVector3 *)(this + 1),&UE::Math::TVector<float>::ZeroVector)
    ;
    *(undefined4 *)&this[2]._padding_ = 2;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraStatelessModule_AddVelocity> @ 1494224c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraStatelessModule_AddVelocity>(FVTableHelper *param_1)

{
  float fVar1;
  double dVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UNiagaraStatelessModule *this;
  TVector<float>_u_0 local_18;
  
  pUVar3 = GetTransientPackageAsObject();
  pUVar4 = UNiagaraStatelessModule_AddVelocity::GetPrivateStaticClass();
  this = (UNiagaraStatelessModule *)
         StaticAllocateObject
                   (pUVar4,pUVar3,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraStatelessModule *)0x0) {
    UNiagaraStatelessModule::UNiagaraStatelessModule(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UNiagaraStatelessModule_AddVelocity__6B_;
    local_18._0_8_ = 0;
    local_18._s_0.Z = 100.0;
    FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
              ((FNiagaraDistributionRangeVector3 *)&this[1]._padding_,
               (TVector<float> *)&local_18._s_0);
    FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
              ((FNiagaraDistributionRangeFloat *)&this[2]._padding_,__real_3f800000);
    FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
              ((FNiagaraDistributionRangeFloat *)&this[3]._padding_,__real_43fa0000);
    dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    fVar1 = __real_42c80000;
    this[4]._padding_ = (longlong)UE::Math::TRotator<double>::ZeroRotator.Pitch;
    this[4]._padding_ = (longlong)dVar2;
    *(double *)&this[4].field_0x28 = UE::Math::TRotator<double>::ZeroRotator.Roll;
    this[5]._padding_ = 0x42340000;
    FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
              ((FNiagaraDistributionRangeFloat *)&this[5]._padding_,fVar1);
    this[6]._padding_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    *(float *)&this[6]._padding_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined1 *)((longlong)&this[6]._padding_ + 4) = 0;
    *(undefined4 *)&this[6]._padding_ = 0;
    *(undefined4 *)((longlong)&this[6]._padding_ + 4) = 2;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraStatelessModule_CalculateAccurateVelocity> @ 149422630

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraStatelessModule_CalculateAccurateVelocity>
          (FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraStatelessModule *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraStatelessModule_CalculateAccurateVelocity::GetPrivateStaticClass();
  this = (UNiagaraStatelessModule *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraStatelessModule *)0x0) {
    UNiagaraStatelessModule::UNiagaraStatelessModule(this,param_1);
    this->_padding_ = (longlong)&___7UNiagaraStatelessModule_CalculateAccurateVelocity__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraStatelessModule_CameraOffset> @ 1494226e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraStatelessModule_CameraOffset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraStatelessModule *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraStatelessModule_CameraOffset::GetPrivateStaticClass();
  this = (UNiagaraStatelessModule *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraStatelessModule *)0x0) {
    UNiagaraStatelessModule::UNiagaraStatelessModule(this,param_1);
    this->_padding_ = (longlong)&___7UNiagaraStatelessModule_CameraOffset__6B_;
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)(this + 1),0.0);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraStatelessModule_CurlNoiseForce> @ 1494227a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraStatelessModule_CurlNoiseForce>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraStatelessModule *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraStatelessModule_CurlNoiseForce::GetPrivateStaticClass();
  this = (UNiagaraStatelessModule *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraStatelessModule *)0x0) {
    UNiagaraStatelessModule::UNiagaraStatelessModule(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0x41200000;
    this->_padding_ = (longlong)&___7UNiagaraStatelessModule_CurlNoiseForce__6B_;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x42480000;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraStatelessModule_DecalAttributes> @ 149422860

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraStatelessModule_DecalAttributes>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraStatelessModule *this;
  TVector<float>_u_0 local_18;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraStatelessModule_DecalAttributes::GetPrivateStaticClass();
  this = (UNiagaraStatelessModule *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraStatelessModule *)0x0) {
    UNiagaraStatelessModule::UNiagaraStatelessModule(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UNiagaraStatelessModule_DecalAttributes__6B_;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
    FNiagaraDistributionVector3::FNiagaraDistributionVector3
              ((FNiagaraDistributionVector3 *)&this[1]._padding_,
               &UE::Math::TVector<float>::ZeroVector);
    *(undefined4 *)&this[2]._padding_ = 2;
    local_18._s_0.X = 50.0;
    local_18._s_0.Y = 50.0;
    local_18._s_0.Z = 50.0;
    FNiagaraDistributionVector3::FNiagaraDistributionVector3
              ((FNiagaraDistributionVector3 *)&this[2]._padding_,(TVector<float> *)&local_18._s_0);
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)(this + 4),__real_3f800000);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraStatelessModule_Drag> @ 149422970

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraStatelessModule_Drag>(FVTableHelper *param_1)

{
  float fVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UNiagaraStatelessModule *this;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UNiagaraStatelessModule_Drag::GetPrivateStaticClass();
  this = (UNiagaraStatelessModule *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraStatelessModule *)0x0) {
    UNiagaraStatelessModule::UNiagaraStatelessModule(this,param_1);
    fVar1 = __real_3f800000;
    this->_padding_ = (longlong)&___7UNiagaraStatelessModule_Drag__6B_;
    FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
              ((FNiagaraDistributionRangeFloat *)(this + 1),fVar1);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraStatelessModule_DynamicMaterialParameters> @ 149422a30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraStatelessModule_DynamicMaterialParameters>
          (FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraStatelessModule *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraStatelessModule_DynamicMaterialParameters::GetPrivateStaticClass();
  this = (UNiagaraStatelessModule *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraStatelessModule *)0x0) {
    UNiagaraStatelessModule::UNiagaraStatelessModule(this,param_1);
    this->_padding_ = (longlong)&___7UNiagaraStatelessModule_DynamicMaterialParameters__6B_;
    *(uint *)&this[1]._padding_ = (uint)this[1]._padding_ | 0xf;
    *(uint *)&this[1]._padding_ = (uint)this[1]._padding_ & 0xfffffff1 | 1;
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)&this[1]._padding_,0.0);
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)&this[2]._padding_,0.0);
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)(this + 4),0.0);
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)&this[5]._padding_,0.0);
    *(uint *)&this[6]._padding_ = (uint)this[6]._padding_ | 0xf;
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)&this[6].field_0x28,0.0);
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)&this[8]._padding_,0.0);
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)&this[9]._padding_,0.0);
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)&this[10].field_0x28,0.0);
    *(uint *)&this[0xc]._padding_ = (uint)this[0xc]._padding_ | 0xf;
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)&this[0xc]._padding_,0.0);
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)&this[0xd]._padding_,0.0);
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)(this + 0xf),0.0);
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)&this[0x10]._padding_,0.0);
    *(uint *)&this[0x11]._padding_ = (uint)this[0x11]._padding_ | 0xf;
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)&this[0x11].field_0x28,0.0);
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)&this[0x13]._padding_,0.0);
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)&this[0x14]._padding_,0.0);
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)&this[0x15].field_0x28,0.0);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraStatelessModule_GravityForce> @ 149422a40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraStatelessModule_GravityForce>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraStatelessModule *this;
  TVector<float>_u_0 local_18;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraStatelessModule_GravityForce::GetPrivateStaticClass();
  this = (UNiagaraStatelessModule *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraStatelessModule *)0x0) {
    UNiagaraStatelessModule::UNiagaraStatelessModule(this,param_1);
    local_18._0_8_ = 0;
    this->_padding_ = (longlong)&___7UNiagaraStatelessModule_GravityForce__6B_;
    local_18._s_0.Z = -980.0;
    FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
              ((FNiagaraDistributionRangeVector3 *)(this + 1),(TVector<float> *)&local_18._s_0);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraStatelessModule_InitialMeshOrientation> @ 149422b10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraStatelessModule_InitialMeshOrientation>
          (FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraStatelessModule *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraStatelessModule_InitialMeshOrientation::GetPrivateStaticClass();
  this = (UNiagaraStatelessModule *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraStatelessModule *)0x0) {
    UNiagaraStatelessModule::UNiagaraStatelessModule(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UNiagaraStatelessModule_InitialMeshOrientation__6B_;
    FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
              ((FNiagaraDistributionRangeVector3 *)&this[1]._padding_,
               &UE::Math::TVector<float>::XAxisVector);
    FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
              ((FNiagaraDistributionRangeVector3 *)&this[2]._padding_,
               &UE::Math::TVector<float>::XAxisVector);
    FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
              ((FNiagaraDistributionRangeVector3 *)&this[3].field_0x28,
               &UE::Math::TVector<float>::ZeroVector);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraStatelessModule_InitializeParticle> @ 149422bf0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraStatelessModule_InitializeParticle>(FVTableHelper *param_1)

{
  byte *pbVar1;
  float fVar2;
  int iVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  UNiagaraStatelessModule *this;
  UNiagaraStatelessModule *pUVar6;
  FLinearColor_u_0 local_18;
  
  pUVar6 = (UNiagaraStatelessModule *)0x0;
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = UNiagaraStatelessModule_InitializeParticle::GetPrivateStaticClass();
  this = (UNiagaraStatelessModule *)
         StaticAllocateObject
                   (pUVar5,pUVar4,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraStatelessModule *)0x0) {
    UNiagaraStatelessModule::UNiagaraStatelessModule(this,param_1);
    fVar2 = __real_3f800000;
    this->_padding_ = (longlong)&___7UNiagaraStatelessModule_InitializeParticle__6B_;
    FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
              ((FNiagaraDistributionRangeFloat *)(this + 1),fVar2);
    local_18 = FLinearColor::White.field0_0x0;
    FNiagaraDistributionColor::FNiagaraDistributionColor
              ((FNiagaraDistributionColor *)(this + 2),(FLinearColor *)&local_18._s_0);
    FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
              ((FNiagaraDistributionRangeFloat *)&this[3]._padding_,__real_3f800000);
    pbVar1 = (byte *)((longlong)&this[4]._padding_ + 1);
    *pbVar1 = *pbVar1 & 0xfc;
    this[4]._padding_ = (longlong)&___7FNiagaraDistributionBase__6B_;
    *(undefined1 *)&this[4]._padding_ = 3;
    *(undefined1 *)((longlong)&this[4]._padding_ + 2) = 0;
    *(undefined8 *)((longlong)&this[4]._padding_ + 4) = 0;
    iVar3 = FNiagaraTypeDefinitionHandle::Register
                      ((FNiagaraTypeDefinitionHandle *)((longlong)&this[4]._padding_ + 4),
                       &FNiagaraTypeDefinition::Vec4Def);
    *(int *)((longlong)&this[4]._padding_ + 4) = iVar3;
    FInstancedStruct::FInstancedStruct((FInstancedStruct *)&this[4].field_0x28);
    *(undefined1 *)&this[4]._padding_ = 4;
    this[4]._padding_ = (longlong)&___7FNiagaraDistributionRangeVector2__6B_;
    this[5]._padding_ = 0x4120000041200000;
    this[5]._padding_ = 0x4120000041200000;
    FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
              ((FNiagaraDistributionRangeFloat *)&this[5]._padding_,0.0);
    local_18._s_0.B = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
    local_18._0_8_ = UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
    FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
              ((FNiagaraDistributionRangeVector3 *)&this[6]._padding_,
               (TVector<float> *)&local_18._s_0);
    fVar2 = __real_41200000;
    this[7].field_0x28 = 0;
    FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
              ((FNiagaraDistributionRangeFloat *)(this + 8),fVar2);
    FNiagaraDistributionVector3::FNiagaraDistributionVector3
              ((FNiagaraDistributionVector3 *)(this + 9));
    this[9]._padding_ = (longlong)&___7FNiagaraDistributionPosition__6B_;
    FNiagaraDistributionVector3::InitConstant
              ((FNiagaraDistributionVector3 *)(this + 9),&UE::Math::TVector<float>::ZeroVector);
    pUVar6 = this;
  }
  return (UObject *)pUVar6;
}

// InternalVTableHelperCtorCaller<UNiagaraStatelessModule_LightAttributes> @ 149422df0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraStatelessModule_LightAttributes>(FVTableHelper *param_1)

{
  float fVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UNiagaraStatelessModule *this;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UNiagaraStatelessModule_LightAttributes::GetPrivateStaticClass();
  this = (UNiagaraStatelessModule *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraStatelessModule *)0x0) {
    UNiagaraStatelessModule::UNiagaraStatelessModule(this,param_1);
    fVar1 = __real_42c80000;
    *(uint *)&this[1]._padding_ = (uint)this[1]._padding_ & 0xffffffe0;
    this->_padding_ = (longlong)&___7UNiagaraStatelessModule_LightAttributes__6B_;
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)&this[1]._padding_,fVar1);
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)&this[2]._padding_,__real_3f800000);
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)&this[3].field_0x28,__real_3f800000);
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)&this[5]._padding_,__real_3f800000);
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)&this[6]._padding_,0.0);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraStatelessModule_MeshIndex> @ 149422f00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraStatelessModule_MeshIndex>(FVTableHelper *param_1)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UNiagaraStatelessModule *this;
  UNiagaraStatelessModule *pUVar4;
  
  pUVar4 = (UNiagaraStatelessModule *)0x0;
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UNiagaraStatelessModule_MeshIndex::GetPrivateStaticClass();
  this = (UNiagaraStatelessModule *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraStatelessModule *)0x0) {
    UNiagaraStatelessModule::UNiagaraStatelessModule(this,param_1);
    this->_padding_ = (longlong)&___7UNiagaraStatelessModule_MeshIndex__6B_;
    *(undefined1 *)&this[1]._padding_ = 3;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    iVar1 = FNiagaraTypeDefinitionHandle::Register
                      ((FNiagaraTypeDefinitionHandle *)((longlong)&this[1]._padding_ + 4),
                       &FNiagaraTypeDefinition::Vec4Def);
    *(int *)((longlong)&this[1]._padding_ + 4) = iVar1;
    FInstancedStruct::FInstancedStruct((FInstancedStruct *)&this[1]._padding_);
    *(undefined1 *)&this[1]._padding_ = 3;
    this[1]._padding_ = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    this[2]._padding_ = 0;
    pUVar4 = this;
  }
  return (UObject *)pUVar4;
}

// InternalVTableHelperCtorCaller<UNiagaraStatelessModule_MeshRotationRate> @ 149422fe0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraStatelessModule_MeshRotationRate>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraStatelessModule *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraStatelessModule_MeshRotationRate::GetPrivateStaticClass();
  this = (UNiagaraStatelessModule *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraStatelessModule *)0x0) {
    UNiagaraStatelessModule::UNiagaraStatelessModule(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UNiagaraStatelessModule_MeshRotationRate__6B_;
    FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
              ((FNiagaraDistributionRangeVector3 *)&this[1]._padding_,
               &UE::Math::TVector<float>::ZeroVector);
    FNiagaraDistributionCurveVector3::FNiagaraDistributionCurveVector3
              ((FNiagaraDistributionCurveVector3 *)&this[2]._padding_,Accumulate);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraStatelessModule_RotateAroundPoint> @ 1494230b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraStatelessModule_RotateAroundPoint>(FVTableHelper *param_1)

{
  float fVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UNiagaraStatelessModule *this;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UNiagaraStatelessModule_RotateAroundPoint::GetPrivateStaticClass();
  this = (UNiagaraStatelessModule *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraStatelessModule *)0x0) {
    UNiagaraStatelessModule::UNiagaraStatelessModule(this,param_1);
    fVar1 = __real_43b40000;
    this->_padding_ = (longlong)&___7UNiagaraStatelessModule_RotateAroundPoint__6B_;
    FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
              ((FNiagaraDistributionRangeFloat *)(this + 1),fVar1);
    FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
              ((FNiagaraDistributionRangeFloat *)(this + 2),__real_42c80000);
    FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
              ((FNiagaraDistributionRangeFloat *)(this + 3),0.0);
    *(undefined4 *)&this[4]._padding_ = 0;
    FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
              ((FNiagaraDistributionRangeVector3 *)&this[4]._padding_,
               &UE::Math::TVector<float>::ZeroVector);
    *(undefined4 *)&this[5]._padding_ = 0;
    FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
              ((FNiagaraDistributionRangeVector3 *)&this[5]._padding_,
               &UE::Math::TVector<float>::ZeroVector);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraStatelessModule_ScaleColor> @ 1494231d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraStatelessModule_ScaleColor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraStatelessModule *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraStatelessModule_ScaleColor::GetPrivateStaticClass();
  this = (UNiagaraStatelessModule *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraStatelessModule *)0x0) {
    UNiagaraStatelessModule::UNiagaraStatelessModule(this,param_1);
    this->_padding_ = (longlong)&___7UNiagaraStatelessModule_ScaleColor__6B_;
    FNiagaraDistributionColor::FNiagaraDistributionColor
              ((FNiagaraDistributionColor *)(this + 1),&FLinearColor::White);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraStatelessModule_ScaleMeshSize> @ 149423290

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraStatelessModule_ScaleMeshSize>(FVTableHelper *param_1)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UNiagaraStatelessModule *this;
  UNiagaraStatelessModule *pUVar4;
  
  pUVar4 = (UNiagaraStatelessModule *)0x0;
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UNiagaraStatelessModule_ScaleMeshSize::GetPrivateStaticClass();
  this = (UNiagaraStatelessModule *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraStatelessModule *)0x0) {
    UNiagaraStatelessModule::UNiagaraStatelessModule(this,param_1);
    this->_padding_ = (longlong)&___7UNiagaraStatelessModule_ScaleMeshSize__6B_;
    FNiagaraDistributionVector3::FNiagaraDistributionVector3
              ((FNiagaraDistributionVector3 *)(this + 1),&UE::Math::TVector<float>::OneVector);
    this[2]._padding_ = 0;
    iVar1 = FNiagaraTypeDefinitionHandle::Register
                      ((FNiagaraTypeDefinitionHandle *)&this[2]._padding_,
                       &FNiagaraTypeDefinition::Vec4Def);
    *(int *)&this[2]._padding_ = iVar1;
    this[2]._padding_ = 0;
    *(undefined8 *)&this[2].field_0x28 = 0;
    pUVar4 = this;
  }
  return (UObject *)pUVar4;
}

// InternalVTableHelperCtorCaller<UNiagaraStatelessModule_ScaleMeshSizeBySpeed> @ 149423370

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraStatelessModule_ScaleMeshSizeBySpeed>(FVTableHelper *param_1)

{
  float fVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UNiagaraStatelessModule *this;
  undefined8 local_res10;
  undefined1 local_18 [16];
  
  local_res10 = 0;
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UNiagaraStatelessModule_ScaleMeshSizeBySpeed::GetPrivateStaticClass();
  this = (UNiagaraStatelessModule *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraStatelessModule *)0x0) {
    UNiagaraStatelessModule::UNiagaraStatelessModule(this,param_1);
    fVar1 = __real_447a0000;
    this->_padding_ = (longlong)&___7UNiagaraStatelessModule_ScaleMeshSizeBySpeed__6B_;
    FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
              ((FNiagaraDistributionRangeFloat *)(this + 1),fVar1);
    local_18._0_8_ = 0x3f8000003f800000;
    local_18._8_4_ = 1.0;
    FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
              ((FNiagaraDistributionRangeVector3 *)(this + 2),(TVector<float> *)local_18);
    local_18._0_8_ = 0x4000000040000000;
    local_18._8_4_ = 0x40000000;
    FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
              ((FNiagaraDistributionRangeVector3 *)&this[3]._padding_,(TVector<float> *)local_18);
    local_18._0_8_ = &local_res10;
    *(undefined1 *)&this[4]._padding_ = 0;
    local_18._8_8_ = &stack0x00000018;
    local_res10 = 0x3f80000000000000;
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)&this[4].field_0x28,(initializer_list<float> *)local_18)
    ;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraStatelessModule_ScaleRibbonWidth> @ 1494234d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraStatelessModule_ScaleRibbonWidth>(FVTableHelper *param_1)

{
  float fVar1;
  int iVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UNiagaraStatelessModule *this;
  UNiagaraStatelessModule *pUVar5;
  
  pUVar5 = (UNiagaraStatelessModule *)0x0;
  pUVar3 = GetTransientPackageAsObject();
  pUVar4 = UNiagaraStatelessModule_ScaleRibbonWidth::GetPrivateStaticClass();
  this = (UNiagaraStatelessModule *)
         StaticAllocateObject
                   (pUVar4,pUVar3,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraStatelessModule *)0x0) {
    UNiagaraStatelessModule::UNiagaraStatelessModule(this,param_1);
    fVar1 = __real_3f800000;
    this->_padding_ = (longlong)&___7UNiagaraStatelessModule_ScaleRibbonWidth__6B_;
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)(this + 1),fVar1);
    this[2]._padding_ = 0;
    iVar2 = FNiagaraTypeDefinitionHandle::Register
                      ((FNiagaraTypeDefinitionHandle *)&this[2]._padding_,
                       &FNiagaraTypeDefinition::Vec4Def);
    *(int *)&this[2]._padding_ = iVar2;
    this[2]._padding_ = 0;
    *(undefined8 *)&this[2].field_0x28 = 0;
    pUVar5 = this;
  }
  return (UObject *)pUVar5;
}

// InternalVTableHelperCtorCaller<UNiagaraStatelessModule_ScaleSpriteSize> @ 1494235b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraStatelessModule_ScaleSpriteSize>(FVTableHelper *param_1)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UNiagaraStatelessModule *this;
  UNiagaraStatelessModule *pUVar4;
  TVector2<float>_u_0 local_res10;
  
  pUVar4 = (UNiagaraStatelessModule *)0x0;
  local_res10 = (TVector2<float>_u_0)0x0;
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UNiagaraStatelessModule_ScaleSpriteSize::GetPrivateStaticClass();
  this = (UNiagaraStatelessModule *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraStatelessModule *)0x0) {
    UNiagaraStatelessModule::UNiagaraStatelessModule(this,param_1);
    this->_padding_ = (longlong)&___7UNiagaraStatelessModule_ScaleSpriteSize__6B_;
    local_res10 = UE::Math::TVector2<float>::UnitVector.field0_0x0;
    FNiagaraDistributionVector2::FNiagaraDistributionVector2
              ((FNiagaraDistributionVector2 *)(this + 1),(TVector2<float> *)&local_res10._s_0);
    this[2]._padding_ = 0;
    iVar1 = FNiagaraTypeDefinitionHandle::Register
                      ((FNiagaraTypeDefinitionHandle *)&this[2]._padding_,
                       &FNiagaraTypeDefinition::Vec4Def);
    *(int *)&this[2]._padding_ = iVar1;
    this[2]._padding_ = 0;
    *(undefined8 *)&this[2].field_0x28 = 0;
    pUVar4 = this;
  }
  return (UObject *)pUVar4;
}

// InternalVTableHelperCtorCaller<UNiagaraStatelessModule_ScaleSpriteSizeBySpeed> @ 149423690

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraStatelessModule_ScaleSpriteSizeBySpeed>
          (FVTableHelper *param_1)

{
  float fVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UNiagaraStatelessModule *this;
  TVector2<float>_u_0 local_res10;
  initializer_list<float> local_18;
  
  local_res10 = (TVector2<float>_u_0)0x0;
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UNiagaraStatelessModule_ScaleSpriteSizeBySpeed::GetPrivateStaticClass();
  this = (UNiagaraStatelessModule *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraStatelessModule *)0x0) {
    UNiagaraStatelessModule::UNiagaraStatelessModule(this,param_1);
    fVar1 = __real_447a0000;
    this->_padding_ = (longlong)&___7UNiagaraStatelessModule_ScaleSpriteSizeBySpeed__6B_;
    FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
              ((FNiagaraDistributionRangeFloat *)(this + 1),fVar1);
    local_res10 = (TVector2<float>_u_0)0x3f8000003f800000;
    FNiagaraDistributionRangeVector2::FNiagaraDistributionRangeVector2
              ((FNiagaraDistributionRangeVector2 *)(this + 2),(TVector2<float> *)&local_res10._s_0);
    local_res10 = (TVector2<float>_u_0)0x4000000040000000;
    FNiagaraDistributionRangeVector2::FNiagaraDistributionRangeVector2
              ((FNiagaraDistributionRangeVector2 *)&this[3]._padding_,
               (TVector2<float> *)&local_res10._s_0);
    local_18._First = (float *)&local_res10;
    *(undefined1 *)&this[4]._padding_ = 0;
    local_18._Last = (float *)&stack0x00000018;
    local_res10 = (TVector2<float>_u_0)0x3f80000000000000;
    FNiagaraDistributionFloat::FNiagaraDistributionFloat
              ((FNiagaraDistributionFloat *)&this[4]._padding_,&local_18);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraStatelessModule_ShapeLocation> @ 1494237f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraStatelessModule_ShapeLocation>(FVTableHelper *param_1)

{
  float fVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UNiagaraStatelessModule *this;
  UNiagaraStatelessModule *pUVar4;
  TVector2<float>_u_0 local_res10;
  TVector<float>_u_0 local_28 [2];
  
  pUVar4 = (UNiagaraStatelessModule *)0x0;
  local_res10 = (TVector2<float>_u_0)0x0;
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UNiagaraStatelessModule_ShapeLocation::GetPrivateStaticClass();
  this = (UNiagaraStatelessModule *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraStatelessModule *)0x0) {
    UNiagaraStatelessModule::UNiagaraStatelessModule(this,param_1);
    fVar1 = __real_42c80000;
    this->_padding_ = (longlong)&___7UNiagaraStatelessModule_ShapeLocation__6B_;
    *(undefined1 *)&this[1]._padding_ = 4;
    local_28[0]._s_0.X = 100.0;
    local_28[0]._s_0.Y = 100.0;
    local_28[0]._s_0.Z = 100.0;
    FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
              ((FNiagaraDistributionRangeVector3 *)&this[1]._padding_,
               (TVector<float> *)&local_28[0]._s_0);
    *(undefined2 *)&this[2]._padding_ = 0x100;
    FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
              ((FNiagaraDistributionRangeFloat *)&this[2]._padding_,0.0);
    local_res10 = (TVector2<float>_u_0)0x42c8000042c80000;
    FNiagaraDistributionRangeVector2::FNiagaraDistributionRangeVector2
              ((FNiagaraDistributionRangeVector2 *)&this[3]._padding_,
               (TVector2<float> *)&local_res10._s_0);
    *(undefined2 *)&this[4].field_0x28 = 0x100;
    FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
              ((FNiagaraDistributionRangeFloat *)(this + 5),0.0);
    FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
              ((FNiagaraDistributionRangeFloat *)(this + 6),fVar1);
    FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
              ((FNiagaraDistributionRangeFloat *)(this + 7),fVar1);
    FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
              ((FNiagaraDistributionRangeFloat *)(this + 8),__real_3f000000);
    *(undefined2 *)&this[9]._padding_ = 0x100;
    *(undefined1 *)((longlong)&this[9]._padding_ + 2) = 1;
    FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
              ((FNiagaraDistributionRangeFloat *)&this[9]._padding_,0.0);
    FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
              ((FNiagaraDistributionRangeFloat *)&this[10]._padding_,fVar1);
    FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
              ((FNiagaraDistributionRangeFloat *)&this[0xb]._padding_,0.0);
    FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
              ((FNiagaraDistributionRangeFloat *)&this[0xc]._padding_,0.0);
    FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
              ((FNiagaraDistributionRangeFloat *)&this[0xd]._padding_,fVar1);
    *(undefined4 *)&this[0xe]._padding_ = 0;
    FNiagaraDistributionRangeRotator::FNiagaraDistributionRangeRotator
              ((FNiagaraDistributionRangeRotator *)&this[0xe]._padding_);
    FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
              ((FNiagaraDistributionRangeVector3 *)&this[0xf]._padding_,
               &UE::Math::TVector<float>::OneVector);
    pUVar4 = this;
  }
  return (UObject *)pUVar4;
}

// InternalVTableHelperCtorCaller<UNiagaraStatelessModule_SolveVelocitiesAndForces> @ 1494239e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraStatelessModule_SolveVelocitiesAndForces>
          (FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraStatelessModule *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraStatelessModule_SolveVelocitiesAndForces::GetPrivateStaticClass();
  this = (UNiagaraStatelessModule *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraStatelessModule *)0x0) {
    UNiagaraStatelessModule::UNiagaraStatelessModule(this,param_1);
    this->_padding_ = (longlong)&___7UNiagaraStatelessModule_SolveVelocitiesAndForces__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraStatelessModule_SpriteFacingAndAlignment> @ 149423a90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraStatelessModule_SpriteFacingAndAlignment>
          (FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraStatelessModule *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraStatelessModule_SpriteFacingAndAlignment::GetPrivateStaticClass();
  this = (UNiagaraStatelessModule *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraStatelessModule *)0x0) {
    UNiagaraStatelessModule::UNiagaraStatelessModule(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UNiagaraStatelessModule_SpriteFacingAndAlignment__6B_;
    FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
              ((FNiagaraDistributionRangeVector3 *)&this[1]._padding_,
               &UE::Math::TVector<float>::XAxisVector);
    FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
              ((FNiagaraDistributionRangeVector3 *)&this[2]._padding_,
               &UE::Math::TVector<float>::YAxisVector);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraStatelessModule_SpriteRotationRate> @ 149423b60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraStatelessModule_SpriteRotationRate>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraStatelessModule *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraStatelessModule_SpriteRotationRate::GetPrivateStaticClass();
  this = (UNiagaraStatelessModule *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraStatelessModule *)0x0) {
    UNiagaraStatelessModule::UNiagaraStatelessModule(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UNiagaraStatelessModule_SpriteRotationRate__6B_;
    FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
              ((FNiagaraDistributionRangeFloat *)&this[1]._padding_,0.0);
    FNiagaraDistributionCurveFloat::FNiagaraDistributionCurveFloat
              ((FNiagaraDistributionCurveFloat *)&this[2]._padding_,Accumulate);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraStatelessModule_SubUVAnimation> @ 149423c30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraStatelessModule_SubUVAnimation>(FVTableHelper *param_1)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UNiagaraStatelessModule *this;
  UNiagaraStatelessModule *pUVar4;
  
  pUVar4 = (UNiagaraStatelessModule *)0x0;
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UNiagaraStatelessModule_SubUVAnimation::GetPrivateStaticClass();
  this = (UNiagaraStatelessModule *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraStatelessModule *)0x0) {
    UNiagaraStatelessModule::UNiagaraStatelessModule(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0x10;
    this->_padding_ = (longlong)&___7UNiagaraStatelessModule_SubUVAnimation__6B_;
    *(undefined1 *)&this[1]._padding_ = 3;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    iVar1 = FNiagaraTypeDefinitionHandle::Register
                      ((FNiagaraTypeDefinitionHandle *)((longlong)&this[1]._padding_ + 4),
                       &FNiagaraTypeDefinition::Vec4Def);
    *(int *)((longlong)&this[1]._padding_ + 4) = iVar1;
    FInstancedStruct::FInstancedStruct((FInstancedStruct *)&this[1]._padding_);
    *(undefined1 *)&this[1]._padding_ = 3;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined2 *)&this[2]._padding_ = 0;
    *(undefined8 *)((longlong)&this[2]._padding_ + 4) = 0;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 2;
    *(undefined4 *)&this[2]._padding_ = 0x3f800000;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0x3dcccccd;
    pUVar4 = this;
  }
  return (UObject *)pUVar4;
}

// InternalVTableHelperCtorCaller<UNiagaraValidationRule> @ 149423d30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNiagaraValidationRule>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraValidationRule::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined1 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UNiagaraValidationRule__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraVolumeRendererProperties> @ 149423de0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraVolumeRendererProperties>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraVolumeRendererProperties *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraVolumeRendererProperties::GetPrivateStaticClass();
  pUVar3 = (UNiagaraVolumeRendererProperties *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UNiagaraVolumeRendererProperties *)0x0) {
    pUVar3 = UNiagaraVolumeRendererProperties::UNiagaraVolumeRendererProperties(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// MakeShared<FNiagaraDataSetCompiledData,1,FNiagaraDataSetCompiledData_&> @ 149423e80

TSharedRef<FNiagaraDataSetCompiledData,1> * __cdecl
MakeShared<FNiagaraDataSetCompiledData,1,FNiagaraDataSetCompiledData_&>
          (TSharedRef<FNiagaraDataSetCompiledData,1> *__return_storage_ptr__,
          FNiagaraDataSetCompiledData *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  FScriptContainerElement *_Src;
  FNiagaraVariableLayoutInfo *pFVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedRef<FNiagaraDataSetCompiledData,1> *pTVar7;
  
  pTVar6 = operator_new(0x58);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FNiagaraDataSetCompiledData *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFNiagaraDataSetCompiledData___00_SharedPointerInternals__6B_
    ;
    pTVar1 = pTVar6 + 1;
    pTVar1->_padding_ = 0;
    aVar2 = (atomic<int>)(param_1->Variables).ArrayNum;
    _Src = (param_1->Variables).AllocatorInstance.Data;
    pTVar6[1].SharedReferenceCount = aVar2;
    if (aVar2 == (atomic<int>)0x0) {
      pTVar6[1].WeakReferenceCount = (atomic<int>)0x0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,(int)aVar2,0,(ForAnyElementType *)pTVar1,(int)aVar2,
                 (int *)&pTVar6[1].WeakReferenceCount);
      memcpy((FScriptContainerElement *)pTVar1->_padding_,_Src,(longlong)(int)aVar2 * 0xc);
    }
    pTVar1 = pTVar6 + 2;
    pTVar1->_padding_ = 0;
    aVar2 = (atomic<int>)(param_1->VariableLayouts).ArrayNum;
    pFVar3 = (FNiagaraVariableLayoutInfo *)(param_1->VariableLayouts).AllocatorInstance.Data;
    pTVar6[2].SharedReferenceCount = aVar2;
    if (aVar2 == (atomic<int>)0x0) {
      pTVar6[2].WeakReferenceCount = (atomic<int>)0x0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,(int)aVar2,0,(ForAnyElementType *)pTVar1,(int)aVar2,
                 (int *)&pTVar6[2].WeakReferenceCount);
      ConstructItems<FNiagaraVariableLayoutInfo,FNiagaraVariableLayoutInfo,int>
                ((FScriptContainerElement *)pTVar1->_padding_,pFVar3,(int)aVar2);
    }
    aVar2 = pTVar6[4].SharedReferenceCount;
    pTVar6[3]._padding_ = (longlong)(param_1->ID).Name;
    pTVar6[3].SharedReferenceCount = *(atomic<int> *)&(param_1->ID).Type;
    pTVar6[3].WeakReferenceCount = (atomic<int>)param_1->TotalFloatComponents;
    *(uint *)&pTVar6[4]._padding_ = param_1->TotalInt32Components;
    *(uint *)((longlong)&pTVar6[4]._padding_ + 4) = param_1->TotalHalfComponents;
    pTVar6[4].SharedReferenceCount =
         (atomic<int>)
         ((uint)pTVar6[4].SharedReferenceCount ^ ((uint)aVar2 ^ param_1->bRequiresPersistentIDs) & 1
         );
    *(ENiagaraSimTarget *)&pTVar6[4].WeakReferenceCount = param_1->SimTarget;
    *(uint *)&pTVar6[5]._padding_ = param_1->CachedLayoutHash;
    __return_storage_ptr__->Object = (FNiagaraDataSetCompiledData *)(pTVar6 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar6;
    if ((FNiagaraDataSetCompiledData *)(pTVar6 + 1) == (FNiagaraDataSetCompiledData *)0x0) {
      bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSharedRef<FNiagaraDataSetCompiledData,1> *)(*pcVar4)();
        return pTVar7;
      }
    }
  }
  return __return_storage_ptr__;
}

// NewObject<UNiagaraComponentPool> @ 149424050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UNiagaraComponentPool * __cdecl NewObject<UNiagaraComponentPool>(UObject *param_1)

{
  UClass *pUVar1;
  UNiagaraComponentPool *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UNiagaraComponentPool_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UNiagaraComponentPool *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UNiagaraCullProxyComponent> @ 1494240f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UNiagaraCullProxyComponent * __cdecl NewObject<UNiagaraCullProxyComponent>(UObject *param_1)

{
  UClass *pUVar1;
  UNiagaraCullProxyComponent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UNiagaraCullProxyComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UNiagaraCullProxyComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// ResolveRotationScaleBias<FNiagaraStatelessSetShaderParameterContext> @ 149424820

void __cdecl
NSMInitialMeshOrientationPrivate::
ResolveRotationScaleBias<FNiagaraStatelessSetShaderParameterContext>
          (FNiagaraStatelessSetShaderParameterContext *param_1,FModuleBuiltData *param_2,
          TVector<float> *param_3,TVector<float> *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  TVector<float>_u_0 local_68;
  TVector<float>_u_0 local_58;
  TRotator<float> local_48;
  TVector<float> local_38;
  TQuat<float> local_28 [2];
  
  *(undefined8 *)&param_3->field0_0x0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (param_3->field0_0x0)._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&param_4->field0_0x0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (param_4->field0_0x0)._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  FNiagaraStatelessSetShaderParameterContext::ConvertRangeToScaleBias<UE::Math::TVector<float>_>
            (param_1,&param_2->RotationRange,param_3,param_4);
  if (param_2->Mode == OrientToAxis) {
    local_58._0_8_ = UE::Math::TVector<float>::XAxisVector.field0_0x0._0_8_;
    local_68._0_8_ = UE::Math::TVector<float>::XAxisVector.field0_0x0._0_8_;
    local_58._s_0.Z = UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.Z;
    local_68._s_0.Z = UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.Z;
    FNiagaraStatelessSetShaderParameterContext::ConvertRangeToScaleBias<UE::Math::TVector<float>_>
              (param_1,&param_2->MeshAxisToOrient,&local_38,(TVector<float> *)&local_58._s_0);
    FNiagaraStatelessSetShaderParameterContext::ConvertRangeToScaleBias<UE::Math::TVector<float>_>
              (param_1,&param_2->OrientationVector,&local_38,(TVector<float> *)&local_68._s_0);
    fVar4 = local_58._s_0.X * local_58._s_0.X + local_58._s_0.Y * local_58._s_0.Y +
            local_58._s_0.Z * local_58._s_0.Z;
    fVar3 = (float)((ulonglong)UE::Math::TVector<float>::XAxisVector.field0_0x0._0_8_ >> 0x20);
    uVar5 = local_58._s_0.X;
    uVar6 = local_58._s_0.Y;
    uVar2 = local_58._s_0.Z;
    if ((fVar4 != __real_3f800000) &&
       (uVar5 = (float)UE::Math::TVector<float>::XAxisVector.field0_0x0._0_8_, uVar6 = fVar3,
       uVar2 = UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.Z, __real_38d1b717 <= fVar4)) {
      fVar4 = __real_3f800000 / SQRT(fVar4);
      uVar5 = fVar4 * local_58._s_0.X;
      uVar6 = fVar4 * local_58._s_0.Y;
      uVar2 = fVar4 * local_58._s_0.Z;
    }
    local_58._0_8_ = CONCAT44(uVar6,uVar5);
    fVar4 = local_68._s_0.Y * local_68._s_0.Y + local_68._s_0.X * local_68._s_0.X +
            local_68._s_0.Z * local_68._s_0.Z;
    uVar5 = local_68._s_0.X;
    uVar6 = local_68._s_0.Y;
    uVar1 = local_68._s_0.Z;
    if ((fVar4 != __real_3f800000) &&
       (uVar5 = (float)UE::Math::TVector<float>::XAxisVector.field0_0x0._0_8_, uVar6 = fVar3,
       uVar1 = UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.Z, __real_38d1b717 <= fVar4)) {
      fVar4 = __real_3f800000 / SQRT(fVar4);
      uVar5 = fVar4 * local_68._s_0.X;
      uVar6 = fVar4 * local_68._s_0.Y;
      uVar1 = fVar4 * local_68._s_0.Z;
    }
    local_68._0_8_ = CONCAT44(uVar6,uVar5);
    local_68._s_0.Z = (float)uVar1;
    local_58._s_0.Z = (float)uVar2;
    UE::Math::TQuat<float>::FindBetweenVectors
              (local_28,(TVector<float> *)&local_58._s_0,(TVector<float> *)&local_68._s_0);
    UE::Math::TQuat<float>::Rotator(local_28,&local_48);
    (param_4->field0_0x0)._s_0.X = local_48.Roll + (param_4->field0_0x0)._s_0.X;
    (param_4->field0_0x0)._s_0.Y = local_48.Pitch + (param_4->field0_0x0)._s_0.Y;
    (param_4->field0_0x0)._s_0.Z = local_48.Yaw + (param_4->field0_0x0)._s_0.Z;
  }
  fVar4 = __real_3b360b61;
  fVar3 = (param_3->field0_0x0)._s_0.Z * __real_3b360b61;
  (param_3->field0_0x0)._s_0.X = (param_3->field0_0x0)._s_0.X * __real_3b360b61;
  (param_3->field0_0x0)._s_0.Z = fVar3;
  (param_3->field0_0x0)._s_0.Y = (param_3->field0_0x0)._s_0.Y * fVar4;
  (param_4->field0_0x0)._s_0.X = (param_4->field0_0x0)._s_0.X * fVar4;
  (param_4->field0_0x0)._s_0.Y = (param_4->field0_0x0)._s_0.Y * fVar4;
  (param_4->field0_0x0)._s_0.Z = (param_4->field0_0x0)._s_0.Z * fVar4;
  return;
}

// ResolveRotationScaleBias<NiagaraStateless::FParticleSimulationContext> @ 149424ac0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __cdecl
NSMInitialMeshOrientationPrivate::
ResolveRotationScaleBias<NiagaraStateless::FParticleSimulationContext>
          (FParticleSimulationContext *param_1,FModuleBuiltData *param_2,TVector<float> *param_3,
          TVector<float> *param_4)

{
  int iVar1;
  undefined4 uVar2;
  uchar *puVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  TVector<float>_u_0 local_98;
  undefined8 local_88;
  TRotator<float> local_78;
  TVector<float>_u_0 local_68;
  TQuat<float> local_58 [5];
  
  *(undefined8 *)&param_3->field0_0x0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (param_3->field0_0x0)._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&param_4->field0_0x0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (param_4->field0_0x0)._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  NiagaraStateless::FParticleSimulationContext::ConvertRangeToScaleBias
            (param_1,&param_2->RotationRange,param_3,param_4);
  if (param_2->Mode == OrientToAxis) {
    iVar1 = (param_2->MeshAxisToOrient).ParameterOffset;
    if (iVar1 == -1) {
      local_98._0_8_ = *(undefined8 *)&(param_2->MeshAxisToOrient).Min.field0_0x0;
      local_98._s_0.Z = (param_2->MeshAxisToOrient).Min.field0_0x0._s_0.Z;
    }
    else {
      puVar3 = TArrayView<unsigned_char_const_,int>::operator[]
                         (&param_1->DynamicBufferData,iVar1 * 4);
      local_98._0_8_ = *(undefined8 *)puVar3;
      local_98._s_0.Z = (float)*(undefined4 *)(puVar3 + 8);
    }
    iVar1 = (param_2->OrientationVector).ParameterOffset;
    if (iVar1 == -1) {
      uVar11 = *(undefined8 *)&(param_2->OrientationVector).Min.field0_0x0;
      fVar4 = (param_2->OrientationVector).Min.field0_0x0._s_0.Z;
    }
    else {
      puVar3 = TArrayView<unsigned_char_const_,int>::operator[]
                         (&param_1->DynamicBufferData,iVar1 * 4);
      uVar11 = *(undefined8 *)puVar3;
      fVar4 = *(float *)(puVar3 + 8);
    }
    fVar8 = local_98._s_0.Y * local_98._s_0.Y + local_98._s_0.X * local_98._s_0.X +
            local_98._s_0.Z * local_98._s_0.Z;
    fVar10 = (float)((ulonglong)UE::Math::TVector<float>::XAxisVector.field0_0x0._0_8_ >> 0x20);
    uVar5 = local_98._s_0.X;
    uVar6 = local_98._s_0.Y;
    uVar2 = local_98._s_0.Z;
    if ((fVar8 != __real_3f800000) &&
       (uVar5 = (float)UE::Math::TVector<float>::XAxisVector.field0_0x0._0_8_, uVar6 = fVar10,
       uVar2 = UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.Z, __real_38d1b717 <= fVar8)) {
      fVar8 = __real_3f800000 / SQRT(fVar8);
      uVar5 = fVar8 * local_98._s_0.X;
      uVar6 = fVar8 * local_98._s_0.Y;
      uVar2 = fVar8 * local_98._s_0.Z;
    }
    local_88._4_4_ = (float)((ulonglong)uVar11 >> 0x20);
    local_88._0_4_ = (float)uVar11;
    local_98._0_8_ = CONCAT44(uVar6,uVar5);
    fVar9 = local_88._4_4_ * local_88._4_4_ + (float)local_88 * (float)local_88 + fVar4 * fVar4;
    fVar8 = (float)local_88;
    fVar7 = local_88._4_4_;
    local_68._s_0.Z = fVar4;
    if ((fVar9 != __real_3f800000) &&
       (fVar8 = (float)UE::Math::TVector<float>::XAxisVector.field0_0x0._0_8_, fVar7 = fVar10,
       local_68._s_0.Z = UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.Z,
       __real_38d1b717 <= fVar9)) {
      fVar10 = __real_3f800000 / SQRT(fVar9);
      fVar8 = fVar10 * (float)local_88;
      fVar7 = fVar10 * local_88._4_4_;
      local_68._s_0.Z = fVar10 * fVar4;
    }
    local_68._0_8_ = CONCAT44(fVar7,fVar8);
    local_98._s_0.Z = (float)uVar2;
    local_88 = uVar11;
    UE::Math::TQuat<float>::FindBetweenVectors
              (local_58,(TVector<float> *)&local_98._s_0,(TVector<float> *)&local_68._s_0);
    UE::Math::TQuat<float>::Rotator(local_58,&local_78);
    (param_4->field0_0x0)._s_0.X = local_78.Roll + (param_4->field0_0x0)._s_0.X;
    (param_4->field0_0x0)._s_0.Y = local_78.Pitch + (param_4->field0_0x0)._s_0.Y;
    (param_4->field0_0x0)._s_0.Z = local_78.Yaw + (param_4->field0_0x0)._s_0.Z;
  }
  fVar4 = __real_3b360b61;
  fVar8 = (param_3->field0_0x0)._s_0.Z * __real_3b360b61;
  (param_3->field0_0x0)._s_0.X = (param_3->field0_0x0)._s_0.X * __real_3b360b61;
  (param_3->field0_0x0)._s_0.Z = fVar8;
  (param_3->field0_0x0)._s_0.Y = (param_3->field0_0x0)._s_0.Y * fVar4;
  (param_4->field0_0x0)._s_0.X = (param_4->field0_0x0)._s_0.X * fVar4;
  (param_4->field0_0x0)._s_0.Y = (param_4->field0_0x0)._s_0.Y * fVar4;
  (param_4->field0_0x0)._s_0.Z = (param_4->field0_0x0)._s_0.Z * fVar4;
  return;
}

// StaticEnum<enum_ENSMInitialMeshOrientationMode> @ 149424dd0

UEnum * __cdecl StaticEnum<enum_ENSMInitialMeshOrientationMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENSMInitialMeshOrientationMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENSMInitialMeshOrientationMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENSMInitialMeshOrientationMode,(UObject *)pUVar1,
                       L"ENSMInitialMeshOrientationMode");
  }
  return Z_Registration_Info_UEnum_ENSMInitialMeshOrientationMode.OuterSingleton;
}

// StaticEnum<enum_ENSMSubUVAnimation_Mode> @ 149424e10

UEnum * __cdecl StaticEnum<enum_ENSMSubUVAnimation_Mode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENSMSubUVAnimation_Mode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENSMSubUVAnimation_Mode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENSMSubUVAnimation_Mode,(UObject *)pUVar1,
                       L"ENSMSubUVAnimation_Mode");
  }
  return Z_Registration_Info_UEnum_ENSMSubUVAnimation_Mode.OuterSingleton;
}

// StaticEnum<enum_ENSM_ShapePrimitive> @ 149424e50

UEnum * __cdecl StaticEnum<enum_ENSM_ShapePrimitive>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENSM_ShapePrimitive.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENSM_ShapePrimitive.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENSM_ShapePrimitive,(UObject *)pUVar1,
                       L"ENSM_ShapePrimitive");
  }
  return Z_Registration_Info_UEnum_ENSM_ShapePrimitive.OuterSingleton;
}

// StaticEnum<enum_ENSM_SurfaceExpansionMode> @ 149424e90

UEnum * __cdecl StaticEnum<enum_ENSM_SurfaceExpansionMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENSM_SurfaceExpansionMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENSM_SurfaceExpansionMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENSM_SurfaceExpansionMode,(UObject *)pUVar1,
                       L"ENSM_SurfaceExpansionMode");
  }
  return Z_Registration_Info_UEnum_ENSM_SurfaceExpansionMode.OuterSingleton;
}

// StaticEnum<enum_ENSM_VelocityType> @ 149424ed0

UEnum * __cdecl StaticEnum<enum_ENSM_VelocityType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENSM_VelocityType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENSM_VelocityType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENSM_VelocityType,(UObject *)pUVar1,
                       L"ENSM_VelocityType");
  }
  return Z_Registration_Info_UEnum_ENSM_VelocityType.OuterSingleton;
}

// StaticEnum<enum_ENiagaraBoolDisplayMode> @ 149424f10

UEnum * __cdecl StaticEnum<enum_ENiagaraBoolDisplayMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraBoolDisplayMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraBoolDisplayMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraBoolDisplayMode,(UObject *)pUVar1,
                       L"ENiagaraBoolDisplayMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraBoolDisplayMode.OuterSingleton;
}

// StaticEnum<enum_ENiagaraCoordinateSpace> @ 149424f50

UEnum * __cdecl StaticEnum<enum_ENiagaraCoordinateSpace>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraCoordinateSpace.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraCoordinateSpace.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraCoordinateSpace,(UObject *)pUVar1,
                       L"ENiagaraCoordinateSpace");
  }
  return Z_Registration_Info_UEnum_ENiagaraCoordinateSpace.OuterSingleton;
}

// StaticEnum<enum_ENiagaraDistributionAddressMode> @ 149424f90

UEnum * __cdecl StaticEnum<enum_ENiagaraDistributionAddressMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraDistributionAddressMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraDistributionAddressMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDistributionAddressMode,(UObject *)pUVar1,
                       L"ENiagaraDistributionAddressMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraDistributionAddressMode.OuterSingleton;
}

// StaticEnum<enum_ENiagaraDistributionInitialLookupValueMode> @ 149424fd0

UEnum * __cdecl StaticEnum<enum_ENiagaraDistributionInitialLookupValueMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraDistributionInitialLookupValueMode.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraDistributionInitialLookupValueMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDistributionInitialLookupValueMode,
                       (UObject *)pUVar1,L"ENiagaraDistributionInitialLookupValueMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraDistributionInitialLookupValueMode.OuterSingleton;
}

// StaticEnum<enum_ENiagaraDistributionInterpolationMode> @ 149425010

UEnum * __cdecl StaticEnum<enum_ENiagaraDistributionInterpolationMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraDistributionInterpolationMode.OuterSingleton == (UEnum *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraDistributionInterpolationMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDistributionInterpolationMode,
                       (UObject *)pUVar1,L"ENiagaraDistributionInterpolationMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraDistributionInterpolationMode.OuterSingleton;
}

// StaticEnum<enum_ENiagaraDistributionLookupValueMode> @ 149425050

UEnum * __cdecl StaticEnum<enum_ENiagaraDistributionLookupValueMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraDistributionLookupValueMode.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraDistributionLookupValueMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDistributionLookupValueMode,
                       (UObject *)pUVar1,L"ENiagaraDistributionLookupValueMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraDistributionLookupValueMode.OuterSingleton;
}

// StaticEnum<enum_ENiagaraDistributionMode> @ 149425090

UEnum * __cdecl StaticEnum<enum_ENiagaraDistributionMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraDistributionMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraDistributionMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDistributionMode,(UObject *)pUVar1,
                       L"ENiagaraDistributionMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraDistributionMode.OuterSingleton;
}

// StaticEnum<enum_ENiagaraDistributionTimeRangeMode> @ 1494250d0

UEnum * __cdecl StaticEnum<enum_ENiagaraDistributionTimeRangeMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraDistributionTimeRangeMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraDistributionTimeRangeMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDistributionTimeRangeMode,(UObject *)pUVar1
                       ,L"ENiagaraDistributionTimeRangeMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraDistributionTimeRangeMode.OuterSingleton;
}

// StaticEnum<enum_ENiagaraExecutionState> @ 149425110

UEnum * __cdecl StaticEnum<enum_ENiagaraExecutionState>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraExecutionState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraExecutionState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraExecutionState,(UObject *)pUVar1,
                       L"ENiagaraExecutionState");
  }
  return Z_Registration_Info_UEnum_ENiagaraExecutionState.OuterSingleton;
}

// StaticEnum<enum_ENiagaraExecutionStateManagement> @ 149425150

UEnum * __cdecl StaticEnum<enum_ENiagaraExecutionStateManagement>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraExecutionStateManagement.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraExecutionStateManagement.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraExecutionStateManagement,(UObject *)pUVar1,
                       L"ENiagaraExecutionStateManagement");
  }
  return Z_Registration_Info_UEnum_ENiagaraExecutionStateManagement.OuterSingleton;
}

// StaticEnum<enum_ENiagaraExecutionStateSource> @ 149425190

UEnum * __cdecl StaticEnum<enum_ENiagaraExecutionStateSource>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraExecutionStateSource.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraExecutionStateSource.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraExecutionStateSource,(UObject *)pUVar1,
                       L"ENiagaraExecutionStateSource");
  }
  return Z_Registration_Info_UEnum_ENiagaraExecutionStateSource.OuterSingleton;
}

// StaticEnum<enum_ENiagaraInputWidgetType> @ 1494251d0

UEnum * __cdecl StaticEnum<enum_ENiagaraInputWidgetType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraInputWidgetType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraInputWidgetType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraInputWidgetType,(UObject *)pUVar1,
                       L"ENiagaraInputWidgetType");
  }
  return Z_Registration_Info_UEnum_ENiagaraInputWidgetType.OuterSingleton;
}

// StaticEnum<enum_ENiagaraNumericOutputTypeSelectionMode> @ 149425210

UEnum * __cdecl StaticEnum<enum_ENiagaraNumericOutputTypeSelectionMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraNumericOutputTypeSelectionMode.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraNumericOutputTypeSelectionMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraNumericOutputTypeSelectionMode,
                       (UObject *)pUVar1,L"ENiagaraNumericOutputTypeSelectionMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraNumericOutputTypeSelectionMode.OuterSingleton;
}

// StaticEnum<enum_ENiagaraOrientationAxis> @ 149425250

UEnum * __cdecl StaticEnum<enum_ENiagaraOrientationAxis>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraOrientationAxis.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraOrientationAxis.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraOrientationAxis,(UObject *)pUVar1,
                       L"ENiagaraOrientationAxis");
  }
  return Z_Registration_Info_UEnum_ENiagaraOrientationAxis.OuterSingleton;
}

// StaticEnum<enum_ENiagaraPythonUpdateScriptReference> @ 149425290

UEnum * __cdecl StaticEnum<enum_ENiagaraPythonUpdateScriptReference>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraPythonUpdateScriptReference.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraPythonUpdateScriptReference.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraPythonUpdateScriptReference,
                       (UObject *)pUVar1,L"ENiagaraPythonUpdateScriptReference");
  }
  return Z_Registration_Info_UEnum_ENiagaraPythonUpdateScriptReference.OuterSingleton;
}

// StaticEnum<enum_ENiagaraStatelessFeatureMask> @ 1494252d0

UEnum * __cdecl StaticEnum<enum_ENiagaraStatelessFeatureMask>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraStatelessFeatureMask.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraStatelessFeatureMask.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraStatelessFeatureMask,(UObject *)pUVar1,
                       L"ENiagaraStatelessFeatureMask");
  }
  return Z_Registration_Info_UEnum_ENiagaraStatelessFeatureMask.OuterSingleton;
}

// StaticEnum<enum_ENiagaraStructConversionType> @ 149425310

UEnum * __cdecl StaticEnum<enum_ENiagaraStructConversionType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraStructConversionType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraStructConversionType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraStructConversionType,(UObject *)pUVar1,
                       L"ENiagaraStructConversionType");
  }
  return Z_Registration_Info_UEnum_ENiagaraStructConversionType.OuterSingleton;
}

// StaticEnum<enum_ENiagaraValidationSeverity> @ 149425350

UEnum * __cdecl StaticEnum<enum_ENiagaraValidationSeverity>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraValidationSeverity.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraValidationSeverity.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraValidationSeverity,(UObject *)pUVar1,
                       L"ENiagaraValidationSeverity");
  }
  return Z_Registration_Info_UEnum_ENiagaraValidationSeverity.OuterSingleton;
}

// StaticEnum<enum_ENiagaraVariantMode> @ 149425390

UEnum * __cdecl StaticEnum<enum_ENiagaraVariantMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraVariantMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraVariantMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraVariantMode,(UObject *)pUVar1,
                       L"ENiagaraVariantMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraVariantMode.OuterSingleton;
}

// UnsetShaderUAVs<FRHIComputeCommandList,NiagaraStateless::FSimulationShader> @ 1494253d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UnsetShaderUAVs<FRHIComputeCommandList,NiagaraStateless::FSimulationShader>
          (FRHIComputeCommandList *param_1,
          TShaderRefBase<NiagaraStateless::FSimulationShader,FShaderMapPointerTable> *param_2,
          FRHIComputeShader *param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  int iVar3;
  FSimulationShader *pFVar4;
  longlong lVar5;
  void *_Src;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  IRHIComputeContext *pIVar9;
  undefined8 *puVar10;
  void *_Dst;
  undefined1 *puVar11;
  byte *pbVar12;
  undefined1 local_res20 [8];
  undefined1 local_78 [16];
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  void *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  
  if (GRHIGlobals.NeedsShaderUnbinds) {
    if (0 < *(int *)&param_1->field_0xd8) {
      local_res20[0] = 0;
      bVar7 = `FRHICommandListBase::GetScratchShaderUnbinds'::__l3::<lambda_1>::operator()
                        (local_res20);
      if (!bVar7) {
        *(undefined4 *)&param_1->field_0xd8 = 0;
        if (*(int *)&param_1->field_0xdc < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,2,0,(ForAnyElementType *)&param_1->field_0xd0,0,(int *)&param_1->field_0xdc);
        }
      }
    }
    pFVar4 = param_2->ShaderContent;
    puVar1 = &param_1->field_0xd0;
    if ((*(short *)&pFVar4->field_0x54 != -1) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                           ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index."),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    puVar11 = *(undefined1 **)&pFVar4->field_0x10;
    if (((ulonglong)puVar11 & 1) != 0) {
      puVar11 = &pFVar4->field_0x10 + ((longlong)puVar11 >> 0x18);
    }
    iVar3 = *(int *)&pFVar4->field_0x18;
    pbVar12 = puVar11 + 2;
    while( true ) {
      if (*(int *)&pFVar4->field_0x18 != iVar3) {
        local_78[0] = 0;
        `TCheckedPointerIterator<FShaderParameterBindings::FResourceParameter_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_78);
      }
      if (pbVar12 + -2 == puVar11 + (longlong)iVar3 * 4) break;
      if ((pbVar12[1] == 7) || ((pbVar12[1] - 0xe & 0xfb) == 0)) {
        iVar8 = *(int *)&param_1->field_0xd8;
        bVar2 = *pbVar12;
        if (iVar8 == *(int *)&param_1->field_0xdc) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x204,(ForAnyElementType *)puVar1,(int *)&param_1->field_0xdc);
        }
        *(int *)&param_1->field_0xd8 = iVar8 + 1;
        lVar5 = *(longlong *)puVar1;
        *(ushort *)(lVar5 + (longlong)iVar8 * 4) = (ushort)bVar2;
        *(undefined1 *)(lVar5 + (longlong)iVar8 * 4 + 2) = 1;
      }
      pbVar12 = pbVar12 + 4;
    }
    iVar3 = *(int *)&param_1->field_0xd8;
    if (0 < iVar3) {
      _Src = *(void **)puVar1;
      local_68 = _Src;
      iStack_60 = iVar3;
      if (GRHIGlobals.NeedsShaderUnbinds != false) {
        if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
          puVar10 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x28,8);
          *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
          **(undefined8 **)&param_1->field_0x30 = puVar10;
          *(undefined8 **)&param_1->field_0x30 = puVar10 + 1;
          _Dst = FMemStackBase::Alloc((FMemStackBase *)param_1,(longlong)iVar3 << 2,2);
          memcpy(_Dst,_Src,(longlong)iVar3 << 2);
          puVar10[1] = 0;
          *puVar10 = &___7__FRHICommandSetShaderUnbinds_VFRHIComputeShader____6B_;
          puVar10[3] = _Dst;
          puVar10[4] = CONCAT44(uStack_4c,iVar3);
          puVar10[2] = param_3;
          local_58 = _Dst;
          iStack_50 = iVar3;
        }
        else {
          pIVar9 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)param_1);
          local_48 = (undefined4)local_68;
          uStack_44 = local_68._4_4_;
          iStack_40 = iStack_60;
          uStack_3c = uStack_5c;
          (**(code **)(pIVar9->_padding_ + 0xa8))(pIVar9,param_3,&local_48);
        }
      }
      *(undefined4 *)&param_1->field_0xd8 = 0;
      if (*(int *)&param_1->field_0xdc < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,2,0,(ForAnyElementType *)puVar1,0,(int *)&param_1->field_0xdc);
      }
    }
  }
  return;
}

// TRDGEmptyLambdaPass<`FNiagaraStatelessComputeManager::OnPostPostRender'::__l2::<lambda_3>_> @ 1494256d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TRDGEmptyLambdaPass<_private:_void___cdecl_FNiagaraStatelessComputeManager::OnPostPostRender(FRDGBuilder_&)_::_2_::<lambda_3>_>
* __thiscall
TRDGEmptyLambdaPass<`FNiagaraStatelessComputeManager::OnPostPostRender'::__l2::<lambda_3>_>::
TRDGEmptyLambdaPass<_FNiagaraStatelessComputeManager::OnPostPostRender_::__l2::<lambda_3>_>
          (void *this,FRDGEventName *param_1,ERDGPassFlags param_2,<lambda_3> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGEmptyLambdaPass<_private:_void___cdecl_FNiagaraStatelessComputeManager::OnPostPostRender(FRDGBuilder_&)_::_2_::<lambda_3>_>
  *pTVar4;
  FRDGParameterStruct local_38;
  
  pFVar3 = FEmptyShaderParameters::FTypeInfo::GetStructMetadata();
  local_38.Contents = (uchar *)&<lambda_3>_>::EmptyShaderParameters;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGEmptyLambdaPass<_private:_void___cdecl_FNiagaraStatelessComputeManager::OnPostPostRender(FRDGBuilder_&)_::_2_::<lambda_3>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  local_38.Layout.Reference = (pFVar3->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = pFVar3;
  FRDGPass::FRDGPass(this,param_1,&local_38,param_2,Inline);
  *(undefined ***)this =
       &TRDGLambdaPass<FEmptyShaderParameters,`FNiagaraStatelessComputeManager::OnPostPostRender'::`2'::<lambda_3>_>
        ::_vftable_;
  *(FNiagaraStatelessComputeManager **)((longlong)this + 0x180) = param_3->__this;
  *(undefined ***)this =
       &TRDGEmptyLambdaPass<`FNiagaraStatelessComputeManager::OnPostPostRender'::`2'::<lambda_3>_>::
        _vftable_;
  *(FEmptyShaderParameters **)((longlong)this + 0x188) = &<lambda_3>_>::EmptyShaderParameters;
  return this;
}

// TRDGEmptyLambdaPass<`FNiagaraStatelessComputeManager::OnPreRender'::__l2::<lambda_3>_> @ 1494257c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TRDGEmptyLambdaPass<_private:_void___cdecl_FNiagaraStatelessComputeManager::OnPreRender(FRDGBuilder_&)_::_2_::<lambda_3>_>
* __thiscall
TRDGEmptyLambdaPass<`FNiagaraStatelessComputeManager::OnPreRender'::__l2::<lambda_3>_>::
TRDGEmptyLambdaPass<_FNiagaraStatelessComputeManager::OnPreRender_::__l2::<lambda_3>_>
          (void *this,FRDGEventName *param_1,ERDGPassFlags param_2,<lambda_3> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TRDGEmptyLambdaPass<_private:_void___cdecl_FNiagaraStatelessComputeManager::OnPreRender(FRDGBuilder_&)_::_2_::<lambda_3>_>
  *pTVar4;
  FRDGParameterStruct local_38;
  
  pFVar3 = FEmptyShaderParameters::FTypeInfo::GetStructMetadata();
  local_38.Contents = (uchar *)&<lambda_3>_>::EmptyShaderParameters;
  if ((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGEmptyLambdaPass<_private:_void___cdecl_FNiagaraStatelessComputeManager::OnPreRender(FRDGBuilder_&)_::_2_::<lambda_3>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  local_38.Layout.Reference = (pFVar3->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = pFVar3;
  FRDGPass::FRDGPass(this,param_1,&local_38,param_2,Inline);
  *(undefined ***)this =
       &TRDGLambdaPass<FEmptyShaderParameters,`FNiagaraStatelessComputeManager::OnPreRender'::`2'::<lambda_3>_>
        ::_vftable_;
  *(undefined8 *)((longlong)this + 0x180) = 0;
  *(FScriptContainerElement **)((longlong)this + 0x180) =
       (param_3->GPUGenerationRequests_RDG).AllocatorInstance.Data;
  (param_3->GPUGenerationRequests_RDG).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)((longlong)this + 0x188) = (param_3->GPUGenerationRequests_RDG).ArrayNum;
  *(int *)((longlong)this + 0x18c) = (param_3->GPUGenerationRequests_RDG).ArrayMax;
  (param_3->GPUGenerationRequests_RDG).ArrayNum = 0;
  (param_3->GPUGenerationRequests_RDG).ArrayMax = 0;
  *(FNiagaraGpuComputeDispatchInterface **)((longlong)this + 400) = param_3->ComputeInterface;
  *(undefined ***)this =
       &TRDGEmptyLambdaPass<`FNiagaraStatelessComputeManager::OnPreRender'::`2'::<lambda_3>_>::
        _vftable_;
  *(FEmptyShaderParameters **)((longlong)this + 0x198) = &<lambda_3>_>::EmptyShaderParameters;
  return this;
}

// ~TFunction_OwnedObject<`FNiagaraWorldManager::TickStart'::__l2::<lambda_1>,1,1> @ 14942b030

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraWorldManager::TickStart'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FNiagaraWorldManager::TickStart_::__l2::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraWorldManager::TickStart'::`2'::<lambda_1>,1,1>::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`FNiagaraRenderThreadDeletor<FNiagaraStatelessEmitterData>::operator()'::__l7::<lambda_1>,1,0> @ 14942b050

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraRenderThreadDeletor<FNiagaraStatelessEmitterData>::operator()'::__l7::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_FNiagaraRenderThreadDeletor<FNiagaraStatelessEmitterData>::operator()_::__l7::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__6___R__FNiagaraRenderThreadDeletor_UFNiagaraStatelessEmitterData____QEBAXPEAUFNiagaraStatelessEmitterData___Z__00_0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TRDGLambdaPass<FEmptyShaderParameters,`FNiagaraStatelessComputeManager::OnPreRender'::__l2::<lambda_3>_> @ 14942b0b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FEmptyShaderParameters,`FNiagaraStatelessComputeManager::OnPreRender'::__l2::<lambda_3>_>
::
~TRDGLambdaPass<FEmptyShaderParameters,_FNiagaraStatelessComputeManager::OnPreRender_::__l2::<lambda_3>_>
          (void *this)

{
  DestructItems<FNiagaraStatelessComputeManager::FStatelessDataGenerationRequest,int>
            (*(FStatelessDataGenerationRequest **)((longlong)this + 0x180),
             *(int *)((longlong)this + 0x188));
  if (*(void **)((longlong)this + 0x180) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x180));
  }
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
    return;
  }
  return;
}

// operator() @ 14942d5d0

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
<lambda_24>::operator()
          (<lambda_24> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FNiagaraWorldManager *this_00;
  FOutputDeviceRedirector *pFVar3;
  bool bVar4;
  
  this_00 = FNiagaraWorldManager::Get(param_2);
  if (this_00 != (FNiagaraWorldManager *)0x0) {
    pFVar3 = GetGlobalLogSingleton();
    if (pFVar3 != (FOutputDeviceRedirector *)0x0) {
      if (param_1->ArrayNum < 1) {
        bVar4 = false;
      }
      else {
        pFVar1 = (param_1->AllocatorInstance).Data;
        if (*(int *)(pFVar1 + 8) == 0) {
          iVar2 = _wtoi(L"");
          bVar4 = iVar2 != 0;
        }
        else {
          iVar2 = _wtoi(*(wchar_t **)pFVar1);
          bVar4 = iVar2 != 0;
        }
      }
      pFVar3 = GetGlobalLogSingleton();
      FNiagaraWorldManager::DumpDetails(this_00,(FOutputDevice *)pFVar3,bVar4);
    }
  }
  return;
}

// operator() @ 14942d660

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
<lambda_25>::operator()
          (<lambda_25> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  ENiagaraDebugPlaybackMode EVar2;
  int iVar3;
  FNiagaraWorldManager *pFVar4;
  wchar_t *_Str;
  ENiagaraDebugPlaybackMode EVar5;
  
  pFVar4 = FNiagaraWorldManager::Get(param_2);
  if (pFVar4 != (FNiagaraWorldManager *)0x0) {
    if (param_1->ArrayNum == 1) {
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (*(int *)(pFVar1 + 8) == 0) {
        _Str = L"";
      }
      else {
        _Str = *(wchar_t **)pFVar1;
      }
      iVar3 = _wtoi(_Str);
      EVar5 = Step;
      if ((ENiagaraDebugPlaybackMode)iVar3 < Step) {
        EVar5 = (ENiagaraDebugPlaybackMode)iVar3;
      }
      EVar2 = Play;
      if (EVar5 != Play) {
        EVar2 = EVar5;
      }
      pFVar4->RequestedDebugPlaybackMode = EVar2;
    }
    else if (4 < (byte)LogNiagara._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      return;
    }
  }
  return;
}

// operator() @ 14942d700

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
<lambda_26>::operator()
          (<lambda_26> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  FNiagaraWorldManager *pFVar2;
  wchar_t *_Str;
  double dVar3;
  float fVar4;
  
  pFVar2 = FNiagaraWorldManager::Get(param_2);
  if (pFVar2 != (FNiagaraWorldManager *)0x0) {
    if (param_1->ArrayNum == 1) {
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (*(int *)(pFVar1 + 8) == 0) {
        _Str = L"";
      }
      else {
        _Str = *(wchar_t **)pFVar1;
      }
      dVar3 = _wtof(_Str);
      fVar4 = (float)dVar3;
      if (__real_41200000 <= (float)dVar3) {
        fVar4 = __real_41200000;
      }
      if (fVar4 <= __real_38d1b717) {
        fVar4 = __real_38d1b717;
      }
      pFVar2->DebugPlaybackRate = fVar4;
    }
    else if (4 < (byte)LogNiagara._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      return;
    }
  }
  return;
}

// operator() @ 14942d7b0

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
<lambda_27>::operator()
          (<lambda_27> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TTuple<UWorld_*,FNiagaraWorldManager_*> *pTVar5;
  longlong *plVar6;
  wchar_t *_Str;
  ENiagaraScalabilityCullingMode EVar7;
  ENiagaraScalabilityCullingMode EVar8;
  longlong *plVar9;
  FName local_res20;
  FString local_18;
  
  plVar9 = (longlong *)0x0;
  local_res20 = (FName)((ulonglong)local_res20 & 0xffffffff00000000);
  pTVar5 = TSet<TTuple<UWorld_*,FNiagaraWorldManager_*>,TDefaultMapHashableKeyFuncs<UWorld_*,FNiagaraWorldManager_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UWorld_*,FNiagaraWorldManager_*>,TDefaultMapHashableKeyFuncs<UWorld_*,FNiagaraWorldManager_*,0>,FDefaultSetAllocator>
                   *)&FNiagaraWorldManager::WorldManagers,param_2);
  plVar6 = (longlong *)&pTVar5->field_0x8;
  if (pTVar5 == (TTuple<UWorld_*,FNiagaraWorldManager_*> *)0x0) {
    plVar6 = plVar9;
  }
  if (plVar6 == (longlong *)0x0) {
    if ((byte)LogNiagara._0_1_ < 3) {
      return;
    }
    if (param_2 != (UWorld *)0x0) {
      local_res20 = (FName)param_2->_padding_;
      ::FName::ToString(&local_res20,&local_18);
      plVar9 = (longlong *)&DAT_00000001;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    if ((plVar9 != (longlong *)0x0) &&
       (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else if (*plVar6 != 0) {
    if ((param_1->ArrayNum == 1) &&
       (bVar3 = ::FString::IsNumeric((FString *)(param_1->AllocatorInstance).Data), bVar3)) {
      if ((param_1->ArrayNum < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (*(int *)(pFVar1 + 8) == 0) {
        _Str = L"";
      }
      else {
        _Str = *(wchar_t **)pFVar1;
      }
      iVar4 = _wtoi(_Str);
      EVar7 = Disabled;
      if ((ENiagaraScalabilityCullingMode)iVar4 < Disabled) {
        EVar7 = (ENiagaraScalabilityCullingMode)iVar4;
      }
      EVar8 = Enabled;
      if (EVar7 != Enabled) {
        EVar8 = EVar7;
      }
      if (FNiagaraWorldManager::ScalabilityCullingMode == EVar8) {
        return;
      }
      FFXBudget::Reset();
      FNiagaraWorldManager::ScalabilityCullingMode = EVar8;
      FNiagaraWorldManager::
      ForAllWorldManagers<_FNiagaraWorldManager::SetScalabilityCullingMode_::__l5::<lambda_1>_>
                (local_res20.ComparisonIndex.Value._0_1_);
      return;
    }
    if ((byte)LogNiagara._0_1_ < 5) {
      return;
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    if ((byte)LogNiagara._0_1_ < 5) {
      return;
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    if ((byte)LogNiagara._0_1_ < 5) {
      return;
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    if ((byte)LogNiagara._0_1_ < 5) {
      return;
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    if ((byte)LogNiagara._0_1_ < 5) {
      return;
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    return;
  }
  if (2 < (byte)LogNiagara._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
  }
  return;
}

// `scalar_deleting_destructor' @ 14942e400

void * __thiscall
IBaseDelegateInstance<void___cdecl(APlayerController_*,AActor_*,AActor_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(APlayerController_*,AActor_*,AActor_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942e430

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(APlayerController_*,AActor_*,AActor_*),FDefaultDelegateUserPolicy,`FNiagaraWorldManager::OnStartup'::__l5::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942e460

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(UWorld_*),FDefaultDelegateUserPolicy,`FNiagaraWorldManager::OnStartup'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942e490

void * __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraStatelessComputeManager,void___cdecl(FRDGBuilder_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FNiagaraStatelessComputeManager,void___cdecl(FRDGBuilder_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942e4c0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(APlayerController_*,AActor_*,AActor_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(APlayerController_*,AActor_*,AActor_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942e4f0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(NiagaraStateless::FParticleSimulationContext_const_&),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<void_(__cdecl*)(NiagaraStateless::FParticleSimulationContext_const_&),0,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXAEBVFParticleSimulationContext_NiagaraStateless___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942e530

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraWorldManager::TickStart'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraWorldManager::TickStart'::`2'::<lambda_1>,1,1>::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942e580

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraRenderThreadDeletor<FNiagaraStatelessEmitterData>::operator()'::__l7::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__6___R__FNiagaraRenderThreadDeletor_UFNiagaraStatelessEmitterData____QEBAXPEAUFNiagaraStatelessEmitterData___Z__00_0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942e5c0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<std::atomic<float>,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<std::atomic<float>,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942e600

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNiagaraDataSetCompiledData,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FNiagaraDataSetCompiledData,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942e640

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FParticlePerfStatsListener_EffectType,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FParticlePerfStatsListener_EffectType,1> *this,uint param_1
          )

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942e680

void * __thiscall
FRDGAllocator::
TObject<TRDGEmptyLambdaPass<`FNiagaraStatelessComputeManager::OnPostPostRender'::__l2::<lambda_3>_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x40) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x40));
  }
  if (*(void **)((longlong)this + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x28));
  }
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x198);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942e6e0

void * __thiscall
FRDGAllocator::
TObject<TRDGEmptyLambdaPass<`FNiagaraStatelessComputeManager::OnPreRender'::__l2::<lambda_3>_>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  TRDGLambdaPass<FEmptyShaderParameters,`FNiagaraStatelessComputeManager::OnPreRender'::__l2::<lambda_3>_>
  ::
  ~TRDGLambdaPass<FEmptyShaderParameters,_FNiagaraStatelessComputeManager::OnPreRender_::__l2::<lambda_3>_>
            ((void *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1a8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942e720

void * __thiscall
TRDGEmptyLambdaPass<`FNiagaraStatelessComputeManager::OnPostPostRender'::__l2::<lambda_3>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942e780

void * __thiscall
TRDGEmptyLambdaPass<`FNiagaraStatelessComputeManager::OnPreRender'::__l2::<lambda_3>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  TRDGLambdaPass<FEmptyShaderParameters,`FNiagaraStatelessComputeManager::OnPreRender'::__l2::<lambda_3>_>
  ::
  ~TRDGLambdaPass<FEmptyShaderParameters,_FNiagaraStatelessComputeManager::OnPreRender_::__l2::<lambda_3>_>
            (this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942e7c0

void * __thiscall
TRDGLambdaPass<FEmptyShaderParameters,`FNiagaraStatelessComputeManager::OnPostPostRender'::__l2::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942e820

void * __thiscall
TRDGLambdaPass<FEmptyShaderParameters,`FNiagaraStatelessComputeManager::OnPreRender'::__l2::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  ~TRDGLambdaPass<FEmptyShaderParameters,_FNiagaraStatelessComputeManager::OnPreRender_::__l2::<lambda_3>_>
            (this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942e860

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FNiagaraStatelessEmitterData,FNiagaraRenderThreadDeletor<FNiagaraStatelessEmitterData>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FNiagaraStatelessEmitterData,FNiagaraRenderThreadDeletor<FNiagaraStatelessEmitterData>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942e8a0

void * __thiscall
FNiagaraStatelessEmitterDataBuildContext::TTransientObject<NiagaraStateless::FPhysicsBuildData>::
_scalar_deleting_destructor_
          (TTransientObject<NiagaraStateless::FPhysicsBuildData> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942e8d0

void * __thiscall
NSMMeshIndexPrivate::FMeshIndexWeightedSampler::_scalar_deleting_destructor_
          (FMeshIndexWeightedSampler *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PerIndexWeight).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FWeightedRandomSampler::~FWeightedRandomSampler((FWeightedRandomSampler *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942e920

void * __thiscall
FNiagaraDistributionCurveFloat::_scalar_deleting_destructor_
          (FNiagaraDistributionCurveFloat *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942e970

void * __thiscall
FNiagaraDistributionCurveVector3::_scalar_deleting_destructor_
          (FNiagaraDistributionCurveVector3 *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942e9c0

void * __thiscall
FNiagaraDistributionRangeRotator::_scalar_deleting_destructor_
          (FNiagaraDistributionRangeRotator *this,uint param_1)

{
  FInstancedStruct::Reset((FInstancedStruct *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942ea00

void * __thiscall
FNiagaraDistributionVector3::_scalar_deleting_destructor_
          (FNiagaraDistributionVector3 *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Values).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942ea50

void * __thiscall
FNiagaraStatelessComputeManager::_scalar_deleting_destructor_
          (FNiagaraStatelessComputeManager *this,uint param_1)

{
  ~FNiagaraStatelessComputeManager(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942ea90

void * __thiscall
FNiagaraStatelessExpression::_scalar_deleting_destructor_
          (FNiagaraStatelessExpression *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942eac0

void * __thiscall
FNiagaraStatelessExpressionColor::_scalar_deleting_destructor_
          (FNiagaraStatelessExpressionColor *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942eaf0

void * __thiscall
FNiagaraStatelessExpressionColorAdd::_scalar_deleting_destructor_
          (FNiagaraStatelessExpressionColorAdd *this,uint param_1)

{
  FInstancedStruct::Reset(&this->B);
  FInstancedStruct::Reset(&this->A);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942eb40

void * __thiscall
FNiagaraStatelessExpressionColorBinding::_scalar_deleting_destructor_
          (FNiagaraStatelessExpressionColorBinding *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942eb70

void * __thiscall
FNiagaraStatelessExpressionColorConstant::_scalar_deleting_destructor_
          (FNiagaraStatelessExpressionColorConstant *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942eba0

void * __thiscall
FNiagaraStatelessExpressionColorDivide::_scalar_deleting_destructor_
          (FNiagaraStatelessExpressionColorDivide *this,uint param_1)

{
  FInstancedStruct::Reset(&this->B);
  FInstancedStruct::Reset(&this->A);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942ebf0

void * __thiscall
FNiagaraStatelessExpressionColorMultiply::_scalar_deleting_destructor_
          (FNiagaraStatelessExpressionColorMultiply *this,uint param_1)

{
  FInstancedStruct::Reset(&this->B);
  FInstancedStruct::Reset(&this->A);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942ec40

void * __thiscall
FNiagaraStatelessExpressionColorSubtract::_scalar_deleting_destructor_
          (FNiagaraStatelessExpressionColorSubtract *this,uint param_1)

{
  FInstancedStruct::Reset(&this->B);
  FInstancedStruct::Reset(&this->A);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942ec90

void * __thiscall
FNiagaraStatelessExpressionFloat::_scalar_deleting_destructor_
          (FNiagaraStatelessExpressionFloat *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942ecc0

void * __thiscall
FNiagaraStatelessExpressionFloatAdd::_scalar_deleting_destructor_
          (FNiagaraStatelessExpressionFloatAdd *this,uint param_1)

{
  FInstancedStruct::Reset(&this->B);
  FInstancedStruct::Reset(&this->A);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942ed10

void * __thiscall
FNiagaraStatelessExpressionFloatBinding::_scalar_deleting_destructor_
          (FNiagaraStatelessExpressionFloatBinding *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942ed40

void * __thiscall
FNiagaraStatelessExpressionFloatConstant::_scalar_deleting_destructor_
          (FNiagaraStatelessExpressionFloatConstant *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942ed70

void * __thiscall
FNiagaraStatelessExpressionFloatDivide::_scalar_deleting_destructor_
          (FNiagaraStatelessExpressionFloatDivide *this,uint param_1)

{
  FInstancedStruct::Reset(&this->B);
  FInstancedStruct::Reset(&this->A);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942edc0

void * __thiscall
FNiagaraStatelessExpressionFloatMultiply::_scalar_deleting_destructor_
          (FNiagaraStatelessExpressionFloatMultiply *this,uint param_1)

{
  FInstancedStruct::Reset(&this->B);
  FInstancedStruct::Reset(&this->A);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942ee10

void * __thiscall
FNiagaraStatelessExpressionFloatSubtract::_scalar_deleting_destructor_
          (FNiagaraStatelessExpressionFloatSubtract *this,uint param_1)

{
  FInstancedStruct::Reset(&this->B);
  FInstancedStruct::Reset(&this->A);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942ee60

void * __thiscall
FNiagaraStatelessExpressionVec2::_scalar_deleting_destructor_
          (FNiagaraStatelessExpressionVec2 *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942ee90

void * __thiscall
FNiagaraStatelessExpressionVec2Add::_scalar_deleting_destructor_
          (FNiagaraStatelessExpressionVec2Add *this,uint param_1)

{
  FInstancedStruct::Reset(&this->B);
  FInstancedStruct::Reset(&this->A);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942eee0

void * __thiscall
FNiagaraStatelessExpressionVec2Binding::_scalar_deleting_destructor_
          (FNiagaraStatelessExpressionVec2Binding *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942ef10

void * __thiscall
FNiagaraStatelessExpressionVec2Constant::_scalar_deleting_destructor_
          (FNiagaraStatelessExpressionVec2Constant *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942ef40

void * __thiscall
FNiagaraStatelessExpressionVec2Divide::_scalar_deleting_destructor_
          (FNiagaraStatelessExpressionVec2Divide *this,uint param_1)

{
  FInstancedStruct::Reset(&this->B);
  FInstancedStruct::Reset(&this->A);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942ef90

void * __thiscall
FNiagaraStatelessExpressionVec2Multiply::_scalar_deleting_destructor_
          (FNiagaraStatelessExpressionVec2Multiply *this,uint param_1)

{
  FInstancedStruct::Reset(&this->B);
  FInstancedStruct::Reset(&this->A);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942efe0

void * __thiscall
FNiagaraStatelessExpressionVec2Subtract::_scalar_deleting_destructor_
          (FNiagaraStatelessExpressionVec2Subtract *this,uint param_1)

{
  FInstancedStruct::Reset(&this->B);
  FInstancedStruct::Reset(&this->A);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942f030

void * __thiscall
FNiagaraStatelessExpressionVec3::_scalar_deleting_destructor_
          (FNiagaraStatelessExpressionVec3 *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942f060

void * __thiscall
FNiagaraStatelessExpressionVec3Add::_scalar_deleting_destructor_
          (FNiagaraStatelessExpressionVec3Add *this,uint param_1)

{
  FInstancedStruct::Reset(&this->B);
  FInstancedStruct::Reset(&this->A);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942f0b0

void * __thiscall
FNiagaraStatelessExpressionVec3Binding::_scalar_deleting_destructor_
          (FNiagaraStatelessExpressionVec3Binding *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942f0e0

void * __thiscall
FNiagaraStatelessExpressionVec3Constant::_scalar_deleting_destructor_
          (FNiagaraStatelessExpressionVec3Constant *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942f110

void * __thiscall
FNiagaraStatelessExpressionVec3Divide::_scalar_deleting_destructor_
          (FNiagaraStatelessExpressionVec3Divide *this,uint param_1)

{
  FInstancedStruct::Reset(&this->B);
  FInstancedStruct::Reset(&this->A);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942f160

void * __thiscall
FNiagaraStatelessExpressionVec3Multiply::_scalar_deleting_destructor_
          (FNiagaraStatelessExpressionVec3Multiply *this,uint param_1)

{
  FInstancedStruct::Reset(&this->B);
  FInstancedStruct::Reset(&this->A);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942f1b0

void * __thiscall
FNiagaraStatelessExpressionVec3Subtract::_scalar_deleting_destructor_
          (FNiagaraStatelessExpressionVec3Subtract *this,uint param_1)

{
  FInstancedStruct::Reset(&this->B);
  FInstancedStruct::Reset(&this->A);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942f200

void * __thiscall
FNiagaraStatelessExpressionVec4::_scalar_deleting_destructor_
          (FNiagaraStatelessExpressionVec4 *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942f230

void * __thiscall
FNiagaraStatelessExpressionVec4Add::_scalar_deleting_destructor_
          (FNiagaraStatelessExpressionVec4Add *this,uint param_1)

{
  FInstancedStruct::Reset(&this->B);
  FInstancedStruct::Reset(&this->A);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942f280

void * __thiscall
FNiagaraStatelessExpressionVec4Binding::_scalar_deleting_destructor_
          (FNiagaraStatelessExpressionVec4Binding *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942f2b0

void * __thiscall
FNiagaraStatelessExpressionVec4Constant::_scalar_deleting_destructor_
          (FNiagaraStatelessExpressionVec4Constant *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942f2e0

void * __thiscall
FNiagaraStatelessExpressionVec4Divide::_scalar_deleting_destructor_
          (FNiagaraStatelessExpressionVec4Divide *this,uint param_1)

{
  FInstancedStruct::Reset(&this->B);
  FInstancedStruct::Reset(&this->A);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942f330

void * __thiscall
FNiagaraStatelessExpressionVec4Multiply::_scalar_deleting_destructor_
          (FNiagaraStatelessExpressionVec4Multiply *this,uint param_1)

{
  FInstancedStruct::Reset(&this->B);
  FInstancedStruct::Reset(&this->A);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942f380

void * __thiscall
FNiagaraStatelessExpressionVec4Subtract::_scalar_deleting_destructor_
          (FNiagaraStatelessExpressionVec4Subtract *this,uint param_1)

{
  FInstancedStruct::Reset(&this->B);
  FInstancedStruct::Reset(&this->A);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942f3d0

void * __thiscall
FNiagaraUserRedirectionParameterStore::_scalar_deleting_destructor_
          (FNiagaraUserRedirectionParameterStore *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->UserParameterRedirects).field_0x48 = 0;
  pvVar1 = *(void **)&(this->UserParameterRedirects).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FNiagaraVariable,FNiagaraVariable>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FNiagaraVariable,FNiagaraVariable>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FNiagaraVariable,FNiagaraVariable>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->UserParameterRedirects);
  FNiagaraParameterStore::~FNiagaraParameterStore((FNiagaraParameterStore *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942f440

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

void * __thiscall
FNiagaraWorldManager::_scalar_deleting_destructor_(FNiagaraWorldManager *this,uint param_1)

{
  ~FNiagaraWorldManager(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942f480

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

void * __thiscall
FNiagaraWorldManagerTickFunction::_scalar_deleting_destructor_
          (FNiagaraWorldManagerTickFunction *this,uint param_1)

{
  FTickFunction::~FTickFunction((FTickFunction *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942f4c0

void * __thiscall
FParticlePerfStatsListener_EffectType::_scalar_deleting_destructor_
          (FParticlePerfStatsListener_EffectType *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7FParticlePerfStatsListener__6B_;
  plVar3 = *(longlong **)&this->field_0x10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942f530

void * __thiscall
FNiagaraStatelessEmitterDataBuildContext::FTransientObject::_scalar_deleting_destructor_
          (FTransientObject *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942f560

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void * __thiscall
UNiagaraStatelessEmitter::_scalar_deleting_destructor_(UNiagaraStatelessEmitter *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraStatelessEmitter__6B_;
  pFVar1 = (this->CachedParameterCollectionReferences).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ShaderOutputVariableOffsets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FNiagaraVariableLayoutInfo,int>
            ((FNiagaraVariableLayoutInfo *)
             (this->ParticleDataSetCompiledData).VariableLayouts.AllocatorInstance.Data,
             (this->ParticleDataSetCompiledData).VariableLayouts.ArrayNum);
  pFVar1 = (this->ParticleDataSetCompiledData).VariableLayouts.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ParticleDataSetCompiledData).Variables.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FNiagaraEmitterScalabilityOverride,int>
            ((FNiagaraEmitterScalabilityOverride *)
             (this->ScalabilityOverrides).Overrides.AllocatorInstance.Data,
             (this->ScalabilityOverrides).Overrides.ArrayNum);
  pFVar1 = (this->ScalabilityOverrides).Overrides.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Platforms).CVarConditions.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Platforms).DeviceProfileStates.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RendererProperties).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Modules).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FNiagaraStatelessSpawnInfo,int>
            ((FNiagaraStatelessSpawnInfo *)(this->SpawnInfos).AllocatorInstance.Data,
             (this->SpawnInfos).ArrayNum);
  pFVar1 = (this->SpawnInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&(this->EmitterState).LoopDelay._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->EmitterState).LoopDuration._padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->StatelessEmitterData).SharedReferenceCount.ReferenceController);
  UNiagaraEmitterBase::~UNiagaraEmitterBase((UNiagaraEmitterBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942f6d0

void * __thiscall
UNiagaraStatelessModule_AccelerationForce::_scalar_deleting_destructor_
          (UNiagaraStatelessModule_AccelerationForce *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_AccelerationForce__6B_;
  FInstancedStruct::Reset((FInstancedStruct *)&(this->AccelerationDistribution)._padding_);
  UNiagaraStatelessModule::~UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942f740

void * __thiscall
UNiagaraStatelessModule_AddVelocity::_scalar_deleting_destructor_
          (UNiagaraStatelessModule_AddVelocity *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_AddVelocity__6B_;
  FInstancedStruct::Reset((FInstancedStruct *)&(this->PointVelocityDistribution)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->ConeVelocityDistribution)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->LinearVelocityScale)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->LinearVelocityDistribution)._padding_);
  UNiagaraStatelessModule::~UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942f7d0

void * __thiscall
UNiagaraStatelessModule_CalculateAccurateVelocity::_scalar_deleting_destructor_
          (UNiagaraStatelessModule_CalculateAccurateVelocity *this,uint param_1)

{
  *(undefined ***)this = &___7UNiagaraStatelessModule_CalculateAccurateVelocity__6B_;
  UNiagaraStatelessModule::~UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942f830

void * __thiscall
UNiagaraStatelessModule_CameraOffset::_scalar_deleting_destructor_
          (UNiagaraStatelessModule_CameraOffset *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_CameraOffset__6B_;
  pFVar1 = (this->CameraOffsetDistribution).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&(this->CameraOffsetDistribution)._padding_);
  UNiagaraStatelessModule::~UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942f8b0

void * __thiscall
UNiagaraStatelessModule_CurlNoiseForce::_scalar_deleting_destructor_
          (UNiagaraStatelessModule_CurlNoiseForce *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_CurlNoiseForce__6B_;
  UNiagaraStatelessModule::~UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942f910

void * __thiscall
UNiagaraStatelessModule_DecalAttributes::_scalar_deleting_destructor_
          (UNiagaraStatelessModule_DecalAttributes *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_DecalAttributes__6B_;
  pFVar1 = (this->Fade).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&(this->Fade)._padding_);
  pFVar1 = (this->Size).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&(this->Size)._padding_);
  pFVar1 = (this->Orientation).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&(this->Orientation)._padding_);
  UNiagaraStatelessModule::~UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942f9d0

void * __thiscall
UNiagaraStatelessModule_Drag::_scalar_deleting_destructor_
          (UNiagaraStatelessModule_Drag *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_Drag__6B_;
  FInstancedStruct::Reset((FInstancedStruct *)&(this->DragDistribution)._padding_);
  UNiagaraStatelessModule::~UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942fa40

void * __thiscall
UNiagaraStatelessModule_DynamicMaterialParameters::_scalar_deleting_destructor_
          (UNiagaraStatelessModule_DynamicMaterialParameters *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_DynamicMaterialParameters__6B_;
  FNiagaraStatelessDynamicParameterSet::~FNiagaraStatelessDynamicParameterSet(&this->Parameter3);
  FNiagaraStatelessDynamicParameterSet::~FNiagaraStatelessDynamicParameterSet(&this->Parameter2);
  FNiagaraStatelessDynamicParameterSet::~FNiagaraStatelessDynamicParameterSet(&this->Parameter1);
  FNiagaraStatelessDynamicParameterSet::~FNiagaraStatelessDynamicParameterSet(&this->Parameter0);
  UNiagaraStatelessModule::~UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x458);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942fad0

void * __thiscall
UNiagaraStatelessModule_GravityForce::_scalar_deleting_destructor_
          (UNiagaraStatelessModule_GravityForce *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_GravityForce__6B_;
  FInstancedStruct::Reset((FInstancedStruct *)&(this->GravityDistribution)._padding_);
  UNiagaraStatelessModule::~UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942fb40

void * __thiscall
UNiagaraStatelessModule_InitialMeshOrientation::_scalar_deleting_destructor_
          (UNiagaraStatelessModule_InitialMeshOrientation *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_InitialMeshOrientation__6B_;
  FInstancedStruct::Reset((FInstancedStruct *)&(this->Rotation)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->MeshAxisToOrient)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->OrientationVector)._padding_);
  UNiagaraStatelessModule::~UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xf8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942fbd0

void * __thiscall
UNiagaraStatelessModule_InitializeParticle::_scalar_deleting_destructor_
          (UNiagaraStatelessModule_InitializeParticle *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_InitializeParticle__6B_;
  pvVar1 = *(void **)&(this->InitialPositionDistribution).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&(this->InitialPositionDistribution).field_0x18);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->RibbonWidthDistribution)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->MeshScaleDistribution)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->SpriteRotationDistribution)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->SpriteSizeDistribution)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->MassDistribution)._padding_);
  pFVar2 = (this->ColorDistribution).Values.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&(this->ColorDistribution)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->LifetimeDistribution)._padding_);
  UNiagaraStatelessModule::~UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942fcb0

void * __thiscall
UNiagaraStatelessModule_LightAttributes::_scalar_deleting_destructor_
          (UNiagaraStatelessModule_LightAttributes *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_LightAttributes__6B_;
  pFVar1 = (this->VolumetricScattering).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&(this->VolumetricScattering)._padding_);
  pFVar1 = (this->SpecularScale).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&(this->SpecularScale)._padding_);
  pFVar1 = (this->DiffuseScale).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&(this->DiffuseScale)._padding_);
  pFVar1 = (this->FalloffExponent).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&(this->FalloffExponent)._padding_);
  pFVar1 = (this->Radius).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&(this->Radius)._padding_);
  UNiagaraStatelessModule::~UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x178);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942fda0

void * __thiscall
UNiagaraStatelessModule_MeshIndex::_scalar_deleting_destructor_
          (UNiagaraStatelessModule_MeshIndex *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_MeshIndex__6B_;
  pFVar1 = (this->MeshIndexWeight).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset(&(this->MeshIndex).ParameterExpression);
  UNiagaraStatelessModule::~UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942fe20

void * __thiscall
UNiagaraStatelessModule_MeshRotationRate::_scalar_deleting_destructor_
          (UNiagaraStatelessModule_MeshRotationRate *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_MeshRotationRate__6B_;
  pFVar1 = (this->RateScaleDistribution).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&(this->RateScaleDistribution)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->RotationRateDistribution)._padding_);
  UNiagaraStatelessModule::~UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942feb0

void * __thiscall
UNiagaraStatelessModule_RotateAroundPoint::_scalar_deleting_destructor_
          (UNiagaraStatelessModule_RotateAroundPoint *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_RotateAroundPoint__6B_;
  FInstancedStruct::Reset((FInstancedStruct *)&(this->RotationAxis)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->Center)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->InitialPhase)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->Radius)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->Rate)._padding_);
  UNiagaraStatelessModule::~UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942ff50

void * __thiscall
UNiagaraStatelessModule_ScaleColor::_scalar_deleting_destructor_
          (UNiagaraStatelessModule_ScaleColor *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_ScaleColor__6B_;
  pFVar1 = (this->ScaleDistribution).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&(this->ScaleDistribution)._padding_);
  UNiagaraStatelessModule::~UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14942ffd0

void * __thiscall
UNiagaraStatelessModule_ScaleMeshSize::_scalar_deleting_destructor_
          (UNiagaraStatelessModule_ScaleMeshSize *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_ScaleMeshSize__6B_;
  pFVar1 = (this->ScaleCurveRange).DefaultValue.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ScaleDistribution).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&(this->ScaleDistribution)._padding_);
  UNiagaraStatelessModule::~UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149430060

void * __thiscall
UNiagaraStatelessModule_ScaleMeshSizeBySpeed::_scalar_deleting_destructor_
          (UNiagaraStatelessModule_ScaleMeshSizeBySpeed *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_ScaleMeshSizeBySpeed__6B_;
  pFVar1 = (this->SampleFactorCurve).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&(this->SampleFactorCurve)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->MaxScaleFactor)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->MinScaleFactor)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->VelocityThreshold)._padding_);
  UNiagaraStatelessModule::~UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x128);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149430100

void * __thiscall
UNiagaraStatelessModule_ScaleRibbonWidth::_scalar_deleting_destructor_
          (UNiagaraStatelessModule_ScaleRibbonWidth *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_ScaleRibbonWidth__6B_;
  pFVar1 = (this->ScaleCurveRange).DefaultValue.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ScaleDistribution).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&(this->ScaleDistribution)._padding_);
  UNiagaraStatelessModule::~UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149430190

void * __thiscall
UNiagaraStatelessModule_ScaleSpriteSize::_scalar_deleting_destructor_
          (UNiagaraStatelessModule_ScaleSpriteSize *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_ScaleSpriteSize__6B_;
  pFVar1 = (this->ScaleCurveRange).DefaultValue.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ScaleDistribution).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&(this->ScaleDistribution)._padding_);
  UNiagaraStatelessModule::~UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149430220

void * __thiscall
UNiagaraStatelessModule_ScaleSpriteSizeBySpeed::_scalar_deleting_destructor_
          (UNiagaraStatelessModule_ScaleSpriteSizeBySpeed *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_ScaleSpriteSizeBySpeed__6B_;
  pFVar1 = (this->SampleFactorCurve).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&(this->SampleFactorCurve)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->MaxScaleFactor)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->MinScaleFactor)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->VelocityThreshold)._padding_);
  UNiagaraStatelessModule::~UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x118);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1494302c0

void * __thiscall
UNiagaraStatelessModule_ShapeLocation::_scalar_deleting_destructor_
          (UNiagaraStatelessModule_ShapeLocation *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_ShapeLocation__6B_;
  FInstancedStruct::Reset((FInstancedStruct *)&(this->ShapeScale)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->ShapeRotation)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->SphereRadius)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->RingUDistribution)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->DiscCoverage)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->RingRadius)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->CylinderSurfaceThickness)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->CylinderHeightMidpoint)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->CylinderRadius)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->CylinderHeight)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->PlaneEdgeThickness)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->PlaneSize)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->BoxSurfaceThickness)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->BoxSize)._padding_);
  UNiagaraStatelessModule::~UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x330);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1494303d0

void * __thiscall
UNiagaraStatelessModule_SolveVelocitiesAndForces::_scalar_deleting_destructor_
          (UNiagaraStatelessModule_SolveVelocitiesAndForces *this,uint param_1)

{
  *(undefined ***)this = &___7UNiagaraStatelessModule_SolveVelocitiesAndForces__6B_;
  UNiagaraStatelessModule::~UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149430430

void * __thiscall
UNiagaraStatelessModule_SpriteFacingAndAlignment::_scalar_deleting_destructor_
          (UNiagaraStatelessModule_SpriteFacingAndAlignment *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_SpriteFacingAndAlignment__6B_;
  FInstancedStruct::Reset((FInstancedStruct *)&(this->SpriteAlignment)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->SpriteFacing)._padding_);
  UNiagaraStatelessModule::~UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1494304b0

void * __thiscall
UNiagaraStatelessModule_SpriteRotationRate::_scalar_deleting_destructor_
          (UNiagaraStatelessModule_SpriteRotationRate *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_SpriteRotationRate__6B_;
  pFVar1 = (this->RateScaleDistribution).Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&(this->RateScaleDistribution)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->RotationRateDistribution)._padding_);
  UNiagaraStatelessModule::~UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149430540

void * __thiscall
UNiagaraStatelessModule_SubUVAnimation::_scalar_deleting_destructor_
          (UNiagaraStatelessModule_SubUVAnimation *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_SubUVAnimation__6B_;
  FInstancedStruct::Reset(&(this->FrameIndex).ParameterExpression);
  UNiagaraStatelessModule::~UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1494305b0

void * __thiscall
UNiagaraValidationRule::_scalar_deleting_destructor_(UNiagaraValidationRule *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UNiagaraValidationRule__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149430610

void * __thiscall
UNiagaraVolumeRendererProperties::_scalar_deleting_destructor_
          (UNiagaraVolumeRendererProperties *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraVolumeRendererProperties__6B_;
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
  UNiagaraRendererProperties::~UNiagaraRendererProperties((UNiagaraRendererProperties *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x208);
  }
  return this;
}

// BuildSWCStructure @ 149439cc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FNiagaraLwcStructConverter * __cdecl
BuildSWCStructure(FNiagaraLwcStructConverter *__return_storage_ptr__,UScriptStruct *param_1,
                 UScriptStruct *param_2)

{
  FStructProperty *pFVar1;
  ulonglong uVar2;
  UScriptStruct *pUVar3;
  FFieldClass *pFVar4;
  code *pcVar5;
  bool bVar6;
  ENiagaraStructConversionType EVar7;
  int iVar8;
  FNameEntryId FVar9;
  FFloatProperty *this;
  FFieldClass *pFVar10;
  FStructProperty *this_00;
  FStructProperty *pFVar11;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  undefined4 extraout_var_06;
  FNiagaraLwcStructConverter *pFVar12;
  int iVar13;
  int *piVar14;
  FName FVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  undefined1 local_res20 [8];
  FName local_c8;
  FName local_c0;
  FStructProperty *local_b8;
  FString local_b0;
  undefined1 local_a0 [4];
  undefined1 local_9c [4];
  undefined1 local_98 [4];
  undefined1 local_94 [4];
  undefined1 local_90 [4];
  undefined1 local_8c [4];
  undefined1 local_88 [8];
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  FName local_68;
  FString local_60 [2];
  
  piVar14 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar14 < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    Vector2fStruct = FNiagaraTypeDefinition::Vec2Struct;
    _Init_thread_footer(&_TSS0);
  }
  if ((*piVar14 < _TSS1) && (_Init_thread_header(&_TSS1), _TSS1 == -1)) {
    Vector3fStruct = FNiagaraTypeDefinition::Vec3Struct;
    _Init_thread_footer(&_TSS1);
  }
  if ((*piVar14 < _TSS2) && (_Init_thread_header(&_TSS2), _TSS2 == -1)) {
    Vector4fStruct = FNiagaraTypeDefinition::Vec4Struct;
    _Init_thread_footer(&_TSS2);
  }
  if ((*piVar14 < _TSS3) && (_Init_thread_header(&_TSS3), _TSS3 == -1)) {
    Quat4fStruct = FNiagaraTypeDefinition::QuatStruct;
    _Init_thread_footer(&_TSS3);
  }
  __return_storage_ptr__->LWCSize = 0;
  __return_storage_ptr__->SWCSize = 0;
  (__return_storage_ptr__->ConversionSteps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar18 = 0;
  (__return_storage_ptr__->ConversionSteps).ArrayNum = 0;
  (__return_storage_ptr__->ConversionSteps).ArrayMax = 0;
  pFVar1 = (FStructProperty *)param_2->_padding_;
  local_b8 = (FStructProperty *)0x0;
  do {
    if (pFVar1 == (FStructProperty *)0x0) {
      return __return_storage_ptr__;
    }
    this_00 = (FStructProperty *)0x0;
    if ((((FFieldClass *)pFVar1->_padding_)->CastFlags & CASTCLASS_FDoubleProperty) ==
        CASTCLASS_None) {
      if ((pFVar1 != (FStructProperty *)0x0) &&
         (((uint)(int)((FFieldClass *)pFVar1->_padding_)->CastFlags >> 0x14 & 1) != 0)) {
        pFVar11 = FMemory::Malloc(0x78,0);
        if (pFVar11 != (FStructProperty *)0x0) {
          pFVar10 = FStructProperty::StaticClass();
          FField::FField((FField *)pFVar11,EC_InternalUseOnlyConstructor,pFVar10);
          pFVar11->_padding_ = (longlong)&___7FStructProperty__6B_;
          pFVar11->_padding_ = 0;
          pFVar11->_padding_ = 0;
          pFVar11->_padding_ = 0;
          pFVar11->_padding_ = 0;
          pFVar11->_padding_ = 0;
          (pFVar11->Struct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
          bVar6 = IsThisNotNull(pFVar1,"FField::GetFName");
          if (bVar6) {
            local_c0 = *(FName *)&pFVar1->_padding_;
          }
          else {
            local_c0.ComparisonIndex.Value = 0;
            local_c0.Number = 0;
          }
          local_78 = (ulonglong)param_1 | 1;
          if (((UObject *)((ulonglong)param_1 & 0xfffffffffffffffe) != (UObject *)0x0) &&
             (UE::GC::GIsIncrementalReachabilityPending != false)) {
            UE::GC::MarkAsReachable((UObject *)((ulonglong)param_1 & 0xfffffffffffffffe));
          }
          this_00 = FStructProperty::FStructProperty
                              (pFVar11,(FFieldVariant)&local_78,&local_c0,RF_Public);
        }
        iVar8 = (int)pFVar1->_padding_;
        iVar16 = *(int *)((longlong)&pFVar1->_padding_ + 4);
        iVar17 = *(int *)((longlong)&pFVar1->_padding_ + 4);
        uVar2 = ((pFVar1->Struct).field0_0x0.DebugPtr)->_padding_;
        FVar9 = FNameEntryId::FromValidEName((EName)local_res20);
        if ((uVar2 == *(uint *)CONCAT44(extraout_var,FVar9.Value)) ||
           (FVar9 = FNameEntryId::FromValidEName((EName)local_a0),
           uVar2 == *(uint *)CONCAT44(extraout_var_00,FVar9.Value))) {
          pUVar3 = Vector2fStruct;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (Vector2fStruct != (UScriptStruct *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)Vector2fStruct);
          }
          (this_00->Struct).field0_0x0.DebugPtr = pUVar3;
          iVar13 = (int)*(short *)((longlong)&Vector2fStruct->_padding_ + 4);
          FProperty::SetElementSize
                    ((FProperty *)this_00,(int)Vector2fStruct->_padding_ + -1 + iVar13 & -iVar13);
          iVar13 = (int)*(short *)((longlong)&Vector2fStruct->_padding_ + 4);
          EVar7 = Vector2;
        }
        else {
          FVar9 = FNameEntryId::FromValidEName((EName)local_9c);
          if ((uVar2 == *(uint *)CONCAT44(extraout_var_01,FVar9.Value)) ||
             (FVar9 = FNameEntryId::FromValidEName((EName)local_98),
             uVar2 == *(uint *)CONCAT44(extraout_var_02,FVar9.Value))) {
            pUVar3 = Vector3fStruct;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (Vector3fStruct != (UScriptStruct *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)Vector3fStruct);
            }
            (this_00->Struct).field0_0x0.DebugPtr = pUVar3;
            iVar13 = (int)*(short *)((longlong)&Vector3fStruct->_padding_ + 4);
            FProperty::SetElementSize
                      ((FProperty *)this_00,(int)Vector3fStruct->_padding_ + -1 + iVar13 & -iVar13);
            iVar13 = (int)*(short *)((longlong)&Vector3fStruct->_padding_ + 4);
            EVar7 = Vector3;
          }
          else {
            FVar9 = FNameEntryId::FromValidEName((EName)local_94);
            if ((uVar2 == *(uint *)CONCAT44(extraout_var_03,FVar9.Value)) ||
               (FVar9 = FNameEntryId::FromValidEName((EName)local_90),
               uVar2 == *(uint *)CONCAT44(extraout_var_04,FVar9.Value))) {
              pUVar3 = Vector4fStruct;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (Vector4fStruct != (UScriptStruct *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)Vector4fStruct);
              }
              (this_00->Struct).field0_0x0.DebugPtr = pUVar3;
              iVar13 = (int)*(short *)((longlong)&Vector4fStruct->_padding_ + 4);
              FProperty::SetElementSize
                        ((FProperty *)this_00,(int)Vector4fStruct->_padding_ + -1 + iVar13 & -iVar13
                        );
              iVar13 = (int)*(short *)((longlong)&Vector4fStruct->_padding_ + 4);
              EVar7 = Vector4;
            }
            else {
              FVar9 = FNameEntryId::FromValidEName((EName)local_8c);
              if ((uVar2 != *(uint *)CONCAT44(extraout_var_05,FVar9.Value)) &&
                 (FVar9 = FNameEntryId::FromValidEName((EName)local_88),
                 uVar2 != *(uint *)CONCAT44(extraout_var_06,FVar9.Value))) {
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (pUVar3 = (pFVar1->Struct).field0_0x0.DebugPtr, pUVar3 != (UScriptStruct *)0x0))
                {
                  UE::GC::MarkAsReachable((UObject *)pUVar3);
                }
                (this_00->Struct).field0_0x0 = (pFVar1->Struct).field0_0x0;
                pUVar3 = (pFVar1->Struct).field0_0x0.DebugPtr;
                iVar13 = (int)*(short *)((longlong)&pUVar3->_padding_ + 4);
                FProperty::SetElementSize
                          ((FProperty *)this_00,(int)pUVar3->_padding_ + -1 + iVar13 & -iVar13);
                iVar13 = (int)*(short *)((longlong)
                                         &((pFVar1->Struct).field0_0x0.DebugPtr)->_padding_ + 4);
                EVar7 = CopyOnly;
                uVar18 = (uVar18 - 1) + iVar13 & -iVar13;
                iVar16 = iVar16 * iVar8;
                iVar8 = *(int *)((longlong)&this_00->_padding_ + 4) * (int)this_00->_padding_;
                goto LAB_14943a50d;
              }
              pUVar3 = Quat4fStruct;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (Quat4fStruct != (UScriptStruct *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)Quat4fStruct);
              }
              (this_00->Struct).field0_0x0.DebugPtr = pUVar3;
              iVar13 = (int)*(short *)((longlong)&Quat4fStruct->_padding_ + 4);
              FProperty::SetElementSize
                        ((FProperty *)this_00,(int)Quat4fStruct->_padding_ + -1 + iVar13 & -iVar13);
              iVar13 = (int)*(short *)((longlong)&Quat4fStruct->_padding_ + 4);
              EVar7 = Quat;
            }
          }
        }
        uVar18 = (uVar18 - 1) + iVar13 & -iVar13;
        iVar16 = iVar16 * iVar8;
        iVar8 = *(int *)((longlong)&this_00->_padding_ + 4) * (int)this_00->_padding_;
        goto LAB_14943a50d;
      }
      pFVar10 = FFloatProperty::StaticClass();
      if ((pFVar10 == (FFieldClass *)0x0) &&
         (bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("FieldType",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                             ,0x2dd,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar12 = (FNiagaraLwcStructConverter *)(*pcVar5)();
        return pFVar12;
      }
      pFVar4 = (FFieldClass *)pFVar1->_padding_;
      if (pFVar10->Id == CASTCLASS_None) {
        for (; pFVar4 != (FFieldClass *)0x0; pFVar4 = pFVar4->SuperClass) {
          if (pFVar4 == pFVar10) {
            bVar6 = true;
            goto LAB_14943a221;
          }
        }
        bVar6 = false;
      }
      else {
        bVar6 = (pFVar4->CastFlags & pFVar10->Id) != CASTCLASS_None;
      }
LAB_14943a221:
      if (bVar6) {
LAB_14943a458:
        pFVar11 = this_00;
        if (((uint)(int)((FFieldClass *)pFVar1->_padding_)->CastFlags >> 0xf & 1) != 0) {
          pFVar11 = pFVar1;
        }
        bVar6 = IsThisNotNull(pFVar1,"FField::GetFName");
        if (bVar6) {
          FVar15 = *(FName *)&pFVar1->_padding_;
        }
        else {
          FVar15.ComparisonIndex.Value = 0;
          FVar15.Number = 0;
        }
        local_70 = (ulonglong)param_1 | 1;
        if (((UObject *)((ulonglong)param_1 & 0xfffffffffffffffe) != (UObject *)0x0) &&
           (UE::GC::GIsIncrementalReachabilityPending != false)) {
          UE::GC::MarkAsReachable((UObject *)((ulonglong)param_1 & 0xfffffffffffffffe));
        }
        this_00 = (FStructProperty *)
                  FField::Duplicate((FField *)pFVar1,(FFieldVariant)&local_70,FVar15,
                                    RF_AllocatedInSharedPage|RF_MirroredGarbage|RF_MigratingAsset|
                                    RF_HasExternalPackage|RF_WillBeLoaded|RF_ImmutableDefaultObject|
                                    RF_NonPIEDuplicateTransient|RF_StrongRefOnFrame|
                                    RF_DuplicateTransient|RF_InheritableComponentTemplate|
                                    RF_LoadCompleted|RF_TextExportTransient|RF_WasLoaded|
                                    RF_DefaultSubObject|RF_BeingRegenerated|RF_FinishDestroyed|
                                    RF_BeginDestroyed|RF_NewerVersionExists|
                                    RF_NeedPostLoadSubobjects|RF_NeedPostLoad|RF_KeepForCooker|
                                    RF_NeedLoad|RF_NeedInitialization|RF_TagGarbageTemp|
                                    RF_MarkAsRootSet|RF_Transient|RF_ArchetypeObject|
                                    RF_ClassDefaultObject|RF_Transactional|RF_MarkAsNative|
                                    RF_Standalone|RF_Public,
                                    PendingConstruction|RootSet|Unreachable|AsyncLoadingPhase2|Async
                                    |Native|ClusterRoot|ReachableInCluster|AsyncLoadingPhase1|
                                    Garbage|LoaderImport|AutoRTFMConstructionAborted|
                                    ReachabilityFlag2|ReachabilityFlag1|ReachabilityFlag0);
        if ((this_00 == (FStructProperty *)0x0) ||
           ((*(uint *)(this_00->_padding_ + 0x18) >> 0xf & 1) == 0)) {
          this_00 = (FStructProperty *)0x0;
        }
        iVar8 = (**(code **)(pFVar11->_padding_ + 0x168))(pFVar11);
        iVar16 = *(int *)((longlong)&this_00->_padding_ + 4) * (int)this_00->_padding_;
        iVar17 = *(int *)((longlong)&pFVar11->_padding_ + 4);
        uVar18 = (uVar18 - 1) + iVar8 & -iVar8;
        EVar7 = CopyOnly;
        iVar8 = iVar16;
        goto LAB_14943a50d;
      }
      pFVar10 = FIntProperty::StaticClass();
      if ((pFVar10 == (FFieldClass *)0x0) &&
         (bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("FieldType",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                             ,0x2dd,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar12 = (FNiagaraLwcStructConverter *)(*pcVar5)();
        return pFVar12;
      }
      pFVar4 = (FFieldClass *)pFVar1->_padding_;
      if (pFVar10->Id == CASTCLASS_None) {
        for (; pFVar4 != (FFieldClass *)0x0; pFVar4 = pFVar4->SuperClass) {
          if (pFVar4 == pFVar10) {
            bVar6 = true;
            goto LAB_14943a290;
          }
        }
        bVar6 = false;
      }
      else {
        bVar6 = (pFVar4->CastFlags & pFVar10->Id) != CASTCLASS_None;
      }
LAB_14943a290:
      if (bVar6) goto LAB_14943a458;
      pFVar10 = FUInt32Property::StaticClass();
      if ((pFVar10 == (FFieldClass *)0x0) &&
         (bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("FieldType",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                             ,0x2dd,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar12 = (FNiagaraLwcStructConverter *)(*pcVar5)();
        return pFVar12;
      }
      pFVar4 = (FFieldClass *)pFVar1->_padding_;
      if (pFVar10->Id == CASTCLASS_None) {
        for (; pFVar4 != (FFieldClass *)0x0; pFVar4 = pFVar4->SuperClass) {
          if (pFVar4 == pFVar10) {
            bVar6 = true;
            goto LAB_14943a300;
          }
        }
        bVar6 = false;
      }
      else {
        bVar6 = (pFVar4->CastFlags & pFVar10->Id) != CASTCLASS_None;
      }
LAB_14943a300:
      if (bVar6) goto LAB_14943a458;
      pFVar10 = FEnumProperty::StaticClass();
      if ((pFVar10 == (FFieldClass *)0x0) &&
         (bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("FieldType",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                             ,0x2dd,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar12 = (FNiagaraLwcStructConverter *)(*pcVar5)();
        return pFVar12;
      }
      pFVar4 = (FFieldClass *)pFVar1->_padding_;
      if (pFVar10->Id == CASTCLASS_None) {
        for (; pFVar4 != (FFieldClass *)0x0; pFVar4 = pFVar4->SuperClass) {
          if (pFVar4 == pFVar10) {
            bVar6 = true;
            goto LAB_14943a370;
          }
        }
        bVar6 = false;
      }
      else {
        bVar6 = (pFVar4->CastFlags & pFVar10->Id) != CASTCLASS_None;
      }
LAB_14943a370:
      if (bVar6) goto LAB_14943a458;
      pFVar10 = FByteProperty::StaticClass();
      if ((pFVar10 == (FFieldClass *)0x0) &&
         (bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("FieldType",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                             ,0x2dd,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar12 = (FNiagaraLwcStructConverter *)(*pcVar5)();
        return pFVar12;
      }
      pFVar4 = (FFieldClass *)pFVar1->_padding_;
      if (pFVar10->Id == CASTCLASS_None) {
        for (; pFVar4 != (FFieldClass *)0x0; pFVar4 = pFVar4->SuperClass) {
          if (pFVar4 == pFVar10) {
            bVar6 = true;
            goto LAB_14943a3e0;
          }
        }
        bVar6 = false;
      }
      else {
        bVar6 = (pFVar4->CastFlags & pFVar10->Id) != CASTCLASS_None;
      }
LAB_14943a3e0:
      if (bVar6) goto LAB_14943a458;
      pFVar10 = FBoolProperty::StaticClass();
      if ((pFVar10 == (FFieldClass *)0x0) &&
         (bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("FieldType",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                             ,0x2dd,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar12 = (FNiagaraLwcStructConverter *)(*pcVar5)();
        return pFVar12;
      }
      pFVar4 = (FFieldClass *)pFVar1->_padding_;
      if (pFVar10->Id == CASTCLASS_None) {
        for (; pFVar4 != (FFieldClass *)0x0; pFVar4 = pFVar4->SuperClass) {
          if (pFVar4 == pFVar10) {
            bVar6 = true;
            goto LAB_14943a450;
          }
        }
        bVar6 = false;
      }
      else {
        bVar6 = (pFVar4->CastFlags & pFVar10->Id) != CASTCLASS_None;
      }
LAB_14943a450:
      if (bVar6) goto LAB_14943a458;
LAB_14943a52f:
      bVar6 = IsThisNotNull(pFVar1,"FField::GetName");
      if (bVar6) {
        FName::ToString((FName *)&pFVar1->_padding_,&local_b0);
      }
      else {
        FString::FString(&local_b0,L"None");
      }
      local_68 = (FName)param_2->_padding_;
      FName::ToString(&local_68,local_60);
      UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogNiagara);
      if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
      }
      if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
    }
    else {
      iVar8 = (**(code **)(pFVar1->_padding_ + 0x168))(pFVar1);
      uVar18 = (uVar18 - 1) + iVar8 & -iVar8;
      this = FMemory::Malloc(0x70,0);
      if (this != (FFloatProperty *)0x0) {
        pFVar10 = FFloatProperty::StaticClass();
        FField::FField((FField *)this,EC_InternalUseOnlyConstructor,pFVar10);
        *(undefined ***)this = &___7FFloatProperty__6B_;
        *(undefined8 *)&this->field_0x48 = 0;
        *(undefined8 *)&this->field_0x50 = 0;
        *(undefined8 *)&this->field_0x58 = 0;
        *(undefined8 *)&this->field_0x60 = 0;
        *(undefined8 *)&this->field_0x68 = 0;
        bVar6 = IsThisNotNull(pFVar1,"FField::GetFName");
        if (bVar6) {
          local_c8 = *(FName *)&pFVar1->_padding_;
        }
        else {
          local_c8.ComparisonIndex.Value = 0;
          local_c8.Number = 0;
        }
        local_80 = (ulonglong)param_1 | 1;
        if (((UObject *)((ulonglong)param_1 & 0xfffffffffffffffe) != (UObject *)0x0) &&
           (UE::GC::GIsIncrementalReachabilityPending != false)) {
          UE::GC::MarkAsReachable((UObject *)((ulonglong)param_1 & 0xfffffffffffffffe));
        }
        this_00 = (FStructProperty *)
                  FFloatProperty::FFloatProperty(this,(FFieldVariant)&local_80,&local_c8,RF_Public);
      }
      EVar7 = DoubleToFloat;
      iVar16 = *(int *)((longlong)&pFVar1->_padding_ + 4) * (int)pFVar1->_padding_;
      iVar17 = *(int *)((longlong)&pFVar1->_padding_ + 4);
      iVar8 = *(int *)((longlong)&this_00->_padding_ + 4) * (int)this_00->_padding_;
LAB_14943a50d:
      FNiagaraLwcStructConverter::AddConversionStep
                (__return_storage_ptr__,iVar16,iVar17,iVar8,uVar18,EVar7);
      if (this_00 == (FStructProperty *)0x0) goto LAB_14943a52f;
    }
    if (local_b8 == (FStructProperty *)0x0) {
      param_1->_padding_ = (longlong)this_00;
      param_1->_padding_ = (longlong)this_00;
    }
    else {
      local_b8->_padding_ = (longlong)this_00;
      local_b8->_padding_ = (longlong)this_00;
    }
    pFVar1 = (FStructProperty *)pFVar1->_padding_;
    uVar18 = uVar18 + *(int *)((longlong)&this_00->_padding_ + 4) * (int)this_00->_padding_;
    local_b8 = this_00;
  } while( true );
}

// CalculateCylinderThicknessParameters @ 14943cb40

TTuple<float,float> __cdecl
NSMShapeLocationPrivate::CalculateCylinderThicknessParameters
          (ENSM_SurfaceExpansionMode param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  TTuple<float,float> TVar3;
  undefined7 in_register_00000009;
  char in_DL;
  float in_XMM2_Da;
  
  TVar3._1_7_ = in_register_00000009;
  TVar3._0_1_ = param_1;
  if (in_DL == '\0') {
    *(float *)TVar3 = in_XMM2_Da;
    *(uint *)((longlong)TVar3 + 4) = (uint)in_XMM2_Da ^ __xmm_80000000800000008000000080000000;
    return TVar3;
  }
  if (in_DL == '\x01') {
    *(float *)TVar3 = in_XMM2_Da;
    *(float *)((longlong)TVar3 + 4) = in_XMM2_Da * __real_bf000000;
    return TVar3;
  }
  if (in_DL == '\x02') {
    *(float *)TVar3 = in_XMM2_Da;
    *(undefined4 *)((longlong)TVar3 + 4) = 0;
    return TVar3;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\Stateless\\Modules\\NiagaraStatelessModule_ShapeLocation.cpp"
                     ,0x54,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    TVar3 = (TTuple<float,float>)(*pcVar1)();
    return TVar3;
  }
  *(undefined8 *)TVar3 = 0;
  return TVar3;
}

// CalculateThicknessParameters @ 14943db10

TTuple<float,float> __cdecl
NSMShapeLocationPrivate::CalculateThicknessParameters
          (ENSM_SurfaceExpansionMode param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  TTuple<float,float> TVar3;
  undefined7 in_register_00000009;
  char in_DL;
  float fVar4;
  float in_XMM2_Da;
  
  TVar3._1_7_ = in_register_00000009;
  TVar3._0_1_ = param_1;
  fVar4 = in_XMM2_Da * __real_3f000000;
  if (in_DL == '\0') {
    fVar4 = (float)((uint)fVar4 ^ __xmm_80000000800000008000000080000000);
  }
  else {
    if (in_DL == '\x01') {
      *(undefined4 *)TVar3 = 0;
      *(float *)((longlong)TVar3 + 4) = in_XMM2_Da;
      return TVar3;
    }
    if (in_DL != '\x02') {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\Stateless\\Modules\\NiagaraStatelessModule_ShapeLocation.cpp"
                         ,0x47,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar3 = (TTuple<float,float>)(*pcVar1)();
        return TVar3;
      }
      *(undefined8 *)TVar3 = 0;
      return TVar3;
    }
  }
  *(float *)TVar3 = fVar4;
  *(float *)((longlong)TVar3 + 4) = in_XMM2_Da;
  return TVar3;
}

// ConvertParticleVariableToStateless @ 14943e500

FNiagaraVariableBase * __cdecl
NiagaraStatelessCommon::ConvertParticleVariableToStateless
          (FNiagaraVariableBase *__return_storage_ptr__,FNiagaraVariableBase *param_1)

{
  TStringView<wchar_t> local_18;
  
  __return_storage_ptr__->Name = param_1->Name;
  (__return_storage_ptr__->TypeDefHandle).RegisteredTypeIndex =
       (param_1->TypeDefHandle).RegisteredTypeIndex;
  local_18.DataPtr =
       (wchar_t *)FNiagaraConstants::ParticleAttributeNamespaceString.Data.AllocatorInstance.Data;
  local_18.Size = FNiagaraConstants::ParticleAttributeNamespaceString.Data.ArrayNum + -1;
  if (FNiagaraConstants::ParticleAttributeNamespaceString.Data.ArrayNum == 0) {
    local_18.Size = 0;
  }
  FNiagaraVariableBase::RemoveRootNamespace(__return_storage_ptr__,&local_18);
  return __return_storage_ptr__;
}

// DetermineComputeExecutionPath @ 149440970

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EComputeExecutionPath __cdecl
NiagaraStatelessComputeManagerPrivate::DetermineComputeExecutionPath
          (FNiagaraStatelessEmitterData *param_1,uint param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  EComputeExecutionPath EVar3;
  TShaderRefBase<NiagaraStateless::FSimulationShader,FShaderMapPointerTable> *pTVar4;
  TShaderRefBase<NiagaraStateless::FSimulationShader,FShaderMapPointerTable> local_18;
  
  if (((param_1->FeatureMask & ExecuteGPU) == None) || (!param_3)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((param_1->FeatureMask & ExecuteCPU) == None) {
    if (!bVar2) {
      return None;
    }
  }
  else if ((!bVar2) || (param_2 <= (uint)GParticleCountCPUThreshold)) {
    return CPU;
  }
  pTVar4 = FNiagaraStatelessEmitterData::GetShader(param_1,&local_18);
  if (pTVar4->ShaderContent == (FSimulationShader *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("EmitterData->GetShader().IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\Stateless\\NiagaraStatelessComputeManager.cpp"
                       ,0x42,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  return GPU;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraStatelessCommon @ 1494418f0

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraStatelessCommon(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraStatelessDistribution @ 149441900

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraStatelessDistribution(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraStatelessEmitter @ 149441910

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraStatelessEmitter(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraStatelessExpressionColor @ 149441920

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraStatelessExpressionColor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraStatelessExpressionFloat @ 149441930

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraStatelessExpressionFloat(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraStatelessExpressionVec2 @ 149441940

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraStatelessExpressionVec2(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraStatelessExpressionVec3 @ 149441950

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraStatelessExpressionVec3(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraStatelessExpressionVec4 @ 149441960

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraStatelessExpressionVec4(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_AccelerationForce @ 149441970

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_AccelerationForce(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_AddVelocity @ 149441980

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_AddVelocity(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_CalculateAccurateVelocity @ 149441990

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_CalculateAccurateVelocity(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_CameraOffset @ 1494419a0

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_CameraOffset(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_CurlNoiseForce @ 1494419b0

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_CurlNoiseForce(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_DecalAttributes @ 1494419c0

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_DecalAttributes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_Drag @ 1494419d0

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_Drag(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_DynamicMaterialParameters @ 1494419e0

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_DynamicMaterialParameters(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_GravityForce @ 1494419f0

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_GravityForce(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_InitialMeshOrientation @ 149441a00

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_InitialMeshOrientation(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_InitializeParticle @ 149441a10

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_InitializeParticle(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_LightAttributes @ 149441a20

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_LightAttributes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_MeshIndex @ 149441a30

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_MeshIndex(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_MeshRotationRate @ 149441a40

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_MeshRotationRate(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_RotateAroundPoint @ 149441a50

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_RotateAroundPoint(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_ScaleColor @ 149441a60

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_ScaleColor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_ScaleMeshSize @ 149441a70

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_ScaleMeshSize(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_ScaleMeshSizeBySpeed @ 149441a80

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_ScaleMeshSizeBySpeed(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_ScaleRibbonWidth @ 149441a90

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_ScaleRibbonWidth(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_ScaleSpriteSize @ 149441aa0

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_ScaleSpriteSize(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_ScaleSpriteSizeBySpeed @ 149441ab0

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_ScaleSpriteSizeBySpeed(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_ShapeLocation @ 149441ac0

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_ShapeLocation(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_SolveVelocitiesAndForces @ 149441ad0

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_SolveVelocitiesAndForces(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_SpriteFacingAndAlignment @ 149441ae0

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_SpriteFacingAndAlignment(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_SpriteRotationRate @ 149441af0

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_SpriteRotationRate(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_SubUVAnimation @ 149441b00

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraStatelessModule_SubUVAnimation(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraTypes @ 149441b10

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraTypes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraUserRedirectionParameterStore @ 149441b20

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraUserRedirectionParameterStore(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraValidationRule @ 149441b30

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraValidationRule(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraVariableMetaData @ 149441b40

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraVariableMetaData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraVariant @ 149441b50

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraVariant(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraVolumeRendererProperties @ 149441b60

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraVolumeRendererProperties(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraWorldManager @ 149441b70

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraWorldManager(void)

{
  return;
}

// EvaluateNoise @ 149442f90

void __cdecl
NiagaraStatelessModuleSolveVelocitiesAndForcesPrivate::EvaluateNoise
          (TArrayView<UE::Math::TVector<float>_const_,int> *param_1,
          FSolveVelocitiesAndForcesModule_ShaderParameters *param_2,float param_3,float param_4,
          TVector<float> *param_5)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  TVector<float> *pTVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fStack_e4;
  
  fVar21 = __real_3f800000;
  fVar22 = param_2->SolveVelocitiesAndForces_NoiseFrequency;
  uVar1 = param_2->SolveVelocitiesAndForces_NoiseLUTRowWidth - 1;
  fVar23 = param_3 * param_2->SolveVelocitiesAndForces_NoiseStrength;
  fVar19 = fVar23 * param_2->SolveVelocitiesAndForces_NoiseLUTNormalize;
  fVar22 = (float)((uint)(fVar22 * (param_5->field0_0x0)._s_0.X) &
                  __xmm_7fffffff7fffffff7fffffff7fffffff) * __real_3e000000 +
           (float)((uint)(fVar22 * (param_5->field0_0x0)._s_0.Y) &
                  __xmm_7fffffff7fffffff7fffffff7fffffff) * __real_3e800000 +
           (float)((uint)(fVar22 * (param_5->field0_0x0)._s_0.Z) &
                  __xmm_7fffffff7fffffff7fffffff7fffffff) * __real_3f200000;
  uVar11 = (int)ROUND((fVar22 + fVar22) - __real_3f000000) >> 1 &
           param_2->SolveVelocitiesAndForces_NoiseLUTRowMask;
  uVar12 = uVar11 + 1 & param_2->SolveVelocitiesAndForces_NoiseLUTRowMask;
  if ((float)uVar1 <= fVar19) {
    fVar19 = (float)uVar1;
  }
  if (fVar19 <= __real_3f800000) {
    fVar19 = __real_3f800000;
  }
  fVar20 = fVar19 * param_4;
  uVar8 = (int)ROUND((fVar20 + fVar20) - __real_3f000000) >> 1;
  uVar10 = uVar1;
  if (uVar8 < uVar1) {
    uVar10 = uVar8;
  }
  if (uVar10 + 1 < uVar1) {
    uVar1 = uVar10 + 1;
  }
  pTVar9 = TArrayView<UE::Math::TVector<float>_const_,int>::operator[]
                     (param_1,uVar11 * param_2->SolveVelocitiesAndForces_NoiseLUTRowWidth + uVar10);
  uVar2 = *(undefined8 *)&pTVar9->field0_0x0;
  fVar17 = (float)uVar2;
  fVar15 = (pTVar9->field0_0x0)._s_0.Z;
  pTVar9 = TArrayView<UE::Math::TVector<float>_const_,int>::operator[]
                     (param_1,uVar12 * param_2->SolveVelocitiesAndForces_NoiseLUTRowWidth + uVar10);
  uVar3 = *(undefined8 *)&pTVar9->field0_0x0;
  fVar14 = (pTVar9->field0_0x0)._s_0.Z;
  pTVar9 = TArrayView<UE::Math::TVector<float>_const_,int>::operator[]
                     (param_1,uVar1 + uVar11 * param_2->SolveVelocitiesAndForces_NoiseLUTRowWidth);
  uVar4 = *(undefined8 *)&pTVar9->field0_0x0;
  fVar18 = (float)uVar4;
  fVar6 = (pTVar9->field0_0x0)._s_0.Z;
  pTVar9 = TArrayView<UE::Math::TVector<float>_const_,int>::operator[]
                     (param_1,uVar1 + uVar12 * param_2->SolveVelocitiesAndForces_NoiseLUTRowWidth);
  uVar5 = *(undefined8 *)&pTVar9->field0_0x0;
  fVar7 = (pTVar9->field0_0x0)._s_0.Z;
  fVar13 = (float)truncf();
  fVar13 = fVar22 - fVar13;
  fVar17 = ((float)uVar3 - fVar17) * fVar13 + fVar17;
  fStack_e4 = (float)((ulonglong)uVar2 >> 0x20);
  fVar16 = ((float)((ulonglong)uVar3 >> 0x20) - fStack_e4) * fVar13 + fStack_e4;
  fVar15 = (fVar14 - fVar15) * fVar13 + fVar15;
  fVar14 = (float)truncf();
  fVar22 = fVar22 - fVar14;
  fVar14 = (float)truncf();
  fVar20 = fVar20 - fVar14;
  fVar21 = fVar21 / fVar19;
  fStack_e4 = (float)((ulonglong)uVar4 >> 0x20);
  (param_5->field0_0x0)._s_0.Y =
       (((((float)((ulonglong)uVar5 >> 0x20) - fStack_e4) * fVar22 + fStack_e4) - fVar16) * fVar20 +
       fVar16) * fVar23 * fVar21 + (param_5->field0_0x0)._s_0.Y;
  (param_5->field0_0x0)._s_0.X =
       (((((float)uVar5 - fVar18) * fVar22 + fVar18) - fVar17) * fVar20 + fVar17) * fVar23 * fVar21
       + (param_5->field0_0x0)._s_0.X;
  (param_5->field0_0x0)._s_0.Z =
       ((((fVar7 - fVar6) * fVar22 + fVar6) - fVar15) * fVar20 + fVar15) * fVar23 * fVar21 +
       (param_5->field0_0x0)._s_0.Z;
  return;
}

// ExecuteGlobalDeferredCallbacks @ 149443b20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl NiagaraWorldManagerInternal::ExecuteGlobalDeferredCallbacks(void)

{
  TNode *pTVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 uVar8;
  TNode *pTVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_98 [32];
  code *local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_78 = (code *)0x0;
  plStack_50 = (longlong *)0x0;
  while (plVar13 = plStack_50, uVar6 = local_58, uVar11 = uStack_60, lVar10 = local_68,
        pTVar1 = (GlobalDeferredCallbacks.Tail)->NextNode, pTVar1 != (TNode *)0x0) {
    pcVar7 = *(code **)&pTVar1->Item;
    uVar8 = *(undefined8 *)&(pTVar1->Item).field_0x8;
    local_68 = *(longlong *)&(pTVar1->Item).field_0x10;
    uStack_60 = *(undefined8 *)&(pTVar1->Item).field_0x18;
    local_58 = *(undefined8 *)&(pTVar1->Item).field_0x20;
    plStack_50 = *(longlong **)&(pTVar1->Item).field_0x28;
    *(code **)&pTVar1->Item = local_78;
    *(undefined8 *)&(pTVar1->Item).field_0x8 = uStack_70;
    *(longlong *)&(pTVar1->Item).field_0x10 = lVar10;
    *(undefined8 *)&(pTVar1->Item).field_0x18 = uVar11;
    *(undefined8 *)&(pTVar1->Item).field_0x20 = uVar6;
    *(longlong **)&(pTVar1->Item).field_0x28 = plVar13;
    pTVar9 = GlobalDeferredCallbacks.Tail;
    local_48 = *(longlong *)&pTVar1->Item;
    uVar6 = *(undefined8 *)&(pTVar1->Item).field_0x8;
    uVar2 = *(undefined4 *)&(pTVar1->Item).field_0x10;
    uVar3 = *(undefined4 *)&(pTVar1->Item).field_0x14;
    uVar4 = *(undefined4 *)&(pTVar1->Item).field_0x18;
    uVar5 = *(undefined4 *)&(pTVar1->Item).field_0x1c;
    uVar11 = *(undefined8 *)&(pTVar1->Item).field_0x20;
    plStack_20 = *(longlong **)&(pTVar1->Item).field_0x28;
    GlobalDeferredCallbacks.Tail = pTVar1;
    *(undefined8 *)&pTVar1->Item = 0;
    *(undefined8 *)&(pTVar1->Item).field_0x8 = uStack_40;
    *(undefined4 *)&(pTVar1->Item).field_0x10 = local_38;
    *(undefined4 *)&(pTVar1->Item).field_0x14 = uStack_34;
    *(undefined4 *)&(pTVar1->Item).field_0x18 = uStack_30;
    *(undefined4 *)&(pTVar1->Item).field_0x1c = uStack_2c;
    *(undefined4 *)&(pTVar1->Item).field_0x20 = (undefined4)local_28;
    *(undefined4 *)&(pTVar1->Item).field_0x24 = local_28._4_4_;
    *(undefined4 *)&(pTVar1->Item).field_0x28 = 0;
    *(undefined4 *)&(pTVar1->Item).field_0x2c = 0;
    uStack_40 = uVar6;
    local_38 = uVar2;
    uStack_34 = uVar3;
    uStack_30 = uVar4;
    uStack_2c = uVar5;
    local_28 = uVar11;
    local_78 = pcVar7;
    uStack_70 = uVar8;
    if (local_48 != 0) {
      plVar13 = (longlong *)&local_38;
      if (plStack_20 != (longlong *)0x0) {
        plVar13 = plStack_20;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    if (pTVar9 != (TNode *)0x0) {
      if (*(longlong *)&pTVar9->Item != 0) {
        plVar13 = *(longlong **)&(pTVar9->Item).field_0x28;
        plVar12 = (longlong *)&(pTVar9->Item).field_0x10;
        if (plVar13 != (longlong *)0x0) {
          plVar12 = plVar13;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
      ::operator_delete(pTVar9,0x40);
    }
    UE::Core::Private::Function::CheckCallable(local_78);
    pcVar7 = local_78;
    plVar13 = &local_68;
    if (plStack_50 != (longlong *)0x0) {
      plVar13 = plStack_50;
    }
    uVar11 = (**(code **)(*plVar13 + 8))();
    (*pcVar7)(uVar11);
  }
  if (local_78 != (code *)0x0) {
    plVar13 = &local_68;
    if (plStack_50 != (longlong *)0x0) {
      plVar13 = plStack_50;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  return;
}

// GenerateCPUDataForCPUSim @ 149445b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
NiagaraStatelessComputeManagerPrivate::GenerateCPUDataForCPUSim
          (FEmitterInstance_RT *param_1,FNiagaraDataBuffer *param_2)

{
  int iVar1;
  FNiagaraStatelessEmitterData *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_NiagaraStateless_CPUSimulate> FVar8;
  FThreadStats *pFVar9;
  FThreadStatsPool *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_NiagaraStateless_CPUParticleCount> FVar11;
  uchar auVar12 [8];
  undefined1 auStackY_268 [32];
  FName local_208;
  FName local_200;
  FStatMessage local_1f8;
  FStatMessage local_1e8;
  FScriptContainerElement *local_1d8;
  int iStack_1d0;
  undefined4 uStack_1cc;
  FNiagaraStatelessRuntimeSpawnInfo *local_1c8;
  int iStack_1c0;
  undefined4 uStack_1bc;
  FName local_1b8;
  FName local_1b0;
  TArrayView<unsigned_char_const_,int> local_1a8;
  TArrayView<FNiagaraStatelessRuntimeSpawnInfo_const_,int> local_198;
  FParticleSimulationContext local_188;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_268;
  local_1d8 = (param_1->BindingBufferData).AllocatorInstance.Data;
  iVar1 = (param_1->BindingBufferData).ArrayNum;
  pFVar2 = (param_1->EmitterData).Object;
  if (iVar1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  local_1a8._12_4_ = uStack_1cc;
  local_1a8.ArrayNum = iVar1;
  local_1a8.DataPtr = (uchar *)local_1d8;
  iStack_1d0 = iVar1;
  NiagaraStateless::FParticleSimulationContext::FParticleSimulationContext
            (&local_188,pFVar2,(param_1->ShaderParameters).Ptr,&local_1a8);
  local_1c8 = (FNiagaraStatelessRuntimeSpawnInfo *)(param_1->SpawnInfos).AllocatorInstance.Data;
  iStack_1c0 = (param_1->SpawnInfos).ArrayNum;
  if (iStack_1c0 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  local_198._12_4_ = uStack_1bc;
  local_198.ArrayNum = iStack_1c0;
  local_198.DataPtr = local_1c8;
  NiagaraStateless::FParticleSimulationContext::Simulate
            (&local_188,param_1->RandomSeed,param_1->Age,param_1->DeltaTime,&local_198,param_2);
  if (FThreadStats::bPrimaryEnable != false) {
    FVar8 = StatPtr_STAT_NiagaraStateless_CPUSimulate;
    if (StatPtr_STAT_NiagaraStateless_CPUSimulate ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraStateless_CPUSimulate>)0x0) {
      pFVar7 = ::FName::FName(&local_1b8,"STAT_NiagaraStateless_CPUSimulate");
      FVar8 = (FThreadSafeStaticStat<FStat_STAT_NiagaraStateless_CPUSimulate>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraStateless_CPUSimulate,
                         *pFVar7,L"CPU Simulate","STATGROUP_NiagaraStateless",
                         "STATCAT_NiagaraStateless",L"NiagaraStateless",true,true,ST_int64,false,
                         false,MCR_Invalid);
    }
    FVar3 = *(FName *)FVar8;
    local_208 = FVar3;
    if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar9 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar9 == (FThreadStats *)0x0) {
        pFVar10 = FThreadStatsPool::Get();
        pFVar9 = FThreadStatsPool::GetFromPool(pFVar10);
      }
      local_1f8.NameAndInfo.Number = FVar3.Number & 0xffffafff | 0xa000;
      local_1f8.StatData.Pad[0] = '\x01';
      local_1f8.StatData.Pad[1] = '\0';
      local_1f8.StatData.Pad[2] = '\0';
      local_1f8.StatData.Pad[3] = '\0';
      local_1f8.StatData.Pad[4] = '\0';
      local_1f8.StatData.Pad[5] = '\0';
      local_1f8.StatData.Pad[6] = '\0';
      local_1f8.StatData.Pad[7] = '\0';
      local_208 = FVar3;
      local_1f8.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar9,&local_1f8);
      FStatsTrace::Add(&local_208,1);
      if (pFVar9->ScopeCount == 0) {
        FThreadStats::Flush(pFVar9,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar9,false,false);
      }
    }
  }
  auVar12[4] = '\0';
  auVar12[5] = '\0';
  auVar12[6] = '\0';
  auVar12[7] = '\0';
  auVar12[0] = (undefined1)local_188.NumInstances;
  auVar12[1] = local_188.NumInstances._1_1_;
  auVar12[2] = local_188.NumInstances._2_1_;
  auVar12[3] = local_188.NumInstances._3_1_;
  if ((auVar12 != (uchar  [8])0x0) && (FThreadStats::bPrimaryEnable != false)) {
    FVar11 = StatPtr_STAT_NiagaraStateless_CPUParticleCount;
    if (StatPtr_STAT_NiagaraStateless_CPUParticleCount ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraStateless_CPUParticleCount>)0x0) {
      pFVar7 = ::FName::FName(&local_1b0,"STAT_NiagaraStateless_CPUParticleCount");
      FVar11 = (FThreadSafeStaticStat<FStat_STAT_NiagaraStateless_CPUParticleCount>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_NiagaraStateless_CPUParticleCount,*pFVar7,
                          L"CPU Particle Count","STATGROUP_NiagaraStateless",
                          "STATCAT_NiagaraStateless",L"NiagaraStateless",true,true,ST_int64,false,
                          false,MCR_Invalid);
    }
    FVar3 = *(FName *)FVar11;
    local_208 = FVar3;
    if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar9 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar9 == (FThreadStats *)0x0) {
        pFVar10 = FThreadStatsPool::Get();
        pFVar9 = FThreadStatsPool::GetFromPool(pFVar10);
      }
      local_1e8.NameAndInfo.Number = FVar3.Number & 0xffffafff | 0xa000;
      local_200 = FVar3;
      local_1e8.StatData.Pad = auVar12;
      local_1e8.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar9,&local_1e8);
      FStatsTrace::Add(&local_200,(long64)auVar12);
      if (pFVar9->ScopeCount == 0) {
        FThreadStats::Flush(pFVar9,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar9,false,false);
      }
    }
  }
  if (local_188.VariableComponents.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_char_*>)0x0) {
    FMemory::Free((void *)local_188.VariableComponents.AllocatorInstance.SecondaryData);
  }
  return local_188.NumInstances != 0;
}

// GenerateCPUDataForGPUSim @ 149445ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

bool __cdecl
NiagaraStatelessComputeManagerPrivate::GenerateCPUDataForGPUSim
          (FRHICommandListBase *param_1,FEmitterInstance_RT *param_2,FNiagaraDataBuffer *param_3)

{
  int iVar1;
  FNiagaraStatelessEmitterData *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_NiagaraStateless_CPUSimulate> FVar8;
  FThreadStats *pFVar9;
  FThreadStatsPool *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_NiagaraStateless_CPUParticleCount> FVar11;
  uchar auVar12 [8];
  undefined1 auStackY_278 [32];
  FName local_218;
  FName local_210;
  FStatMessage local_208;
  FStatMessage local_1f8;
  FScriptContainerElement *local_1e8;
  int iStack_1e0;
  undefined4 uStack_1dc;
  FNiagaraStatelessRuntimeSpawnInfo *local_1d8;
  int iStack_1d0;
  undefined4 uStack_1cc;
  FName local_1c8;
  FName local_1c0;
  TArrayView<unsigned_char_const_,int> local_1b8;
  TArrayView<FNiagaraStatelessRuntimeSpawnInfo_const_,int> local_1a8;
  FParticleSimulationContext local_198;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_1e8 = (param_2->BindingBufferData).AllocatorInstance.Data;
  iVar1 = (param_2->BindingBufferData).ArrayNum;
  pFVar2 = (param_2->EmitterData).Object;
  if (iVar1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  local_1b8._12_4_ = uStack_1dc;
  local_1b8.ArrayNum = iVar1;
  local_1b8.DataPtr = (uchar *)local_1e8;
  iStack_1e0 = iVar1;
  NiagaraStateless::FParticleSimulationContext::FParticleSimulationContext
            (&local_198,pFVar2,(param_2->ShaderParameters).Ptr,&local_1b8);
  local_1d8 = (FNiagaraStatelessRuntimeSpawnInfo *)(param_2->SpawnInfos).AllocatorInstance.Data;
  iStack_1d0 = (param_2->SpawnInfos).ArrayNum;
  if (iStack_1d0 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  local_1a8._12_4_ = uStack_1cc;
  local_1a8.ArrayNum = iStack_1d0;
  local_1a8.DataPtr = local_1d8;
  NiagaraStateless::FParticleSimulationContext::SimulateGPU
            (&local_198,param_1,param_2->RandomSeed,param_2->Age,param_2->DeltaTime,&local_1a8,
             param_3);
  if (FThreadStats::bPrimaryEnable != false) {
    FVar8 = StatPtr_STAT_NiagaraStateless_CPUSimulate;
    if (StatPtr_STAT_NiagaraStateless_CPUSimulate ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraStateless_CPUSimulate>)0x0) {
      pFVar7 = ::FName::FName(&local_1c8,"STAT_NiagaraStateless_CPUSimulate");
      FVar8 = (FThreadSafeStaticStat<FStat_STAT_NiagaraStateless_CPUSimulate>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraStateless_CPUSimulate,
                         *pFVar7,L"CPU Simulate","STATGROUP_NiagaraStateless",
                         "STATCAT_NiagaraStateless",L"NiagaraStateless",true,true,ST_int64,false,
                         false,MCR_Invalid);
    }
    FVar3 = *(FName *)FVar8;
    local_218 = FVar3;
    if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar9 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar9 == (FThreadStats *)0x0) {
        pFVar10 = FThreadStatsPool::Get();
        pFVar9 = FThreadStatsPool::GetFromPool(pFVar10);
      }
      local_208.NameAndInfo.Number = FVar3.Number & 0xffffafff | 0xa000;
      local_208.StatData.Pad[0] = '\x01';
      local_208.StatData.Pad[1] = '\0';
      local_208.StatData.Pad[2] = '\0';
      local_208.StatData.Pad[3] = '\0';
      local_208.StatData.Pad[4] = '\0';
      local_208.StatData.Pad[5] = '\0';
      local_208.StatData.Pad[6] = '\0';
      local_208.StatData.Pad[7] = '\0';
      local_218 = FVar3;
      local_208.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar9,&local_208);
      FStatsTrace::Add(&local_218,1);
      if (pFVar9->ScopeCount == 0) {
        FThreadStats::Flush(pFVar9,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar9,false,false);
      }
    }
  }
  auVar12[4] = '\0';
  auVar12[5] = '\0';
  auVar12[6] = '\0';
  auVar12[7] = '\0';
  auVar12[0] = (undefined1)local_198.NumInstances;
  auVar12[1] = local_198.NumInstances._1_1_;
  auVar12[2] = local_198.NumInstances._2_1_;
  auVar12[3] = local_198.NumInstances._3_1_;
  if ((auVar12 != (uchar  [8])0x0) && (FThreadStats::bPrimaryEnable != false)) {
    FVar11 = StatPtr_STAT_NiagaraStateless_CPUParticleCount;
    if (StatPtr_STAT_NiagaraStateless_CPUParticleCount ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraStateless_CPUParticleCount>)0x0) {
      pFVar7 = ::FName::FName(&local_1c0,"STAT_NiagaraStateless_CPUParticleCount");
      FVar11 = (FThreadSafeStaticStat<FStat_STAT_NiagaraStateless_CPUParticleCount>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_NiagaraStateless_CPUParticleCount,*pFVar7,
                          L"CPU Particle Count","STATGROUP_NiagaraStateless",
                          "STATCAT_NiagaraStateless",L"NiagaraStateless",true,true,ST_int64,false,
                          false,MCR_Invalid);
    }
    FVar3 = *(FName *)FVar11;
    local_218 = FVar3;
    if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar9 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar9 == (FThreadStats *)0x0) {
        pFVar10 = FThreadStatsPool::Get();
        pFVar9 = FThreadStatsPool::GetFromPool(pFVar10);
      }
      local_1f8.NameAndInfo.Number = FVar3.Number & 0xffffafff | 0xa000;
      local_210 = FVar3;
      local_1f8.StatData.Pad = auVar12;
      local_1f8.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar9,&local_1f8);
      FStatsTrace::Add(&local_210,(long64)auVar12);
      if (pFVar9->ScopeCount == 0) {
        FThreadStats::Flush(pFVar9,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar9,false,false);
      }
    }
  }
  if (local_198.VariableComponents.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_char_*>)0x0) {
    FMemory::Free((void *)local_198.VariableComponents.AllocatorInstance.SecondaryData);
  }
  return local_198.NumInstances != 0;
}

// GenerateGPUData @ 149446660

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
NiagaraStatelessComputeManagerPrivate::GenerateGPUData
          (FRHICommandList *param_1,FNiagaraGpuComputeDispatchInterface *param_2,
          TArrayView<FNiagaraStatelessComputeManager::FStatelessDataGenerationRequest_const_,int>
          *param_3)

{
  FByteAddressBuffer *pFVar1;
  TRefCountPtr<FRHIShaderResourceView> *pTVar2;
  byte bVar3;
  FRHIBuffer *pFVar4;
  FNiagaraDataBuffer *pFVar5;
  FEmitterInstance_RT *pFVar6;
  FNiagaraStatelessEmitterData *this;
  FCommonShaderParameters *pFVar7;
  FRHIUnorderedAccessView *pFVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  float fVar12;
  ERHIAccess EVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_NiagaraStateless_GPUSimulate> FVar18;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FThreadSafeStaticStat<FStat_STAT_NiagaraStateless_GenerateGPUData> FVar19;
  TRefCountPtr<FRHIBuffer> TVar20;
  void *_Dst;
  FRHIUnorderedAccessView *pFVar21;
  FRHIUnorderedAccessView *pFVar22;
  IRHIComputeContext *pIVar23;
  FRHIShaderResourceView *pFVar24;
  FShaderParametersMetadata *pFVar25;
  FRHIComputeShader *pFVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  longlong lVar29;
  FName FVar30;
  uint uVar31;
  uint uVar32;
  FStatelessDataGenerationRequest *pFVar33;
  uint uVar34;
  FStatelessDataGenerationRequest *pFVar35;
  uint uVar36;
  float fVar37;
  ForAnyElementType local_268;
  undefined8 local_260;
  ForAnyElementType local_258;
  undefined8 local_250;
  FLLMScope local_248 [2];
  TRefCountPtr<FRHIShaderResourceView> local_240;
  FColor_u_0 local_238 [2];
  FName local_230;
  FRHIUnorderedAccessView *local_228;
  FRHIUnorderedAccessView *local_220;
  TShaderRefBase<NiagaraStateless::FSimulationShader,FShaderMapPointerTable> local_218;
  FName local_208;
  FRHIUnorderedAccessView *local_200;
  FRHIUnorderedAccessView *local_1f8;
  FName local_1f0;
  uint local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  int iStack_1d4;
  wchar_t *local_1d0;
  undefined8 uStack_1c8;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  FName local_1a8;
  undefined1 local_1a0 [32];
  FStatMessage local_180;
  FName local_170;
  undefined8 uStack_168;
  FRHITransitionInfo *local_158;
  int iStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  FRHITransitionInfo *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  FName local_f8;
  FName local_f0;
  TArrayView<FRHITransitionInfo_const_,int> local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  TArrayView<FRHITransitionInfo_const_,int> local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  wchar_t *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  iVar16 = param_3->ArrayNum;
  if ((iVar16 != 0) && (FThreadStats::bPrimaryEnable)) {
    FVar18 = StatPtr_STAT_NiagaraStateless_GPUSimulate;
    if (StatPtr_STAT_NiagaraStateless_GPUSimulate ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraStateless_GPUSimulate>)0x0) {
      pFVar17 = ::FName::FName(&local_f8,"STAT_NiagaraStateless_GPUSimulate");
      FVar18 = (FThreadSafeStaticStat<FStat_STAT_NiagaraStateless_GPUSimulate>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraStateless_GPUSimulate,
                          *pFVar17,L"GPU Simulate","STATGROUP_NiagaraStateless",
                          "STATCAT_NiagaraStateless",L"NiagaraStateless",true,true,ST_int64,false,
                          false,MCR_Invalid);
    }
    FVar30 = *(FName *)FVar18;
    if (((FVar30 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_180.NameAndInfo.Number = FVar30.Number & 0xffffafff | 0xa000;
      local_1a8 = FVar30;
      local_180.StatData.Pad = (uchar  [8])(longlong)iVar16;
      local_180.NameAndInfo.Index.Value = FVar30.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_180);
      FStatsTrace::Add(&local_1a8,(longlong)iVar16);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  FVar19 = StatPtr_STAT_NiagaraStateless_GenerateGPUData;
  if (StatPtr_STAT_NiagaraStateless_GenerateGPUData ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraStateless_GenerateGPUData>)0x0) {
    pFVar17 = ::FName::FName(&local_f0,"STAT_NiagaraStateless_GenerateGPUData");
    FVar19 = (FThreadSafeStaticStat<FStat_STAT_NiagaraStateless_GenerateGPUData>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraStateless_GenerateGPUData,
                        *pFVar17,L"GenerateGPUData","STATGROUP_NiagaraStateless",
                        "STATCAT_NiagaraStateless",L"NiagaraStateless",true,true,ST_int64,true,false
                        ,MCR_Invalid);
  }
  FVar30 = *(FName *)FVar19;
  bVar11 = false;
  bVar10 = false;
  local_1f0.ComparisonIndex.Value = 0;
  local_1f0.Number = 0;
  bVar15 = false;
  bVar14 = false;
  if ((FVar30.ComparisonIndex.Value.Value != 0) || (FVar30.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_238[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_238[0]._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar11 = false;
      bVar10 = true;
      bVar15 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_208.ComparisonIndex.Value = FVar30.ComparisonIndex.Value.Value;
        local_208.Number = FVar30.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_208,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\Stateless\\NiagaraStatelessComputeManager.cpp"
                   ,0x68);
        bVar11 = true;
        bVar10 = true;
        bVar15 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_230 = FVar30;
      FThreadStats::AddMessage(FVar30,CycleScopeStart);
      bVar14 = true;
      goto LAB_14944692f;
    }
  }
  bVar11 = bVar15;
  bVar10 = bVar14;
  bVar14 = false;
  local_230 = local_1f0;
  FVar30 = local_1f0;
LAB_14944692f:
  bVar15 = IsInParallelRenderingThread();
  if ((!bVar15) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInParallelRenderingThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraGpuComputeDispatchInterface.h"
                          ,0x6a,L""), bVar15)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (((param_2->GPUInstanceCounterManager).AllocatedInstanceCounts <
       (param_2->GPUInstanceCounterManager).UsedInstanceCounts) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("UsedInstanceCounts <= AllocatedInstanceCounts",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraGPUInstanceCountManager.h"
                          ,0x44,L""), bVar15)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  local_228 = (param_2->GPUInstanceCounterManager).CountBuffer.UAV.Reference;
  uVar31 = iVar16 * 2 + 1;
  local_258.Data = (FScriptContainerElement *)0x0;
  local_260._4_4_ = 0;
  local_250._0_4_ = 0;
  local_250._4_4_ = 0;
  local_260._0_4_ = 0;
  local_268.Data = (FScriptContainerElement *)0x0;
  local_260 = 0;
  if ((int)uVar31 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar31);
  }
  if (0 < (int)uVar31) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,uVar31,&local_258,0,(int *)((longlong)&local_250 + 4));
  }
  if (local_260._4_4_ < (int)uVar31) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,uVar31,&local_268,(int)local_260,(int *)((longlong)&local_260 + 4));
  }
  if (((param_2->GPUInstanceCounterManager).AllocatedInstanceCounts <
       (param_2->GPUInstanceCounterManager).UsedInstanceCounts) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("UsedInstanceCounts <= AllocatedInstanceCounts",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraGPUInstanceCountManager.h"
                          ,0x44,L""), bVar15)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if ((int)local_250 == local_250._4_4_) {
    local_250._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x830,&local_258,(int *)((longlong)&local_250 + 4));
  }
  EVar13 = FNiagaraGPUInstanceCountManager::kCountBufferDefaultState;
  lVar29 = (longlong)(int)local_250;
  local_250 = CONCAT44(local_250._4_4_,(int)local_250 + 1);
  pFVar4 = (param_2->GPUInstanceCounterManager).CountBuffer.Buffer.Reference;
  *(undefined4 *)&local_258.Data[lVar29 * 0x30].field_0x0 = 0xffffffff;
  *(undefined2 *)(local_258.Data + lVar29 * 0x30 + 4) = 0xffff;
  *(FRHIBuffer **)(local_258.Data + lVar29 * 0x30 + 8) = pFVar4;
  local_258.Data[lVar29 * 0x30 + 0x10] = (FScriptContainerElement)0x2;
  *(ERHIAccess *)(local_258.Data + lVar29 * 0x30 + 0x14) = EVar13;
  *(undefined4 *)(local_258.Data + lVar29 * 0x30 + 0x18) = 0x400;
  local_258.Data[lVar29 * 0x30 + 0x1c] = (FScriptContainerElement)0x0;
  local_258.Data[lVar29 * 0x30 + 0x28] = (FScriptContainerElement)0x0;
  if (((param_2->GPUInstanceCounterManager).AllocatedInstanceCounts <
       (param_2->GPUInstanceCounterManager).UsedInstanceCounts) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("UsedInstanceCounts <= AllocatedInstanceCounts",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraGPUInstanceCountManager.h"
                          ,0x44,L""), bVar15)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar16 = (int)local_260;
  if ((int)local_260 == local_260._4_4_) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&local_268,(int *)((longlong)&local_260 + 4));
  }
  EVar13 = FNiagaraGPUInstanceCountManager::kCountBufferDefaultState;
  pFVar33 = param_3->DataPtr;
  local_260 = CONCAT44(local_260._4_4_,iVar16 + 1);
  lVar29 = (longlong)iVar16;
  *(FRHIBuffer **)(local_268.Data + lVar29 * 0x30 + 8) =
       (param_2->GPUInstanceCounterManager).CountBuffer.Buffer.Reference;
  iVar16 = param_3->ArrayNum;
  *(ERHIAccess *)(local_268.Data + lVar29 * 0x30 + 0x18) = EVar13;
  *(undefined4 *)&local_268.Data[lVar29 * 0x30].field_0x0 = 0xffffffff;
  *(undefined2 *)(local_268.Data + lVar29 * 0x30 + 4) = 0xffff;
  local_268.Data[lVar29 * 0x30 + 0x10] = (FScriptContainerElement)0x2;
  *(undefined4 *)(local_268.Data + lVar29 * 0x30 + 0x14) = 0x400;
  local_220 = (FRHIUnorderedAccessView *)(pFVar33 + iVar16);
  local_268.Data[lVar29 * 0x30 + 0x1c] = (FScriptContainerElement)0x0;
  local_268.Data[lVar29 * 0x30 + 0x28] = (FScriptContainerElement)0x0;
  if ((FRHIUnorderedAccessView *)pFVar33 != local_220) {
    do {
      pFVar5 = (pFVar33->DestinationData).Reference;
      if ((pFVar5->GPUBufferFloat).NumBytes != 0) {
        iVar16 = (int)local_250;
        if ((int)local_250 == local_250._4_4_) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x830,&local_258,(int *)((longlong)&local_250 + 4));
        }
        lVar29 = (longlong)iVar16;
        local_250 = CONCAT44(local_250._4_4_,iVar16 + 1);
        pFVar4 = (pFVar5->GPUBufferFloat).Buffer.Reference;
        *(undefined4 *)&local_258.Data[lVar29 * 0x30].field_0x0 = 0xffffffff;
        *(undefined2 *)(local_258.Data + lVar29 * 0x30 + 4) = 0xffff;
        *(FRHIBuffer **)(local_258.Data + lVar29 * 0x30 + 8) = pFVar4;
        local_258.Data[lVar29 * 0x30 + 0x10] = (FScriptContainerElement)0x2;
        *(undefined4 *)(local_258.Data + lVar29 * 0x30 + 0x14) = 0x70;
        *(undefined4 *)(local_258.Data + lVar29 * 0x30 + 0x18) = 0x400;
        local_258.Data[lVar29 * 0x30 + 0x1c] = (FScriptContainerElement)0x0;
        local_258.Data[lVar29 * 0x30 + 0x28] = (FScriptContainerElement)0x0;
        iVar16 = (int)local_260;
        if ((int)local_260 == local_260._4_4_) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x830,&local_268,(int *)((longlong)&local_260 + 4));
        }
        lVar29 = (longlong)iVar16;
        local_260 = CONCAT44(local_260._4_4_,iVar16 + 1);
        pFVar4 = (pFVar5->GPUBufferFloat).Buffer.Reference;
        *(undefined4 *)&local_268.Data[lVar29 * 0x30].field_0x0 = 0xffffffff;
        *(undefined2 *)(local_268.Data + lVar29 * 0x30 + 4) = 0xffff;
        *(FRHIBuffer **)(local_268.Data + lVar29 * 0x30 + 8) = pFVar4;
        local_268.Data[lVar29 * 0x30 + 0x10] = (FScriptContainerElement)0x2;
        *(undefined4 *)(local_268.Data + lVar29 * 0x30 + 0x14) = 0x400;
        *(undefined4 *)(local_268.Data + lVar29 * 0x30 + 0x18) = 0x70;
        local_268.Data[lVar29 * 0x30 + 0x1c] = (FScriptContainerElement)0x0;
        local_268.Data[lVar29 * 0x30 + 0x28] = (FScriptContainerElement)0x0;
      }
      if ((pFVar5->GPUBufferInt).NumBytes != 0) {
        iVar16 = (int)local_250;
        if ((int)local_250 == local_250._4_4_) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x830,&local_258,(int *)((longlong)&local_250 + 4));
        }
        lVar29 = (longlong)iVar16;
        local_250 = CONCAT44(local_250._4_4_,iVar16 + 1);
        pFVar4 = (pFVar5->GPUBufferInt).Buffer.Reference;
        *(undefined4 *)&local_258.Data[lVar29 * 0x30].field_0x0 = 0xffffffff;
        *(undefined2 *)(local_258.Data + lVar29 * 0x30 + 4) = 0xffff;
        *(FRHIBuffer **)(local_258.Data + lVar29 * 0x30 + 8) = pFVar4;
        local_258.Data[lVar29 * 0x30 + 0x10] = (FScriptContainerElement)0x2;
        *(undefined4 *)(local_258.Data + lVar29 * 0x30 + 0x14) = 0x70;
        *(undefined4 *)(local_258.Data + lVar29 * 0x30 + 0x18) = 0x400;
        local_258.Data[lVar29 * 0x30 + 0x1c] = (FScriptContainerElement)0x0;
        local_258.Data[lVar29 * 0x30 + 0x28] = (FScriptContainerElement)0x0;
        iVar16 = (int)local_260;
        if ((int)local_260 == local_260._4_4_) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x830,&local_268,(int *)((longlong)&local_260 + 4));
        }
        lVar29 = (longlong)iVar16;
        local_260 = CONCAT44(local_260._4_4_,iVar16 + 1);
        pFVar4 = (pFVar5->GPUBufferInt).Buffer.Reference;
        *(undefined4 *)&local_268.Data[lVar29 * 0x30].field_0x0 = 0xffffffff;
        *(undefined2 *)(local_268.Data + lVar29 * 0x30 + 4) = 0xffff;
        *(FRHIBuffer **)(local_268.Data + lVar29 * 0x30 + 8) = pFVar4;
        local_268.Data[lVar29 * 0x30 + 0x10] = (FScriptContainerElement)0x2;
        *(undefined4 *)(local_268.Data + lVar29 * 0x30 + 0x14) = 0x400;
        *(undefined4 *)(local_268.Data + lVar29 * 0x30 + 0x18) = 0x70;
        local_268.Data[lVar29 * 0x30 + 0x1c] = (FScriptContainerElement)0x0;
        local_268.Data[lVar29 * 0x30 + 0x28] = (FScriptContainerElement)0x0;
      }
      pFVar6 = pFVar33->EmitterInstance;
      if (pFVar6->bBindingBufferDirty != false) {
        pFVar6->bBindingBufferDirty = false;
        pFVar1 = &pFVar6->BindingBuffer;
        (pFVar6->BindingBuffer).NumBytes = 0;
        pFVar4 = (pFVar1->Buffer).Reference;
        if (pFVar4 != (FRHIBuffer *)0x0) {
          (pFVar1->Buffer).Reference = (FRHIBuffer *)0x0;
          FRHIResource::Release((FRHIResource *)pFVar4);
        }
        pFVar24 = (pFVar6->BindingBuffer).SRV.Reference;
        if (pFVar24 != (FRHIShaderResourceView *)0x0) {
          (pFVar6->BindingBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
          FRHIResource::Release((FRHIResource *)pFVar24);
        }
        uVar31 = (pFVar6->BindingBufferData).ArrayNum;
        if (uVar31 != 0) {
          (pFVar6->BindingBuffer).NumBytes = uVar31;
          if (((uVar31 & 3) != 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("NumBytes % 4 == 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIUtilities.h"
                                  ,0x1f9,L""), bVar15)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          local_1e0 = (pFVar6->BindingBuffer).NumBytes;
          iStack_1d4 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
          uStack_1b4 = 0;
          uStack_1b0 = 0;
          local_1d0 = L"FNiagaraStatelessEmitterInstance::BindingBuffer";
          uStack_1dc = 4;
          uStack_1d8 = 0x10111;
          local_98 = CONCAT44(4,local_1e0);
          uStack_90 = CONCAT44(iStack_1d4,0x10111);
          uStack_1c8 = 0;
          uStack_1bc = 0;
          uStack_1b8 = 0;
          local_1c0 = 0x70;
          local_78 = 0x70;
          uStack_70 = 0;
          uStack_1ac = 0;
          local_88 = L"FNiagaraStatelessEmitterInstance::BindingBuffer";
          uStack_80 = 0;
          local_68 = 0;
          TVar20 = FRHICommandListBase::CreateBuffer
                             ((FRHICommandListBase *)param_1,(FRHIBufferCreateDesc *)local_1a0);
          if ((FRHIBuffer *)pFVar1 != TVar20.Reference) {
            pFVar4 = (pFVar1->Buffer).Reference;
            (pFVar1->Buffer).Reference = (FRHIBuffer *)(TVar20.Reference)->_padding_;
            (TVar20.Reference)->_padding_ = 0;
            if (pFVar4 != (FRHIBuffer *)0x0) {
              FRHIResource::Release((FRHIResource *)pFVar4);
            }
          }
          if ((FRHIResource *)local_1a0._0_8_ != (FRHIResource *)0x0) {
            FRHIResource::Release((FRHIResource *)local_1a0._0_8_);
          }
          pFVar4 = (pFVar1->Buffer).Reference;
          uStack_168 = 0;
          local_170.ComparisonIndex.Value = 0x40000;
          local_170.Number = 0;
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                 ::__l2::_thread_safe_static_guard_0__) &&
             (_Init_thread_header(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                                   ::__l2::_thread_safe_static_guard_0__),
             `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
             ::__l2::_thread_safe_static_guard_0__ == -1)) {
            ::FName::FName(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                            ::__l2::LLMScope_Name977,L"RHIMisc/CreateShaderResourceView");
            _Init_thread_footer(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                                 ::__l2::_thread_safe_static_guard_0__);
          }
          FLLMScope::FLLMScope
                    (local_248,
                     `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                     ::__l2::LLMScope_Name977,false,None,Default,true);
          FMemScope::FMemScope
                    ((FMemScope *)(local_1a0 + 8),
                     &`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name977,true);
          (**(code **)(GDynamicRHI->_padding_ + 0x1b0))
                    (GDynamicRHI,&local_240,param_1,pFVar4,&local_170);
          FMemScope::~FMemScope((FMemScope *)(local_1a0 + 8));
          FLLMScope::~FLLMScope(local_248);
          pTVar2 = &(pFVar6->BindingBuffer).SRV;
          if (pTVar2 == &local_240) {
LAB_149446f3a:
            if (local_240.Reference != (FRHIShaderResourceView *)0x0) {
              FRHIResource::Release((FRHIResource *)local_240.Reference);
            }
          }
          else {
            pFVar24 = pTVar2->Reference;
            pTVar2->Reference = local_240.Reference;
            local_240.Reference = (FRHIShaderResourceView *)0x0;
            if (pFVar24 != (FRHIShaderResourceView *)0x0) {
              FRHIResource::Release((FRHIResource *)pFVar24);
              goto LAB_149446f3a;
            }
          }
          uVar31 = (pFVar6->BindingBuffer).NumBytes;
          pFVar4 = (pFVar1->Buffer).Reference;
          if (((((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0))
               && (param_1->field_0x64 != '\0')) &&
              ((GRHICommandList.bLatchedBypass == false || ((param_1->field_0x29b & 0x20) == 0))))
             && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsTopOfPipe() || Bypass()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                                     ,0x2ed,
                                     L"Buffers may only be locked while recording RHI command lists, not during RHI command list execution."
                                    ), bVar15)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          bVar3 = param_1->field_0x6a;
          if (((bVar3 != 0) && ((bVar3 & bVar3 - 1) != 0)) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                                  ,0x2a5,L""), bVar15)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          bVar15 = param_1->field_0x6a == '\0';
          if (bVar15) {
            FRHICommandListBase::SwitchPipeline((FRHICommandListBase *)param_1,Graphics);
          }
          _Dst = (void *)(**(code **)(GDynamicRHI->_padding_ + 0x148))
                                   (GDynamicRHI,param_1,pFVar4,0,uVar31,1);
          if (bVar15) {
            FRHICommandListBase::SwitchPipeline((FRHICommandListBase *)param_1,None);
          }
          memcpy(_Dst,(pFVar6->BindingBufferData).AllocatorInstance.Data,
                 (ulonglong)(pFVar6->BindingBuffer).NumBytes);
          pFVar4 = (pFVar6->BindingBuffer).Buffer.Reference;
          if (((((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0))
               && (param_1->field_0x64 != '\0')) &&
              ((GRHICommandList.bLatchedBypass == false || ((param_1->field_0x29b & 0x20) == 0))))
             && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsTopOfPipe() || Bypass()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                                     ,0x2f5,
                                     L"Buffers may only be unlocked while recording RHI command lists, not during RHI command list execution."
                                    ), bVar15)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          bVar3 = param_1->field_0x6a;
          if (((bVar3 != 0) && ((bVar3 & bVar3 - 1) != 0)) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                                  ,0x2a5,L""), bVar15)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          if (param_1->field_0x6a == '\0') {
            FRHICommandListBase::SwitchPipeline((FRHICommandListBase *)param_1,Graphics);
            (**(code **)(GDynamicRHI->_padding_ + 0x158))(GDynamicRHI,param_1,pFVar4);
            FRHICommandListBase::SwitchPipeline((FRHICommandListBase *)param_1,None);
          }
          else {
            (**(code **)(GDynamicRHI->_padding_ + 0x158))(GDynamicRHI,param_1,pFVar4);
          }
        }
      }
      pFVar33 = pFVar33 + 1;
      FVar30 = local_230;
    } while ((FRHIUnorderedAccessView *)pFVar33 != local_220);
  }
  FNiagaraEmptyUAVPoolScopedAccess::FNiagaraEmptyUAVPoolScopedAccess
            ((FNiagaraEmptyUAVPoolScopedAccess *)(local_1a0 + 0x18),(param_2->EmptyUAVPoolPtr).Ptr);
  pFVar21 = FNiagaraEmptyUAVPool::GetEmptyUAVFromPool
                      ((param_2->EmptyUAVPoolPtr).Ptr,param_1,PF_R32_FLOAT,Buffer);
  local_220 = pFVar21;
  pFVar22 = FNiagaraEmptyUAVPool::GetEmptyUAVFromPool
                      ((param_2->EmptyUAVPoolPtr).Ptr,param_1,PF_R32_SINT,Buffer);
  iStack_150 = (int)local_250;
  local_158 = (FRHITransitionInfo *)local_258.Data;
  local_1a0._16_8_ = pFVar22;
  if (((int)local_250 < 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar15)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  local_e8._12_4_ = uStack_14c;
  local_e8.ArrayNum = iStack_150;
  local_e8.DataPtr = local_158;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_e8,None);
  local_200 = local_228;
  local_148 = &local_200;
  uStack_140 = 1;
  if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
    puVar27 = FMemStackBase::Alloc((FMemStackBase *)param_1,8,8);
    *puVar27 = local_200;
    puVar28 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    uStack_130 = 1;
    **(undefined8 **)&param_1->field_0x30 = puVar28;
    *(undefined8 **)&param_1->field_0x30 = puVar28 + 1;
    puVar28[1] = 0;
    *puVar28 = &___7FRHICommandBeginSpecificUAVOverlap__6B_;
    puVar28[2] = puVar27;
    puVar28[3] = CONCAT44(uStack_12c,1);
    local_138 = puVar27;
  }
  else {
    pIVar23 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)param_1);
    local_d8 = (undefined4)local_148;
    uStack_d4 = local_148._4_4_;
    uStack_d0 = uStack_140;
    uStack_cc = uStack_13c;
    (**(code **)(pIVar23->_padding_ + 0x80))(pIVar23,&local_d8);
  }
  fVar12 = __real_3f800000;
  pFVar35 = param_3->DataPtr;
  pFVar33 = pFVar35 + param_3->ArrayNum;
  while( true ) {
    if (pFVar35 == pFVar33) {
      local_128 = &local_1f8;
      uStack_120 = 1;
      local_1f8 = local_228;
      if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
        puVar27 = FMemStackBase::Alloc((FMemStackBase *)param_1,8,8);
        *puVar27 = local_1f8;
        puVar28 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
        *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
        uStack_110 = 1;
        **(undefined8 **)&param_1->field_0x30 = puVar28;
        *(undefined8 **)&param_1->field_0x30 = puVar28 + 1;
        puVar28[1] = 0;
        *puVar28 = &___7FRHICommandEndSpecificUAVOverlap__6B_;
        puVar28[2] = puVar27;
        puVar28[3] = CONCAT44(uStack_10c,1);
        local_118 = puVar27;
      }
      else {
        pIVar23 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)param_1);
        local_b8 = (undefined4)local_128;
        uStack_b4 = local_128._4_4_;
        uStack_b0 = uStack_120;
        uStack_ac = uStack_11c;
        (**(code **)(pIVar23->_padding_ + 0x90))(pIVar23,&local_b8);
      }
      iVar16 = (int)local_260;
      local_108 = (FRHITransitionInfo *)local_268.Data;
      if (((int)local_260 < 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iStack_100 = iVar16;
      local_a8._12_4_ = uStack_fc;
      local_a8.ArrayNum = iVar16;
      local_a8.DataPtr = local_108;
      FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_a8,None);
      FNiagaraEmptyUAVPoolScopedAccess::~FNiagaraEmptyUAVPoolScopedAccess
                ((FNiagaraEmptyUAVPoolScopedAccess *)(local_1a0 + 0x18));
      if (local_268.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_268.Data);
      }
      if (local_258.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_258.Data);
      }
      if (bVar10) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar11) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar14) {
        FThreadStats::AddMessage(FVar30,CycleScopeEnd);
      }
      return;
    }
    pFVar6 = pFVar35->EmitterInstance;
    pFVar5 = (pFVar35->DestinationData).Reference;
    this = (pFVar6->EmitterData).Object;
    pFVar7 = (pFVar6->ShaderParameters).Ptr;
    pFVar7->Common_SimulationTime = pFVar6->Age;
    pFVar7->Common_SimulationDeltaTime = pFVar6->DeltaTime;
    if (pFVar6->DeltaTime <= 0.0) {
      fVar37 = 0.0;
    }
    else {
      fVar37 = fVar12 / pFVar6->DeltaTime;
    }
    pFVar7->Common_SimulationInvDeltaTime = fVar37;
    pFVar7->Common_OutputBufferStride = pFVar5->FloatStride >> 2;
    pFVar7->Common_GPUCountBufferOffset = pFVar5->GPUInstanceCountBufferOffset;
    pFVar8 = (pFVar5->GPUBufferFloat).UAV.Reference;
    if (pFVar8 != (FRHIUnorderedAccessView *)0x0) {
      pFVar21 = pFVar8;
    }
    pFVar7->Common_FloatOutputBuffer = pFVar21;
    pFVar21 = (pFVar5->GPUBufferInt).UAV.Reference;
    if (pFVar21 != (FRHIUnorderedAccessView *)0x0) {
      pFVar22 = pFVar21;
    }
    pFVar7->Common_GPUCountBuffer = local_228;
    pFVar7->Common_IntOutputBuffer = pFVar22;
    pFVar7->Common_StaticDataBuffer = (this->StaticDataBufferGpu).SRV.Reference;
    pFVar24 = (pFVar6->BindingBuffer).SRV.Reference;
    if (pFVar24 == (FRHIShaderResourceView *)0x0) {
      pFVar24 = FNiagaraRenderer::GetDummyByteAddressBuffer();
    }
    pFVar7->Common_DynamicDataBuffer = pFVar24;
    FNiagaraStatelessEmitterData::GetShader(this,&local_218);
    TShaderRefBase<NiagaraStateless::FSimulationShader,FShaderMapPointerTable>::GetRHIShaderBase
              (&local_218,SF_Compute,true);
    uVar31 = pFVar35->ActiveParticles + 0x3f >> 6;
    if (((GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.X < 0x80) ||
        (GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.Y < 0x80)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("GRHIGlobals.MaxDispatchThreadGroupsPerDimension.X >= WrappedGroupStride && GRHIGlobals.MaxDispatchThreadGroupsPerDimension.Y >= WrappedGroupStride"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                            ,400,L""), bVar15)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uVar34 = 1;
    uVar36 = 1;
    uVar32 = uVar31;
    if (GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.X < (int)uVar31) {
      uVar32 = 0x80;
      uVar34 = uVar31 + 0x7f >> 7;
    }
    if (GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.Y < (int)uVar34) {
      uVar36 = uVar34 + 0x7f;
      uVar34 = 0x80;
      uVar36 = uVar36 >> 7;
    }
    if (((int)(uVar36 * uVar34 * uVar32) < (int)uVar31) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("TargetGroupCount <= GroupCount.X * GroupCount.Y * GroupCount.Z",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                            ,0x19f,L""), bVar15)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar25 = FNiagaraStatelessEmitterData::GetShaderParametersMetadata(this);
    if ((GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.X < (int)uVar32) &&
       (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<9083860753072521649>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                            ,0x1b1,
                            "GroupCount.X <= GRHIGlobals.MaxDispatchThreadGroupsPerDimension.X"),
       bVar15)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if ((GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.Y < (int)uVar34) &&
       (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<9083860753072521650>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                            ,0x1b2,
                            "GroupCount.Y <= GRHIGlobals.MaxDispatchThreadGroupsPerDimension.Y"),
       bVar15)) break;
    if ((GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.Z < (int)uVar36) &&
       (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<9083860753072521651>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                            ,0x1b3,
                            "GroupCount.Z <= GRHIGlobals.MaxDispatchThreadGroupsPerDimension.Z"),
       bVar15)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar26 = (FRHIComputeShader *)
              TShaderRefBase<NiagaraStateless::FSimulationShader,FShaderMapPointerTable>::
              GetRHIShaderBase(&local_218,SF_Compute,true);
    SetComputePipelineState((FRHIComputeCommandList *)param_1,pFVar26);
    local_c8.ShaderContent = (FShader *)local_218.ShaderContent;
    local_c8.ShaderMap = local_218.ShaderMap;
    ValidateShaderParameters(&local_c8,pFVar25,pFVar7);
    ::SetShaderParameters
              ((FRHIComputeCommandList *)param_1,pFVar26,
               (FShaderParameterBindings *)local_218.ShaderContent,pFVar25,pFVar7);
    if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
      puVar27 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
      *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
      **(undefined8 **)&param_1->field_0x30 = puVar27;
      *(undefined8 **)&param_1->field_0x30 = puVar27 + 1;
      puVar27[1] = 0;
      *puVar27 = &___7FRHICommandDispatchComputeShader__6B_;
      *(uint *)(puVar27 + 2) = uVar32;
      *(uint *)((longlong)puVar27 + 0x14) = uVar34;
      *(uint *)(puVar27 + 3) = uVar36;
    }
    else {
      pIVar23 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)param_1);
      (**(code **)(pIVar23->_padding_ + 0x18))(pIVar23,uVar32,uVar34,uVar36);
    }
    pFVar26 = (FRHIComputeShader *)
              TShaderRefBase<NiagaraStateless::FSimulationShader,FShaderMapPointerTable>::
              GetRHIShaderBase(&local_218,SF_Compute,true);
    UnsetShaderUAVs<FRHIComputeCommandList,NiagaraStateless::FSimulationShader>
              ((FRHIComputeCommandList *)param_1,&local_218,pFVar26);
    pFVar35 = pFVar35 + 1;
    pFVar21 = local_220;
    pFVar22 = (FRHIUnorderedAccessView *)local_1a0._16_8_;
    FVar30 = local_230;
  }
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

// GetAttributeDistribution @ 149448550

FNiagaraDistributionFloat * __cdecl
NSMLightAttributesPrivate::GetAttributeDistribution
          (EModuleAttribute param_1,UNiagaraStatelessModule_LightAttributes *param_2)

{
  FNiagaraDistributionFloat *pFVar1;
  
  if (param_1 == Radius) {
    pFVar1 = &param_2->Radius;
    if (param_2->bApplyRadius == 0) {
      pFVar1 = (FNiagaraDistributionFloat *)0x0;
    }
    return pFVar1;
  }
  if (param_1 == Falloff) {
    pFVar1 = &param_2->FalloffExponent;
    if (param_2->bApplyFalloffExponent == 0) {
      pFVar1 = (FNiagaraDistributionFloat *)0x0;
    }
    return pFVar1;
  }
  if (param_1 == DiffuseScale) {
    pFVar1 = &param_2->DiffuseScale;
    if (param_2->bApplyDiffuseScale == 0) {
      pFVar1 = (FNiagaraDistributionFloat *)0x0;
    }
    return pFVar1;
  }
  if (param_1 != SpecularScale) {
    if (param_1 != VolumetricScale) {
      return (FNiagaraDistributionFloat *)0x0;
    }
    pFVar1 = &param_2->VolumetricScattering;
    if (param_2->bApplyVolumetricScattering == 0) {
      pFVar1 = (FNiagaraDistributionFloat *)0x0;
    }
    return pFVar1;
  }
  pFVar1 = &param_2->SpecularScale;
  if (param_2->bApplySpecularScale == 0) {
    pFVar1 = (FNiagaraDistributionFloat *)0x0;
  }
  return pFVar1;
}

// GetAttributeVariable @ 1494485e0

FNiagaraVariableBase * __cdecl
NSMDecalAttributesPrivate::GetAttributeVariable
          (EModuleAttribute param_1,UNiagaraStatelessModule_DecalAttributes *param_2,
          EVariableFilter param_3)

{
  FNiagaraVariable *pFVar1;
  int iVar2;
  FNiagaraVariableBase *pFVar3;
  int *piVar4;
  TStringView<wchar_t> local_38;
  FNiagaraVariable local_28;
  
  pFVar3 = (FNiagaraVariableBase *)0x0;
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  iVar2 = 0;
  if ((*piVar4 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pFVar1 = UNiagaraDecalRendererProperties::GetDecalOrientationVariable(&local_28);
    DecalOrientationVariable.Name = (FName)pFVar1->_padding_;
    DecalOrientationVariable.TypeDefHandle.RegisteredTypeIndex = (int)pFVar1->_padding_;
    local_38.DataPtr =
         (wchar_t *)FNiagaraConstants::ParticleAttributeNamespaceString.Data.AllocatorInstance.Data;
    local_38.Size = FNiagaraConstants::ParticleAttributeNamespaceString.Data.ArrayNum + -1;
    if (FNiagaraConstants::ParticleAttributeNamespaceString.Data.ArrayNum == 0) {
      local_38.Size = iVar2;
    }
    FNiagaraVariableBase::RemoveRootNamespace(&DecalOrientationVariable,&local_38);
    if (local_28.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.VarData.AllocatorInstance.Data);
    }
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar4 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    pFVar1 = UNiagaraDecalRendererProperties::GetDecalSizeVariable(&local_28);
    DecalSizeVariable.Name = (FName)pFVar1->_padding_;
    DecalSizeVariable.TypeDefHandle.RegisteredTypeIndex = (int)pFVar1->_padding_;
    local_38.DataPtr =
         (wchar_t *)FNiagaraConstants::ParticleAttributeNamespaceString.Data.AllocatorInstance.Data;
    local_38.Size = FNiagaraConstants::ParticleAttributeNamespaceString.Data.ArrayNum + -1;
    if (FNiagaraConstants::ParticleAttributeNamespaceString.Data.ArrayNum == 0) {
      local_38.Size = iVar2;
    }
    FNiagaraVariableBase::RemoveRootNamespace(&DecalSizeVariable,&local_38);
    if (local_28.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.VarData.AllocatorInstance.Data);
    }
    _Init_thread_footer(&::_TSS1);
  }
  if ((*piVar4 < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    pFVar1 = UNiagaraDecalRendererProperties::GetDecalFadeVariable(&local_28);
    DecalFadeVariable.Name = (FName)pFVar1->_padding_;
    DecalFadeVariable.TypeDefHandle.RegisteredTypeIndex = (int)pFVar1->_padding_;
    local_38.DataPtr =
         (wchar_t *)FNiagaraConstants::ParticleAttributeNamespaceString.Data.AllocatorInstance.Data;
    local_38.Size = FNiagaraConstants::ParticleAttributeNamespaceString.Data.ArrayNum + -1;
    if (FNiagaraConstants::ParticleAttributeNamespaceString.Data.ArrayNum == 0) {
      local_38.Size = iVar2;
    }
    FNiagaraVariableBase::RemoveRootNamespace(&DecalFadeVariable,&local_38);
    if (local_28.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.VarData.AllocatorInstance.Data);
    }
    _Init_thread_footer(&::_TSS2);
  }
  if (param_1 == Orientation) {
    if ((param_3 == None) || (param_2->bApplyOrientation != false)) {
      pFVar3 = &DecalOrientationVariable;
    }
  }
  else if (param_1 == Size) {
    if ((param_3 == None) || (param_2->bApplySize != false)) {
      pFVar3 = &DecalSizeVariable;
    }
  }
  else if (param_1 == Fade) {
    if ((param_3 == None) || (param_2->bApplyFade != false)) {
      pFVar3 = &DecalFadeVariable;
    }
  }
  else {
    pFVar3 = (FNiagaraVariableBase *)0x0;
  }
  return pFVar3;
}

// GetAttributeVariable @ 149448860

FNiagaraVariableBase * __cdecl
NSMLightAttributesPrivate::GetAttributeVariable
          (EModuleAttribute param_1,UNiagaraStatelessModule_LightAttributes *param_2,
          EVariableFilter param_3)

{
  int iVar1;
  FNiagaraVariableBase *pFVar2;
  int *piVar4;
  TStringView<wchar_t> local_18;
  FNiagaraVariableBase *pFVar3;
  
  pFVar3 = (FNiagaraVariableBase *)0x0;
  pFVar2 = (FNiagaraVariableBase *)0x0;
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  iVar1 = 0;
  if ((*piVar4 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    LightRadiusVariable.TypeDefHandle.RegisteredTypeIndex =
         (int)INiagaraModule::Particles_LightRadius._padding_;
    local_18.DataPtr =
         (wchar_t *)FNiagaraConstants::ParticleAttributeNamespaceString.Data.AllocatorInstance.Data;
    LightRadiusVariable.Name.ComparisonIndex.Value =
         (undefined4)INiagaraModule::Particles_LightRadius._padding_;
    LightRadiusVariable.Name.Number = INiagaraModule::Particles_LightRadius._padding_._4_4_;
    local_18.Size = FNiagaraConstants::ParticleAttributeNamespaceString.Data.ArrayNum + -1;
    if (FNiagaraConstants::ParticleAttributeNamespaceString.Data.ArrayNum == 0) {
      local_18.Size = iVar1;
    }
    FNiagaraVariableBase::RemoveRootNamespace(&LightRadiusVariable,&local_18);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar4 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    LightFalloffExponent.TypeDefHandle.RegisteredTypeIndex =
         (int)INiagaraModule::Particles_LightExponent._padding_;
    local_18.DataPtr =
         (wchar_t *)FNiagaraConstants::ParticleAttributeNamespaceString.Data.AllocatorInstance.Data;
    LightFalloffExponent.Name.ComparisonIndex.Value =
         (undefined4)INiagaraModule::Particles_LightExponent._padding_;
    LightFalloffExponent.Name.Number = INiagaraModule::Particles_LightExponent._padding_._4_4_;
    local_18.Size = FNiagaraConstants::ParticleAttributeNamespaceString.Data.ArrayNum + -1;
    if (FNiagaraConstants::ParticleAttributeNamespaceString.Data.ArrayNum == 0) {
      local_18.Size = iVar1;
    }
    FNiagaraVariableBase::RemoveRootNamespace(&LightFalloffExponent,&local_18);
    _Init_thread_footer(&::_TSS1);
  }
  if ((*piVar4 < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    LightDiffuseScale.TypeDefHandle.RegisteredTypeIndex =
         (int)INiagaraModule::Particles_LightDiffuseScale._padding_;
    local_18.DataPtr =
         (wchar_t *)FNiagaraConstants::ParticleAttributeNamespaceString.Data.AllocatorInstance.Data;
    LightDiffuseScale.Name.ComparisonIndex.Value =
         (undefined4)INiagaraModule::Particles_LightDiffuseScale._padding_;
    LightDiffuseScale.Name.Number = INiagaraModule::Particles_LightDiffuseScale._padding_._4_4_;
    local_18.Size = FNiagaraConstants::ParticleAttributeNamespaceString.Data.ArrayNum + -1;
    if (FNiagaraConstants::ParticleAttributeNamespaceString.Data.ArrayNum == 0) {
      local_18.Size = iVar1;
    }
    FNiagaraVariableBase::RemoveRootNamespace(&LightDiffuseScale,&local_18);
    _Init_thread_footer(&::_TSS2);
  }
  if ((*piVar4 < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
    LightSpecularScale.TypeDefHandle.RegisteredTypeIndex =
         (int)INiagaraModule::Particles_LightSpecularScale._padding_;
    local_18.DataPtr =
         (wchar_t *)FNiagaraConstants::ParticleAttributeNamespaceString.Data.AllocatorInstance.Data;
    LightSpecularScale.Name.ComparisonIndex.Value =
         (undefined4)INiagaraModule::Particles_LightSpecularScale._padding_;
    LightSpecularScale.Name.Number = INiagaraModule::Particles_LightSpecularScale._padding_._4_4_;
    local_18.Size = FNiagaraConstants::ParticleAttributeNamespaceString.Data.ArrayNum + -1;
    if (FNiagaraConstants::ParticleAttributeNamespaceString.Data.ArrayNum == 0) {
      local_18.Size = iVar1;
    }
    FNiagaraVariableBase::RemoveRootNamespace(&LightSpecularScale,&local_18);
    _Init_thread_footer(&::_TSS3);
  }
  if ((*piVar4 < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
    LightVolumetricScattering.TypeDefHandle.RegisteredTypeIndex =
         (int)INiagaraModule::Particles_LightVolumetricScattering._padding_;
    local_18.DataPtr =
         (wchar_t *)FNiagaraConstants::ParticleAttributeNamespaceString.Data.AllocatorInstance.Data;
    LightVolumetricScattering.Name.ComparisonIndex.Value =
         (undefined4)INiagaraModule::Particles_LightVolumetricScattering._padding_;
    LightVolumetricScattering.Name.Number =
         INiagaraModule::Particles_LightVolumetricScattering._padding_._4_4_;
    local_18.Size = FNiagaraConstants::ParticleAttributeNamespaceString.Data.ArrayNum + -1;
    if (FNiagaraConstants::ParticleAttributeNamespaceString.Data.ArrayNum == 0) {
      local_18.Size = iVar1;
    }
    FNiagaraVariableBase::RemoveRootNamespace(&LightVolumetricScattering,&local_18);
    _Init_thread_footer(&::_TSS4);
  }
  if (param_1 == Radius) {
    if ((param_3 == None) || (param_2->bApplyRadius != 0)) {
      pFVar2 = &LightRadiusVariable;
    }
  }
  else if (param_1 == Falloff) {
    if ((param_3 == None) || (param_2->bApplyFalloffExponent != 0)) {
      pFVar2 = &LightFalloffExponent;
    }
  }
  else {
    pFVar2 = pFVar3;
    if (param_1 == DiffuseScale) {
      if ((param_3 == None) || (param_2->bApplyDiffuseScale != 0)) {
        pFVar2 = &LightDiffuseScale;
      }
    }
    else if (param_1 == SpecularScale) {
      if ((param_3 == None) || (param_2->bApplySpecularScale != 0)) {
        pFVar2 = &LightSpecularScale;
      }
    }
    else if (param_1 == VolumetricScale) {
      if ((param_3 == None) || (param_2->bApplyVolumetricScattering != 0)) {
        pFVar2 = &LightVolumetricScattering;
      }
    }
    else {
      pFVar2 = (FNiagaraVariableBase *)0x0;
    }
  }
  return pFVar2;
}

// GetNiagaraTickGroup @ 14944a810

int __cdecl NiagaraWorldManagerInternal::GetNiagaraTickGroup(ETickingGroup param_1)

{
  ETickingGroup EVar1;
  ETickingGroup EVar2;
  
  EVar2 = TG_LastDemotable;
  if ((int)param_1 < 6) {
    EVar2 = param_1;
  }
  EVar1 = TG_PrePhysics;
  if (0 < (int)EVar2) {
    EVar1 = EVar2;
  }
  return EVar1;
}

// GetNiagaraTickGroupPriority @ 14944a830

bool __cdecl NiagaraWorldManagerInternal::GetNiagaraTickGroupPriority(int param_1)

{
  return GFirstHighPriTickGroup <= param_1;
}

// GetVolumeResolutionMaxAxisVariable @ 14944f730

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FNiagaraVariable * __cdecl
NiagaraVolumeRendererPropertiesLocal::GetVolumeResolutionMaxAxisVariable
          (FNiagaraVariable *__return_storage_ptr__)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  int iVar5;
  FNiagaraTypeDefinition *pFVar6;
  FNiagaraVariable *pFVar7;
  size_t _Size;
  undefined4 local_res8 [2];
  FName local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      local_res8[0] = 0;
      ::FName::FName(&local_res10,L"Particles.VolumeResolutionMaxAxis");
      Variable._padding_._0_4_ = local_res10.ComparisonIndex.Value;
      Variable._padding_._4_4_ = local_res10.Number;
      Variable._padding_._0_4_ =
           FNiagaraTypeDefinitionHandle::Register
                     ((FNiagaraTypeDefinitionHandle *)&Variable._padding_,
                      &FNiagaraTypeDefinition::IntDef);
      Variable.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      Variable.VarData.ArrayNum = 0;
      Variable.VarData.ArrayMax = 0;
      pFVar6 = FNiagaraTypeDefinitionHandle::Resolve
                         ((FNiagaraTypeDefinitionHandle *)&Variable._padding_);
      iVar5 = FNiagaraTypeDefinition::GetSize(pFVar6);
      if (iVar5 != 4) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("sizeof(T) == TypeDefHandle->GetSize()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                           ,0x5db,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FNiagaraVariable *)(*pcVar3)();
          return pFVar7;
        }
      }
      pFVar6 = FNiagaraTypeDefinitionHandle::Resolve
                         ((FNiagaraTypeDefinitionHandle *)&Variable._padding_);
      iVar5 = FNiagaraTypeDefinition::GetSize(pFVar6);
      if (Variable.VarData.ArrayNum != iVar5) {
        pFVar6 = FNiagaraTypeDefinitionHandle::Resolve
                           ((FNiagaraTypeDefinitionHandle *)&Variable._padding_);
        iVar5 = FNiagaraTypeDefinition::GetSize(pFVar6);
        TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumZeroed
                  (&Variable.VarData,iVar5,Default);
      }
      memcpy(Variable.VarData.AllocatorInstance.Data,local_res8,(longlong)Variable.VarData.ArrayNum)
      ;
      atexit(`NiagaraVolumeRendererPropertiesLocal::GetVolumeResolutionMaxAxisVariable'::__l2::
             _dynamic_atexit_destructor_for__Variable__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pTVar1 = &__return_storage_ptr__->VarData;
  __return_storage_ptr__->_padding_ = Variable._padding_;
  *(int *)&__return_storage_ptr__->_padding_ = (int)Variable._padding_;
  piVar2 = &(__return_storage_ptr__->VarData).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  _Src = Variable.VarData.AllocatorInstance;
  iVar5 = Variable.VarData.ArrayNum;
  _Size = (size_t)Variable.VarData.ArrayNum;
  (__return_storage_ptr__->VarData).ArrayNum = Variable.VarData.ArrayNum;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar5,0,&pTVar1->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src.Data,_Size);
  }
  return __return_storage_ptr__;
}

// GetVolumeRotationVariable @ 14944f920

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FNiagaraVariable * __cdecl
NiagaraVolumeRendererPropertiesLocal::GetVolumeRotationVariable
          (FNiagaraVariable *__return_storage_ptr__)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  int iVar5;
  FNiagaraTypeDefinition *pFVar6;
  FNiagaraVariable *pFVar7;
  size_t _Size;
  FName local_res8;
  TQuat<float> local_28;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      local_28 = UE::Math::TQuat<float>::Identity;
      ::FName::FName(&local_res8,L"Particles.VolumeRotation");
      Variable._padding_._0_4_ = local_res8.ComparisonIndex.Value;
      Variable._padding_._4_4_ = local_res8.Number;
      Variable._padding_._0_4_ =
           FNiagaraTypeDefinitionHandle::Register
                     ((FNiagaraTypeDefinitionHandle *)&Variable._padding_,
                      &FNiagaraTypeDefinition::QuatDef);
      Variable.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      Variable.VarData.ArrayNum = 0;
      Variable.VarData.ArrayMax = 0;
      pFVar6 = FNiagaraTypeDefinitionHandle::Resolve
                         ((FNiagaraTypeDefinitionHandle *)&Variable._padding_);
      iVar5 = FNiagaraTypeDefinition::GetSize(pFVar6);
      if (iVar5 != 0x10) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("sizeof(T) == TypeDefHandle->GetSize()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                           ,0x5db,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FNiagaraVariable *)(*pcVar3)();
          return pFVar7;
        }
      }
      pFVar6 = FNiagaraTypeDefinitionHandle::Resolve
                         ((FNiagaraTypeDefinitionHandle *)&Variable._padding_);
      iVar5 = FNiagaraTypeDefinition::GetSize(pFVar6);
      if (Variable.VarData.ArrayNum != iVar5) {
        pFVar6 = FNiagaraTypeDefinitionHandle::Resolve
                           ((FNiagaraTypeDefinitionHandle *)&Variable._padding_);
        iVar5 = FNiagaraTypeDefinition::GetSize(pFVar6);
        TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumZeroed
                  (&Variable.VarData,iVar5,Default);
      }
      memcpy(Variable.VarData.AllocatorInstance.Data,&local_28,(longlong)Variable.VarData.ArrayNum);
      atexit(`NiagaraVolumeRendererPropertiesLocal::GetVolumeRotationVariable'::__l2::
             _dynamic_atexit_destructor_for__Variable__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pTVar1 = &__return_storage_ptr__->VarData;
  __return_storage_ptr__->_padding_ = Variable._padding_;
  *(int *)&__return_storage_ptr__->_padding_ = (int)Variable._padding_;
  piVar2 = &(__return_storage_ptr__->VarData).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  _Src = Variable.VarData.AllocatorInstance;
  iVar5 = Variable.VarData.ArrayNum;
  _Size = (size_t)Variable.VarData.ArrayNum;
  (__return_storage_ptr__->VarData).ArrayNum = Variable.VarData.ArrayNum;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar5,0,&pTVar1->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src.Data,_Size);
  }
  return __return_storage_ptr__;
}

// GetVolumeScaleVariable @ 14944fb20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FNiagaraVariable * __cdecl
NiagaraVolumeRendererPropertiesLocal::GetVolumeScaleVariable
          (FNiagaraVariable *__return_storage_ptr__)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  int iVar5;
  FNiagaraTypeDefinition *pFVar6;
  FNiagaraVariable *pFVar7;
  size_t _Size;
  FName local_res8;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      local_28 = 0x3f800000;
      local_24 = 0x3f800000;
      local_20 = 0x3f800000;
      ::FName::FName(&local_res8,L"Particles.VolumeScale");
      Variable._padding_._0_4_ = local_res8.ComparisonIndex.Value;
      Variable._padding_._4_4_ = local_res8.Number;
      Variable._padding_._0_4_ =
           FNiagaraTypeDefinitionHandle::Register
                     ((FNiagaraTypeDefinitionHandle *)&Variable._padding_,
                      &FNiagaraTypeDefinition::Vec3Def);
      Variable.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      Variable.VarData.ArrayNum = 0;
      Variable.VarData.ArrayMax = 0;
      pFVar6 = FNiagaraTypeDefinitionHandle::Resolve
                         ((FNiagaraTypeDefinitionHandle *)&Variable._padding_);
      iVar5 = FNiagaraTypeDefinition::GetSize(pFVar6);
      if (iVar5 != 0xc) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("sizeof(T) == TypeDefHandle->GetSize()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                           ,0x5db,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FNiagaraVariable *)(*pcVar3)();
          return pFVar7;
        }
      }
      pFVar6 = FNiagaraTypeDefinitionHandle::Resolve
                         ((FNiagaraTypeDefinitionHandle *)&Variable._padding_);
      iVar5 = FNiagaraTypeDefinition::GetSize(pFVar6);
      if (Variable.VarData.ArrayNum != iVar5) {
        pFVar6 = FNiagaraTypeDefinitionHandle::Resolve
                           ((FNiagaraTypeDefinitionHandle *)&Variable._padding_);
        iVar5 = FNiagaraTypeDefinition::GetSize(pFVar6);
        TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumZeroed
                  (&Variable.VarData,iVar5,Default);
      }
      memcpy(Variable.VarData.AllocatorInstance.Data,&local_28,(longlong)Variable.VarData.ArrayNum);
      atexit(`NiagaraVolumeRendererPropertiesLocal::GetVolumeScaleVariable'::__l2::
             _dynamic_atexit_destructor_for__Variable__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pTVar1 = &__return_storage_ptr__->VarData;
  __return_storage_ptr__->_padding_ = Variable._padding_;
  *(int *)&__return_storage_ptr__->_padding_ = (int)Variable._padding_;
  piVar2 = &(__return_storage_ptr__->VarData).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  _Src = Variable.VarData.AllocatorInstance;
  iVar5 = Variable.VarData.ArrayNum;
  _Size = (size_t)Variable.VarData.ArrayNum;
  (__return_storage_ptr__->VarData).ArrayNum = Variable.VarData.ArrayNum;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar5,0,&pTVar1->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src.Data,_Size);
  }
  return __return_storage_ptr__;
}

// GetVolumeWorldSpaceSizeVariable @ 14944fd20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FNiagaraVariable * __cdecl
NiagaraVolumeRendererPropertiesLocal::GetVolumeWorldSpaceSizeVariable
          (FNiagaraVariable *__return_storage_ptr__)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  int iVar5;
  FNiagaraTypeDefinition *pFVar6;
  FNiagaraVariable *pFVar7;
  size_t _Size;
  FName local_res8;
  undefined8 local_28;
  float local_20;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      local_28 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_20 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      ::FName::FName(&local_res8,L"Particles.VolumeWorldSpaceSize");
      Variable._padding_._0_4_ = local_res8.ComparisonIndex.Value;
      Variable._padding_._4_4_ = local_res8.Number;
      Variable._padding_._0_4_ =
           FNiagaraTypeDefinitionHandle::Register
                     ((FNiagaraTypeDefinitionHandle *)&Variable._padding_,
                      &FNiagaraTypeDefinition::Vec3Def);
      Variable.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      Variable.VarData.ArrayNum = 0;
      Variable.VarData.ArrayMax = 0;
      pFVar6 = FNiagaraTypeDefinitionHandle::Resolve
                         ((FNiagaraTypeDefinitionHandle *)&Variable._padding_);
      iVar5 = FNiagaraTypeDefinition::GetSize(pFVar6);
      if (iVar5 != 0xc) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("sizeof(T) == TypeDefHandle->GetSize()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                           ,0x5db,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FNiagaraVariable *)(*pcVar3)();
          return pFVar7;
        }
      }
      pFVar6 = FNiagaraTypeDefinitionHandle::Resolve
                         ((FNiagaraTypeDefinitionHandle *)&Variable._padding_);
      iVar5 = FNiagaraTypeDefinition::GetSize(pFVar6);
      if (Variable.VarData.ArrayNum != iVar5) {
        pFVar6 = FNiagaraTypeDefinitionHandle::Resolve
                           ((FNiagaraTypeDefinitionHandle *)&Variable._padding_);
        iVar5 = FNiagaraTypeDefinition::GetSize(pFVar6);
        TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumZeroed
                  (&Variable.VarData,iVar5,Default);
      }
      memcpy(Variable.VarData.AllocatorInstance.Data,&local_28,(longlong)Variable.VarData.ArrayNum);
      atexit(`NiagaraVolumeRendererPropertiesLocal::GetVolumeWorldSpaceSizeVariable'::__l2::
             _dynamic_atexit_destructor_for__Variable__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pTVar1 = &__return_storage_ptr__->VarData;
  __return_storage_ptr__->_padding_ = Variable._padding_;
  *(int *)&__return_storage_ptr__->_padding_ = (int)Variable._padding_;
  piVar2 = &(__return_storage_ptr__->VarData).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  _Src = Variable.VarData.AllocatorInstance;
  iVar5 = Variable.VarData.ArrayNum;
  _Size = (size_t)Variable.VarData.ArrayNum;
  (__return_storage_ptr__->VarData).ArrayNum = Variable.VarData.ArrayNum;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar5,0,&pTVar1->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src.Data,_Size);
  }
  return __return_storage_ptr__;
}

// Initialize @ 1494520c0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __cdecl NiagaraStatelessCommon::Initialize(void)

{
  FName FVar1;
  FName local_res8 [4];
  FNiagaraTypeDefinitionHandle local_10 [2];
  
  ::FName::FName(local_res8,L"CameraOffset");
  FVar1 = local_res8[0];
  GGlobals.CameraOffsetVariable.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_10,&FNiagaraTypeDefinition::FloatDef);
  GGlobals.CameraOffsetVariable.Name = FVar1;
  ::FName::FName(local_res8,L"Color");
  FVar1 = local_res8[0];
  GGlobals.ColorVariable.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_10,&FNiagaraTypeDefinition::ColorDef);
  GGlobals.ColorVariable.Name = FVar1;
  ::FName::FName(local_res8,L"DynamicMaterialParameter");
  FVar1 = local_res8[0];
  GGlobals.DynamicMaterialParameters0Variable.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_10,&FNiagaraTypeDefinition::Vec4Def);
  GGlobals.DynamicMaterialParameters0Variable.Name = FVar1;
  ::FName::FName(local_res8,L"DynamicMaterialParameter1");
  FVar1 = local_res8[0];
  GGlobals.DynamicMaterialParameters1Variable.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_10,&FNiagaraTypeDefinition::Vec4Def);
  GGlobals.DynamicMaterialParameters1Variable.Name = FVar1;
  ::FName::FName(local_res8,L"DynamicMaterialParameter2");
  FVar1 = local_res8[0];
  GGlobals.DynamicMaterialParameters2Variable.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_10,&FNiagaraTypeDefinition::Vec4Def);
  GGlobals.DynamicMaterialParameters2Variable.Name = FVar1;
  ::FName::FName(local_res8,L"DynamicMaterialParameter3");
  FVar1 = local_res8[0];
  GGlobals.DynamicMaterialParameters3Variable.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_10,&FNiagaraTypeDefinition::Vec4Def);
  GGlobals.DynamicMaterialParameters3Variable.Name = FVar1;
  ::FName::FName(local_res8,L"MaterialRandom");
  FVar1 = local_res8[0];
  GGlobals.MaterialRandomVariable.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_10,&FNiagaraTypeDefinition::FloatDef);
  GGlobals.MaterialRandomVariable.Name = FVar1;
  ::FName::FName(local_res8,L"MeshIndex");
  FVar1 = local_res8[0];
  GGlobals.MeshIndexVariable.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_10,&FNiagaraTypeDefinition::IntDef);
  GGlobals.MeshIndexVariable.Name = FVar1;
  ::FName::FName(local_res8,L"MeshOrientation");
  FVar1 = local_res8[0];
  GGlobals.MeshOrientationVariable.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_10,&FNiagaraTypeDefinition::QuatDef);
  GGlobals.MeshOrientationVariable.Name = FVar1;
  ::FName::FName(local_res8,L"Position");
  FVar1 = local_res8[0];
  GGlobals.PositionVariable.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_10,&FNiagaraTypeDefinition::PositionDef);
  GGlobals.PositionVariable.Name = FVar1;
  ::FName::FName(local_res8,L"RibbonWidth");
  FVar1 = local_res8[0];
  GGlobals.RibbonWidthVariable.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_10,&FNiagaraTypeDefinition::FloatDef);
  GGlobals.RibbonWidthVariable.Name = FVar1;
  ::FName::FName(local_res8,L"Scale");
  FVar1 = local_res8[0];
  GGlobals.ScaleVariable.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_10,&FNiagaraTypeDefinition::Vec3Def);
  GGlobals.ScaleVariable.Name = FVar1;
  ::FName::FName(local_res8,L"SpriteAlignment");
  FVar1 = local_res8[0];
  GGlobals.SpriteAlignmentVariable.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_10,&FNiagaraTypeDefinition::Vec3Def);
  GGlobals.SpriteAlignmentVariable.Name = FVar1;
  ::FName::FName(local_res8,L"SpriteFacing");
  FVar1 = local_res8[0];
  GGlobals.SpriteFacingVariable.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_10,&FNiagaraTypeDefinition::Vec3Def);
  GGlobals.SpriteFacingVariable.Name = FVar1;
  ::FName::FName(local_res8,L"SpriteSize");
  FVar1 = local_res8[0];
  GGlobals.SpriteSizeVariable.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_10,&FNiagaraTypeDefinition::Vec2Def);
  GGlobals.SpriteSizeVariable.Name = FVar1;
  ::FName::FName(local_res8,L"SpriteRotation");
  FVar1 = local_res8[0];
  GGlobals.SpriteRotationVariable.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_10,&FNiagaraTypeDefinition::FloatDef);
  GGlobals.SpriteRotationVariable.Name = FVar1;
  ::FName::FName(local_res8,L"SubImageIndex");
  FVar1 = local_res8[0];
  GGlobals.SubImageIndexVariable.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_10,&FNiagaraTypeDefinition::FloatDef);
  GGlobals.SubImageIndexVariable.Name = FVar1;
  ::FName::FName(local_res8,L"UniqueID");
  FVar1 = local_res8[0];
  GGlobals.UniqueIDVariable.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_10,&FNiagaraTypeDefinition::IntDef);
  GGlobals.UniqueIDVariable.Name = FVar1;
  ::FName::FName(local_res8,L"Velocity");
  FVar1 = local_res8[0];
  GGlobals.VelocityVariable.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_10,&FNiagaraTypeDefinition::Vec3Def);
  GGlobals.VelocityVariable.Name = FVar1;
  ::FName::FName(local_res8,L"Previous.CameraOffset");
  FVar1 = local_res8[0];
  GGlobals.PreviousCameraOffsetVariable.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_10,&FNiagaraTypeDefinition::FloatDef);
  GGlobals.PreviousCameraOffsetVariable.Name = FVar1;
  ::FName::FName(local_res8,L"Previous.MeshOrientation");
  FVar1 = local_res8[0];
  GGlobals.PreviousMeshOrientationVariable.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_10,&FNiagaraTypeDefinition::QuatDef);
  GGlobals.PreviousMeshOrientationVariable.Name = FVar1;
  ::FName::FName(local_res8,L"Previous.Position");
  FVar1 = local_res8[0];
  GGlobals.PreviousPositionVariable.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_10,&FNiagaraTypeDefinition::PositionDef);
  GGlobals.PreviousPositionVariable.Name = FVar1;
  ::FName::FName(local_res8,L"Previous.RibbonWidth");
  FVar1 = local_res8[0];
  GGlobals.PreviousRibbonWidthVariable.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_10,&FNiagaraTypeDefinition::FloatDef);
  GGlobals.PreviousRibbonWidthVariable.Name = FVar1;
  ::FName::FName(local_res8,L"Previous.Scale");
  FVar1 = local_res8[0];
  GGlobals.PreviousScaleVariable.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_10,&FNiagaraTypeDefinition::Vec3Def);
  GGlobals.PreviousScaleVariable.Name = FVar1;
  ::FName::FName(local_res8,L"Previous.SpriteAlignment");
  FVar1 = local_res8[0];
  GGlobals.PreviousSpriteAlignmentVariable.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_10,&FNiagaraTypeDefinition::Vec3Def);
  GGlobals.PreviousSpriteAlignmentVariable.Name = FVar1;
  ::FName::FName(local_res8,L"Previous.SpriteFacing");
  FVar1 = local_res8[0];
  GGlobals.PreviousSpriteFacingVariable.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_10,&FNiagaraTypeDefinition::Vec3Def);
  GGlobals.PreviousSpriteFacingVariable.Name = FVar1;
  ::FName::FName(local_res8,L"Previous.SpriteSize");
  FVar1 = local_res8[0];
  GGlobals.PreviousSpriteSizeVariable.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_10,&FNiagaraTypeDefinition::Vec2Def);
  GGlobals.PreviousSpriteSizeVariable.Name = FVar1;
  ::FName::FName(local_res8,L"Previous.SpriteRotation");
  FVar1 = local_res8[0];
  GGlobals.PreviousSpriteRotationVariable.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_10,&FNiagaraTypeDefinition::FloatDef);
  GGlobals.PreviousSpriteRotationVariable.Name = FVar1;
  ::FName::FName(local_res8,L"Previous.Velocity");
  GGlobals.PreviousVelocityVariable.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_10,&FNiagaraTypeDefinition::Vec3Def);
  GGlobals.PreviousVelocityVariable.Name = local_res8[0];
  UNiagaraStatelessEmitterTemplate::InitCDOPropertiesAfterModuleStartup();
  return;
}

// IntegratePosition @ 149452ea0

TVector<float> * __cdecl
NiagaraStatelessModuleSolveVelocitiesAndForcesPrivate::IntegratePosition
          (TVector<float> *__return_storage_ptr__,float param_1,float param_2,
          TVector<float> *param_3,TVector<float> *param_4,TVector<float> *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = __real_3f000000;
  fVar2 = __real_3f800000;
  if (param_2 <= __real_38d1b717) {
    fVar4 = (param_5->field0_0x0)._s_0.Z * __real_3f000000;
    fVar2 = (param_3->field0_0x0)._s_0.Y;
    fVar3 = (param_4->field0_0x0)._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         ((param_5->field0_0x0)._s_0.X * __real_3f000000 * param_1 +
         (param_3->field0_0x0)._s_0.X + (param_4->field0_0x0)._s_0.X) * param_1;
    fVar2 = ((param_5->field0_0x0)._s_0.Y * fVar1 * param_1 + fVar2 + fVar3) * param_1;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         (fVar4 * param_1 + (param_3->field0_0x0)._s_0.Z + (param_4->field0_0x0)._s_0.Z) * param_1;
  }
  else {
    fVar3 = __real_3f800000 / param_2;
    fVar4 = fVar3 * (param_5->field0_0x0)._s_0.X + (param_4->field0_0x0)._s_0.X;
    fVar5 = fVar3 * (param_5->field0_0x0)._s_0.Y + (param_4->field0_0x0)._s_0.Y;
    fVar6 = fVar3 * (param_5->field0_0x0)._s_0.Z + (param_4->field0_0x0)._s_0.Z;
    fVar1 = expf((float)((uint)(param_1 * param_2) ^ __xmm_80000000800000008000000080000000));
    fVar3 = (fVar2 - fVar1) * fVar3;
    fVar2 = ((param_3->field0_0x0)._s_0.Y - fVar5) * fVar3 + fVar5 * param_1;
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         ((param_3->field0_0x0)._s_0.X - fVar4) * fVar3 + fVar4 * param_1;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         ((param_3->field0_0x0)._s_0.Z - fVar6) * fVar3 + fVar6 * param_1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar2;
  return __return_storage_ptr__;
}

// IsValid @ 149454650

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */
/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

bool __cdecl NiagaraStatelessInternal::IsValid(FNiagaraStatelessEmitterData *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FNiagaraDataSetCompiledData *pFVar5;
  FShaderParametersMetadata *pFVar6;
  FRHIUniformBufferLayout *pFVar7;
  FRHIUniformBufferLayout *pFVar8;
  longlong lVar9;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  if (((((param_1->SpawnInfos).ArrayNum != 0) && ((param_1->RendererProperties).ArrayNum != 0)) &&
      (param_1->EmitterTemplate != (UNiagaraStatelessEmitterTemplate *)0x0)) &&
     ((((param_1->ParticleDataSetCompiledData).Object != (FNiagaraDataSetCompiledData *)0x0 &&
       (pFVar5 = TSharedPtr<FNiagaraDataSetCompiledData,1>::operator->
                           (&param_1->ParticleDataSetCompiledData),
       (pFVar5->Variables).ArrayNum != 0)) &&
      (pFVar6 = FNiagaraStatelessEmitterData::GetShaderParametersMetadata(param_1),
      pFVar6 != (FShaderParametersMetadata *)0x0)))) {
    pFVar7 = FShaderParametersMetadata::GetLayout(pFVar6);
    if ((pFVar7->UniformBuffers).ArrayNum != 0) {
      local_res8[0] = 0;
      bVar3 = `NiagaraStatelessInternal::IsValid'::__l15::<lambda_1>::operator()(local_res8);
      if (!bVar3) {
        return false;
      }
    }
    local_10 = (pFVar6->Members).ArrayNum;
    lVar9 = (longlong)local_10;
    _Src = (pFVar6->Members).AllocatorInstance.Data;
    local_18.Data = (FScriptContainerElement *)0x0;
    if (local_10 == 0) {
      local_c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,local_10,0,&local_18,local_10,&local_c);
      memcpy(local_18.Data,_Src,lVar9 * 0x30);
    }
    if (local_10 != 0) {
      if ((local_10 < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if (local_18.Data[0x18] == (FScriptContainerElement)0x15) {
        pFVar6 = NiagaraStateless::FCommonShaderParameters::FTypeInfo::GetStructMetadata();
        pFVar7 = FShaderParametersMetadata::GetLayout(pFVar6);
        if ((local_10 < 1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        pFVar8 = FShaderParametersMetadata::GetLayout
                           (*(FShaderParametersMetadata **)(local_18.Data + 0x28));
        if ((((pFVar8->ConstantBufferSize == pFVar7->ConstantBufferSize) &&
             (pFVar8->StaticSlot == pFVar7->StaticSlot)) &&
            (pFVar8->BindingFlags == pFVar7->BindingFlags)) &&
           ((iVar1 = (pFVar8->Resources).ArrayNum, iVar1 == (pFVar7->Resources).ArrayNum &&
            (bVar3 = CompareItems<FRHIUniformBufferResource,int>
                               ((FRHIUniformBufferResource *)
                                (pFVar8->Resources).AllocatorInstance.Data,
                                (FRHIUniformBufferResource *)
                                (pFVar7->Resources).AllocatorInstance.Data,iVar1), bVar3)))) {
          if (local_18.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_18.Data);
          }
          return true;
        }
      }
    }
    `NiagaraStatelessInternal::IsValid'::__l21::<lambda_2>::operator()(local_res10);
    if (local_18.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data);
    }
  }
  return false;
}

// ParticleSimulate @ 1494586d0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __cdecl
NSMCalculateAccurateVelocityPrivate::ParticleSimulate(FParticleSimulationContext *param_1)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float local_88;
  float local_78;
  
  uVar7 = param_1->BuiltDataOffset + 3U & 0xfffffffc;
  iVar2 = uVar7 + 0x10;
  param_1->BuiltDataOffset = iVar2;
  if (((param_1->BuiltData).ArrayNum < iVar2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("BuiltDataOffset <= BuiltData.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                         ,0x110,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar6 = param_1->NumInstances;
  fVar1 = param_1->InvDeltaTime;
  uVar8 = 0;
  piVar9 = (int *)((param_1->BuiltData).DataPtr + (int)uVar7);
  uVar14 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  uVar5 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  if (uVar6 != 0) {
    do {
      iVar2 = *piVar9;
      if ((uVar6 <= uVar8) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("iInstance < NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                             ,0x55,L""),
         uVar14 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_,
         uVar5 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z, bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (iVar2 < 0) {
        fVar11 = (float)((ulonglong)uVar14 >> 0x20);
        local_88 = (float)uVar14;
        fVar10 = (float)uVar5;
      }
      else {
        fVar10 = NiagaraStateless::FParticleSimulationContext::ReadParticleVariableComponent<float>
                           (param_1,iVar2,uVar8,2);
        fVar11 = NiagaraStateless::FParticleSimulationContext::ReadParticleVariableComponent<float>
                           (param_1,iVar2,uVar8,1);
        local_88 = NiagaraStateless::FParticleSimulationContext::
                   ReadParticleVariableComponent<float>(param_1,iVar2,uVar8,0);
        uVar14 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        uVar5 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      }
      iVar2 = piVar9[1];
      if ((param_1->NumInstances <= uVar8) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("iInstance < NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                             ,0x55,L""),
         uVar14 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_,
         uVar5 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z, bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (iVar2 < 0) {
        fVar13 = (float)((ulonglong)uVar14 >> 0x20);
        local_78 = (float)uVar14;
        fVar12 = (float)uVar5;
      }
      else {
        fVar12 = NiagaraStateless::FParticleSimulationContext::ReadParticleVariableComponent<float>
                           (param_1,iVar2,uVar8,2);
        fVar13 = NiagaraStateless::FParticleSimulationContext::ReadParticleVariableComponent<float>
                           (param_1,iVar2,uVar8,1);
        local_78 = NiagaraStateless::FParticleSimulationContext::
                   ReadParticleVariableComponent<float>(param_1,iVar2,uVar8,0);
        uVar14 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        uVar5 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      }
      iVar2 = piVar9[2];
      fVar15 = (local_88 - local_78) * fVar1;
      fVar11 = (fVar11 - fVar13) * fVar1;
      fVar10 = (fVar10 - fVar12) * fVar1;
      if ((param_1->NumInstances <= uVar8) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("iInstance < NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                             ,0x5f,L""),
         uVar14 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_,
         uVar5 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z, bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (-1 < iVar2) {
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar2,uVar8,0,fVar15);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar2,uVar8,1,fVar11);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar2,uVar8,2,fVar10);
        uVar14 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        uVar5 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      }
      iVar2 = piVar9[3];
      if ((param_1->NumInstances <= uVar8) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("iInstance < NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                             ,0x5f,L""),
         uVar14 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_,
         uVar5 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z, bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (-1 < iVar2) {
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar2,uVar8,0,fVar15);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar2,uVar8,1,fVar11);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar2,uVar8,2,fVar10);
        uVar14 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        uVar5 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      }
      uVar6 = param_1->NumInstances;
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar6);
  }
  return;
}

// ParticleSimulate @ 149458a90

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __cdecl NSMCameraOffsetPrivate::ParticleSimulate(FParticleSimulationContext *param_1)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  TIntVector3<unsigned_int> *pTVar8;
  float fVar9;
  float fVar10;
  
  uVar6 = param_1->BuiltDataOffset + 3U & 0xfffffffc;
  iVar1 = uVar6 + 0x14;
  param_1->BuiltDataOffset = iVar1;
  if (((param_1->BuiltData).ArrayNum < iVar1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("BuiltDataOffset <= BuiltData.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                         ,0x110,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pvVar2 = param_1->RequiredComponents[3];
  pvVar3 = param_1->RequiredComponents[5];
  uVar7 = 0;
  pTVar8 = (TIntVector3<unsigned_int> *)((param_1->BuiltData).DataPtr + (int)uVar6);
  if (param_1->NumInstances != 0) {
    do {
      fVar9 = *(float *)((longlong)pvVar3 + (ulonglong)uVar7 * 4);
      if (((pTVar8->field0_0x0)._s_0.X & 0xc000000) == 0xc000000) {
        fVar9 = NiagaraStateless::FParticleSimulationContext::GetDistributionRandomValue<float>
                          (param_1,pTVar8,uVar7,0);
        fVar10 = fVar9;
      }
      else {
        fVar10 = NiagaraStateless::FParticleSimulationContext::GetDistributionTimeValue<float>
                           (param_1,pTVar8,*(float *)((longlong)pvVar2 + (ulonglong)uVar7 * 4));
        fVar9 = NiagaraStateless::FParticleSimulationContext::GetDistributionTimeValue<float>
                          (param_1,pTVar8,fVar9);
      }
      uVar6 = pTVar8[1].field0_0x0._s_0.X;
      if ((param_1->NumInstances <= uVar7) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("iInstance < NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                             ,0x5d,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (-1 < (int)uVar6) {
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,uVar6,uVar7,0,fVar10);
      }
      uVar6 = pTVar8[1].field0_0x0._s_0.Y;
      if ((param_1->NumInstances <= uVar7) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("iInstance < NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                             ,0x5d,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (-1 < (int)uVar6) {
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,uVar6,uVar7,0,fVar9);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < param_1->NumInstances);
  }
  return;
}

// ParticleSimulate @ 149458c30

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __cdecl NSMDecalAttributesPrivate::ParticleSimulate(FParticleSimulationContext *param_1)

{
  int iVar1;
  uchar *puVar2;
  void *pvVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  bool bVar20;
  TQuat<float> *pTVar21;
  uint uVar22;
  uint uVar23;
  TIntVector3<unsigned_int> *pTVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  TVector<float>_u_0 local_78;
  TVector<float>_u_0 local_68;
  TRotator<float> local_58;
  TQuat<float> local_48 [3];
  
  uVar22 = param_1->BuiltDataOffset + 3U & 0xfffffffc;
  param_1->BuiltDataOffset = uVar22 + 0x34;
  if (((param_1->BuiltData).ArrayNum < (int)(uVar22 + 0x34)) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("BuiltDataOffset <= BuiltData.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                          ,0x110,L""), bVar20)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  puVar2 = (param_1->BuiltData).DataPtr;
  pvVar3 = param_1->RequiredComponents[3];
  pTVar21 = NiagaraStateless::FParticleSimulationContext::GetToSimulationRotation
                      (param_1,*(ENiagaraCoordinateSpace *)(puVar2 + (int)uVar22));
  uVar23 = 0;
  fVar16 = pTVar21->X;
  fVar17 = pTVar21->Y;
  fVar18 = pTVar21->Z;
  fVar19 = pTVar21->W;
  if (param_1->NumInstances != 0) {
    do {
      if (*(int *)(puVar2 + (longlong)(int)uVar22 + 0x28) != -1) {
        pTVar24 = (TIntVector3<unsigned_int> *)(puVar2 + (longlong)(int)uVar22 + 4);
        if (((pTVar24->field0_0x0)._s_0.X & 0xc000000) == 0xc000000) {
          NiagaraStateless::FParticleSimulationContext::
          GetDistributionRandomValue<UE::Math::TVector<float>_>
                    (param_1,(TVector<float> *)&local_78._s_0,pTVar24,uVar23,0);
        }
        else {
          NiagaraStateless::FParticleSimulationContext::
          GetDistributionTimeValue<UE::Math::TVector<float>_>
                    (param_1,(TVector<float> *)&local_78._s_0,pTVar24,
                     *(float *)((longlong)pvVar3 + (ulonglong)uVar23 * 4));
        }
        local_58.Pitch = local_78._s_0.X;
        local_58.Roll = local_78._s_0.Z;
        local_58.Yaw = local_78._s_0.Y;
        UE::Math::TRotator<float>::Quaternion(&local_58,local_48);
        iVar1 = *(int *)(puVar2 + (longlong)(int)uVar22 + 0x28);
        fVar38 = local_48[0].W * fVar16;
        fVar39 = local_48[0].Z * fVar16;
        fVar40 = local_48[0].Y * fVar16;
        fVar41 = local_48[0].X * fVar16;
        fVar25 = fVar19 * local_48[0].X;
        fVar27 = fVar19 * local_48[0].Y;
        fVar28 = fVar19 * local_48[0].Z;
        fVar29 = fVar19 * local_48[0].W;
        fVar26 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0];
        fVar7 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1];
        fVar10 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2];
        fVar13 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3];
        fVar30 = local_48[0].Z * fVar17;
        fVar31 = local_48[0].W * fVar17;
        fVar32 = local_48[0].X * fVar17;
        fVar33 = local_48[0].Y * fVar17;
        fVar34 = local_48[0].Y * fVar18;
        fVar35 = local_48[0].X * fVar18;
        fVar36 = local_48[0].W * fVar18;
        fVar37 = local_48[0].Z * fVar18;
        fVar5 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0];
        fVar8 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1];
        fVar11 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2];
        fVar14 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3];
        fVar6 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
        fVar9 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
        fVar12 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
        fVar15 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
        if ((param_1->NumInstances <= uVar23) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("iInstance < NumInstances",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                                ,0x61,L""), bVar20)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (-1 < iVar1) {
          NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                    (param_1,iVar1,uVar23,0,
                     fVar38 * fVar26 + fVar25 + fVar30 * fVar5 + fVar34 * fVar6);
          NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                    (param_1,iVar1,uVar23,1,
                     fVar39 * fVar7 + fVar27 + fVar31 * fVar8 + fVar35 * fVar9);
          NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                    (param_1,iVar1,uVar23,2,
                     fVar40 * fVar10 + fVar28 + fVar32 * fVar11 + fVar36 * fVar12);
          NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                    (param_1,iVar1,uVar23,3,
                     fVar41 * fVar13 + fVar29 + fVar33 * fVar14 + fVar37 * fVar15);
        }
      }
      if (*(int *)(puVar2 + (longlong)(int)uVar22 + 0x2c) != -1) {
        pTVar24 = (TIntVector3<unsigned_int> *)(puVar2 + (longlong)(int)uVar22 + 0x10);
        if (((pTVar24->field0_0x0)._s_0.X & 0xc000000) == 0xc000000) {
          NiagaraStateless::FParticleSimulationContext::
          GetDistributionRandomValue<UE::Math::TVector<float>_>
                    (param_1,(TVector<float> *)&local_68._s_0,pTVar24,uVar23,0);
        }
        else {
          NiagaraStateless::FParticleSimulationContext::
          GetDistributionTimeValue<UE::Math::TVector<float>_>
                    (param_1,(TVector<float> *)&local_68._s_0,pTVar24,
                     *(float *)((longlong)pvVar3 + (ulonglong)uVar23 * 4));
        }
        iVar1 = *(int *)(puVar2 + (longlong)(int)uVar22 + 0x2c);
        if ((param_1->NumInstances <= uVar23) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("iInstance < NumInstances",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                                ,0x5f,L""), bVar20)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (-1 < iVar1) {
          NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                    (param_1,iVar1,uVar23,0,local_68._s_0.X);
          NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                    (param_1,iVar1,uVar23,1,local_68._s_0.Y);
          NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                    (param_1,iVar1,uVar23,2,local_68._s_0.Z);
        }
      }
      if (*(int *)(puVar2 + (longlong)(int)uVar22 + 0x30) != -1) {
        pTVar24 = (TIntVector3<unsigned_int> *)(puVar2 + (longlong)(int)uVar22 + 0x1c);
        if (((pTVar24->field0_0x0)._s_0.X & 0xc000000) == 0xc000000) {
          fVar26 = NiagaraStateless::FParticleSimulationContext::GetDistributionRandomValue<float>
                             (param_1,pTVar24,uVar23,0);
        }
        else {
          fVar26 = NiagaraStateless::FParticleSimulationContext::GetDistributionTimeValue<float>
                             (param_1,pTVar24,*(float *)((longlong)pvVar3 + (ulonglong)uVar23 * 4));
        }
        iVar1 = *(int *)(puVar2 + (longlong)(int)uVar22 + 0x30);
        if ((param_1->NumInstances <= uVar23) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("iInstance < NumInstances",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                                ,0x5d,L""), bVar20)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (-1 < iVar1) {
          NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                    (param_1,iVar1,uVar23,0,fVar26);
        }
      }
      uVar23 = uVar23 + 1;
    } while (uVar23 < param_1->NumInstances);
  }
  return;
}

// ParticleSimulate @ 149459000

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __cdecl
NSMDynamicMaterialParametersPrivate::ParticleSimulate(FParticleSimulationContext *param_1)

{
  int iVar1;
  float fVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  TIntVector3<unsigned_int> *pTVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  ulonglong uVar11;
  uint *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  uVar7 = param_1->BuiltDataOffset + 3U & 0xfffffffc;
  iVar1 = uVar7 + 0xd4;
  param_1->BuiltDataOffset = iVar1;
  if (((param_1->BuiltData).ArrayNum < iVar1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("BuiltDataOffset <= BuiltData.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                         ,0x110,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pvVar3 = param_1->RequiredComponents[3];
  uVar11 = 0;
  puVar9 = (uint *)((param_1->BuiltData).DataPtr + (int)uVar7);
  if (param_1->NumInstances != 0) {
    do {
      pTVar6 = (TIntVector3<unsigned_int> *)(puVar9 + 7);
      puVar12 = puVar9 + 0x31;
      uVar7 = 2;
      do {
        uVar8 = *puVar9 >> ((char)uVar7 - 2U & 0x1f);
        uVar10 = (uint)uVar11;
        if ((uVar8 & 0xf) != 0) {
          fVar2 = *(float *)((longlong)pvVar3 + uVar11 * 4);
          fVar16 = 0.0;
          if ((uVar8 & 1) != 0) {
            if ((pTVar6[-2].field0_0x0._s_0.X & 0xc000000) == 0xc000000) {
              fVar16 = NiagaraStateless::FParticleSimulationContext::
                       GetDistributionRandomValue<float>(param_1,pTVar6 + -2,uVar10,uVar7 - 2);
            }
            else {
              fVar16 = NiagaraStateless::FParticleSimulationContext::GetDistributionTimeValue<float>
                                 (param_1,pTVar6 + -2,fVar2);
            }
          }
          fVar15 = 0.0;
          if ((uVar8 & 2) != 0) {
            if ((pTVar6[-1].field0_0x0._s_0.X & 0xc000000) == 0xc000000) {
              fVar15 = NiagaraStateless::FParticleSimulationContext::
                       GetDistributionRandomValue<float>(param_1,pTVar6 + -1,uVar10,uVar7 - 1);
            }
            else {
              fVar15 = NiagaraStateless::FParticleSimulationContext::GetDistributionTimeValue<float>
                                 (param_1,pTVar6 + -1,fVar2);
            }
          }
          fVar14 = 0.0;
          if ((uVar8 & 4) != 0) {
            if (((pTVar6->field0_0x0)._s_0.X & 0xc000000) == 0xc000000) {
              fVar14 = NiagaraStateless::FParticleSimulationContext::
                       GetDistributionRandomValue<float>(param_1,pTVar6,uVar10,uVar7);
            }
            else {
              fVar14 = NiagaraStateless::FParticleSimulationContext::GetDistributionTimeValue<float>
                                 (param_1,pTVar6,fVar2);
            }
          }
          fVar13 = 0.0;
          if ((uVar8 & 8) != 0) {
            if ((pTVar6[1].field0_0x0._s_0.X & 0xc000000) == 0xc000000) {
              fVar13 = NiagaraStateless::FParticleSimulationContext::
                       GetDistributionRandomValue<float>(param_1,pTVar6 + 1,uVar10,uVar7 + 1);
            }
            else {
              fVar13 = NiagaraStateless::FParticleSimulationContext::GetDistributionTimeValue<float>
                                 (param_1,pTVar6 + 1,fVar2);
            }
          }
          uVar8 = *puVar12;
          if ((param_1->NumInstances <= uVar10) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("iInstance < NumInstances",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                                 ,0x60,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (-1 < (int)uVar8) {
            NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                      (param_1,uVar8,uVar10,0,fVar16);
            NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                      (param_1,uVar8,uVar10,1,fVar15);
            NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                      (param_1,uVar8,uVar10,2,fVar14);
            NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                      (param_1,uVar8,uVar10,3,fVar13);
          }
        }
        uVar7 = uVar7 + 4;
        pTVar6 = pTVar6 + 4;
        puVar12 = puVar12 + 1;
      } while ((int)uVar7 < 0x12);
      uVar11 = (ulonglong)(uVar10 + 1);
    } while (uVar10 + 1 < param_1->NumInstances);
  }
  return;
}

// ParticleSimulate @ 149459300

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __cdecl NSMInitialMeshOrientationPrivate::ParticleSimulate(FParticleSimulationContext *param_1)

{
  int iVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  TVector<float> *pTVar5;
  uint uVar6;
  uint uVar7;
  FModuleBuiltData *pFVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_res8 [2];
  float local_res10 [2];
  float local_res18 [2];
  float local_res20 [2];
  float local_d8;
  float local_d4;
  TVector<float>_u_0 local_d0;
  TVector<float>_u_0 local_c0;
  TVector<float> local_b0 [12];
  
  uVar6 = param_1->BuiltDataOffset + 3U & 0xfffffffc;
  iVar1 = uVar6 + 0x60;
  param_1->BuiltDataOffset = iVar1;
  if (((param_1->BuiltData).ArrayNum < iVar1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("BuiltDataOffset <= BuiltData.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                         ,0x110,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar8 = (FModuleBuiltData *)((param_1->BuiltData).DataPtr + (int)uVar6);
  ResolveRotationScaleBias<NiagaraStateless::FParticleSimulationContext>
            (param_1,pFVar8,(TVector<float> *)&local_d0._s_0,(TVector<float> *)&local_c0._s_0);
  uVar6 = __xmm_80000000800000008000000080000000;
  fVar3 = __real_40490fdb;
  uVar7 = 0;
  if (param_1->NumInstances != 0) {
    do {
      pTVar5 = NiagaraStateless::FParticleSimulationContext::RandomFloat3(param_1,local_b0,uVar7,0);
      fVar12 = local_d0._s_0.X * (pTVar5->field0_0x0)._s_0.X + local_c0._s_0.X;
      fVar11 = local_d0._s_0.Y * (pTVar5->field0_0x0)._s_0.Y + local_c0._s_0.Y;
      fVar13 = local_d0._s_0.Z * (pTVar5->field0_0x0)._s_0.Z + local_c0._s_0.Z;
      fVar9 = (float)truncf(fVar12);
      fVar10 = (float)truncf(fVar11);
      FMath::SinCos<float>(local_res10,local_res18,(fVar12 - fVar9) * fVar3);
      FMath::SinCos<float>(local_res20,local_res8,(fVar11 - fVar10) * fVar3);
      fVar9 = (float)truncf(fVar13);
      FMath::SinCos<float>(&local_d8,&local_d4,(fVar13 - fVar9) * fVar3);
      iVar1 = pFVar8->MeshOrientationVariableOffset;
      fVar11 = local_res18[0] * local_res20[0] * local_d8 -
               local_res8[0] * local_res10[0] * local_d4;
      fVar9 = (float)((uint)(local_res18[0] * local_res20[0] * local_d4) ^ uVar6) -
              local_res8[0] * local_res10[0] * local_d8;
      fVar12 = local_res8[0] * local_res18[0] * local_d8 -
               local_res10[0] * local_res20[0] * local_d4;
      fVar10 = local_res8[0] * local_res18[0] * local_d4 +
               local_res10[0] * local_res20[0] * local_d8;
      if ((param_1->NumInstances <= uVar7) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("iInstance < NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                             ,0x61,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (-1 < iVar1) {
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar1,uVar7,0,fVar11);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar1,uVar7,1,fVar9);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar1,uVar7,2,fVar12);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar1,uVar7,3,fVar10);
      }
      iVar1 = pFVar8->PreviousMeshOrientationVariableOffset;
      if ((param_1->NumInstances <= uVar7) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("iInstance < NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                             ,0x61,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (-1 < iVar1) {
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar1,uVar7,0,fVar11);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar1,uVar7,1,fVar9);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar1,uVar7,2,fVar12);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar1,uVar7,3,fVar10);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < param_1->NumInstances);
  }
  return;
}

// ParticleSimulate @ 1494596c0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __cdecl NSMInitializeParticlePrivate::ParticleSimulate(FParticleSimulationContext *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uchar *puVar4;
  uchar *puVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  FShaderParametersMetadata *pFVar10;
  TVector4<float> *pTVar11;
  TVector2<float> TVar12;
  TVector<float> *pTVar13;
  TIntVector3<unsigned_int> *pTVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  TIntVector3<unsigned_int> *pTVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float local_res10 [2];
  uint local_res18;
  float local_res20 [2];
  TVector<float>_u_0 local_1b8;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  uint local_198;
  uint local_194;
  uint local_190;
  uint local_18c;
  float local_188;
  float fStack_184;
  float local_180;
  float fStack_17c;
  undefined8 local_178;
  void *local_170;
  FLinearColor_u_0 local_168;
  FLinearColor_u_0 local_158;
  FLinearColor_u_0 local_148;
  TVector4<float>_u_0 local_138;
  FLinearColor_u_0 local_128;
  FLinearColor_u_0 local_118;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  undefined1 local_e8 [8];
  TVector<float> local_e0 [2];
  TVector4<float> local_c8 [8];
  
  uVar15 = param_1->BuiltDataOffset + 3U & 0xfffffffc;
  param_1->BuiltDataOffset = uVar15 + 0xa8;
  if (((param_1->BuiltData).ArrayNum < (int)(uVar15 + 0xa8)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("BuiltDataOffset <= BuiltData.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                         ,0x110,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  puVar4 = (param_1->BuiltData).DataPtr;
  uVar17 = param_1->ShaderParameterOffset + 0xfU & 0xfffffff0;
  pFVar10 = TShaderParameterStructTypeInfo<NiagaraStateless::FInitializeParticleModule_ShaderParameters>
            ::GetStructMetadata();
  uVar16 = 0;
  puVar5 = param_1->ShaderParametersData;
  param_1->ShaderParameterOffset = pFVar10->Size + uVar17;
  uVar1 = *(uint *)(puVar4 + (int)uVar15);
  local_res18 = uVar1 & 2;
  local_170 = param_1->RequiredComponents[6];
  if (param_1->NumInstances != 0) {
    pTVar18 = (TIntVector3<unsigned_int> *)(puVar4 + (longlong)(int)uVar15 + 0x1c);
    do {
      pTVar14 = (TIntVector3<unsigned_int> *)(puVar4 + (longlong)(int)uVar15 + 0x10);
      if (((pTVar14->field0_0x0)._s_0.X & 0xc000000) == 0xc000000) {
        NiagaraStateless::FParticleSimulationContext::
        GetDistributionRandomValue<UE::Math::TVector<float>_>
                  (param_1,(TVector<float> *)&local_1b8._s_0,pTVar14,uVar16,0);
      }
      else {
        NiagaraStateless::FParticleSimulationContext::
        GetDistributionTimeValue<UE::Math::TVector<float>_>
                  (param_1,(TVector<float> *)&local_1b8._s_0,pTVar14,
                   (float)*(int *)((longlong)local_170 + (ulonglong)uVar16 * 4));
      }
      if (((pTVar18->field0_0x0)._s_0.X & 0xc000000) == 0xc000000) {
        fVar19 = NiagaraStateless::FParticleSimulationContext::RandomFloat(param_1,uVar16,1);
        FNiagaraStatelessBuiltDistribution::ConvertRandomToLookup
                  (pTVar18,fVar19,&local_198,&local_194,local_res20);
        NiagaraStateless::FParticleSimulationContext::GetDistributionTableValues<FLinearColor>
                  (param_1,pTVar18,local_198,local_194,(FLinearColor *)&local_158._s_0,
                   (FLinearColor *)&local_148._s_0);
        uVar2 = (pTVar18->field0_0x0)._s_0.X;
        if ((uVar2 >> 0x1e & 1) == 0) {
          _local_1a8 = CONCAT44(local_158._s_0.G,local_158._s_0.R);
          _fStack_1a0 = CONCAT44(local_158._s_0.A,local_158._s_0.B);
        }
        else {
          pTVar11 = NiagaraStateless::FParticleSimulationContext::RandomFloat4
                              (param_1,local_c8,uVar16,1);
          FLinearColor::FLinearColor((FLinearColor *)&local_168._s_0,pTVar11);
          if ((uVar2 >> 0x1c & 1) == 0) {
            local_f4 = local_168._s_0.G;
            local_f0 = local_168._s_0.B;
            local_ec = local_168._s_0.A;
            local_f8 = local_168._s_0.R;
            uVar23 = local_168._s_0.B;
            uVar24 = local_168._s_0.A;
            uVar22 = local_168._s_0.G;
          }
          else {
            local_108 = local_168._s_0.R;
            fStack_104 = local_168._s_0.R;
            fStack_100 = local_168._s_0.R;
            fStack_fc = local_168._s_0.R;
            uVar23 = local_168._s_0.R;
            uVar24 = local_168._s_0.R;
            uVar22 = local_168._s_0.R;
          }
          local_138._s_0.X =
               (local_148._s_0.R - local_158._s_0.R) * local_168._s_0.R + local_158._s_0.R;
          local_138._s_0.Y =
               (local_148._s_0.G - local_158._s_0.G) * (float)uVar22 + local_158._s_0.G;
          local_138._s_0.Z =
               (local_148._s_0.B - local_158._s_0.B) * (float)uVar23 + local_158._s_0.B;
          local_138._s_0.W =
               (local_148._s_0.A - local_158._s_0.A) * (float)uVar24 + local_158._s_0.A;
          FLinearColor::FLinearColor((FLinearColor *)&local_1a8,(TVector4<float> *)&local_138._s_0);
        }
      }
      else {
        FNiagaraStatelessBuiltDistribution::ConvertTimeToLookup
                  (pTVar18,(float)*(int *)((longlong)local_170 + (ulonglong)uVar16 * 4),&local_190,
                   &local_18c,local_res10);
        NiagaraStateless::FParticleSimulationContext::GetDistributionTableValues<FLinearColor>
                  (param_1,pTVar18,local_190,local_18c,(FLinearColor *)&local_128._s_0,
                   (FLinearColor *)&local_118._s_0);
        fStack_1a4 = (local_118._s_0.G - local_128._s_0.G) * local_res10[0] + local_128._s_0.G;
        local_1a8 = (local_118._s_0.R - local_128._s_0.R) * local_res10[0] + local_128._s_0.R;
        fStack_19c = (local_118._s_0.A - local_128._s_0.A) * local_res10[0] + local_128._s_0.A;
        fStack_1a0 = (local_118._s_0.B - local_128._s_0.B) * local_res10[0] + local_128._s_0.B;
      }
      fVar19 = *(float *)(puVar5 + (ulonglong)uVar17 + 0x70);
      fVar26 = *(float *)(puVar5 + (ulonglong)uVar17 + 0x6c);
      fVar20 = NiagaraStateless::FParticleSimulationContext::RandomFloat(param_1,uVar16,2);
      fVar19 = fVar20 * fVar26 + fVar19;
      TVar12 = NiagaraStateless::FParticleSimulationContext::RandomFloat2
                         (param_1,(uint)local_e8,uVar16);
      local_180 = *(float *)TVar12.field0_0x0 * *(float *)(puVar5 + (ulonglong)uVar17 + 0x30) +
                  *(float *)(puVar5 + (ulonglong)uVar17 + 0x38);
      fStack_17c = *(float *)((longlong)TVar12.field0_0x0 + 4) *
                   *(float *)(puVar5 + (ulonglong)uVar17 + 0x34) +
                   *(float *)(puVar5 + (ulonglong)uVar17 + 0x3c);
      fVar26 = fStack_17c;
      if ((uVar1 & 1) != 0) {
        local_188 = local_180;
        fStack_184 = local_180;
        fVar26 = local_180;
      }
      local_178 = CONCAT44(fVar26,local_180);
      fVar26 = *(float *)(puVar5 + (ulonglong)uVar17 + 0x44);
      fVar20 = *(float *)(puVar5 + (ulonglong)uVar17 + 0x40);
      fVar21 = NiagaraStateless::FParticleSimulationContext::RandomFloat(param_1,uVar16,4);
      fVar26 = fVar21 * fVar20 + fVar26;
      pTVar13 = NiagaraStateless::FParticleSimulationContext::RandomFloat3
                          (param_1,local_e0,uVar16,5);
      fVar25 = (pTVar13->field0_0x0)._s_0.X * *(float *)(puVar5 + (ulonglong)uVar17 + 0x50) +
               *(float *)(puVar5 + (ulonglong)uVar17 + 0x60);
      fVar20 = (pTVar13->field0_0x0)._s_0.Y * *(float *)(puVar5 + (ulonglong)uVar17 + 0x54) +
               *(float *)(puVar5 + (ulonglong)uVar17 + 100);
      fVar21 = (pTVar13->field0_0x0)._s_0.Z * *(float *)(puVar5 + (ulonglong)uVar17 + 0x58) +
               *(float *)(puVar5 + (ulonglong)uVar17 + 0x68);
      if (local_res18 != 0) {
        fVar20 = fVar25;
        fVar21 = fVar25;
      }
      iVar3 = *(int *)(puVar4 + (longlong)(int)uVar15 + 0x7c);
      if ((param_1->NumInstances <= uVar16) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("iInstance < NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                             ,0x5f,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (-1 < iVar3) {
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar3,uVar16,0,local_1b8._s_0.X);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar3,uVar16,1,local_1b8._s_0.Y);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar3,uVar16,2,local_1b8._s_0.Z);
      }
      iVar3 = *(int *)(puVar4 + (longlong)(int)uVar15 + 0x80);
      if ((param_1->NumInstances <= uVar16) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("iInstance < NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                             ,0x62,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (-1 < iVar3) {
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar3,uVar16,0,local_1a8);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar3,uVar16,1,fStack_1a4);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar3,uVar16,2,fStack_1a0);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar3,uVar16,3,fStack_19c);
      }
      iVar3 = *(int *)(puVar4 + (longlong)(int)uVar15 + 0x84);
      if ((param_1->NumInstances <= uVar16) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("iInstance < NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                             ,0x5d,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (-1 < iVar3) {
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar3,uVar16,0,fVar19);
      }
      iVar3 = *(int *)(puVar4 + (longlong)(int)uVar15 + 0x88);
      if ((param_1->NumInstances <= uVar16) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("iInstance < NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                             ,0x5e,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      fVar8 = local_178._4_4_;
      fVar7 = (float)local_178;
      if (-1 < iVar3) {
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar3,uVar16,0,(float)local_178);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar3,uVar16,1,fVar8);
      }
      iVar3 = *(int *)(puVar4 + (longlong)(int)uVar15 + 0x8c);
      if ((param_1->NumInstances <= uVar16) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("iInstance < NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                             ,0x5d,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (-1 < iVar3) {
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar3,uVar16,0,fVar26);
      }
      iVar3 = *(int *)(puVar4 + (longlong)(int)uVar15 + 0x90);
      if ((param_1->NumInstances <= uVar16) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("iInstance < NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                             ,0x5f,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (-1 < iVar3) {
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar3,uVar16,0,fVar25);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar3,uVar16,1,fVar20);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar3,uVar16,2,fVar21);
      }
      iVar3 = *(int *)(puVar4 + (longlong)(int)uVar15 + 0x94);
      if ((param_1->NumInstances <= uVar16) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("iInstance < NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                             ,0x5f,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (-1 < iVar3) {
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar3,uVar16,0,local_1b8._s_0.X);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar3,uVar16,1,local_1b8._s_0.Y);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar3,uVar16,2,local_1b8._s_0.Z);
      }
      iVar3 = *(int *)(puVar4 + (longlong)(int)uVar15 + 0x98);
      if ((param_1->NumInstances <= uVar16) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("iInstance < NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                             ,0x5d,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (-1 < iVar3) {
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar3,uVar16,0,fVar19);
      }
      iVar3 = *(int *)(puVar4 + (longlong)(int)uVar15 + 0x9c);
      if ((param_1->NumInstances <= uVar16) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("iInstance < NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                             ,0x5e,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (-1 < iVar3) {
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar3,uVar16,0,fVar7);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar3,uVar16,1,fVar8);
      }
      iVar3 = *(int *)(puVar4 + (longlong)(int)uVar15 + 0xa0);
      if ((param_1->NumInstances <= uVar16) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("iInstance < NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                             ,0x5d,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (-1 < iVar3) {
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar3,uVar16,0,fVar26);
      }
      iVar3 = *(int *)(puVar4 + (longlong)(int)uVar15 + 0xa4);
      if ((param_1->NumInstances <= uVar16) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("iInstance < NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                             ,0x5f,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (-1 < iVar3) {
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar3,uVar16,0,fVar25);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar3,uVar16,1,fVar20);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar3,uVar16,2,fVar21);
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < param_1->NumInstances);
  }
  return;
}

// ParticleSimulate @ 14945a0c0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __cdecl NSMLightAttributesPrivate::ParticleSimulate(FParticleSimulationContext *param_1)

{
  int iVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  TIntVector3<unsigned_int> *pTVar8;
  float fVar9;
  ulonglong uVar7;
  
  uVar5 = param_1->BuiltDataOffset + 3U & 0xfffffffc;
  iVar1 = uVar5 + 0x50;
  param_1->BuiltDataOffset = iVar1;
  if (((param_1->BuiltData).ArrayNum < iVar1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("BuiltDataOffset <= BuiltData.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                         ,0x110,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pvVar2 = param_1->RequiredComponents[3];
  uVar6 = 0;
  pTVar8 = (TIntVector3<unsigned_int> *)((param_1->BuiltData).DataPtr + (int)uVar5);
  if (param_1->NumInstances != 0) {
    do {
      uVar7 = (ulonglong)uVar6;
      if (pTVar8[5].field0_0x0._s_0.X != 0xffffffff) {
        if (((pTVar8->field0_0x0)._s_0.X & 0xc000000) == 0xc000000) {
          fVar9 = NiagaraStateless::FParticleSimulationContext::GetDistributionRandomValue<float>
                            (param_1,pTVar8,uVar6,0);
        }
        else {
          fVar9 = NiagaraStateless::FParticleSimulationContext::GetDistributionTimeValue<float>
                            (param_1,pTVar8,*(float *)((longlong)pvVar2 + uVar7 * 4));
        }
        uVar5 = pTVar8[5].field0_0x0._s_0.X;
        if ((param_1->NumInstances <= uVar6) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("iInstance < NumInstances",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                               ,0x5d,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (-1 < (int)uVar5) {
          NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                    (param_1,uVar5,uVar6,0,fVar9);
        }
      }
      if (pTVar8[5].field0_0x0._s_0.Y != 0xffffffff) {
        if ((pTVar8[1].field0_0x0._s_0.X & 0xc000000) == 0xc000000) {
          fVar9 = NiagaraStateless::FParticleSimulationContext::GetDistributionRandomValue<float>
                            (param_1,pTVar8 + 1,uVar6,0);
        }
        else {
          fVar9 = NiagaraStateless::FParticleSimulationContext::GetDistributionTimeValue<float>
                            (param_1,pTVar8 + 1,*(float *)((longlong)pvVar2 + uVar7 * 4));
        }
        uVar5 = pTVar8[5].field0_0x0._s_0.Y;
        if ((param_1->NumInstances <= uVar6) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("iInstance < NumInstances",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                               ,0x5d,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (-1 < (int)uVar5) {
          NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                    (param_1,uVar5,uVar6,0,fVar9);
        }
      }
      if (pTVar8[5].field0_0x0._s_0.Z != 0xffffffff) {
        if ((pTVar8[2].field0_0x0._s_0.X & 0xc000000) == 0xc000000) {
          fVar9 = NiagaraStateless::FParticleSimulationContext::GetDistributionRandomValue<float>
                            (param_1,pTVar8 + 2,uVar6,0);
        }
        else {
          fVar9 = NiagaraStateless::FParticleSimulationContext::GetDistributionTimeValue<float>
                            (param_1,pTVar8 + 2,*(float *)((longlong)pvVar2 + uVar7 * 4));
        }
        uVar5 = pTVar8[5].field0_0x0._s_0.Z;
        if ((param_1->NumInstances <= uVar6) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("iInstance < NumInstances",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                               ,0x5d,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (-1 < (int)uVar5) {
          NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                    (param_1,uVar5,uVar6,0,fVar9);
        }
      }
      if (pTVar8[6].field0_0x0._s_0.X != 0xffffffff) {
        if ((pTVar8[3].field0_0x0._s_0.X & 0xc000000) == 0xc000000) {
          fVar9 = NiagaraStateless::FParticleSimulationContext::GetDistributionRandomValue<float>
                            (param_1,pTVar8 + 3,uVar6,0);
        }
        else {
          fVar9 = NiagaraStateless::FParticleSimulationContext::GetDistributionTimeValue<float>
                            (param_1,pTVar8 + 3,*(float *)((longlong)pvVar2 + uVar7 * 4));
        }
        uVar5 = pTVar8[6].field0_0x0._s_0.X;
        if ((param_1->NumInstances <= uVar6) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("iInstance < NumInstances",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                               ,0x5d,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (-1 < (int)uVar5) {
          NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                    (param_1,uVar5,uVar6,0,fVar9);
        }
      }
      if (pTVar8[6].field0_0x0._s_0.Y != 0xffffffff) {
        if ((pTVar8[4].field0_0x0._s_0.X & 0xc000000) == 0xc000000) {
          fVar9 = NiagaraStateless::FParticleSimulationContext::GetDistributionRandomValue<float>
                            (param_1,pTVar8 + 4,uVar6,0);
        }
        else {
          fVar9 = NiagaraStateless::FParticleSimulationContext::GetDistributionTimeValue<float>
                            (param_1,pTVar8 + 4,*(float *)((longlong)pvVar2 + uVar7 * 4));
        }
        uVar5 = pTVar8[6].field0_0x0._s_0.Y;
        if ((param_1->NumInstances <= uVar6) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("iInstance < NumInstances",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                               ,0x5d,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (-1 < (int)uVar5) {
          NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                    (param_1,uVar5,uVar6,0,fVar9);
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < param_1->NumInstances);
  }
  return;
}

// ParticleSimulate @ 14945a400

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __cdecl NSMMeshIndexPrivate::ParticleSimulate(FParticleSimulationContext *param_1)

{
  uint uVar1;
  uchar *puVar2;
  ForElementType<unsigned_char_*> FVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  uint *puVar8;
  float *pfVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  ForElementType<unsigned_char_*> FVar14;
  float local_res8;
  float local_resc;
  
  uVar11 = param_1->BuiltDataOffset + 3U & 0xfffffffc;
  param_1->BuiltDataOffset = uVar11 + 0x10;
  if (((param_1->BuiltData).ArrayNum < (int)(uVar11 + 0x10)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("BuiltDataOffset <= BuiltData.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                         ,0x110,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  puVar2 = (param_1->BuiltData).DataPtr;
  uVar7 = *(uint *)(puVar2 + (int)uVar11);
  uVar12 = uVar7 & 0x7fffffff;
  if ((int)uVar7 < 0) {
    puVar8 = (uint *)TArrayView<unsigned_char_const_,int>::operator[]
                               (&param_1->DynamicBufferData,uVar7 * 4);
    uVar12 = *puVar8;
  }
  fVar5 = __real_3f000000;
  uVar7 = param_1->NumInstances;
  if (*(int *)(puVar2 + (longlong)(int)uVar11 + 8) < 1) {
    uVar10 = 0;
    if (uVar7 != 0) {
      do {
        uVar1 = *(uint *)(puVar2 + (longlong)(int)uVar11 + 0xc);
        if ((uVar7 <= uVar10) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("iInstance < NumInstances",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                               ,0x5c,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (-1 < (int)uVar1) {
          uVar7 = 0;
          if ((int)uVar1 < (param_1->VariableComponents).ArrayNum) {
            uVar7 = ~uVar1 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar3 = (param_1->VariableComponents).AllocatorInstance.SecondaryData;
          FVar14 = (ForElementType<unsigned_char_*>)&param_1->VariableComponents;
          if (FVar3 != (ForElementType<unsigned_char_*>)0x0) {
            FVar14 = FVar3;
          }
          *(uint *)(*(longlong *)((longlong)FVar14 + (longlong)(int)uVar1 * 8) +
                   (longlong)(int)uVar10 * 4) = uVar12;
        }
        uVar7 = param_1->NumInstances;
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar7);
    }
  }
  else {
    uVar12 = 0;
    if (uVar7 != 0) {
      do {
        NiagaraStateless::FParticleSimulationContext::RandomFloat2(param_1,(uint)&local_res8,uVar12)
        ;
        iVar13 = (int)ROUND((float)*(int *)(puVar2 + (longlong)(int)uVar11 + 8) * local_res8 +
                            (float)*(int *)(puVar2 + (longlong)(int)uVar11 + 8) * local_res8 + fVar5
                           ) >> 1;
        pfVar9 = TArrayView<float_const_,int>::operator[]
                           (&param_1->StaticFloatData,
                            *(int *)(puVar2 + (longlong)(int)uVar11 + 4) + iVar13 * 2);
        if (*pfVar9 <= local_resc && local_resc != *pfVar9) {
          pfVar9 = TArrayView<float_const_,int>::operator[]
                             (&param_1->StaticFloatData,
                              *(int *)(puVar2 + (longlong)(int)uVar11 + 4) + 1 + iVar13 * 2);
          iVar13 = (int)*pfVar9;
        }
        uVar7 = *(uint *)(puVar2 + (longlong)(int)uVar11 + 0xc);
        if ((param_1->NumInstances <= uVar12) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("iInstance < NumInstances",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                               ,0x5c,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (-1 < (int)uVar7) {
          uVar10 = 0;
          if ((int)uVar7 < (param_1->VariableComponents).ArrayNum) {
            uVar10 = ~uVar7 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar3 = (param_1->VariableComponents).AllocatorInstance.SecondaryData;
          FVar14 = (ForElementType<unsigned_char_*>)&param_1->VariableComponents;
          if (FVar3 != (ForElementType<unsigned_char_*>)0x0) {
            FVar14 = FVar3;
          }
          *(int *)(*(longlong *)((longlong)FVar14 + (longlong)(int)uVar7 * 8) +
                  (longlong)(int)uVar12 * 4) = iVar13;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < param_1->NumInstances);
    }
  }
  return;
}

// ParticleSimulate @ 14945a6c0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __cdecl NSMMeshRotationRatePrivate::ParticleSimulate(FParticleSimulationContext *param_1)

{
  TArrayView<float_const_,int> *this;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uchar *puVar7;
  code *pcVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uchar *puVar13;
  void *pvVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  FShaderParametersMetadata *pFVar18;
  TVector<float> *pTVar19;
  float *pfVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  uint uVar25;
  uint uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined4 extraout_XMM0_Db;
  float fVar34;
  float fVar35;
  undefined4 extraout_XMM0_Dc;
  float fVar36;
  float fVar37;
  float extraout_XMM0_Dd;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  void *local_188;
  uchar *local_180;
  void *local_178;
  void *local_170;
  TQuat<float> local_168;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  TVector<float> local_f8 [15];
  
  uVar21 = param_1->BuiltDataOffset + 3U & 0xfffffffc;
  iVar16 = uVar21 + 0x34;
  param_1->BuiltDataOffset = iVar16;
  if (((param_1->BuiltData).ArrayNum < iVar16) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("BuiltDataOffset <= BuiltData.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                          ,0x110,L""), bVar15)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_180 = (param_1->BuiltData).DataPtr + (int)uVar21;
  uVar21 = param_1->ShaderParameterOffset + 0xfU & 0xfffffff0;
  pFVar18 = TShaderParameterStructTypeInfo<NiagaraStateless::FMeshRotationRateModule_ShaderParameters>
            ::GetStructMetadata();
  local_170 = param_1->RequiredComponents[3];
  uVar24 = 0;
  puVar7 = param_1->ShaderParametersData;
  param_1->ShaderParameterOffset = pFVar18->Size + uVar21;
  local_178 = param_1->RequiredComponents[1];
  local_188 = param_1->RequiredComponents[5];
  if (param_1->NumInstances != 0) {
    this = &param_1->StaticFloatData;
    do {
      pvVar14 = local_170;
      fVar30 = __real_3f000000;
      uVar23 = (uint)uVar24;
      pTVar19 = NiagaraStateless::FParticleSimulationContext::RandomFloat3
                          (param_1,local_f8,uVar23,0);
      uVar6 = *(uint *)(puVar7 + (ulonglong)uVar21 + 0x30);
      uVar25 = uVar6 >> 0x11 & 0x1ff;
      fVar27 = *(float *)(puVar7 + (ulonglong)uVar21 + 0x10) * (pTVar19->field0_0x0)._s_0.X +
               *(float *)(puVar7 + (ulonglong)uVar21 + 0x20);
      fVar60 = (*(float *)((longlong)pvVar14 + uVar24 * 4) -
               *(float *)(puVar7 + (ulonglong)uVar21 + 0x34)) *
               *(float *)(puVar7 + (ulonglong)uVar21 + 0x38);
      fVar40 = (pTVar19->field0_0x0)._s_0.Z * *(float *)(puVar7 + (ulonglong)uVar21 + 0x18) +
               *(float *)(puVar7 + (ulonglong)uVar21 + 0x28);
      if (fVar60 <= 0.0) {
        fVar60 = 0.0;
      }
      fVar28 = (pTVar19->field0_0x0)._s_0.Y * *(float *)(puVar7 + (ulonglong)uVar21 + 0x14) +
               *(float *)(puVar7 + (ulonglong)uVar21 + 0x24);
      if ((uVar6 & 0x40000000) == 0) {
        uVar17 = (int)ROUND(fVar60 + fVar60 + fVar30) >> 1;
      }
      else {
        uVar17 = (uint)(longlong)fVar60;
      }
      uVar26 = uVar17 + 1;
      if ((uVar6 >> 0x1d & 1) == 0) {
        uVar22 = uVar25;
        if (uVar17 < uVar25) {
          uVar22 = uVar17;
        }
        uVar17 = uVar25;
        if (uVar26 < uVar25) {
          uVar17 = uVar26;
        }
      }
      else {
        uVar22 = uVar17 % (uVar25 + 1);
        uVar17 = 0;
        if (uVar26 <= uVar25) {
          uVar17 = uVar26;
        }
      }
      if ((uVar6 & 0x40000000) == 0) {
        fVar60 = 0.0;
      }
      else {
        fVar29 = (float)truncf(fVar60);
        fVar60 = fVar60 - fVar29;
      }
      iVar16 = uVar22 * 3 + (uVar6 & 0x1ffff);
      pfVar20 = TArrayView<float_const_,int>::operator[](this,iVar16 + 2);
      fVar29 = *pfVar20;
      pfVar20 = TArrayView<float_const_,int>::operator[](this,iVar16 + 1);
      fVar53 = *pfVar20;
      pfVar20 = TArrayView<float_const_,int>::operator[](this,iVar16);
      iVar16 = uVar17 * 3 + (uVar6 & 0x1ffff);
      fVar55 = *pfVar20;
      pfVar20 = TArrayView<float_const_,int>::operator[](this,iVar16 + 2);
      fVar57 = *pfVar20;
      pfVar20 = TArrayView<float_const_,int>::operator[](this,iVar16 + 1);
      fVar54 = *pfVar20;
      pfVar20 = TArrayView<float_const_,int>::operator[](this,iVar16);
      uVar6 = *(uint *)(puVar7 + (ulonglong)uVar21 + 0x30);
      fVar56 = *pfVar20;
      uVar25 = uVar6 >> 0x11 & 0x1ff;
      fVar61 = (*(float *)((longlong)local_188 + uVar24 * 4) -
               *(float *)(puVar7 + (ulonglong)uVar21 + 0x34)) *
               *(float *)(puVar7 + (ulonglong)uVar21 + 0x38);
      if (fVar61 <= 0.0) {
        fVar61 = 0.0;
      }
      if ((uVar6 & 0x40000000) == 0) {
        uVar17 = (int)ROUND(fVar61 + fVar61 + fVar30) >> 1;
      }
      else {
        uVar17 = (uint)(longlong)fVar61;
      }
      uVar26 = uVar17 + 1;
      if ((uVar6 >> 0x1d & 1) == 0) {
        uVar22 = uVar25;
        if (uVar17 < uVar25) {
          uVar22 = uVar17;
        }
        uVar17 = uVar25;
        if (uVar26 < uVar25) {
          uVar17 = uVar26;
        }
      }
      else {
        uVar22 = uVar17 % (uVar25 + 1);
        uVar17 = 0;
        if (uVar26 <= uVar25) {
          uVar17 = uVar26;
        }
      }
      if ((uVar6 & 0x40000000) == 0) {
        fVar61 = 0.0;
      }
      else {
        fVar30 = (float)truncf(fVar61);
        fVar61 = fVar61 - fVar30;
      }
      iVar16 = uVar22 * 3 + (uVar6 & 0x1ffff);
      pfVar20 = TArrayView<float_const_,int>::operator[](this,iVar16 + 2);
      fVar30 = *pfVar20;
      pfVar20 = TArrayView<float_const_,int>::operator[](this,iVar16 + 1);
      fVar1 = *pfVar20;
      pfVar20 = TArrayView<float_const_,int>::operator[](this,iVar16);
      iVar16 = uVar17 * 3 + (uVar6 & 0x1ffff);
      fVar2 = *pfVar20;
      pfVar20 = TArrayView<float_const_,int>::operator[](this,iVar16 + 2);
      fVar3 = *pfVar20;
      pfVar20 = TArrayView<float_const_,int>::operator[](this,iVar16 + 1);
      fVar4 = *pfVar20;
      pfVar20 = TArrayView<float_const_,int>::operator[](this,iVar16);
      puVar13 = local_180;
      fVar5 = *pfVar20;
      iVar16 = *(int *)(local_180 + 0x2c);
      if ((param_1->NumInstances <= uVar23) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("iInstance < NumInstances",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                              ,0x57,L""), bVar15)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (iVar16 < 0) {
        fVar31 = UE::Math::TQuat<float>::Identity.X;
        fVar68 = UE::Math::TQuat<float>::Identity.Y;
        fVar69 = UE::Math::TQuat<float>::Identity.Z;
        fVar70 = UE::Math::TQuat<float>::Identity.W;
        local_168 = UE::Math::TQuat<float>::Identity;
        local_158 = fVar68;
        fStack_154 = fVar68;
        fStack_150 = fVar68;
        fStack_14c = fVar68;
        local_148 = fVar69;
        fStack_144 = fVar69;
        fStack_140 = fVar69;
        fStack_13c = fVar69;
        local_138 = fVar70;
        fStack_134 = fVar70;
        fStack_130 = fVar70;
        fStack_12c = fVar70;
      }
      else {
        local_138 = NiagaraStateless::FParticleSimulationContext::
                    ReadParticleVariableComponent<float>(param_1,iVar16,uVar23,3);
        local_148 = NiagaraStateless::FParticleSimulationContext::
                    ReadParticleVariableComponent<float>(param_1,iVar16,uVar23,2);
        local_158 = NiagaraStateless::FParticleSimulationContext::
                    ReadParticleVariableComponent<float>(param_1,iVar16,uVar23,1);
        local_168.X = NiagaraStateless::FParticleSimulationContext::
                      ReadParticleVariableComponent<float>(param_1,iVar16,uVar23,0);
        fVar31 = UE::Math::TQuat<float>::Identity.X;
        fVar68 = UE::Math::TQuat<float>::Identity.Y;
        fVar69 = UE::Math::TQuat<float>::Identity.Z;
        fVar70 = UE::Math::TQuat<float>::Identity.W;
        local_168.Y = (float)extraout_XMM0_Db;
        local_168.Z = (float)extraout_XMM0_Dc;
        local_168.W = extraout_XMM0_Dd;
      }
      iVar16 = *(int *)(puVar13 + 0x30);
      if (param_1->NumInstances <= uVar23) {
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("iInstance < NumInstances",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                            ,0x57,L"");
        if (bVar15) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        fVar31 = UE::Math::TQuat<float>::Identity.X;
        fVar68 = UE::Math::TQuat<float>::Identity.Y;
        fVar69 = UE::Math::TQuat<float>::Identity.Z;
        fVar70 = UE::Math::TQuat<float>::Identity.W;
      }
      fVar9 = fVar68;
      fVar10 = fVar68;
      fVar11 = fVar68;
      fVar12 = fVar69;
      fVar32 = fVar69;
      fVar33 = fVar69;
      fVar34 = fVar70;
      fVar35 = fVar70;
      fVar36 = fVar70;
      if (-1 < iVar16) {
        local_108 = NiagaraStateless::FParticleSimulationContext::
                    ReadParticleVariableComponent<float>(param_1,iVar16,uVar23,3);
        local_118 = NiagaraStateless::FParticleSimulationContext::
                    ReadParticleVariableComponent<float>(param_1,iVar16,uVar23,2);
        local_128 = NiagaraStateless::FParticleSimulationContext::
                    ReadParticleVariableComponent<float>(param_1,iVar16,uVar23,1);
        fVar31 = NiagaraStateless::FParticleSimulationContext::ReadParticleVariableComponent<float>
                           (param_1,iVar16,uVar23,0);
        fVar68 = local_128;
        fVar9 = fStack_124;
        fVar10 = fStack_120;
        fVar11 = fStack_11c;
        fVar69 = local_118;
        fVar12 = fStack_114;
        fVar32 = fStack_110;
        fVar33 = fStack_10c;
        fVar70 = local_108;
        fVar34 = fStack_104;
        fVar35 = fStack_100;
        fVar36 = fStack_fc;
      }
      fStack_fc = fVar36;
      fStack_100 = fVar35;
      fStack_104 = fVar34;
      local_108 = fVar70;
      fStack_10c = fVar33;
      fStack_110 = fVar32;
      fStack_114 = fVar12;
      local_118 = fVar69;
      fStack_11c = fVar11;
      fStack_120 = fVar10;
      fStack_124 = fVar9;
      local_128 = fVar68;
      pvVar14 = local_178;
      fVar68 = *(float *)((longlong)local_178 + uVar24 * 4);
      fVar53 = fVar28 * fVar68 * ((fVar54 - fVar53) * fVar60 + fVar53);
      fVar55 = fVar27 * fVar68 * ((fVar56 - fVar55) * fVar60 + fVar55);
      fVar57 = fVar40 * fVar68 * ((fVar57 - fVar29) * fVar60 + fVar29);
      fVar29 = (float)truncf(fVar55);
      fVar60 = __real_40490fdb;
      fVar55 = (fVar55 - fVar29) * __real_40490fdb;
      fVar29 = (float)truncf(fVar53);
      FMath::SinCos<float>(&local_1b4,&local_1ac,fVar55);
      FMath::SinCos<float>(&local_1b0,&local_1b8,(fVar53 - fVar29) * fVar60);
      fVar29 = (float)truncf(fVar57);
      FMath::SinCos<float>(&local_1a8,&local_1a4,(fVar57 - fVar29) * fVar60);
      fVar62 = local_1a8 * local_1b0 * local_1ac - local_1a4 * local_1b8 * local_1b4;
      fVar51 = (float)((uint)(local_1a4 * local_1b0 * local_1ac) ^
                      __xmm_80000000800000008000000080000000) - local_1a8 * local_1b8 * local_1b4;
      fVar58 = local_1a4 * local_1b8 * local_1ac + local_1a8 * local_1b0 * local_1b4;
      fVar41 = local_1a8 * local_1b8 * local_1ac - local_1a4 * local_1b0 * local_1b4;
      fVar71 = fVar58 * local_168.X;
      fVar72 = fVar41 * local_168.X;
      fVar73 = fVar51 * local_168.X;
      fVar74 = fVar62 * local_168.X;
      fVar32 = local_138 * fVar62;
      fVar34 = local_138 * fVar51;
      fVar36 = local_138 * fVar41;
      fVar38 = local_138 * fVar58;
      fVar29 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0];
      fVar55 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1];
      fVar68 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2];
      fVar70 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3];
      fVar42 = fVar41 * local_158;
      fVar45 = fVar58 * local_158;
      fVar47 = fVar62 * local_158;
      fVar49 = fVar51 * local_158;
      fVar60 = *(float *)((longlong)pvVar14 + uVar24 * 4);
      fVar53 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0];
      fVar57 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1];
      fVar69 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2];
      fVar9 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3];
      fVar51 = fVar51 * local_148;
      fVar62 = fVar62 * local_148;
      fVar58 = fVar58 * local_148;
      fVar41 = fVar41 * local_148;
      fVar54 = fVar27 * fVar60 * ((fVar5 - fVar2) * fVar61 + fVar2);
      fVar56 = fVar28 * fVar60 * ((fVar4 - fVar1) * fVar61 + fVar1);
      fVar27 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
      fVar28 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
      fVar1 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
      fVar5 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
      fVar61 = fVar40 * fVar60 * ((fVar3 - fVar30) * fVar61 + fVar30);
      fVar60 = (float)truncf(fVar54);
      fVar30 = __real_40490fdb;
      fVar40 = (fVar54 - fVar60) * __real_40490fdb;
      fVar60 = (float)truncf(fVar56);
      FMath::SinCos<float>(&local_19c,&local_194,fVar40);
      FMath::SinCos<float>(&local_198,&local_1a0,(fVar56 - fVar60) * fVar30);
      fVar60 = (float)truncf(fVar61);
      FMath::SinCos<float>(&local_190,&local_18c,(fVar61 - fVar60) * fVar30);
      fVar63 = local_190 * local_198 * local_194 - local_18c * local_1a0 * local_19c;
      fVar52 = (float)((uint)(local_18c * local_198 * local_194) ^
                      __xmm_80000000800000008000000080000000) - local_190 * local_1a0 * local_19c;
      iVar16 = *(int *)(puVar13 + 0x2c);
      fVar43 = local_190 * local_1a0 * local_194 - local_18c * local_198 * local_19c;
      fVar59 = local_18c * local_1a0 * local_194 + local_190 * local_198 * local_19c;
      fVar33 = local_108 * fVar63;
      fVar35 = local_108 * fVar52;
      fVar37 = local_108 * fVar43;
      fVar39 = local_108 * fVar59;
      fVar30 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0];
      fVar54 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1];
      fVar2 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2];
      fVar10 = GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3];
      fVar44 = fVar43 * local_128;
      fVar46 = fVar59 * local_128;
      fVar48 = fVar63 * local_128;
      fVar50 = fVar52 * local_128;
      fVar64 = fVar52 * local_118;
      fVar65 = fVar63 * local_118;
      fVar66 = fVar59 * local_118;
      fVar67 = fVar43 * local_118;
      fVar60 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0];
      fVar56 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1];
      fVar3 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2];
      fVar11 = GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3];
      fVar40 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
      fVar61 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
      fVar4 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
      fVar12 = GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
      if ((param_1->NumInstances <= uVar23) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("iInstance < NumInstances",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                              ,0x61,L""), bVar15)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (-1 < iVar16) {
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar16,uVar23,0,
                   fVar71 * fVar29 + fVar32 + fVar42 * fVar53 + fVar51 * fVar27);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar16,uVar23,1,
                   fVar72 * fVar55 + fVar34 + fVar45 * fVar57 + fVar62 * fVar28);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar16,uVar23,2,
                   fVar73 * fVar68 + fVar36 + fVar47 * fVar69 + fVar58 * fVar1);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar16,uVar23,3,
                   fVar74 * fVar70 + fVar38 + fVar49 * fVar9 + fVar41 * fVar5);
      }
      iVar16 = *(int *)(puVar13 + 0x30);
      if ((param_1->NumInstances <= uVar23) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("iInstance < NumInstances",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                              ,0x61,L""), bVar15)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (-1 < iVar16) {
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar16,uVar23,0,
                   fVar59 * fVar31 * fVar30 + fVar33 + fVar44 * fVar60 + fVar64 * fVar40);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar16,uVar23,1,
                   fVar43 * fVar31 * fVar54 + fVar35 + fVar46 * fVar56 + fVar65 * fVar61);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar16,uVar23,2,
                   fVar52 * fVar31 * fVar2 + fVar37 + fVar48 * fVar3 + fVar66 * fVar4);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar16,uVar23,3,
                   fVar63 * fVar31 * fVar10 + fVar39 + fVar50 * fVar11 + fVar67 * fVar12);
      }
      uVar24 = (ulonglong)(uVar23 + 1);
    } while (uVar23 + 1 < param_1->NumInstances);
  }
  return;
}

// ParticleSimulate @ 14945b270

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __cdecl NSMRotateAroundPointPrivate::ParticleSimulate(FParticleSimulationContext *param_1)

{
  int iVar1;
  uchar *puVar2;
  uchar *puVar3;
  code *pcVar4;
  uint uVar5;
  undefined8 uVar6;
  bool bVar7;
  FShaderParametersMetadata *pFVar8;
  TVector<float> *pTVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  undefined8 local_110;
  undefined8 local_100;
  TVector<float> local_f0;
  TVector<float> local_e4 [14];
  
  uVar11 = param_1->BuiltDataOffset + 3U & 0xfffffffc;
  param_1->BuiltDataOffset = uVar11 + 0x6c;
  if (((param_1->BuiltData).ArrayNum < (int)(uVar11 + 0x6c)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("BuiltDataOffset <= BuiltData.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                         ,0x110,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  puVar2 = (param_1->BuiltData).DataPtr;
  uVar10 = param_1->ShaderParameterOffset + 0xfU & 0xfffffff0;
  pFVar8 = TShaderParameterStructTypeInfo<NiagaraStateless::FRotateAroundPointModule_ShaderParameters>
           ::GetStructMetadata();
  uVar12 = 0;
  puVar3 = param_1->ShaderParametersData;
  param_1->ShaderParameterOffset = pFVar8->Size + uVar10;
  if (param_1->NumInstances != 0) {
    do {
      uVar5 = __xmm_80000000800000008000000080000000;
      fVar33 = __real_40490fdb;
      NiagaraStateless::FParticleSimulationContext::RandomFloat(param_1,uVar12,0);
      fVar15 = *(float *)(puVar3 + (ulonglong)uVar10 + 8);
      fVar14 = *(float *)(puVar3 + (ulonglong)uVar10 + 0xc);
      fVar13 = NiagaraStateless::FParticleSimulationContext::RandomFloat(param_1,uVar12,1);
      fVar16 = *(float *)(puVar3 + (ulonglong)uVar10 + 0x10);
      fVar14 = fVar13 * fVar15 + fVar14;
      fVar15 = *(float *)(puVar3 + (ulonglong)uVar10 + 0x14);
      fVar13 = NiagaraStateless::FParticleSimulationContext::RandomFloat(param_1,uVar12,2);
      local_114 = fVar13 * fVar16 + fVar15;
      pTVar9 = NiagaraStateless::FParticleSimulationContext::RandomFloat3
                         (param_1,&local_f0,uVar12,3);
      fVar15 = *(float *)(puVar3 + (ulonglong)uVar10 + 0x20) * (pTVar9->field0_0x0)._s_0.X +
               *(float *)(puVar3 + (ulonglong)uVar10 + 0x30);
      fVar16 = (pTVar9->field0_0x0)._s_0.Y * *(float *)(puVar3 + (ulonglong)uVar10 + 0x24) +
               *(float *)(puVar3 + (ulonglong)uVar10 + 0x34);
      fVar13 = (pTVar9->field0_0x0)._s_0.Z * *(float *)(puVar3 + (ulonglong)uVar10 + 0x28) +
               *(float *)(puVar3 + (ulonglong)uVar10 + 0x38);
      pTVar9 = NiagaraStateless::FParticleSimulationContext::RandomFloat3(param_1,local_e4,uVar12,4)
      ;
      fVar31 = (pTVar9->field0_0x0)._s_0.X * *(float *)(puVar3 + (ulonglong)uVar10 + 0x40) +
               *(float *)(puVar3 + (ulonglong)uVar10 + 0x50);
      fVar30 = (pTVar9->field0_0x0)._s_0.Y * *(float *)(puVar3 + (ulonglong)uVar10 + 0x44) +
               *(float *)(puVar3 + (ulonglong)uVar10 + 0x54);
      fVar32 = (pTVar9->field0_0x0)._s_0.Z * *(float *)(puVar3 + (ulonglong)uVar10 + 0x48) +
               *(float *)(puVar3 + (ulonglong)uVar10 + 0x58);
      fVar17 = (float)truncf(fVar31);
      fVar18 = (float)truncf(fVar30);
      FMath::SinCos<float>(&local_128,&local_120,(fVar31 - fVar17) * fVar33);
      FMath::SinCos<float>(&local_124,&local_12c,(fVar30 - fVar18) * fVar33);
      fVar17 = (float)truncf(fVar32);
      FMath::SinCos<float>(&local_11c,&local_118,(fVar32 - fVar17) * fVar33);
      iVar1 = *(int *)(puVar2 + (longlong)(int)uVar11 + 100);
      fVar17 = local_11c * local_124 * local_120 - local_118 * local_12c * local_128;
      fVar18 = (float)((uint)(local_118 * local_124 * local_120) ^ uVar5) -
               local_11c * local_12c * local_128;
      fVar33 = local_118 * local_12c * local_120 + local_11c * local_124 * local_128;
      fVar30 = local_11c * local_12c * local_120 - local_118 * local_124 * local_128;
      if ((param_1->NumInstances <= uVar12) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("iInstance < NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                             ,0x55,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (iVar1 < 0) {
        fVar32 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
        local_110 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        uVar6 = local_110;
        local_110._0_4_ = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        fVar31 = (float)local_110;
        uVar19 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        local_110 = uVar6;
      }
      else {
        uVar19 = NiagaraStateless::FParticleSimulationContext::ReadParticleVariableComponent<float>
                           (param_1,iVar1,uVar12,2);
        fVar32 = NiagaraStateless::FParticleSimulationContext::ReadParticleVariableComponent<float>
                           (param_1,iVar1,uVar12,1);
        fVar31 = NiagaraStateless::FParticleSimulationContext::ReadParticleVariableComponent<float>
                           (param_1,iVar1,uVar12,0);
      }
      iVar1 = *(int *)(puVar2 + (longlong)(int)uVar11 + 0x68);
      if ((param_1->NumInstances <= uVar12) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("iInstance < NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                             ,0x55,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (iVar1 < 0) {
        fVar21 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
        local_100._0_4_ = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        fVar22 = (float)local_100;
        uVar20 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        local_100 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      }
      else {
        uVar20 = NiagaraStateless::FParticleSimulationContext::ReadParticleVariableComponent<float>
                           (param_1,iVar1,uVar12,2);
        fVar21 = NiagaraStateless::FParticleSimulationContext::ReadParticleVariableComponent<float>
                           (param_1,iVar1,uVar12,1);
        fVar22 = NiagaraStateless::FParticleSimulationContext::ReadParticleVariableComponent<float>
                           (param_1,iVar1,uVar12,0);
      }
      __libm_sse2_sincosf4_();
      fVar27 = extraout_XMM0_Da * fVar14;
      fVar23 = extraout_XMM0_Db * fVar14;
      fVar35 = fVar23 * (fVar30 + fVar30);
      fVar25 = fVar27 * fVar17 - fVar23 * fVar18;
      fVar29 = (float)((uint)(fVar27 * fVar30 + fVar27 * fVar30) ^
                      __xmm_80000000800000008000000080000000);
      fVar25 = fVar25 + fVar25;
      fVar26 = extraout_XMM0_Dc * fVar14;
      fVar14 = extraout_XMM0_Dd * fVar14;
      fVar34 = fVar14 * (fVar30 + fVar30);
      fVar28 = (float)((uint)(fVar26 * fVar30 + fVar26 * fVar30) ^
                      __xmm_80000000800000008000000080000000);
      fVar24 = fVar26 * fVar17 - fVar14 * fVar18;
      fVar24 = fVar24 + fVar24;
      iVar1 = *(int *)(puVar2 + (longlong)(int)uVar11 + 100);
      if ((param_1->NumInstances <= uVar12) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("iInstance < NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                             ,0x5f,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (-1 < iVar1) {
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar1,uVar12,0,
                   (fVar25 * fVar18 - fVar35 * fVar30) + fVar23 + fVar33 * fVar29 + fVar15 + fVar31)
        ;
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar1,uVar12,1,
                   (fVar29 * fVar30 - fVar25 * fVar17) + fVar27 + fVar33 * fVar35 + fVar16 + fVar32)
        ;
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar1,uVar12,2,
                   (fVar35 * fVar17 - fVar29 * fVar18) + fVar33 * fVar25 + fVar13 + (float)uVar19);
      }
      iVar1 = *(int *)(puVar2 + (longlong)(int)uVar11 + 0x68);
      if ((param_1->NumInstances <= uVar12) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("iInstance < NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                             ,0x5f,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (-1 < iVar1) {
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar1,uVar12,0,
                   (fVar24 * fVar18 - fVar34 * fVar30) + fVar14 + fVar33 * fVar28 + fVar15 + fVar22)
        ;
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar1,uVar12,1,
                   (fVar30 * fVar28 - fVar24 * fVar17) + fVar26 + fVar33 * fVar34 + fVar16 + fVar21)
        ;
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar1,uVar12,2,
                   (fVar34 * fVar17 - fVar18 * fVar28) + fVar33 * fVar24 + fVar13 + (float)uVar20);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < param_1->NumInstances);
  }
  return;
}

// ParticleSimulate @ 14945bac0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __cdecl NSMScaleColorPrivate::ParticleSimulate(FParticleSimulationContext *param_1)

{
  int iVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TVector4<float> *pTVar6;
  uint uVar7;
  uint uVar8;
  TIntVector3<unsigned_int> *pTVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float local_res8 [2];
  float local_res10 [2];
  uint local_res18;
  uint local_res1c;
  uint local_res20;
  uint local_res24;
  FLinearColor_u_0 local_118;
  FLinearColor_u_0 local_108;
  FLinearColor_u_0 local_f8;
  FLinearColor_u_0 local_e8;
  TVector4<float>_u_0 local_d8;
  FLinearColor_u_0 local_c8;
  FLinearColor_u_0 local_b8;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  TVector4<float> local_88 [5];
  
  uVar7 = param_1->BuiltDataOffset + 3U & 0xfffffffc;
  iVar1 = uVar7 + 0x10;
  param_1->BuiltDataOffset = iVar1;
  if (((param_1->BuiltData).ArrayNum < iVar1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("BuiltDataOffset <= BuiltData.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                         ,0x110,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar5 = param_1->NumInstances;
  pvVar2 = param_1->RequiredComponents[3];
  uVar8 = 0;
  pTVar9 = (TIntVector3<unsigned_int> *)((param_1->BuiltData).DataPtr + (int)uVar7);
  if (uVar5 != 0) {
    do {
      uVar7 = pTVar9[1].field0_0x0._s_0.X;
      if ((uVar5 <= uVar8) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("iInstance < NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                             ,0x58,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((int)uVar7 < 0) {
        fVar13 = FLinearColor::White.field0_0x0._0_4_;
        fVar12 = FLinearColor::White.field0_0x0._4_4_;
        fVar11 = FLinearColor::White.field0_0x0._8_4_;
        fVar10 = FLinearColor::White.field0_0x0._12_4_;
      }
      else {
        fVar10 = NiagaraStateless::FParticleSimulationContext::ReadParticleVariableComponent<float>
                           (param_1,uVar7,uVar8,3);
        fVar11 = NiagaraStateless::FParticleSimulationContext::ReadParticleVariableComponent<float>
                           (param_1,uVar7,uVar8,2);
        fVar12 = NiagaraStateless::FParticleSimulationContext::ReadParticleVariableComponent<float>
                           (param_1,uVar7,uVar8,1);
        fVar13 = NiagaraStateless::FParticleSimulationContext::ReadParticleVariableComponent<float>
                           (param_1,uVar7,uVar8,0);
      }
      if (((pTVar9->field0_0x0)._s_0.X & 0xc000000) == 0xc000000) {
        fVar14 = NiagaraStateless::FParticleSimulationContext::RandomFloat(param_1,uVar8,0);
        FNiagaraStatelessBuiltDistribution::ConvertRandomToLookup
                  (pTVar9,fVar14,&local_res18,&local_res1c,local_res10);
        NiagaraStateless::FParticleSimulationContext::GetDistributionTableValues<FLinearColor>
                  (param_1,pTVar9,local_res18,local_res1c,(FLinearColor *)&local_f8._s_0,
                   (FLinearColor *)&local_e8._s_0);
        uVar7 = (pTVar9->field0_0x0)._s_0.X;
        if ((uVar7 >> 0x1e & 1) == 0) {
          local_118._s_0.R = local_f8._s_0.R;
          local_118._s_0.G = local_f8._s_0.G;
          local_118._s_0.B = local_f8._s_0.B;
          local_118._s_0.A = local_f8._s_0.A;
        }
        else {
          pTVar6 = NiagaraStateless::FParticleSimulationContext::RandomFloat4
                             (param_1,local_88,uVar8,0);
          FLinearColor::FLinearColor((FLinearColor *)&local_108._s_0,pTVar6);
          if ((uVar7 >> 0x1c & 1) == 0) {
            local_94 = local_108._s_0.G;
            local_90 = local_108._s_0.B;
            local_8c = local_108._s_0.A;
            local_98 = local_108._s_0.R;
            uVar15 = local_108._s_0.G;
            uVar16 = local_108._s_0.B;
            uVar17 = local_108._s_0.A;
          }
          else {
            local_a8 = local_108._s_0.R;
            fStack_a4 = local_108._s_0.R;
            fStack_a0 = local_108._s_0.R;
            fStack_9c = local_108._s_0.R;
            uVar15 = local_108._s_0.R;
            uVar16 = local_108._s_0.R;
            uVar17 = local_108._s_0.R;
          }
          local_d8._s_0.X = (local_e8._s_0.R - local_f8._s_0.R) * local_108._s_0.R + local_f8._s_0.R
          ;
          local_d8._s_0.Y = (local_e8._s_0.G - local_f8._s_0.G) * (float)uVar15 + local_f8._s_0.G;
          local_d8._s_0.Z = (local_e8._s_0.B - local_f8._s_0.B) * (float)uVar16 + local_f8._s_0.B;
          local_d8._s_0.W = (local_e8._s_0.A - local_f8._s_0.A) * (float)uVar17 + local_f8._s_0.A;
          FLinearColor::FLinearColor
                    ((FLinearColor *)&local_118._s_0,(TVector4<float> *)&local_d8._s_0);
        }
      }
      else {
        FNiagaraStatelessBuiltDistribution::ConvertTimeToLookup
                  (pTVar9,*(float *)((longlong)pvVar2 + (ulonglong)uVar8 * 4),&local_res20,
                   &local_res24,local_res8);
        NiagaraStateless::FParticleSimulationContext::GetDistributionTableValues<FLinearColor>
                  (param_1,pTVar9,local_res20,local_res24,(FLinearColor *)&local_c8._s_0,
                   (FLinearColor *)&local_b8._s_0);
        local_118._s_0.R = (local_b8._s_0.R - local_c8._s_0.R) * local_res8[0] + local_c8._s_0.R;
        local_118._s_0.B = (local_b8._s_0.B - local_c8._s_0.B) * local_res8[0] + local_c8._s_0.B;
        local_118._s_0.G = (local_b8._s_0.G - local_c8._s_0.G) * local_res8[0] + local_c8._s_0.G;
        local_118._s_0.A = (local_b8._s_0.A - local_c8._s_0.A) * local_res8[0] + local_c8._s_0.A;
      }
      uVar7 = pTVar9[1].field0_0x0._s_0.X;
      fVar13 = fVar13 * local_118._s_0.R;
      fVar12 = fVar12 * local_118._s_0.G;
      fVar11 = fVar11 * local_118._s_0.B;
      fVar10 = fVar10 * local_118._s_0.A;
      if ((param_1->NumInstances <= uVar8) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("iInstance < NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                             ,0x62,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (-1 < (int)uVar7) {
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,uVar7,uVar8,0,fVar13);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,uVar7,uVar8,1,fVar12);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,uVar7,uVar8,2,fVar11);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,uVar7,uVar8,3,fVar10);
      }
      uVar5 = param_1->NumInstances;
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar5);
  }
  return;
}

// ParticleSimulate @ 14945bf60

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __cdecl NSMScaleMeshSizeBySpeedPrivate::ParticleSimulate(FParticleSimulationContext *param_1)

{
  int iVar1;
  uchar *puVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  FShaderParametersMetadata *pFVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float *pfVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_f8;
  float local_e8;
  float local_d8;
  float local_c8;
  
  uVar8 = param_1->BuiltDataOffset + 3U & 0xfffffffc;
  param_1->BuiltDataOffset = uVar8 + 0x60;
  if (((param_1->BuiltData).ArrayNum < (int)(uVar8 + 0x60)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("BuiltDataOffset <= BuiltData.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                         ,0x110,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  puVar2 = (param_1->BuiltData).DataPtr;
  uVar10 = param_1->ShaderParameterOffset + 0xfU & 0xfffffff0;
  pFVar6 = TShaderParameterStructTypeInfo<NiagaraStateless::FScaleMeshSizeBySpeedModule_ShaderParameters>
           ::GetStructMetadata();
  uVar7 = param_1->NumInstances;
  uVar9 = 0;
  pfVar11 = (float *)(param_1->ShaderParametersData + uVar10);
  param_1->ShaderParameterOffset = pFVar6->Size + uVar10;
  fVar4 = __real_3f800000;
  if (uVar7 != 0) {
    do {
      iVar1 = *(int *)(puVar2 + (longlong)(int)uVar8 + 0x50);
      if ((uVar7 <= uVar9) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("iInstance < NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                             ,0x55,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (iVar1 < 0) {
        fVar13 = (float)((ulonglong)UE::Math::TVector<float>::OneVector.field0_0x0._0_8_ >> 0x20);
        local_f8 = (float)UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
        uVar12 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
      }
      else {
        uVar12 = NiagaraStateless::FParticleSimulationContext::ReadParticleVariableComponent<float>
                           (param_1,iVar1,uVar9,2);
        fVar13 = NiagaraStateless::FParticleSimulationContext::ReadParticleVariableComponent<float>
                           (param_1,iVar1,uVar9,1);
        local_f8 = NiagaraStateless::FParticleSimulationContext::
                   ReadParticleVariableComponent<float>(param_1,iVar1,uVar9,0);
      }
      iVar1 = *(int *)(puVar2 + (longlong)(int)uVar8 + 0x54);
      if ((param_1->NumInstances <= uVar9) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("iInstance < NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                             ,0x55,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (iVar1 < 0) {
        fVar15 = (float)((ulonglong)UE::Math::TVector<float>::OneVector.field0_0x0._0_8_ >> 0x20);
        local_e8 = (float)UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
        uVar14 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
      }
      else {
        uVar14 = NiagaraStateless::FParticleSimulationContext::ReadParticleVariableComponent<float>
                           (param_1,iVar1,uVar9,2);
        fVar15 = NiagaraStateless::FParticleSimulationContext::ReadParticleVariableComponent<float>
                           (param_1,iVar1,uVar9,1);
        local_e8 = NiagaraStateless::FParticleSimulationContext::
                   ReadParticleVariableComponent<float>(param_1,iVar1,uVar9,0);
      }
      fVar18 = param_1->InvDeltaTime;
      fVar13 = (fVar13 - fVar15) * fVar18;
      fVar15 = (local_f8 - local_e8) * fVar18;
      fVar18 = ((float)uVar12 - (float)uVar14) * fVar18;
      fVar13 = (fVar13 * fVar13 + fVar15 * fVar15 + fVar18 * fVar18) * pfVar11[0xb];
      if (fVar4 <= fVar13) {
        fVar13 = fVar4;
      }
      if (fVar13 <= 0.0) {
        fVar13 = 0.0;
      }
      if (((uint)pfVar11[8] & 0xc000000) == 0xc000000) {
        fVar13 = NiagaraStateless::FParticleSimulationContext::GetDistributionRandomValue<float>
                           (param_1,(TIntVector3<unsigned_int> *)(pfVar11 + 8),uVar9,0);
      }
      else {
        fVar13 = NiagaraStateless::FParticleSimulationContext::GetDistributionTimeValue<float>
                           (param_1,(TIntVector3<unsigned_int> *)(pfVar11 + 8),fVar13);
      }
      iVar1 = *(int *)(puVar2 + (longlong)(int)uVar8 + 0x58);
      if (fVar4 <= fVar13) {
        fVar13 = fVar4;
      }
      if (fVar13 <= 0.0) {
        fVar13 = 0.0;
      }
      fVar15 = fVar13 * pfVar11[4] + *pfVar11;
      fVar18 = fVar13 * pfVar11[5] + pfVar11[1];
      fVar13 = fVar13 * pfVar11[6] + pfVar11[2];
      if ((param_1->NumInstances <= uVar9) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("iInstance < NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                             ,0x55,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (iVar1 < 0) {
        fVar16 = (float)((ulonglong)UE::Math::TVector<float>::OneVector.field0_0x0._0_8_ >> 0x20);
        local_d8 = (float)UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
        uVar12 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
      }
      else {
        uVar12 = NiagaraStateless::FParticleSimulationContext::ReadParticleVariableComponent<float>
                           (param_1,iVar1,uVar9,2);
        fVar16 = NiagaraStateless::FParticleSimulationContext::ReadParticleVariableComponent<float>
                           (param_1,iVar1,uVar9,1);
        local_d8 = NiagaraStateless::FParticleSimulationContext::
                   ReadParticleVariableComponent<float>(param_1,iVar1,uVar9,0);
      }
      iVar1 = *(int *)(puVar2 + (longlong)(int)uVar8 + 0x5c);
      if ((param_1->NumInstances <= uVar9) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("iInstance < NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                             ,0x55,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (iVar1 < 0) {
        fVar17 = (float)((ulonglong)UE::Math::TVector<float>::OneVector.field0_0x0._0_8_ >> 0x20);
        local_c8 = (float)UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
        uVar14 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
      }
      else {
        uVar14 = NiagaraStateless::FParticleSimulationContext::ReadParticleVariableComponent<float>
                           (param_1,iVar1,uVar9,2);
        fVar17 = NiagaraStateless::FParticleSimulationContext::ReadParticleVariableComponent<float>
                           (param_1,iVar1,uVar9,1);
        local_c8 = NiagaraStateless::FParticleSimulationContext::
                   ReadParticleVariableComponent<float>(param_1,iVar1,uVar9,0);
      }
      iVar1 = *(int *)(puVar2 + (longlong)(int)uVar8 + 0x58);
      if ((param_1->NumInstances <= uVar9) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("iInstance < NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                             ,0x5f,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (-1 < iVar1) {
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar1,uVar9,0,fVar15 * local_d8);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar1,uVar9,1,fVar18 * fVar16);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar1,uVar9,2,(float)uVar12 * fVar13);
      }
      iVar1 = *(int *)(puVar2 + (longlong)(int)uVar8 + 0x5c);
      if ((param_1->NumInstances <= uVar9) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("iInstance < NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                             ,0x5f,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (-1 < iVar1) {
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar1,uVar9,0,fVar15 * local_c8);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar1,uVar9,1,fVar18 * fVar17);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar1,uVar9,2,(float)uVar14 * fVar13);
      }
      uVar7 = param_1->NumInstances;
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar7);
  }
  return;
}

// ParticleSimulate @ 14945c5b0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __cdecl NSMScaleMeshSizePrivate::ParticleSimulate(FParticleSimulationContext *param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  void *pvVar4;
  void *pvVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  float fVar9;
  uchar *puVar10;
  TVector<float> *pTVar11;
  uint uVar12;
  uint uVar13;
  TIntVector3<unsigned_int> *pTVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_128;
  float fStack_124;
  float local_118;
  TVector<float> local_108;
  TVector<float> local_fc;
  TVector<float> local_f0;
  undefined8 local_e0;
  float local_d8;
  undefined8 local_d4;
  float local_cc;
  
  uVar12 = param_1->BuiltDataOffset + 3U & 0xfffffffc;
  iVar1 = uVar12 + 0x24;
  param_1->BuiltDataOffset = iVar1;
  if (((param_1->BuiltData).ArrayNum < iVar1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("BuiltDataOffset <= BuiltData.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                         ,0x110,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pvVar4 = param_1->RequiredComponents[3];
  pvVar5 = param_1->RequiredComponents[5];
  pTVar14 = (TIntVector3<unsigned_int> *)((param_1->BuiltData).DataPtr + (int)uVar12);
  uVar12 = pTVar14[2].field0_0x0._s_0.X;
  if ((int)uVar12 < 0) {
    uVar2 = *(undefined8 *)&pTVar14[1].field0_0x0;
    fVar9 = *(float *)((longlong)&pTVar14[1].field0_0x0 + 8);
  }
  else {
    puVar10 = TArrayView<unsigned_char_const_,int>::operator[]
                        (&param_1->DynamicBufferData,uVar12 * 4);
    uVar2 = *(undefined8 *)puVar10;
    fVar9 = *(float *)(puVar10 + 8);
  }
  uVar12 = param_1->NumInstances;
  uVar13 = 0;
  if (uVar12 != 0) {
    fStack_124 = (float)((ulonglong)uVar2 >> 0x20);
    local_128 = (float)uVar2;
    fVar7 = local_128;
    do {
      uVar3 = pTVar14[2].field0_0x0._s_0.Y;
      if ((uVar12 <= uVar13) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("iInstance < NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                             ,0x55,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((int)uVar3 < 0) {
        fVar16 = (float)((ulonglong)UE::Math::TVector<float>::OneVector.field0_0x0._0_8_ >> 0x20);
        local_128 = (float)UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
        uVar15 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
      }
      else {
        uVar15 = NiagaraStateless::FParticleSimulationContext::ReadParticleVariableComponent<float>
                           (param_1,uVar3,uVar13,2);
        fVar16 = NiagaraStateless::FParticleSimulationContext::ReadParticleVariableComponent<float>
                           (param_1,uVar3,uVar13,1);
        local_128 = NiagaraStateless::FParticleSimulationContext::
                    ReadParticleVariableComponent<float>(param_1,uVar3,uVar13,0);
      }
      uVar12 = pTVar14[2].field0_0x0._s_0.Z;
      if ((param_1->NumInstances <= uVar13) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("iInstance < NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                             ,0x55,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((int)uVar12 < 0) {
        local_118 = (float)UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
        fVar18 = (float)((ulonglong)UE::Math::TVector<float>::OneVector.field0_0x0._0_8_ >> 0x20);
        uVar17 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
      }
      else {
        uVar17 = NiagaraStateless::FParticleSimulationContext::ReadParticleVariableComponent<float>
                           (param_1,uVar12,uVar13,2);
        fVar18 = NiagaraStateless::FParticleSimulationContext::ReadParticleVariableComponent<float>
                           (param_1,uVar12,uVar13,1);
        local_118 = NiagaraStateless::FParticleSimulationContext::
                    ReadParticleVariableComponent<float>(param_1,uVar12,uVar13,0);
      }
      fVar19 = *(float *)((longlong)pvVar5 + (ulonglong)uVar13 * 4);
      if (((pTVar14->field0_0x0)._s_0.X & 0xc000000) == 0xc000000) {
        pTVar11 = NiagaraStateless::FParticleSimulationContext::
                  GetDistributionRandomValue<UE::Math::TVector<float>_>
                            (param_1,&local_108,pTVar14,uVar13,0);
        fVar21 = (pTVar11->field0_0x0)._s_0.Z;
        local_d4 = *(undefined8 *)&pTVar11->field0_0x0;
        local_e0 = local_d4;
        local_d8 = fVar21;
        local_cc = fVar21;
      }
      else {
        pTVar11 = NiagaraStateless::FParticleSimulationContext::
                  GetDistributionTimeValue<UE::Math::TVector<float>_>
                            (param_1,&local_fc,pTVar14,
                             *(float *)((longlong)pvVar4 + (ulonglong)uVar13 * 4));
        local_e0 = *(undefined8 *)&pTVar11->field0_0x0;
        fVar21 = (pTVar11->field0_0x0)._s_0.Z;
        local_d8 = fVar21;
        pTVar11 = NiagaraStateless::FParticleSimulationContext::
                  GetDistributionTimeValue<UE::Math::TVector<float>_>
                            (param_1,&local_f0,pTVar14,fVar19);
        local_d4 = *(undefined8 *)&pTVar11->field0_0x0;
        local_cc = (pTVar11->field0_0x0)._s_0.Z;
      }
      fVar19 = fVar7 * (float)local_e0;
      uVar12 = pTVar14[2].field0_0x0._s_0.Y;
      fVar20 = fStack_124 * local_e0._4_4_;
      if ((param_1->NumInstances <= uVar13) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("iInstance < NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                             ,0x5f,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (-1 < (int)uVar12) {
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,uVar12,uVar13,0,fVar19 * local_128);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,uVar12,uVar13,1,fVar20 * fVar16);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,uVar12,uVar13,2,fVar9 * fVar21 * (float)uVar15);
      }
      uVar12 = pTVar14[2].field0_0x0._s_0.Z;
      fVar16 = fVar7 * (float)local_d4;
      fVar19 = fStack_124 * local_d4._4_4_;
      fVar21 = fVar9 * local_cc;
      if ((param_1->NumInstances <= uVar13) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("iInstance < NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                             ,0x5f,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (-1 < (int)uVar12) {
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,uVar12,uVar13,0,fVar16 * local_118);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,uVar12,uVar13,1,fVar19 * fVar18);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,uVar12,uVar13,2,fVar21 * (float)uVar17);
      }
      uVar12 = param_1->NumInstances;
      uVar13 = uVar13 + 1;
    } while (uVar13 < uVar12);
  }
  return;
}

// ParticleSimulate @ 14945cab0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __cdecl NSMScaleRibbonWidthPrivate::ParticleSimulate(FParticleSimulationContext *param_1)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  code *pcVar5;
  bool bVar6;
  float *pfVar7;
  uint uVar8;
  uint uVar9;
  TIntVector3<unsigned_int> *pTVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  uVar8 = param_1->BuiltDataOffset + 3U & 0xfffffffc;
  iVar1 = uVar8 + 0x1c;
  param_1->BuiltDataOffset = iVar1;
  if (((param_1->BuiltData).ArrayNum < iVar1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("BuiltDataOffset <= BuiltData.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                         ,0x110,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar10 = (TIntVector3<unsigned_int> *)((param_1->BuiltData).DataPtr + (int)uVar8);
  uVar8 = pTVar10[1].field0_0x0._s_0.Y;
  if ((int)uVar8 < 0) {
    fVar15 = *(float *)&pTVar10[1].field0_0x0;
  }
  else {
    pfVar7 = (float *)TArrayView<unsigned_char_const_,int>::operator[]
                                (&param_1->DynamicBufferData,uVar8 * 4);
    fVar15 = *pfVar7;
  }
  uVar8 = param_1->NumInstances;
  uVar9 = 0;
  pvVar3 = param_1->RequiredComponents[3];
  pvVar4 = param_1->RequiredComponents[5];
  if (uVar8 != 0) {
    do {
      uVar2 = pTVar10[1].field0_0x0._s_0.Z;
      if ((uVar8 <= uVar9) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("iInstance < NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                             ,0x53,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((int)uVar2 < 0) {
        fVar11 = 0.0;
      }
      else {
        fVar11 = NiagaraStateless::FParticleSimulationContext::ReadParticleVariableComponent<float>
                           (param_1,uVar2,uVar9,0);
      }
      uVar8 = pTVar10[2].field0_0x0._s_0.X;
      if ((param_1->NumInstances <= uVar9) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("iInstance < NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                             ,0x53,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((int)uVar8 < 0) {
        fVar12 = 0.0;
      }
      else {
        fVar12 = NiagaraStateless::FParticleSimulationContext::ReadParticleVariableComponent<float>
                           (param_1,uVar8,uVar9,0);
      }
      fVar13 = *(float *)((longlong)pvVar4 + (ulonglong)uVar9 * 4);
      if (((pTVar10->field0_0x0)._s_0.X & 0xc000000) == 0xc000000) {
        fVar13 = NiagaraStateless::FParticleSimulationContext::GetDistributionRandomValue<float>
                           (param_1,pTVar10,uVar9,0);
        fVar14 = fVar13;
      }
      else {
        fVar14 = NiagaraStateless::FParticleSimulationContext::GetDistributionTimeValue<float>
                           (param_1,pTVar10,*(float *)((longlong)pvVar3 + (ulonglong)uVar9 * 4));
        fVar13 = NiagaraStateless::FParticleSimulationContext::GetDistributionTimeValue<float>
                           (param_1,pTVar10,fVar13);
      }
      uVar8 = pTVar10[1].field0_0x0._s_0.Z;
      if ((param_1->NumInstances <= uVar9) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("iInstance < NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                             ,0x5d,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (-1 < (int)uVar8) {
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,uVar8,uVar9,0,fVar11 * fVar15 * fVar14);
      }
      uVar8 = pTVar10[2].field0_0x0._s_0.X;
      if ((param_1->NumInstances <= uVar9) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("iInstance < NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                             ,0x5d,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (-1 < (int)uVar8) {
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,uVar8,uVar9,0,fVar15 * fVar12 * fVar13);
      }
      uVar8 = param_1->NumInstances;
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar8);
  }
  return;
}

// ParticleSimulate @ 14945cd70

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __cdecl NSMScaleSpriteSizeBySpeedPrivate::ParticleSimulate(FParticleSimulationContext *param_1)

{
  int iVar1;
  uchar *puVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  FShaderParametersMetadata *pFVar6;
  TVector2<float>_u_0 TVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float *pfVar11;
  TVector2<float>_u_0 TVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_res18;
  float fStackX_1c;
  float local_res20;
  float fStackX_24;
  float local_d8;
  float local_c8;
  
  uVar8 = param_1->BuiltDataOffset + 3U & 0xfffffffc;
  param_1->BuiltDataOffset = uVar8 + 0x50;
  if (((param_1->BuiltData).ArrayNum < (int)(uVar8 + 0x50)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("BuiltDataOffset <= BuiltData.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                         ,0x110,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  puVar2 = (param_1->BuiltData).DataPtr;
  uVar10 = param_1->ShaderParameterOffset + 0xfU & 0xfffffff0;
  pFVar6 = TShaderParameterStructTypeInfo<NiagaraStateless::FScaleSpriteSizeBySpeedModule_ShaderParameters>
           ::GetStructMetadata();
  uVar9 = 0;
  pfVar11 = (float *)(param_1->ShaderParametersData + uVar10);
  param_1->ShaderParameterOffset = pFVar6->Size + uVar10;
  fVar4 = __real_3f800000;
  uVar10 = param_1->NumInstances;
  if (uVar10 != 0) {
    do {
      iVar1 = *(int *)(puVar2 + (longlong)(int)uVar8 + 0x40);
      if ((uVar10 <= uVar9) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("iInstance < NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                             ,0x55,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (iVar1 < 0) {
        fVar14 = (float)((ulonglong)UE::Math::TVector<float>::OneVector.field0_0x0._0_8_ >> 0x20);
        local_d8 = (float)UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
        uVar13 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
      }
      else {
        uVar13 = NiagaraStateless::FParticleSimulationContext::ReadParticleVariableComponent<float>
                           (param_1,iVar1,uVar9,2);
        fVar14 = NiagaraStateless::FParticleSimulationContext::ReadParticleVariableComponent<float>
                           (param_1,iVar1,uVar9,1);
        local_d8 = NiagaraStateless::FParticleSimulationContext::
                   ReadParticleVariableComponent<float>(param_1,iVar1,uVar9,0);
      }
      iVar1 = *(int *)(puVar2 + (longlong)(int)uVar8 + 0x44);
      if ((param_1->NumInstances <= uVar9) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("iInstance < NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                             ,0x55,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (iVar1 < 0) {
        fVar16 = (float)((ulonglong)UE::Math::TVector<float>::OneVector.field0_0x0._0_8_ >> 0x20);
        local_c8 = (float)UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
        uVar15 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
      }
      else {
        uVar15 = NiagaraStateless::FParticleSimulationContext::ReadParticleVariableComponent<float>
                           (param_1,iVar1,uVar9,2);
        fVar16 = NiagaraStateless::FParticleSimulationContext::ReadParticleVariableComponent<float>
                           (param_1,iVar1,uVar9,1);
        local_c8 = NiagaraStateless::FParticleSimulationContext::
                   ReadParticleVariableComponent<float>(param_1,iVar1,uVar9,0);
      }
      fVar18 = param_1->InvDeltaTime;
      fVar14 = (fVar14 - fVar16) * fVar18;
      fVar16 = (local_d8 - local_c8) * fVar18;
      fVar18 = ((float)uVar13 - (float)uVar15) * fVar18;
      fVar14 = (fVar14 * fVar14 + fVar16 * fVar16 + fVar18 * fVar18) * pfVar11[7];
      if (fVar4 <= fVar14) {
        fVar14 = fVar4;
      }
      if (fVar14 <= 0.0) {
        fVar14 = 0.0;
      }
      if (((uint)pfVar11[4] & 0xc000000) == 0xc000000) {
        fVar14 = NiagaraStateless::FParticleSimulationContext::GetDistributionRandomValue<float>
                           (param_1,(TIntVector3<unsigned_int> *)(pfVar11 + 4),uVar9,0);
      }
      else {
        fVar14 = NiagaraStateless::FParticleSimulationContext::GetDistributionTimeValue<float>
                           (param_1,(TIntVector3<unsigned_int> *)(pfVar11 + 4),fVar14);
      }
      TVar12 = UE::Math::TVector2<float>::UnitVector.field0_0x0;
      if (fVar4 <= fVar14) {
        fVar14 = fVar4;
      }
      iVar1 = *(int *)(puVar2 + (longlong)(int)uVar8 + 0x48);
      if (fVar14 <= 0.0) {
        fVar14 = 0.0;
      }
      fVar16 = fVar14 * pfVar11[3] + pfVar11[1];
      fVar14 = fVar14 * pfVar11[2] + *pfVar11;
      if ((param_1->NumInstances <= uVar9) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("iInstance < NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                             ,0x54,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (-1 < iVar1) {
        fVar18 = NiagaraStateless::FParticleSimulationContext::ReadParticleVariableComponent<float>
                           (param_1,iVar1,uVar9,1);
        fVar17 = NiagaraStateless::FParticleSimulationContext::ReadParticleVariableComponent<float>
                           (param_1,iVar1,uVar9,0);
        TVar12._s_0.Y = fVar18;
        TVar12._s_0.X = fVar17;
      }
      TVar7 = UE::Math::TVector2<float>::UnitVector.field0_0x0;
      iVar1 = *(int *)(puVar2 + (longlong)(int)uVar8 + 0x4c);
      if ((param_1->NumInstances <= uVar9) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("iInstance < NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                             ,0x54,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (-1 < iVar1) {
        fVar18 = NiagaraStateless::FParticleSimulationContext::ReadParticleVariableComponent<float>
                           (param_1,iVar1,uVar9,1);
        fVar17 = NiagaraStateless::FParticleSimulationContext::ReadParticleVariableComponent<float>
                           (param_1,iVar1,uVar9,0);
        TVar7._s_0.Y = fVar18;
        TVar7._s_0.X = fVar17;
      }
      local_res18 = TVar12._s_0.X;
      fStackX_1c = TVar12._s_0.Y;
      local_res20 = TVar7._s_0.X;
      iVar1 = *(int *)(puVar2 + (longlong)(int)uVar8 + 0x48);
      fStackX_24 = TVar7._s_0.Y;
      if ((param_1->NumInstances <= uVar9) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("iInstance < NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                             ,0x5e,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (-1 < iVar1) {
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar1,uVar9,0,local_res18 * fVar14);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar1,uVar9,1,fStackX_1c * fVar16);
      }
      iVar1 = *(int *)(puVar2 + (longlong)(int)uVar8 + 0x4c);
      if ((param_1->NumInstances <= uVar9) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("iInstance < NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                             ,0x5e,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (-1 < iVar1) {
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar1,uVar9,0,local_res20 * fVar14);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar1,uVar9,1,fStackX_24 * fVar16);
      }
      uVar10 = param_1->NumInstances;
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar10);
  }
  return;
}

// ParticleSimulate @ 14945d2d0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __cdecl NSMScaleSpriteSizePrivate::ParticleSimulate(FParticleSimulationContext *param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  TVector2<float>_u_0 TVar6;
  TVector2<float> TVar7;
  TVector2<float>_u_0 TVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  TIntVector3<unsigned_int> *pTVar12;
  float fVar13;
  float in_XMM2_Da;
  float fVar14;
  float local_res8 [2];
  uint local_res10;
  uint local_res14;
  undefined8 local_res18;
  float local_res20;
  float fStackX_24;
  TVector2<float>_u_0 local_c8;
  TVector2<float>_u_0 local_c0;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  float local_80;
  float local_7c;
  undefined1 local_78 [56];
  
  uVar9 = param_1->BuiltDataOffset + 3U & 0xfffffffc;
  iVar1 = uVar9 + 0x20;
  param_1->BuiltDataOffset = iVar1;
  if (((param_1->BuiltData).ArrayNum < iVar1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("BuiltDataOffset <= BuiltData.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                         ,0x110,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar12 = (TIntVector3<unsigned_int> *)((param_1->BuiltData).DataPtr + (int)uVar9);
  uVar9 = pTVar12[1].field0_0x0._s_0.Z;
  if (-1 < (int)uVar9) {
    TArrayView<unsigned_char_const_,int>::operator[](&param_1->DynamicBufferData,uVar9 * 4);
  }
  uVar9 = param_1->NumInstances;
  uVar10 = 0;
  if (uVar9 != 0) {
    do {
      uVar2 = pTVar12[2].field0_0x0._s_0.X;
      if ((uVar9 <= uVar10) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("iInstance < NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                             ,0x54,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      TVar8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      if (-1 < (int)uVar2) {
        fVar13 = NiagaraStateless::FParticleSimulationContext::ReadParticleVariableComponent<float>
                           (param_1,uVar2,uVar10,1);
        local_res20 = NiagaraStateless::FParticleSimulationContext::
                      ReadParticleVariableComponent<float>(param_1,uVar2,uVar10,0);
        TVar8._s_0.Y = fVar13;
        TVar8._s_0.X = local_res20;
        fStackX_24 = fVar13;
      }
      uVar9 = pTVar12[2].field0_0x0._s_0.Y;
      local_a0 = TVar8;
      if ((param_1->NumInstances <= uVar10) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("iInstance < NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                             ,0x54,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      TVar6 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      if (-1 < (int)uVar9) {
        fVar13 = NiagaraStateless::FParticleSimulationContext::ReadParticleVariableComponent<float>
                           (param_1,uVar9,uVar10,1);
        local_b8 = NiagaraStateless::FParticleSimulationContext::
                   ReadParticleVariableComponent<float>(param_1,uVar9,uVar10,0);
        TVar6._s_0.Y = fVar13;
        TVar6._s_0.X = local_b8;
        fStack_b4 = fVar13;
      }
      local_98 = TVar6;
      if (((pTVar12->field0_0x0)._s_0.X & 0xc000000) == 0xc000000) {
        fVar13 = NiagaraStateless::FParticleSimulationContext::RandomFloat(param_1,uVar10,0);
        FNiagaraStatelessBuiltDistribution::ConvertRandomToLookup
                  (pTVar12,fVar13,&local_res10,&local_res14,local_res8);
        NiagaraStateless::FParticleSimulationContext::
        GetDistributionTableValues<UE::Math::TVector2<float>_>
                  (param_1,pTVar12,local_res10,local_res14,(TVector2<float> *)&local_c8._s_0,
                   (TVector2<float> *)&local_c0._s_0);
        uVar9 = (pTVar12->field0_0x0)._s_0.X;
        if ((uVar9 >> 0x1e & 1) == 0) {
          uVar11 = CONCAT44(local_c8._s_0.Y,local_c8._s_0.X);
          local_res18 = uVar11;
          local_90 = uVar11;
          local_88 = uVar11;
        }
        else {
          NiagaraStateless::FParticleSimulationContext::RandomFloat2(param_1,(uint)&local_b0,uVar10)
          ;
          fVar13 = fStack_ac;
          if ((uVar9 >> 0x1c & 1) != 0) {
            local_80 = local_b0;
            local_7c = local_b0;
            fVar13 = local_b0;
          }
          in_XMM2_Da = (local_c0._s_0.Y - local_c8._s_0.Y) * fVar13 + local_c8._s_0.Y;
          local_res18 = CONCAT44(in_XMM2_Da,
                                 (local_c0._s_0.X - local_c8._s_0.X) * local_b0 + local_c8._s_0.X);
          local_90 = local_res18;
          local_88 = local_res18;
          uVar11 = local_res18;
        }
      }
      else {
        TVar7 = NiagaraStateless::FParticleSimulationContext::
                GetDistributionTimeValue<UE::Math::TVector2<float>_>
                          (param_1,(TIntVector3<unsigned_int> *)local_78,in_XMM2_Da);
        uVar11 = *(undefined8 *)TVar7.field0_0x0;
        local_90 = uVar11;
        TVar7 = NiagaraStateless::FParticleSimulationContext::
                GetDistributionTimeValue<UE::Math::TVector2<float>_>
                          (param_1,(TIntVector3<unsigned_int> *)(local_78 + 8),in_XMM2_Da);
        local_88 = *(undefined8 *)TVar7.field0_0x0;
      }
      uVar4 = local_88;
      fVar14 = local_90._4_4_ * local_a0._4_4_;
      fVar13 = (float)uVar11 * (float)local_a0;
      uVar9 = pTVar12[2].field0_0x0._s_0.X;
      if ((param_1->NumInstances <= uVar10) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("iInstance < NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                             ,0x5e,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (-1 < (int)uVar9) {
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,uVar9,uVar10,0,fVar13);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,uVar9,uVar10,1,fVar14);
      }
      fVar14 = local_88._4_4_ * local_98._4_4_;
      uVar9 = pTVar12[2].field0_0x0._s_0.Y;
      fVar13 = (float)uVar4 * (float)local_98;
      if ((param_1->NumInstances <= uVar10) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("iInstance < NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                             ,0x5e,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (-1 < (int)uVar9) {
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,uVar9,uVar10,0,fVar13);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,uVar9,uVar10,1,fVar14);
      }
      uVar9 = param_1->NumInstances;
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar9);
  }
  return;
}

// ParticleSimulate @ 14945d6e0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __cdecl NSMShapeLocationPrivate::ParticleSimulate(FParticleSimulationContext *param_1)

{
  int iVar1;
  uchar *puVar2;
  uchar *puVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  bool bVar9;
  FShaderParametersMetadata *pFVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  TVector<float>_u_0 local_c8;
  undefined8 local_b8;
  undefined8 local_a8;
  
  uVar11 = param_1->BuiltDataOffset + 3U & 0xfffffffc;
  param_1->BuiltDataOffset = uVar11 + 0x48;
  if (((param_1->BuiltData).ArrayNum < (int)(uVar11 + 0x48)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("BuiltDataOffset <= BuiltData.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                         ,0x110,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  puVar2 = (param_1->BuiltData).DataPtr;
  uVar13 = param_1->ShaderParameterOffset + 0xfU & 0xfffffff0;
  pFVar10 = TShaderParameterStructTypeInfo<NiagaraStateless::FShapeLocationModule_ShaderParameters>
            ::GetStructMetadata();
  uVar12 = 0;
  puVar3 = param_1->ShaderParametersData;
  param_1->ShaderParameterOffset = pFVar10->Size + uVar13;
  if (param_1->NumInstances != 0) {
    do {
      ShapeLocation_GetLocation
                ((TVector<float> *)&local_c8._s_0,param_1,
                 (FShapeLocationModule_ShaderParameters *)(puVar3 + uVar13),uVar12);
      iVar1 = *(int *)(puVar2 + (longlong)(int)uVar11 + 0x40);
      if ((param_1->NumInstances <= uVar12) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("iInstance < NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                             ,0x55,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (iVar1 < 0) {
        fVar15 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
        local_b8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        uVar8 = local_b8;
        local_b8._0_4_ = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        fVar16 = (float)local_b8;
        uVar14 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        local_b8 = uVar8;
      }
      else {
        uVar14 = NiagaraStateless::FParticleSimulationContext::ReadParticleVariableComponent<float>
                           (param_1,iVar1,uVar12,2);
        fVar15 = NiagaraStateless::FParticleSimulationContext::ReadParticleVariableComponent<float>
                           (param_1,iVar1,uVar12,1);
        fVar16 = NiagaraStateless::FParticleSimulationContext::ReadParticleVariableComponent<float>
                           (param_1,iVar1,uVar12,0);
      }
      iVar1 = *(int *)(puVar2 + (longlong)(int)uVar11 + 0x44);
      if ((param_1->NumInstances <= uVar12) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("iInstance < NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                             ,0x55,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (iVar1 < 0) {
        fVar18 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
        local_a8._0_4_ = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        fVar19 = (float)local_a8;
        uVar17 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        local_a8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      }
      else {
        uVar17 = NiagaraStateless::FParticleSimulationContext::ReadParticleVariableComponent<float>
                           (param_1,iVar1,uVar12,2);
        fVar18 = NiagaraStateless::FParticleSimulationContext::ReadParticleVariableComponent<float>
                           (param_1,iVar1,uVar12,1);
        fVar19 = NiagaraStateless::FParticleSimulationContext::ReadParticleVariableComponent<float>
                           (param_1,iVar1,uVar12,0);
      }
      uVar7 = local_c8._s_0.Z;
      uVar6 = local_c8._s_0.Y;
      uVar5 = local_c8._s_0.X;
      fVar16 = fVar16 + local_c8._s_0.X;
      fVar15 = fVar15 + local_c8._s_0.Y;
      fVar20 = (float)uVar14 + local_c8._s_0.Z;
      iVar1 = *(int *)(puVar2 + (longlong)(int)uVar11 + 0x40);
      if ((param_1->NumInstances <= uVar12) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("iInstance < NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                             ,0x5f,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (-1 < iVar1) {
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar1,uVar12,0,fVar16);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar1,uVar12,1,fVar15);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar1,uVar12,2,fVar20);
      }
      iVar1 = *(int *)(puVar2 + (longlong)(int)uVar11 + 0x44);
      if ((param_1->NumInstances <= uVar12) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("iInstance < NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                             ,0x5f,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (-1 < iVar1) {
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar1,uVar12,0,fVar19 + (float)uVar5);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar1,uVar12,1,fVar18 + (float)uVar6);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar1,uVar12,2,(float)uVar17 + (float)uVar7);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < param_1->NumInstances);
  }
  return;
}

// ParticleSimulate @ 14945daf0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __cdecl
NSMSpriteFacingAndAlignmentPrivate::ParticleSimulate(FParticleSimulationContext *param_1)

{
  int iVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  FShaderParametersMetadata *pFVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float *pfVar9;
  
  uVar6 = param_1->BuiltDataOffset + 3U & 0xfffffffc;
  param_1->BuiltDataOffset = uVar6 + 0x48;
  if (((param_1->BuiltData).ArrayNum < (int)(uVar6 + 0x48)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("BuiltDataOffset <= BuiltData.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                         ,0x110,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  puVar2 = (param_1->BuiltData).DataPtr;
  uVar8 = param_1->ShaderParameterOffset + 0xfU & 0xfffffff0;
  pFVar5 = TShaderParameterStructTypeInfo<NiagaraStateless::FSpriteFacingAndAlignmentModule_ShaderParameters>
           ::GetStructMetadata();
  uVar7 = 0;
  pfVar9 = (float *)(param_1->ShaderParametersData + uVar8);
  param_1->ShaderParameterOffset = pFVar5->Size + uVar8;
  uVar8 = param_1->NumInstances;
  if (uVar8 != 0) {
    do {
      iVar1 = *(int *)(puVar2 + (longlong)(int)uVar6 + 0x38);
      if ((uVar8 <= uVar7) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("iInstance < NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                             ,0x5f,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (-1 < iVar1) {
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar1,uVar7,0,*pfVar9);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar1,uVar7,1,pfVar9[1]);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar1,uVar7,2,pfVar9[2]);
      }
      iVar1 = *(int *)(puVar2 + (longlong)(int)uVar6 + 0x3c);
      if ((param_1->NumInstances <= uVar7) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("iInstance < NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                             ,0x5f,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (-1 < iVar1) {
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar1,uVar7,0,*pfVar9);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar1,uVar7,1,pfVar9[1]);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar1,uVar7,2,pfVar9[2]);
      }
      iVar1 = *(int *)(puVar2 + (longlong)(int)uVar6 + 0x40);
      if ((param_1->NumInstances <= uVar7) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("iInstance < NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                             ,0x5f,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (-1 < iVar1) {
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar1,uVar7,0,pfVar9[4]);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar1,uVar7,1,pfVar9[5]);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar1,uVar7,2,pfVar9[6]);
      }
      iVar1 = *(int *)(puVar2 + (longlong)(int)uVar6 + 0x44);
      if ((param_1->NumInstances <= uVar7) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("iInstance < NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                             ,0x5f,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (-1 < iVar1) {
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar1,uVar7,0,pfVar9[4]);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar1,uVar7,1,pfVar9[5]);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar1,uVar7,2,pfVar9[6]);
      }
      uVar8 = param_1->NumInstances;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar8);
  }
  return;
}

// ParticleSimulate @ 14945ddf0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __cdecl NSMSpriteRotationRatePrivate::ParticleSimulate(FParticleSimulationContext *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  uchar *puVar6;
  void *pvVar7;
  uchar *puVar8;
  void *pvVar9;
  void *pvVar10;
  code *pcVar11;
  float fVar12;
  bool bVar13;
  uint uVar14;
  FShaderParametersMetadata *pFVar15;
  float *pfVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  ulonglong uVar20;
  
  uVar18 = param_1->BuiltDataOffset + 3U & 0xfffffffc;
  param_1->BuiltDataOffset = uVar18 + 0x24;
  if (((param_1->BuiltData).ArrayNum < (int)(uVar18 + 0x24)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("BuiltDataOffset <= BuiltData.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                          ,0x110,L""), bVar13)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  puVar6 = (param_1->BuiltData).DataPtr;
  uVar23 = param_1->ShaderParameterOffset + 0xfU & 0xfffffff0;
  pFVar15 = TShaderParameterStructTypeInfo<NiagaraStateless::FSpriteRotationRateModule_ShaderParameters>
            ::GetStructMetadata();
  pvVar7 = param_1->RequiredComponents[3];
  uVar19 = 0;
  puVar8 = param_1->ShaderParametersData;
  param_1->ShaderParameterOffset = pFVar15->Size + uVar23;
  fVar12 = __real_3f000000;
  pvVar9 = param_1->RequiredComponents[1];
  pvVar10 = param_1->RequiredComponents[5];
  if (param_1->NumInstances != 0) {
    do {
      uVar20 = (ulonglong)uVar19;
      fVar31 = *(float *)(puVar8 + (ulonglong)uVar23 + 8);
      fVar1 = *(float *)(puVar8 + (ulonglong)uVar23 + 4);
      fVar24 = NiagaraStateless::FParticleSimulationContext::RandomFloat(param_1,uVar19,0);
      uVar4 = *(uint *)(puVar8 + (ulonglong)uVar23 + 0x10);
      uVar21 = uVar4 >> 0x11 & 0x1ff;
      fVar29 = (*(float *)((longlong)pvVar7 + uVar20 * 4) -
               *(float *)(puVar8 + (ulonglong)uVar23 + 0x14)) *
               *(float *)(puVar8 + (ulonglong)uVar23 + 0x18);
      if (fVar29 <= 0.0) {
        fVar29 = 0.0;
      }
      if ((uVar4 & 0x40000000) == 0) {
        uVar14 = (int)ROUND(fVar29 + fVar29 + fVar12) >> 1;
      }
      else {
        uVar14 = (uint)(longlong)fVar29;
      }
      uVar22 = uVar14 + 1;
      if ((uVar4 >> 0x1d & 1) == 0) {
        uVar17 = uVar21;
        if (uVar14 < uVar21) {
          uVar17 = uVar14;
        }
        uVar14 = uVar21;
        if (uVar22 < uVar21) {
          uVar14 = uVar22;
        }
      }
      else {
        uVar17 = uVar14 % (uVar21 + 1);
        uVar14 = 0;
        if (uVar22 <= uVar21) {
          uVar14 = uVar22;
        }
      }
      if ((uVar4 & 0x40000000) == 0) {
        fVar29 = 0.0;
      }
      else {
        fVar25 = (float)truncf(fVar29);
        fVar29 = fVar29 - fVar25;
      }
      pfVar16 = TArrayView<float_const_,int>::operator[]
                          (&param_1->StaticFloatData,uVar17 + (uVar4 & 0x1ffff));
      fVar25 = *pfVar16;
      pfVar16 = TArrayView<float_const_,int>::operator[]
                          (&param_1->StaticFloatData,uVar14 + (uVar4 & 0x1ffff));
      uVar4 = *(uint *)(puVar8 + (ulonglong)uVar23 + 0x10);
      fVar2 = *pfVar16;
      uVar21 = uVar4 >> 0x11 & 0x1ff;
      fVar30 = (*(float *)((longlong)pvVar10 + uVar20 * 4) -
               *(float *)(puVar8 + (ulonglong)uVar23 + 0x14)) *
               *(float *)(puVar8 + (ulonglong)uVar23 + 0x18);
      if (fVar30 <= 0.0) {
        fVar30 = 0.0;
      }
      if ((uVar4 & 0x40000000) == 0) {
        uVar14 = (int)ROUND(fVar30 + fVar30 + fVar12) >> 1;
      }
      else {
        uVar14 = (uint)(longlong)fVar30;
      }
      uVar22 = uVar14 + 1;
      if ((uVar4 >> 0x1d & 1) == 0) {
        uVar17 = uVar21;
        if (uVar14 < uVar21) {
          uVar17 = uVar14;
        }
        uVar14 = uVar21;
        if (uVar22 < uVar21) {
          uVar14 = uVar22;
        }
      }
      else {
        uVar17 = uVar14 % (uVar21 + 1);
        uVar14 = 0;
        if (uVar22 <= uVar21) {
          uVar14 = uVar22;
        }
      }
      if ((uVar4 & 0x40000000) == 0) {
        fVar30 = 0.0;
      }
      else {
        fVar26 = (float)truncf(fVar30);
        fVar30 = fVar30 - fVar26;
      }
      pfVar16 = TArrayView<float_const_,int>::operator[]
                          (&param_1->StaticFloatData,uVar17 + (uVar4 & 0x1ffff));
      fVar26 = *pfVar16;
      pfVar16 = TArrayView<float_const_,int>::operator[]
                          (&param_1->StaticFloatData,uVar14 + (uVar4 & 0x1ffff));
      iVar5 = *(int *)(puVar6 + (longlong)(int)uVar18 + 0x1c);
      fVar3 = *pfVar16;
      if ((param_1->NumInstances <= uVar19) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("iInstance < NumInstances",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                              ,0x53,L""), bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if (iVar5 < 0) {
        fVar27 = 0.0;
      }
      else {
        fVar27 = NiagaraStateless::FParticleSimulationContext::ReadParticleVariableComponent<float>
                           (param_1,iVar5,uVar19,0);
      }
      iVar5 = *(int *)(puVar6 + (longlong)(int)uVar18 + 0x20);
      if ((param_1->NumInstances <= uVar19) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("iInstance < NumInstances",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                              ,0x53,L""), bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if (iVar5 < 0) {
        fVar28 = 0.0;
      }
      else {
        fVar28 = NiagaraStateless::FParticleSimulationContext::ReadParticleVariableComponent<float>
                           (param_1,iVar5,uVar19,0);
      }
      iVar5 = *(int *)(puVar6 + (longlong)(int)uVar18 + 0x1c);
      fVar31 = (fVar24 * fVar1 + fVar31) * *(float *)((longlong)pvVar9 + uVar20 * 4);
      if ((param_1->NumInstances <= uVar19) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("iInstance < NumInstances",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                              ,0x5d,L""), bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if (-1 < iVar5) {
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar5,uVar19,0,fVar31 * ((fVar2 - fVar25) * fVar29 + fVar25) + fVar27);
      }
      iVar5 = *(int *)(puVar6 + (longlong)(int)uVar18 + 0x20);
      if ((param_1->NumInstances <= uVar19) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("iInstance < NumInstances",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                              ,0x5d,L""), bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if (-1 < iVar5) {
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar5,uVar19,0,fVar31 * ((fVar3 - fVar26) * fVar30 + fVar26) + fVar28);
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 < param_1->NumInstances);
  }
  return;
}

// ParticleSimulate @ 14945e2a0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __cdecl NSMSubUVAnimationPrivate::ParticleSimulate(FParticleSimulationContext *param_1)

{
  float fVar1;
  int iVar2;
  uchar *puVar3;
  void *pvVar4;
  void *pvVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  FShaderParametersMetadata *pFVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  uVar11 = param_1->BuiltDataOffset + 3U & 0xfffffffc;
  iVar2 = uVar11 + 0x28;
  param_1->BuiltDataOffset = iVar2;
  if (((param_1->BuiltData).ArrayNum < iVar2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("BuiltDataOffset <= BuiltData.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                         ,0x110,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  puVar3 = (param_1->BuiltData).DataPtr;
  uVar12 = param_1->ShaderParameterOffset + 0xfU & 0xfffffff0;
  pFVar9 = TShaderParameterStructTypeInfo<NiagaraStateless::FSubUVAnimationModule_ShaderParameters>
           ::GetStructMetadata();
  pvVar4 = param_1->RequiredComponents[2];
  uVar10 = 0;
  pvVar5 = param_1->RequiredComponents[3];
  piVar13 = (int *)(param_1->ShaderParametersData + uVar12);
  param_1->ShaderParameterOffset = pFVar9->Size + uVar12;
  fVar7 = __real_3f800000;
  if (param_1->NumInstances != 0) {
    do {
      fVar15 = *(float *)((longlong)pvVar4 + uVar10 * 4);
      uVar12 = (uint)uVar10;
      fVar1 = *(float *)((longlong)pvVar5 + uVar10 * 4);
      fVar16 = (float)piVar13[2];
      fVar14 = NiagaraStateless::FParticleSimulationContext::RandomFloat
                         (param_1,uVar12,(uint)(longlong)(fVar15 * (float)piVar13[4]));
      fVar16 = fVar14 * fVar16 + (float)piVar13[3];
      if (*piVar13 == 1) {
        fVar16 = fVar15 * (float)piVar13[7] * (float)piVar13[6] + fVar16 + (float)piVar13[5];
        fVar15 = (float)truncf(fVar16);
        fVar16 = fVar16 - fVar15;
      }
      else if (*piVar13 == 2) {
        fVar16 = fVar1 * (float)piVar13[7] * (float)piVar13[6] + fVar16 + (float)piVar13[5];
        if (fVar7 <= fVar16) {
          fVar16 = fVar7;
        }
        if (fVar16 <= 0.0) {
          fVar16 = 0.0;
        }
      }
      fVar15 = (float)piVar13[1];
      iVar2 = *(int *)(puVar3 + (longlong)(int)uVar11 + 0x24);
      if ((param_1->NumInstances <= uVar12) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("iInstance < NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                             ,0x5d,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (-1 < iVar2) {
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar2,uVar12,0,fVar16 * fVar15);
      }
      uVar10 = (ulonglong)(uVar12 + 1);
    } while (uVar12 + 1 < param_1->NumInstances);
  }
  return;
}

// ParticleSimulate @ 14945e4c0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __cdecl
NiagaraStatelessModuleSolveVelocitiesAndForcesPrivate::ParticleSimulate
          (FParticleSimulationContext *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uchar *puVar5;
  void *pvVar6;
  void *pvVar7;
  code *pcVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  FShaderParametersMetadata *pFVar11;
  FNoiseLUT *pFVar12;
  TVector<float> *pTVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  FSolveVelocitiesAndForcesModule_ShaderParameters *pFVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar22;
  float fVar23;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float local_res8;
  float local_1f8;
  float fStack_1f4;
  undefined4 local_1f0;
  TVector<float>_u_0 local_1e8;
  float local_1d8;
  float fStack_1d4;
  undefined4 local_1d0;
  TVector<float>_u_0 local_1c8;
  TVector<float>_u_0 local_1b8;
  void *local_1a8;
  void *local_1a0;
  void *local_198;
  float local_188;
  FScriptContainerElement *local_178;
  int iStack_170;
  undefined4 uStack_16c;
  TArrayView<UE::Math::TVector<float>_const_,int> local_168;
  TArrayView<UE::Math::TVector<float>_const_,int> local_158;
  TVector<float> local_148;
  TVector<float> local_13c;
  TVector<float> local_130;
  TVector<float> local_124;
  TVector<float> local_118;
  TVector<float> local_10c;
  TVector<float> local_100 [16];
  
  uVar14 = param_1->BuiltDataOffset + 0xfU & 0xfffffff0;
  param_1->BuiltDataOffset = uVar14 + 0x120;
  if (((param_1->BuiltData).ArrayNum < (int)(uVar14 + 0x120)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("BuiltDataOffset <= BuiltData.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                          ,0x110,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  puVar5 = (param_1->BuiltData).DataPtr;
  uVar16 = param_1->ShaderParameterOffset + 0xfU & 0xfffffff0;
  pFVar11 = TShaderParameterStructTypeInfo<NiagaraStateless::FSolveVelocitiesAndForcesModule_ShaderParameters>
            ::GetStructMetadata();
  fVar1 = param_1->InvDeltaTime;
  pvVar6 = param_1->RequiredComponents[1];
  pFVar17 = (FSolveVelocitiesAndForcesModule_ShaderParameters *)
            (param_1->ShaderParametersData + uVar16);
  param_1->ShaderParameterOffset = pFVar11->Size + uVar16;
  local_1a0 = param_1->RequiredComponents[2];
  local_198 = param_1->RequiredComponents[4];
  pvVar7 = param_1->RequiredComponents[3];
  local_1a8 = param_1->RequiredComponents[5];
  pFVar12 = NiagaraStateless::FNoiseLUT::GetGlobalLUT();
  local_178 = (pFVar12->CpuData).AllocatorInstance.Data;
  iStack_170 = (pFVar12->CpuData).ArrayNum;
  if ((iStack_170 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar15 = 0;
  fVar30 = __real_38d1b717;
  if (param_1->NumInstances != 0) {
    do {
      fVar29 = __real_3f800000;
      fVar26 = pFVar17->SolveVelocitiesAndForces_MassBias;
      fVar19 = pFVar17->SolveVelocitiesAndForces_MassScale;
      uVar16 = (uint)uVar15;
      fVar18 = NiagaraStateless::FParticleSimulationContext::RandomFloat(param_1,uVar16,0);
      fVar32 = pFVar17->SolveVelocitiesAndForces_DragScale;
      fVar26 = fVar18 * fVar19 + fVar26;
      fVar19 = pFVar17->SolveVelocitiesAndForces_DragBias;
      fVar18 = NiagaraStateless::FParticleSimulationContext::RandomFloat(param_1,uVar16,1);
      fVar19 = fVar18 * fVar32 + fVar19;
      pTVar13 = NiagaraStateless::FParticleSimulationContext::RandomFloat3
                          (param_1,&local_148,uVar16,2);
      local_res8 = (pTVar13->field0_0x0)._s_0.Z *
                   (pFVar17->SolveVelocitiesAndForces_VelocityScale).field0_0x0._s_0.Z +
                   (pFVar17->SolveVelocitiesAndForces_VelocityBias).field0_0x0._s_0.Z;
      fVar18 = (pTVar13->field0_0x0)._s_0.Y *
               (pFVar17->SolveVelocitiesAndForces_VelocityScale).field0_0x0._s_0.Y +
               (pFVar17->SolveVelocitiesAndForces_VelocityBias).field0_0x0._s_0.Y;
      fVar32 = (pFVar17->SolveVelocitiesAndForces_VelocityScale).field0_0x0._s_0.X *
               (pTVar13->field0_0x0)._s_0.X +
               (pFVar17->SolveVelocitiesAndForces_VelocityBias).field0_0x0._s_0.X;
      local_1e8._s_0.X = fVar32;
      local_1e8._s_0.Y = fVar18;
      local_1e8._s_0.Z = local_res8;
      pTVar13 = NiagaraStateless::FParticleSimulationContext::RandomFloat3
                          (param_1,&local_13c,uVar16,3);
      if (fVar26 <= fVar30) {
        fVar26 = fVar30;
      }
      local_1b8._s_0.X =
           (pTVar13->field0_0x0)._s_0.X *
           (pFVar17->SolveVelocitiesAndForces_WindScale).field0_0x0._s_0.X +
           (pFVar17->SolveVelocitiesAndForces_WindBias).field0_0x0._s_0.X;
      fVar26 = fVar29 / fVar26;
      local_1b8._s_0.Y =
           (pTVar13->field0_0x0)._s_0.Y *
           (pFVar17->SolveVelocitiesAndForces_WindScale).field0_0x0._s_0.Y +
           (pFVar17->SolveVelocitiesAndForces_WindBias).field0_0x0._s_0.Y;
      local_1b8._s_0.Z =
           (pTVar13->field0_0x0)._s_0.Z *
           (pFVar17->SolveVelocitiesAndForces_WindScale).field0_0x0._s_0.Z +
           (pFVar17->SolveVelocitiesAndForces_WindBias).field0_0x0._s_0.Z;
      pTVar13 = NiagaraStateless::FParticleSimulationContext::RandomFloat3
                          (param_1,&local_130,uVar16,4);
      fVar21 = (pFVar17->SolveVelocitiesAndForces_AccelerationScale).field0_0x0._s_0.X;
      fVar22 = (pTVar13->field0_0x0)._s_0.Y;
      fVar23 = (pTVar13->field0_0x0)._s_0.Z;
      fVar31 = (pFVar17->SolveVelocitiesAndForces_AccelerationScale).field0_0x0._s_0.Y;
      fVar25 = (pFVar17->SolveVelocitiesAndForces_AccelerationScale).field0_0x0._s_0.Z;
      fVar27 = (pTVar13->field0_0x0)._s_0.X;
      fVar28 = (pFVar17->SolveVelocitiesAndForces_AccelerationBias).field0_0x0._s_0.Y;
      fVar2 = (pFVar17->SolveVelocitiesAndForces_AccelerationBias).field0_0x0._s_0.Z;
      fVar3 = (pFVar17->SolveVelocitiesAndForces_AccelerationBias).field0_0x0._s_0.X;
      pTVar13 = NiagaraStateless::FParticleSimulationContext::RandomFloat3
                          (param_1,&local_124,uVar16,0x29);
      local_1c8._s_0.X =
           (pFVar17->SolveVelocitiesAndForces_GravityScale).field0_0x0._s_0.X *
           (pTVar13->field0_0x0)._s_0.X +
           (pFVar17->SolveVelocitiesAndForces_GravityBias).field0_0x0._s_0.X +
           (fVar21 * fVar27 + fVar3) * fVar26;
      iVar4 = *(int *)(puVar5 + (longlong)(int)uVar14 + 0x110);
      local_1c8._s_0.Y =
           (pTVar13->field0_0x0)._s_0.Y *
           (pFVar17->SolveVelocitiesAndForces_GravityScale).field0_0x0._s_0.Y +
           (pFVar17->SolveVelocitiesAndForces_GravityBias).field0_0x0._s_0.Y +
           (fVar22 * fVar31 + fVar28) * fVar26;
      local_1c8._s_0.Z =
           (pTVar13->field0_0x0)._s_0.Z *
           (pFVar17->SolveVelocitiesAndForces_GravityScale).field0_0x0._s_0.Z +
           (pFVar17->SolveVelocitiesAndForces_GravityBias).field0_0x0._s_0.Z +
           (fVar23 * fVar25 + fVar2) * fVar26;
      if ((param_1->NumInstances <= uVar16) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("iInstance < NumInstances",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                              ,0x55,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar24 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      uVar20 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      if (-1 < iVar4) {
        uVar20 = NiagaraStateless::FParticleSimulationContext::ReadParticleVariableComponent<float>
                           (param_1,iVar4,uVar16,2);
        fVar26 = NiagaraStateless::FParticleSimulationContext::ReadParticleVariableComponent<float>
                           (param_1,iVar4,uVar16,1);
        fVar21 = NiagaraStateless::FParticleSimulationContext::ReadParticleVariableComponent<float>
                           (param_1,iVar4,uVar16,0);
        uVar24 = CONCAT44(fVar26,fVar21);
      }
      iVar4 = *(int *)(puVar5 + (longlong)(int)uVar14 + 0x118);
      _local_1f8 = uVar24;
      local_1f0 = uVar20;
      if ((param_1->NumInstances <= uVar16) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("iInstance < NumInstances",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                              ,0x55,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (-1 < iVar4) {
        uVar20 = NiagaraStateless::FParticleSimulationContext::ReadParticleVariableComponent<float>
                           (param_1,iVar4,uVar16,2);
        fVar26 = NiagaraStateless::FParticleSimulationContext::ReadParticleVariableComponent<float>
                           (param_1,iVar4,uVar16,1);
        fVar21 = NiagaraStateless::FParticleSimulationContext::ReadParticleVariableComponent<float>
                           (param_1,iVar4,uVar16,0);
        uVar24 = CONCAT44(fVar26,fVar21);
      }
      _local_1d8 = uVar24;
      local_1d0 = uVar20;
      if (pFVar17->SolveVelocitiesAndForces_ConeVelocityEnabled != 0) {
        NiagaraStateless::FParticleSimulationContext::RandomFloat(param_1,uVar16,5);
        __libm_sse2_sincosf_();
        local_188 = extraout_XMM0_Db;
        NiagaraStateless::FParticleSimulationContext::RandomFloat(param_1,uVar16,6);
        __libm_sse2_sincosf_();
        fVar30 = pFVar17->SolveVelocitiesAndForces_ConeVelocityBias;
        fVar22 = extraout_XMM0_Da_00 * extraout_XMM0_Da;
        fVar31 = extraout_XMM0_Db_00 * extraout_XMM0_Da;
        fVar26 = pFVar17->SolveVelocitiesAndForces_ConeVelocityScale;
        fVar23 = NiagaraStateless::FParticleSimulationContext::RandomFloat(param_1,uVar16,7);
        fVar21 = pFVar17->SolveVelocitiesAndForces_ConeVelocityFalloff;
        fVar30 = fVar23 * fVar26 + fVar30;
        if (0.0 < fVar21) {
          fVar26 = extraout_XMM0_Db;
          if (fVar29 <= extraout_XMM0_Db) {
            fVar26 = fVar29;
          }
          if (fVar26 <= 0.0) {
            fVar26 = 0.0;
          }
          fVar26 = powf(fVar26,fVar21 * __real_41200000);
          fVar30 = fVar30 * ((fVar26 - fVar29) * fVar21 + fVar29);
        }
        fVar26 = *(float *)(puVar5 + (longlong)(int)uVar14 + 0xb8);
        fVar29 = *(float *)(puVar5 + (longlong)(int)uVar14 + 0xb4);
        fVar21 = *(float *)(puVar5 + (longlong)(int)uVar14 + 0xb0);
        fVar23 = *(float *)(puVar5 + (longlong)(int)uVar14 + 0xbc);
        fVar27 = extraout_XMM0_Db * fVar29 - fVar26 * fVar31;
        fVar28 = fVar26 * fVar22 - local_188 * fVar21;
        fVar27 = fVar27 + fVar27;
        fVar25 = fVar21 * fVar31 - fVar29 * fVar22;
        fVar28 = fVar28 + fVar28;
        fVar25 = fVar25 + fVar25;
        fVar32 = fVar32 + ((fVar25 * fVar29 - fVar28 * fVar26) + fVar27 * fVar23 + fVar22) * fVar30;
        local_res8 = local_res8 +
                     ((fVar28 * fVar21 - fVar27 * fVar29) + fVar25 * fVar23 + local_188) * fVar30;
        fVar18 = fVar18 + ((fVar27 * fVar26 - fVar25 * fVar21) + fVar28 * fVar23 + fVar31) * fVar30;
        fVar30 = __real_38d1b717;
        local_1e8._s_0.X = fVar32;
        local_1e8._s_0.Y = fVar18;
        local_1e8._s_0.Z = local_res8;
      }
      uVar20 = local_1f0;
      fVar29 = fStack_1f4;
      fVar26 = local_1f8;
      if (pFVar17->SolveVelocitiesAndForces_PointVelocityEnabled != 0) {
        pTVar13 = NiagaraStateless::FParticleSimulationContext::RandomFloat3
                            (param_1,&local_118,uVar16,8);
        fVar21 = (pTVar13->field0_0x0)._s_0.X - __real_3f000000;
        fVar23 = (pTVar13->field0_0x0)._s_0.Y - __real_3f000000;
        fVar31 = (pTVar13->field0_0x0)._s_0.Z - __real_3f000000;
        fVar22 = fVar21 * fVar21 + fVar23 * fVar23 + fVar31 * fVar31;
        if (fVar30 <= fVar22) {
          fVar30 = __real_3f800000 / SQRT(fVar22);
          fVar21 = fVar30 * fVar21;
          fVar23 = fVar30 * fVar23;
          fVar30 = fVar30 * fVar31;
        }
        else {
          fVar23 = 0.0;
          fVar30 = 0.0;
          fVar21 = __real_3f800000;
        }
        fVar31 = fVar26 - (pFVar17->SolveVelocitiesAndForces_PointOrigin).field0_0x0._s_0.X;
        fVar25 = fVar29 - (pFVar17->SolveVelocitiesAndForces_PointOrigin).field0_0x0._s_0.Y;
        fVar27 = (float)uVar20 - (pFVar17->SolveVelocitiesAndForces_PointOrigin).field0_0x0._s_0.Z;
        fVar22 = fVar25 * fVar25 + fVar31 * fVar31 + fVar27 * fVar27;
        if (__real_38d1b717 <= fVar22) {
          fVar30 = __real_3f800000 / SQRT(fVar22);
          fVar21 = fVar30 * fVar31;
          fVar23 = fVar30 * fVar25;
          fVar30 = fVar30 * fVar27;
        }
        fVar22 = pFVar17->SolveVelocitiesAndForces_PointVelocityBias;
        fVar31 = pFVar17->SolveVelocitiesAndForces_PointVelocityScale;
        fVar25 = NiagaraStateless::FParticleSimulationContext::RandomFloat(param_1,uVar16,9);
        fVar22 = fVar25 * fVar31 + fVar22;
        local_1e8._s_0.X = fVar32 + fVar21 * fVar22;
        local_1e8._s_0.Y = fVar18 + fVar23 * fVar22;
        local_1e8._s_0.Z = local_res8 + fVar30 * fVar22;
      }
      pFVar9 = local_178;
      if (pFVar17->SolveVelocitiesAndForces_NoiseEnabled != 0) {
        uVar24._4_4_ = uStack_16c;
        uVar24._0_4_ = iStack_170;
        local_168.DataPtr = (TVector<float> *)local_178;
        local_168._8_8_ = uVar24;
        EvaluateNoise(&local_168,pFVar17,*(float *)((longlong)pvVar6 + uVar15 * 4),
                      *(float *)((longlong)pvVar7 + uVar15 * 4),(TVector<float> *)&local_1f8);
        local_158.DataPtr = (TVector<float> *)pFVar9;
        local_158._8_8_ = uVar24;
        EvaluateNoise(&local_158,pFVar17,*(float *)((longlong)pvVar6 + uVar15 * 4),
                      *(float *)((longlong)local_1a8 + uVar15 * 4),(TVector<float> *)&local_1d8);
        fVar26 = local_1f8;
        fVar29 = fStack_1f4;
        uVar20 = local_1f0;
      }
      fVar30 = __real_38d1b717;
      fVar32 = *(float *)((longlong)local_1a0 + uVar15 * 4);
      if (fVar32 <= __real_38d1b717) {
        fVar32 = __real_38d1b717;
      }
      pTVar13 = IntegratePosition(&local_10c,fVar32,fVar19,(TVector<float> *)&local_1e8._s_0,
                                  (TVector<float> *)&local_1b8._s_0,
                                  (TVector<float> *)&local_1c8._s_0);
      fVar26 = fVar26 + (pTVar13->field0_0x0)._s_0.X;
      fVar29 = fVar29 + (pTVar13->field0_0x0)._s_0.Y;
      fVar21 = (float)uVar20 + (pTVar13->field0_0x0)._s_0.Z;
      fStack_1f4 = fVar29;
      local_1f8 = fVar26;
      local_1f0 = fVar21;
      pTVar13 = IntegratePosition(local_100,*(float *)((longlong)local_198 + uVar15 * 4),fVar19,
                                  (TVector<float> *)&local_1e8._s_0,
                                  (TVector<float> *)&local_1b8._s_0,
                                  (TVector<float> *)&local_1c8._s_0);
      fVar19 = local_1d8 + (pTVar13->field0_0x0)._s_0.X;
      fVar32 = fStack_1d4 + (pTVar13->field0_0x0)._s_0.Y;
      fVar18 = (float)local_1d0 + (pTVar13->field0_0x0)._s_0.Z;
      iVar4 = *(int *)(puVar5 + (longlong)(int)uVar14 + 0x110);
      fStack_1d4 = fVar32;
      local_1d8 = fVar19;
      local_1d0 = fVar18;
      if ((param_1->NumInstances <= uVar16) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("iInstance < NumInstances",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                              ,0x5f,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (-1 < iVar4) {
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar4,uVar16,0,fVar26);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar4,uVar16,1,fVar29);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar4,uVar16,2,fVar21);
      }
      iVar4 = *(int *)(puVar5 + (longlong)(int)uVar14 + 0x118);
      if ((param_1->NumInstances <= uVar16) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("iInstance < NumInstances",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                              ,0x5f,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (-1 < iVar4) {
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar4,uVar16,0,fVar19);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar4,uVar16,1,fVar32);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar4,uVar16,2,fVar18);
      }
      iVar4 = *(int *)(puVar5 + (longlong)(int)uVar14 + 0x114);
      fVar26 = (fVar26 - fVar19) * fVar1;
      fVar19 = (fVar29 - fVar32) * fVar1;
      fVar32 = (fVar21 - fVar18) * fVar1;
      if ((param_1->NumInstances <= uVar16) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("iInstance < NumInstances",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                              ,0x5f,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (-1 < iVar4) {
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar4,uVar16,0,fVar26);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar4,uVar16,1,fVar19);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar4,uVar16,2,fVar32);
      }
      iVar4 = *(int *)(puVar5 + (longlong)(int)uVar14 + 0x11c);
      if ((param_1->NumInstances <= uVar16) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("iInstance < NumInstances",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\Stateless\\NiagaraStatelessParticleSimContext.h"
                              ,0x5f,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (-1 < iVar4) {
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar4,uVar16,0,fVar26);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar4,uVar16,1,fVar19);
        NiagaraStateless::FParticleSimulationContext::WriteParticleVariableComponent
                  (param_1,iVar4,uVar16,2,fVar32);
      }
      uVar15 = (ulonglong)(uVar16 + 1);
    } while (uVar16 + 1 < param_1->NumInstances);
  }
  return;
}

// SetupBindings @ 1494685b0

void __cdecl
NiagaraVolumeRendererPropertiesLocal::SetupBindings(UNiagaraVolumeRendererProperties *param_1)

{
  FName FVar1;
  undefined8 uVar2;
  FNiagaraTypeDefinition *pFVar3;
  FNiagaraVariableAttributeBinding *pFVar4;
  FNiagaraVariable *pFVar5;
  FNiagaraVariable *pFVar6;
  FNiagaraVariable local_48;
  undefined1 local_28 [32];
  
  if (((param_1->PositionBinding).DataSetName != (FName)0x0) &&
     (pFVar3 = FNiagaraTypeDefinitionHandle::Resolve
                         (&(param_1->PositionBinding).ParamMapVariable.TypeDefHandle),
     (pFVar3->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0)) {
    return;
  }
  pFVar4 = FNiagaraConstants::GetAttributeDefaultBinding
                     ((FNiagaraVariableAttributeBinding *)local_28,
                      (FNiagaraVariableBase *)&INiagaraModule::Particles_Position);
  FVar1 = (pFVar4->ParamMapVariable).Name;
  (param_1->PositionBinding).RootName = pFVar4->RootName;
  (param_1->PositionBinding).ParamMapVariable.Name = FVar1;
  uVar2 = *(undefined8 *)&(pFVar4->DataSetName).Number;
  *(undefined8 *)&(param_1->PositionBinding).ParamMapVariable.TypeDefHandle =
       *(undefined8 *)&(pFVar4->ParamMapVariable).TypeDefHandle;
  *(undefined8 *)&(param_1->PositionBinding).DataSetName.Number = uVar2;
  pFVar5 = GetVolumeRotationVariable((FNiagaraVariable *)local_28);
  pFVar6 = GetVolumeRotationVariable(&local_48);
  FNiagaraVariableAttributeBinding::Setup
            (&param_1->RotationBinding,(FNiagaraVariableBase *)pFVar6,pFVar5,Particles);
  if (local_48.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.VarData.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_28._16_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._16_8_);
  }
  pFVar5 = GetVolumeScaleVariable(&local_48);
  pFVar6 = GetVolumeScaleVariable((FNiagaraVariable *)local_28);
  FNiagaraVariableAttributeBinding::Setup
            (&param_1->ScaleBinding,(FNiagaraVariableBase *)pFVar6,pFVar5,Particles);
  if ((FScriptContainerElement *)local_28._16_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._16_8_);
  }
  if (local_48.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.VarData.AllocatorInstance.Data);
  }
  pFVar4 = FNiagaraConstants::GetAttributeDefaultBinding
                     ((FNiagaraVariableAttributeBinding *)local_28,
                      (FNiagaraVariableBase *)&INiagaraModule::Particles_VisibilityTag);
  FVar1 = (pFVar4->ParamMapVariable).Name;
  (param_1->RendererVisibilityTagBinding).RootName = pFVar4->RootName;
  (param_1->RendererVisibilityTagBinding).ParamMapVariable.Name = FVar1;
  uVar2 = *(undefined8 *)&(pFVar4->DataSetName).Number;
  *(undefined8 *)&(param_1->RendererVisibilityTagBinding).ParamMapVariable.TypeDefHandle =
       *(undefined8 *)&(pFVar4->ParamMapVariable).TypeDefHandle;
  *(undefined8 *)&(param_1->RendererVisibilityTagBinding).DataSetName.Number = uVar2;
  pFVar5 = GetVolumeResolutionMaxAxisVariable(&local_48);
  pFVar6 = GetVolumeResolutionMaxAxisVariable((FNiagaraVariable *)local_28);
  FNiagaraVariableAttributeBinding::Setup
            (&param_1->VolumeResolutionMaxAxisBinding,(FNiagaraVariableBase *)pFVar6,pFVar5,
             Particles);
  if ((FScriptContainerElement *)local_28._16_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._16_8_);
  }
  if (local_48.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.VarData.AllocatorInstance.Data);
  }
  pFVar5 = GetVolumeWorldSpaceSizeVariable(&local_48);
  pFVar6 = GetVolumeWorldSpaceSizeVariable((FNiagaraVariable *)local_28);
  FNiagaraVariableAttributeBinding::Setup
            (&param_1->VolumeWorldSpaceSizeBinding,(FNiagaraVariableBase *)pFVar6,pFVar5,Particles);
  if ((FScriptContainerElement *)local_28._16_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._16_8_);
  }
  if (local_48.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.VarData.AllocatorInstance.Data);
  }
  return;
}

// ShapeLocation_GetLocation @ 149468770

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

TVector<float> * __cdecl
NSMShapeLocationPrivate::ShapeLocation_GetLocation
          (TVector<float> *__return_storage_ptr__,FParticleSimulationContext *param_1,
          FShapeLocationModule_ShaderParameters *param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  TVector<float> *pTVar8;
  int iVar9;
  float fVar10;
  float extraout_XMM0_Da;
  float fVar11;
  float extraout_XMM0_Db;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_res18;
  float fStackX_1c;
  TVector4<float>_u_0 local_d8;
  TQuat<float> local_c8 [11];
  
  uVar5 = (param_2->ShapeLocation_Mode).field0_0x0._s_0.X;
  if (uVar5 == 0) {
    local_c8[0]._0_8_ = *(undefined8 *)&(param_2->ShapeLocation_Parameters2).field0_0x0;
    local_c8[0]._8_8_ =
         *(undefined8 *)((longlong)&(param_2->ShapeLocation_Parameters2).field0_0x0 + 8);
    uVar5 = (param_2->ShapeLocation_Mode).field0_0x0._s_0.Y;
    fVar14 = (param_2->ShapeLocation_Parameters0).field0_0x0._s_0.X;
    fVar16 = (param_2->ShapeLocation_Parameters0).field0_0x0._s_0.Y;
    fVar18 = (param_2->ShapeLocation_Parameters0).field0_0x0._s_0.Z;
    pTVar8 = NiagaraStateless::FParticleSimulationContext::RandomFloat3
                       (param_1,(TVector<float> *)&local_d8._s_0,param_3,0);
    fVar12 = __real_3f000000;
    fVar17 = (pTVar8->field0_0x0)._s_0.Z - __real_3f000000;
    fVar19 = (pTVar8->field0_0x0)._s_0.Y - __real_3f000000;
    fVar20 = (pTVar8->field0_0x0)._s_0.X - __real_3f000000;
    if (uVar5 == 1) {
      uVar5 = (param_2->ShapeLocation_Mode).field0_0x0._s_0.Z;
      fVar14 = fVar17 * (param_2->ShapeLocation_Parameters1).field0_0x0._s_0.X + fVar14;
      fVar16 = fVar17 * (param_2->ShapeLocation_Parameters1).field0_0x0._s_0.Y + fVar16;
      fVar18 = fVar17 * (param_2->ShapeLocation_Parameters1).field0_0x0._s_0.Z + fVar18;
      uVar7 = NiagaraStateless::FParticleSimulationContext::RandomUInt(param_1,param_3,1);
      uVar6 = (ulonglong)uVar7 % (ulonglong)uVar5;
      local_d8._s_0.X =
           fVar14 * FaceDirB[uVar6].field0_0x0._s_0.X * fVar19 +
           fVar14 * FaceDirA[uVar6].field0_0x0._s_0.X * fVar20 +
           fVar14 * FaceDirC[uVar6].field0_0x0._s_0.X * fVar12;
      local_d8._s_0.Y =
           fVar16 * FaceDirB[uVar6].field0_0x0._s_0.Y * fVar19 +
           fVar16 * FaceDirA[uVar6].field0_0x0._s_0.Y * fVar20 +
           fVar16 * FaceDirC[uVar6].field0_0x0._s_0.Y * fVar12;
      local_d8._s_0.Z =
           fVar18 * FaceDirB[uVar6].field0_0x0._s_0.Z * fVar19 +
           fVar18 * FaceDirA[uVar6].field0_0x0._s_0.Z * fVar20 +
           fVar18 * FaceDirC[uVar6].field0_0x0._s_0.Z * fVar12;
    }
    else {
      local_d8._s_0.X = fVar20 * fVar14;
      local_d8._s_0.Y = fVar19 * fVar16;
      local_d8._s_0.Z = fVar17 * fVar18;
    }
    UE::Math::TQuat<float>::RotateVector
              (local_c8,__return_storage_ptr__,(TVector<float> *)&local_d8._s_0);
    return __return_storage_ptr__;
  }
  fVar14 = (param_2->ShapeLocation_Parameters2).field0_0x0._s_0.Y;
  if (uVar5 != 1) {
    if (uVar5 == 2) {
      fVar16 = (param_2->ShapeLocation_Parameters1).field0_0x0._s_0.Z;
      fVar18 = (param_2->ShapeLocation_Parameters0).field0_0x0._s_0.X;
      fVar12 = (param_2->ShapeLocation_Parameters0).field0_0x0._s_0.Y;
      fVar17 = (param_2->ShapeLocation_Parameters1).field0_0x0._s_0.X;
      fVar19 = (param_2->ShapeLocation_Parameters1).field0_0x0._s_0.Y;
      fVar20 = (param_2->ShapeLocation_Parameters2).field0_0x0._s_0.X;
      fVar1 = (param_2->ShapeLocation_Parameters2).field0_0x0._s_0.Z;
      fVar10 = NiagaraStateless::FParticleSimulationContext::RandomFloat(param_1,param_3,0);
      fVar12 = fVar10 * fVar18 + fVar12;
      NiagaraStateless::FParticleSimulationContext::RandomFloat(param_1,param_3,1);
      __libm_sse2_sincosf_();
      (__return_storage_ptr__->field0_0x0)._s_0.X =
           (extraout_XMM0_Db * fVar17 + fVar20 * extraout_XMM0_Da) * fVar12;
      (__return_storage_ptr__->field0_0x0)._s_0.Y =
           (fVar19 * extraout_XMM0_Db + fVar14 * extraout_XMM0_Da) * fVar12;
      (__return_storage_ptr__->field0_0x0)._s_0.Z =
           (extraout_XMM0_Db * fVar16 + extraout_XMM0_Da * fVar1) * fVar12;
      return __return_storage_ptr__;
    }
    fVar16 = (param_2->ShapeLocation_Parameters0).field0_0x0._s_0.Z;
    fVar18 = (param_2->ShapeLocation_Parameters0).field0_0x0._s_0.W;
    fVar12 = (param_2->ShapeLocation_Parameters1).field0_0x0._s_0.W;
    fVar17 = (param_2->ShapeLocation_Parameters0).field0_0x0._s_0.X;
    fVar19 = (param_2->ShapeLocation_Parameters0).field0_0x0._s_0.Y;
    fVar20 = (param_2->ShapeLocation_Parameters1).field0_0x0._s_0.X;
    fVar1 = (param_2->ShapeLocation_Parameters1).field0_0x0._s_0.Y;
    fVar10 = (param_2->ShapeLocation_Parameters1).field0_0x0._s_0.Z;
    fVar2 = (param_2->ShapeLocation_Parameters2).field0_0x0._s_0.X;
    fVar3 = (param_2->ShapeLocation_Parameters2).field0_0x0._s_0.Z;
    NiagaraStateless::FParticleSimulationContext::RandomUnitFloat3
              (param_1,(TVector<float> *)&local_d8._s_0,param_3,0);
    fVar11 = NiagaraStateless::FParticleSimulationContext::RandomFloat(param_1,param_3,1);
    fVar12 = fVar11 * fVar18 + fVar12;
    fVar11 = fVar12 * local_d8._s_0.Y;
    fVar18 = fVar12 * local_d8._s_0.X;
    fVar12 = fVar12 * local_d8._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.X = fVar11 * fVar20 + fVar18 * fVar17 + fVar12 * fVar2
    ;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar11 * fVar10 + fVar18 * fVar16 + fVar12 * fVar3
    ;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar11 * fVar1 + fVar18 * fVar19 + fVar12 * fVar14
    ;
    return __return_storage_ptr__;
  }
  fVar16 = (param_2->ShapeLocation_Parameters0).field0_0x0._s_0.Z;
  fVar18 = (param_2->ShapeLocation_Parameters0).field0_0x0._s_0.Y;
  fVar12 = (param_2->ShapeLocation_Parameters0).field0_0x0._s_0.W;
  fVar17 = (param_2->ShapeLocation_Parameters1).field0_0x0._s_0.W;
  fVar19 = (param_2->ShapeLocation_Parameters2).field0_0x0._s_0.W;
  fVar20 = (param_2->ShapeLocation_Parameters0).field0_0x0._s_0.X;
  fVar1 = (param_2->ShapeLocation_Parameters2).field0_0x0._s_0.X;
  fVar10 = (param_2->ShapeLocation_Parameters2).field0_0x0._s_0.Z;
  uVar5 = (param_2->ShapeLocation_Mode).field0_0x0._s_0.Y;
  fVar2 = (param_2->ShapeLocation_Parameters1).field0_0x0._s_0.X;
  fVar3 = (param_2->ShapeLocation_Parameters1).field0_0x0._s_0.Y;
  fVar11 = (param_2->ShapeLocation_Parameters1).field0_0x0._s_0.Z;
  NiagaraStateless::FParticleSimulationContext::RandomFloat4
            (param_1,(TVector4<float> *)&local_d8._s_0,param_3,0);
  fVar15 = fVar19 * local_d8._s_0.Z;
  fVar13 = fVar12 * local_d8._s_0.W + fVar17;
  if ((uVar5 & 1) != 0) {
    uVar5 = (param_2->ShapeLocation_Mode).field0_0x0._s_0.Y;
    fVar15 = *(float *)((longlong)&(param_2->ShapeLocation_Mode).field0_0x0 + 8);
    fVar4 = *(float *)((longlong)&(param_2->ShapeLocation_Mode).field0_0x0 + 0xc);
    uVar7 = NiagaraStateless::FParticleSimulationContext::RandomUInt(param_1,param_3,1);
    iVar9 = 2;
    if ((uVar5 & 2) != 0) {
      iVar9 = 0;
    }
    uVar5 = (uVar7 & 3) + iVar9;
    if (uVar5 == 0) {
      fVar13 = (fVar17 - fVar4) - fVar15 * local_d8._s_0.W;
    }
    else if (uVar5 == 1) {
      fVar13 = fVar15 * local_d8._s_0.W + fVar4 + fVar17 + fVar12;
    }
    else if (1 < uVar5) {
      fVar15 = fVar15 * local_d8._s_0.Z + fVar4 + fVar19;
      goto LAB_149468a81;
    }
    fVar15 = (fVar19 + fVar4 + fVar15) * local_d8._s_0.Z;
  }
LAB_149468a81:
  fVar17 = local_d8._s_0.X - __real_3f000000;
  fVar19 = local_d8._s_0.Y - __real_3f000000;
  local_res18 = 1.0;
  fStackX_1c = 0.0;
  fVar12 = fVar19 * fVar19 + fVar17 * fVar17;
  if (__real_38d1b717 <= fVar12) {
    local_res18 = __real_3f800000 / SQRT(fVar12);
    fStackX_1c = local_res18 * fVar19;
    local_res18 = local_res18 * fVar17;
  }
  fStackX_1c = fStackX_1c * fVar15;
  local_res18 = local_res18 * fVar15;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       fStackX_1c * fVar2 + local_res18 * fVar20 + fVar1 * fVar13;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       fStackX_1c * fVar3 + local_res18 * fVar18 + fVar14 * fVar13;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       fStackX_1c * fVar11 + local_res18 * fVar16 + fVar10 * fVar13;
  return __return_storage_ptr__;
}

// UpdateSettings @ 14946e450

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl NiagaraStatelessCommon::UpdateSettings(void)

{
  code *pcVar1;
  bool bVar2;
  EInternalObjectFlags EVar3;
  uint uVar4;
  UClass *pUVar5;
  longlong lVar6;
  TObjectIterator<UNiagaraSystem> local_28;
  
  if (GUpdatedFeatureMask.bIsSet) {
    if (GUpdatedFeatureMask.TypedValue != GGlobals.FeatureMask) {
      GGlobals.FeatureMask = GUpdatedFeatureMask.TypedValue;
      local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.ObjectArray.ArrayNum = 0;
      local_28.ObjectArray.ArrayMax = 0;
      local_28.Index = 0xffffffff;
      EVar3 = UE::GetAsyncLoadingInternalFlagsExclusion();
      pUVar5 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
      GetObjectsOfClass(pUVar5,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                        EVar3 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
      while( true ) {
        TObjectIterator<UNiagaraSystem>::Advance(&local_28);
        lVar6 = (longlong)local_28.Index;
        if (local_28.Index < 0) break;
        if (local_28.ObjectArray.ArrayNum <= local_28.Index) break;
        uVar4 = 0;
        if (local_28.Index < local_28.ObjectArray.ArrayNum) {
          uVar4 = (uint)~local_28.Index >> 0x1f;
        }
        if (uVar4 == 0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        if (*(UNiagaraSystem **)(local_28.ObjectArray.AllocatorInstance.Data + lVar6 * 8) !=
            (UNiagaraSystem *)0x0) {
          UNiagaraSystem::UpdateScalability
                    (*(UNiagaraSystem **)(local_28.ObjectArray.AllocatorInstance.Data + lVar6 * 8));
        }
      }
      if (local_28.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
      }
    }
    if (GUpdatedFeatureMask.bIsSet != false) {
      GUpdatedFeatureMask.bIsSet = false;
    }
  }
  return;
}

// Z_Construct_UClass_UNiagaraStatelessEmitter_NoRegister @ 14946eb70

UClass * __cdecl Z_Construct_UClass_UNiagaraStatelessEmitter_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessEmitter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessEmitter",
               &Z_Registration_Info_UClass_UNiagaraStatelessEmitter.InnerSingleton,
               UNiagaraStatelessEmitter::StaticRegisterNativesUNiagaraStatelessEmitter,0x200,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraStatelessEmitter>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessEmitter>,local_res8,
               UNiagaraEmitterBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessEmitter.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraStatelessModule_AccelerationForce_NoRegister @ 14946ec30

UClass * __cdecl Z_Construct_UClass_UNiagaraStatelessModule_AccelerationForce_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_AccelerationForce.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_AccelerationForce",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_AccelerationForce.InnerSingleton,
               UNiagaraStatelessModule_AccelerationForce::
               StaticRegisterNativesUNiagaraStatelessModule_AccelerationForce,0x78,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraStatelessModule_AccelerationForce>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_AccelerationForce>,local_res8,
               UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_AccelerationForce.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraStatelessModule_AddVelocity_NoRegister @ 14946ecf0

UClass * __cdecl Z_Construct_UClass_UNiagaraStatelessModule_AddVelocity_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_AddVelocity.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_AddVelocity",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_AddVelocity.InnerSingleton,
               UNiagaraStatelessModule_AddVelocity::
               StaticRegisterNativesUNiagaraStatelessModule_AddVelocity,0x140,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraStatelessModule_AddVelocity>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_AddVelocity>,local_res8,
               UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_AddVelocity.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraStatelessModule_CalculateAccurateVelocity_NoRegister @ 14946edb0

UClass * __cdecl
Z_Construct_UClass_UNiagaraStatelessModule_CalculateAccurateVelocity_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_CalculateAccurateVelocity.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_CalculateAccurateVelocity",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_CalculateAccurateVelocity.
                InnerSingleton,
               UNiagaraStatelessModule_CalculateAccurateVelocity::
               StaticRegisterNativesUNiagaraStatelessModule_CalculateAccurateVelocity,0x30,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraStatelessModule_CalculateAccurateVelocity>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_CalculateAccurateVelocity>,
               local_res8,UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_CalculateAccurateVelocity.InnerSingleton
  ;
}

// Z_Construct_UClass_UNiagaraStatelessModule_CameraOffset_NoRegister @ 14946ee70

UClass * __cdecl Z_Construct_UClass_UNiagaraStatelessModule_CameraOffset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_CameraOffset.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_CameraOffset",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_CameraOffset.InnerSingleton,
               UNiagaraStatelessModule_CameraOffset::
               StaticRegisterNativesUNiagaraStatelessModule_CameraOffset,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraStatelessModule_CameraOffset>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_CameraOffset>,local_res8,
               UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_CameraOffset.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraStatelessModule_CurlNoiseForce_NoRegister @ 14946ef30

UClass * __cdecl Z_Construct_UClass_UNiagaraStatelessModule_CurlNoiseForce_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_CurlNoiseForce.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_CurlNoiseForce",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_CurlNoiseForce.InnerSingleton,
               UNiagaraStatelessModule_CurlNoiseForce::
               StaticRegisterNativesUNiagaraStatelessModule_CurlNoiseForce,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraStatelessModule_CurlNoiseForce>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_CurlNoiseForce>,local_res8,
               UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_CurlNoiseForce.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraStatelessModule_DecalAttributes_NoRegister @ 14946eff0

UClass * __cdecl Z_Construct_UClass_UNiagaraStatelessModule_DecalAttributes_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_DecalAttributes.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_DecalAttributes",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_DecalAttributes.InnerSingleton,
               UNiagaraStatelessModule_DecalAttributes::
               StaticRegisterNativesUNiagaraStatelessModule_DecalAttributes,0x100,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraStatelessModule_DecalAttributes>
               ,InternalVTableHelperCtorCaller<UNiagaraStatelessModule_DecalAttributes>,local_res8,
               UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_DecalAttributes.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraStatelessModule_Drag_NoRegister @ 14946f0b0

UClass * __cdecl Z_Construct_UClass_UNiagaraStatelessModule_Drag_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_Drag.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_Drag",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_Drag.InnerSingleton,
               UNiagaraStatelessModule_Drag::StaticRegisterNativesUNiagaraStatelessModule_Drag,0x60,
               8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraStatelessModule_Drag>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_Drag>,local_res8,
               UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_Drag.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_NoRegister @ 14946f170

UClass * __cdecl
Z_Construct_UClass_UNiagaraStatelessModule_DynamicMaterialParameters_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_DynamicMaterialParameters.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_DynamicMaterialParameters",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_DynamicMaterialParameters.
                InnerSingleton,
               UNiagaraStatelessModule_DynamicMaterialParameters::
               StaticRegisterNativesUNiagaraStatelessModule_DynamicMaterialParameters,0x458,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraStatelessModule_DynamicMaterialParameters>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_DynamicMaterialParameters>,
               local_res8,UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_DynamicMaterialParameters.InnerSingleton
  ;
}

// Z_Construct_UClass_UNiagaraStatelessModule_GravityForce_NoRegister @ 14946f230

UClass * __cdecl Z_Construct_UClass_UNiagaraStatelessModule_GravityForce_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_GravityForce.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_GravityForce",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_GravityForce.InnerSingleton,
               UNiagaraStatelessModule_GravityForce::
               StaticRegisterNativesUNiagaraStatelessModule_GravityForce,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraStatelessModule_GravityForce>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_GravityForce>,local_res8,
               UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_GravityForce.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraStatelessModule_InitialMeshOrientation_NoRegister @ 14946f2f0

UClass * __cdecl Z_Construct_UClass_UNiagaraStatelessModule_InitialMeshOrientation_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_InitialMeshOrientation.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_InitialMeshOrientation",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_InitialMeshOrientation.
                InnerSingleton,
               UNiagaraStatelessModule_InitialMeshOrientation::
               StaticRegisterNativesUNiagaraStatelessModule_InitialMeshOrientation,0xf8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraStatelessModule_InitialMeshOrientation>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_InitialMeshOrientation>,
               local_res8,UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_InitialMeshOrientation.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraStatelessModule_InitializeParticle_NoRegister @ 14946f3b0

UClass * __cdecl Z_Construct_UClass_UNiagaraStatelessModule_InitializeParticle_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_InitializeParticle.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_InitializeParticle",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_InitializeParticle.InnerSingleton
               ,UNiagaraStatelessModule_InitializeParticle::
                StaticRegisterNativesUNiagaraStatelessModule_InitializeParticle,0x1f0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraStatelessModule_InitializeParticle>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_InitializeParticle>,local_res8
               ,UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_InitializeParticle.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraStatelessModule_LightAttributes_NoRegister @ 14946f470

UClass * __cdecl Z_Construct_UClass_UNiagaraStatelessModule_LightAttributes_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_LightAttributes.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_LightAttributes",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_LightAttributes.InnerSingleton,
               UNiagaraStatelessModule_LightAttributes::
               StaticRegisterNativesUNiagaraStatelessModule_LightAttributes,0x178,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraStatelessModule_LightAttributes>
               ,InternalVTableHelperCtorCaller<UNiagaraStatelessModule_LightAttributes>,local_res8,
               UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_LightAttributes.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraStatelessModule_MeshIndex_NoRegister @ 14946f530

UClass * __cdecl Z_Construct_UClass_UNiagaraStatelessModule_MeshIndex_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_MeshIndex.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_MeshIndex",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_MeshIndex.InnerSingleton,
               UNiagaraStatelessModule_MeshIndex::
               StaticRegisterNativesUNiagaraStatelessModule_MeshIndex,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraStatelessModule_MeshIndex>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_MeshIndex>,local_res8,
               UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_MeshIndex.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraStatelessModule_MeshRotationRate_NoRegister @ 14946f5f0

UClass * __cdecl Z_Construct_UClass_UNiagaraStatelessModule_MeshRotationRate_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_MeshRotationRate.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_MeshRotationRate",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_MeshRotationRate.InnerSingleton,
               UNiagaraStatelessModule_MeshRotationRate::
               StaticRegisterNativesUNiagaraStatelessModule_MeshRotationRate,0xb8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraStatelessModule_MeshRotationRate>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_MeshRotationRate>,local_res8,
               UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_MeshRotationRate.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraStatelessModule_RotateAroundPoint_NoRegister @ 14946f6b0

UClass * __cdecl Z_Construct_UClass_UNiagaraStatelessModule_RotateAroundPoint_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_RotateAroundPoint.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_RotateAroundPoint",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_RotateAroundPoint.InnerSingleton,
               UNiagaraStatelessModule_RotateAroundPoint::
               StaticRegisterNativesUNiagaraStatelessModule_RotateAroundPoint,0x150,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraStatelessModule_RotateAroundPoint>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_RotateAroundPoint>,local_res8,
               UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_RotateAroundPoint.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraStatelessModule_ScaleColor_NoRegister @ 14946f770

UClass * __cdecl Z_Construct_UClass_UNiagaraStatelessModule_ScaleColor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleColor.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_ScaleColor",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleColor.InnerSingleton,
               UNiagaraStatelessModule_ScaleColor::
               StaticRegisterNativesUNiagaraStatelessModule_ScaleColor,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraStatelessModule_ScaleColor>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_ScaleColor>,local_res8,
               UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleColor.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed_NoRegister @ 14946f830

UClass * __cdecl Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_ScaleMeshSizeBySpeed",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed.
                InnerSingleton,
               UNiagaraStatelessModule_ScaleMeshSizeBySpeed::
               StaticRegisterNativesUNiagaraStatelessModule_ScaleMeshSizeBySpeed,0x128,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraStatelessModule_ScaleMeshSizeBySpeed>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_ScaleMeshSizeBySpeed>,
               local_res8,UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleMeshSizeBySpeed.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSize_NoRegister @ 14946f8f0

UClass * __cdecl Z_Construct_UClass_UNiagaraStatelessModule_ScaleMeshSize_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleMeshSize.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_ScaleMeshSize",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleMeshSize.InnerSingleton,
               UNiagaraStatelessModule_ScaleMeshSize::
               StaticRegisterNativesUNiagaraStatelessModule_ScaleMeshSize,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraStatelessModule_ScaleMeshSize>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_ScaleMeshSize>,local_res8,
               UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleMeshSize.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraStatelessModule_ScaleRibbonWidth_NoRegister @ 14946f9b0

UClass * __cdecl Z_Construct_UClass_UNiagaraStatelessModule_ScaleRibbonWidth_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleRibbonWidth.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_ScaleRibbonWidth",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleRibbonWidth.InnerSingleton,
               UNiagaraStatelessModule_ScaleRibbonWidth::
               StaticRegisterNativesUNiagaraStatelessModule_ScaleRibbonWidth,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraStatelessModule_ScaleRibbonWidth>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_ScaleRibbonWidth>,local_res8,
               UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleRibbonWidth.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed_NoRegister @ 14946fa70

UClass * __cdecl Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_ScaleSpriteSizeBySpeed",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed.
                InnerSingleton,
               UNiagaraStatelessModule_ScaleSpriteSizeBySpeed::
               StaticRegisterNativesUNiagaraStatelessModule_ScaleSpriteSizeBySpeed,0x118,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraStatelessModule_ScaleSpriteSizeBySpeed>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_ScaleSpriteSizeBySpeed>,
               local_res8,UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleSpriteSizeBySpeed.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSize_NoRegister @ 14946fb30

UClass * __cdecl Z_Construct_UClass_UNiagaraStatelessModule_ScaleSpriteSize_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleSpriteSize.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_ScaleSpriteSize",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleSpriteSize.InnerSingleton,
               UNiagaraStatelessModule_ScaleSpriteSize::
               StaticRegisterNativesUNiagaraStatelessModule_ScaleSpriteSize,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraStatelessModule_ScaleSpriteSize>
               ,InternalVTableHelperCtorCaller<UNiagaraStatelessModule_ScaleSpriteSize>,local_res8,
               UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_ScaleSpriteSize.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraStatelessModule_ShapeLocation_NoRegister @ 14946fbf0

UClass * __cdecl Z_Construct_UClass_UNiagaraStatelessModule_ShapeLocation_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_ShapeLocation.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_ShapeLocation",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_ShapeLocation.InnerSingleton,
               UNiagaraStatelessModule_ShapeLocation::
               StaticRegisterNativesUNiagaraStatelessModule_ShapeLocation,0x330,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraStatelessModule_ShapeLocation>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_ShapeLocation>,local_res8,
               UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_ShapeLocation.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraStatelessModule_SolveVelocitiesAndForces_NoRegister @ 14946fcb0

UClass * __cdecl
Z_Construct_UClass_UNiagaraStatelessModule_SolveVelocitiesAndForces_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_SolveVelocitiesAndForces.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_SolveVelocitiesAndForces",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_SolveVelocitiesAndForces.
                InnerSingleton,
               UNiagaraStatelessModule_SolveVelocitiesAndForces::
               StaticRegisterNativesUNiagaraStatelessModule_SolveVelocitiesAndForces,0x30,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraStatelessModule_SolveVelocitiesAndForces>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_SolveVelocitiesAndForces>,
               local_res8,UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_SolveVelocitiesAndForces.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraStatelessModule_SpriteFacingAndAlignment_NoRegister @ 14946fd70

UClass * __cdecl
Z_Construct_UClass_UNiagaraStatelessModule_SpriteFacingAndAlignment_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_SpriteFacingAndAlignment.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_SpriteFacingAndAlignment",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_SpriteFacingAndAlignment.
                InnerSingleton,
               UNiagaraStatelessModule_SpriteFacingAndAlignment::
               StaticRegisterNativesUNiagaraStatelessModule_SpriteFacingAndAlignment,0xb8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraStatelessModule_SpriteFacingAndAlignment>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_SpriteFacingAndAlignment>,
               local_res8,UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_SpriteFacingAndAlignment.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraStatelessModule_SpriteRotationRate_NoRegister @ 14946fe30

UClass * __cdecl Z_Construct_UClass_UNiagaraStatelessModule_SpriteRotationRate_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_SpriteRotationRate.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_SpriteRotationRate",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_SpriteRotationRate.InnerSingleton
               ,UNiagaraStatelessModule_SpriteRotationRate::
                StaticRegisterNativesUNiagaraStatelessModule_SpriteRotationRate,0xa8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraStatelessModule_SpriteRotationRate>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_SpriteRotationRate>,local_res8
               ,UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_SpriteRotationRate.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraStatelessModule_SubUVAnimation_NoRegister @ 14946fef0

UClass * __cdecl Z_Construct_UClass_UNiagaraStatelessModule_SubUVAnimation_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_SubUVAnimation.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_SubUVAnimation",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_SubUVAnimation.InnerSingleton,
               UNiagaraStatelessModule_SubUVAnimation::
               StaticRegisterNativesUNiagaraStatelessModule_SubUVAnimation,0x78,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraStatelessModule_SubUVAnimation>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_SubUVAnimation>,local_res8,
               UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_SubUVAnimation.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraValidationRule_NoRegister @ 14946ffb0

UClass * __cdecl Z_Construct_UClass_UNiagaraValidationRule_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraValidationRule.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraValidationRule",
               &Z_Registration_Info_UClass_UNiagaraValidationRule.InnerSingleton,
               UNiagaraValidationRule::StaticRegisterNativesUNiagaraValidationRule,0x30,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Editor",
               InternalConstructor<UNiagaraValidationRule>,
               InternalVTableHelperCtorCaller<UNiagaraValidationRule>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraValidationRule.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraVolumeRendererProperties_NoRegister @ 149470060

UClass * __cdecl Z_Construct_UClass_UNiagaraVolumeRendererProperties_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraVolumeRendererProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraVolumeRendererProperties",
               &Z_Registration_Info_UClass_UNiagaraVolumeRendererProperties.InnerSingleton,
               UNiagaraVolumeRendererProperties::
               StaticRegisterNativesUNiagaraVolumeRendererProperties,0x208,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraVolumeRendererProperties>,
               InternalVTableHelperCtorCaller<UNiagaraVolumeRendererProperties>,local_res8,
               UNiagaraRendererProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraVolumeRendererProperties.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraDistributionAddressMode @ 149470120

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraDistributionAddressMode(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraDistributionAddressMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraDistributionAddressMode.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraDistributionAddressMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraDistributionAddressMode.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraDistributionInitialLookupValueMode @ 149470160

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraDistributionInitialLookupValueMode(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraDistributionInitialLookupValueMode.InnerSingleton ==
      (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraDistributionInitialLookupValueMode.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraDistributionInitialLookupValueMode_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraDistributionInitialLookupValueMode.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraDistributionInterpolationMode @ 1494701a0

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraDistributionInterpolationMode(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraDistributionInterpolationMode.InnerSingleton == (UEnum *)0x0
     ) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraDistributionInterpolationMode.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraDistributionInterpolationMode_Statics::EnumParams)
    ;
  }
  return Z_Registration_Info_UEnum_ENiagaraDistributionInterpolationMode.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraDistributionLookupValueMode @ 1494701e0

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraDistributionLookupValueMode(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraDistributionLookupValueMode.InnerSingleton == (UEnum *)0x0)
  {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraDistributionLookupValueMode.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraDistributionLookupValueMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraDistributionLookupValueMode.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraDistributionTimeRangeMode @ 149470220

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraDistributionTimeRangeMode(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraDistributionTimeRangeMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraDistributionTimeRangeMode.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraDistributionTimeRangeMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraDistributionTimeRangeMode.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraExecutionState @ 149470260

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraExecutionState(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraExecutionState.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraExecutionState.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraExecutionState_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraExecutionState.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraExecutionStateManagement @ 1494702a0

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraExecutionStateManagement(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraExecutionStateManagement.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraExecutionStateManagement.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraExecutionStateManagement_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraExecutionStateManagement.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraExecutionStateSource @ 1494702e0

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraExecutionStateSource(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraExecutionStateSource.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraExecutionStateSource.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraExecutionStateSource_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraExecutionStateSource.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraNumericOutputTypeSelectionMode @ 149470320

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraNumericOutputTypeSelectionMode(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraNumericOutputTypeSelectionMode.InnerSingleton ==
      (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraNumericOutputTypeSelectionMode.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraNumericOutputTypeSelectionMode_Statics::EnumParams
              );
  }
  return Z_Registration_Info_UEnum_ENiagaraNumericOutputTypeSelectionMode.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraOrientationAxis @ 149470360

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraOrientationAxis(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraOrientationAxis.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraOrientationAxis.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraOrientationAxis_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraOrientationAxis.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraPythonUpdateScriptReference @ 1494703a0

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraPythonUpdateScriptReference(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraPythonUpdateScriptReference.InnerSingleton == (UEnum *)0x0)
  {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraPythonUpdateScriptReference.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraPythonUpdateScriptReference_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraPythonUpdateScriptReference.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraStatelessFeatureMask @ 1494703e0

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraStatelessFeatureMask(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraStatelessFeatureMask.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraStatelessFeatureMask.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraStatelessFeatureMask_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraStatelessFeatureMask.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraValidationSeverity @ 149470420

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraValidationSeverity(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraValidationSeverity.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraValidationSeverity.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraValidationSeverity_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraValidationSeverity.InnerSingleton;
}

// Z_Construct_UScriptStruct_FNiagaraAssetVersion @ 149470460

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraAssetVersion(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraAssetVersion.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraAssetVersion.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraAssetVersion.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FNiagaraAssetVersion.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraBool @ 1494704e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraBool(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraBool.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraBool.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraBool_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraBool.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraBool.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraDistributionRangeColor @ 149470560

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraDistributionRangeColor(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraDistributionRangeColor.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraDistributionRangeColor.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraDistributionRangeColor_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraDistributionRangeColor.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraDistributionRangeColor.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraDouble @ 1494705e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraDouble(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraDouble.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraDouble.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraDouble_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraDouble.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraDouble.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraEmitterID @ 149470660

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraEmitterID(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraEmitterID.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraEmitterID.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraEmitterID_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraEmitterID.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraEmitterID.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraFloat @ 1494706e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraFloat(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraFloat.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraFloat.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraFloat_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraFloat.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraFloat.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraHalf @ 149470760

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraHalf(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraHalf.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraHalf.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraHalf_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraHalf.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraHalf.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraHalfVector2 @ 1494707e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraHalfVector2(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraHalfVector2.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraHalfVector2.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraHalfVector2_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraHalfVector2.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FNiagaraHalfVector2.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraHalfVector3 @ 149470860

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraHalfVector3(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraHalfVector3.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraHalfVector3.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraHalfVector3.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FNiagaraHalfVector3.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraHalfVector4 @ 1494708e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraHalfVector4(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraHalfVector4.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraHalfVector4.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraHalfVector4.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FNiagaraHalfVector4.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraID @ 149470960

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraID(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraID.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraID.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraID_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraID.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraID.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraInt32 @ 1494709e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraInt32(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraInt32.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraInt32.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraInt32_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraInt32.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraInt32.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraLwcStructConverter @ 149470a60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraLwcStructConverter(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraLwcStructConverter.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraLwcStructConverter.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraLwcStructConverter_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraLwcStructConverter.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraLwcStructConverter.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraMatrix @ 149470ae0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraMatrix(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraMatrix.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraMatrix.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraMatrix.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraMatrix.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraNumeric @ 149470b60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraNumeric(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraNumeric.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraNumeric.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraNumeric_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraNumeric.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraNumeric.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraParameterMap @ 149470be0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraParameterMap(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraParameterMap.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraParameterMap.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraParameterMap_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraParameterMap.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FNiagaraParameterMap.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraPosition @ 149470c60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraPosition(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraPosition.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraPosition.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraPosition_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraPosition.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraPosition.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraRandInfo @ 149470ce0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraRandInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraRandInfo.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraRandInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraRandInfo.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraRandInfo.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraSpawnInfo @ 149470d60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraSpawnInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraSpawnInfo.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraSpawnInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraSpawnInfo.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraSpawnInfo.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraStatelessExpressionColorAdd @ 149470de0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraStatelessExpressionColorAdd(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionColorAdd.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionColorAdd.InnerSingleton
               ,&Z_Construct_UScriptStruct_FNiagaraStatelessExpressionColorAdd_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionColorAdd.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionColorAdd.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraStatelessExpressionColorBinding @ 149470e60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraStatelessExpressionColorBinding(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionColorBinding.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionColorBinding.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraStatelessExpressionColorBinding_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionColorBinding.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionColorBinding.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraStatelessExpressionColorConstant @ 149470ee0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraStatelessExpressionColorConstant(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionColorConstant.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionColorConstant.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraStatelessExpressionColorConstant_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionColorConstant.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionColorConstant.InnerSingleton
    ;
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

// Z_Construct_UScriptStruct_FNiagaraStatelessExpressionColorDivide @ 149470f60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraStatelessExpressionColorDivide(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionColorDivide.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionColorDivide.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraStatelessExpressionColorDivide_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionColorDivide.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionColorDivide.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraStatelessExpressionColorMultiply @ 149470fe0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraStatelessExpressionColorMultiply(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionColorMultiply.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionColorMultiply.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraStatelessExpressionColorMultiply_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionColorMultiply.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionColorMultiply.InnerSingleton
    ;
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

// Z_Construct_UScriptStruct_FNiagaraStatelessExpressionColorSubtract @ 149471060

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraStatelessExpressionColorSubtract(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionColorSubtract.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionColorSubtract.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraStatelessExpressionColorSubtract_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionColorSubtract.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionColorSubtract.InnerSingleton
    ;
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

// Z_Construct_UScriptStruct_FNiagaraStatelessExpressionFloatAdd @ 1494710e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraStatelessExpressionFloatAdd(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionFloatAdd.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionFloatAdd.InnerSingleton
               ,&Z_Construct_UScriptStruct_FNiagaraStatelessExpressionFloatAdd_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionFloatAdd.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionFloatAdd.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraStatelessExpressionFloatBinding @ 149471160

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraStatelessExpressionFloatBinding(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionFloatBinding.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionFloatBinding.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraStatelessExpressionFloatBinding_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionFloatBinding.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionFloatBinding.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraStatelessExpressionFloatConstant @ 1494711e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraStatelessExpressionFloatConstant(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionFloatConstant.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionFloatConstant.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraStatelessExpressionFloatConstant_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionFloatConstant.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionFloatConstant.InnerSingleton
    ;
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

// Z_Construct_UScriptStruct_FNiagaraStatelessExpressionFloatDivide @ 149471260

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraStatelessExpressionFloatDivide(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionFloatDivide.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionFloatDivide.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraStatelessExpressionFloatDivide_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionFloatDivide.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionFloatDivide.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraStatelessExpressionFloatMultiply @ 1494712e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraStatelessExpressionFloatMultiply(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionFloatMultiply.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionFloatMultiply.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraStatelessExpressionFloatMultiply_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionFloatMultiply.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionFloatMultiply.InnerSingleton
    ;
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

// Z_Construct_UScriptStruct_FNiagaraStatelessExpressionFloatSubtract @ 149471360

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraStatelessExpressionFloatSubtract(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionFloatSubtract.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionFloatSubtract.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraStatelessExpressionFloatSubtract_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionFloatSubtract.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionFloatSubtract.InnerSingleton
    ;
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

// Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec2Add @ 1494713e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec2Add(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec2Add.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec2Add.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec2Add_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec2Add.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec2Add.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec2Binding @ 149471460

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec2Binding(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec2Binding.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec2Binding.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec2Binding_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec2Binding.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec2Binding.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec2Constant @ 1494714e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec2Constant(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec2Constant.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec2Constant.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec2Constant_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec2Constant.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec2Constant.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec2Divide @ 149471560

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec2Divide(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec2Divide.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec2Divide.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec2Divide_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec2Divide.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec2Divide.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec2Multiply @ 1494715e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec2Multiply(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec2Multiply.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec2Multiply.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec2Multiply_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec2Multiply.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec2Multiply.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec2Subtract @ 149471660

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec2Subtract(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec2Subtract.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec2Subtract.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec2Subtract_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec2Subtract.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec2Subtract.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec3Add @ 1494716e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec3Add(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec3Add.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec3Add.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec3Add_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec3Add.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec3Add.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec3Binding @ 149471760

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec3Binding(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec3Binding.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec3Binding.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec3Binding_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec3Binding.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec3Binding.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec3Constant @ 1494717e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec3Constant(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec3Constant.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec3Constant.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec3Constant_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec3Constant.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec3Constant.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec3Divide @ 149471860

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec3Divide(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec3Divide.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec3Divide.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec3Divide_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec3Divide.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec3Divide.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec3Multiply @ 1494718e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec3Multiply(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec3Multiply.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec3Multiply.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec3Multiply_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec3Multiply.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec3Multiply.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec3Subtract @ 149471960

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec3Subtract(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec3Subtract.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec3Subtract.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec3Subtract_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec3Subtract.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec3Subtract.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec4Add @ 1494719e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec4Add(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec4Add.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec4Add.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec4Add_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec4Add.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec4Add.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec4Binding @ 149471a60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec4Binding(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec4Binding.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec4Binding.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec4Binding_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec4Binding.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec4Binding.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec4Constant @ 149471ae0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec4Constant(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec4Constant.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec4Constant.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec4Constant_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec4Constant.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec4Constant.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec4Divide @ 149471b60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec4Divide(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec4Divide.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec4Divide.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec4Divide_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec4Divide.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec4Divide.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec4Multiply @ 149471be0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec4Multiply(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec4Multiply.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec4Multiply.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec4Multiply_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec4Multiply.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec4Multiply.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec4Subtract @ 149471c60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec4Subtract(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec4Subtract.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec4Subtract.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec4Subtract_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec4Subtract.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec4Subtract.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraTypeDefinition @ 149471ce0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraTypeDefinition(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraTypeDefinition.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraTypeDefinition.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraTypeDefinition.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraTypeDefinition.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo @ 149471d60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraTypeLayoutInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraTypeLayoutInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraTypeLayoutInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraTypeLayoutInfo.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore @ 149471de0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraUserRedirectionParameterStore.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraUserRedirectionParameterStore.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraUserRedirectionParameterStore.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraUserRedirectionParameterStore.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraVariableMetaData @ 149471e60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraVariableMetaData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraVariableMetaData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraVariableMetaData.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraVariableMetaData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraVariableMetaData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraVariant @ 149471ee0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraVariant(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraVariant.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraVariant.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraVariant_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraVariant.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraVariant.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraWildcard @ 149471f60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraWildcard(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraWildcard.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraWildcard.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraWildcard_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraWildcard.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraWildcard.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraWorldManagerTickFunction @ 149471fe0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraWorldManagerTickFunction(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraWorldManagerTickFunction.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraWorldManagerTickFunction.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraWorldManagerTickFunction_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraWorldManagerTickFunction.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraWorldManagerTickFunction.InnerSingleton;
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

// Z_Construct_UScriptStruct_FVersionedNiagaraEmitter @ 149472060

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FVersionedNiagaraEmitter(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FVersionedNiagaraEmitter.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FVersionedNiagaraEmitter.InnerSingleton,
               &Z_Construct_UScriptStruct_FVersionedNiagaraEmitter_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FVersionedNiagaraEmitter.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FVersionedNiagaraEmitter.InnerSingleton;
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

// ConvertedSWCStructSuffix'' @ 1504159b0

void __cdecl `dynamic_atexit_destructor_for_'FNiagaraTypeHelper::ConvertedSWCStructSuffix__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FNiagaraTypeHelper::ConvertedSWCStructSuffix.Data.AllocatorInstance.Data;
  if (FNiagaraTypeHelper::ConvertedSWCStructSuffix.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FNiagaraTypeHelper::ConvertedSWCStructSuffix.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
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

// RemapTable'' @ 1504159d0

void __cdecl `dynamic_atexit_destructor_for_'FNiagaraTypeHelper::RemapTable__(void)

{
  FNiagaraTypeHelper::RemapTable._72_4_ = 0;
  if (FNiagaraTypeHelper::RemapTable._64_8_ != 0) {
    FMemory::Free((void *)FNiagaraTypeHelper::RemapTable._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,FNiagaraTypeHelper::FRemapEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&FNiagaraTypeHelper::RemapTable);
  return;
}

// RemapTableLock'' @ 150415a10

void __cdecl `dynamic_atexit_destructor_for_'FNiagaraTypeHelper::RemapTableLock__(void)

{
  code *pcVar1;
  BOOLEAN BVar2;
  bool bVar3;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&FNiagaraTypeHelper::RemapTableLock);
  if (BVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000150415a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&FNiagaraTypeHelper::RemapTableLock);
    return;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// WorldManagers'' @ 150415a70

void __cdecl `dynamic_atexit_destructor_for_'FNiagaraWorldManager::WorldManagers__(void)

{
  FNiagaraWorldManager::WorldManagers._72_4_ = 0;
  if (FNiagaraWorldManager::WorldManagers._64_8_ != 0) {
    FMemory::Free((void *)FNiagaraWorldManager::WorldManagers._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UWorld_*,FNiagaraWorldManager_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UWorld_*,FNiagaraWorldManager_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UWorld_*,FNiagaraWorldManager_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&FNiagaraWorldManager::WorldManagers);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowCullProxies'' @ 150415ab0

void __cdecl _dynamic_atexit_destructor_for__CVarAllowCullProxies__(void)

{
  CVarAllowCullProxies._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAllowCullProxies);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowVisibilityCullingForDynamicBounds'' @ 150415ad0

void __cdecl _dynamic_atexit_destructor_for__CVarAllowVisibilityCullingForDynamicBounds__(void)

{
  CVarAllowVisibilityCullingForDynamicBounds._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAllowVisibilityCullingForDynamicBounds);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCPUThreshold'' @ 150415af0

void __cdecl
NiagaraStatelessComputeManagerPrivate::_dynamic_atexit_destructor_for__CVarCPUThreshold__(void)

{
  CVarCPUThreshold._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCPUThreshold);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCSVSplitTime'' @ 150415b10

void __cdecl _dynamic_atexit_destructor_for__CVarCSVSplitTime__(void)

{
  CVarCSVSplitTime._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCSVSplitTime);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableNiagaraDistanceCulling'' @ 150415b30

void __cdecl _dynamic_atexit_destructor_for__CVarEnableNiagaraDistanceCulling__(void)

{
  CVarEnableNiagaraDistanceCulling._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableNiagaraDistanceCulling);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableNiagaraGlobalBudgetCulling'' @ 150415b50

void __cdecl _dynamic_atexit_destructor_for__CVarEnableNiagaraGlobalBudgetCulling__(void)

{
  CVarEnableNiagaraGlobalBudgetCulling._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarEnableNiagaraGlobalBudgetCulling);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableNiagaraInstanceCountCulling'' @ 150415b70

void __cdecl _dynamic_atexit_destructor_for__CVarEnableNiagaraInstanceCountCulling__(void)

{
  CVarEnableNiagaraInstanceCountCulling._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarEnableNiagaraInstanceCountCulling);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableNiagaraVisCulling'' @ 150415b90

void __cdecl _dynamic_atexit_destructor_for__CVarEnableNiagaraVisCulling__(void)

{
  CVarEnableNiagaraVisCulling._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableNiagaraVisCulling);
  return;
}

// `dynamic_atexit_destructor_for_'CVarFeatureMask_ExecuteCPU'' @ 150415bb0

void __cdecl
NiagaraStatelessCommon::_dynamic_atexit_destructor_for__CVarFeatureMask_ExecuteCPU__(void)

{
  CVarFeatureMask_ExecuteCPU._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarFeatureMask_ExecuteCPU);
  return;
}

// `dynamic_atexit_destructor_for_'CVarFeatureMask_ExecuteGPU'' @ 150415bd0

void __cdecl
NiagaraStatelessCommon::_dynamic_atexit_destructor_for__CVarFeatureMask_ExecuteGPU__(void)

{
  CVarFeatureMask_ExecuteGPU._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarFeatureMask_ExecuteGPU);
  return;
}

// `dynamic_atexit_destructor_for_'CVarFirstHighPriTickGroup'' @ 150415bf0

void __cdecl
NiagaraWorldManagerInternal::_dynamic_atexit_destructor_for__CVarFirstHighPriTickGroup__(void)

{
  CVarFirstHighPriTickGroup._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarFirstHighPriTickGroup);
  return;
}

// `dynamic_atexit_destructor_for_'CVarFrequencyLUTNormalize'' @ 150415c10

void __cdecl
NiagaraStatelessModuleSolveVelocitiesAndForcesPrivate::
_dynamic_atexit_destructor_for__CVarFrequencyLUTNormalize__(void)

{
  CVarFrequencyLUTNormalize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarFrequencyLUTNormalize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarFrequencyNormalize'' @ 150415c30

void __cdecl
NiagaraStatelessModuleSolveVelocitiesAndForcesPrivate::
_dynamic_atexit_destructor_for__CVarFrequencyNormalize__(void)

{
  CVarFrequencyNormalize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarFrequencyNormalize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraSpawnPerTickGroup'' @ 150415c50

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraSpawnPerTickGroup__(void)

{
  CVarNiagaraSpawnPerTickGroup._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNiagaraSpawnPerTickGroup);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraWaitOnPreGC'' @ 150415c70

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraWaitOnPreGC__(void)

{
  CVarNiagaraWaitOnPreGC._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNiagaraWaitOnPreGC);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraWorldManagerObjectPoolEnabled'' @ 150415c90

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraWorldManagerObjectPoolEnabled__(void)

{
  CVarNiagaraWorldManagerObjectPoolEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNiagaraWorldManagerObjectPoolEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraWorldManagerUseTickPasses'' @ 150415cb0

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraWorldManagerUseTickPasses__(void)

{
  CVarNiagaraWorldManagerUseTickPasses._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNiagaraWorldManagerUseTickPasses);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNigaraAllowPrimedPools'' @ 150415cd0

void __cdecl _dynamic_atexit_destructor_for__CVarNigaraAllowPrimedPools__(void)

{
  CVarNigaraAllowPrimedPools._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNigaraAllowPrimedPools);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRollback_DelayNDCManagerInitialiation'' @ 150415cf0

void __cdecl
NiagaraRollbackCVars::_dynamic_atexit_destructor_for__CVarRollback_DelayNDCManagerInitialiation__
          (void)

{
  CVarRollback_DelayNDCManagerInitialiation._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRollback_DelayNDCManagerInitialiation);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRollback_NewWorldCleanup'' @ 150415d10

void __cdecl
NiagaraRollbackCVars::_dynamic_atexit_destructor_for__CVarRollback_NewWorldCleanup__(void)

{
  CVarRollback_NewWorldCleanup._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRollback_NewWorldCleanup);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRollback_WorldManagerRespectsWorldCreateFXSystem'' @ 150415d30

void __cdecl
NiagaraRollbackCVars::
_dynamic_atexit_destructor_for__CVarRollback_WorldManagerRespectsWorldCreateFXSystem__(void)

{
  CVarRollback_WorldManagerRespectsWorldCreateFXSystem._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarRollback_WorldManagerRespectsWorldCreateFXSystem);
  return;
}

// `dynamic_atexit_destructor_for_'CVarTickParameterCollectionsOncePerFrame'' @ 150415d50

void __cdecl
NiagaraWorldManagerInternal::
_dynamic_atexit_destructor_for__CVarTickParameterCollectionsOncePerFrame__(void)

{
  CVarTickParameterCollectionsOncePerFrame._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarTickParameterCollectionsOncePerFrame);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseCache'' @ 150415d70

void __cdecl
NiagaraStatelessComputeManagerPrivate::_dynamic_atexit_destructor_for__CVarUseCache__(void)

{
  CVarUseCache._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUseCache);
  return;
}

// `dynamic_atexit_destructor_for_'CVarWorldLoopTime'' @ 150415d90

void __cdecl _dynamic_atexit_destructor_for__CVarWorldLoopTime__(void)

{
  CVarWorldLoopTime._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarWorldLoopTime);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 150415db0

void __cdecl
```FNiagaraStatelessComputeManager::OnPostPostRender'::__l10::Desc::operator()<>'::__l3::<lambda_1>
::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150415db7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 150415dd0

void __cdecl
```FNiagaraStatelessComputeManager::OnPreRender'::__l10::Desc::operator()<>'::__l3::<lambda_1>::
operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150415dd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 150415df0

void __cdecl
```FNiagaraStatelessComputeManager::OnPreRender'::__l2::<lambda_3>::operator()'::__l7::<lambda_1>::
operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150415df7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 150415e10

void __cdecl
``FNiagaraStatelessComputeManager::OnPostPostRender'::__l15::<lambda_2>::operator()<>'::__l2::
_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150415e17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 150415e30

void __cdecl
``FNiagaraStatelessComputeManager::OnPreRender'::__l15::<lambda_2>::operator()<>'::__l2::
_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150415e37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Dummy'' @ 150415e50

void __cdecl NiagaraVersionedObject::_dynamic_atexit_destructor_for__Dummy__(void)

{
  if (Dummy.Path.FilePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Dummy.Path.FilePath.Data.AllocatorInstance.Data);
  }
  if (Dummy.Script.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(Dummy.Script.Data.AllocatorInstance.Data);
  }
  if (Dummy.Desc.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150415e89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*Dummy.Desc.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DumpNiagaraWorldManagerCommand'' @ 150415ea0

void __cdecl _dynamic_atexit_destructor_for__DumpNiagaraWorldManagerCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&DumpNiagaraWorldManagerCommand);
  return;
}

// `dynamic_atexit_destructor_for_'GCmdNiagaraPlaybackMode'' @ 150415ec0

void __cdecl _dynamic_atexit_destructor_for__GCmdNiagaraPlaybackMode__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GCmdNiagaraPlaybackMode);
  return;
}

// `dynamic_atexit_destructor_for_'GCmdNiagaraPlaybackRate'' @ 150415ee0

void __cdecl _dynamic_atexit_destructor_for__GCmdNiagaraPlaybackRate__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GCmdNiagaraPlaybackRate);
  return;
}

// `dynamic_atexit_destructor_for_'GCmdNiagaraScalabilityCullingMode'' @ 150415f00

void __cdecl _dynamic_atexit_destructor_for__GCmdNiagaraScalabilityCullingMode__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GCmdNiagaraScalabilityCullingMode);
  return;
}

// `dynamic_atexit_destructor_for_'GDumpNiagaraScalabilityData'' @ 150415f20

void __cdecl _dynamic_atexit_destructor_for__GDumpNiagaraScalabilityData__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GDumpNiagaraScalabilityData);
  return;
}

// `dynamic_atexit_destructor_for_'GPUStat_NiagaraStatelessGPUSimulation'' @ 150415f40

void __cdecl _dynamic_atexit_destructor_for__GPUStat_NiagaraStatelessGPUSimulation__(void)

{
  GPUStat_NiagaraStatelessGPUSimulation._104_4_ = 0;
  if (GPUStat_NiagaraStatelessGPUSimulation._96_8_ != 0) {
    FMemory::Free((void *)GPUStat_NiagaraStatelessGPUSimulation._96_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GPUStat_NiagaraStatelessGPUSimulation.field_0x20);
  return;
}

// `dynamic_atexit_destructor_for_'GlobalDeferredCallbacks'' @ 150415f80

void __cdecl
NiagaraWorldManagerInternal::_dynamic_atexit_destructor_for__GlobalDeferredCallbacks__(void)

{
  longlong *plVar1;
  TNode *pTVar2;
  longlong *plVar3;
  
  while (pTVar2 = GlobalDeferredCallbacks.Tail, pTVar2 != (TNode *)0x0) {
    GlobalDeferredCallbacks.Tail = pTVar2->NextNode;
    if (pTVar2 != (TNode *)0x0) {
      if (*(longlong *)&pTVar2->Item != 0) {
        plVar1 = *(longlong **)&(pTVar2->Item).field_0x28;
        plVar3 = (longlong *)&(pTVar2->Item).field_0x10;
        if (plVar1 != (longlong *)0x0) {
          plVar3 = plVar1;
        }
        (**(code **)(*plVar3 + 0x10))();
      }
      ::operator_delete(pTVar2,0x40);
    }
  }
  GlobalDeferredCallbacks.Tail = pTVar2;
  return;
}

// `dynamic_atexit_destructor_for_'RendererPropertiesToDeferredInit'' @ 150416000

void __cdecl
NiagaraVolumeRendererPropertiesLocal::
_dynamic_atexit_destructor_for__RendererPropertiesToDeferredInit__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = RendererPropertiesToDeferredInit.AllocatorInstance.Data;
  if (RendererPropertiesToDeferredInit.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (RendererPropertiesToDeferredInit.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150416020

void __cdecl
`NiagaraStateless::FRotateAroundPointModule_ShaderParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_NiagaraStateless::FRotateAroundPointModule_ShaderParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'Variable'' @ 150416040

void __cdecl
`NiagaraVolumeRendererPropertiesLocal::GetVolumeResolutionMaxAxisVariable'::__l2::
_dynamic_atexit_destructor_for__Variable__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Variable.VarData.AllocatorInstance.Data;
  if (Variable.VarData.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Variable.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'Variable'' @ 150416060

void __cdecl
`NiagaraVolumeRendererPropertiesLocal::GetVolumeRotationVariable'::__l2::
_dynamic_atexit_destructor_for__Variable__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Variable.VarData.AllocatorInstance.Data;
  if (Variable.VarData.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Variable.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'Variable'' @ 150416080

void __cdecl
`NiagaraVolumeRendererPropertiesLocal::GetVolumeScaleVariable'::__l2::
_dynamic_atexit_destructor_for__Variable__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Variable.VarData.AllocatorInstance.Data;
  if (Variable.VarData.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Variable.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'Variable'' @ 1504160a0

void __cdecl
`NiagaraVolumeRendererPropertiesLocal::GetVolumeWorldSpaceSizeVariable'::__l2::
_dynamic_atexit_destructor_for__Variable__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Variable.VarData.AllocatorInstance.Data;
  if (Variable.VarData.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Variable.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// operator() @ 1505428e0

bool __thiscall `NiagaraStatelessInternal::IsValid'::__l15::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5467241751443931058>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5467241751443931058>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150542960

bool __thiscall `NiagaraStatelessInternal::IsValid'::__l21::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5467241751443931045>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5467241751443931045>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

