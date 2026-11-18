// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 676

// GeneratePerfBaselinesDelegate'' @ 141183810

void __cdecl `dynamic_initializer_for_'UNiagaraEffectType::GeneratePerfBaselinesDelegate__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UNiagaraEffectType::GeneratePerfBaselinesDelegate__);
  return;
}

// `dynamic_initializer_for_'CVarEnableEmitterChangeIdMergeLogging'' @ 141183830

void __cdecl _dynamic_initializer_for__CVarEnableEmitterChangeIdMergeLogging__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableEmitterChangeIdMergeLogging,L"fx.EnableEmitterMergeChangeIdLogging",
             &GbEnableEmitterChangeIdMergeLogging,
             L"If > 0 verbose change id information will be logged to help with debuggin merge issues. \n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableEmitterChangeIdMergeLogging__);
  return;
}

// `dynamic_initializer_for_'CVarForceNiagaraCompileOnLoad'' @ 141183880

void __cdecl _dynamic_initializer_for__CVarForceNiagaraCompileOnLoad__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarForceNiagaraCompileOnLoad,L"fx.ForceCompileOnLoad",&GbForceNiagaraCompileOnLoad,
             L"If > 0 emitters will be forced to compile on load. \n",0);
  atexit(_dynamic_atexit_destructor_for__CVarForceNiagaraCompileOnLoad__);
  return;
}

// `dynamic_initializer_for_'CVarForceNiagaraCompileToFail'' @ 1411838d0

void __cdecl _dynamic_initializer_for__CVarForceNiagaraCompileToFail__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarForceNiagaraCompileToFail,L"fx.ForceNiagaraCompileToFail",
             &GbForceNiagaraFailToCompile,
             L"If > 0 emitters will go through the motions of a compile, but will never set valid bytecode. \n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarForceNiagaraCompileToFail__);
  return;
}

// `dynamic_initializer_for_'CVarForceNiagaraMergeOnLoad'' @ 141183920

void __cdecl _dynamic_initializer_for__CVarForceNiagaraMergeOnLoad__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarForceNiagaraMergeOnLoad,L"fx.ForceMergeOnLoad",&GbForceNiagaraMergeOnLoad,
             L"If > 0 emitters will be forced to merge on load. \n",0);
  atexit(_dynamic_atexit_destructor_for__CVarForceNiagaraMergeOnLoad__);
  return;
}

// `dynamic_initializer_for_'CVarMaxNiagaraCPUParticlesPerEmitter'' @ 141183970

void __cdecl _dynamic_initializer_for__CVarMaxNiagaraCPUParticlesPerEmitter__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMaxNiagaraCPUParticlesPerEmitter,L"fx.MaxNiagaraCPUParticlesPerEmitter",
             &GMaxNiagaraCPUParticlesPerEmitter,
             L"The max number of supported CPU particles per emitter in Niagara. \n",0);
  atexit(_dynamic_atexit_destructor_for__CVarMaxNiagaraCPUParticlesPerEmitter__);
  return;
}

// `dynamic_initializer_for_'CVarMaxNiagaraGPUParticlesSpawnPerFrame'' @ 1411839c0

void __cdecl _dynamic_initializer_for__CVarMaxNiagaraGPUParticlesSpawnPerFrame__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMaxNiagaraGPUParticlesSpawnPerFrame,L"fx.MaxNiagaraGPUParticlesSpawnPerFrame",
             &GMaxNiagaraGPUParticlesSpawnPerFrame,
             L"The max number of GPU particles we expect to spawn in a single frame.\n",0);
  atexit(_dynamic_atexit_destructor_for__CVarMaxNiagaraGPUParticlesSpawnPerFrame__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraDumpNans'' @ 141183a10

void __cdecl _dynamic_initializer_for__CVarNiagaraDumpNans__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraDumpNans,L"fx.Niagara.DumpNans",&GbNiagaraDumpNans,
             L"If not 0 any NaNs will be dumped always.\n",0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraDumpNans__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraDumpNansOnce'' @ 141183a60

void __cdecl _dynamic_initializer_for__CVarNiagaraDumpNansOnce__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraDumpNansOnce,L"fx.Niagara.DumpNansOnce",&GbNiagaraDumpNansOnce,
             L"If not 0 any NaNs will be dumped for the first emitter that encounters NaNs.\n",0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraDumpNansOnce__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraDumpParticleData'' @ 141183ab0

void __cdecl _dynamic_initializer_for__CVarNiagaraDumpParticleData__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraDumpParticleData,L"fx.DumpParticleData",&GbDumpParticleData,
             L"If > 0 current frame particle data will be dumped after simulation. \n",0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraDumpParticleData__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraEmitterComputePSOPrecacheMode'' @ 141183b00

void __cdecl _dynamic_initializer_for__CVarNiagaraEmitterComputePSOPrecacheMode__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraEmitterComputePSOPrecacheMode,L"fx.Niagara.Emitter.ComputePSOPrecacheMode",
             &GNiagaraEmitterComputePSOPrecacheMode,
             L"Controlls how PSO precaching should be done for Niagara compute shaders\n0 = Disabled (Default).\n1 = Enabled if r.PSOPrecaching is also enabled. Emitters are not allowed to run until they complete if r.PSOPrecache.ProxyCreationWhenPSOReady=1\n2 = Force Enabled.\n3 = Force Enabled, emitters are not allowed to run until they complete."
             ,0x40);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraEmitterComputePSOPrecacheMode__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraEmitterMaxGPUBufferElements'' @ 141183b50

void __cdecl _dynamic_initializer_for__CVarNiagaraEmitterMaxGPUBufferElements__(void)

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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_63>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraEmitterMaxGPUBufferElements,L"fx.Niagara.Emitter.MaxGPUBufferElements",
             &GNiagaraEmitterMaxGPUBufferElements,
             L"Maximum elements per GPU buffer, for example 4k elements would restrict a float buffer to be 16k maximum per buffer.\nNote: If you request something smaller than what will satisfy a single unit of work it will be increased to that size.\nDefault 0 which will allow the buffer to be the maximum allowed by the RHI.\n"
             ,(TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,
             0x40);
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
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraEmitterMaxGPUBufferElements__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraRuntimeCycleHistorySize'' @ 141183c90

void __cdecl _dynamic_initializer_for__CVarNiagaraRuntimeCycleHistorySize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraRuntimeCycleHistorySize,L"fx.NiagaraRuntimeCycleHistorySize",
             &GNiagaraRuntimeCycleHistorySize,
             L"How many frames history to use in Niagara\'s runtime performance trackers. \n",4);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraRuntimeCycleHistorySize__);
  return;
}

// `dynamic_initializer_for_'CVarNiagaraShowAllocationWarnings'' @ 141183ce0

void __cdecl _dynamic_initializer_for__CVarNiagaraShowAllocationWarnings__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNiagaraShowAllocationWarnings,L"fx.Niagara.ShowAllocationWarnings",
             &GbNiagaraShowAllocationWarnings,
             L"If not 0 then frequent reallocations and over-allocations of particle memory will cause warnings in the log.\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNiagaraShowAllocationWarnings__);
  return;
}

// `dynamic_initializer_for_'CVarNumFramesBetweenRuntimePerfSamples'' @ 141183d30

void __cdecl _dynamic_initializer_for__CVarNumFramesBetweenRuntimePerfSamples__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNumFramesBetweenRuntimePerfSamples,L"fx.NumFramesBetweenRuntimePerfSamples",
             &GNumFramesBetweenRuntimePerfSamples,
             L"How many frames between each sample of Niagara runtime perf. \n",4);
  atexit(_dynamic_atexit_destructor_for__CVarNumFramesBetweenRuntimePerfSamples__);
  return;
}

// `dynamic_initializer_for_'CVarTriggerCrash'' @ 141183d80

void __cdecl _dynamic_initializer_for__CVarTriggerCrash__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarTriggerCrash,L"fx.TriggerDebugCrash",&GbTriggerCrash,
             L"If > 0 we deliberately crash to test Crash Reporter integration.",0);
  atexit(_dynamic_atexit_destructor_for__CVarTriggerCrash__);
  return;
}

// `dynamic_initializer_for_'CmdDebugHud'' @ 141183dd0

void __cdecl NiagaraDebugLocal::_dynamic_initializer_for__CmdDebugHud__(void)

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
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,NiagaraDebugLocal::<lambda_60>_>
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
                     (IConsoleManager::Singleton,L"fx.Niagara.Debug.Hud",
                      L"Set options for debug hud display",&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&CmdDebugHud,pIVar5);
  CmdDebugHud._0_8_ = &___7FAutoConsoleCommandWithWorldAndArgs__6B_;
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
  atexit(_dynamic_atexit_destructor_for__CmdDebugHud__);
  return;
}

// `dynamic_initializer_for_'CmdNiagaraDebugHud'' @ 141183f60

void __cdecl NiagaraDebugLocal::_dynamic_initializer_for__CmdNiagaraDebugHud__(void)

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
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,NiagaraDebugLocal::<lambda_59>_>
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
                     (IConsoleManager::Singleton,L"NiagaraDebugHud",
                      L"Shorter version to quickly toggle debug hud modes\n No value will toggle the overview on / off\n A numberic value selects which overmode to set, where 0 is off\n"
                      ,&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&CmdNiagaraDebugHud,pIVar5);
  CmdNiagaraDebugHud._0_8_ = &___7FAutoConsoleCommandWithWorldAndArgs__6B_;
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
  atexit(_dynamic_atexit_destructor_for__CmdNiagaraDebugHud__);
  return;
}

// `dynamic_initializer_for_'CmdSpawnComponent'' @ 1411840f0

void __cdecl NiagaraDebugLocal::_dynamic_initializer_for__CmdSpawnComponent__(void)

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
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,NiagaraDebugLocal::<lambda_61>_>
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
                     (IConsoleManager::Singleton,L"fx.Niagara.Debug.SpawnComponent",
                      L"Spawns a NiagaraComponent using the given parameters",&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&CmdSpawnComponent,pIVar5);
  CmdSpawnComponent._0_8_ = &___7FAutoConsoleCommandWithWorldAndArgs__6B_;
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
  atexit(_dynamic_atexit_destructor_for__CmdSpawnComponent__);
  return;
}

// `dynamic_initializer_for_'CmdSpawnSystem'' @ 141184280

void __cdecl NiagaraDebugLocal::_dynamic_initializer_for__CmdSpawnSystem__(void)

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
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,NiagaraDebugLocal::<lambda_62>_>
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
                     (IConsoleManager::Singleton,L"fx.Niagara.Debug.KillSpawned",
                      L"Kills all spawned compoonents",&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&CmdSpawnSystem,pIVar5);
  CmdSpawnSystem._0_8_ = &___7FAutoConsoleCommandWithWorldAndArgs__6B_;
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
  atexit(_dynamic_atexit_destructor_for__CmdSpawnSystem__);
  return;
}

// `dynamic_initializer_for_'GCachedSystemVariables'' @ 141184410

void __cdecl NiagaraDebugLocal::_dynamic_initializer_for__GCachedSystemVariables__(void)

{
  atexit(_dynamic_atexit_destructor_for__GCachedSystemVariables__);
  return;
}

// `dynamic_initializer_for_'GDebugConsoleCommands'' @ 141184430

void __cdecl NiagaraDebugLocal::_dynamic_initializer_for__GDebugConsoleCommands__(void)

{
  atexit(_dynamic_atexit_destructor_for__GDebugConsoleCommands__);
  return;
}

// `dynamic_initializer_for_'GDebugSpawnedComponents'' @ 141184450

void __cdecl NiagaraDebugLocal::_dynamic_initializer_for__GDebugSpawnedComponents__(void)

{
  atexit(_dynamic_atexit_destructor_for__GDebugSpawnedComponents__);
  return;
}

// `dynamic_initializer_for_'GEngineVariables'' @ 141184470

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

void __cdecl NiagaraDebugLocal::_dynamic_initializer_for__GEngineVariables__(void)

{
  ::FString::FString((FString *)GEngineVariables,L"Engine.LODDistance");
  GEngineVariables[0]._56_8_ = 0;
  GEngineVariables[0]._40_8_ = <lambda_24>::<lambda_invoker_cdecl>;
  GEngineVariables[0]._32_8_ =
       &
       ___7__TFunction_OwnedObject_P6A_AVFString__PEAVFNiagaraSystemInstance___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  GEngineVariables[0]._16_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<FString_(__cdecl*)(FNiagaraSystemInstance_*),FString,FNiagaraSystemInstance_*>
       ::Call;
  ::FString::FString((FString *)(GEngineVariables + 1),L"Engine.LODFraction");
  GEngineVariables[1]._56_8_ = 0;
  GEngineVariables[1]._40_8_ = <lambda_25>::<lambda_invoker_cdecl>;
  GEngineVariables[1]._32_8_ =
       &
       ___7__TFunction_OwnedObject_P6A_AVFString__PEAVFNiagaraSystemInstance___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  GEngineVariables[1]._16_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<FString_(__cdecl*)(FNiagaraSystemInstance_*),FString,FNiagaraSystemInstance_*>
       ::Call;
  ::FString::FString((FString *)(GEngineVariables + 2),L"Engine.System.TickCount");
  GEngineVariables[2]._56_8_ = 0;
  GEngineVariables[2]._40_8_ = <lambda_26>::<lambda_invoker_cdecl>;
  GEngineVariables[2]._32_8_ =
       &
       ___7__TFunction_OwnedObject_P6A_AVFString__PEAVFNiagaraSystemInstance___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  GEngineVariables[2]._16_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<FString_(__cdecl*)(FNiagaraSystemInstance_*),FString,FNiagaraSystemInstance_*>
       ::Call;
  atexit(_dynamic_atexit_destructor_for__GEngineVariables__);
  return;
}

// `dynamic_initializer_for_'InvalidatePerfBaselinesCommand'' @ 141184560

void __cdecl _dynamic_initializer_for__InvalidatePerfBaselinesCommand__(void)

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
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[3] = InvalidatePerfBaselines;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&InvalidatePerfBaselinesCommand,L"fx.InvalidateNiagaraPerfBaselines",
             L"Invalidates all Niagara performance baseline data.",
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
  atexit(_dynamic_atexit_destructor_for__InvalidatePerfBaselinesCommand__);
  return;
}

// `dynamic_initializer_for_'LogNiagaraDebuggerClient'' @ 1411846a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogNiagaraDebuggerClient__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogNiagaraDebuggerClient,L"LogNiagaraDebuggerClient",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogNiagaraDebuggerClient__);
  return;
}

// `dynamic_initializer_for_'ModuleName'' @ 1411846e0

void __cdecl AssetRegistryConstants::_dynamic_initializer_for__ModuleName__(void)

{
  ::FName::FName(&ModuleName,"AssetRegistry");
  return;
}

// `dynamic_initializer_for_'NAME_ANiagaraEditorPreviewActor_CalculateLocation'' @ 141184700

void __cdecl _dynamic_initializer_for__NAME_ANiagaraEditorPreviewActor_CalculateLocation__(void)

{
  FName::FName(&NAME_ANiagaraEditorPreviewActor_CalculateLocation,L"CalculateLocation");
  return;
}

// `dynamic_initializer_for_'NAME_ANiagaraEditorPreviewActor_CalculateRotation'' @ 141184720

void __cdecl _dynamic_initializer_for__NAME_ANiagaraEditorPreviewActor_CalculateRotation__(void)

{
  FName::FName(&NAME_ANiagaraEditorPreviewActor_CalculateRotation,L"CalculateRotation");
  return;
}

// `dynamic_initializer_for_'NiagaraDebuggerClientOutlienrUpdateMessage'' @ 141184740

void __cdecl _dynamic_initializer_for__NiagaraDebuggerClientOutlienrUpdateMessage__(void)

{
  FName::FName(&NiagaraDebuggerClientOutlienrUpdateMessage,
               "NiagaraDebuggerClientOutlienrUpdateMessage");
  return;
}

// `dynamic_initializer_for_'RTFramesGuard'' @ 141184760

void __cdecl NiagaraDebugLocal::_dynamic_initializer_for__RTFramesGuard__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&RTFramesGuard,4000);
  atexit(_dynamic_atexit_destructor_for__RTFramesGuard__);
  return;
}

// `dynamic_initializer_for_'RendererPropertiesToDeferredInit'' @ 141184790

void __cdecl
NiagaraDecalRendererPropertiesLocal::_dynamic_initializer_for__RendererPropertiesToDeferredInit__
          (void)

{
  atexit(_dynamic_atexit_destructor_for__RendererPropertiesToDeferredInit__);
  return;
}

// `dynamic_initializer_for_'Settings'' @ 1411847b0

void __cdecl NiagaraDebugLocal::_dynamic_initializer_for__Settings__(void)

{
  FNiagaraDebugHUDSettingsData::FNiagaraDebugHUDSettingsData(&Settings);
  atexit(_dynamic_atexit_destructor_for__Settings__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraCollision'' @ 1411847e0

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

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraConstants'' @ 141184870

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

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraEmitterErrorCheck'' @ 141184900

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraEmitterErrorCheck__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraEmitterErrorCheck ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraEmitterErrorCheck>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraEmitterErrorCheck");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraEmitterErrorCheck,*pFVar1,
               L"Emitter Error Check [CNC]","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraEmitterInit'' @ 141184990

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraEmitterInit__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraEmitterInit == (FThreadSafeStaticStat<FStat_STAT_NiagaraEmitterInit>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraEmitterInit");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraEmitterInit,*pFVar1,
               L"Init Emitters [GT]","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraEmitterPostTick'' @ 141184a20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraEmitterPostTick__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraEmitterPostTick ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraEmitterPostTick>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraEmitterPostTick");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraEmitterPostTick,*pFVar1,
               L"Emitter Post Tick [CNC]","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true
               ,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraEmptyUAVPool'' @ 141184ab0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraEmptyUAVPool__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraEmptyUAVPool == (FThreadSafeStaticStat<FStat_STAT_NiagaraEmptyUAVPool>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraEmptyUAVPool");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraEmptyUAVPool,*pFVar1,L"# EmptyUAVs"
               ,"STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraEventHandle'' @ 141184b40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraEventHandle__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraEventHandle == (FThreadSafeStaticStat<FStat_STAT_NiagaraEventHandle>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraEventHandle");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraEventHandle,*pFVar1,
               L"Emitter Event Handling [CNC]","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true
               ,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraEvent_CopyBuffer'' @ 141184bd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraEvent_CopyBuffer__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraEvent_CopyBuffer ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraEvent_CopyBuffer>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraEvent_CopyBuffer");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraEvent_CopyBuffer,*pFVar1,
               L"Emitter Event CopyBuffer [CNC]","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraGPUDataInterfaceMemory'' @ 141184c60

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

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraGPUParticleMemory'' @ 141184cf0

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

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraNumCustomEvents'' @ 141184d80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraNumCustomEvents__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraNumCustomEvents ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraNumCustomEvents>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraNumCustomEvents");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraNumCustomEvents,*pFVar1,
               L"Num Custom Events","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraNumParticles'' @ 141184e10

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

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraNumSystems'' @ 141184ea0

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

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraOverview_GT'' @ 141184f30

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

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraOverview_GT_CNC'' @ 141184fc0

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

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraOverview_RT'' @ 141185050

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

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraOverview_RT_CNC'' @ 1411850e0

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

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraParticleMemory'' @ 141185170

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

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraRenderTargetMemory'' @ 141185200

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

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraSimulate'' @ 141185290

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraSimulate__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraSimulate == (FThreadSafeStaticStat<FStat_STAT_NiagaraSimulate>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraSimulate");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSimulate,*pFVar1,
               L"Emitter Simulate [CNC]","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraSpawn'' @ 141185320

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NiagaraSpawn__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NiagaraSpawn == (FThreadSafeStaticStat<FStat_STAT_NiagaraSpawn>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NiagaraSpawn");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSpawn,*pFVar1,
               L"Emitter Spawn [CNC]","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraTick'' @ 1411853b0

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

// `dynamic_initializer_for_'StatPtr_STAT_NiagaraVBMemory'' @ 141185440

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

// `dynamic_initializer_for_'StatPtr_STAT_TotalNiagaraSystemInstances'' @ 1411854d0

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

// `dynamic_initializer_for_'StatPtr_STAT_TotalNiagaraSystemInstancesSolo'' @ 141185560

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

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEffectType_h__Script_Niagara_621632496'' @ 1411855f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEffectType_h__Script_Niagara_621632496__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEffectType_h__Script_Niagara_Statics
             ::ClassInfo,4,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEffectType_h__Script_Niagara_Statics
             ::ScriptStructInfo,10,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEffectType_h__Script_Niagara_Statics
             ::EnumInfo,3);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitterBase_h__Script_Niagara_1177037136'' @ 141185640

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitterBase_h__Script_Niagara_1177037136__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitterBase_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitterHandle_h__Script_Niagara_1166886383'' @ 141185680

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitterHandle_h__Script_Niagara_1166886383__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitterHandle_h__Script_Niagara_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitterHandle_h__Script_Niagara_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h__Script_Niagara_321716522'' @ 1411856d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h__Script_Niagara_321716522__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h__Script_Niagara_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h__Script_Niagara_Statics
             ::ScriptStructInfo,6,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h__Script_Niagara_Statics
             ::EnumInfo,3);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDebuggerCommon_h__Script_Niagara_2092008817'' @ 141185720

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDebuggerCommon_h__Script_Niagara_2092008817__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDebuggerCommon_h__Script_Niagara_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDebuggerCommon_h__Script_Niagara_Statics
             ::ScriptStructInfo,0x13,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDebuggerCommon_h__Script_Niagara_Statics
             ::EnumInfo,10);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDecalRendererProperties_h__Script_Niagara_577096780'' @ 141185770

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDecalRendererProperties_h__Script_Niagara_577096780__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDecalRendererProperties_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraEditorDataBase_h__Script_Niagara_326816227'' @ 1411857b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraEditorDataBase_h__Script_Niagara_326816227__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraEditorDataBase_h__Script_Niagara_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraEditorDataBase_h__Script_Niagara_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraEditorPreviewActor_h__Script_Niagara_1212413768'' @ 141185800

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraEditorPreviewActor_h__Script_Niagara_1212413768__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Niagara",
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraEditorPreviewActor_h__Script_Niagara_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraEditorPreviewActor_h__Script_Niagara_Statics
             ::EnumInfo,3);
  return;
}

// Z_Construct_UClass_UNiagaraDecalRendererProperties @ 14925da30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraDecalRendererProperties(void)

{
  if (Z_Registration_Info_UClass_UNiagaraDecalRendererProperties.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraDecalRendererProperties.OuterSingleton,
               &Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraDecalRendererProperties.OuterSingleton;
}

// Z_Construct_UClass_UNiagaraSignificanceHandler_NoRegister @ 14925df70

UClass * __cdecl Z_Construct_UClass_UNiagaraSignificanceHandler_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraSignificanceHandler.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraSignificanceHandler",
               &Z_Registration_Info_UClass_UNiagaraSignificanceHandler.InnerSingleton,
               UNiagaraSignificanceHandler::StaticRegisterNativesUNiagaraSignificanceHandler,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraSignificanceHandler>,
               InternalVTableHelperCtorCaller<UNiagaraSignificanceHandler>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraSignificanceHandler.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraEditorDataBase @ 14925e740

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraEditorDataBase(void)

{
  if (Z_Registration_Info_UClass_UNiagaraEditorDataBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraEditorDataBase.OuterSingleton,
               &Z_Construct_UClass_UNiagaraEditorDataBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraEditorDataBase.OuterSingleton;
}

// Z_Construct_UClass_UNiagaraEditorParametersAdapterBase @ 14925e780

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraEditorParametersAdapterBase(void)

{
  if (Z_Registration_Info_UClass_UNiagaraEditorParametersAdapterBase.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraEditorParametersAdapterBase.OuterSingleton,
               &Z_Construct_UClass_UNiagaraEditorParametersAdapterBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraEditorParametersAdapterBase.OuterSingleton;
}

// NewProp_bIsValid_SetBit @ 14925e7c0

void __cdecl
Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Statics::NewProp_bIsValid_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// NewStructOps @ 14925e7d0

void * __cdecl Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraGraphViewSettings,&UE::CoreUObject::Private::Construct<FNiagaraGraphViewSettings>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraGraphViewSettings>,&UE::CoreUObject::Private::Destruct<FNiagaraGraphViewSettings>,&UE::CoreUObject::Private::Copy<FNiagaraGraphViewSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_ANiagaraEditorPreviewActor @ 14925ee60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ANiagaraEditorPreviewActor(void)

{
  if (Z_Registration_Info_UClass_ANiagaraEditorPreviewActor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ANiagaraEditorPreviewActor.OuterSingleton,
               &Z_Construct_UClass_ANiagaraEditorPreviewActor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ANiagaraEditorPreviewActor.OuterSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraEditorPreviewActorPlaybackType @ 14925ef90

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraEditorPreviewActorPlaybackType(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraEditorPreviewActorPlaybackType.InnerSingleton ==
      (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraEditorPreviewActorPlaybackType.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraEditorPreviewActorPlaybackType_Statics::EnumParams
              );
  }
  return Z_Registration_Info_UEnum_ENiagaraEditorPreviewActorPlaybackType.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraEditorPreviewActorRotationMode @ 14925efd0

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraEditorPreviewActorRotationMode(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraEditorPreviewActorRotationMode.InnerSingleton ==
      (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraEditorPreviewActorRotationMode.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraEditorPreviewActorRotationMode_Statics::EnumParams
              );
  }
  return Z_Registration_Info_UEnum_ENiagaraEditorPreviewActorRotationMode.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraEditorPreviewActorShapeType @ 14925f010

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraEditorPreviewActorShapeType(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraEditorPreviewActorShapeType.InnerSingleton == (UEnum *)0x0)
  {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraEditorPreviewActorShapeType.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraEditorPreviewActorShapeType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraEditorPreviewActorShapeType.InnerSingleton;
}

// ENiagaraEditorPreviewActorPlaybackType_StaticEnum @ 14925f050

UEnum * __cdecl ENiagaraEditorPreviewActorPlaybackType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraEditorPreviewActorPlaybackType.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraEditorPreviewActorPlaybackType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraEditorPreviewActorPlaybackType,
                       (UObject *)pUVar1,L"ENiagaraEditorPreviewActorPlaybackType");
  }
  return Z_Registration_Info_UEnum_ENiagaraEditorPreviewActorPlaybackType.OuterSingleton;
}

// ENiagaraEditorPreviewActorShapeType_StaticEnum @ 14925f090

UEnum * __cdecl ENiagaraEditorPreviewActorShapeType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraEditorPreviewActorShapeType.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraEditorPreviewActorShapeType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraEditorPreviewActorShapeType,
                       (UObject *)pUVar1,L"ENiagaraEditorPreviewActorShapeType");
  }
  return Z_Registration_Info_UEnum_ENiagaraEditorPreviewActorShapeType.OuterSingleton;
}

// ENiagaraEditorPreviewActorRotationMode_StaticEnum @ 14925f110

UEnum * __cdecl ENiagaraEditorPreviewActorRotationMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraEditorPreviewActorRotationMode.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraEditorPreviewActorRotationMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraEditorPreviewActorRotationMode,
                       (UObject *)pUVar1,L"ENiagaraEditorPreviewActorRotationMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraEditorPreviewActorRotationMode.OuterSingleton;
}

// Z_Construct_UFunction_ANiagaraEditorPreviewActor_CalculateLocation @ 14925f1a0

UFunction * __cdecl Z_Construct_UFunction_ANiagaraEditorPreviewActor_CalculateLocation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ANiagaraEditorPreviewActor_CalculateLocation_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ANiagaraEditorPreviewActor_CalculateRotation @ 14925f1e0

UFunction * __cdecl Z_Construct_UFunction_ANiagaraEditorPreviewActor_CalculateRotation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ANiagaraEditorPreviewActor_CalculateRotation_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UNiagaraDebugHUDSettings @ 14925f9d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraDebugHUDSettings(void)

{
  if (Z_Registration_Info_UClass_UNiagaraDebugHUDSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraDebugHUDSettings.OuterSingleton,
               &Z_Construct_UClass_UNiagaraDebugHUDSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraDebugHUDSettings.OuterSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraDebugHUDDOverviewSort @ 14925fa10

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraDebugHUDDOverviewSort(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraDebugHUDDOverviewSort.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraDebugHUDDOverviewSort.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraDebugHUDDOverviewSort_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraDebugHUDDOverviewSort.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraDebugHudFont @ 14925fa50

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraDebugHudFont(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraDebugHudFont.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraDebugHudFont.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraDebugHudFont_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraDebugHudFont.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraDebugHudHAlign @ 14925fa90

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraDebugHudHAlign(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraDebugHudHAlign.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraDebugHudHAlign.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraDebugHudHAlign_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraDebugHudHAlign.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraDebugHUDOverviewMode @ 14925fad0

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraDebugHUDOverviewMode(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraDebugHUDOverviewMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraDebugHUDOverviewMode.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraDebugHUDOverviewMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraDebugHUDOverviewMode.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraDebugHUDPerfGraphMode @ 14925fb10

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraDebugHUDPerfGraphMode(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraDebugHUDPerfGraphMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraDebugHUDPerfGraphMode.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraDebugHUDPerfGraphMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraDebugHUDPerfGraphMode.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraDebugHUDPerfSampleMode @ 14925fb50

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraDebugHUDPerfSampleMode(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraDebugHUDPerfSampleMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraDebugHUDPerfSampleMode.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraDebugHUDPerfSampleMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraDebugHUDPerfSampleMode.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraDebugHUDPerfUnits @ 14925fb90

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraDebugHUDPerfUnits(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraDebugHUDPerfUnits.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraDebugHUDPerfUnits.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraDebugHUDPerfUnits_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraDebugHUDPerfUnits.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraDebugHudVAlign @ 14925fbd0

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraDebugHudVAlign(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraDebugHudVAlign.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraDebugHudVAlign.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraDebugHudVAlign_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraDebugHudVAlign.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraDebugHudVerbosity @ 14925fc10

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraDebugHudVerbosity(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraDebugHudVerbosity.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraDebugHudVerbosity.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraDebugHudVerbosity_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraDebugHudVerbosity.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraDebugPlaybackMode @ 14925fc50

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraDebugPlaybackMode(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraDebugPlaybackMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraDebugPlaybackMode.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraDebugPlaybackMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraDebugPlaybackMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData @ 14925fc90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraDebugHUDSettingsData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraDebugHUDSettingsData.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraDebugHUDSettingsData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraDebugHUDSettingsData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions @ 14925fd10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraDebugHudTextOptions.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraDebugHudTextOptions.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraDebugHudTextOptions.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraDebugHudTextOptions.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable @ 14925fd90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraDebugHUDVariable.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraDebugHUDVariable.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraDebugHUDVariable.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraDebugHUDVariable.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraOutlinerData @ 14925fe10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraOutlinerData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraOutlinerData.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraOutlinerData.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraOutlinerData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraOutlinerData.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FNiagaraOutlinerData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData @ 14925fe90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraOutlinerEmitterInstanceData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraOutlinerEmitterInstanceData.InnerSingleton
               ,&Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraOutlinerEmitterInstanceData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraOutlinerEmitterInstanceData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData @ 14925ff10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraOutlinerSystemData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraOutlinerSystemData.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraOutlinerSystemData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraOutlinerSystemData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData @ 14925ff90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraOutlinerSystemInstanceData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraOutlinerSystemInstanceData.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraOutlinerSystemInstanceData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraOutlinerSystemInstanceData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData @ 149260010

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraOutlinerTimingData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraOutlinerTimingData.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraOutlinerTimingData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraOutlinerTimingData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData @ 149260090

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraOutlinerWorldData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraOutlinerWorldData.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraOutlinerWorldData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraOutlinerWorldData.InnerSingleton;
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

// NewStructOps @ 149260110

void * __cdecl Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraOutlinerTimingData,&UE::CoreUObject::Private::Construct<FNiagaraOutlinerTimingData>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraOutlinerTimingData>,&UE::CoreUObject::Private::Destruct<FNiagaraOutlinerTimingData>,&UE::CoreUObject::Private::Copy<FNiagaraOutlinerTimingData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bRequiresPersistentIDs_SetBit @ 149260340

void __cdecl
Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::
NewProp_bRequiresPersistentIDs_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x1c) = *(uint *)((longlong)param_1 + 0x1c) | 1;
  return;
}

// NewStructOps @ 149260350

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraOutlinerEmitterInstanceData,&UE::CoreUObject::Private::Construct<FNiagaraOutlinerEmitterInstanceData>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraOutlinerEmitterInstanceData>,&UE::CoreUObject::Private::Destruct<FNiagaraOutlinerEmitterInstanceData>,&UE::CoreUObject::Private::Copy<FNiagaraOutlinerEmitterInstanceData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bPendingKill_SetBit @ 149260420

void __cdecl
Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bPendingKill_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x44) = *(uint *)((longlong)param_1 + 0x44) | 1;
  return;
}

// NewProp_bUsingCullProxy_SetBit @ 149260430

void __cdecl
Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bUsingCullProxy_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x44) = *(uint *)((longlong)param_1 + 0x44) | 2;
  return;
}

// NewProp_bIsSolo_SetBit @ 149260440

void __cdecl
Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bIsSolo_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x60) = *(uint *)((longlong)param_1 + 0x60) | 1;
  return;
}

// NewProp_bRequiresGlobalDistanceField_SetBit @ 149260450

void __cdecl
Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::
NewProp_bRequiresGlobalDistanceField_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x60) = *(uint *)((longlong)param_1 + 0x60) | 2;
  return;
}

// NewProp_bRequiresDepthBuffer_SetBit @ 149260460

void __cdecl
Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::
NewProp_bRequiresDepthBuffer_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x60) = *(uint *)((longlong)param_1 + 0x60) | 4;
  return;
}

// NewProp_bRequiresEarlyViewData_SetBit @ 149260470

void __cdecl
Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::
NewProp_bRequiresEarlyViewData_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x60) = *(uint *)((longlong)param_1 + 0x60) | 8;
  return;
}

// NewProp_bRequiresViewUniformBuffer_SetBit @ 149260480

void __cdecl
Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::
NewProp_bRequiresViewUniformBuffer_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x60) = *(uint *)((longlong)param_1 + 0x60) | 0x10;
  return;
}

// NewProp_bRequiresRayTracingScene_SetBit @ 149260490

void __cdecl
Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::
NewProp_bRequiresRayTracingScene_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x60) = *(uint *)((longlong)param_1 + 0x60) | 0x20;
  return;
}

// NewProp_bRequiresCurrentFrameNDC_SetBit @ 1492604a0

void __cdecl
Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::
NewProp_bRequiresCurrentFrameNDC_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x60) = *(uint *)((longlong)param_1 + 0x60) | 0x40;
  return;
}

// NewStructOps @ 1492604b0

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraOutlinerSystemInstanceData,&UE::CoreUObject::Private::Construct<FNiagaraOutlinerSystemInstanceData>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraOutlinerSystemInstanceData>,&UE::CoreUObject::Private::Destruct<FNiagaraOutlinerSystemInstanceData>,&UE::CoreUObject::Private::Copy<FNiagaraOutlinerSystemInstanceData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UEnum_Niagara_ENiagaraEmitterMode @ 1492604f0

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraEmitterMode(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraEmitterMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraEmitterMode.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraEmitterMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraEmitterMode.InnerSingleton;
}

// ENiagaraEmitterMode_StaticEnum @ 149260530

UEnum * __cdecl ENiagaraEmitterMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraEmitterMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraEmitterMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraEmitterMode,(UObject *)pUVar1,
                       L"ENiagaraEmitterMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraEmitterMode.OuterSingleton;
}

// Z_Construct_UClass_UNiagaraEmitter @ 149260570

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraEmitter(void)

{
  if (Z_Registration_Info_UClass_UNiagaraEmitter.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraEmitter.OuterSingleton,
               &Z_Construct_UClass_UNiagaraEmitter_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraEmitter.OuterSingleton;
}

// Z_Construct_UClass_UNiagaraEmitterBase @ 1492605b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraEmitterBase(void)

{
  if (Z_Registration_Info_UClass_UNiagaraEmitterBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraEmitterBase.OuterSingleton,
               &Z_Construct_UClass_UNiagaraEmitterBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraEmitterBase.OuterSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraEmitterCalculateBoundMode @ 1492605f0

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraEmitterCalculateBoundMode(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraEmitterCalculateBoundMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraEmitterCalculateBoundMode.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraEmitterCalculateBoundMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraEmitterCalculateBoundMode.InnerSingleton;
}

// NewProp_bIsEnabled_SetBit @ 149260630

void __cdecl
Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewProp_bIsEnabled_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Z_Construct_UEnum_Niagara_EParticleAllocationMode @ 149260640

UEnum * __cdecl Z_Construct_UEnum_Niagara_EParticleAllocationMode(void)

{
  if (Z_Registration_Info_UEnum_EParticleAllocationMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EParticleAllocationMode.InnerSingleton,
               &Z_Construct_UEnum_Niagara_EParticleAllocationMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EParticleAllocationMode.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_EScriptExecutionMode @ 149260680

UEnum * __cdecl Z_Construct_UEnum_Niagara_EScriptExecutionMode(void)

{
  if (Z_Registration_Info_UEnum_EScriptExecutionMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EScriptExecutionMode.InnerSingleton,
               &Z_Construct_UEnum_Niagara_EScriptExecutionMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EScriptExecutionMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties @ 1492606c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraEmitterScriptProperties.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraEmitterScriptProperties.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraEmitterScriptProperties.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraEmitterScriptProperties.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties @ 149260740

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraEventGeneratorProperties.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraEventGeneratorProperties.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraEventGeneratorProperties.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraEventGeneratorProperties.InnerSingleton;
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

// NewStructOps @ 1492607c0

void * __cdecl Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraEmitterHandle,&UE::CoreUObject::Private::Construct<FNiagaraEmitterHandle>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraEmitterHandle>,&UE::CoreUObject::Private::Destruct<FNiagaraEmitterHandle>,&UE::CoreUObject::Private::Copy<FNiagaraEmitterHandle>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties @ 149260800

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraEventReceiverProperties.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraEventReceiverProperties.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraEventReceiverProperties.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraEventReceiverProperties.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraEventScriptProperties @ 149260880

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraEventScriptProperties(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraEventScriptProperties.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraEventScriptProperties.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraEventScriptProperties.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraEventScriptProperties.InnerSingleton;
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

// Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData @ 149260900

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FVersionedNiagaraEmitterData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FVersionedNiagaraEmitterData.InnerSingleton,
               &Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FVersionedNiagaraEmitterData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FVersionedNiagaraEmitterData.InnerSingleton;
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

// NewStructOps @ 149260980

void * __cdecl Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraEventReceiverProperties,&UE::CoreUObject::Private::Construct<FNiagaraEventReceiverProperties>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraEventReceiverProperties>,&UE::CoreUObject::Private::Destruct<FNiagaraEventReceiverProperties>,&UE::CoreUObject::Private::Copy<FNiagaraEventReceiverProperties>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 149260bc0

void * __cdecl Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraOutlinerSystemData,&UE::CoreUObject::Private::Construct<FNiagaraOutlinerSystemData>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraOutlinerSystemData>,&UE::CoreUObject::Private::Destruct<FNiagaraOutlinerSystemData>,&UE::CoreUObject::Private::Copy<FNiagaraOutlinerSystemData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 149260c00

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraEventGeneratorProperties,&UE::CoreUObject::Private::Construct<FNiagaraEventGeneratorProperties>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraEventGeneratorProperties>,&UE::CoreUObject::Private::Destruct<FNiagaraEventGeneratorProperties>,&UE::CoreUObject::Private::Copy<FNiagaraEventGeneratorProperties>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bHasBegunPlay_SetBit @ 149260cd0

void __cdecl
Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_bHasBegunPlay_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x50) = 1;
  return;
}

// EScriptExecutionMode_StaticEnum @ 149260ce0

UEnum * __cdecl EScriptExecutionMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EScriptExecutionMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_EScriptExecutionMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_EScriptExecutionMode,(UObject *)pUVar1,
                       L"EScriptExecutionMode");
  }
  return Z_Registration_Info_UEnum_EScriptExecutionMode.OuterSingleton;
}

// NewStructOps @ 149260d20

void * __cdecl Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraOutlinerWorldData,&UE::CoreUObject::Private::Construct<FNiagaraOutlinerWorldData>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraOutlinerWorldData>,&UE::CoreUObject::Private::Destruct<FNiagaraOutlinerWorldData>,&UE::CoreUObject::Private::Copy<FNiagaraOutlinerWorldData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EParticleAllocationMode_StaticEnum @ 149260d60

UEnum * __cdecl EParticleAllocationMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EParticleAllocationMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_EParticleAllocationMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_EParticleAllocationMode,(UObject *)pUVar1,
                       L"EParticleAllocationMode");
  }
  return Z_Registration_Info_UEnum_EParticleAllocationMode.OuterSingleton;
}

// ENiagaraEmitterCalculateBoundMode_StaticEnum @ 149260da0

UEnum * __cdecl ENiagaraEmitterCalculateBoundMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraEmitterCalculateBoundMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraEmitterCalculateBoundMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraEmitterCalculateBoundMode,(UObject *)pUVar1
                       ,L"ENiagaraEmitterCalculateBoundMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraEmitterCalculateBoundMode.OuterSingleton;
}

// NewStructOps @ 149260de0

void * __cdecl Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraEmitterScriptProperties,&UE::CoreUObject::Private::Construct<FNiagaraEmitterScriptProperties>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraEmitterScriptProperties>,&UE::CoreUObject::Private::Destruct<FNiagaraEmitterScriptProperties>,&UE::CoreUObject::Private::Copy<FNiagaraEmitterScriptProperties>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 149260e20

void * __cdecl Z_Construct_UScriptStruct_FNiagaraOutlinerData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraOutlinerData,&UE::CoreUObject::Private::Construct<FNiagaraOutlinerData>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraOutlinerData>,&UE::CoreUObject::Private::Destruct<FNiagaraOutlinerData>,&UE::CoreUObject::Private::Copy<FNiagaraOutlinerData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bRandomSpawnNumber_SetBit @ 149260ef0

void __cdecl
Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_bRandomSpawnNumber_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x4c) = 1;
  return;
}

// NewProp_UpdateAttributeInitialValues_SetBit @ 149260f00

void __cdecl
Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::
NewProp_UpdateAttributeInitialValues_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x54) = 1;
  return;
}

// NewStructOps @ 149260f10

void * __cdecl Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraEventScriptProperties,&UE::CoreUObject::Private::Construct<FNiagaraEventScriptProperties>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraEventScriptProperties>,&UE::CoreUObject::Private::Destruct<FNiagaraEventScriptProperties>,&UE::CoreUObject::Private::Copy<FNiagaraEventScriptProperties>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 149260f90

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraDebuggerRequestConnection_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraDebuggerRequestConnection,&UE::CoreUObject::Private::Construct<FNiagaraDebuggerRequestConnection>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraDebuggerRequestConnection>,&UE::CoreUObject::Private::Destruct<FNiagaraDebuggerRequestConnection>,&UE::CoreUObject::Private::Copy<FNiagaraDebuggerRequestConnection>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UNiagaraEffectType @ 1492611d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraEffectType(void)

{
  if (Z_Registration_Info_UClass_UNiagaraEffectType.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraEffectType.OuterSingleton,
               &Z_Construct_UClass_UNiagaraEffectType_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraEffectType.OuterSingleton;
}

// Z_Construct_UClass_UNiagaraSignificanceHandler @ 149261210

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraSignificanceHandler(void)

{
  if (Z_Registration_Info_UClass_UNiagaraSignificanceHandler.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraSignificanceHandler.OuterSingleton,
               &Z_Construct_UClass_UNiagaraSignificanceHandler_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraSignificanceHandler.OuterSingleton;
}

// Z_Construct_UClass_UNiagaraSignificanceHandlerAge @ 149261250

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraSignificanceHandlerAge(void)

{
  if (Z_Registration_Info_UClass_UNiagaraSignificanceHandlerAge.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraSignificanceHandlerAge.OuterSingleton,
               &Z_Construct_UClass_UNiagaraSignificanceHandlerAge_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraSignificanceHandlerAge.OuterSingleton;
}

// Z_Construct_UClass_UNiagaraSignificanceHandlerDistance @ 149261290

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNiagaraSignificanceHandlerDistance(void)

{
  if (Z_Registration_Info_UClass_UNiagaraSignificanceHandlerDistance.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNiagaraSignificanceHandlerDistance.OuterSingleton,
               &Z_Construct_UClass_UNiagaraSignificanceHandlerDistance_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNiagaraSignificanceHandlerDistance.OuterSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraCullProxyMode @ 149261310

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraCullProxyMode(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraCullProxyMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraCullProxyMode.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraCullProxyMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraCullProxyMode.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraCullReaction @ 149261350

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraCullReaction(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraCullReaction.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraCullReaction.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraCullReaction_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraCullReaction.InnerSingleton;
}

// Z_Construct_UEnum_Niagara_ENiagaraScalabilityUpdateFrequency @ 149261390

UEnum * __cdecl Z_Construct_UEnum_Niagara_ENiagaraScalabilityUpdateFrequency(void)

{
  if (Z_Registration_Info_UEnum_ENiagaraScalabilityUpdateFrequency.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENiagaraScalabilityUpdateFrequency.InnerSingleton,
               &Z_Construct_UEnum_Niagara_ENiagaraScalabilityUpdateFrequency_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENiagaraScalabilityUpdateFrequency.InnerSingleton;
}

// Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverride @ 1492613d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverride(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraEmitterScalabilityOverride.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraEmitterScalabilityOverride.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverride_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraEmitterScalabilityOverride.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraEmitterScalabilityOverride.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverrides @ 149261450

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverrides(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraEmitterScalabilityOverrides.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraEmitterScalabilityOverrides.InnerSingleton
               ,&Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverrides_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraEmitterScalabilityOverrides.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraEmitterScalabilityOverrides.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings @ 1492614d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraEmitterScalabilitySettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraEmitterScalabilitySettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraEmitterScalabilitySettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraEmitterScalabilitySettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettingsArray @ 149261550

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettingsArray(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraEmitterScalabilitySettingsArray.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraEmitterScalabilitySettingsArray.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettingsArray_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraEmitterScalabilitySettingsArray.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraEmitterScalabilitySettingsArray.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraGlobalBudgetScaling @ 1492615d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraGlobalBudgetScaling(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraGlobalBudgetScaling.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraGlobalBudgetScaling.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraGlobalBudgetScaling_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraGlobalBudgetScaling.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraGlobalBudgetScaling.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraLinearRamp @ 149261650

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraLinearRamp(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraLinearRamp.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraLinearRamp.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraLinearRamp_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraLinearRamp.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraLinearRamp.InnerSingleton;
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

// `scalar_deleting_destructor' @ 1492616d0

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
UE::Core::Private::Function::TFunction_OwnedObject<FString_(__cdecl*)(FNiagaraSystemInstance_*),0,0>
::_scalar_deleting_destructor_
          (TFunction_OwnedObject<FString_(__cdecl*)(FNiagaraSystemInstance_*),0,0> *this,
          uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AVFString__PEAVFNiagaraSystemInstance___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings @ 149261710

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraSystemScalabilitySettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraSystemScalabilitySettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraSystemScalabilitySettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraSystemScalabilitySettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettingsArray @ 149261790

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettingsArray(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraSystemScalabilitySettingsArray.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraSystemScalabilitySettingsArray.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettingsArray_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraSystemScalabilitySettingsArray.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraSystemScalabilitySettingsArray.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraSystemVisibilityCullingSettings @ 149261810

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraSystemVisibilityCullingSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraSystemVisibilityCullingSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraSystemVisibilityCullingSettings.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraSystemVisibilityCullingSettings_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraSystemVisibilityCullingSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraSystemVisibilityCullingSettings.InnerSingleton;
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

// ENiagaraCullReaction_StaticEnum @ 149261890

UEnum * __cdecl ENiagaraCullReaction_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraCullReaction.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraCullReaction.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraCullReaction,(UObject *)pUVar1,
                       L"ENiagaraCullReaction");
  }
  return Z_Registration_Info_UEnum_ENiagaraCullReaction.OuterSingleton;
}

// NewStructOps @ 149261910

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraDebuggerAcceptConnection_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraDebuggerAcceptConnection,&UE::CoreUObject::Private::Construct<FNiagaraDebuggerAcceptConnection>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraDebuggerAcceptConnection>,&UE::CoreUObject::Private::Destruct<FNiagaraDebuggerAcceptConnection>,&UE::CoreUObject::Private::Copy<FNiagaraDebuggerAcceptConnection>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 149261b80

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(FString),0,0>::
_scalar_deleting_destructor_(TFunction_OwnedObject<void_(__cdecl*)(FString),0,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)&___7__TFunction_OwnedObject_P6AXVFString___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149261bc0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,NiagaraDebugLocal::<lambda_59>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,NiagaraDebugLocal::<lambda_59>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// ENiagaraScalabilityUpdateFrequency_StaticEnum @ 149261bf0

UEnum * __cdecl ENiagaraScalabilityUpdateFrequency_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraScalabilityUpdateFrequency.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraScalabilityUpdateFrequency.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraScalabilityUpdateFrequency,
                       (UObject *)pUVar1,L"ENiagaraScalabilityUpdateFrequency");
  }
  return Z_Registration_Info_UEnum_ENiagaraScalabilityUpdateFrequency.OuterSingleton;
}

// NewStructOps @ 149261c30

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraDetailsLevelScaleOverrides,&UE::CoreUObject::Private::Construct<FNiagaraDetailsLevelScaleOverrides>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraDetailsLevelScaleOverrides>,&UE::CoreUObject::Private::Destruct<FNiagaraDetailsLevelScaleOverrides>,&UE::CoreUObject::Private::Copy<FNiagaraDetailsLevelScaleOverrides>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// ENiagaraCullProxyMode_StaticEnum @ 149261cd0

UEnum * __cdecl ENiagaraCullProxyMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraCullProxyMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraCullProxyMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraCullProxyMode,(UObject *)pUVar1,
                       L"ENiagaraCullProxyMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraCullProxyMode.OuterSingleton;
}

// `scalar_deleting_destructor' @ 149261ea0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,NiagaraDebugLocal::<lambda_60>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,NiagaraDebugLocal::<lambda_60>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// NewStructOps @ 149261ed0

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraDebuggerConnectionClosed_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraDebuggerConnectionClosed,&UE::CoreUObject::Private::Construct<FNiagaraDebuggerConnectionClosed>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraDebuggerConnectionClosed>,&UE::CoreUObject::Private::Destruct<FNiagaraDebuggerConnectionClosed>,&UE::CoreUObject::Private::Copy<FNiagaraDebuggerConnectionClosed>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 149261f10

void * __cdecl Z_Construct_UScriptStruct_FNiagaraLinearRamp_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraLinearRamp,&UE::CoreUObject::Private::Construct<FNiagaraLinearRamp>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraLinearRamp>,&UE::CoreUObject::Private::Destruct<FNiagaraLinearRamp>,&UE::CoreUObject::Private::Copy<FNiagaraLinearRamp>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bDeprecated_SetBit @ 149262140

void __cdecl
Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_bDeprecated_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
  return;
}

// `scalar_deleting_destructor' @ 149262150

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,NiagaraDebugLocal::<lambda_61>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,NiagaraDebugLocal::<lambda_61>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// NewProp_bLocalSpace_SetBit @ 149262180

void __cdecl
Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_bLocalSpace_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// NewProp_bDeterminism_SetBit @ 149262190

void __cdecl
Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewProp_bDeterminism_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x31) = 1;
  return;
}

// NewProp_bRequiresPersistentIDs_SetBit @ 1492621a0

void __cdecl
Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::
NewProp_bRequiresPersistentIDs_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x78) = *(uint *)((longlong)param_1 + 0x78) | 1;
  return;
}

// NewProp_bRequiresWorld_SetBit @ 1492621b0

void __cdecl
Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand_Statics::
NewProp_bRequiresWorld_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewStructOps @ 1492621c0

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraDebuggerExecuteConsoleCommand,&UE::CoreUObject::Private::Construct<FNiagaraDebuggerExecuteConsoleCommand>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraDebuggerExecuteConsoleCommand>,&UE::CoreUObject::Private::Destruct<FNiagaraDebuggerExecuteConsoleCommand>,&UE::CoreUObject::Private::Copy<FNiagaraDebuggerExecuteConsoleCommand>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bCullByGlobalBudget_SetBit @ 1492623d0

void __cdecl
Z_Construct_UScriptStruct_FNiagaraGlobalBudgetScaling_Statics::NewProp_bCullByGlobalBudget_SetBit
          (void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 1;
  return;
}

// NewProp_bScaleMaxDistanceByGlobalBudgetUse_SetBit @ 149262400

void __cdecl
Z_Construct_UScriptStruct_FNiagaraGlobalBudgetScaling_Statics::
NewProp_bScaleMaxDistanceByGlobalBudgetUse_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 2;
  return;
}

// NewProp_bScaleMaxInstanceCountByGlobalBudgetUse_SetBit @ 149262410

void __cdecl
Z_Construct_UScriptStruct_FNiagaraGlobalBudgetScaling_Statics::
NewProp_bScaleMaxInstanceCountByGlobalBudgetUse_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 4;
  return;
}

// NewProp_bScaleSystemInstanceCountByGlobalBudgetUse_SetBit @ 149262420

void __cdecl
Z_Construct_UScriptStruct_FNiagaraGlobalBudgetScaling_Statics::
NewProp_bScaleSystemInstanceCountByGlobalBudgetUse_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 8;
  return;
}

// `scalar_deleting_destructor' @ 149262470

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,NiagaraDebugLocal::<lambda_62>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,NiagaraDebugLocal::<lambda_62>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// NewStructOps @ 1492624a0

void * __cdecl Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x3c8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FVersionedNiagaraEmitterData,&UE::CoreUObject::Private::Construct<FVersionedNiagaraEmitterData>,&UE::CoreUObject::Private::ConstructForTests<FVersionedNiagaraEmitterData>,&UE::CoreUObject::Private::Destruct<FVersionedNiagaraEmitterData>,&UE::CoreUObject::Private::Copy<FVersionedNiagaraEmitterData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1492624e0

void * __cdecl Z_Construct_UScriptStruct_FNiagaraGlobalBudgetScaling_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraGlobalBudgetScaling,&UE::CoreUObject::Private::Construct<FNiagaraGlobalBudgetScaling>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraGlobalBudgetScaling>,&UE::CoreUObject::Private::Destruct<FNiagaraGlobalBudgetScaling>,&UE::CoreUObject::Private::Copy<FNiagaraGlobalBudgetScaling>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1492628c0

void * __cdecl Z_Construct_UScriptStruct_FNiagaraDebuggerOutlinerUpdate_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraDebuggerOutlinerUpdate,&UE::CoreUObject::Private::Construct<FNiagaraDebuggerOutlinerUpdate>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraDebuggerOutlinerUpdate>,&UE::CoreUObject::Private::Destruct<FNiagaraDebuggerOutlinerUpdate>,&UE::CoreUObject::Private::Copy<FNiagaraDebuggerOutlinerUpdate>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bCullWhenNotRendered_SetBit @ 149262a70

void __cdecl
Z_Construct_UScriptStruct_FNiagaraSystemVisibilityCullingSettings_Statics::
NewProp_bCullWhenNotRendered_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 1;
  return;
}

// NewProp_bCullByViewFrustum_SetBit @ 149262a80

void __cdecl
Z_Construct_UScriptStruct_FNiagaraSystemVisibilityCullingSettings_Statics::
NewProp_bCullByViewFrustum_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 2;
  return;
}

// NewProp_bAllowPreCullingByViewFrustum_SetBit @ 149262b20

void __cdecl
Z_Construct_UScriptStruct_FNiagaraSystemVisibilityCullingSettings_Statics::
NewProp_bAllowPreCullingByViewFrustum_SetBit(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 | 4;
  return;
}

// NewStructOps @ 149262b70

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraSystemVisibilityCullingSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraSystemVisibilityCullingSettings,&UE::CoreUObject::Private::Construct<FNiagaraSystemVisibilityCullingSettings>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraSystemVisibilityCullingSettings>,&UE::CoreUObject::Private::Destruct<FNiagaraSystemVisibilityCullingSettings>,&UE::CoreUObject::Private::Copy<FNiagaraSystemVisibilityCullingSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// ENiagaraDebugPlaybackMode_StaticEnum @ 149262bb0

UEnum * __cdecl ENiagaraDebugPlaybackMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraDebugPlaybackMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraDebugPlaybackMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDebugPlaybackMode,(UObject *)pUVar1,
                       L"ENiagaraDebugPlaybackMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraDebugPlaybackMode.OuterSingleton;
}

// ENiagaraDebugHudHAlign_StaticEnum @ 149262bf0

UEnum * __cdecl ENiagaraDebugHudHAlign_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraDebugHudHAlign.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraDebugHudHAlign.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDebugHudHAlign,(UObject *)pUVar1,
                       L"ENiagaraDebugHudHAlign");
  }
  return Z_Registration_Info_UEnum_ENiagaraDebugHudHAlign.OuterSingleton;
}

// NewProp_bVersioningEnabled_SetBit @ 149262c30

void __cdecl
Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bVersioningEnabled_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x50) = 1;
  return;
}

// ENiagaraDebugHudVAlign_StaticEnum @ 149262c40

UEnum * __cdecl ENiagaraDebugHudVAlign_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraDebugHudVAlign.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraDebugHudVAlign.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDebugHudVAlign,(UObject *)pUVar1,
                       L"ENiagaraDebugHudVAlign");
  }
  return Z_Registration_Info_UEnum_ENiagaraDebugHudVAlign.OuterSingleton;
}

// NewProp_bCullByDistance_SetBit @ 149262c80

void __cdecl
Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewProp_bCullByDistance_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x30) = *(uint *)((longlong)param_1 + 0x30) | 1;
  return;
}

// NewProp_bCullMaxInstanceCount_SetBit @ 149262c90

void __cdecl
Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::
NewProp_bCullMaxInstanceCount_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x30) = *(uint *)((longlong)param_1 + 0x30) | 2;
  return;
}

// NewProp_bCullPerSystemMaxInstanceCount_SetBit @ 149262ca0

void __cdecl
Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::
NewProp_bCullPerSystemMaxInstanceCount_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x30) = *(uint *)((longlong)param_1 + 0x30) | 4;
  return;
}

// NewProp_bCullByMaxTimeWithoutRender_SetBit @ 149262cb0

void __cdecl
Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::
NewProp_bCullByMaxTimeWithoutRender_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x38) = *(uint *)((longlong)param_1 + 0x38) | 1;
  return;
}

// ENiagaraDebugHudFont_StaticEnum @ 149262cc0

UEnum * __cdecl ENiagaraDebugHudFont_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraDebugHudFont.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraDebugHudFont.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDebugHudFont,(UObject *)pUVar1,
                       L"ENiagaraDebugHudFont");
  }
  return Z_Registration_Info_UEnum_ENiagaraDebugHudFont.OuterSingleton;
}

// NewStructOps @ 149262d00

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x98;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraSystemScalabilitySettings,&UE::CoreUObject::Private::Construct<FNiagaraSystemScalabilitySettings>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraSystemScalabilitySettings>,&UE::CoreUObject::Private::Destruct<FNiagaraSystemScalabilitySettings>,&UE::CoreUObject::Private::Copy<FNiagaraSystemScalabilitySettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// ENiagaraDebugHudVerbosity_StaticEnum @ 149262d40

UEnum * __cdecl ENiagaraDebugHudVerbosity_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraDebugHudVerbosity.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraDebugHudVerbosity.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDebugHudVerbosity,(UObject *)pUVar1,
                       L"ENiagaraDebugHudVerbosity");
  }
  return Z_Registration_Info_UEnum_ENiagaraDebugHudVerbosity.OuterSingleton;
}

// NewStructOps @ 149262d80

void * __cdecl Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraDebugHudTextOptions,&UE::CoreUObject::Private::Construct<FNiagaraDebugHudTextOptions>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraDebugHudTextOptions>,&UE::CoreUObject::Private::Destruct<FNiagaraDebugHudTextOptions>,&UE::CoreUObject::Private::Copy<FNiagaraDebugHudTextOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 149262e50

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettingsArray_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraSystemScalabilitySettingsArray,&UE::CoreUObject::Private::Construct<FNiagaraSystemScalabilitySettingsArray>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraSystemScalabilitySettingsArray>,&UE::CoreUObject::Private::Destruct<FNiagaraSystemScalabilitySettingsArray>,&UE::CoreUObject::Private::Copy<FNiagaraSystemScalabilitySettingsArray>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bEnabled_SetBit @ 149262ee0

void __cdecl
Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable_Statics::NewProp_bEnabled_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 149262f40

void * __cdecl Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraDebugHUDVariable,&UE::CoreUObject::Private::Construct<FNiagaraDebugHUDVariable>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraDebugHUDVariable>,&UE::CoreUObject::Private::Destruct<FNiagaraDebugHUDVariable>,&UE::CoreUObject::Private::Copy<FNiagaraDebugHUDVariable>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bOverrideDistanceSettings_SetBit @ 149263080

void __cdecl
Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::
NewProp_bOverrideDistanceSettings_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x98) = *(uint *)((longlong)param_1 + 0x98) | 1;
  return;
}

// NewProp_bOverrideInstanceCountSettings_SetBit @ 149263090

void __cdecl
Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::
NewProp_bOverrideInstanceCountSettings_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x98) = *(uint *)((longlong)param_1 + 0x98) | 2;
  return;
}

// NewProp_bOverridePerSystemInstanceCountSettings_SetBit @ 1492630a0

void __cdecl
Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::
NewProp_bOverridePerSystemInstanceCountSettings_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x98) = *(uint *)((longlong)param_1 + 0x98) | 4;
  return;
}

// NewProp_bOverrideVisibilitySettings_SetBit @ 1492630b0

void __cdecl
Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::
NewProp_bOverrideVisibilitySettings_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x98) = *(uint *)((longlong)param_1 + 0x98) | 8;
  return;
}

// NewProp_bOverrideGlobalBudgetScalingSettings_SetBit @ 1492630c0

void __cdecl
Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::
NewProp_bOverrideGlobalBudgetScalingSettings_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x98) = *(uint *)((longlong)param_1 + 0x98) | 0x10;
  return;
}

// NewProp_bOverrideCullProxySettings_SetBit @ 1492630d0

void __cdecl
Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::
NewProp_bOverrideCullProxySettings_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x98) = *(uint *)((longlong)param_1 + 0x98) | 0x20;
  return;
}

// NewStructOps @ 1492630e0

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraSystemScalabilityOverride,&UE::CoreUObject::Private::Construct<FNiagaraSystemScalabilityOverride>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraSystemScalabilityOverride>,&UE::CoreUObject::Private::Destruct<FNiagaraSystemScalabilityOverride>,&UE::CoreUObject::Private::Copy<FNiagaraSystemScalabilityOverride>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// ENiagaraDebugHUDOverviewMode_StaticEnum @ 149263120

UEnum * __cdecl ENiagaraDebugHUDOverviewMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraDebugHUDOverviewMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraDebugHUDOverviewMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDebugHUDOverviewMode,(UObject *)pUVar1,
                       L"ENiagaraDebugHUDOverviewMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraDebugHUDOverviewMode.OuterSingleton;
}

// ENiagaraDebugHUDPerfGraphMode_StaticEnum @ 149263220

UEnum * __cdecl ENiagaraDebugHUDPerfGraphMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraDebugHUDPerfGraphMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraDebugHUDPerfGraphMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDebugHUDPerfGraphMode,(UObject *)pUVar1,
                       L"ENiagaraDebugHUDPerfGraphMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraDebugHUDPerfGraphMode.OuterSingleton;
}

// ENiagaraDebugHUDPerfSampleMode_StaticEnum @ 149263350

UEnum * __cdecl ENiagaraDebugHUDPerfSampleMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraDebugHUDPerfSampleMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraDebugHUDPerfSampleMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDebugHUDPerfSampleMode,(UObject *)pUVar1,
                       L"ENiagaraDebugHUDPerfSampleMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraDebugHUDPerfSampleMode.OuterSingleton;
}

// ENiagaraDebugHUDPerfUnits_StaticEnum @ 149263390

UEnum * __cdecl ENiagaraDebugHUDPerfUnits_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraDebugHUDPerfUnits.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraDebugHUDPerfUnits.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDebugHUDPerfUnits,(UObject *)pUVar1,
                       L"ENiagaraDebugHUDPerfUnits");
  }
  return Z_Registration_Info_UEnum_ENiagaraDebugHUDPerfUnits.OuterSingleton;
}

// ENiagaraDebugHUDDOverviewSort_StaticEnum @ 1492633d0

UEnum * __cdecl ENiagaraDebugHUDDOverviewSort_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraDebugHUDDOverviewSort.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraDebugHUDDOverviewSort.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDebugHUDDOverviewSort,(UObject *)pUVar1,
                       L"ENiagaraDebugHUDDOverviewSort");
  }
  return Z_Registration_Info_UEnum_ENiagaraDebugHUDDOverviewSort.OuterSingleton;
}

// NewProp_bScaleSpawnCount_SetBit @ 149263410

void __cdecl
Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings_Statics::
NewProp_bScaleSpawnCount_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x30) = *(uint *)((longlong)param_1 + 0x30) | 1;
  return;
}

// NewStructOps @ 149263420

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraEmitterScalabilitySettings,&UE::CoreUObject::Private::Construct<FNiagaraEmitterScalabilitySettings>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraEmitterScalabilitySettings>,&UE::CoreUObject::Private::Destruct<FNiagaraEmitterScalabilitySettings>,&UE::CoreUObject::Private::Copy<FNiagaraEmitterScalabilitySettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bHudEnabled_SetBit @ 1492634e0

void __cdecl
Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bHudEnabled_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bHudRenderingEnabled_SetBit @ 149263510

void __cdecl
Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bHudRenderingEnabled_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// NewProp_bValidationEnabled_SetBit @ 149263560

void __cdecl
Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bValidationEnabled_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 2) = 1;
  return;
}

// NewProp_bOverviewEnabled_SetBit @ 149263590

void __cdecl
Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bOverviewEnabled_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 3) = 1;
  return;
}

// NewProp_bIncludeCascade_SetBit @ 149263620

void __cdecl
Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bIncludeCascade_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// NewProp_bShowRegisteredComponents_SetBit @ 149263630

void __cdecl
Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::
NewProp_bShowRegisteredComponents_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd) = 1;
  return;
}

// NewProp_bOverviewShowFilteredSystemOnly_SetBit @ 149263640

void __cdecl
Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::
NewProp_bOverviewShowFilteredSystemOnly_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xe) = 1;
  return;
}

// NewProp_bShowGlobalBudgetInfo_SetBit @ 149263650

void __cdecl
Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowGlobalBudgetInfo_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xf) = 1;
  return;
}

// NewProp_bSystemFilterEnabled_SetBit @ 149263660

void __cdecl
Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bSystemFilterEnabled_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bEmitterFilterEnabled_SetBit @ 149263670

void __cdecl
Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bEmitterFilterEnabled_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_bActorFilterEnabled_SetBit @ 149263680

void __cdecl
Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bActorFilterEnabled_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x40) = 1;
  return;
}

// NewProp_bComponentFilterEnabled_SetBit @ 1492637c0

void __cdecl
Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::
NewProp_bComponentFilterEnabled_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x58) = 1;
  return;
}

// NewProp_bValidateSystemSimulationDataBuffers_SetBit @ 1492637d0

void __cdecl
Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::
NewProp_bValidateSystemSimulationDataBuffers_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x70) = 1;
  return;
}

// NewProp_bValidateParticleDataBuffers_SetBit @ 1492637e0

void __cdecl
Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::
NewProp_bValidateParticleDataBuffers_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x71) = 1;
  return;
}

// NewProp_bValidationLogErrors_SetBit @ 1492637f0

void __cdecl
Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bValidationLogErrors_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x72) = 1;
  return;
}

// NewProp_bSystemShowActiveOnlyInWorld_SetBit @ 149263800

void __cdecl
Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::
NewProp_bSystemShowActiveOnlyInWorld_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x98) = 1;
  return;
}

// NewProp_bShowParticleVariables_SetBit @ 149263810

void __cdecl
Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::
NewProp_bShowParticleVariables_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x99) = 1;
  return;
}

// NewStructOps @ 149263820

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettingsArray_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraEmitterScalabilitySettingsArray,&UE::CoreUObject::Private::Construct<FNiagaraEmitterScalabilitySettingsArray>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraEmitterScalabilitySettingsArray>,&UE::CoreUObject::Private::Destruct<FNiagaraEmitterScalabilitySettingsArray>,&UE::CoreUObject::Private::Copy<FNiagaraEmitterScalabilitySettingsArray>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bEnableGpuParticleReadback_SetBit @ 149263860

void __cdecl
Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::
NewProp_bEnableGpuParticleReadback_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb0) = 1;
  return;
}

// NewProp_bShowParticleIndex_SetBit @ 149263870

void __cdecl
Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowParticleIndex_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb1) = 1;
  return;
}

// NewProp_bShowParticlesVariablesWithSystem_SetBit @ 149263880

void __cdecl
Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::
NewProp_bShowParticlesVariablesWithSystem_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb2) = 1;
  return;
}

// NewProp_bShowParticleVariablesVertical_SetBit @ 149263890

void __cdecl
Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::
NewProp_bShowParticleVariablesVertical_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb3) = 1;
  return;
}

// NewProp_bUseMaxParticlesToDisplay_SetBit @ 1492638a0

void __cdecl
Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::
NewProp_bUseMaxParticlesToDisplay_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb4) = 1;
  return;
}

// NewProp_bUseParticleDisplayClip_SetBit @ 1492638b0

void __cdecl
Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::
NewProp_bUseParticleDisplayClip_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xbc) = 1;
  return;
}

// NewProp_bUseParticleDisplayCenterRadius_SetBit @ 1492638c0

void __cdecl
Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::
NewProp_bUseParticleDisplayCenterRadius_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd0) = 1;
  return;
}

// NewProp_bShowPerfColumGameThreadOnly_SetBit @ 1492638d0

void __cdecl
Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::
NewProp_bShowPerfColumGameThreadOnly_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xe4) = 1;
  return;
}

// NewProp_bUsePerfGraphTimeRange_SetBit @ 1492638e0

void __cdecl
Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::
NewProp_bUsePerfGraphTimeRange_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xf0) = 1;
  return;
}

// NewProp_bDrawBoundsEnabled_SetBit @ 1492638f0

void __cdecl
Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bDrawBoundsEnabled_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x160) = 1;
  return;
}

// NewProp_bDrawBoundsWireframe_SetBit @ 149263900

void __cdecl
Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bDrawBoundsWireframe_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x161) = 1;
  return;
}

// NewProp_bPlaybackRateEnabled_SetBit @ 149263910

void __cdecl
Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bPlaybackRateEnabled_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x231) = 1;
  return;
}

// NewProp_bOverrideSpawnCountScale_SetBit @ 149263920

void __cdecl
Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverride_Statics::
NewProp_bOverrideSpawnCountScale_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x38) = *(uint *)((longlong)param_1 + 0x38) | 1;
  return;
}

// NewProp_bLoopTimeEnabled_SetBit @ 149263930

void __cdecl
Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bLoopTimeEnabled_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x238) = 1;
  return;
}

// NewStructOps @ 149263940

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverride_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraEmitterScalabilityOverride,&UE::CoreUObject::Private::Construct<FNiagaraEmitterScalabilityOverride>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraEmitterScalabilityOverride>,&UE::CoreUObject::Private::Destruct<FNiagaraEmitterScalabilityOverride>,&UE::CoreUObject::Private::Copy<FNiagaraEmitterScalabilityOverride>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 149263980

void * __cdecl Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x240;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraDebugHUDSettingsData,&UE::CoreUObject::Private::Construct<FNiagaraDebugHUDSettingsData>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraDebugHUDSettingsData>,&UE::CoreUObject::Private::Destruct<FNiagaraDebugHUDSettingsData>,&UE::CoreUObject::Private::Copy<FNiagaraDebugHUDSettingsData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 149263b30

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverrides_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraEmitterScalabilityOverrides,&UE::CoreUObject::Private::Construct<FNiagaraEmitterScalabilityOverrides>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraEmitterScalabilityOverrides>,&UE::CoreUObject::Private::Destruct<FNiagaraEmitterScalabilityOverrides>,&UE::CoreUObject::Private::Copy<FNiagaraEmitterScalabilityOverrides>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bAllowCullingForLocalPlayers_SetBit @ 149263f10

void __cdecl
Z_Construct_UClass_UNiagaraEffectType_Statics::NewProp_bAllowCullingForLocalPlayers_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewStructOps @ 149263f20

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraRequestSimpleClientInfoMessage_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraRequestSimpleClientInfoMessage,&UE::CoreUObject::Private::Construct<FNiagaraRequestSimpleClientInfoMessage>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraRequestSimpleClientInfoMessage>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bTriggerCapture_SetBit @ 149264050

void __cdecl
Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::NewProp_bTriggerCapture_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bGatherPerfData_SetBit @ 149264060

void __cdecl
Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::NewProp_bGatherPerfData_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewStructOps @ 149264070

void * __cdecl Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraOutlinerCaptureSettings,&UE::CoreUObject::Private::Construct<FNiagaraOutlinerCaptureSettings>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraOutlinerCaptureSettings>,&UE::CoreUObject::Private::Destruct<FNiagaraOutlinerCaptureSettings>,&UE::CoreUObject::Private::Copy<FNiagaraOutlinerCaptureSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1492642a0

void * __cdecl Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraSimpleClientInfo,&UE::CoreUObject::Private::Construct<FNiagaraSimpleClientInfo>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraSimpleClientInfo>,&UE::CoreUObject::Private::Destruct<FNiagaraSimpleClientInfo>,&UE::CoreUObject::Private::Copy<FNiagaraSimpleClientInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1492642e0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_63>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_63>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// NewStructOps @ 149264400

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureRequest_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraSystemSimCacheCaptureRequest,&UE::CoreUObject::Private::Construct<FNiagaraSystemSimCacheCaptureRequest>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraSystemSimCacheCaptureRequest>,&UE::CoreUObject::Private::Destruct<FNiagaraSystemSimCacheCaptureRequest>,&UE::CoreUObject::Private::Copy<FNiagaraSystemSimCacheCaptureRequest>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 149264440

void * __cdecl
Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureReply_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNiagaraSystemSimCacheCaptureReply,&UE::CoreUObject::Private::Construct<FNiagaraSystemSimCacheCaptureReply>,&UE::CoreUObject::Private::ConstructForTests<FNiagaraSystemSimCacheCaptureReply>,&UE::CoreUObject::Private::Destruct<FNiagaraSystemSimCacheCaptureReply>,&UE::CoreUObject::Private::Copy<FNiagaraSystemSimCacheCaptureReply>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// <lambda_invoker_cdecl> @ 149264480

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

FString * __cdecl
NiagaraDebugLocal::<lambda_24>::<lambda_invoker_cdecl>
          (FString *__return_storage_ptr__,FNiagaraSystemInstance *param_1)

{
  FNiagaraSystemInstance::GetLODDistance(param_1);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%6.2f");
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 1492644c0

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

FString * __cdecl
NiagaraDebugLocal::<lambda_25>::<lambda_invoker_cdecl>
          (FString *__return_storage_ptr__,FNiagaraSystemInstance *param_1)

{
  FNiagaraSystemInstance::GetLODDistance(param_1);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%6.2f");
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 149264520

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

FString * __cdecl
NiagaraDebugLocal::<lambda_26>::<lambda_invoker_cdecl>
          (FString *__return_storage_ptr__,FNiagaraSystemInstance *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%d");
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 149264550

void __cdecl NiagaraDebugLocal::<lambda_27>::<lambda_invoker_cdecl>(FString *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  wchar_t *_Str;
  
  if ((param_1->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar2 = _wtoi(_Str);
  Settings.bHudEnabled = iVar2 != 0;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// <lambda_invoker_cdecl> @ 1492645a0

void __cdecl NiagaraDebugLocal::<lambda_28>::<lambda_invoker_cdecl>(FString *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  wchar_t *_Str;
  
  if ((param_1->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar2 = _wtoi(_Str);
  Settings.bValidationEnabled = iVar2 != 0;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// <lambda_invoker_cdecl> @ 1492645f0

void __cdecl NiagaraDebugLocal::<lambda_29>::<lambda_invoker_cdecl>(FString *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  wchar_t *_Str;
  
  if ((param_1->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar2 = _wtoi(_Str);
  Settings.bValidateSystemSimulationDataBuffers = iVar2 != 0;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// <lambda_invoker_cdecl> @ 149264640

void __cdecl NiagaraDebugLocal::<lambda_30>::<lambda_invoker_cdecl>(FString *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  wchar_t *_Str;
  
  if ((param_1->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar2 = _wtoi(_Str);
  Settings.bValidateParticleDataBuffers = iVar2 != 0;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// <lambda_invoker_cdecl> @ 149264690

void __cdecl NiagaraDebugLocal::<lambda_31>::<lambda_invoker_cdecl>(FString *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  wchar_t *_Str;
  
  if ((param_1->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar2 = _wtoi(_Str);
  Settings.bValidationLogErrors = iVar2 != 0;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// <lambda_invoker_cdecl> @ 1492646e0

void __cdecl NiagaraDebugLocal::<lambda_32>::<lambda_invoker_cdecl>(FString *param_1)

{
  FScriptContainerElement *pFVar1;
  wchar_t *_Str;
  
  if ((param_1->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  Settings.ValidationAttributeDisplayTruncate = _wtoi(_Str);
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// <lambda_invoker_cdecl> @ 149264730

void __cdecl NiagaraDebugLocal::<lambda_33>::<lambda_invoker_cdecl>(FString *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  wchar_t *_Str;
  
  if ((param_1->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar2 = _wtoi(_Str);
  Settings.bOverviewEnabled = iVar2 != 0;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// <lambda_invoker_cdecl> @ 149264780

void __cdecl NiagaraDebugLocal::<lambda_34>::<lambda_invoker_cdecl>(FString *param_1)

{
  FScriptContainerElement *pFVar1;
  wchar_t *_Str;
  
  if ((param_1->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  Settings.OverviewMode = _wtoi(_Str);
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// <lambda_invoker_cdecl> @ 1492647d0

void __cdecl NiagaraDebugLocal::<lambda_35>::<lambda_invoker_cdecl>(FString *param_1)

{
  FScriptContainerElement *pFVar1;
  wchar_t *_Str;
  int iVar2;
  wchar_t *_Str_00;
  undefined8 uVar3;
  undefined8 uVar4;
  TArray<FString,TSizedDefaultAllocator<32>_> local_38 [3];
  
  uVar4 = Settings.OverviewLocation.field0_0x0._s_0.Y;
  uVar3 = Settings.OverviewLocation.field0_0x0._s_0.X;
  local_38[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38[0].ArrayNum = 0;
  local_38[0].ArrayMax = 0;
  ::FString::ParseIntoArray(param_1,local_38,L",",true);
  _Str_00 = L"";
  if (0 < local_38[0].ArrayNum) {
    if (*(int *)(local_38[0].AllocatorInstance.Data + 8) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)local_38[0].AllocatorInstance.Data;
    }
    uVar3 = _wtof(_Str);
  }
  iVar2 = local_38[0].ArrayNum;
  if (1 < local_38[0].ArrayNum) {
    if (*(int *)(local_38[0].AllocatorInstance.Data + 0x18) != 0) {
      _Str_00 = *(wchar_t **)(local_38[0].AllocatorInstance.Data + 0x10);
    }
    uVar4 = _wtof(_Str_00);
    iVar2 = local_38[0].ArrayNum;
  }
  DestructItems<FString,int>((FString *)local_38[0].AllocatorInstance.Data,iVar2);
  if (local_38[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].AllocatorInstance.Data);
  }
  Settings.OverviewLocation.field0_0x0._s_0.X = (double)(float)(double)uVar3;
  Settings.OverviewLocation.field0_0x0._s_0.Y = (double)(float)(double)uVar4;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// <lambda_invoker_cdecl> @ 1492648e0

void __cdecl NiagaraDebugLocal::<lambda_36>::<lambda_invoker_cdecl>(FString *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  ::FString::AssignRange
            (&Settings.SystemFilter,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar3);
  Settings.bSystemFilterEnabled = 1 < (param_1->Data).ArrayNum;
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// <lambda_invoker_cdecl> @ 149264930

void __cdecl NiagaraDebugLocal::<lambda_37>::<lambda_invoker_cdecl>(FString *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  int iVar4;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  ::FString::AssignRange
            (&Settings.EmitterFilter,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar4);
  Settings.bEmitterFilterEnabled = 1 < (param_1->Data).ArrayNum;
  bVar3 = 1 < (int)GCachedSystemVariables._72_4_;
  if (!bVar3) {
    TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables,0>,FDefaultSetAllocator>
                      *)&GCachedSystemVariables);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&GCachedSystemVariables,0,GCachedSystemVariables._8_4_);
  GCachedSystemVariables._8_4_ = 0;
  if (GCachedSystemVariables._12_4_ != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,0,(ForAnyElementType *)&GCachedSystemVariables,0,
               (int *)&GCachedSystemVariables.field_0xc);
  }
  GCachedSystemVariables._48_4_ = 0xffffffff;
  GCachedSystemVariables._52_4_ = 0;
  GCachedSystemVariables._40_4_ = 0;
  if (0x80 < (uint)GCachedSystemVariables._44_4_) {
    GCachedSystemVariables._44_4_ = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&GCachedSystemVariables.field_0x10,0);
  }
  if (bVar3) {
    GCachedSystemVariables._72_4_ = 1;
    TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables,0>,FDefaultSetAllocator>
              *)&GCachedSystemVariables);
  }
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// <lambda_invoker_cdecl> @ 149264a50

void __cdecl NiagaraDebugLocal::<lambda_38>::<lambda_invoker_cdecl>(FString *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  ::FString::AssignRange
            (&Settings.ActorFilter,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar3);
  Settings.bActorFilterEnabled = 1 < (param_1->Data).ArrayNum;
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// <lambda_invoker_cdecl> @ 149264aa0

void __cdecl NiagaraDebugLocal::<lambda_39>::<lambda_invoker_cdecl>(FString *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  ::FString::AssignRange
            (&Settings.ComponentFilter,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar3);
  Settings.bComponentFilterEnabled = 1 < (param_1->Data).ArrayNum;
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// <lambda_invoker_cdecl> @ 149264af0

void __cdecl NiagaraDebugLocal::<lambda_40>::<lambda_invoker_cdecl>(FString *param_1)

{
  FScriptContainerElement *pFVar1;
  ENiagaraDebugHudFont EVar2;
  ENiagaraDebugHudFont EVar3;
  wchar_t *_Str;
  
  if ((param_1->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  EVar2 = _wtoi(_Str);
  EVar3 = Normal;
  if ((int)EVar2 < 1) {
    EVar3 = EVar2;
  }
  Settings.OverviewFont = Small;
  if (0 < (int)EVar3) {
    Settings.OverviewFont = EVar3;
  }
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// <lambda_invoker_cdecl> @ 149264b50

void __cdecl NiagaraDebugLocal::<lambda_41>::<lambda_invoker_cdecl>(FString *param_1)

{
  FScriptContainerElement *pFVar1;
  ENiagaraDebugHudFont EVar2;
  ENiagaraDebugHudFont EVar3;
  wchar_t *_Str;
  
  if ((param_1->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  EVar2 = _wtoi(_Str);
  EVar3 = Normal;
  if ((int)EVar2 < 1) {
    EVar3 = EVar2;
  }
  Settings.SystemTextOptions.Font = Small;
  if (0 < (int)EVar3) {
    Settings.SystemTextOptions.Font = EVar3;
  }
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// <lambda_invoker_cdecl> @ 149264bb0

void __cdecl NiagaraDebugLocal::<lambda_42>::<lambda_invoker_cdecl>(FString *param_1)

{
  FScriptContainerElement *pFVar1;
  ENiagaraDebugHudFont EVar2;
  ENiagaraDebugHudFont EVar3;
  wchar_t *_Str;
  
  if ((param_1->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  EVar2 = _wtoi(_Str);
  EVar3 = Normal;
  if ((int)EVar2 < 1) {
    EVar3 = EVar2;
  }
  Settings.ParticleTextOptions.Font = Small;
  if (0 < (int)EVar3) {
    Settings.ParticleTextOptions.Font = EVar3;
  }
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// <lambda_invoker_cdecl> @ 149264c10

void __cdecl NiagaraDebugLocal::<lambda_43>::<lambda_invoker_cdecl>(FString *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  wchar_t *_Str;
  
  if ((param_1->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar2 = _wtoi(_Str);
  Settings.bShowGlobalBudgetInfo = iVar2 != 0;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// <lambda_invoker_cdecl> @ 149264c60

void __cdecl NiagaraDebugLocal::<lambda_44>::<lambda_invoker_cdecl>(FString *param_1)

{
  FScriptContainerElement *pFVar1;
  wchar_t *_Str;
  
  if ((param_1->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  Settings.PerfGraphMode = _wtoi(_Str);
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// <lambda_invoker_cdecl> @ 149264cb0

void __cdecl NiagaraDebugLocal::<lambda_45>::<lambda_invoker_cdecl>(FString *param_1)

{
  FScriptContainerElement *pFVar1;
  wchar_t *_Str;
  double dVar2;
  
  if ((param_1->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  dVar2 = _wtof(_Str);
  Settings.PerfGraphTimeRange = (float)dVar2;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// <lambda_invoker_cdecl> @ 149264d00

void __cdecl NiagaraDebugLocal::<lambda_46>::<lambda_invoker_cdecl>(FString *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  wchar_t *_Str;
  
  if ((param_1->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar2 = _wtoi(_Str);
  Settings.bDrawBoundsEnabled = iVar2 != 0;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// <lambda_invoker_cdecl> @ 149264d50

void __cdecl NiagaraDebugLocal::<lambda_47>::<lambda_invoker_cdecl>(FString *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  wchar_t *_Str;
  
  if ((param_1->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar2 = _wtoi(_Str);
  Settings.bDrawBoundsWireframe = iVar2 != 0;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// <lambda_invoker_cdecl> @ 149264da0

void __cdecl NiagaraDebugLocal::<lambda_48>::<lambda_invoker_cdecl>(FString *param_1)

{
  FScriptContainerElement *pFVar1;
  wchar_t *_Str;
  double dVar2;
  
  if ((param_1->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  dVar2 = _wtof(_Str);
  Settings.DrawBoundsAlpha = (float)dVar2;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// <lambda_invoker_cdecl> @ 149264df0

void __cdecl NiagaraDebugLocal::<lambda_49>::<lambda_invoker_cdecl>(FString *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  wchar_t *_Str;
  
  if ((param_1->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar2 = _wtoi(_Str);
  Settings.bSystemShowActiveOnlyInWorld = iVar2 != 0;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// <lambda_invoker_cdecl> @ 149264e40

void __cdecl NiagaraDebugLocal::<lambda_50>::<lambda_invoker_cdecl>(FString *param_1)

{
  FScriptContainerElement *pFVar1;
  ENiagaraDebugHudVerbosity EVar2;
  ENiagaraDebugHudVerbosity EVar3;
  wchar_t *_Str;
  
  if ((param_1->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  EVar2 = _wtoi(_Str);
  EVar3 = Verbose;
  if ((int)EVar2 < 2) {
    EVar3 = EVar2;
  }
  Settings.SystemDebugVerbosity = None;
  if (0 < (int)EVar3) {
    Settings.SystemDebugVerbosity = EVar3;
  }
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// <lambda_invoker_cdecl> @ 149264ea0

void __cdecl NiagaraDebugLocal::<lambda_51>::<lambda_invoker_cdecl>(FString *param_1)

{
  FScriptContainerElement *pFVar1;
  ENiagaraDebugHudVerbosity EVar2;
  ENiagaraDebugHudVerbosity EVar3;
  wchar_t *_Str;
  
  if ((param_1->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  EVar2 = _wtoi(_Str);
  EVar3 = Verbose;
  if ((int)EVar2 < 2) {
    EVar3 = EVar2;
  }
  Settings.SystemEmitterVerbosity = None;
  if (0 < (int)EVar3) {
    Settings.SystemEmitterVerbosity = EVar3;
  }
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// <lambda_invoker_cdecl> @ 149264f00

void __cdecl NiagaraDebugLocal::<lambda_52>::<lambda_invoker_cdecl>(FString *param_1)

{
  FScriptContainerElement *pFVar1;
  ENiagaraDebugHudVerbosity EVar2;
  ENiagaraDebugHudVerbosity EVar3;
  wchar_t *_Str;
  
  if ((param_1->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  EVar2 = _wtoi(_Str);
  EVar3 = Verbose;
  if ((int)EVar2 < 2) {
    EVar3 = EVar2;
  }
  Settings.DataInterfaceVerbosity = None;
  if (0 < (int)EVar3) {
    Settings.DataInterfaceVerbosity = EVar3;
  }
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// <lambda_invoker_cdecl> @ 149264f60

void __cdecl NiagaraDebugLocal::<lambda_53>::<lambda_invoker_cdecl>(FString *param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  
  DestructItems<FNiagaraDebugHUDVariable,int>
            ((FNiagaraDebugHUDVariable *)Settings.SystemVariables.AllocatorInstance.Data,
             Settings.SystemVariables.ArrayNum);
  Settings.SystemVariables.ArrayNum = 0;
  if (Settings.SystemVariables.ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&Settings.SystemVariables.AllocatorInstance,0,
               &Settings.SystemVariables.ArrayMax);
  }
  FNiagaraDebugHUDVariable::InitFromString(param_1,&Settings.SystemVariables);
  bVar2 = 1 < (int)GCachedSystemVariables._72_4_;
  if (!bVar2) {
    TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables,0>,FDefaultSetAllocator>
                      *)&GCachedSystemVariables);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&GCachedSystemVariables,0,GCachedSystemVariables._8_4_);
  GCachedSystemVariables._8_4_ = 0;
  if (GCachedSystemVariables._12_4_ != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,0,(ForAnyElementType *)&GCachedSystemVariables,0,
               (int *)&GCachedSystemVariables.field_0xc);
  }
  GCachedSystemVariables._48_4_ = 0xffffffff;
  GCachedSystemVariables._52_4_ = 0;
  GCachedSystemVariables._40_4_ = 0;
  if (0x80 < (uint)GCachedSystemVariables._44_4_) {
    GCachedSystemVariables._44_4_ = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&GCachedSystemVariables.field_0x10,0);
  }
  if (bVar2) {
    GCachedSystemVariables._72_4_ = 1;
    TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables,0>,FDefaultSetAllocator>
              *)&GCachedSystemVariables);
  }
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// <lambda_invoker_cdecl> @ 1492650b0

void __cdecl NiagaraDebugLocal::<lambda_54>::<lambda_invoker_cdecl>(FString *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  wchar_t *_Str;
  
  if ((param_1->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar2 = _wtoi(_Str);
  Settings.bEnableGpuParticleReadback = iVar2 != 0;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// <lambda_invoker_cdecl> @ 149265100

void __cdecl NiagaraDebugLocal::<lambda_55>::<lambda_invoker_cdecl>(FString *param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  
  DestructItems<FNiagaraDebugHUDVariable,int>
            ((FNiagaraDebugHUDVariable *)Settings.ParticlesVariables.AllocatorInstance.Data,
             Settings.ParticlesVariables.ArrayNum);
  Settings.ParticlesVariables.ArrayNum = 0;
  if (Settings.ParticlesVariables.ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&Settings.ParticlesVariables.AllocatorInstance,0,
               &Settings.ParticlesVariables.ArrayMax);
  }
  FNiagaraDebugHUDVariable::InitFromString(param_1,&Settings.ParticlesVariables);
  bVar2 = 1 < (int)GCachedSystemVariables._72_4_;
  if (!bVar2) {
    TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables,0>,FDefaultSetAllocator>
                      *)&GCachedSystemVariables);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&GCachedSystemVariables,0,GCachedSystemVariables._8_4_);
  GCachedSystemVariables._8_4_ = 0;
  if (GCachedSystemVariables._12_4_ != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,0,(ForAnyElementType *)&GCachedSystemVariables,0,
               (int *)&GCachedSystemVariables.field_0xc);
  }
  GCachedSystemVariables._48_4_ = 0xffffffff;
  GCachedSystemVariables._52_4_ = 0;
  GCachedSystemVariables._40_4_ = 0;
  if (0x80 < (uint)GCachedSystemVariables._44_4_) {
    GCachedSystemVariables._44_4_ = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&GCachedSystemVariables.field_0x10,0);
  }
  if (bVar2) {
    GCachedSystemVariables._72_4_ = 1;
    TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables,0>,FDefaultSetAllocator>
              *)&GCachedSystemVariables);
  }
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// <lambda_invoker_cdecl> @ 149265250

void __cdecl NiagaraDebugLocal::<lambda_56>::<lambda_invoker_cdecl>(FString *param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  int iVar3;
  wchar_t *_Str;
  
  if ((param_1->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar3 = _wtoi(_Str);
  Settings.bShowParticleVariables = iVar3 != 0;
  bVar2 = 1 < (int)GCachedSystemVariables._72_4_;
  if (!bVar2) {
    TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables,0>,FDefaultSetAllocator>
                      *)&GCachedSystemVariables);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&GCachedSystemVariables,0,GCachedSystemVariables._8_4_);
  GCachedSystemVariables._8_4_ = 0;
  if (GCachedSystemVariables._12_4_ != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,0,(ForAnyElementType *)&GCachedSystemVariables,0,
               (int *)&GCachedSystemVariables.field_0xc);
  }
  GCachedSystemVariables._48_4_ = 0xffffffff;
  GCachedSystemVariables._52_4_ = 0;
  GCachedSystemVariables._40_4_ = 0;
  if (0x80 < (uint)GCachedSystemVariables._44_4_) {
    GCachedSystemVariables._44_4_ = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&GCachedSystemVariables.field_0x10,0);
  }
  if (bVar2) {
    GCachedSystemVariables._72_4_ = 1;
    TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables,0>,FDefaultSetAllocator>
              *)&GCachedSystemVariables);
  }
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// <lambda_invoker_cdecl> @ 149265370

void __cdecl NiagaraDebugLocal::<lambda_57>::<lambda_invoker_cdecl>(FString *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  wchar_t *_Str;
  
  if ((param_1->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar2 = _wtoi(_Str);
  Settings.MaxParticlesToDisplay = 0;
  if (0 < iVar2) {
    Settings.MaxParticlesToDisplay = iVar2;
  }
  Settings.bUseMaxParticlesToDisplay = 0 < Settings.MaxParticlesToDisplay;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// <lambda_invoker_cdecl> @ 1492653d0

void __cdecl NiagaraDebugLocal::<lambda_58>::<lambda_invoker_cdecl>(FString *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  wchar_t *_Str;
  
  if ((param_1->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar2 = _wtoi(_Str);
  Settings.bShowParticlesVariablesWithSystem = iVar2 != 0;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_10>_> @ 149265440

TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
* __thiscall
TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
::
TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><_FNiagaraDebugHud::DrawOverview_::__l15::<lambda_10>_>
          (void *this,<lambda_10> *param_1)

{
  FLinearColor *pFVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  puVar2 = FMemory::Malloc(0x20,8);
  *(undefined8 **)((longlong)this + 0x28) = puVar2;
  *puVar2 = &UE::Core::Private::Function::
             TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`15'::<lambda_10>,0,1>::
             _vftable_;
  pFVar1 = param_1->DetailHighlightColor;
  puVar2[1] = param_1->DetailColor;
  puVar2[2] = pFVar1;
  puVar2[3] = param_1->fAdvanceHeight;
  if (puVar2 + 1 != (undefined8 *)0x0) {
    *(code **)this =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_10>,void,FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&>
         ::Call;
  }
  return this;
}

// TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_11>_> @ 1492654b0

TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
* __thiscall
TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
::
TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><_FNiagaraDebugHud::DrawOverview_::__l15::<lambda_11>_>
          (void *this,<lambda_11> *param_1)

{
  FLinearColor *pFVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  puVar2 = FMemory::Malloc(0x20,8);
  *(undefined8 **)((longlong)this + 0x28) = puVar2;
  *puVar2 = &UE::Core::Private::Function::
             TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`15'::<lambda_11>,0,1>::
             _vftable_;
  pFVar1 = param_1->DetailHighlightColor;
  puVar2[1] = param_1->DetailColor;
  puVar2[2] = pFVar1;
  puVar2[3] = param_1->fAdvanceHeight;
  if (puVar2 + 1 != (undefined8 *)0x0) {
    *(code **)this =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_11>,void,FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&>
         ::Call;
  }
  return this;
}

// TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_12>_> @ 149265520

TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
* __thiscall
TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
::
TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><_FNiagaraDebugHud::DrawOverview_::__l15::<lambda_12>_>
          (void *this,<lambda_12> *param_1)

{
  FLinearColor *pFVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  puVar2 = FMemory::Malloc(0x20,8);
  *(undefined8 **)((longlong)this + 0x28) = puVar2;
  *puVar2 = &UE::Core::Private::Function::
             TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`15'::<lambda_12>,0,1>::
             _vftable_;
  pFVar1 = param_1->DetailHighlightColor;
  puVar2[1] = param_1->DetailColor;
  puVar2[2] = pFVar1;
  puVar2[3] = param_1->fAdvanceHeight;
  if (puVar2 + 1 != (undefined8 *)0x0) {
    *(code **)this =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_12>,void,FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&>
         ::Call;
  }
  return this;
}

// TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_13>_> @ 149265590

TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
* __thiscall
TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
::
TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><_FNiagaraDebugHud::DrawOverview_::__l15::<lambda_13>_>
          (void *this,<lambda_13> *param_1)

{
  FLinearColor *pFVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  puVar2 = FMemory::Malloc(0x20,8);
  *(undefined8 **)((longlong)this + 0x28) = puVar2;
  *puVar2 = &UE::Core::Private::Function::
             TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`15'::<lambda_13>,0,1>::
             _vftable_;
  pFVar1 = param_1->DetailHighlightColor;
  puVar2[1] = param_1->DetailColor;
  puVar2[2] = pFVar1;
  puVar2[3] = param_1->fAdvanceHeight;
  if (puVar2 + 1 != (undefined8 *)0x0) {
    *(code **)this =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_13>,void,FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&>
         ::Call;
  }
  return this;
}

// TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_14>_> @ 149265600

TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
* __thiscall
TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
::
TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><_FNiagaraDebugHud::DrawOverview_::__l15::<lambda_14>_>
          (void *this,<lambda_14> *param_1)

{
  FLinearColor *pFVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  puVar2 = FMemory::Malloc(0x20,8);
  *(undefined8 **)((longlong)this + 0x28) = puVar2;
  *puVar2 = &UE::Core::Private::Function::
             TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`15'::<lambda_14>,0,1>::
             _vftable_;
  pFVar1 = param_1->DetailHighlightColor;
  puVar2[1] = param_1->DetailColor;
  puVar2[2] = pFVar1;
  puVar2[3] = param_1->fAdvanceHeight;
  if (puVar2 + 1 != (undefined8 *)0x0) {
    *(code **)this =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_14>,void,FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&>
         ::Call;
  }
  return this;
}

// TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_15>_> @ 149265670

TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
* __thiscall
TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
::
TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><_FNiagaraDebugHud::DrawOverview_::__l15::<lambda_15>_>
          (void *this,<lambda_15> *param_1)

{
  FLinearColor *pFVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  puVar2 = FMemory::Malloc(0x20,8);
  *(undefined8 **)((longlong)this + 0x28) = puVar2;
  *puVar2 = &UE::Core::Private::Function::
             TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`15'::<lambda_15>,0,1>::
             _vftable_;
  pFVar1 = param_1->DetailHighlightColor;
  puVar2[1] = param_1->DetailColor;
  puVar2[2] = pFVar1;
  puVar2[3] = param_1->fAdvanceHeight;
  if (puVar2 + 1 != (undefined8 *)0x0) {
    *(code **)this =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_15>,void,FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&>
         ::Call;
  }
  return this;
}

// TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_16>_> @ 1492656e0

TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
* __thiscall
TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
::
TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><_FNiagaraDebugHud::DrawOverview_::__l19::<lambda_16>_>
          (void *this,<lambda_16> *param_1)

{
  FLinearColor *pFVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  puVar2 = FMemory::Malloc(0x20,8);
  *(undefined8 **)((longlong)this + 0x28) = puVar2;
  *puVar2 = &UE::Core::Private::Function::
             TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`19'::<lambda_16>,0,1>::
             _vftable_;
  pFVar1 = param_1->DetailHighlightColor;
  puVar2[1] = param_1->DetailColor;
  puVar2[2] = pFVar1;
  puVar2[3] = param_1->fAdvanceHeight;
  if (puVar2 + 1 != (undefined8 *)0x0) {
    *(code **)this =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_16>,void,FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&>
         ::Call;
  }
  return this;
}

// TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><`FNiagaraDebugHud::DrawOverview'::__l22::<lambda_17>_> @ 149265750

TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
* __thiscall
TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
::
TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><_FNiagaraDebugHud::DrawOverview_::__l22::<lambda_17>_>
          (void *this,<lambda_17> *param_1)

{
  FLinearColor *pFVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  puVar2 = FMemory::Malloc(0x20,8);
  *(undefined8 **)((longlong)this + 0x28) = puVar2;
  *puVar2 = &UE::Core::Private::Function::
             TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`22'::<lambda_17>,0,1>::
             _vftable_;
  pFVar1 = param_1->DetailHighlightColor;
  puVar2[1] = param_1->DetailColor;
  puVar2[2] = pFVar1;
  puVar2[3] = param_1->fAdvanceHeight;
  if (puVar2 + 1 != (undefined8 *)0x0) {
    *(code **)this =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FNiagaraDebugHud::DrawOverview'::__l22::<lambda_17>,void,FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&>
         ::Call;
  }
  return this;
}

// TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_18>_> @ 1492657c0

TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
* __thiscall
TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
::
TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><_FNiagaraDebugHud::DrawOverview_::__l19::<lambda_18>_>
          (void *this,<lambda_18> *param_1)

{
  FLinearColor *pFVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  puVar2 = FMemory::Malloc(0x20,8);
  *(undefined8 **)((longlong)this + 0x28) = puVar2;
  *puVar2 = &UE::Core::Private::Function::
             TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`19'::<lambda_18>,0,1>::
             _vftable_;
  pFVar1 = param_1->DetailHighlightColor;
  puVar2[1] = param_1->DetailColor;
  puVar2[2] = pFVar1;
  puVar2[3] = param_1->fAdvanceHeight;
  if (puVar2 + 1 != (undefined8 *)0x0) {
    *(code **)this =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_18>,void,FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&>
         ::Call;
  }
  return this;
}

// TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_19>_> @ 149265830

TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
* __thiscall
TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
::
TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><_FNiagaraDebugHud::DrawOverview_::__l19::<lambda_19>_>
          (void *this,<lambda_19> *param_1)

{
  FLinearColor *pFVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  puVar2 = FMemory::Malloc(0x20,8);
  *(undefined8 **)((longlong)this + 0x28) = puVar2;
  *puVar2 = &UE::Core::Private::Function::
             TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`19'::<lambda_19>,0,1>::
             _vftable_;
  pFVar1 = param_1->DetailHighlightColor;
  puVar2[1] = param_1->DetailColor;
  puVar2[2] = pFVar1;
  puVar2[3] = param_1->fAdvanceHeight;
  if (puVar2 + 1 != (undefined8 *)0x0) {
    *(code **)this =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_19>,void,FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&>
         ::Call;
  }
  return this;
}

// TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><`FNiagaraDebugHud::DrawOverview'::__l5::<lambda_1>_> @ 1492658a0

TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
* __thiscall
TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
::
TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><_FNiagaraDebugHud::DrawOverview_::__l5::<lambda_1>_>
          (void *this,<lambda_1> *param_1)

{
  FLinearColor *pFVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  puVar2 = FMemory::Malloc(0x20,8);
  *(undefined8 **)((longlong)this + 0x28) = puVar2;
  *puVar2 = &UE::Core::Private::Function::
             TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`5'::<lambda_1>,0,1>::_vftable_
  ;
  pFVar1 = param_1->DetailHighlightColor;
  puVar2[1] = param_1->DetailColor;
  puVar2[2] = pFVar1;
  puVar2[3] = param_1->fAdvanceHeight;
  if (puVar2 + 1 != (undefined8 *)0x0) {
    *(code **)this =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FNiagaraDebugHud::DrawOverview'::__l5::<lambda_1>,void,FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&>
         ::Call;
  }
  return this;
}

// TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_20>_> @ 149265910

TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
* __thiscall
TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
::
TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><_FNiagaraDebugHud::DrawOverview_::__l19::<lambda_20>_>
          (void *this,<lambda_20> *param_1)

{
  FLinearColor *pFVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  puVar2 = FMemory::Malloc(0x20,8);
  *(undefined8 **)((longlong)this + 0x28) = puVar2;
  *puVar2 = &UE::Core::Private::Function::
             TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`19'::<lambda_20>,0,1>::
             _vftable_;
  pFVar1 = param_1->DetailHighlightColor;
  puVar2[1] = param_1->DetailColor;
  puVar2[2] = pFVar1;
  puVar2[3] = param_1->fAdvanceHeight;
  if (puVar2 + 1 != (undefined8 *)0x0) {
    *(code **)this =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_20>,void,FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&>
         ::Call;
  }
  return this;
}

// TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_21>_> @ 149265980

TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
* __thiscall
TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
::
TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><_FNiagaraDebugHud::DrawOverview_::__l19::<lambda_21>_>
          (void *this,<lambda_21> *param_1)

{
  FLinearColor *pFVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  puVar2 = FMemory::Malloc(0x20,8);
  *(undefined8 **)((longlong)this + 0x28) = puVar2;
  *puVar2 = &UE::Core::Private::Function::
             TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`19'::<lambda_21>,0,1>::
             _vftable_;
  pFVar1 = param_1->DetailHighlightColor;
  puVar2[1] = param_1->DetailColor;
  puVar2[2] = pFVar1;
  puVar2[3] = param_1->fAdvanceHeight;
  if (puVar2 + 1 != (undefined8 *)0x0) {
    *(code **)this =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_21>,void,FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&>
         ::Call;
  }
  return this;
}

// TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_22>_> @ 1492659f0

TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
* __thiscall
TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
::
TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><_FNiagaraDebugHud::DrawOverview_::__l19::<lambda_22>_>
          (void *this,<lambda_22> *param_1)

{
  FLinearColor *pFVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  puVar2 = FMemory::Malloc(0x20,8);
  *(undefined8 **)((longlong)this + 0x28) = puVar2;
  *puVar2 = &UE::Core::Private::Function::
             TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`19'::<lambda_22>,0,1>::
             _vftable_;
  pFVar1 = param_1->DetailHighlightColor;
  puVar2[1] = param_1->DetailColor;
  puVar2[2] = pFVar1;
  puVar2[3] = param_1->fAdvanceHeight;
  if (puVar2 + 1 != (undefined8 *)0x0) {
    *(code **)this =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_22>,void,FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&>
         ::Call;
  }
  return this;
}

// TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><`FNiagaraDebugHud::DrawOverview'::__l26::<lambda_23>_> @ 149265a60

TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
* __thiscall
TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
::
TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><_FNiagaraDebugHud::DrawOverview_::__l26::<lambda_23>_>
          (void *this,<lambda_23> *param_1)

{
  FLinearColor *pFVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  puVar2 = FMemory::Malloc(0x20,8);
  *(undefined8 **)((longlong)this + 0x28) = puVar2;
  *puVar2 = &UE::Core::Private::Function::
             TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`26'::<lambda_23>,0,1>::
             _vftable_;
  pFVar1 = param_1->DetailHighlightColor;
  puVar2[1] = param_1->DetailColor;
  puVar2[2] = pFVar1;
  puVar2[3] = param_1->fAdvanceHeight;
  if (puVar2 + 1 != (undefined8 *)0x0) {
    *(code **)this =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FNiagaraDebugHud::DrawOverview'::__l26::<lambda_23>,void,FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&>
         ::Call;
  }
  return this;
}

// TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><`FNiagaraDebugHud::DrawOverview'::__l11::<lambda_2>_> @ 149265ad0

TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
* __thiscall
TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
::
TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><_FNiagaraDebugHud::DrawOverview_::__l11::<lambda_2>_>
          (void *this,<lambda_2> *param_1)

{
  FLinearColor *pFVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  puVar2 = FMemory::Malloc(0x20,8);
  *(undefined8 **)((longlong)this + 0x28) = puVar2;
  *puVar2 = &UE::Core::Private::Function::
             TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`11'::<lambda_2>,0,1>::
             _vftable_;
  pFVar1 = param_1->DetailHighlightColor;
  puVar2[1] = param_1->DetailColor;
  puVar2[2] = pFVar1;
  puVar2[3] = param_1->fAdvanceHeight;
  if (puVar2 + 1 != (undefined8 *)0x0) {
    *(code **)this =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FNiagaraDebugHud::DrawOverview'::__l11::<lambda_2>,void,FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&>
         ::Call;
  }
  return this;
}

// TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><`FNiagaraDebugHud::DrawOverview'::__l8::<lambda_3>_> @ 149265b40

TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
* __thiscall
TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
::
TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><_FNiagaraDebugHud::DrawOverview_::__l8::<lambda_3>_>
          (void *this,<lambda_3> *param_1)

{
  FLinearColor *pFVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  puVar2 = FMemory::Malloc(0x20,8);
  *(undefined8 **)((longlong)this + 0x28) = puVar2;
  *puVar2 = &UE::Core::Private::Function::
             TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`8'::<lambda_3>,0,1>::_vftable_
  ;
  pFVar1 = param_1->DetailHighlightColor;
  puVar2[1] = param_1->DetailColor;
  puVar2[2] = pFVar1;
  puVar2[3] = param_1->fAdvanceHeight;
  if (puVar2 + 1 != (undefined8 *)0x0) {
    *(code **)this =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FNiagaraDebugHud::DrawOverview'::__l8::<lambda_3>,void,FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&>
         ::Call;
  }
  return this;
}

// TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><`FNiagaraDebugHud::DrawOverview'::__l8::<lambda_4>_> @ 149265bb0

TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
* __thiscall
TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
::
TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><_FNiagaraDebugHud::DrawOverview_::__l8::<lambda_4>_>
          (void *this,<lambda_4> *param_1)

{
  FLinearColor *pFVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  puVar2 = FMemory::Malloc(0x20,8);
  *(undefined8 **)((longlong)this + 0x28) = puVar2;
  *puVar2 = &UE::Core::Private::Function::
             TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`8'::<lambda_4>,0,1>::_vftable_
  ;
  pFVar1 = param_1->DetailHighlightColor;
  puVar2[1] = param_1->DetailColor;
  puVar2[2] = pFVar1;
  puVar2[3] = param_1->fAdvanceHeight;
  if (puVar2 + 1 != (undefined8 *)0x0) {
    *(code **)this =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FNiagaraDebugHud::DrawOverview'::__l8::<lambda_4>,void,FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&>
         ::Call;
  }
  return this;
}

// TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><`FNiagaraDebugHud::DrawOverview'::__l8::<lambda_5>_> @ 149265c20

TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
* __thiscall
TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
::
TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><_FNiagaraDebugHud::DrawOverview_::__l8::<lambda_5>_>
          (void *this,<lambda_5> *param_1)

{
  FLinearColor *pFVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  puVar2 = FMemory::Malloc(0x20,8);
  *(undefined8 **)((longlong)this + 0x28) = puVar2;
  *puVar2 = &UE::Core::Private::Function::
             TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`8'::<lambda_5>,0,1>::_vftable_
  ;
  pFVar1 = param_1->DetailHighlightColor;
  puVar2[1] = param_1->DetailColor;
  puVar2[2] = pFVar1;
  puVar2[3] = param_1->fAdvanceHeight;
  if (puVar2 + 1 != (undefined8 *)0x0) {
    *(code **)this =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FNiagaraDebugHud::DrawOverview'::__l8::<lambda_5>,void,FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&>
         ::Call;
  }
  return this;
}

// TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><`FNiagaraDebugHud::DrawOverview'::__l8::<lambda_6>_> @ 149265c90

TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
* __thiscall
TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
::
TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><_FNiagaraDebugHud::DrawOverview_::__l8::<lambda_6>_>
          (void *this,<lambda_6> *param_1)

{
  FLinearColor *pFVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  puVar2 = FMemory::Malloc(0x20,8);
  *(undefined8 **)((longlong)this + 0x28) = puVar2;
  *puVar2 = &UE::Core::Private::Function::
             TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`8'::<lambda_6>,0,1>::_vftable_
  ;
  pFVar1 = param_1->DetailHighlightColor;
  puVar2[1] = param_1->DetailColor;
  puVar2[2] = pFVar1;
  puVar2[3] = param_1->fAdvanceHeight;
  if (puVar2 + 1 != (undefined8 *)0x0) {
    *(code **)this =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FNiagaraDebugHud::DrawOverview'::__l8::<lambda_6>,void,FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&>
         ::Call;
  }
  return this;
}

// TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><`FNiagaraDebugHud::DrawOverview'::__l8::<lambda_7>_> @ 149265d00

TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
* __thiscall
TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
::
TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><_FNiagaraDebugHud::DrawOverview_::__l8::<lambda_7>_>
          (void *this,<lambda_7> *param_1)

{
  FLinearColor *pFVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  puVar2 = FMemory::Malloc(0x20,8);
  *(undefined8 **)((longlong)this + 0x28) = puVar2;
  *puVar2 = &UE::Core::Private::Function::
             TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`8'::<lambda_7>,0,1>::_vftable_
  ;
  pFVar1 = param_1->DetailHighlightColor;
  puVar2[1] = param_1->DetailColor;
  puVar2[2] = pFVar1;
  puVar2[3] = param_1->fAdvanceHeight;
  if (puVar2 + 1 != (undefined8 *)0x0) {
    *(code **)this =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FNiagaraDebugHud::DrawOverview'::__l8::<lambda_7>,void,FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&>
         ::Call;
  }
  return this;
}

// TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_8>_> @ 149265d70

TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
* __thiscall
TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
::
TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><_FNiagaraDebugHud::DrawOverview_::__l15::<lambda_8>_>
          (void *this,<lambda_8> *param_1)

{
  FLinearColor *pFVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  puVar2 = FMemory::Malloc(0x20,8);
  *(undefined8 **)((longlong)this + 0x28) = puVar2;
  *puVar2 = &UE::Core::Private::Function::
             TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`15'::<lambda_8>,0,1>::
             _vftable_;
  pFVar1 = param_1->DetailHighlightColor;
  puVar2[1] = param_1->DetailColor;
  puVar2[2] = pFVar1;
  puVar2[3] = param_1->fAdvanceHeight;
  if (puVar2 + 1 != (undefined8 *)0x0) {
    *(code **)this =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_8>,void,FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&>
         ::Call;
  }
  return this;
}

// TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_9>_> @ 149265de0

TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
* __thiscall
TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)>
::
TFunction<void___cdecl(FCanvas_*,UFont_*,float,float,_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&)><_FNiagaraDebugHud::DrawOverview_::__l15::<lambda_9>_>
          (void *this,<lambda_9> *param_1)

{
  FLinearColor *pFVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  puVar2 = FMemory::Malloc(0x20,8);
  *(undefined8 **)((longlong)this + 0x28) = puVar2;
  *puVar2 = &UE::Core::Private::Function::
             TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`15'::<lambda_9>,0,1>::
             _vftable_;
  pFVar1 = param_1->DetailHighlightColor;
  puVar2[1] = param_1->DetailColor;
  puVar2[2] = pFVar1;
  puVar2[3] = param_1->fAdvanceHeight;
  if (puVar2 + 1 != (undefined8 *)0x0) {
    *(code **)this =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_9>,void,FCanvas_*,UFont_*,float,float,`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn_&,FNiagaraDebugHud::FSystemDebugInfo_const_&>
         ::Call;
  }
  return this;
}

// BuildGpuHudInformation<TStringBuilderWithBuffer<wchar_t,1024>_> @ 1492670d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

void __cdecl
NiagaraDebugLocal::BuildGpuHudInformation<TStringBuilderWithBuffer<wchar_t,1024>_>
          (TStringBuilderWithBuffer<wchar_t,1024> *param_1,UNiagaraComponent *param_2,
          FNiagaraSystemInstance *param_3,Type param_4)

{
  undefined8 *puVar1;
  Type TVar2;
  FNiagaraSystemGpuComputeProxy *pFVar3;
  longlong *plVar4;
  longlong lVar5;
  UNiagaraRendererProperties *pUVar6;
  code *pcVar7;
  bool bVar8;
  char cVar9;
  void *pvVar10;
  wchar_t *pwVar11;
  ulong64 uVar12;
  int iVar13;
  longlong lVar14;
  undefined8 *puVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  UNiagaraComponent *local_res10 [2];
  Type local_res20 [2];
  undefined1 auStack_308 [32];
  char local_2e8 [8];
  TStringBuilderWithBuffer<wchar_t,1024> *local_2e0;
  undefined8 *local_2d8;
  int local_2d0;
  UNiagaraComponent **local_2c8;
  Type *local_2c0;
  FScriptContainerElement *local_2b8;
  char *local_2b0;
  FString local_2a8;
  TStringBuilderBase<wchar_t> local_298;
  wchar_t local_278 [128];
  TStringBuilderBase<wchar_t> local_178;
  wchar_t local_158 [128];
  ulonglong local_58 [3];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStack_308;
  local_res10[0] = param_2;
  local_res20[0] = param_4;
  local_2e0 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `void___cdecl_NiagaraDebugLocal::BuildGpuHudInformation<TStringBuilderWithBuffer<wchar_t,1024>_>(TStringBuilderWithBuffer<wchar_t,1024>&___ptr64,UNiagaraComponent*___ptr64,FNiagaraSystemInstance*___ptr64,ERHIFeatureLevel::Type)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`void___cdecl_NiagaraDebugLocal::BuildGpuHudInformation<TStringBuilderWithBuffer<wchar_t,1024>_>(TStringBuilderWithBuffer<wchar_t,1024>&___ptr64,UNiagaraComponent*___ptr64,FNiagaraSystemInstance*___ptr64,ERHIFeatureLevel::Type)'
                           ::__l2::_thread_safe_static_guard_0__),
     `void___cdecl_NiagaraDebugLocal::BuildGpuHudInformation<TStringBuilderWithBuffer<wchar_t,1024>_>(TStringBuilderWithBuffer<wchar_t,1024>&___ptr64,UNiagaraComponent*___ptr64,FNiagaraSystemInstance*___ptr64,ERHIFeatureLevel::Type)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `void___cdecl_NiagaraDebugLocal::BuildGpuHudInformation<TStringBuilderWithBuffer<wchar_t,1024>_>(TStringBuilderWithBuffer<wchar_t,1024>&___ptr64,UNiagaraComponent*___ptr64,FNiagaraSystemInstance*___ptr64,ERHIFeatureLevel::Type)'
    ::__l2::GpuComputeTickStageEnum = StaticEnum<enum_ENiagaraGpuComputeTickStage::Type>();
    _Init_thread_footer(&`void___cdecl_NiagaraDebugLocal::BuildGpuHudInformation<TStringBuilderWithBuffer<wchar_t,1024>_>(TStringBuilderWithBuffer<wchar_t,1024>&___ptr64,UNiagaraComponent*___ptr64,FNiagaraSystemInstance*___ptr64,ERHIFeatureLevel::Type)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((`void___cdecl_NiagaraDebugLocal::BuildGpuHudInformation<TStringBuilderWithBuffer<wchar_t,1024>_>(TStringBuilderWithBuffer<wchar_t,1024>&___ptr64,UNiagaraComponent*___ptr64,FNiagaraSystemInstance*___ptr64,ERHIFeatureLevel::Type)'
       ::__l2::GpuComputeTickStageEnum != (UEnum *)0x0) &&
     (pFVar3 = (param_3->SystemGpuComputeProxy).Ptr, pFVar3 != (FNiagaraSystemGpuComputeProxy *)0x0)
     ) {
    TVar2 = pFVar3->ComputeTickStage;
    UEnum::GetNameStringByValue
              (`void___cdecl_NiagaraDebugLocal::BuildGpuHudInformation<TStringBuilderWithBuffer<wchar_t,1024>_>(TStringBuilderWithBuffer<wchar_t,1024>&___ptr64,UNiagaraComponent*___ptr64,FNiagaraSystemInstance*___ptr64,ERHIFeatureLevel::Type)'
               ::__l2::GpuComputeTickStageEnum,&local_2a8,(longlong)(int)TVar2);
    TStringBuilderBase<wchar_t>::AppendfImpl
              ((TStringBuilderBase<wchar_t> *)param_1,L"GpuTickStage - %s\n");
    if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
    }
    if (Settings.SystemDebugVerbosity == Verbose) {
      local_298.Base = local_278;
      local_298.bIsDynamic = false;
      local_298.bIsExternal = false;
      local_298.CurPos = local_278;
      local_298.End = (wchar_t *)&local_178;
      bVar8 = FNiagaraSystemInstance::RequiresGlobalDistanceField(param_3);
      if (bVar8) {
        if (local_298.End < (TStringBuilderBase<wchar_t> *)(local_298.CurPos + 0x14)) {
          TStringBuilderBase<wchar_t>::Extend(&local_298,0x14);
        }
        pvVar10 = FGenericPlatformString::Memcpy(local_298.CurPos,L" GlobalDistanceField",0x28);
        local_298.CurPos = (wchar_t *)((longlong)pvVar10 + 0x28);
      }
      bVar8 = FNiagaraSystemInstance::RequiresDepthBuffer(param_3);
      if (bVar8) {
        if (local_298.End < (TStringBuilderBase<wchar_t> *)(local_298.CurPos + 0xc)) {
          TStringBuilderBase<wchar_t>::Extend(&local_298,0xc);
        }
        pvVar10 = FGenericPlatformString::Memcpy(local_298.CurPos,L" DepthBuffer",0x18);
        local_298.CurPos = (wchar_t *)((longlong)pvVar10 + 0x18);
      }
      bVar8 = FNiagaraSystemInstance::RequiresEarlyViewData(param_3);
      if (bVar8) {
        if (local_298.End < (TStringBuilderBase<wchar_t> *)(local_298.CurPos + 0xe)) {
          TStringBuilderBase<wchar_t>::Extend(&local_298,0xe);
        }
        pvVar10 = FGenericPlatformString::Memcpy(local_298.CurPos,L" EarlyViewData",0x1c);
        local_298.CurPos = (wchar_t *)((longlong)pvVar10 + 0x1c);
      }
      bVar8 = FNiagaraSystemInstance::RequiresViewUniformBuffer(param_3);
      if (bVar8) {
        if (local_298.End < (TStringBuilderBase<wchar_t> *)(local_298.CurPos + 0x12)) {
          TStringBuilderBase<wchar_t>::Extend(&local_298,0x12);
        }
        pvVar10 = FGenericPlatformString::Memcpy(local_298.CurPos,L" ViewUniformBuffer",0x24);
        local_298.CurPos = (wchar_t *)((longlong)pvVar10 + 0x24);
      }
      bVar8 = FNiagaraSystemInstance::RequiresRayTracingScene(param_3);
      if (bVar8) {
        if (local_298.End < (TStringBuilderBase<wchar_t> *)(local_298.CurPos + 0x10)) {
          TStringBuilderBase<wchar_t>::Extend(&local_298,0x10);
        }
        pvVar10 = FGenericPlatformString::Memcpy(local_298.CurPos,L" RayTracingScene",0x20);
        local_298.CurPos = (wchar_t *)((longlong)pvVar10 + 0x20);
      }
      bVar8 = FNiagaraSystemInstance::RequiresCurrentFrameNDC(param_3);
      if (bVar8) {
        if (local_298.End < (TStringBuilderBase<wchar_t> *)(local_298.CurPos + 0x10)) {
          TStringBuilderBase<wchar_t>::Extend(&local_298,0x10);
        }
        pvVar10 = FGenericPlatformString::Memcpy(local_298.CurPos,L" CurrentFrameNDC",0x20);
        local_298.CurPos = (wchar_t *)((longlong)pvVar10 + 0x20);
      }
      if (0 < (int)((longlong)local_298.CurPos - (longlong)local_298.Base >> 1)) {
        if (local_298.End < (TStringBuilderBase<wchar_t> *)(local_298.CurPos + 1)) {
          TStringBuilderBase<wchar_t>::Extend(&local_298,1);
        }
        *local_298.CurPos = L'\0';
        TStringBuilderBase<wchar_t>::AppendfImpl
                  ((TStringBuilderBase<wchar_t> *)param_1,L"GpuFeatures -%s\n");
      }
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_298);
    }
    if (TVar2 == Last) {
      pFVar17 = (param_3->Emitters).AllocatorInstance.Data;
      local_178.Base = local_158;
      iVar13 = (param_3->Emitters).ArrayNum;
      local_178.CurPos = local_158;
      local_178.End = (wchar_t *)local_58;
      local_178.bIsDynamic = false;
      local_178.bIsExternal = false;
      if ((iVar13 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar16 = pFVar17 + (longlong)iVar13 * 0x10;
      pwVar11 = local_178.CurPos;
      for (; pFVar17 != pFVar16; pFVar17 = pFVar17 + 0x10) {
        plVar4 = *(longlong **)pFVar17;
        lVar5 = plVar4[5];
        if (lVar5 != 0) {
          local_2c8 = local_res10;
          local_2e8[0] = '\0';
          local_2c0 = local_res20;
          local_2b0 = local_2e8;
          local_2b8 = pFVar17;
          (**(code **)(*plVar4 + 0x78))(plVar4,&local_2d8);
          puVar15 = local_2d8;
          lVar14 = (longlong)local_2d0;
          if ((local_2d0 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          puVar1 = puVar15 + lVar14;
          pwVar11 = local_178.CurPos;
          for (; local_178.CurPos = pwVar11, puVar15 != puVar1; puVar15 = puVar15 + 1) {
            pUVar6 = (UNiagaraRendererProperties *)*puVar15;
            if (((pUVar6 != (UNiagaraRendererProperties *)0x0) &&
                (cVar9 = (**(code **)(pUVar6->_padding_ + 0x318))(pUVar6), cVar9 != '\0')) &&
               (cVar9 = (**(code **)(pUVar6->_padding_ + 0x2e8))
                                  (pUVar6,*(undefined1 *)((longlong)plVar4 + 0xd1)), cVar9 != '\0'))
            {
              `NiagaraDebugLocal::BuildGpuHudInformation<TStringBuilderWithBuffer<wchar_t,1024>_>'::
              __l36::<lambda_1>::operator()(&local_2c8,pUVar6);
            }
            pwVar11 = local_178.CurPos;
          }
          if (local_2e8[0] != '\0') {
            if (local_178.End < pwVar11 + 1) {
              TStringBuilderBase<wchar_t>::Extend(&local_178,1);
            }
            *local_178.CurPos = L' ';
            local_178.CurPos = local_178.CurPos + 1;
            pvVar10 = *(void **)(lVar5 + 0x28);
            iVar13 = *(int *)(lVar5 + 0x30) + -1;
            if (*(int *)(lVar5 + 0x30) == 0) {
              iVar13 = 0;
            }
            uVar12 = (ulong64)iVar13;
            if (local_178.End < local_178.CurPos + uVar12) {
              TStringBuilderBase<wchar_t>::Extend(&local_178,uVar12);
            }
            pwVar11 = local_178.CurPos;
            if (iVar13 != 0) {
              pvVar10 = FGenericPlatformString::Memcpy(local_178.CurPos,pvVar10,uVar12 * 2);
              pwVar11 = (wchar_t *)((longlong)pvVar10 + uVar12 * 2);
              local_178.CurPos = pwVar11;
            }
          }
        }
        param_1 = local_2e0;
      }
      if (0 < (int)((longlong)pwVar11 - (longlong)local_178.Base >> 1)) {
        if (local_178.End < pwVar11 + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_178,1);
          pwVar11 = local_178.CurPos;
        }
        *pwVar11 = L'\0';
        TStringBuilderBase<wchar_t>::AppendfImpl
                  ((TStringBuilderBase<wchar_t> *)param_1,L"GpuHasLatentEmitters -%s\n");
      }
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_178);
    }
  }
  return;
}

// CastChecked<ANiagaraPerfBaselineActor,ANiagaraPerfBaselineActor> @ 149267700

ANiagaraPerfBaselineActor * __cdecl
CastChecked<ANiagaraPerfBaselineActor,ANiagaraPerfBaselineActor>(ANiagaraPerfBaselineActor *param_1)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_18;
  
  if (param_1 != (ANiagaraPerfBaselineActor *)0x0) {
    return param_1;
  }
  pFVar1 = GetTypeName<ANiagaraPerfBaselineActor>(&local_18);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// CastChecked<UNiagaraBaselineController,UObject> @ 149267740

UNiagaraBaselineController * __cdecl
CastChecked<UNiagaraBaselineController,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UNiagaraBaselineController>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UNiagaraBaselineController_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UNiagaraBaselineController *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraBaselineController>(&local_28);
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

// CastChecked<UNiagaraDecalRendererProperties,UObject> @ 149267800

UNiagaraDecalRendererProperties * __cdecl
CastChecked<UNiagaraDecalRendererProperties,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UNiagaraDecalRendererProperties>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UNiagaraDecalRendererProperties::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UNiagaraDecalRendererProperties *)param_1;
  }
  pFVar3 = GetTypeName<UNiagaraDecalRendererProperties>(&local_28);
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

// ConstructItems<TObjectPtr<UNiagaraRendererProperties>,TObjectPtr<UNiagaraRendererProperties>,int> @ 1492678c0

void __cdecl
ConstructItems<TObjectPtr<UNiagaraRendererProperties>,TObjectPtr<UNiagaraRendererProperties>,int>
          (void *param_1,TObjectPtr<UNiagaraRendererProperties> *param_2,int param_3)

{
  TObjectPtr<UNiagaraRendererProperties> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<UNiagaraRendererProperties>_u_0)param_2->field0_0x0;
      ((TObjectPtr<UNiagaraRendererProperties>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr =
           (UNiagaraRendererProperties *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (UNiagaraRendererProperties *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TObjectPtr<UNiagaraSimulationStageBase>,TObjectPtr<UNiagaraSimulationStageBase>,int> @ 149267920

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
ConstructItems<TObjectPtr<UNiagaraSimulationStageBase>,TObjectPtr<UNiagaraSimulationStageBase>,int>
          (void *param_1,TObjectPtr<UNiagaraSimulationStageBase> *param_2,int param_3)

{
  TObjectPtr<UNiagaraSimulationStageBase> TVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      TVar1.field0_0x0 = (TObjectPtr<UNiagaraSimulationStageBase>_u_0)param_2->field0_0x0;
      ((TObjectPtr<UNiagaraSimulationStageBase>_u_0 *)(lVar2 + (longlong)param_2))->DebugPtr =
           (UNiagaraSimulationStageBase *)TVar1.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.field0_0x0 != (UNiagaraSimulationStageBase *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FNiagaraEmptyUAVPool::FEmptyUAV,FNiagaraEmptyUAVPool::FEmptyUAV,int> @ 149267980

void __cdecl
ConstructItems<FNiagaraEmptyUAVPool::FEmptyUAV,FNiagaraEmptyUAVPool::FEmptyUAV,int>
          (void *param_1,FEmptyUAV *param_2,int param_3)

{
  FRHIBuffer *this;
  FRHITexture *this_00;
  FRHIUnorderedAccessView *this_01;
  undefined8 *puVar1;
  TRefCountPtr<FRHIUnorderedAccessView> *pTVar2;
  
  if (param_3 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    pTVar2 = &param_2->UAV;
    do {
      *(undefined8 *)((longlong)pTVar2 + (longlong)param_1 + (-0x10 - (longlong)param_2)) = 0;
      this = (((FEmptyUAV *)(pTVar2 + -2))->Buffer).Reference;
      *(FRHIBuffer **)((longlong)pTVar2 + (longlong)param_1 + (-0x10 - (longlong)param_2)) = this;
      if (this != (FRHIBuffer *)0x0) {
        FRHIResource::AddRef((FRHIResource *)this);
      }
      puVar1[-1] = 0;
      this_00 = ((TRefCountPtr<FRHITexture> *)(pTVar2 + -1))->Reference;
      puVar1[-1] = this_00;
      if (this_00 != (FRHITexture *)0x0) {
        FRHIResource::AddRef((FRHIResource *)this_00);
      }
      *puVar1 = 0;
      this_01 = pTVar2->Reference;
      *puVar1 = this_01;
      if (this_01 != (FRHIUnorderedAccessView *)0x0) {
        FRHIResource::AddRef((FRHIResource *)this_01);
      }
      pTVar2 = pTVar2 + 3;
      puVar1 = puVar1 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FNiagaraDebugHUDVariable,FNiagaraDebugHUDVariable,int> @ 149267a30

void __cdecl
ConstructItems<FNiagaraDebugHUDVariable,FNiagaraDebugHUDVariable,int>
          (void *param_1,FNiagaraDebugHUDVariable *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      *(bool *)(lVar1 + (longlong)param_2) = param_2->bEnabled;
      FString::FString((FString *)(lVar1 + 8 + (longlong)param_2),&param_2->Name);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FNiagaraEmitterScalabilityOverride,FNiagaraEmitterScalabilityOverride,int> @ 149267a90

void __cdecl
ConstructItems<FNiagaraEmitterScalabilityOverride,FNiagaraEmitterScalabilityOverride,int>
          (void *param_1,FNiagaraEmitterScalabilityOverride *param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  
  if (param_3 != 0) {
    puVar1 = (uint *)((longlong)param_1 + 0x30);
    puVar2 = (uint *)((longlong)&param_2->_padding_ + 4);
    do {
      FNiagaraPlatformSet::FNiagaraPlatformSet
                ((FNiagaraPlatformSet *)
                 ((longlong)param_1 + (-0x34 - (longlong)param_2) + (longlong)puVar2),
                 (FNiagaraPlatformSet *)(puVar2 + -0xd));
      *puVar1 = *puVar1 ^ (*puVar1 ^ puVar2[-1]) & 1;
      puVar1[1] = *puVar2;
      puVar1[2] = puVar1[2] ^ (puVar1[2] ^ puVar2[1]) & 1;
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 0x10;
      puVar2 = puVar2 + 0x10;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FNiagaraEmitterScalabilitySettings,FNiagaraEmitterScalabilitySettings,int> @ 149267b20

void __cdecl
ConstructItems<FNiagaraEmitterScalabilitySettings,FNiagaraEmitterScalabilitySettings,int>
          (void *param_1,FNiagaraEmitterScalabilitySettings *param_2,int param_3)

{
  float *pfVar1;
  uint *puVar2;
  
  if (param_3 != 0) {
    pfVar1 = &param_2->SpawnCountScale;
    puVar2 = (uint *)((longlong)param_1 + 0x30);
    do {
      FNiagaraPlatformSet::FNiagaraPlatformSet
                ((FNiagaraPlatformSet *)
                 ((longlong)param_1 + (-0x34 - (longlong)param_2) + (longlong)pfVar1),
                 (FNiagaraPlatformSet *)(pfVar1 + -0xd));
      *puVar2 = *puVar2 ^ (*puVar2 ^ (uint)pfVar1[-1]) & 1;
      puVar2[1] = (uint)*pfVar1;
      param_3 = param_3 + -1;
      pfVar1 = pfVar1 + 0xe;
      puVar2 = puVar2 + 0xe;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FNiagaraEventGeneratorProperties,FNiagaraEventGeneratorProperties,int> @ 149267ba0

void __cdecl
ConstructItems<FNiagaraEventGeneratorProperties,FNiagaraEventGeneratorProperties,int>
          (void *param_1,FNiagaraEventGeneratorProperties *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  FNiagaraVariableLayoutInfo *pFVar4;
  int *piVar5;
  int *piVar6;
  
  if (param_3 != 0) {
    piVar5 = (int *)((longlong)param_1 + 0x28);
    piVar6 = &(param_2->DataSetCompiledData).VariableLayouts.ArrayNum;
    do {
      pFVar1 = (ForAnyElementType *)(piVar5 + -6);
      *(int *)((longlong)piVar6 + (longlong)param_1 + (-0x28 - (longlong)param_2)) = piVar6[-10];
      *(undefined8 *)(piVar5 + -9) = *(undefined8 *)(piVar6 + -9);
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar3 = piVar6[-4];
      _Src = *(void **)(piVar6 + -6);
      piVar5[-4] = iVar3;
      if (iVar3 == 0) {
        piVar5[-3] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,iVar3,0,pFVar1,iVar3,piVar5 + -3);
        memcpy(pFVar1->Data,_Src,(longlong)iVar3 * 0xc);
      }
      piVar5[-2] = 0;
      piVar5[-1] = 0;
      iVar3 = *piVar6;
      pFVar4 = (FNiagaraVariableLayoutInfo *)
               (((TArray<FNiagaraVariableLayoutInfo,TSizedDefaultAllocator<32>_> *)(piVar6 + -2))->
               AllocatorInstance).Data;
      *piVar5 = iVar3;
      if (iVar3 == 0) {
        piVar5[1] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,iVar3,0,(ForAnyElementType *)(piVar5 + -2),iVar3,piVar5 + 1);
        ConstructItems<FNiagaraVariableLayoutInfo,FNiagaraVariableLayoutInfo,int>
                  (((ForAnyElementType *)(piVar5 + -2))->Data,pFVar4,iVar3);
      }
      *(undefined8 *)(piVar5 + 2) = *(undefined8 *)(piVar6 + 2);
      piVar5[4] = piVar6[4];
      piVar5[5] = piVar6[5];
      piVar5[6] = piVar6[6];
      piVar5[7] = piVar6[7];
      piVar5[8] = piVar5[8] ^ (piVar5[8] ^ piVar6[8]) & 1U;
      *(char *)(piVar5 + 9) = (char)piVar6[9];
      piVar2 = piVar6 + 10;
      piVar6 = piVar6 + 0x16;
      piVar5[10] = *piVar2;
      piVar5 = piVar5 + 0x16;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FNiagaraEventScriptProperties,FNiagaraEventScriptProperties,int> @ 149267d10

void __cdecl
ConstructItems<FNiagaraEventScriptProperties,FNiagaraEventScriptProperties,int>
          (void *param_1,FNiagaraEventScriptProperties *param_2,int param_3)

{
  bool *pbVar1;
  int iVar2;
  UObject *pUVar3;
  void *_Src;
  FNiagaraEventGeneratorProperties *pFVar4;
  undefined8 uVar5;
  uint uVar6;
  int *piVar7;
  longlong *plVar8;
  
  if (param_3 != 0) {
    piVar7 = (int *)((longlong)param_1 + 0x14);
    plVar8 = &param_2->_padding_;
    do {
      pUVar3 = (UObject *)((FNiagaraEventScriptProperties *)(plVar8 + -4))->_padding_;
      *(UObject **)((longlong)plVar8 + (longlong)param_1 + (-0x20 - (longlong)param_2)) = pUVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      piVar7[-3] = 0;
      piVar7[-2] = 0;
      iVar2 = (int)plVar8[-2];
      _Src = (void *)plVar8[-3];
      piVar7[-1] = iVar2;
      if (iVar2 == 0) {
        *piVar7 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,4,iVar2,0,(ForAnyElementType *)(piVar7 + -3),iVar2,piVar7);
        memcpy(((ForAnyElementType *)(piVar7 + -3))->Data,_Src,(longlong)iVar2 * 0x18);
      }
      piVar7[1] = 0;
      piVar7[2] = 0;
      iVar2 = (int)*plVar8;
      pFVar4 = (FNiagaraEventGeneratorProperties *)plVar8[-1];
      piVar7[3] = iVar2;
      if (iVar2 == 0) {
        piVar7[4] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x58,8,iVar2,0,(ForAnyElementType *)(piVar7 + 1),iVar2,piVar7 + 4);
        ConstructItems<FNiagaraEventGeneratorProperties,FNiagaraEventGeneratorProperties,int>
                  (((ForAnyElementType *)(piVar7 + 1))->Data,pFVar4,iVar2);
      }
      *(EScriptExecutionMode *)(piVar7 + 5) = *(EScriptExecutionMode *)(plVar8 + 1);
      piVar7[6] = *(uint *)((longlong)plVar8 + 0xc);
      piVar7[7] = *(uint *)(plVar8 + 2);
      uVar6 = ((FGuid *)((longlong)plVar8 + 0x14))->B;
      uVar5 = *(undefined8 *)((longlong)plVar8 + 0x1c);
      piVar7[8] = ((FGuid *)((longlong)plVar8 + 0x14))->A;
      piVar7[9] = uVar6;
      *(undefined8 *)(piVar7 + 10) = uVar5;
      *(FName *)(piVar7 + 0xc) = *(FName *)((longlong)plVar8 + 0x24);
      *(bool *)(piVar7 + 0xe) = *(bool *)((longlong)plVar8 + 0x2c);
      piVar7[0xf] = *(uint *)(plVar8 + 6);
      pbVar1 = (bool *)((longlong)plVar8 + 0x34);
      plVar8 = plVar8 + 0xb;
      *(bool *)(piVar7 + 0x10) = *pbVar1;
      piVar7 = piVar7 + 0x16;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FNiagaraOutlinerEmitterInstanceData,FNiagaraOutlinerEmitterInstanceData,int> @ 149267e90

void __cdecl
ConstructItems<FNiagaraOutlinerEmitterInstanceData,FNiagaraOutlinerEmitterInstanceData,int>
          (void *param_1,FNiagaraOutlinerEmitterInstanceData *param_2,int param_3)

{
  ENiagaraExecutionState *pEVar1;
  ENiagaraExecutionState *pEVar2;
  
  if (param_3 != 0) {
    pEVar1 = &param_2->ExecState;
    pEVar2 = (ENiagaraExecutionState *)((longlong)param_1 + 0x14);
    do {
      FString::FString((FString *)
                       ((longlong)param_1 + (-0x14 - (longlong)param_2) + (longlong)pEVar1),
                       (FString *)(pEVar1 + -5));
      *(ENiagaraSimTarget *)(pEVar2 + -1) = *(ENiagaraSimTarget *)(pEVar1 + -1);
      *pEVar2 = *pEVar1;
      pEVar2[1] = pEVar1[1];
      pEVar2[2] = pEVar2[2] ^ (pEVar2[2] ^ pEVar1[2]) & Inactive;
      param_3 = param_3 + -1;
      pEVar1 = pEVar1 + 8;
      pEVar2 = pEVar2 + 8;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FNiagaraOutlinerSystemInstanceData,FNiagaraOutlinerSystemInstanceData,int> @ 149267f20

void __cdecl
ConstructItems<FNiagaraOutlinerSystemInstanceData,FNiagaraOutlinerSystemInstanceData,int>
          (void *param_1,FNiagaraOutlinerSystemInstanceData *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FNiagaraOutlinerEmitterInstanceData *pFVar3;
  float *pfVar4;
  float fVar5;
  uint uVar6;
  int *piVar7;
  TVector<float> *pTVar8;
  
  if (param_3 != 0) {
    piVar7 = (int *)((longlong)param_1 + 0x2c);
    pTVar8 = &param_2->LWCTile;
    do {
      FString::FString((FString *)
                       ((longlong)pTVar8 + (longlong)param_1 + (-0x10 - (longlong)param_2)),
                       (FString *)((longlong)(pTVar8 + -2) + 8));
      pFVar1 = (ForAnyElementType *)(piVar7 + -3);
      *(undefined8 *)(piVar7 + -7) = *(undefined8 *)&pTVar8->field0_0x0;
      piVar7[-5] = (int)(pTVar8->field0_0x0)._s_0.Z;
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar2 = *(int *)(pTVar8 + 2);
      pFVar3 = (FNiagaraOutlinerEmitterInstanceData *)
               (((TArray<FNiagaraOutlinerEmitterInstanceData,TSizedDefaultAllocator<32>_> *)
                ((longlong)(pTVar8 + 1) + 4))->AllocatorInstance).Data;
      piVar7[-1] = iVar2;
      if (iVar2 == 0) {
        *piVar7 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,iVar2,0,pFVar1,iVar2,piVar7);
        ConstructItems<FNiagaraOutlinerEmitterInstanceData,FNiagaraOutlinerEmitterInstanceData,int>
                  (pFVar1->Data,pFVar3,iVar2);
      }
      piVar7[1] = *(int *)((longlong)(pTVar8 + 2) + 8);
      piVar7[2] = *(ENiagaraExecutionState *)(pTVar8 + 3);
      fVar5 = ((FNiagaraScalabilityState *)((longlong)(pTVar8 + 3) + 4))->LastVisibleTime;
      piVar7[3] = (int)((FNiagaraScalabilityState *)((longlong)(pTVar8 + 3) + 4))->Significance;
      piVar7[4] = (int)fVar5;
      piVar7[5] = *(int *)(pTVar8 + 4);
      uVar6 = (piVar7[6] ^ *(uint *)((longlong)(pTVar8 + 4) + 4)) & 1 ^ piVar7[6];
      piVar7[6] = uVar6;
      piVar7[6] = (uVar6 ^ *(uint *)((longlong)(pTVar8 + 4) + 4)) & 2 ^ uVar6;
      *(undefined1 *)(piVar7 + 7) = *(undefined1 *)((longlong)(pTVar8 + 4) + 8);
      *(FNiagaraOutlinerTimingData *)(piVar7 + 8) = *(FNiagaraOutlinerTimingData *)(pTVar8 + 5);
      *(FNiagaraOutlinerTimingData *)(piVar7 + 10) = ((FNiagaraOutlinerTimingData *)(pTVar8 + 5))[1]
      ;
      *(undefined1 *)(piVar7 + 0xc) = *(undefined1 *)((longlong)(pTVar8 + 6) + 4);
      *(undefined1 *)((longlong)piVar7 + 0x31) = *(undefined1 *)((longlong)(pTVar8 + 6) + 5);
      uVar6 = (piVar7[0xd] ^ *(uint *)((longlong)(pTVar8 + 6) + 8)) & 1 ^ piVar7[0xd];
      piVar7[0xd] = uVar6;
      uVar6 = (uVar6 ^ *(uint *)((longlong)(pTVar8 + 6) + 8)) & 2 ^ uVar6;
      piVar7[0xd] = uVar6;
      uVar6 = (uVar6 ^ *(uint *)((longlong)(pTVar8 + 6) + 8)) & 4 ^ uVar6;
      piVar7[0xd] = uVar6;
      uVar6 = (uVar6 ^ *(uint *)((longlong)(pTVar8 + 6) + 8)) & 8 ^ uVar6;
      piVar7[0xd] = uVar6;
      uVar6 = (uVar6 ^ *(uint *)((longlong)(pTVar8 + 6) + 8)) & 0x10 ^ uVar6;
      piVar7[0xd] = uVar6;
      uVar6 = (uVar6 ^ *(uint *)((longlong)(pTVar8 + 6) + 8)) & 0x20 ^ uVar6;
      piVar7[0xd] = uVar6;
      pfVar4 = (float *)(pTVar8 + 6);
      pTVar8 = (TVector<float> *)((longlong)(pTVar8 + 8) + 8);
      piVar7[0xd] = (uVar6 ^ (uint)pfVar4[2]) & 0x40 ^ uVar6;
      piVar7 = piVar7 + 0x1a;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FNiagaraSystemScalabilitySettings,FNiagaraSystemScalabilitySettings,int> @ 1492680d0

void __cdecl
ConstructItems<FNiagaraSystemScalabilitySettings,FNiagaraSystemScalabilitySettings,int>
          (void *param_1,FNiagaraSystemScalabilitySettings *param_2,int param_3)

{
  undefined8 uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  
  if (param_3 != 0) {
    puVar3 = (uint *)((longlong)param_1 + 0x30);
    puVar4 = (uint *)&param_2->field_0x30;
    do {
      FNiagaraPlatformSet::FNiagaraPlatformSet
                ((FNiagaraPlatformSet *)
                 ((longlong)param_1 + (-0x30 - (longlong)param_2) + (longlong)puVar4),
                 (FNiagaraPlatformSet *)(puVar4 + -0xc));
      uVar2 = (*puVar3 ^ *puVar4) & 1 ^ *puVar3;
      *puVar3 = uVar2;
      uVar2 = (uVar2 ^ *puVar4) & 2 ^ uVar2;
      *puVar3 = uVar2;
      *puVar3 = (uVar2 ^ *puVar4) & 4 ^ uVar2;
      puVar3[1] = puVar4[1];
      puVar3[2] = puVar3[2] ^ (puVar3[2] ^ puVar4[2]) & 1;
      puVar3[3] = puVar4[3];
      puVar3[4] = puVar4[4];
      puVar3[5] = puVar4[5];
      puVar3[6] = puVar4[6];
      puVar3[7] = puVar4[7];
      *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(puVar4 + 8);
      puVar3[10] = puVar4[10];
      uVar1 = *(undefined8 *)(puVar4 + 0xd);
      *(undefined8 *)(puVar3 + 0xb) = *(undefined8 *)(puVar4 + 0xb);
      *(undefined8 *)(puVar3 + 0xd) = uVar1;
      uVar1 = *(undefined8 *)(puVar4 + 0x11);
      *(undefined8 *)(puVar3 + 0xf) = *(undefined8 *)(puVar4 + 0xf);
      *(undefined8 *)(puVar3 + 0x11) = uVar1;
      uVar1 = *(undefined8 *)(puVar4 + 0x15);
      *(undefined8 *)(puVar3 + 0x13) = *(undefined8 *)(puVar4 + 0x13);
      *(undefined8 *)(puVar3 + 0x15) = uVar1;
      *(undefined8 *)(puVar3 + 0x17) = *(undefined8 *)(puVar4 + 0x17);
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 0x26;
      puVar4 = puVar4 + 0x26;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FSimulationStageMetaData,FSimulationStageMetaData,int> @ 149268200

void __cdecl
ConstructItems<FSimulationStageMetaData,FSimulationStageMetaData,int>
          (void *param_1,FSimulationStageMetaData *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  FScriptContainerElement *_Src_00;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  
  if (param_3 != 0) {
    piVar5 = (int *)((longlong)param_1 + 0x80);
    piVar6 = &(param_2->InputDataInterfaces).ArrayNum;
    do {
      pFVar1 = (ForAnyElementType *)(piVar5 + -6);
      uVar4 = piVar5[-0xd];
      *(undefined8 *)((longlong)piVar6 + (longlong)param_1 + (-0x80 - (longlong)param_2)) =
           *(undefined8 *)(piVar6 + -0x20);
      *(undefined8 *)(piVar5 + -0x1e) = *(undefined8 *)(piVar6 + -0x1e);
      *(undefined8 *)(piVar5 + -0x1c) = *(undefined8 *)(piVar6 + -0x1c);
      piVar5[-0x1a] = piVar6[-0x1a];
      *(undefined8 *)(piVar5 + -0x19) = *(undefined8 *)(piVar6 + -0x19);
      *(undefined8 *)(piVar5 + -0x17) = *(undefined8 *)(piVar6 + -0x17);
      *(undefined8 *)(piVar5 + -0x15) = *(undefined8 *)(piVar6 + -0x15);
      *(char *)(piVar5 + -0x13) = (char)piVar6[-0x13];
      *(undefined8 *)(piVar5 + -0x12) = *(undefined8 *)(piVar6 + -0x12);
      *(undefined8 *)(piVar5 + -0x10) = *(undefined8 *)(piVar6 + -0x10);
      *(char *)(piVar5 + -0xe) = (char)piVar6[-0xe];
      uVar4 = (uVar4 ^ piVar6[-0xd]) & 1 ^ piVar5[-0xd];
      piVar5[-0xd] = uVar4;
      uVar4 = (uVar4 ^ piVar6[-0xd]) & 2 ^ uVar4;
      piVar5[-0xd] = uVar4;
      uVar4 = (uVar4 ^ piVar6[-0xd]) & 4 ^ uVar4;
      piVar5[-0xd] = uVar4;
      piVar5[-0xd] = (uVar4 ^ piVar6[-0xd]) & 8 ^ uVar4;
      *(undefined8 *)(piVar5 + -0xc) = *(undefined8 *)(piVar6 + -0xc);
      piVar5[-10] = piVar6[-10];
      *(undefined8 *)(piVar5 + -9) = *(undefined8 *)(piVar6 + -9);
      pFVar1->Data = (FScriptContainerElement *)0x0;
      iVar3 = piVar6[-4];
      _Src = *(void **)(piVar6 + -6);
      piVar5[-4] = iVar3;
      if (iVar3 == 0) {
        piVar5[-3] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,iVar3,0,pFVar1,iVar3,piVar5 + -3);
        memcpy(pFVar1->Data,_Src,(longlong)iVar3 << 3);
      }
      piVar5[-2] = 0;
      piVar5[-1] = 0;
      iVar3 = *piVar6;
      _Src_00 = (((TArray<FName,TSizedDefaultAllocator<32>_> *)(piVar6 + -2))->AllocatorInstance).
                Data;
      *piVar5 = iVar3;
      if (iVar3 == 0) {
        piVar5[1] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,iVar3,0,(ForAnyElementType *)(piVar5 + -2),iVar3,piVar5 + 1);
        memcpy(((ForAnyElementType *)(piVar5 + -2))->Data,_Src_00,(longlong)iVar3 << 3);
      }
      piVar5[2] = piVar6[2];
      *(undefined8 *)(piVar5 + 3) = *(undefined8 *)(piVar6 + 3);
      *(char *)(piVar5 + 5) = (char)piVar6[5];
      *(undefined1 *)((longlong)piVar5 + 0x15) = *(undefined1 *)((longlong)piVar6 + 0x15);
      *(undefined8 *)(piVar5 + 6) = *(undefined8 *)(piVar6 + 6);
      piVar2 = piVar6 + 8;
      piVar6 = piVar6 + 0x2a;
      piVar5[8] = *piVar2;
      piVar5 = piVar5 + 0x2a;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TSharedPtr<FNiagaraBoundsCalculator,1>,TSharedPtr<FNiagaraBoundsCalculator,1>,int> @ 149268410

void __cdecl
ConstructItems<TSharedPtr<FNiagaraBoundsCalculator,1>,TSharedPtr<FNiagaraBoundsCalculator,1>,int>
          (void *param_1,TSharedPtr<FNiagaraBoundsCalculator,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FNiagaraBoundsCalculator **)(lVar2 + (longlong)param_2) = param_2->Object;
      pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(lVar2 + 8 + (longlong)param_2) = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FNiagaraDataSetAccessor<FNiagaraPosition>,int> @ 149268450

void __cdecl
DefaultConstructItems<FNiagaraDataSetAccessor<FNiagaraPosition>,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined1 *)param_1 = 1;
    *(undefined4 *)((longlong)param_1 + 4) = 0xffffffff;
    param_1 = (void *)((longlong)param_1 + 8);
  }
  return;
}

// DefaultConstructItems<FNiagaraParameterDirectBinding<int>,int> @ 149268480

void __cdecl
DefaultConstructItems<FNiagaraParameterDirectBinding<int>,int>(void *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (param_2 != 0) {
    puVar2 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar2[-2] = 0;
      puVar2[-1] = 0;
      *puVar2 = 0;
      iVar1 = FNiagaraTypeDefinitionHandle::Register
                        ((FNiagaraTypeDefinitionHandle *)(puVar2 + 1),
                         &FNiagaraTypeDefinition::Vec4Def);
      *(int *)(puVar2 + 1) = iVar1;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2 = puVar2 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<`FNiagaraDebugHud::DrawGpuComputeOverriew'::__l2::FSimpleTableDraw::FColumn,int> @ 1492684f0

void __cdecl
DefaultConstructItems<_FNiagaraDebugHud::DrawGpuComputeOverriew_::__l2::FSimpleTableDraw::FColumn,int>
          (void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 0xc);
    do {
      puVar1[-3] = 0x43160000;
      ((TVector2<float>_u_0 *)(puVar1 + -2))->_s_0 =
           (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      *(undefined4 **)(puVar1 + 1) = puVar1 + 9;
      *(undefined4 **)(puVar1 + 3) = puVar1 + 9;
      *(undefined4 **)(puVar1 + 5) = puVar1 + 0x49;
      *puVar1 = 0;
      *(undefined2 *)(puVar1 + 7) = 0;
      puVar1 = puVar1 + 0x4c;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FNiagaraEmptyUAVPool::FEmptyUAV,int> @ 149268550

void __cdecl DefaultConstructItems<FNiagaraEmptyUAVPool::FEmptyUAV,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FNiagaraDataSetDebugAccessor,int> @ 149268580

void __cdecl DefaultConstructItems<FNiagaraDataSetDebugAccessor,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      *(undefined2 *)(puVar1 + 1) = 0;
      *(undefined1 *)((longlong)puVar1 + 10) = 0;
      *(undefined8 *)((longlong)puVar1 + 0xc) = 0xffffffffffffffff;
      *(undefined4 *)((longlong)puVar1 + 0x14) = 0xffffffff;
      *(undefined2 *)(puVar1 + 3) = 0;
      *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x24) = 0;
      puVar1[5] = 0xffffffffffffffff;
      *(undefined4 *)(puVar1 + 6) = 0xffffffff;
      puVar1 = puVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FNiagaraDebugHUDVariable,int> @ 1492685e0

void __cdecl DefaultConstructItems<FNiagaraDebugHUDVariable,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      *(undefined1 *)(puVar1 + -2) = 1;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FNiagaraEventHandlingInfo,int> @ 149268610

void __cdecl DefaultConstructItems<FNiagaraEventHandlingInfo,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 0x48);
    do {
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      *(undefined8 *)(puVar1 + 1) = 0x10;
      *(undefined8 *)(puVar1 + 4) = 0;
      *(undefined8 *)(puVar1 + 6) = 0;
      *(undefined8 *)(puVar1 + 8) = 0;
      *(undefined8 *)(puVar1 + 10) = 0;
      puVar1 = puVar1 + 0x1e;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FNiagaraOutlinerEmitterInstanceData,int> @ 149268650

void __cdecl
DefaultConstructItems<FNiagaraOutlinerEmitterInstanceData,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(uint *)(lVar1 + 0x10) = *(uint *)(lVar1 + 0x10) & 0xfffffffe;
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined1 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 8) = 5;
      lVar1 = lVar1 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FNiagaraOutlinerSystemInstanceData,int> @ 149268690

void __cdecl
DefaultConstructItems<FNiagaraOutlinerSystemInstanceData,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + 4) = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      *(float *)(lVar1 + 0xc) = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      *(uint *)(lVar1 + 0x38) = *(uint *)(lVar1 + 0x38) & 0xfffffffc;
      *(uint *)(lVar1 + 0x54) = *(uint *)(lVar1 + 0x54) & 0xffffff80;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined8 *)(lVar1 + 0x1c) = 0;
      *(undefined4 *)(lVar1 + 0x24) = 5;
      *(undefined4 *)(lVar1 + 0x28) = 5;
      *(undefined8 *)(lVar1 + 0x2c) = 0x3f800000;
      *(undefined2 *)(lVar1 + 0x34) = 0xffff;
      *(undefined1 *)(lVar1 + 0x36) = 1;
      *(undefined1 *)(lVar1 + 0x3c) = 0;
      *(undefined8 *)(lVar1 + 0x40) = 0;
      *(undefined8 *)(lVar1 + 0x48) = 0;
      *(undefined2 *)(lVar1 + 0x50) = 0;
      param_2 = param_2 + -1;
      lVar1 = lVar1 + 0x68;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FNiagaraScriptExecutionContext,int> @ 149268710

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl DefaultConstructItems<FNiagaraScriptExecutionContext,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x2a8);
    do {
      FNiagaraScriptExecutionContextBase::FNiagaraScriptExecutionContextBase
                ((FNiagaraScriptExecutionContextBase *)(puVar1 + -0x55));
      puVar1[-0x55] = &___7FNiagaraScriptExecutionContext__6B_;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 0x56;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FNiagaraSimCacheCaptureInfo,int> @ 149268790

void __cdecl DefaultConstructItems<FNiagaraSimCacheCaptureInfo,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 10;
      *(undefined4 *)(puVar1 + 2) = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      *(undefined4 *)(puVar1 + 6) = 0;
      puVar1 = puVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FNiagaraSpawnInfo,int> @ 1492687e0

void __cdecl DefaultConstructItems<FNiagaraSpawnInfo,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0x3f800000;
      puVar1 = puVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<NiagaraDebugLocal::FParameterStoreVariable,int> @ 149268810

void __cdecl
DefaultConstructItems<NiagaraDebugLocal::FParameterStoreVariable,int>(void *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (param_2 != 0) {
    puVar2 = (undefined8 *)((longlong)param_1 + 8);
    do {
      *(undefined4 *)((longlong)puVar2 + -4) = 0xffffffff;
      *puVar2 = 0;
      iVar1 = FNiagaraTypeDefinitionHandle::Register
                        ((FNiagaraTypeDefinitionHandle *)(puVar2 + 1),
                         &FNiagaraTypeDefinition::Vec4Def);
      *(int *)(puVar2 + 1) = iVar1;
      puVar2 = (undefined8 *)((longlong)puVar2 + 0x14);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNiagaraParameterDirectBinding<int>,int> @ 1492688a0

void __cdecl
DestructItems<FNiagaraParameterDirectBinding<int>,int>
          (FNiagaraParameterDirectBinding<int> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &(param_1->BoundVariable).VarData;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)((longlong)(pTVar2 + 3) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<`FNiagaraDebugHud::DrawGpuComputeOverriew'::__l2::FSimpleTableDraw::FColumn,int> @ 1492688e0

void __cdecl
DestructItems<_FNiagaraDebugHud::DrawGpuComputeOverriew_::__l2::FSimpleTableDraw::FColumn,int>
          (FColumn *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
              ((TStringBuilderBase<wchar_t> *)&param_1->AllRowsText);
    param_1 = (FColumn *)(&param_1->AllRowsText + 1);
  }
  return;
}

// DestructItems<FNiagaraEmptyUAVPool::FEmptyUAV,int> @ 149268920

void __cdecl DestructItems<FNiagaraEmptyUAVPool::FEmptyUAV,int>(FEmptyUAV *param_1,int param_2)

{
  FRHIBuffer *pFVar1;
  FRHITexture *this;
  FRHIUnorderedAccessView *this_00;
  TRefCountPtr<FRHITexture> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Texture;
    do {
      pFVar1 = (((FEmptyUAV *)(pTVar2 + -1))->Buffer).Reference;
      if (pFVar1 != (FRHIBuffer *)0x0) {
        (((FEmptyUAV *)(pTVar2 + -1))->Buffer).Reference = (FRHIBuffer *)0x0;
        FRHIResource::Release((FRHIResource *)pFVar1);
      }
      this = pTVar2->Reference;
      if (this != (FRHITexture *)0x0) {
        pTVar2->Reference = (FRHITexture *)0x0;
        FRHIResource::Release((FRHIResource *)this);
      }
      this_00 = ((TRefCountPtr<FRHIUnorderedAccessView> *)(pTVar2 + 1))->Reference;
      if (this_00 != (FRHIUnorderedAccessView *)0x0) {
        ((TRefCountPtr<FRHIUnorderedAccessView> *)(pTVar2 + 1))->Reference =
             (FRHIUnorderedAccessView *)0x0;
        FRHIResource::Release((FRHIResource *)this_00);
      }
      if (((TRefCountPtr<FRHIUnorderedAccessView> *)(pTVar2 + 1))->Reference !=
          (FRHIUnorderedAccessView *)0x0) {
        FRHIResource::Release
                  ((FRHIResource *)
                   ((TRefCountPtr<FRHIUnorderedAccessView> *)(pTVar2 + 1))->Reference);
      }
      if (pTVar2->Reference != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)pTVar2->Reference);
      }
      pFVar1 = (((FEmptyUAV *)(pTVar2 + -1))->Buffer).Reference;
      if (pFVar1 != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar1);
      }
      pTVar2 = pTVar2 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNiagaraDebugHUDVariable,int> @ 1492689c0

void __cdecl
DestructItems<FNiagaraDebugHUDVariable,int>(FNiagaraDebugHUDVariable *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->Name;
    do {
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = (FString *)((longlong)(pFVar2 + 1) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNiagaraEmitterScalabilityOverride,int> @ 149268a00

void __cdecl
DestructItems<FNiagaraEmitterScalabilityOverride,int>
          (FNiagaraEmitterScalabilityOverride *param_1,int param_2)

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

// DestructItems<FNiagaraEmitterScalabilitySettings,int> @ 149268a50

void __cdecl
DestructItems<FNiagaraEmitterScalabilitySettings,int>
          (FNiagaraEmitterScalabilitySettings *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Platforms).CVarConditions.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->Platforms).DeviceProfileStates.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FNiagaraEventGeneratorProperties,int> @ 149268aa0

void __cdecl
DestructItems<FNiagaraEventGeneratorProperties,int>
          (FNiagaraEventGeneratorProperties *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FNiagaraVariableLayoutInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &(param_1->DataSetCompiledData).VariableLayouts;
    do {
      DestructItems<FNiagaraVariableLayoutInfo,int>
                ((FNiagaraVariableLayoutInfo *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FNiagaraDataSetCompiledData *)(pTVar2 + -1))->Variables).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<FNiagaraVariableLayoutInfo,TSizedDefaultAllocator<32>_> *)
               ((longlong)(pTVar2 + 5) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNiagaraEventHandlingInfo,int> @ 149268b00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
DestructItems<FNiagaraEventHandlingInfo,int>(FNiagaraEventHandlingInfo *param_1,int param_2)

{
  FNiagaraDataBuffer *pFVar1;
  code *pcVar2;
  bool bVar3;
  TRefCountPtr<FNiagaraDataBuffer> *pTVar4;
  
  if (param_2 != 0) {
    pTVar4 = &param_1->EventData;
    do {
      pFVar1 = pTVar4->Reference;
      if (pFVar1 != (FNiagaraDataBuffer *)0x0) {
        pTVar4->Reference = (FNiagaraDataBuffer *)0x0;
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
      pFVar1 = pTVar4->Reference;
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
      if (*(ForElementType<int> *)(pTVar4 + -3) != (ForElementType<int>)0x0) {
        FMemory::Free((void *)*(ForElementType<int> *)(pTVar4 + -3));
      }
      pTVar4 = pTVar4 + 0xf;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNiagaraEventScriptProperties,int> @ 149268be0

void __cdecl
DestructItems<FNiagaraEventScriptProperties,int>(FNiagaraEventScriptProperties *param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = &param_1->_padding_;
    do {
      DestructItems<FNiagaraEventGeneratorProperties,int>
                ((FNiagaraEventGeneratorProperties *)*plVar1,(int)plVar1[1]);
      if ((void *)*plVar1 != (void *)0x0) {
        FMemory::Free((void *)*plVar1);
      }
      if ((void *)plVar1[-2] != (void *)0x0) {
        FMemory::Free((void *)plVar1[-2]);
      }
      plVar1 = plVar1 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNiagaraOutlinerEmitterInstanceData,int> @ 149268c40

void __cdecl
DestructItems<FNiagaraOutlinerEmitterInstanceData,int>
          (FNiagaraOutlinerEmitterInstanceData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->EmitterName).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FNiagaraOutlinerSystemInstanceData,int> @ 149268c80

void __cdecl
DestructItems<FNiagaraOutlinerSystemInstanceData,int>
          (FNiagaraOutlinerSystemInstanceData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FNiagaraOutlinerEmitterInstanceData,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Emitters;
    do {
      DestructItems<FNiagaraOutlinerEmitterInstanceData,int>
                ((FNiagaraOutlinerEmitterInstanceData *)(pTVar2->AllocatorInstance).Data,
                 pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FNiagaraOutlinerSystemInstanceData *)(pTVar2 + -2))->ComponentName).Data.
               AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<FNiagaraOutlinerEmitterInstanceData,TSizedDefaultAllocator<32>_> *)
               ((longlong)(pTVar2 + 6) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNiagaraScriptExecutionContext,int> @ 149268ce0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
DestructItems<FNiagaraScriptExecutionContext,int>
          (FNiagaraScriptExecutionContext *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->LocalFunctionTable;
    do {
      DestructItems<TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>,int>
                ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
                  *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      FNiagaraScriptExecutionContextBase::~FNiagaraScriptExecutionContextBase
                ((FNiagaraScriptExecutionContextBase *)(pTVar2 + -0x2a));
      pTVar2 = pTVar2 + 0x2b;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNiagaraSimCacheCaptureInfo,int> @ 149268d50

void __cdecl
DestructItems<FNiagaraSimCacheCaptureInfo,int>(FNiagaraSimCacheCaptureInfo *param_1,int param_2)

{
  TStrongObjectPtr<UNiagaraSimCache,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  *pTVar1;
  
  if (param_2 != 0) {
    pTVar1 = &param_1->SimCache;
    do {
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(pTVar1 + 1));
      if (pTVar1->Object != (UObject *)0x0) {
        UEStrongObjectPtr_Private::ReleaseUObject(pTVar1->Object);
        pTVar1->Object = (UObject *)0x0;
      }
      pTVar1 = pTVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNiagaraSystemScalabilitySettings,int> @ 149268db0

void __cdecl
DestructItems<FNiagaraSystemScalabilitySettings,int>
          (FNiagaraSystemScalabilitySettings *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Platforms).CVarConditions.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->Platforms).DeviceProfileStates.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn,int> @ 149268e00

void __cdecl
DestructItems<_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn,int>
          (FOverviewColumn *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&(param_1->SystemDrawFunc).field_0x28;
    do {
      if (plVar2[-5] != 0) {
        plVar1 = plVar2 + -3;
        if ((longlong *)*plVar2 != (longlong *)0x0) {
          plVar1 = (longlong *)*plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      if ((void *)plVar2[-10] != (void *)0x0) {
        FMemory::Free((void *)plVar2[-10]);
      }
      if ((void *)plVar2[-0xc] != (void *)0x0) {
        FMemory::Free((void *)plVar2[-0xc]);
      }
      if ((void *)plVar2[-0xe] != (void *)0x0) {
        FMemory::Free((void *)plVar2[-0xe]);
      }
      plVar2 = plVar2 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FSimulationStageMetaData,int> @ 149268e80

void __cdecl
DestructItems<FSimulationStageMetaData,int>(FSimulationStageMetaData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->OutputDestinations;
    do {
      pFVar1 = pTVar2[1].AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)(pTVar2 + 10) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FVersionedNiagaraEmitterData,int> @ 149268ed0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
DestructItems<FVersionedNiagaraEmitterData,int>(FVersionedNiagaraEmitterData *param_1,int param_2)

{
  TSharedPtr<FNiagaraBoundsCalculator,1> *pTVar1;
  undefined4 *puVar2;
  
  if (param_2 != 0) {
    puVar2 = (undefined4 *)&(param_1->StatDatabase).StatCaptures.field_0x48;
    do {
      if (*(void **)(puVar2 + 6) != (void *)0x0) {
        FMemory::Free(*(void **)(puVar2 + 6));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)(puVar2 + 4));
      *puVar2 = 0;
      if (*(void **)(puVar2 + -2) != (void *)0x0) {
        FMemory::Free(*(void **)(puVar2 + -2));
      }
      TSparseArray<TSparseSetElement<TTuple<TTuple<unsigned___int64,enum_ENiagaraScriptUsage>,TMap<TStatIdData_const_*,FStatExecutionTimer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,FStatExecutionTimer,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<TTuple<unsigned___int64,enum_ENiagaraScriptUsage>,TMap<TStatIdData_const_*,FStatExecutionTimer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,FStatExecutionTimer,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (puVar2 + -0x12);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)(puVar2 + -0x14));
      puVar2[-0x1a] = 0;
      if (*(void **)(puVar2 + -0x1c) != (void *)0x0) {
        FMemory::Free(*(void **)(puVar2 + -0x1c));
      }
      TSparseArray<TSparseSetElement<TTuple<unsigned___int64,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar2 + -0x2c));
      pTVar1 = *(TSharedPtr<FNiagaraBoundsCalculator,1> **)(puVar2 + -0x30);
      if (*(TSharedPtr<FNiagaraBoundsCalculator,1> **)(puVar2 + -0x30) ==
          (TSharedPtr<FNiagaraBoundsCalculator,1> *)0x0) {
        pTVar1 = (TSharedPtr<FNiagaraBoundsCalculator,1> *)(puVar2 + -0x34);
      }
      DestructItems<TSharedPtr<FNiagaraBoundsCalculator,1>,int>(pTVar1,puVar2[-0x2e]);
      if (*(void **)(puVar2 + -0x30) != (void *)0x0) {
        FMemory::Free(*(void **)(puVar2 + -0x30));
      }
      if (*(void **)(puVar2 + -0x42) != (void *)0x0) {
        FMemory::Free(*(void **)(puVar2 + -0x42));
      }
      if (*(void **)(puVar2 + -0x46) != (void *)0x0) {
        FMemory::Free(*(void **)(puVar2 + -0x46));
      }
      if (*(void **)(puVar2 + -0x4a) != (void *)0x0) {
        FMemory::Free(*(void **)(puVar2 + -0x4a));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)(puVar2 + -0x4e));
      if (*(void **)(puVar2 + -0x54) != (void *)0x0) {
        FMemory::Free(*(void **)(puVar2 + -0x54));
      }
      if (*(void **)(puVar2 + -0x58) != (void *)0x0) {
        FMemory::Free(*(void **)(puVar2 + -0x58));
      }
      if (*(void **)(puVar2 + -0x5c) != (void *)0x0) {
        FMemory::Free(*(void **)(puVar2 + -0x5c));
      }
      puVar2[-0x5e] = 0;
      if (*(void **)(puVar2 + -0x60) != (void *)0x0) {
        FMemory::Free(*(void **)(puVar2 + -0x60));
      }
      TSparseArray<TSparseSetElement<TTuple<FNiagaraVariableBase,FNiagaraVariableBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FNiagaraVariableBase,FNiagaraVariableBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FNiagaraVariableBase,FNiagaraVariableBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar2 + -0x70));
      if (*(void **)(puVar2 + -0x74) != (void *)0x0) {
        FMemory::Free(*(void **)(puVar2 + -0x74));
      }
      FNiagaraParameterStore::~FNiagaraParameterStore((FNiagaraParameterStore *)(puVar2 + -0x96));
      DestructItems<FNiagaraEventGeneratorProperties,int>
                (*(FNiagaraEventGeneratorProperties **)(puVar2 + -0x9a),puVar2[-0x98]);
      if (*(void **)(puVar2 + -0x9a) != (void *)0x0) {
        FMemory::Free(*(void **)(puVar2 + -0x9a));
      }
      if (*(void **)(puVar2 + -0x9e) != (void *)0x0) {
        FMemory::Free(*(void **)(puVar2 + -0x9e));
      }
      DestructItems<FNiagaraEventGeneratorProperties,int>
                (*(FNiagaraEventGeneratorProperties **)(puVar2 + -0xa4),puVar2[-0xa2]);
      if (*(void **)(puVar2 + -0xa4) != (void *)0x0) {
        FMemory::Free(*(void **)(puVar2 + -0xa4));
      }
      if (*(void **)(puVar2 + -0xa8) != (void *)0x0) {
        FMemory::Free(*(void **)(puVar2 + -0xa8));
      }
      if (*(void **)(puVar2 + -0xae) != (void *)0x0) {
        FMemory::Free(*(void **)(puVar2 + -0xae));
      }
      DestructItems<FNiagaraEmitterScalabilityOverride,int>
                (*(FNiagaraEmitterScalabilityOverride **)(puVar2 + -0xb6),puVar2[-0xb4]);
      if (*(void **)(puVar2 + -0xb6) != (void *)0x0) {
        FMemory::Free(*(void **)(puVar2 + -0xb6));
      }
      if (*(void **)(puVar2 + -0xbe) != (void *)0x0) {
        FMemory::Free(*(void **)(puVar2 + -0xbe));
      }
      if (*(void **)(puVar2 + -0xc2) != (void *)0x0) {
        FMemory::Free(*(void **)(puVar2 + -0xc2));
      }
      DestructItems<FNiagaraEventScriptProperties,int>
                (*(FNiagaraEventScriptProperties **)(puVar2 + -0xc6),puVar2[-0xc4]);
      if (*(void **)(puVar2 + -0xc6) != (void *)0x0) {
        FMemory::Free(*(void **)(puVar2 + -0xc6));
      }
      if (*(longlong **)(puVar2 + -0xde) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(puVar2 + -0xde) + 0x10))();
      }
      puVar2 = puVar2 + 0xf2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TArray<FNiagaraDataSetDebugAccessor,TSizedDefaultAllocator<32>_>,int> @ 149269150

void __cdecl
DestructItems<TArray<FNiagaraDataSetDebugAccessor,TSizedDefaultAllocator<32>_>,int>
          (TArray<FNiagaraDataSetDebugAccessor,TSizedDefaultAllocator<32>_> *param_1,int param_2)

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

// DestructItems<TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>,int> @ 149269190

void __cdecl
DestructItems<TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>,int>
          (TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
           *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TSharedPtr<FNiagaraBoundsCalculator,1>,int> @ 1492691d0

void __cdecl
DestructItems<TSharedPtr<FNiagaraBoundsCalculator,1>,int>
          (TSharedPtr<FNiagaraBoundsCalculator,1> *param_1,int param_2)

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

// DestructItems<TSharedPtr<FNiagaraDataSetReadback,1>,int> @ 149269210

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
DestructItems<TSharedPtr<FNiagaraDataSetReadback,1>,int>
          (TSharedPtr<FNiagaraDataSetReadback,1> *param_1,int param_2)

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

// Enqueue<TRenderCommandTag<`FNiagaraEmitterInstanceImpl::WaitForDebugInfo'::__l8::TSTR_CaptureCommand1183>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14926b6b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FNiagaraEmitterInstanceImpl::WaitForDebugInfo_::__l8::TSTR_CaptureCommand1183>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FNiagaraEmitterInstanceImpl::WaitForDebugInfo'::__l8::TSTR_CaptureCommand1183>
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
      if (bVar8) goto LAB_14926b801;
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
    goto LAB_14926b9f5;
  }
LAB_14926b801:
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
LAB_14926b8df:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14926b8df;
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
LAB_14926b9f5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FNiagaraEmitterInstanceImpl::~FNiagaraEmitterInstanceImpl'::__l5::TSTR_FDeleteContextCommand140>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14926ba30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FNiagaraEmitterInstanceImpl::~FNiagaraEmitterInstanceImpl_::__l5::TSTR_FDeleteContextCommand140>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FNiagaraEmitterInstanceImpl::~FNiagaraEmitterInstanceImpl'::__l5::TSTR_FDeleteContextCommand140>
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
      if (bVar8) goto LAB_14926bb81;
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
    goto LAB_14926bd75;
  }
LAB_14926bb81:
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
LAB_14926bc5f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14926bc5f;
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
LAB_14926bd75:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FNiagaraDataSetReadback::EnqueueReadback'::__l19::TSTR_NiagaraDataSetReadback38>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14926bdb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FNiagaraDataSetReadback::EnqueueReadback_::__l19::TSTR_NiagaraDataSetReadback38>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FNiagaraDataSetReadback::EnqueueReadback'::__l19::TSTR_NiagaraDataSetReadback38>
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
      if (bVar8) goto LAB_14926bf01;
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
    goto LAB_14926c0f5;
  }
LAB_14926bf01:
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
LAB_14926bfdf:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14926bfdf;
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
LAB_14926c0f5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FNiagaraDataSetReadback::ImmediateReadback'::__l5::TSTR_NiagaraFlushReadback84>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14926c130

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FNiagaraDataSetReadback::ImmediateReadback_::__l5::TSTR_NiagaraFlushReadback84>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FNiagaraDataSetReadback::ImmediateReadback'::__l5::TSTR_NiagaraFlushReadback84>
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
      if (bVar8) goto LAB_14926c281;
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
    goto LAB_14926c475;
  }
LAB_14926c281:
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
LAB_14926c35f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14926c35f;
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
LAB_14926c475:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FNiagaraEmitterInstanceImpl::Tick'[::D]::TSTR_NiagaraReadbackGpuSim1383>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14926c4b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FNiagaraEmitterInstanceImpl::Tick_[::D]::TSTR_NiagaraReadbackGpuSim1383>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FNiagaraEmitterInstanceImpl::Tick'[::D]::TSTR_NiagaraReadbackGpuSim1383>
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
      if (bVar8) goto LAB_14926c601;
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
    goto LAB_14926c7f5;
  }
LAB_14926c601:
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
LAB_14926c6df:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14926c6df;
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
LAB_14926c7f5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FNiagaraEmitterInstanceImpl::Tick'::__l245::TSTR_UpdateConstantBuffer1483>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14926c830

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FNiagaraEmitterInstanceImpl::Tick_::__l245::TSTR_UpdateConstantBuffer1483>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FNiagaraEmitterInstanceImpl::Tick'::__l245::TSTR_UpdateConstantBuffer1483>
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
      if (bVar8) goto LAB_14926c981;
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
    goto LAB_14926cb75;
  }
LAB_14926c981:
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
LAB_14926ca5f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14926ca5f;
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
LAB_14926cb75:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// FindByPredicate<`FVersionedNiagaraEmitterData::GetSimulationStageById'::__l2::<lambda_1>_> @ 14926cbb0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TObjectPtr<UNiagaraSimulationStageBase> * __thiscall
TArray<TObjectPtr<UNiagaraSimulationStageBase>,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FVersionedNiagaraEmitterData::GetSimulationStageById_::__l2::<lambda_1>_>
          (TArray<TObjectPtr<UNiagaraSimulationStageBase>,TSizedDefaultAllocator<32>_> *this,
          <lambda_1> param_1)

{
  TObjectPtr<UNiagaraSimulationStageBase>_u_0 *pTVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  TObjectPtr<UNiagaraSimulationStageBase>_u_0 *pTVar4;
  
  pTVar4 = (TObjectPtr<UNiagaraSimulationStageBase>_u_0 *)(this->AllocatorInstance).Data;
  pTVar1 = pTVar4 + this->ArrayNum;
  if (pTVar4 != pTVar1) {
    do {
      uVar2 = *(undefined8 *)(*(longlong *)((longlong)pTVar4->DebugPtr + 0x28) + 0x3c);
      uVar3 = *(undefined8 *)(*(longlong *)((longlong)pTVar4->DebugPtr + 0x28) + 0x34);
      if ((((uint)((ulonglong)uVar2 >> 0x20) == (param_1.ScriptUsageId)->D &&
           (uint)((ulonglong)uVar3 >> 0x20) == (param_1.ScriptUsageId)->B) &&
          (param_1.ScriptUsageId)->C == (uint)uVar2) && (param_1.ScriptUsageId)->A == (uint)uVar3) {
        return (TObjectPtr<UNiagaraSimulationStageBase> *)pTVar4;
      }
      pTVar4 = pTVar4 + 1;
    } while (pTVar4 != pTVar1);
  }
  return (TObjectPtr<UNiagaraSimulationStageBase> *)0x0;
}

// FindVariablesByWildcard<TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_>,`NiagaraDebugLocal::FindSystemVariablesByWildcard'::__l2::<lambda_1>_> @ 14926d8c0

void __cdecl
NiagaraDebugLocal::
FindVariablesByWildcard<TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_>,_NiagaraDebugLocal::FindSystemVariablesByWildcard_::__l2::<lambda_1>_>
          (TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FNiagaraDebugHUDVariable,TSizedDefaultAllocator<32>_> *param_2,<lambda_1> *param_3)

{
  int *piVar1;
  FName *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  int iVar5;
  FCachedVariables *pFVar6;
  <lambda_1> *p<Var7;
  bool bVar8;
  int iVar9;
  wchar_t *pwVar10;
  FScriptContainerElement *pFVar11;
  FNiagaraDataSetDebugAccessor *this;
  int iVar12;
  FName *this_00;
  undefined1 local_res10 [8];
  <lambda_1> *local_res18;
  FString local_68;
  FName local_58;
  
  if (param_2->ArrayNum == 0) {
    return;
  }
  iVar4 = param_1->ArrayNum;
  this_00 = (FName *)(param_1->AllocatorInstance).Data;
  pFVar2 = (FName *)((longlong)this_00 + (longlong)iVar4 * 0xc);
  local_res18 = param_3;
LAB_14926d905:
  if (param_1->ArrayNum != iVar4) {
    `TCheckedPointerIterator<FNiagaraVariableBase_const_,int,0>::operator!='::__l2::<lambda_1>::
    operator()(local_res10);
  }
  if (this_00 == pFVar2) {
    return;
  }
  ::FName::ToString(this_00,&local_68);
  iVar9 = param_2->ArrayNum;
  pFVar11 = (param_2->AllocatorInstance).Data;
  pFVar3 = pFVar11 + (longlong)iVar9 * 0x18;
  do {
    if (param_2->ArrayNum != iVar9) {
      `TCheckedPointerIterator<FNiagaraDebugHUDVariable_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res10);
    }
    if (pFVar11 == pFVar3) goto LAB_14926da08;
    if (*pFVar11 != (FScriptContainerElement)0x0) {
      iVar5 = *(int *)(pFVar11 + 0x10);
      iVar12 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar12 = 0;
      }
      if (0 < iVar12) {
        if (iVar5 == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = *(wchar_t **)(pFVar11 + 8);
        }
        bVar8 = ::FString::MatchesWildcard(&local_68,pwVar10,iVar12,IgnoreCase);
        p<Var7 = local_res18;
        if (bVar8) break;
      }
    }
    pFVar11 = pFVar11 + 0x18;
  } while( true );
  local_58 = *this_00;
  pFVar6 = *local_res18->CachedVariables;
  piVar1 = &(pFVar6->SystemVariables).ArrayMax;
  iVar9 = (pFVar6->SystemVariables).ArrayNum;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x840,&(pFVar6->SystemVariables).AllocatorInstance,piVar1);
  }
  (pFVar6->SystemVariables).ArrayNum = iVar9 + 1;
  this = (FNiagaraDataSetDebugAccessor *)
         ((pFVar6->SystemVariables).AllocatorInstance.Data + (longlong)iVar9 * 0x40);
  DefaultConstructItems<FNiagaraDataSetDebugAccessor,int>(this,1);
  FNiagaraDataSetDebugAccessor::Init(this,p<Var7->SystemCompiledData,local_58);
LAB_14926da08:
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  this_00 = (FName *)&this_00[1].Number;
  goto LAB_14926d905;
}

// FindVariablesByWildcard<TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_>,`NiagaraDebugLocal::GetCachedVariables'::__l22::<lambda_1>_> @ 14926da50

void __cdecl
NiagaraDebugLocal::
FindVariablesByWildcard<TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_>,_NiagaraDebugLocal::GetCachedVariables_::__l22::<lambda_1>_>
          (TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FNiagaraDebugHUDVariable,TSizedDefaultAllocator<32>_> *param_2,<lambda_1> *param_3)

{
  FName *pFVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  FCachedVariables *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  wchar_t *pwVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  FName *this;
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  FString local_70;
  FName local_60;
  uint local_58;
  
  if (param_2->ArrayNum == 0) {
    return;
  }
  iVar2 = param_1->ArrayNum;
  this = (FName *)(param_1->AllocatorInstance).Data;
  pFVar1 = (FName *)((longlong)this + (longlong)iVar2 * 0xc);
LAB_14926daa0:
  if (param_1->ArrayNum != iVar2) {
    local_res10[0] = 0;
    `TCheckedPointerIterator<FNiagaraVariableBase_const_,int,0>::operator!='::__l2::<lambda_1>::
    operator()(local_res10);
  }
  if (this == pFVar1) {
    return;
  }
  ::FName::ToString(this,&local_70);
  iVar9 = param_2->ArrayNum;
  pFVar11 = (param_2->AllocatorInstance).Data;
  pFVar12 = pFVar11 + (longlong)iVar9 * 0x18;
  do {
    if (param_2->ArrayNum != iVar9) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FNiagaraDebugHUDVariable_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res20);
    }
    if (pFVar11 == pFVar12) goto LAB_14926dc07;
    if (*pFVar11 != (FScriptContainerElement)0x0) {
      iVar3 = *(int *)(pFVar11 + 0x10);
      iVar13 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar13 = 0;
      }
      if (0 < iVar13) {
        if (iVar3 == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = *(wchar_t **)(pFVar11 + 8);
        }
        bVar7 = ::FString::MatchesWildcard(&local_70,pwVar10,iVar13,IgnoreCase);
        if (bVar7) break;
      }
    }
    pFVar11 = pFVar11 + 0x18;
  } while( true );
  local_58 = this[1].ComparisonIndex.Value;
  local_60 = *this;
  pFVar5 = *param_3->CachedVariables;
  uVar4 = *param_3->iEmitter;
  uVar8 = 0;
  if ((int)uVar4 < (pFVar5->ParticleVariables).ArrayNum) {
    uVar8 = ~uVar4 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar12 = (pFVar5->ParticleVariables).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x10;
  iVar9 = *(int *)&pFVar12[8].field_0x0;
  if (iVar9 == *(int *)(pFVar12 + 0xc)) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x840,(ForAnyElementType *)pFVar12,(int *)(pFVar12 + 0xc));
  }
  *(int *)&pFVar12[8].field_0x0 = iVar9 + 1;
  pFVar12 = *(FScriptContainerElement **)&pFVar12->field_0x0;
  DefaultConstructItems<FNiagaraDataSetDebugAccessor,int>
            ((FNiagaraDataSetDebugAccessor *)(pFVar12 + (longlong)iVar9 * 0x40),1);
  FNiagaraDataSetDebugAccessor::Init
            ((FNiagaraDataSetDebugAccessor *)(pFVar12 + (longlong)iVar9 * 0x40),
             *param_3->EmitterCompiledData,local_60);
LAB_14926dc07:
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  this = (FName *)&this[1].Number;
  goto LAB_14926daa0;
}

// FindVariablesByWildcard<TArrayView<FNiagaraVariableWithOffset_const_,int>,`NiagaraDebugLocal::FindParameterStoreVariablesByWildcard'::__l5::<lambda_1>_> @ 14926dc60

void __cdecl
NiagaraDebugLocal::
FindVariablesByWildcard<TArrayView<FNiagaraVariableWithOffset_const_,int>,_NiagaraDebugLocal::FindParameterStoreVariablesByWildcard_::__l5::<lambda_1>_>
          (TArrayView<FNiagaraVariableWithOffset_const_,int> *param_1,
          TArray<FNiagaraDebugHUDVariable,TSizedDefaultAllocator<32>_> *param_2,<lambda_1> *param_3)

{
  FNiagaraVariableWithOffset *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FCachedVariables *pFVar4;
  int *piVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  wchar_t *pwVar9;
  FScriptContainerElement *pFVar10;
  FNiagaraVariableWithOffset *this;
  int iVar11;
  undefined1 local_res10 [8];
  FString local_38;
  
  if (param_2->ArrayNum != 0) {
    this = param_1->DataPtr;
    pFVar1 = this + param_1->ArrayNum;
    if (this != pFVar1) {
LAB_14926dcb1:
      ::FName::ToString((FName *)this,&local_38);
      iVar8 = param_2->ArrayNum;
      pFVar10 = (param_2->AllocatorInstance).Data;
      pFVar2 = pFVar10 + (longlong)iVar8 * 0x18;
      do {
        if (param_2->ArrayNum != iVar8) {
          `TCheckedPointerIterator<FNiagaraDebugHUDVariable_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res10);
        }
        if (pFVar10 == pFVar2) goto LAB_14926ddc7;
        if (*pFVar10 != (FScriptContainerElement)0x0) {
          iVar3 = *(int *)(pFVar10 + 0x10);
          iVar11 = 0;
          iVar7 = iVar3 + -1;
          if (iVar3 == 0) {
            iVar7 = iVar11;
          }
          if (0 < iVar7) {
            if (iVar3 == 0) {
              pwVar9 = L"";
            }
            else {
              pwVar9 = *(wchar_t **)(pFVar10 + 8);
              iVar11 = iVar3 + -1;
            }
            bVar6 = ::FString::MatchesWildcard(&local_38,pwVar9,iVar11,IgnoreCase);
            if (bVar6) goto LAB_14926dd30;
          }
        }
        pFVar10 = pFVar10 + 0x18;
      } while( true );
    }
  }
  return;
LAB_14926dd30:
  pFVar4 = *param_3->CachedVariables;
  iVar8 = (pFVar4->ParameterStoreVariables).ArrayNum;
  pFVar10 = (pFVar4->ParameterStoreVariables).AllocatorInstance.Data;
  pFVar2 = pFVar10 + (longlong)iVar8 * 0x14;
  if (pFVar10 != pFVar2) {
    do {
      if ((*(longlong *)(pFVar10 + 8) == this->_padding_) &&
         (*(int *)(pFVar10 + 0x10) == this->_padding_)) goto LAB_14926ddc7;
      pFVar10 = pFVar10 + 0x14;
    } while (pFVar10 != pFVar2);
  }
  if (iVar8 == (pFVar4->ParameterStoreVariables).ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x414,&(pFVar4->ParameterStoreVariables).AllocatorInstance,
                       &(pFVar4->ParameterStoreVariables).ArrayMax);
  }
  (pFVar4->ParameterStoreVariables).ArrayNum = iVar8 + 1;
  pFVar2 = (pFVar4->ParameterStoreVariables).AllocatorInstance.Data + (longlong)iVar8 * 0x14;
  DefaultConstructItems<NiagaraDebugLocal::FParameterStoreVariable,int>(pFVar2,1);
  piVar5 = param_3->EmitterIndex;
  *(EParameterStoreLocation *)pFVar2 = *param_3->StoreLocation;
  *(int *)(pFVar2 + 4) = *piVar5;
  *(longlong *)(pFVar2 + 8) = this->_padding_;
  *(int *)(pFVar2 + 0x10) = this->_padding_;
LAB_14926ddc7:
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  this = this + 1;
  if (this == pFVar1) {
    return;
  }
  goto LAB_14926dcb1;
}

// ForAllSystemStats<`FParticlePerfStatsListener_EffectType::Tick'::__l5::<lambda_1>_> @ 14926de10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
FParticlePerfStatsManager::
ForAllSystemStats<_FParticlePerfStatsListener_EffectType::Tick_::__l5::<lambda_1>_>
          (<lambda_1> param_1)

{
  ulong64 *puVar1;
  TAtomic<unsigned___int64> *pTVar2;
  FWeakObjectPtr *this;
  ulonglong uVar3;
  FWeakObjectPtr FVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  UNiagaraSystem *this_00;
  UClass *pUVar10;
  FParticlePerfStats *pFVar11;
  byte bVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 local_res10 [8];
  int local_res18;
  UNiagaraEffectType *local_res20;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&SystemToPerfStatsGuard);
  iVar9 = SystemToPerfStats._40_4_;
  iVar13 = 0;
  uVar7 = 1;
  iVar15 = 0;
  iVar8 = 0;
  if (SystemToPerfStats._40_4_ != 0) {
    puVar16 = (uint *)&SystemToPerfStats.field_0x10;
    if (SystemToPerfStats._32_8_ != 0) {
      puVar16 = (uint *)SystemToPerfStats._32_8_;
    }
    uVar17 = *puVar16;
    while (uVar17 == 0) {
      iVar13 = iVar13 + 1;
      iVar15 = iVar15 + 0x20;
      iVar8 = SystemToPerfStats._40_4_;
      if ((int)(SystemToPerfStats._40_4_ + -1 + (SystemToPerfStats._40_4_ + -1 >> 0x1f & 0x1fU)) >>
          5 < iVar13) goto LAB_14926dec1;
      uVar17 = puVar16[iVar13];
    }
    uVar7 = ~(uVar17 - 1) & uVar17;
    uVar3 = (ulonglong)uVar7 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_res18 = (int)lVar14;
    iVar8 = local_res18 + -1 + iVar15;
    if ((int)SystemToPerfStats._40_4_ < iVar8) {
      iVar8 = SystemToPerfStats._40_4_;
    }
  }
LAB_14926dec1:
  uVar17 = SystemToPerfStats._40_4_ & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar13);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)SystemToPerfStats._40_4_ >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar15;
  uStack_40 = CONCAT44(uStack_6c,SystemToPerfStats._8_4_ - SystemToPerfStats._52_4_);
  bVar12 = SystemToPerfStats._40_1_;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&SystemToPerfStats.field_0x10;
  if (((int)SystemToPerfStats._40_4_ < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (iVar9 != SystemToPerfStats._40_4_) {
    lVar14 = 0x154c5ee70;
    if (SystemToPerfStats._32_8_ != 0) {
      lVar14 = SystemToPerfStats._32_8_;
    }
    uVar7 = -1 << (bVar12 & 0x1f) & *(uint *)(lVar14 + (longlong)iVar13 * 4);
    while (uVar7 == 0) {
      iVar13 = iVar13 + 1;
      uVar17 = uVar17 + 0x20;
      iVar9 = SystemToPerfStats._40_4_;
      if ((int)((SystemToPerfStats._40_4_ + -1 >> 0x1f & 0x1fU) + SystemToPerfStats._40_4_ + -1) >>
          5 < iVar13) goto LAB_14926dfd0;
      uVar7 = *(uint *)(lVar14 + (longlong)iVar13 * 4);
    }
    uVar3 = (ulonglong)(~(uVar7 - 1) & uVar7) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar9 = (int)lVar14 + -1 + uVar17;
    if ((int)SystemToPerfStats._40_4_ < iVar9) {
      iVar9 = SystemToPerfStats._40_4_;
    }
  }
LAB_14926dfd0:
  while( true ) {
    if (SystemToPerfStats._8_4_ - SystemToPerfStats._52_4_ != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == iVar9) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)&SystemToPerfStats.field_0x10))
    break;
    this = (FWeakObjectPtr *)(SystemToPerfStats._0_8_ + (longlong)TStack_60.CurrentBitIndex * 0x18);
    if ((**(longlong **)(SystemToPerfStats._0_8_ + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18)
         != 0) &&
       (this_00 = (UNiagaraSystem *)FWeakObjectPtr::Get(this), this_00 != (UNiagaraSystem *)0x0)) {
      pUVar10 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
      iVar13 = (int)pUVar10->_padding_;
      if ((iVar13 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar13 * 8) ==
          &pUVar10->_padding_)) {
        local_res20 = UNiagaraSystem::GetEffectType(this_00);
        uVar7 = ((uint)((ulonglong)local_res20 >> 0x14) & 0xffff ^
                (uint)((ulonglong)local_res20 >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        pFVar11 = TMapBase<UNiagaraEffectType_*,FParticlePerfStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UNiagaraEffectType_*,FParticlePerfStats,0>_>
                  ::FindOrAddImpl<UNiagaraEffectType_*>
                            ((TMapBase<UNiagaraEffectType_*,FParticlePerfStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UNiagaraEffectType_*,FParticlePerfStats,0>_>
                              *)param_1.FXTypeStatsMap,uVar7 >> 0x10 ^ uVar7,&local_res20);
        FVar4 = this[1];
        (pFVar11->GameThreadStats).NumInstances =
             (pFVar11->GameThreadStats).NumInstances + *(longlong *)FVar4;
        puVar1 = &(pFVar11->GameThreadStats).TickGameThreadCycles;
        *puVar1 = *puVar1 + *(longlong *)((longlong)FVar4 + 8);
        LOCK();
        pTVar2 = &(pFVar11->GameThreadStats).TickConcurrentCycles;
        *pTVar2 = (TAtomic<unsigned___int64>)
                  ((longlong)*pTVar2 + *(longlong *)((longlong)FVar4 + 0x10));
        UNLOCK();
        puVar1 = &(pFVar11->GameThreadStats).FinalizeCycles;
        *puVar1 = *puVar1 + *(longlong *)((longlong)FVar4 + 0x18);
        LOCK();
        pTVar2 = &(pFVar11->GameThreadStats).EndOfFrameCycles;
        *pTVar2 = (TAtomic<unsigned___int64>)
                  ((longlong)*pTVar2 + *(longlong *)((longlong)FVar4 + 0x20));
        UNLOCK();
        LOCK();
        pTVar2 = &(pFVar11->GameThreadStats).ActivationCycles;
        *pTVar2 = (TAtomic<unsigned___int64>)
                  ((longlong)*pTVar2 + *(longlong *)((longlong)FVar4 + 0x28));
        UNLOCK();
        puVar1 = &(pFVar11->GameThreadStats).WaitCycles;
        *puVar1 = *puVar1 + *(longlong *)((longlong)FVar4 + 0x30);
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
                    /* WARNING: Could not recover jumptable at 0x00014926e110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&SystemToPerfStatsGuard);
  return;
}

// ForAllSystemStats<`FParticlePerfStatsListener_EffectType::TickRT'::__l5::<lambda_1>_> @ 14926e120

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
FParticlePerfStatsManager::
ForAllSystemStats<_FParticlePerfStatsListener_EffectType::TickRT_::__l5::<lambda_1>_>
          (<lambda_1> param_1)

{
  ulong64 *puVar1;
  FWeakObjectPtr *this;
  ulonglong uVar2;
  FWeakObjectPtr FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  UNiagaraSystem *this_00;
  UClass *pUVar9;
  FParticlePerfStats *pFVar10;
  byte bVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res10 [8];
  int local_res18;
  UNiagaraEffectType *local_res20;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&SystemToPerfStatsGuard);
  iVar8 = SystemToPerfStats._40_4_;
  iVar12 = 0;
  uVar6 = 1;
  iVar14 = 0;
  iVar7 = 0;
  if (SystemToPerfStats._40_4_ != 0) {
    puVar15 = (uint *)&SystemToPerfStats.field_0x10;
    if (SystemToPerfStats._32_8_ != 0) {
      puVar15 = (uint *)SystemToPerfStats._32_8_;
    }
    uVar16 = *puVar15;
    while (uVar16 == 0) {
      iVar12 = iVar12 + 1;
      iVar14 = iVar14 + 0x20;
      iVar7 = SystemToPerfStats._40_4_;
      if ((int)(SystemToPerfStats._40_4_ + -1 + (SystemToPerfStats._40_4_ + -1 >> 0x1f & 0x1fU)) >>
          5 < iVar12) goto LAB_14926e1d1;
      uVar16 = puVar15[iVar12];
    }
    uVar6 = ~(uVar16 - 1) & uVar16;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_res18 = (int)lVar13;
    iVar7 = local_res18 + -1 + iVar14;
    if ((int)SystemToPerfStats._40_4_ < iVar7) {
      iVar7 = SystemToPerfStats._40_4_;
    }
  }
LAB_14926e1d1:
  uVar16 = SystemToPerfStats._40_4_ & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar12);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)SystemToPerfStats._40_4_ >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,SystemToPerfStats._8_4_ - SystemToPerfStats._52_4_);
  bVar11 = SystemToPerfStats._40_1_;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&SystemToPerfStats.field_0x10;
  if (((int)SystemToPerfStats._40_4_ < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (iVar8 != SystemToPerfStats._40_4_) {
    lVar13 = 0x154c5ee70;
    if (SystemToPerfStats._32_8_ != 0) {
      lVar13 = SystemToPerfStats._32_8_;
    }
    uVar6 = -1 << (bVar11 & 0x1f) & *(uint *)(lVar13 + (longlong)iVar12 * 4);
    while (uVar6 == 0) {
      iVar12 = iVar12 + 1;
      uVar16 = uVar16 + 0x20;
      iVar8 = SystemToPerfStats._40_4_;
      if ((int)((SystemToPerfStats._40_4_ + -1 >> 0x1f & 0x1fU) + SystemToPerfStats._40_4_ + -1) >>
          5 < iVar12) goto LAB_14926e2e0;
      uVar6 = *(uint *)(lVar13 + (longlong)iVar12 * 4);
    }
    uVar2 = (ulonglong)(~(uVar6 - 1) & uVar6) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar8 = (int)lVar13 + -1 + uVar16;
    if ((int)SystemToPerfStats._40_4_ < iVar8) {
      iVar8 = SystemToPerfStats._40_4_;
    }
  }
LAB_14926e2e0:
  while( true ) {
    if (SystemToPerfStats._8_4_ - SystemToPerfStats._52_4_ != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FParticlePerfStats,TDefaultDelete<FParticlePerfStats>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == iVar8) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)&SystemToPerfStats.field_0x10))
    break;
    this = (FWeakObjectPtr *)(SystemToPerfStats._0_8_ + (longlong)TStack_60.CurrentBitIndex * 0x18);
    if ((**(longlong **)(SystemToPerfStats._0_8_ + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18)
         != 0) &&
       (this_00 = (UNiagaraSystem *)FWeakObjectPtr::Get(this), this_00 != (UNiagaraSystem *)0x0)) {
      pUVar9 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
      iVar12 = (int)pUVar9->_padding_;
      if ((iVar12 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar12 * 8) ==
          &pUVar9->_padding_)) {
        local_res20 = UNiagaraSystem::GetEffectType(this_00);
        uVar6 = ((uint)((ulonglong)local_res20 >> 0x14) & 0xffff ^
                (uint)((ulonglong)local_res20 >> 4)) * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        pFVar10 = TMapBase<UNiagaraEffectType_*,FParticlePerfStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UNiagaraEffectType_*,FParticlePerfStats,0>_>
                  ::FindOrAddImpl<UNiagaraEffectType_*>
                            ((TMapBase<UNiagaraEffectType_*,FParticlePerfStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UNiagaraEffectType_*,FParticlePerfStats,0>_>
                              *)param_1.FXTypeStatsMap,uVar6 >> 0x10 ^ uVar6,&local_res20);
        FVar3 = this[1];
        (pFVar10->RenderThreadStats).NumInstances =
             (pFVar10->RenderThreadStats).NumInstances + *(longlong *)((longlong)FVar3 + 0x38);
        puVar1 = &(pFVar10->RenderThreadStats).RenderUpdateCycles;
        *puVar1 = *puVar1 + *(longlong *)((longlong)FVar3 + 0x40);
        puVar1 = &(pFVar10->RenderThreadStats).GetDynamicMeshElementsCycles;
        *puVar1 = *puVar1 + *(longlong *)((longlong)FVar3 + 0x48);
        FVar3 = this[1];
        (pFVar10->GPUStats).NumInstances =
             (pFVar10->GPUStats).NumInstances + *(longlong *)((longlong)FVar3 + 0x50);
        puVar1 = &(pFVar10->GPUStats).TotalMicroseconds;
        *puVar1 = *puVar1 + *(longlong *)((longlong)FVar3 + 0x58);
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
                    /* WARNING: Could not recover jumptable at 0x00014926e408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&SystemToPerfStatsGuard);
  return;
}

// ForAllWorldManagers<`FNiagaraDebuggerClient::UpdateDebugHUDSettings'::__l2::<lambda_1>_> @ 14926e420

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void __cdecl
FNiagaraWorldManager::
ForAllWorldManagers<_FNiagaraDebuggerClient::UpdateDebugHUDSettings_::__l2::<lambda_1>_>
          (<lambda_1> param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  ENiagaraDebugPlaybackMode EVar8;
  uint uVar9;
  uint uVar10;
  UPackage *pUVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  float fVar19;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_9c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  
  iVar15 = 0;
  uVar9 = 1;
  iVar16 = 0;
  uVar14 = WorldManagers._40_4_;
  uVar10 = 0;
  if (uVar14 != 0) {
    puVar17 = (uint *)&WorldManagers.field_0x10;
    if (WorldManagers._32_8_ != 0) {
      puVar17 = (uint *)WorldManagers._32_8_;
    }
    uVar10 = *puVar17;
    iVar16 = 0;
    while (uVar10 == 0) {
      lVar12 = (longlong)iVar15;
      iVar16 = iVar16 + 0x20;
      iVar15 = iVar15 + 1;
      uVar10 = uVar14;
      if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
      goto LAB_14926e4de;
      uVar10 = puVar17[lVar12 + 1];
    }
    uVar9 = -uVar10 & uVar10;
    uVar1 = (ulonglong)uVar9 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res18 = (int)lVar12;
    uVar10 = local_res18 + -1 + iVar16;
    if ((int)uVar14 < (int)uVar10) {
      uVar10 = uVar14;
    }
  }
LAB_14926e4de:
  bVar3 = WorldManagers._40_1_;
  uVar18 = uVar14 & 0xffffffe0;
  TStack_90._padding_ = CONCAT44(uVar9,iVar15);
  TStack_90.CurrentBitIndex = uVar10;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar14 >> 5;
  TStack_90._28_4_ = uVar10;
  TStack_90.BaseBitIndex = iVar16;
  uStack_70 = CONCAT44(uStack_9c,WorldManagers._8_4_ - WorldManagers._52_4_);
  TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)&WorldManagers.field_0x10;
  uVar10 = uVar14;
  if ((int)uVar14 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x7af,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar10 = WorldManagers._40_4_;
  }
  fVar6 = __real_41200000;
  fVar5 = __real_3f800000;
  fVar4 = __real_38d1b717;
  if (uVar14 != uVar10) {
    lVar12 = 0x154c84770;
    if (WorldManagers._32_8_ != 0) {
      lVar12 = WorldManagers._32_8_;
    }
    uVar14 = -1 << (bVar3 & 0x1f) & *(uint *)(lVar12 + (longlong)iVar15 * 4);
    while (uVar14 == 0) {
      lVar13 = (longlong)iVar15;
      uVar18 = uVar18 + 0x20;
      iVar15 = iVar15 + 1;
      uVar14 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
      goto LAB_14926e610;
      uVar14 = *(uint *)(lVar12 + 4 + lVar13 * 4);
    }
    uVar1 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar14 = (int)lVar12 + -1 + uVar18;
    if ((int)uVar10 < (int)uVar14) {
      uVar14 = uVar10;
    }
  }
LAB_14926e610:
  while( true ) {
    if (WorldManagers._8_4_ - WorldManagers._52_4_ != (int)uStack_70) {
      `TSparseArray<TSparseSetElement<TTuple<UWorld_*,FNiagaraWorldManager_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_90.CurrentBitIndex == uVar14) &&
       (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)&WorldManagers.field_0x10))
    break;
    lVar12 = *(longlong *)(WorldManagers._0_8_ + 8 + (longlong)TStack_90.CurrentBitIndex * 0x18);
    if (lVar12 != 0) {
      if (Z_Registration_Info_UScriptStruct_FNiagaraDebugHUDSettingsData.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar11 = Z_Construct_UPackage__Script_Niagara();
        Z_Registration_Info_UScriptStruct_FNiagaraDebugHUDSettingsData.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData,
                             (UObject *)pUVar11,L"NiagaraDebugHUDSettingsData");
      }
      UScriptStruct::CopyScriptStruct
                (Z_Registration_Info_UScriptStruct_FNiagaraDebugHUDSettingsData.OuterSingleton,
                 &NiagaraDebugLocal::Settings,param_1.Message,1);
      bVar7 = 1 < (int)NiagaraDebugLocal::GCachedSystemVariables._72_4_;
      if (!bVar7) {
        TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables,0>,FDefaultSetAllocator>
        ::UnhashElements((TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables,0>,FDefaultSetAllocator>
                          *)&NiagaraDebugLocal::GCachedSystemVariables);
      }
      TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)&NiagaraDebugLocal::GCachedSystemVariables,0,
                        NiagaraDebugLocal::GCachedSystemVariables._8_4_);
      NiagaraDebugLocal::GCachedSystemVariables._8_4_ = 0;
      if (NiagaraDebugLocal::GCachedSystemVariables._12_4_ != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x68,8,0,(ForAnyElementType *)&NiagaraDebugLocal::GCachedSystemVariables,0,
                   (int *)&NiagaraDebugLocal::GCachedSystemVariables.field_0xc);
      }
      NiagaraDebugLocal::GCachedSystemVariables._48_4_ = 0xffffffff;
      NiagaraDebugLocal::GCachedSystemVariables._52_4_ = 0;
      NiagaraDebugLocal::GCachedSystemVariables._40_4_ = 0;
      if (0x80 < (uint)NiagaraDebugLocal::GCachedSystemVariables._44_4_) {
        NiagaraDebugLocal::GCachedSystemVariables._44_4_ = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)
                   &NiagaraDebugLocal::GCachedSystemVariables.field_0x10,0);
      }
      if (bVar7) {
        NiagaraDebugLocal::GCachedSystemVariables._72_4_ = 1;
        TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables,0>,FDefaultSetAllocator>
                  *)&NiagaraDebugLocal::GCachedSystemVariables);
      }
      fVar19 = fVar5;
      if ((param_1.Message)->bHudEnabled == false) {
        EVar8 = Play;
      }
      else {
        EVar8 = (param_1.Message)->PlaybackMode;
        if ((param_1.Message)->bPlaybackRateEnabled != false) {
          fVar19 = (param_1.Message)->PlaybackRate;
        }
      }
      if (fVar6 <= fVar19) {
        fVar19 = fVar6;
      }
      *(ENiagaraDebugPlaybackMode *)(lVar12 + 0x2000) = EVar8;
      if (fVar19 <= fVar4) {
        fVar19 = fVar4;
      }
      *(float *)(lVar12 + 0x2004) = fVar19;
    }
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
  }
  return;
}

// ForAllWorldManagers<`FNiagaraDebuggerClient::UpdateOutliner'::__l5::<lambda_1>_> @ 14926e7e0

void __cdecl
FNiagaraWorldManager::
ForAllWorldManagers<_FNiagaraDebuggerClient::UpdateOutliner_::__l5::<lambda_1>_>(<lambda_1> param_1)

{
  code *pcVar1;
  byte bVar2;
  FName FVar3;
  TMap<UWorld_*,FNiagaraWorldManager_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UWorld_*,FNiagaraWorldManager_*,0>_>
  *pTVar4;
  bool bVar5;
  FNiagaraDebugMessage *pFVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 local_res10 [8];
  int local_res18;
  FName local_res20;
  FString local_b0;
  float local_a0;
  TMap<UWorld_*,FNiagaraWorldManager_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UWorld_*,FNiagaraWorldManager_*,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  uint uStack_7c;
  int local_78;
  uint uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<UWorld_*,FNiagaraWorldManager_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UWorld_*,FNiagaraWorldManager_*,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iStack_90 = 0;
  uStack_8c = 1;
  local_78 = 0;
  uVar9 = WorldManagers._40_4_;
  uStack_7c = 0;
  if (uVar9 != 0) {
    puVar12 = (uint *)&WorldManagers.field_0x10;
    if (WorldManagers._32_8_ != 0) {
      puVar12 = (uint *)WorldManagers._32_8_;
    }
    uVar13 = *puVar12;
    while (uVar13 == 0) {
      lVar7 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      uStack_7c = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_90)
      goto LAB_14926e88e;
      uVar13 = puVar12[lVar7 + 1];
    }
    uStack_8c = -uVar13 & uVar13;
    uVar14 = (ulonglong)uStack_8c * 2 + 1;
    lVar7 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res18 = (int)lVar7;
    uStack_7c = local_res18 + -1 + local_78;
    if ((int)uVar9 < (int)uStack_7c) {
      uStack_7c = uVar9;
    }
  }
LAB_14926e88e:
  bVar2 = WorldManagers._40_1_;
  iStack_70 = WorldManagers._8_4_ - WorldManagers._52_4_;
  uVar13 = uVar9 & 0xffffffe0;
  uVar14 = WorldManagers._40_8_ & 0xffffffff;
  local_98 = &WorldManagers;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  local_88 = 0x154c84770;
  TStack_60.CurrentBitIndex = uStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  local_68 = &WorldManagers;
  iVar10 = (int)uVar9 >> 5;
  TStack_60._28_4_ = uStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&WorldManagers.field_0x10;
  uStack_74 = uStack_7c;
  if (((int)uVar9 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar11 = WorldManagers._40_4_;
  if (uVar9 != uVar11) {
    uVar14 = WorldManagers._40_8_ & 0xffffffff;
    lVar7 = 0x154c84770;
    if (WorldManagers._32_8_ != 0) {
      lVar7 = WorldManagers._32_8_;
    }
    uVar9 = -1 << (bVar2 & 0x1f) & *(uint *)(lVar7 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar13 = uVar13 + 0x20;
      iVar10 = iVar10 + 1;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
      goto LAB_14926e9a0;
      uVar9 = *(uint *)(lVar7 + 4 + lVar8 * 4);
    }
    uVar14 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar13 = (int)lVar7 + -1 + uVar13;
    if ((int)uVar11 < (int)uVar13) {
      uVar13 = uVar11;
    }
    uVar14 = (ulonglong)uVar13;
  }
LAB_14926e9a0:
  while( true ) {
    pTVar4 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<UWorld_*,FNiagaraWorldManager_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_60.CurrentBitIndex == (int)uVar14) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)&WorldManagers.field_0x10)) &&
       (pTVar4 == &WorldManagers)) break;
    lVar7 = *(longlong *)(*(longlong *)pTVar4 + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    if (lVar7 != 0) {
      lVar7 = *(longlong *)(lVar7 + 0x2008);
      ::FString::FString(&local_b0,param_1.HudMessage);
      FVar3 = NiagaraDebuggerClientOutlienrUpdateMessage;
      local_a0 = 1.0;
      local_res20 = NiagaraDebuggerClientOutlienrUpdateMessage;
      uVar9 = ::GetTypeHash(NiagaraDebuggerClientOutlienrUpdateMessage.ComparisonIndex.Value);
      pFVar6 = TMapBase<FName,FNiagaraDebugMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugMessage,0>_>
               ::FindOrAddImpl<FName_const_&>
                         ((TMapBase<FName,FNiagaraDebugMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugMessage,0>_>
                           *)(lVar7 + 0x2b0),FVar3.Number + uVar9,&local_res20);
      pFVar6->Type = Info;
      ::FString::operator=(&pFVar6->Message,&local_b0);
      pFVar6->Lifetime = local_a0;
      if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForAllWorldManagers<`FNiagaraDebuggerClient::UpdateOutliner'::__l2::<lambda_2>_> @ 14926ea90

void __cdecl
FNiagaraWorldManager::
ForAllWorldManagers<_FNiagaraDebuggerClient::UpdateOutliner_::__l2::<lambda_2>_>(<lambda_2> param_1)

{
  code *pcVar1;
  byte bVar2;
  FName FVar3;
  TMap<UWorld_*,FNiagaraWorldManager_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UWorld_*,FNiagaraWorldManager_*,0>_>
  *pTVar4;
  bool bVar5;
  FNiagaraDebugMessage *pFVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 local_res10 [8];
  int local_res18;
  FName local_res20;
  FString local_b0;
  float local_a0;
  TMap<UWorld_*,FNiagaraWorldManager_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UWorld_*,FNiagaraWorldManager_*,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  uint uStack_7c;
  int local_78;
  uint uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<UWorld_*,FNiagaraWorldManager_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UWorld_*,FNiagaraWorldManager_*,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iStack_90 = 0;
  uStack_8c = 1;
  local_78 = 0;
  uVar9 = WorldManagers._40_4_;
  uStack_7c = 0;
  if (uVar9 != 0) {
    puVar12 = (uint *)&WorldManagers.field_0x10;
    if (WorldManagers._32_8_ != 0) {
      puVar12 = (uint *)WorldManagers._32_8_;
    }
    uVar13 = *puVar12;
    while (uVar13 == 0) {
      lVar7 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      uStack_7c = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_90)
      goto LAB_14926eb3e;
      uVar13 = puVar12[lVar7 + 1];
    }
    uStack_8c = -uVar13 & uVar13;
    uVar14 = (ulonglong)uStack_8c * 2 + 1;
    lVar7 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res18 = (int)lVar7;
    uStack_7c = local_res18 + -1 + local_78;
    if ((int)uVar9 < (int)uStack_7c) {
      uStack_7c = uVar9;
    }
  }
LAB_14926eb3e:
  bVar2 = WorldManagers._40_1_;
  iStack_70 = WorldManagers._8_4_ - WorldManagers._52_4_;
  uVar13 = uVar9 & 0xffffffe0;
  uVar14 = WorldManagers._40_8_ & 0xffffffff;
  local_98 = &WorldManagers;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  local_88 = 0x154c84770;
  TStack_60.CurrentBitIndex = uStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  local_68 = &WorldManagers;
  iVar10 = (int)uVar9 >> 5;
  TStack_60._28_4_ = uStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&WorldManagers.field_0x10;
  uStack_74 = uStack_7c;
  if (((int)uVar9 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar11 = WorldManagers._40_4_;
  if (uVar9 != uVar11) {
    uVar14 = WorldManagers._40_8_ & 0xffffffff;
    lVar7 = 0x154c84770;
    if (WorldManagers._32_8_ != 0) {
      lVar7 = WorldManagers._32_8_;
    }
    uVar9 = -1 << (bVar2 & 0x1f) & *(uint *)(lVar7 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar13 = uVar13 + 0x20;
      iVar10 = iVar10 + 1;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
      goto LAB_14926ec50;
      uVar9 = *(uint *)(lVar7 + 4 + lVar8 * 4);
    }
    uVar14 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar13 = (int)lVar7 + -1 + uVar13;
    if ((int)uVar11 < (int)uVar13) {
      uVar13 = uVar11;
    }
    uVar14 = (ulonglong)uVar13;
  }
LAB_14926ec50:
  while( true ) {
    pTVar4 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<UWorld_*,FNiagaraWorldManager_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_60.CurrentBitIndex == (int)uVar14) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)&WorldManagers.field_0x10)) &&
       (pTVar4 == &WorldManagers)) break;
    lVar7 = *(longlong *)(*(longlong *)pTVar4 + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    if (lVar7 != 0) {
      lVar7 = *(longlong *)(lVar7 + 0x2008);
      ::FString::FString(&local_b0,param_1.HudMessage);
      FVar3 = NiagaraDebuggerClientOutlienrUpdateMessage;
      local_a0 = 3.0;
      local_res20 = NiagaraDebuggerClientOutlienrUpdateMessage;
      uVar9 = ::GetTypeHash(NiagaraDebuggerClientOutlienrUpdateMessage.ComparisonIndex.Value);
      pFVar6 = TMapBase<FName,FNiagaraDebugMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugMessage,0>_>
               ::FindOrAddImpl<FName_const_&>
                         ((TMapBase<FName,FNiagaraDebugMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNiagaraDebugMessage,0>_>
                           *)(lVar7 + 0x2b0),FVar3.Number + uVar9,&local_res20);
      pFVar6->Type = Info;
      ::FString::operator=(&pFVar6->Message,&local_b0);
      pFVar6->Lifetime = local_a0;
      if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// GetFullNameForCastLogError<ANiagaraPerfBaselineActor> @ 14926f000

FString * __cdecl
GetFullNameForCastLogError<ANiagaraPerfBaselineActor>
          (FString *__return_storage_ptr__,ANiagaraPerfBaselineActor *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetTypeName<ANiagaraPerfBaselineActor> @ 14926f5a0

FString * __cdecl GetTypeName<ANiagaraPerfBaselineActor>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_ANiagaraPerfBaselineActor_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraBaselineController> @ 14926f5e0

FString * __cdecl GetTypeName<UNiagaraBaselineController>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UNiagaraBaselineController_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<UNiagaraDecalRendererProperties> @ 14926f620

FString * __cdecl GetTypeName<UNiagaraDecalRendererProperties>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UNiagaraDecalRendererProperties::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<unsigned___int64,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned___int64,int>,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>_> @ 14926f660

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<unsigned___int64,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned___int64,int>,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<unsigned___int64,int>,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_s_1 TVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  
  if (param_2 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar8 = (param_2 + -2) / 2;
  iVar11 = iVar8 * 2 + 1;
  iVar14 = iVar11;
  iVar15 = iVar8;
  do {
    while (param_2 <= iVar11) {
LAB_14926f76b:
      if (iVar15 == 0) {
        iVar11 = param_2 + -1;
        lVar9 = (longlong)iVar11;
        if (0 < iVar11) {
          pTVar12 = param_1 + lVar9;
          do {
            uVar4 = *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 8);
            uVar2 = *(undefined8 *)((param_1->ElementData).Pad + 0x10);
            TVar5 = param_1->_s_1;
            uVar6 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            param_1->_s_1 = pTVar12->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar4;
            *(undefined8 *)((param_1->ElementData).Pad + 0x10) =
                 *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0x10);
            pTVar12->_s_1 = TVar5;
            *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 8) = uVar6;
            *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0x10) = uVar2;
            iVar14 = 0;
            if (1 < iVar11) {
              do {
                iVar15 = iVar14 * 2;
                iVar8 = iVar15 + 1;
                if (iVar15 + 2 < iVar11) {
                  if (*(int *)((longlong)param_1 + (longlong)iVar8 * 0x18 + 8) <
                      *(int *)((longlong)param_1 + (longlong)iVar15 * 0x18 + 0x38)) {
                    iVar8 = iVar15;
                  }
                  iVar8 = iVar8 + 1;
                }
                lVar10 = (longlong)iVar8;
                pTVar1 = param_1 + iVar14;
                if (*(int *)((pTVar1->ElementData).Pad + 8) <=
                    *(int *)((longlong)param_1 + lVar10 * 0x18 + 8)) break;
                uVar4 = *(undefined8 *)((longlong)param_1[lVar10].ElementData.Pad + 8);
                uVar2 = *(undefined8 *)((pTVar1->ElementData).Pad + 0x10);
                TVar5 = pTVar1->_s_1;
                uVar6 = *(undefined8 *)((pTVar1->ElementData).Pad + 8);
                pTVar1->_s_1 = param_1[lVar10]._s_1;
                *(undefined8 *)((pTVar1->ElementData).Pad + 8) = uVar4;
                *(undefined8 *)((pTVar1->ElementData).Pad + 0x10) =
                     *(undefined8 *)((longlong)param_1 + lVar10 * 0x18 + 0x10);
                param_1[lVar10]._s_1 = TVar5;
                *(undefined8 *)((longlong)param_1[lVar10].ElementData.Pad + 8) = uVar6;
                *(undefined8 *)((longlong)param_1 + lVar10 * 0x18 + 0x10) = uVar2;
                iVar14 = iVar8;
              } while (iVar8 * 2 + 1 < iVar11);
            }
            iVar11 = iVar11 + -1;
            lVar9 = lVar9 + -1;
            pTVar12 = pTVar12 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar8 = iVar15 + -1;
      iVar11 = iVar14 + -2;
      iVar14 = iVar11;
      iVar15 = iVar8;
    }
    iVar11 = iVar8 * 2;
    iVar13 = iVar11 + 1;
    if (iVar11 + 2 < param_2) {
      if (*(int *)((longlong)param_1 + (longlong)iVar13 * 0x18 + 8) <
          *(int *)((longlong)param_1 + (longlong)iVar11 * 0x18 + 0x38)) {
        iVar13 = iVar11;
      }
      iVar13 = iVar13 + 1;
    }
    lVar9 = (longlong)iVar13;
    pTVar12 = param_1 + iVar8;
    if (*(int *)((pTVar12->ElementData).Pad + 8) <= *(int *)((longlong)param_1 + lVar9 * 0x18 + 8))
    goto LAB_14926f76b;
    uVar4 = *(undefined8 *)((longlong)param_1[lVar9].ElementData.Pad + 8);
    iVar11 = iVar13 * 2 + 1;
    uVar2 = *(undefined8 *)((pTVar12->ElementData).Pad + 0x10);
    TVar5 = pTVar12->_s_1;
    uVar6 = *(undefined8 *)((pTVar12->ElementData).Pad + 8);
    pTVar12->_s_1 = param_1[lVar9]._s_1;
    *(undefined8 *)((pTVar12->ElementData).Pad + 8) = uVar4;
    *(undefined8 *)((pTVar12->ElementData).Pad + 0x10) =
         *(undefined8 *)((longlong)param_1 + lVar9 * 0x18 + 0x10);
    param_1[lVar9]._s_1 = TVar5;
    *(undefined8 *)((longlong)param_1[lVar9].ElementData.Pad + 8) = uVar6;
    *(undefined8 *)((longlong)param_1 + lVar9 * 0x18 + 0x10) = uVar2;
    iVar8 = iVar13;
  } while( true );
}

// HeapSortInternal<TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&>,int,FIdentityFunctor,`FNiagaraDebugHud::DrawOverview'::__l88::<lambda_24>_> @ 14926f880

void __cdecl
AlgoImpl::
HeapSortInternal<TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&>,int,FIdentityFunctor,_FNiagaraDebugHud::DrawOverview_::__l88::<lambda_24>_>
          (TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *param_1,int param_2,
          FIdentityFunctor param_3,<lambda_24> param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *pTVar12;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *pTVar13;
  longlong lVar14;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *pTVar15;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar8 = iVar6 * 2 + 1;
  iVar9 = iVar8;
  iVar11 = iVar6;
  do {
    while (param_2 <= iVar8) {
LAB_14926f9a2:
      if (iVar11 == 0) {
        iVar8 = param_2 + -1;
        lVar14 = (longlong)iVar8;
        if (0 < iVar8) {
          pTVar15 = param_1 + lVar14;
          do {
            uVar2 = *(undefined8 *)&pTVar15->field_0x8;
            uVar3 = *(undefined8 *)param_1;
            uVar4 = *(undefined8 *)&param_1->field_0x8;
            *(undefined8 *)param_1 = *(undefined8 *)pTVar15;
            *(undefined8 *)&param_1->field_0x8 = uVar2;
            *(undefined8 *)pTVar15 = uVar3;
            *(undefined8 *)&pTVar15->field_0x8 = uVar4;
            iVar9 = 0;
            if (1 < iVar8) {
              do {
                iVar6 = iVar9 * 2;
                iVar11 = iVar6 + 1;
                if (iVar6 + 2 < iVar8) {
                  iVar10 = ::FName::Compare((FName *)(param_1 + (iVar6 + 2)),
                                            (FName *)(param_1 + iVar11));
                  if (iVar10 < 0) {
                    iVar11 = iVar6;
                  }
                  iVar11 = iVar11 + 1;
                }
                pTVar13 = param_1 + iVar11;
                pTVar12 = param_1 + iVar9;
                iVar9 = ::FName::Compare((FName *)pTVar12,(FName *)pTVar13);
                if (-1 < iVar9) break;
                uVar2 = *(undefined8 *)&pTVar13->field_0x8;
                uVar3 = *(undefined8 *)pTVar12;
                uVar4 = *(undefined8 *)&pTVar12->field_0x8;
                *(undefined8 *)pTVar12 = *(undefined8 *)pTVar13;
                *(undefined8 *)&pTVar12->field_0x8 = uVar2;
                *(undefined8 *)pTVar13 = uVar3;
                *(undefined8 *)&pTVar13->field_0x8 = uVar4;
                iVar9 = iVar11;
              } while (iVar11 * 2 + 1 < iVar8);
            }
            iVar8 = iVar8 + -1;
            lVar14 = lVar14 + -1;
            pTVar15 = pTVar15 + -1;
          } while (0 < lVar14);
        }
        return;
      }
      iVar6 = iVar11 + -1;
      iVar8 = iVar9 + -2;
      iVar9 = iVar8;
      iVar11 = iVar6;
    }
    iVar8 = iVar6 * 2;
    iVar10 = iVar8 + 1;
    if (iVar8 + 2 < param_2) {
      iVar7 = ::FName::Compare((FName *)(param_1 + (iVar8 + 2)),(FName *)(param_1 + iVar10));
      if (iVar7 < 0) {
        iVar10 = iVar8;
      }
      iVar10 = iVar10 + 1;
    }
    pTVar12 = param_1 + iVar10;
    pTVar15 = param_1 + iVar6;
    iVar8 = ::FName::Compare((FName *)pTVar15,(FName *)pTVar12);
    if (-1 < iVar8) goto LAB_14926f9a2;
    uVar2 = *(undefined8 *)&pTVar12->field_0x8;
    iVar8 = iVar10 * 2 + 1;
    uVar3 = *(undefined8 *)pTVar15;
    uVar4 = *(undefined8 *)&pTVar15->field_0x8;
    *(undefined8 *)pTVar15 = *(undefined8 *)pTVar12;
    *(undefined8 *)&pTVar15->field_0x8 = uVar2;
    *(undefined8 *)pTVar12 = uVar3;
    *(undefined8 *)&pTVar12->field_0x8 = uVar4;
    iVar6 = iVar10;
  } while( true );
}

// HeapSortInternal<TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&>,int,FIdentityFunctor,`FNiagaraDebugHud::DrawOverview'::__l88::<lambda_25>_> @ 14926fab0

void __cdecl
AlgoImpl::
HeapSortInternal<TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&>,int,FIdentityFunctor,_FNiagaraDebugHud::DrawOverview_::__l88::<lambda_25>_>
          (TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *param_1,int param_2,
          FIdentityFunctor param_3,<lambda_25> param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *pTVar10;
  int iVar11;
  int iVar12;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar7 = iVar6 * 2 + 1;
  iVar8 = iVar6;
  iVar12 = iVar7;
  do {
    while (param_2 <= iVar7) {
LAB_14926fbb4:
      if (iVar8 == 0) {
        iVar7 = param_2 + -1;
        lVar9 = (longlong)iVar7;
        if (0 < iVar7) {
          pTVar10 = param_1 + lVar9;
          do {
            uVar2 = *(undefined8 *)&pTVar10->field_0x8;
            uVar3 = *(undefined8 *)param_1;
            uVar4 = *(undefined8 *)&param_1->field_0x8;
            *(undefined8 *)param_1 = *(undefined8 *)pTVar10;
            *(undefined8 *)&param_1->field_0x8 = uVar2;
            *(undefined8 *)pTVar10 = uVar3;
            *(undefined8 *)&pTVar10->field_0x8 = uVar4;
            iVar12 = 0;
            if (1 < iVar7) {
              do {
                iVar6 = iVar12 * 2;
                iVar8 = iVar6 + 1;
                if (iVar6 + 2 < iVar7) {
                  if (*(int *)(*(longlong *)&param_1[iVar8].field_0x8 + 0x48) <
                      *(int *)(*(longlong *)&param_1[(longlong)iVar6 + 2].field_0x8 + 0x48)) {
                    iVar8 = iVar6;
                  }
                  iVar8 = iVar8 + 1;
                }
                if (*(int *)(*(longlong *)&param_1[iVar12].field_0x8 + 0x48) <=
                    *(int *)(*(longlong *)&param_1[iVar8].field_0x8 + 0x48)) break;
                uVar2 = *(undefined8 *)(param_1 + iVar12);
                uVar3 = *(undefined8 *)&param_1[iVar12].field_0x8;
                uVar4 = *(undefined8 *)&param_1[iVar8].field_0x8;
                *(undefined8 *)(param_1 + iVar12) = *(undefined8 *)(param_1 + iVar8);
                *(undefined8 *)&param_1[iVar12].field_0x8 = uVar4;
                *(undefined8 *)(param_1 + iVar8) = uVar2;
                *(undefined8 *)&param_1[iVar8].field_0x8 = uVar3;
                iVar12 = iVar8;
              } while (iVar8 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar9 = lVar9 + -1;
            pTVar10 = pTVar10 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar6 = iVar8 + -1;
      iVar7 = iVar12 + -2;
      iVar8 = iVar6;
      iVar12 = iVar7;
    }
    iVar7 = iVar6 * 2;
    iVar11 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      if (*(int *)(*(longlong *)&param_1[iVar11].field_0x8 + 0x48) <
          *(int *)(*(longlong *)&param_1[(longlong)iVar7 + 2].field_0x8 + 0x48)) {
        iVar11 = iVar7;
      }
      iVar11 = iVar11 + 1;
    }
    if (*(int *)(*(longlong *)&param_1[iVar6].field_0x8 + 0x48) <=
        *(int *)(*(longlong *)&param_1[iVar11].field_0x8 + 0x48)) goto LAB_14926fbb4;
    uVar2 = *(undefined8 *)(param_1 + iVar6);
    uVar3 = *(undefined8 *)&param_1[iVar6].field_0x8;
    iVar7 = iVar11 * 2 + 1;
    uVar4 = *(undefined8 *)&param_1[iVar11].field_0x8;
    *(undefined8 *)(param_1 + iVar6) = *(undefined8 *)(param_1 + iVar11);
    *(undefined8 *)&param_1[iVar6].field_0x8 = uVar4;
    *(undefined8 *)(param_1 + iVar11) = uVar2;
    *(undefined8 *)&param_1[iVar11].field_0x8 = uVar3;
    iVar6 = iVar11;
  } while( true );
}

// HeapSortInternal<TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&>,int,FIdentityFunctor,`FNiagaraDebugHud::DrawOverview'::__l88::<lambda_26>_> @ 14926fca0

void __cdecl
AlgoImpl::
HeapSortInternal<TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&>,int,FIdentityFunctor,_FNiagaraDebugHud::DrawOverview_::__l88::<lambda_26>_>
          (TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *param_1,int param_2,
          FIdentityFunctor param_3,<lambda_26> param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *pTVar10;
  int iVar11;
  int iVar12;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar7 = iVar6 * 2 + 1;
  iVar8 = iVar6;
  iVar12 = iVar7;
  do {
    while (param_2 <= iVar7) {
LAB_14926fda4:
      if (iVar8 == 0) {
        iVar7 = param_2 + -1;
        lVar9 = (longlong)iVar7;
        if (0 < iVar7) {
          pTVar10 = param_1 + lVar9;
          do {
            uVar2 = *(undefined8 *)&pTVar10->field_0x8;
            uVar3 = *(undefined8 *)param_1;
            uVar4 = *(undefined8 *)&param_1->field_0x8;
            *(undefined8 *)param_1 = *(undefined8 *)pTVar10;
            *(undefined8 *)&param_1->field_0x8 = uVar2;
            *(undefined8 *)pTVar10 = uVar3;
            *(undefined8 *)&pTVar10->field_0x8 = uVar4;
            iVar12 = 0;
            if (1 < iVar7) {
              do {
                iVar6 = iVar12 * 2;
                iVar8 = iVar6 + 1;
                if (iVar6 + 2 < iVar7) {
                  if (*(int *)(*(longlong *)&param_1[iVar8].field_0x8 + 0x4c) <
                      *(int *)(*(longlong *)&param_1[(longlong)iVar6 + 2].field_0x8 + 0x4c)) {
                    iVar8 = iVar6;
                  }
                  iVar8 = iVar8 + 1;
                }
                if (*(int *)(*(longlong *)&param_1[iVar12].field_0x8 + 0x4c) <=
                    *(int *)(*(longlong *)&param_1[iVar8].field_0x8 + 0x4c)) break;
                uVar2 = *(undefined8 *)(param_1 + iVar12);
                uVar3 = *(undefined8 *)&param_1[iVar12].field_0x8;
                uVar4 = *(undefined8 *)&param_1[iVar8].field_0x8;
                *(undefined8 *)(param_1 + iVar12) = *(undefined8 *)(param_1 + iVar8);
                *(undefined8 *)&param_1[iVar12].field_0x8 = uVar4;
                *(undefined8 *)(param_1 + iVar8) = uVar2;
                *(undefined8 *)&param_1[iVar8].field_0x8 = uVar3;
                iVar12 = iVar8;
              } while (iVar8 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar9 = lVar9 + -1;
            pTVar10 = pTVar10 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar6 = iVar8 + -1;
      iVar7 = iVar12 + -2;
      iVar8 = iVar6;
      iVar12 = iVar7;
    }
    iVar7 = iVar6 * 2;
    iVar11 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      if (*(int *)(*(longlong *)&param_1[iVar11].field_0x8 + 0x4c) <
          *(int *)(*(longlong *)&param_1[(longlong)iVar7 + 2].field_0x8 + 0x4c)) {
        iVar11 = iVar7;
      }
      iVar11 = iVar11 + 1;
    }
    if (*(int *)(*(longlong *)&param_1[iVar6].field_0x8 + 0x4c) <=
        *(int *)(*(longlong *)&param_1[iVar11].field_0x8 + 0x4c)) goto LAB_14926fda4;
    uVar2 = *(undefined8 *)(param_1 + iVar6);
    uVar3 = *(undefined8 *)&param_1[iVar6].field_0x8;
    iVar7 = iVar11 * 2 + 1;
    uVar4 = *(undefined8 *)&param_1[iVar11].field_0x8;
    *(undefined8 *)(param_1 + iVar6) = *(undefined8 *)(param_1 + iVar11);
    *(undefined8 *)&param_1[iVar6].field_0x8 = uVar4;
    *(undefined8 *)(param_1 + iVar11) = uVar2;
    *(undefined8 *)&param_1[iVar11].field_0x8 = uVar3;
    iVar6 = iVar11;
  } while( true );
}

// HeapSortInternal<TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&>,int,FIdentityFunctor,`FNiagaraDebugHud::DrawOverview'::__l88::<lambda_27>_> @ 14926fe90

void __cdecl
AlgoImpl::
HeapSortInternal<TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&>,int,FIdentityFunctor,_FNiagaraDebugHud::DrawOverview_::__l88::<lambda_27>_>
          (TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *param_1,int param_2,
          FIdentityFunctor param_3,<lambda_27> param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *pTVar10;
  int iVar11;
  int iVar12;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar7 = iVar6 * 2 + 1;
  iVar8 = iVar6;
  iVar12 = iVar7;
  do {
    while (param_2 <= iVar7) {
LAB_14926ff94:
      if (iVar8 == 0) {
        iVar7 = param_2 + -1;
        lVar9 = (longlong)iVar7;
        if (0 < iVar7) {
          pTVar10 = param_1 + lVar9;
          do {
            uVar2 = *(undefined8 *)&pTVar10->field_0x8;
            uVar3 = *(undefined8 *)param_1;
            uVar4 = *(undefined8 *)&param_1->field_0x8;
            *(undefined8 *)param_1 = *(undefined8 *)pTVar10;
            *(undefined8 *)&param_1->field_0x8 = uVar2;
            *(undefined8 *)pTVar10 = uVar3;
            *(undefined8 *)&pTVar10->field_0x8 = uVar4;
            iVar12 = 0;
            if (1 < iVar7) {
              do {
                iVar6 = iVar12 * 2;
                iVar8 = iVar6 + 1;
                if (iVar6 + 2 < iVar7) {
                  if (*(int *)(*(longlong *)&param_1[iVar8].field_0x8 + 0x50) <
                      *(int *)(*(longlong *)&param_1[(longlong)iVar6 + 2].field_0x8 + 0x50)) {
                    iVar8 = iVar6;
                  }
                  iVar8 = iVar8 + 1;
                }
                if (*(int *)(*(longlong *)&param_1[iVar12].field_0x8 + 0x50) <=
                    *(int *)(*(longlong *)&param_1[iVar8].field_0x8 + 0x50)) break;
                uVar2 = *(undefined8 *)(param_1 + iVar12);
                uVar3 = *(undefined8 *)&param_1[iVar12].field_0x8;
                uVar4 = *(undefined8 *)&param_1[iVar8].field_0x8;
                *(undefined8 *)(param_1 + iVar12) = *(undefined8 *)(param_1 + iVar8);
                *(undefined8 *)&param_1[iVar12].field_0x8 = uVar4;
                *(undefined8 *)(param_1 + iVar8) = uVar2;
                *(undefined8 *)&param_1[iVar8].field_0x8 = uVar3;
                iVar12 = iVar8;
              } while (iVar8 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar9 = lVar9 + -1;
            pTVar10 = pTVar10 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar6 = iVar8 + -1;
      iVar7 = iVar12 + -2;
      iVar8 = iVar6;
      iVar12 = iVar7;
    }
    iVar7 = iVar6 * 2;
    iVar11 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      if (*(int *)(*(longlong *)&param_1[iVar11].field_0x8 + 0x50) <
          *(int *)(*(longlong *)&param_1[(longlong)iVar7 + 2].field_0x8 + 0x50)) {
        iVar11 = iVar7;
      }
      iVar11 = iVar11 + 1;
    }
    if (*(int *)(*(longlong *)&param_1[iVar6].field_0x8 + 0x50) <=
        *(int *)(*(longlong *)&param_1[iVar11].field_0x8 + 0x50)) goto LAB_14926ff94;
    uVar2 = *(undefined8 *)(param_1 + iVar6);
    uVar3 = *(undefined8 *)&param_1[iVar6].field_0x8;
    iVar7 = iVar11 * 2 + 1;
    uVar4 = *(undefined8 *)&param_1[iVar11].field_0x8;
    *(undefined8 *)(param_1 + iVar6) = *(undefined8 *)(param_1 + iVar11);
    *(undefined8 *)&param_1[iVar6].field_0x8 = uVar4;
    *(undefined8 *)(param_1 + iVar11) = uVar2;
    *(undefined8 *)&param_1[iVar11].field_0x8 = uVar3;
    iVar6 = iVar11;
  } while( true );
}

// HeapSortInternal<TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&>,int,FIdentityFunctor,`FNiagaraDebugHud::DrawOverview'::__l88::<lambda_28>_> @ 149270080

void __cdecl
AlgoImpl::
HeapSortInternal<TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&>,int,FIdentityFunctor,_FNiagaraDebugHud::DrawOverview_::__l88::<lambda_28>_>
          (TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *param_1,int param_2,
          FIdentityFunctor param_3,<lambda_28> param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *pTVar10;
  int iVar11;
  int iVar12;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar7 = iVar6 * 2 + 1;
  iVar8 = iVar6;
  iVar12 = iVar7;
  do {
    while (param_2 <= iVar7) {
LAB_149270188:
      if (iVar8 == 0) {
        iVar7 = param_2 + -1;
        lVar9 = (longlong)iVar7;
        if (0 < iVar7) {
          pTVar10 = param_1 + lVar9;
          do {
            uVar2 = *(undefined8 *)&pTVar10->field_0x8;
            uVar3 = *(undefined8 *)param_1;
            uVar4 = *(undefined8 *)&param_1->field_0x8;
            *(undefined8 *)param_1 = *(undefined8 *)pTVar10;
            *(undefined8 *)&param_1->field_0x8 = uVar2;
            *(undefined8 *)pTVar10 = uVar3;
            *(undefined8 *)&pTVar10->field_0x8 = uVar4;
            iVar12 = 0;
            if (1 < iVar7) {
              do {
                iVar6 = iVar12 * 2;
                iVar8 = iVar6 + 1;
                if (iVar6 + 2 < iVar7) {
                  if (*(longlong *)(*(longlong *)&param_1[iVar8].field_0x8 + 0x60) <
                      *(longlong *)(*(longlong *)&param_1[(longlong)iVar6 + 2].field_0x8 + 0x60)) {
                    iVar8 = iVar6;
                  }
                  iVar8 = iVar8 + 1;
                }
                if (*(longlong *)(*(longlong *)&param_1[iVar12].field_0x8 + 0x60) <=
                    *(longlong *)(*(longlong *)&param_1[iVar8].field_0x8 + 0x60)) break;
                uVar2 = *(undefined8 *)(param_1 + iVar12);
                uVar3 = *(undefined8 *)&param_1[iVar12].field_0x8;
                uVar4 = *(undefined8 *)&param_1[iVar8].field_0x8;
                *(undefined8 *)(param_1 + iVar12) = *(undefined8 *)(param_1 + iVar8);
                *(undefined8 *)&param_1[iVar12].field_0x8 = uVar4;
                *(undefined8 *)(param_1 + iVar8) = uVar2;
                *(undefined8 *)&param_1[iVar8].field_0x8 = uVar3;
                iVar12 = iVar8;
              } while (iVar8 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar9 = lVar9 + -1;
            pTVar10 = pTVar10 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar6 = iVar8 + -1;
      iVar7 = iVar12 + -2;
      iVar8 = iVar6;
      iVar12 = iVar7;
    }
    iVar7 = iVar6 * 2;
    iVar11 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      if (*(longlong *)(*(longlong *)&param_1[iVar11].field_0x8 + 0x60) <
          *(longlong *)(*(longlong *)&param_1[(longlong)iVar7 + 2].field_0x8 + 0x60)) {
        iVar11 = iVar7;
      }
      iVar11 = iVar11 + 1;
    }
    if (*(longlong *)(*(longlong *)&param_1[iVar6].field_0x8 + 0x60) <=
        *(longlong *)(*(longlong *)&param_1[iVar11].field_0x8 + 0x60)) goto LAB_149270188;
    uVar2 = *(undefined8 *)(param_1 + iVar6);
    uVar3 = *(undefined8 *)&param_1[iVar6].field_0x8;
    iVar7 = iVar11 * 2 + 1;
    uVar4 = *(undefined8 *)&param_1[iVar11].field_0x8;
    *(undefined8 *)(param_1 + iVar6) = *(undefined8 *)(param_1 + iVar11);
    *(undefined8 *)&param_1[iVar6].field_0x8 = uVar4;
    *(undefined8 *)(param_1 + iVar11) = uVar2;
    *(undefined8 *)&param_1[iVar11].field_0x8 = uVar3;
    iVar6 = iVar11;
  } while( true );
}

// HeapSortInternal<TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&>,int,FIdentityFunctor,`FNiagaraDebugHud::DrawOverview'::__l88::<lambda_29>_> @ 149270280

void __cdecl
AlgoImpl::
HeapSortInternal<TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&>,int,FIdentityFunctor,_FNiagaraDebugHud::DrawOverview_::__l88::<lambda_29>_>
          (TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *param_1,int param_2,
          FIdentityFunctor param_3,<lambda_29> param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *pTVar10;
  int iVar11;
  int iVar12;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar7 = iVar6 * 2 + 1;
  iVar8 = iVar6;
  iVar12 = iVar7;
  do {
    while (param_2 <= iVar7) {
LAB_149270384:
      if (iVar8 == 0) {
        iVar7 = param_2 + -1;
        lVar9 = (longlong)iVar7;
        if (0 < iVar7) {
          pTVar10 = param_1 + lVar9;
          do {
            uVar2 = *(undefined8 *)&pTVar10->field_0x8;
            uVar3 = *(undefined8 *)param_1;
            uVar4 = *(undefined8 *)&param_1->field_0x8;
            *(undefined8 *)param_1 = *(undefined8 *)pTVar10;
            *(undefined8 *)&param_1->field_0x8 = uVar2;
            *(undefined8 *)pTVar10 = uVar3;
            *(undefined8 *)&pTVar10->field_0x8 = uVar4;
            iVar12 = 0;
            if (1 < iVar7) {
              do {
                iVar6 = iVar12 * 2;
                iVar8 = iVar6 + 1;
                if (iVar6 + 2 < iVar7) {
                  if (*(int *)(*(longlong *)&param_1[(longlong)iVar6 + 2].field_0x8 + 0x40) <
                      *(int *)(*(longlong *)&param_1[iVar8].field_0x8 + 0x40)) {
                    iVar8 = iVar6;
                  }
                  iVar8 = iVar8 + 1;
                }
                if (*(int *)(*(longlong *)&param_1[iVar8].field_0x8 + 0x40) <=
                    *(int *)(*(longlong *)&param_1[iVar12].field_0x8 + 0x40)) break;
                uVar2 = *(undefined8 *)(param_1 + iVar12);
                uVar3 = *(undefined8 *)&param_1[iVar12].field_0x8;
                uVar4 = *(undefined8 *)&param_1[iVar8].field_0x8;
                *(undefined8 *)(param_1 + iVar12) = *(undefined8 *)(param_1 + iVar8);
                *(undefined8 *)&param_1[iVar12].field_0x8 = uVar4;
                *(undefined8 *)(param_1 + iVar8) = uVar2;
                *(undefined8 *)&param_1[iVar8].field_0x8 = uVar3;
                iVar12 = iVar8;
              } while (iVar8 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar9 = lVar9 + -1;
            pTVar10 = pTVar10 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar6 = iVar8 + -1;
      iVar7 = iVar12 + -2;
      iVar8 = iVar6;
      iVar12 = iVar7;
    }
    iVar7 = iVar6 * 2;
    iVar11 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      if (*(int *)(*(longlong *)&param_1[(longlong)iVar7 + 2].field_0x8 + 0x40) <
          *(int *)(*(longlong *)&param_1[iVar11].field_0x8 + 0x40)) {
        iVar11 = iVar7;
      }
      iVar11 = iVar11 + 1;
    }
    if (*(int *)(*(longlong *)&param_1[iVar11].field_0x8 + 0x40) <=
        *(int *)(*(longlong *)&param_1[iVar6].field_0x8 + 0x40)) goto LAB_149270384;
    uVar2 = *(undefined8 *)(param_1 + iVar6);
    uVar3 = *(undefined8 *)&param_1[iVar6].field_0x8;
    iVar7 = iVar11 * 2 + 1;
    uVar4 = *(undefined8 *)&param_1[iVar11].field_0x8;
    *(undefined8 *)(param_1 + iVar6) = *(undefined8 *)(param_1 + iVar11);
    *(undefined8 *)&param_1[iVar6].field_0x8 = uVar4;
    *(undefined8 *)(param_1 + iVar11) = uVar2;
    *(undefined8 *)&param_1[iVar11].field_0x8 = uVar3;
    iVar6 = iVar11;
  } while( true );
}

// InternalConstructor<ANiagaraEditorPreviewActor> @ 1492705d0

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

void __cdecl InternalConstructor<ANiagaraEditorPreviewActor>(FObjectInitializer *param_1)

{
  if ((ANiagaraEditorPreviewActor *)param_1->Obj != (ANiagaraEditorPreviewActor *)0x0) {
    ANiagaraEditorPreviewActor::ANiagaraEditorPreviewActor
              ((ANiagaraEditorPreviewActor *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UNiagaraDebugHUDSettings> @ 1492705f0

void __cdecl InternalConstructor<UNiagaraDebugHUDSettings>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)&this[1].field_0x20 = 2;
    *(undefined ***)this = &UNiagaraDebugHUDSettings::_vftable__for__UObject__;
    *(undefined ***)(this + 1) = &UNiagaraDebugHUDSettings::_vftable__for__FNotifyHook__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    FNiagaraDebugHUDSettingsData::FNiagaraDebugHUDSettingsData
              ((FNiagaraDebugHUDSettingsData *)(this + 2));
    return;
  }
  return;
}

// InternalConstructor<UNiagaraDecalRendererProperties> @ 149270650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl InternalConstructor<UNiagaraDecalRendererProperties>(FObjectInitializer *param_1)

{
  UNiagaraMergeable *this;
  longlong *plVar1;
  int iVar2;
  
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
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[2].field_0x20,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[2].field_0x20 = iVar2;
  this[3].field_0x5 = this[3].field_0x5 & 0xfe;
  this[3].field_0x5 = this[3].field_0x5 | 2;
  *(undefined8 *)&this[2].field_0x24 = 0;
  this[3].field_0x4 = 0;
  *(undefined8 *)&this[3].field_0x8 = 0;
  *(undefined8 *)&this[3].field_0x10 = 0;
  *(undefined8 *)&this[3].field_0x18 = 0;
  *(undefined8 *)&this[3].field_0x20 = 0;
  *(undefined ***)this = &___7UNiagaraDecalRendererProperties__6B_;
  *(undefined8 *)(this + 4) = 0;
  *(undefined8 *)&this[4].field_0x8 = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[4].field_0x10,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[4].field_0x10 = iVar2;
  this[4].field_0x14 = 0;
  *(undefined8 *)&this[4].field_0x18 = 0;
  *(undefined8 *)&this[4].field_0x20 = 0;
  *(undefined8 *)(this + 5) = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[5].field_0x8,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[5].field_0x8 = iVar2;
  this[5].field_0x15 = this[5].field_0x15 & 0xfe;
  this[5].field_0x15 = this[5].field_0x15 | 2;
  *(undefined8 *)&this[5].field_0xc = 0;
  this[5].field_0x14 = 0;
  *(undefined8 *)&this[5].field_0x18 = 0;
  *(undefined8 *)&this[5].field_0x20 = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)(this + 6),&FNiagaraTypeDefinition::Vec4Def);
  *(int *)(this + 6) = iVar2;
  this[6].field_0xd = this[6].field_0xd & 0xfe;
  this[6].field_0xd = this[6].field_0xd | 2;
  *(undefined8 *)&this[6].field_0x4 = 0;
  this[6].field_0xc = 0;
  *(undefined8 *)&this[6].field_0x10 = 0;
  *(undefined8 *)&this[6].field_0x18 = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[6].field_0x20,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[6].field_0x20 = iVar2;
  this[7].field_0x5 = this[7].field_0x5 & 0xfe;
  this[7].field_0x5 = this[7].field_0x5 | 2;
  *(undefined8 *)&this[6].field_0x24 = 0;
  this[7].field_0x4 = 0;
  *(undefined8 *)&this[7].field_0x8 = 0;
  *(undefined8 *)&this[7].field_0x10 = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[7].field_0x18,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[7].field_0x18 = iVar2;
  this[7].field_0x25 = this[7].field_0x25 & 0xfe;
  this[7].field_0x25 = this[7].field_0x25 | 2;
  *(undefined8 *)&this[7].field_0x1c = 0;
  this[7].field_0x24 = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)&this[8].field_0x8 = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[8].field_0x10,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[8].field_0x10 = iVar2;
  this[8].field_0x1d = this[8].field_0x1d & 0xfe;
  this[8].field_0x1d = this[8].field_0x1d | 2;
  *(undefined8 *)&this[8].field_0x14 = 0;
  this[8].field_0x1c = 0;
  *(undefined8 *)&this[8].field_0x20 = 0;
  *(undefined8 *)(this + 9) = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[9].field_0x8,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[9].field_0x8 = iVar2;
  this[9].field_0x15 = this[9].field_0x15 & 0xfe;
  this[9].field_0x15 = this[9].field_0x15 | 2;
  *(undefined8 *)&this[9].field_0xc = 0;
  this[9].field_0x14 = 0;
  *(undefined8 *)&this[9].field_0x18 = 0;
  *(undefined8 *)&this[9].field_0x20 = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)(this + 10),&FNiagaraTypeDefinition::Vec4Def);
  *(int *)(this + 10) = iVar2;
  this[10].field_0xd = this[10].field_0xd & 0xfe;
  this[10].field_0xd = this[10].field_0xd | 2;
  *(undefined8 *)&this[10].field_0x4 = 0;
  this[10].field_0xc = 0;
  *(undefined8 *)&this[10].field_0x10 = 0;
  *(undefined8 *)&this[10].field_0x18 = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this[10].field_0x20,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this[10].field_0x20 = iVar2;
  this[0xb].field_0x5 = this[0xb].field_0x5 & 0xfe;
  this[0xb].field_0x5 = this[0xb].field_0x5 | 2;
  *(undefined8 *)&this[10].field_0x24 = 0;
  this[0xb].field_0x4 = 0;
  *(undefined8 *)&this[0xb].field_0x8 = 0;
  *(undefined8 *)&this[0xb].field_0x10 = 0;
  *(undefined8 *)&this[0xb].field_0x18 = 0;
  *(undefined8 *)&this[0xb].field_0x20 = 0;
  *(undefined8 *)(this + 0xc) = 0;
  *(undefined8 *)&this[0xc].field_0x8 = 0;
  *(undefined8 *)&this[0xc].field_0x10 = 0;
  *(undefined8 *)&this[0xc].field_0x18 = 0;
  *(undefined8 *)&this[0xc].field_0x20 = 0;
  *(undefined8 *)(this + 0xd) = 0;
  this[0xd].field_0x8 = 1;
  *(undefined4 *)&this[0xd].field_0xc = 0xffffffff;
  this[0xd].field_0x10 = 1;
  *(undefined4 *)&this[0xd].field_0x14 = 0xffffffff;
  this[0xd].field_0x18 = 1;
  *(undefined4 *)&this[0xd].field_0x1c = 0xffffffff;
  this[0xd].field_0x20 = 1;
  *(undefined8 *)&this[0xd].field_0x24 = 0xffffffffffffffff;
  this[0xe].field_0x4 = 1;
  *(undefined8 *)&this[0xe].field_0x8 = 0xffffffffffffffff;
  *(undefined4 *)&this[0xe].field_0x10 = 0xffffffff;
  *(undefined4 *)&this[3].field_0x20 = 8;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,8,*(int *)&this[3].field_0x24,(ForAnyElementType *)&this[3].field_0x18,8,
             (int *)&this[3].field_0x24);
  plVar1 = *(longlong **)&this[3].field_0x18;
  *plVar1 = (longlong)&this[4].field_0x20;
  plVar1[1] = (longlong)&this[5].field_0x18;
  plVar1[2] = (longlong)&this[6].field_0x10;
  plVar1[3] = (longlong)&this[7].field_0x8;
  plVar1[4] = (longlong)(this + 8);
  plVar1[5] = (longlong)&this[8].field_0x20;
  plVar1[6] = (longlong)&this[9].field_0x18;
  plVar1[7] = (longlong)&this[10].field_0x10;
  return;
}

// InternalConstructor<UNiagaraEditorDataBase> @ 149270670

void __cdecl InternalConstructor<UNiagaraEditorDataBase>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UNiagaraEditorDataBase__6B_;
  }
  return;
}

// InternalConstructor<UNiagaraEditorParametersAdapterBase> @ 1492706a0

void __cdecl InternalConstructor<UNiagaraEditorParametersAdapterBase>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UNiagaraEditorParametersAdapterBase__6B_;
  }
  return;
}

// InternalConstructor<UNiagaraEffectType> @ 1492706d0

void __cdecl InternalConstructor<UNiagaraEffectType>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined1 *)(this + 1) = 0;
    *(undefined ***)this = &___7UNiagaraEffectType__6B_;
    *(uint *)&this[2].field_0x24 = *(uint *)&this[2].field_0x24 & 0xfffffffe;
    *(undefined4 *)&this[1].field_0x4 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined4 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined4 *)&this[1].field_0x8 = 1;
    *(undefined8 *)(this + 4) = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined8 *)&this[4].field_0x10 = 0;
    *(undefined8 *)&this[4].field_0x18 = 0;
    *(undefined8 *)&this[4].field_0x20 = 0;
  }
  return;
}

// InternalConstructor<UNiagaraEmitter> @ 149270780

void __cdecl InternalConstructor<UNiagaraEmitter>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &UNiagaraEmitter::_vftable__for__UNiagaraEmitterBase__;
    *(undefined ***)&this[1].field_0x10 = &UNiagaraEmitter::_vftable__for__FNiagaraVersionedObject__
    ;
    *(TStatIdData **)&this[2].field_0x20 = &TStatId::TStatId_NAME_None;
    *(TStatIdData **)(this + 3) = &TStatId::TStatId_NAME_None;
    *(TStatIdData **)&this[3].field_0x8 = &TStatId::TStatId_NAME_None;
    *(TStatIdData **)&this[3].field_0x10 = &TStatId::TStatId_NAME_None;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined1 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    this[2].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<UNiagaraEmitterBase> @ 149270800

void __cdecl InternalConstructor<UNiagaraEmitterBase>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UNiagaraEmitterBase__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UNiagaraSignificanceHandler> @ 149270840

void __cdecl InternalConstructor<UNiagaraSignificanceHandler>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UNiagaraSignificanceHandler__6B_;
  }
  return;
}

// InternalConstructor<UNiagaraSignificanceHandlerAge> @ 149270870

void __cdecl InternalConstructor<UNiagaraSignificanceHandlerAge>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UNiagaraSignificanceHandlerAge__6B_;
  }
  return;
}

// InternalConstructor<UNiagaraSignificanceHandlerDistance> @ 1492708a0

void __cdecl InternalConstructor<UNiagaraSignificanceHandlerDistance>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UNiagaraSignificanceHandlerDistance__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<ANiagaraEditorPreviewActor> @ 1492708d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ANiagaraEditorPreviewActor>(FVTableHelper *param_1)

{
  undefined1 *puVar1;
  double dVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  AActor *this;
  
  pUVar3 = GetTransientPackageAsObject();
  pUVar4 = ANiagaraEditorPreviewActor::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar4,pUVar3,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7ANiagaraEditorPreviewActor__6B_;
    this[1]._padding_ = 0x4014000000000000;
    this[1]._padding_ = 0x3fe0000000000000;
    this[1]._padding_ = 0x3ff0000000000000;
    dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    this[1]._padding_ = (longlong)UE::Math::TRotator<double>::ZeroRotator.Pitch;
    this[1].PrimaryActorTick._padding_ = (longlong)dVar2;
    this[1].PrimaryActorTick._padding_ = (longlong)UE::Math::TRotator<double>::ZeroRotator.Roll;
    this[1].PrimaryActorTick._padding_ = 0x4069000000000000;
    this[1].AttachmentReplication.AttachParent.field0_0x0.DebugPtr = (AActor *)0x4079000000000000;
    *(undefined8 *)&this[1].AttachmentReplication.LocationOffset = 0x4079000000000000;
    *(undefined8 *)&this[1].AttachmentReplication.LocationOffset.field_0x8 = 0x4079000000000000;
    *(undefined8 *)&this[1].AttachmentReplication.LocationOffset.field_0x10 = 0x4079000000000000;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    puVar1 = &this[1].field_0x58;
    this[1].bNetTemporary = '\0';
    this[1].bHidden = '\0';
    this[1].bCallPreReplicationForReplay = '\0';
    this[1].bCallPreReplication = '\0';
    this[1].bReplicateMovement = '\0';
    this[1].bAlwaysRelevant = '\0';
    this[1].bOnlyRelevantToOwner = '\0';
    this[1].bNetStartup = '\0';
    *(undefined1 *)&this[1].CustomTimeDilation = 0;
    *(undefined4 *)&this[1].AttachmentReplication.RelativeScale3D = 1;
    *(undefined8 *)&this[1].AttachmentReplication.RelativeScale3D.field_0x8 = 0;
    *(undefined8 *)&this[1].AttachmentReplication.RelativeScale3D.field_0x10 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraDebugHUDSettings> @ 149270a50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNiagaraDebugHUDSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraDebugHUDSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &UNiagaraDebugHUDSettings::_vftable__for__UObject__;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined ***)(pUVar1 + 1) = &UNiagaraDebugHUDSettings::_vftable__for__FNotifyHook__;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 2;
    FNiagaraDebugHUDSettingsData::FNiagaraDebugHUDSettingsData
              ((FNiagaraDebugHUDSettingsData *)(pUVar1 + 2));
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraDecalRendererProperties> @ 149270b30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraDecalRendererProperties>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraDecalRendererProperties *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraDecalRendererProperties::GetPrivateStaticClass();
  pUVar3 = (UNiagaraDecalRendererProperties *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UNiagaraDecalRendererProperties *)0x0) {
    pUVar3 = UNiagaraDecalRendererProperties::UNiagaraDecalRendererProperties(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraEditorDataBase> @ 149270bd0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNiagaraEditorDataBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraEditorDataBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNiagaraEditorDataBase__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraEditorParametersAdapterBase> @ 149270c80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraEditorParametersAdapterBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraEditorParametersAdapterBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNiagaraEditorParametersAdapterBase__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraEffectType> @ 149270d30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNiagaraEffectType>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraEffectType::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined1 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &___7UNiagaraEffectType__6B_;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x10 = 0;
    *(undefined8 *)&pUVar1[4].field_0x18 = 0;
    *(undefined8 *)&pUVar1[4].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraEmitter> @ 149270e50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNiagaraEmitter>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraEmitter::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined ***)pUVar1 = &UNiagaraEmitter::_vftable__for__UNiagaraEmitterBase__;
    *(undefined ***)&pUVar1[1].field_0x10 =
         &UNiagaraEmitter::_vftable__for__FNiagaraVersionedObject__;
    *(TStatIdData **)&pUVar1[2].field_0x20 = &TStatId::TStatId_NAME_None;
    *(TStatIdData **)(pUVar1 + 3) = &TStatId::TStatId_NAME_None;
    *(TStatIdData **)&pUVar1[3].field_0x8 = &TStatId::TStatId_NAME_None;
    *(TStatIdData **)&pUVar1[3].field_0x10 = &TStatId::TStatId_NAME_None;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined1 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    pUVar1[2].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraEmitterBase> @ 149270f50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNiagaraEmitterBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraEmitterBase::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNiagaraEmitterBase__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraSignificanceHandler> @ 149271010

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraSignificanceHandler>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraSignificanceHandler::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNiagaraSignificanceHandler__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraSignificanceHandlerAge> @ 1492710c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraSignificanceHandlerAge>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraSignificanceHandlerAge::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNiagaraSignificanceHandlerAge__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNiagaraSignificanceHandlerDistance> @ 149271170

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNiagaraSignificanceHandlerDistance>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNiagaraSignificanceHandlerDistance::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNiagaraSignificanceHandlerDistance__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<unsigned___int64,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned___int64,int>,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>_> @ 149271220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<unsigned___int64,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned___int64,int>,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<unsigned___int64,int>,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_s_1 TVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar8;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar9;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar10;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *pTVar13;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> **ppTVar14;
  float fVar15;
  undefined1 auStack_378 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *local_348;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *local_338;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_> *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar15 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar15;
    memset(local_320,0,0x2e8);
    ppTVar14 = &local_338;
    do {
      pTVar8 = ppTVar14[1];
      pTVar13 = *ppTVar14;
      pTVar1 = ppTVar14[2];
      local_348._0_4_ = (int)pTVar1;
      iVar7 = (int)(((longlong)pTVar8 - (longlong)pTVar13) / 0x18) + 1;
      pTVar12 = pTVar13;
      if ((int)local_348 != 0) {
LAB_1492712f0:
        if (8 < iVar7) {
          uVar3 = *(undefined8 *)((pTVar12->ElementData).Pad + 8);
          pTVar10 = pTVar8 + 1;
          lVar6 = (longlong)(iVar7 / 2);
          TVar4 = pTVar12[lVar6]._s_1;
          uVar5 = *(undefined8 *)((longlong)pTVar12[lVar6].ElementData.Pad + 8);
          uVar2 = *(undefined8 *)((longlong)pTVar12 + lVar6 * 0x18 + 0x10);
          pTVar12[lVar6]._s_1 = pTVar12->_s_1;
          *(undefined8 *)((longlong)pTVar12[lVar6].ElementData.Pad + 8) = uVar3;
          *(undefined8 *)((longlong)pTVar12 + lVar6 * 0x18 + 0x10) =
               *(undefined8 *)((pTVar12->ElementData).Pad + 0x10);
          pTVar12->_s_1 = TVar4;
          *(undefined8 *)((pTVar12->ElementData).Pad + 8) = uVar5;
          *(undefined8 *)((pTVar12->ElementData).Pad + 0x10) = uVar2;
          pTVar13 = pTVar12;
LAB_149271340:
          pTVar9 = pTVar13;
          pTVar13 = pTVar9 + 1;
          if (pTVar13 <= pTVar8) goto code_r0x000149271349;
          goto LAB_149271353;
        }
        for (; pTVar13 = pTVar12, pTVar1 = pTVar12, pTVar12 < pTVar8; pTVar8 = pTVar8 + -1) {
          while (pTVar1 = pTVar1 + 1, pTVar1 <= pTVar8) {
            if (*(int *)((pTVar1->ElementData).Pad + 8) < *(int *)((pTVar13->ElementData).Pad + 8))
            {
              pTVar13 = pTVar1;
            }
          }
          TVar4 = pTVar13->_s_1;
          uVar3 = *(undefined8 *)((pTVar13->ElementData).Pad + 8);
          uVar2 = *(undefined8 *)((pTVar13->ElementData).Pad + 0x10);
          uVar5 = *(undefined8 *)((pTVar8->ElementData).Pad + 8);
          pTVar13->_s_1 = pTVar8->_s_1;
          *(undefined8 *)((pTVar13->ElementData).Pad + 8) = uVar5;
          *(undefined8 *)((pTVar13->ElementData).Pad + 0x10) =
               *(undefined8 *)((pTVar8->ElementData).Pad + 0x10);
          pTVar8->_s_1 = TVar4;
          *(undefined8 *)((pTVar8->ElementData).Pad + 8) = uVar3;
          *(undefined8 *)((pTVar8->ElementData).Pad + 0x10) = uVar2;
        }
        goto LAB_149271475;
      }
LAB_149271466:
      local_348 = pTVar1;
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<unsigned___int64,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned___int64,int>,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>::FValueComparisonClass<TGreater<int>_>_>_>_>
                (pTVar13,iVar7,param_3,param_4);
LAB_149271475:
      ppTVar14 = ppTVar14 + -3;
    } while (&local_338 <= ppTVar14);
  }
  return;
code_r0x000149271349:
  if (*(int *)((pTVar12->ElementData).Pad + 8) <= *(int *)((longlong)pTVar9 + 0x20))
  goto LAB_149271340;
LAB_149271353:
  do {
    pTVar11 = pTVar10;
    pTVar10 = pTVar11 + -1;
    if (pTVar10 <= pTVar12) break;
  } while (*(int *)((longlong)pTVar11 + -0x10) <= *(int *)((pTVar12->ElementData).Pad + 8));
  uVar2 = *(undefined8 *)((longlong)pTVar11 + -0x10);
  if (pTVar13 <= pTVar10) {
    TVar4 = pTVar13->_s_1;
    uVar5 = *(undefined8 *)((longlong)pTVar9 + 0x20);
    uVar3 = *(undefined8 *)((longlong)pTVar9 + 0x28);
    pTVar13->_s_1 = pTVar10->_s_1;
    *(undefined8 *)((longlong)pTVar9 + 0x20) = uVar2;
    *(undefined8 *)((longlong)pTVar9 + 0x28) = *(undefined8 *)((longlong)pTVar11 + -8);
    pTVar10->_s_1 = TVar4;
    *(undefined8 *)((longlong)pTVar11 + -0x10) = uVar5;
    *(undefined8 *)((longlong)pTVar11 + -8) = uVar3;
    goto LAB_149271340;
  }
  TVar4 = pTVar12->_s_1;
  uVar5 = *(undefined8 *)((pTVar12->ElementData).Pad + 8);
  uVar3 = *(undefined8 *)((pTVar12->ElementData).Pad + 0x10);
  lVar6 = (longlong)pTVar10 + (-0x18 - (longlong)pTVar12);
  local_348._0_4_ = (int)local_348 + -1;
  lVar6 = lVar6 / 6 + (lVar6 >> 0x3f);
  pTVar12->_s_1 = pTVar10->_s_1;
  *(undefined8 *)((pTVar12->ElementData).Pad + 8) = uVar2;
  *(undefined8 *)((pTVar12->ElementData).Pad + 0x10) = *(undefined8 *)((longlong)pTVar11 + -8);
  pTVar10->_s_1 = TVar4;
  *(undefined8 *)((longlong)pTVar11 + -0x10) = uVar5;
  *(undefined8 *)((longlong)pTVar11 + -8) = uVar3;
  if ((lVar6 >> 2) - (lVar6 >> 0x3f) < ((longlong)pTVar8 - (longlong)pTVar13) / 0x18) {
    if (pTVar13 < pTVar8) {
      *ppTVar14 = pTVar13;
      ppTVar14[1] = pTVar8;
      *(int *)(ppTVar14 + 2) = (int)local_348;
      ppTVar14 = ppTVar14 + 3;
    }
    if (pTVar10 <= pTVar12 + 1) goto LAB_149271475;
    pTVar8 = pTVar11 + -2;
    pTVar13 = pTVar12;
  }
  else {
    if (pTVar12 + 1 < pTVar10) {
      *ppTVar14 = pTVar12;
      ppTVar14[1] = pTVar11 + -2;
      *(int *)(ppTVar14 + 2) = (int)local_348;
      ppTVar14 = ppTVar14 + 3;
    }
    if (pTVar8 <= pTVar13) goto LAB_149271475;
  }
  iVar7 = (int)(((longlong)pTVar8 - (longlong)pTVar13) / 0x18) + 1;
  pTVar12 = pTVar13;
  if ((int)local_348 == 0) goto LAB_149271466;
  goto LAB_1492712f0;
}

// IntroSortInternal<TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&>,int,FIdentityFunctor,`FNiagaraDebugHud::DrawOverview'::__l88::<lambda_24>_> @ 149271530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&>,int,FIdentityFunctor,_FNiagaraDebugHud::DrawOverview_::__l88::<lambda_24>_>
          (TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *param_1,int param_2,
          FIdentityFunctor param_3,<lambda_24> param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  FNameEntryId FVar4;
  uint uVar5;
  FNameEntryId FVar6;
  uint uVar7;
  int iVar8;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *pTVar9;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *pTVar10;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *pTVar11;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> **ppTVar12;
  int iVar13;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *this;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *pTVar14;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *pTVar15;
  float fVar16;
  undefined1 auStack_388 [48];
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *local_358;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *local_348;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar16 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar16;
    memset(local_330,0,0x2e8);
    ppTVar12 = &local_348;
    do {
      pTVar15 = ppTVar12[1];
      pTVar14 = *ppTVar12;
      local_358 = ppTVar12[2];
      iVar8 = (int)((longlong)pTVar15 - (longlong)pTVar14 >> 4) + 1;
      this = pTVar14;
      iVar13 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_1492715f0:
        if (8 < iVar8) {
          uVar1 = *(undefined8 *)&this->field_0x8;
          pTVar9 = pTVar15 + 1;
          uVar2 = *(undefined8 *)(this + iVar8 / 2);
          uVar3 = *(undefined8 *)&this[iVar8 / 2].field_0x8;
          *(undefined8 *)(this + iVar8 / 2) = *(undefined8 *)this;
          *(undefined8 *)&this[iVar8 / 2].field_0x8 = uVar1;
          *(undefined8 *)this = uVar2;
          *(undefined8 *)&this->field_0x8 = uVar3;
          pTVar14 = this;
LAB_149271620:
          pTVar11 = pTVar14;
          pTVar14 = pTVar11 + 1;
          if (pTVar14 <= pTVar15) goto code_r0x000149271629;
          goto LAB_149271640;
        }
        for (; pTVar9 = this, pTVar14 = this, this < pTVar15; pTVar15 = pTVar15 + -1) {
          while (pTVar11 = pTVar9, pTVar14 = pTVar14 + 1, pTVar14 <= pTVar15) {
            iVar13 = ::FName::Compare((FName *)pTVar11,(FName *)pTVar14);
            pTVar9 = pTVar14;
            if (-1 < iVar13) {
              pTVar9 = pTVar11;
            }
          }
          FVar4.Value = *(uint *)&pTVar11->field_0x0;
          uVar5 = *(uint *)&pTVar11->field_0x4;
          uVar1 = *(undefined8 *)&pTVar11->field_0x8;
          FVar6.Value = *(uint *)&pTVar15->field_0x0;
          uVar7 = *(uint *)&pTVar15->field_0x4;
          uVar2 = *(undefined8 *)&pTVar15->field_0x8;
          *(uint *)&pTVar11->field_0x0 = FVar6.Value;
          *(uint *)&pTVar11->field_0x4 = uVar7;
          *(undefined8 *)&pTVar11->field_0x8 = uVar2;
          *(uint *)&pTVar15->field_0x0 = FVar4.Value;
          *(uint *)&pTVar15->field_0x4 = uVar5;
          *(undefined8 *)&pTVar15->field_0x8 = uVar1;
        }
        goto LAB_149271710;
      }
LAB_1492716fe:
      HeapSortInternal<TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&>,int,FIdentityFunctor,_FNiagaraDebugHud::DrawOverview_::__l88::<lambda_24>_>
                (pTVar14,iVar8,param_3,param_4);
LAB_149271710:
      ppTVar12 = ppTVar12 + -3;
    } while (&local_348 <= ppTVar12);
  }
  return;
code_r0x000149271629:
  iVar8 = ::FName::Compare((FName *)this,(FName *)pTVar14);
  if (-1 < iVar8) goto LAB_149271620;
LAB_149271640:
  do {
    pTVar10 = pTVar9;
    pTVar9 = pTVar10 + -1;
    if (pTVar9 <= this) break;
    iVar8 = ::FName::Compare((FName *)pTVar9,(FName *)this);
  } while (-1 < iVar8);
  uVar1 = *(undefined8 *)&pTVar10[-1].field_0x8;
  if (pTVar14 <= pTVar9) {
    uVar2 = *(undefined8 *)pTVar14;
    uVar3 = *(undefined8 *)&pTVar11[1].field_0x8;
    *(undefined8 *)pTVar14 = *(undefined8 *)pTVar9;
    *(undefined8 *)&pTVar11[1].field_0x8 = uVar1;
    *(undefined8 *)pTVar9 = uVar2;
    *(undefined8 *)&pTVar10[-1].field_0x8 = uVar3;
    goto LAB_149271620;
  }
  uVar2 = *(undefined8 *)this;
  uVar3 = *(undefined8 *)&this->field_0x8;
  iVar13 = iVar13 + -1;
  *(undefined8 *)this = *(undefined8 *)pTVar9;
  *(undefined8 *)&this->field_0x8 = uVar1;
  *(undefined8 *)pTVar9 = uVar2;
  *(undefined8 *)&pTVar10[-1].field_0x8 = uVar3;
  if ((longlong)((longlong)pTVar9 + (-0x10 - (longlong)this) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pTVar15 - (longlong)pTVar14 & 0xfffffffffffffff0U)) {
    if (pTVar14 < pTVar15) {
      *ppTVar12 = pTVar14;
      ppTVar12[1] = pTVar15;
      *(int *)(ppTVar12 + 2) = iVar13;
      ppTVar12 = ppTVar12 + 3;
    }
    if (pTVar9 <= this + 1) goto LAB_149271710;
    pTVar15 = pTVar10 + -2;
    pTVar14 = this;
  }
  else {
    if (this + 1 < pTVar9) {
      *ppTVar12 = this;
      ppTVar12[1] = pTVar10 + -2;
      *(int *)(ppTVar12 + 2) = iVar13;
      ppTVar12 = ppTVar12 + 3;
    }
    if (pTVar15 <= pTVar14) goto LAB_149271710;
  }
  iVar8 = (int)((longlong)pTVar15 - (longlong)pTVar14 >> 4) + 1;
  this = pTVar14;
  if (iVar13 == 0) goto LAB_1492716fe;
  goto LAB_1492715f0;
}

// IntroSortInternal<TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&>,int,FIdentityFunctor,`FNiagaraDebugHud::DrawOverview'::__l88::<lambda_25>_> @ 1492717d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&>,int,FIdentityFunctor,_FNiagaraDebugHud::DrawOverview_::__l88::<lambda_25>_>
          (TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *param_1,int param_2,
          FIdentityFunctor param_3,<lambda_25> param_4)

{
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *pTVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> **ppTVar6;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *pTVar7;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *pTVar8;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *pTVar9;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *pTVar10;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *pTVar11;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *pTVar12;
  float fVar13;
  undefined1 auStack_368 [48];
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *local_338;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *local_328;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar13 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar13;
    memset(local_310,0,0x2e8);
    ppTVar6 = &local_328;
    do {
      pTVar12 = ppTVar6[1];
      pTVar11 = *ppTVar6;
      pTVar1 = ppTVar6[2];
      iVar5 = (int)((longlong)pTVar12 - (longlong)pTVar11 >> 4) + 1;
      local_338._0_4_ = (int)pTVar1;
      pTVar10 = pTVar11;
      if ((int)local_338 != 0) {
LAB_149271880:
        if (8 < iVar5) {
          uVar2 = *(undefined8 *)&pTVar10->field_0x8;
          pTVar8 = pTVar12 + 1;
          uVar3 = *(undefined8 *)(pTVar10 + iVar5 / 2);
          uVar4 = *(undefined8 *)&pTVar10[iVar5 / 2].field_0x8;
          *(undefined8 *)(pTVar10 + iVar5 / 2) = *(undefined8 *)pTVar10;
          *(undefined8 *)&pTVar10[iVar5 / 2].field_0x8 = uVar2;
          *(undefined8 *)pTVar10 = uVar3;
          *(undefined8 *)&pTVar10->field_0x8 = uVar4;
          pTVar11 = pTVar10;
LAB_1492718b0:
          pTVar7 = pTVar11;
          pTVar11 = pTVar7 + 1;
          if (pTVar11 <= pTVar12) goto code_r0x0001492718b9;
          goto LAB_1492718d0;
        }
        for (; pTVar11 = pTVar10, pTVar1 = pTVar10, pTVar10 < pTVar12; pTVar12 = pTVar12 + -1) {
          while (pTVar8 = pTVar11, pTVar1 = pTVar1 + 1, pTVar1 <= pTVar12) {
            pTVar11 = pTVar1;
            if (*(int *)(*(longlong *)&pTVar8->field_0x8 + 0x48) <=
                *(int *)(*(longlong *)&pTVar1->field_0x8 + 0x48)) {
              pTVar11 = pTVar8;
            }
          }
          uVar2 = *(undefined8 *)pTVar8;
          uVar3 = *(undefined8 *)&pTVar8->field_0x8;
          uVar4 = *(undefined8 *)&pTVar12->field_0x8;
          *(undefined8 *)pTVar8 = *(undefined8 *)pTVar12;
          *(undefined8 *)&pTVar8->field_0x8 = uVar4;
          *(undefined8 *)pTVar12 = uVar2;
          *(undefined8 *)&pTVar12->field_0x8 = uVar3;
        }
        goto LAB_149271996;
      }
LAB_149271984:
      local_338 = pTVar1;
      HeapSortInternal<TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&>,int,FIdentityFunctor,_FNiagaraDebugHud::DrawOverview_::__l88::<lambda_25>_>
                (pTVar11,iVar5,param_3,param_4);
LAB_149271996:
      ppTVar6 = ppTVar6 + -3;
    } while (&local_328 <= ppTVar6);
  }
  return;
code_r0x0001492718b9:
  if (*(int *)(*(longlong *)&pTVar10->field_0x8 + 0x48) <=
      *(int *)(*(longlong *)&pTVar7[1].field_0x8 + 0x48)) goto LAB_1492718b0;
LAB_1492718d0:
  do {
    pTVar9 = pTVar8;
    pTVar8 = pTVar9 + -1;
    if (pTVar8 <= pTVar10) break;
  } while (*(int *)(*(longlong *)&pTVar9[-1].field_0x8 + 0x48) <=
           *(int *)(*(longlong *)&pTVar10->field_0x8 + 0x48));
  uVar2 = *(undefined8 *)&pTVar9[-1].field_0x8;
  if (pTVar11 <= pTVar8) {
    uVar3 = *(undefined8 *)pTVar11;
    uVar4 = *(undefined8 *)&pTVar7[1].field_0x8;
    *(undefined8 *)pTVar11 = *(undefined8 *)pTVar8;
    *(undefined8 *)&pTVar7[1].field_0x8 = uVar2;
    *(undefined8 *)pTVar8 = uVar3;
    *(undefined8 *)&pTVar9[-1].field_0x8 = uVar4;
    goto LAB_1492718b0;
  }
  uVar3 = *(undefined8 *)pTVar10;
  uVar4 = *(undefined8 *)&pTVar10->field_0x8;
  local_338._0_4_ = (int)local_338 + -1;
  *(undefined8 *)pTVar10 = *(undefined8 *)pTVar8;
  *(undefined8 *)&pTVar10->field_0x8 = uVar2;
  *(undefined8 *)pTVar8 = uVar3;
  *(undefined8 *)&pTVar9[-1].field_0x8 = uVar4;
  if ((longlong)((longlong)pTVar8 + (-0x10 - (longlong)pTVar10) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pTVar12 - (longlong)pTVar11 & 0xfffffffffffffff0U)) {
    if (pTVar11 < pTVar12) {
      *ppTVar6 = pTVar11;
      ppTVar6[1] = pTVar12;
      *(int *)(ppTVar6 + 2) = (int)local_338;
      ppTVar6 = ppTVar6 + 3;
    }
    if (pTVar8 <= pTVar10 + 1) goto LAB_149271996;
    pTVar12 = pTVar9 + -2;
    pTVar11 = pTVar10;
  }
  else {
    if (pTVar10 + 1 < pTVar8) {
      *ppTVar6 = pTVar10;
      ppTVar6[1] = pTVar9 + -2;
      *(int *)(ppTVar6 + 2) = (int)local_338;
      ppTVar6 = ppTVar6 + 3;
    }
    if (pTVar12 <= pTVar11) goto LAB_149271996;
  }
  iVar5 = (int)((longlong)pTVar12 - (longlong)pTVar11 >> 4) + 1;
  pTVar10 = pTVar11;
  if ((int)local_338 == 0) goto LAB_149271984;
  goto LAB_149271880;
}

// IntroSortInternal<TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&>,int,FIdentityFunctor,`FNiagaraDebugHud::DrawOverview'::__l88::<lambda_26>_> @ 149271a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&>,int,FIdentityFunctor,_FNiagaraDebugHud::DrawOverview_::__l88::<lambda_26>_>
          (TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *param_1,int param_2,
          FIdentityFunctor param_3,<lambda_26> param_4)

{
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *pTVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> **ppTVar6;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *pTVar7;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *pTVar8;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *pTVar9;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *pTVar10;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *pTVar11;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *pTVar12;
  float fVar13;
  undefined1 auStack_368 [48];
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *local_338;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *local_328;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar13 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar13;
    memset(local_310,0,0x2e8);
    ppTVar6 = &local_328;
    do {
      pTVar12 = ppTVar6[1];
      pTVar11 = *ppTVar6;
      pTVar1 = ppTVar6[2];
      iVar5 = (int)((longlong)pTVar12 - (longlong)pTVar11 >> 4) + 1;
      local_338._0_4_ = (int)pTVar1;
      pTVar10 = pTVar11;
      if ((int)local_338 != 0) {
LAB_149271af0:
        if (8 < iVar5) {
          uVar2 = *(undefined8 *)&pTVar10->field_0x8;
          pTVar8 = pTVar12 + 1;
          uVar3 = *(undefined8 *)(pTVar10 + iVar5 / 2);
          uVar4 = *(undefined8 *)&pTVar10[iVar5 / 2].field_0x8;
          *(undefined8 *)(pTVar10 + iVar5 / 2) = *(undefined8 *)pTVar10;
          *(undefined8 *)&pTVar10[iVar5 / 2].field_0x8 = uVar2;
          *(undefined8 *)pTVar10 = uVar3;
          *(undefined8 *)&pTVar10->field_0x8 = uVar4;
          pTVar11 = pTVar10;
LAB_149271b20:
          pTVar7 = pTVar11;
          pTVar11 = pTVar7 + 1;
          if (pTVar11 <= pTVar12) goto code_r0x000149271b29;
          goto LAB_149271b40;
        }
        for (; pTVar11 = pTVar10, pTVar1 = pTVar10, pTVar10 < pTVar12; pTVar12 = pTVar12 + -1) {
          while (pTVar8 = pTVar11, pTVar1 = pTVar1 + 1, pTVar1 <= pTVar12) {
            pTVar11 = pTVar1;
            if (*(int *)(*(longlong *)&pTVar8->field_0x8 + 0x4c) <=
                *(int *)(*(longlong *)&pTVar1->field_0x8 + 0x4c)) {
              pTVar11 = pTVar8;
            }
          }
          uVar2 = *(undefined8 *)pTVar8;
          uVar3 = *(undefined8 *)&pTVar8->field_0x8;
          uVar4 = *(undefined8 *)&pTVar12->field_0x8;
          *(undefined8 *)pTVar8 = *(undefined8 *)pTVar12;
          *(undefined8 *)&pTVar8->field_0x8 = uVar4;
          *(undefined8 *)pTVar12 = uVar2;
          *(undefined8 *)&pTVar12->field_0x8 = uVar3;
        }
        goto LAB_149271c06;
      }
LAB_149271bf4:
      local_338 = pTVar1;
      HeapSortInternal<TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&>,int,FIdentityFunctor,_FNiagaraDebugHud::DrawOverview_::__l88::<lambda_26>_>
                (pTVar11,iVar5,param_3,param_4);
LAB_149271c06:
      ppTVar6 = ppTVar6 + -3;
    } while (&local_328 <= ppTVar6);
  }
  return;
code_r0x000149271b29:
  if (*(int *)(*(longlong *)&pTVar10->field_0x8 + 0x4c) <=
      *(int *)(*(longlong *)&pTVar7[1].field_0x8 + 0x4c)) goto LAB_149271b20;
LAB_149271b40:
  do {
    pTVar9 = pTVar8;
    pTVar8 = pTVar9 + -1;
    if (pTVar8 <= pTVar10) break;
  } while (*(int *)(*(longlong *)&pTVar9[-1].field_0x8 + 0x4c) <=
           *(int *)(*(longlong *)&pTVar10->field_0x8 + 0x4c));
  uVar2 = *(undefined8 *)&pTVar9[-1].field_0x8;
  if (pTVar11 <= pTVar8) {
    uVar3 = *(undefined8 *)pTVar11;
    uVar4 = *(undefined8 *)&pTVar7[1].field_0x8;
    *(undefined8 *)pTVar11 = *(undefined8 *)pTVar8;
    *(undefined8 *)&pTVar7[1].field_0x8 = uVar2;
    *(undefined8 *)pTVar8 = uVar3;
    *(undefined8 *)&pTVar9[-1].field_0x8 = uVar4;
    goto LAB_149271b20;
  }
  uVar3 = *(undefined8 *)pTVar10;
  uVar4 = *(undefined8 *)&pTVar10->field_0x8;
  local_338._0_4_ = (int)local_338 + -1;
  *(undefined8 *)pTVar10 = *(undefined8 *)pTVar8;
  *(undefined8 *)&pTVar10->field_0x8 = uVar2;
  *(undefined8 *)pTVar8 = uVar3;
  *(undefined8 *)&pTVar9[-1].field_0x8 = uVar4;
  if ((longlong)((longlong)pTVar8 + (-0x10 - (longlong)pTVar10) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pTVar12 - (longlong)pTVar11 & 0xfffffffffffffff0U)) {
    if (pTVar11 < pTVar12) {
      *ppTVar6 = pTVar11;
      ppTVar6[1] = pTVar12;
      *(int *)(ppTVar6 + 2) = (int)local_338;
      ppTVar6 = ppTVar6 + 3;
    }
    if (pTVar8 <= pTVar10 + 1) goto LAB_149271c06;
    pTVar12 = pTVar9 + -2;
    pTVar11 = pTVar10;
  }
  else {
    if (pTVar10 + 1 < pTVar8) {
      *ppTVar6 = pTVar10;
      ppTVar6[1] = pTVar9 + -2;
      *(int *)(ppTVar6 + 2) = (int)local_338;
      ppTVar6 = ppTVar6 + 3;
    }
    if (pTVar12 <= pTVar11) goto LAB_149271c06;
  }
  iVar5 = (int)((longlong)pTVar12 - (longlong)pTVar11 >> 4) + 1;
  pTVar10 = pTVar11;
  if ((int)local_338 == 0) goto LAB_149271bf4;
  goto LAB_149271af0;
}

// IntroSortInternal<TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&>,int,FIdentityFunctor,`FNiagaraDebugHud::DrawOverview'::__l88::<lambda_27>_> @ 149271cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&>,int,FIdentityFunctor,_FNiagaraDebugHud::DrawOverview_::__l88::<lambda_27>_>
          (TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *param_1,int param_2,
          FIdentityFunctor param_3,<lambda_27> param_4)

{
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *pTVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> **ppTVar6;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *pTVar7;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *pTVar8;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *pTVar9;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *pTVar10;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *pTVar11;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *pTVar12;
  float fVar13;
  undefined1 auStack_368 [48];
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *local_338;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *local_328;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar13 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar13;
    memset(local_310,0,0x2e8);
    ppTVar6 = &local_328;
    do {
      pTVar12 = ppTVar6[1];
      pTVar11 = *ppTVar6;
      pTVar1 = ppTVar6[2];
      iVar5 = (int)((longlong)pTVar12 - (longlong)pTVar11 >> 4) + 1;
      local_338._0_4_ = (int)pTVar1;
      pTVar10 = pTVar11;
      if ((int)local_338 != 0) {
LAB_149271d60:
        if (8 < iVar5) {
          uVar2 = *(undefined8 *)&pTVar10->field_0x8;
          pTVar8 = pTVar12 + 1;
          uVar3 = *(undefined8 *)(pTVar10 + iVar5 / 2);
          uVar4 = *(undefined8 *)&pTVar10[iVar5 / 2].field_0x8;
          *(undefined8 *)(pTVar10 + iVar5 / 2) = *(undefined8 *)pTVar10;
          *(undefined8 *)&pTVar10[iVar5 / 2].field_0x8 = uVar2;
          *(undefined8 *)pTVar10 = uVar3;
          *(undefined8 *)&pTVar10->field_0x8 = uVar4;
          pTVar11 = pTVar10;
LAB_149271d90:
          pTVar7 = pTVar11;
          pTVar11 = pTVar7 + 1;
          if (pTVar11 <= pTVar12) goto code_r0x000149271d99;
          goto LAB_149271db0;
        }
        for (; pTVar11 = pTVar10, pTVar1 = pTVar10, pTVar10 < pTVar12; pTVar12 = pTVar12 + -1) {
          while (pTVar8 = pTVar11, pTVar1 = pTVar1 + 1, pTVar1 <= pTVar12) {
            pTVar11 = pTVar1;
            if (*(int *)(*(longlong *)&pTVar8->field_0x8 + 0x50) <=
                *(int *)(*(longlong *)&pTVar1->field_0x8 + 0x50)) {
              pTVar11 = pTVar8;
            }
          }
          uVar2 = *(undefined8 *)pTVar8;
          uVar3 = *(undefined8 *)&pTVar8->field_0x8;
          uVar4 = *(undefined8 *)&pTVar12->field_0x8;
          *(undefined8 *)pTVar8 = *(undefined8 *)pTVar12;
          *(undefined8 *)&pTVar8->field_0x8 = uVar4;
          *(undefined8 *)pTVar12 = uVar2;
          *(undefined8 *)&pTVar12->field_0x8 = uVar3;
        }
        goto LAB_149271e76;
      }
LAB_149271e64:
      local_338 = pTVar1;
      HeapSortInternal<TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&>,int,FIdentityFunctor,_FNiagaraDebugHud::DrawOverview_::__l88::<lambda_27>_>
                (pTVar11,iVar5,param_3,param_4);
LAB_149271e76:
      ppTVar6 = ppTVar6 + -3;
    } while (&local_328 <= ppTVar6);
  }
  return;
code_r0x000149271d99:
  if (*(int *)(*(longlong *)&pTVar10->field_0x8 + 0x50) <=
      *(int *)(*(longlong *)&pTVar7[1].field_0x8 + 0x50)) goto LAB_149271d90;
LAB_149271db0:
  do {
    pTVar9 = pTVar8;
    pTVar8 = pTVar9 + -1;
    if (pTVar8 <= pTVar10) break;
  } while (*(int *)(*(longlong *)&pTVar9[-1].field_0x8 + 0x50) <=
           *(int *)(*(longlong *)&pTVar10->field_0x8 + 0x50));
  uVar2 = *(undefined8 *)&pTVar9[-1].field_0x8;
  if (pTVar11 <= pTVar8) {
    uVar3 = *(undefined8 *)pTVar11;
    uVar4 = *(undefined8 *)&pTVar7[1].field_0x8;
    *(undefined8 *)pTVar11 = *(undefined8 *)pTVar8;
    *(undefined8 *)&pTVar7[1].field_0x8 = uVar2;
    *(undefined8 *)pTVar8 = uVar3;
    *(undefined8 *)&pTVar9[-1].field_0x8 = uVar4;
    goto LAB_149271d90;
  }
  uVar3 = *(undefined8 *)pTVar10;
  uVar4 = *(undefined8 *)&pTVar10->field_0x8;
  local_338._0_4_ = (int)local_338 + -1;
  *(undefined8 *)pTVar10 = *(undefined8 *)pTVar8;
  *(undefined8 *)&pTVar10->field_0x8 = uVar2;
  *(undefined8 *)pTVar8 = uVar3;
  *(undefined8 *)&pTVar9[-1].field_0x8 = uVar4;
  if ((longlong)((longlong)pTVar8 + (-0x10 - (longlong)pTVar10) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pTVar12 - (longlong)pTVar11 & 0xfffffffffffffff0U)) {
    if (pTVar11 < pTVar12) {
      *ppTVar6 = pTVar11;
      ppTVar6[1] = pTVar12;
      *(int *)(ppTVar6 + 2) = (int)local_338;
      ppTVar6 = ppTVar6 + 3;
    }
    if (pTVar8 <= pTVar10 + 1) goto LAB_149271e76;
    pTVar12 = pTVar9 + -2;
    pTVar11 = pTVar10;
  }
  else {
    if (pTVar10 + 1 < pTVar8) {
      *ppTVar6 = pTVar10;
      ppTVar6[1] = pTVar9 + -2;
      *(int *)(ppTVar6 + 2) = (int)local_338;
      ppTVar6 = ppTVar6 + 3;
    }
    if (pTVar12 <= pTVar11) goto LAB_149271e76;
  }
  iVar5 = (int)((longlong)pTVar12 - (longlong)pTVar11 >> 4) + 1;
  pTVar10 = pTVar11;
  if ((int)local_338 == 0) goto LAB_149271e64;
  goto LAB_149271d60;
}

// IntroSortInternal<TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&>,int,FIdentityFunctor,`FNiagaraDebugHud::DrawOverview'::__l88::<lambda_28>_> @ 149271f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&>,int,FIdentityFunctor,_FNiagaraDebugHud::DrawOverview_::__l88::<lambda_28>_>
          (TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *param_1,int param_2,
          FIdentityFunctor param_3,<lambda_28> param_4)

{
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *pTVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> **ppTVar6;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *pTVar7;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *pTVar8;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *pTVar9;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *pTVar10;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *pTVar11;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *pTVar12;
  float fVar13;
  undefined1 auStack_368 [48];
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *local_338;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *local_328;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar13 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar13;
    memset(local_310,0,0x2e8);
    ppTVar6 = &local_328;
    do {
      pTVar12 = ppTVar6[1];
      pTVar11 = *ppTVar6;
      pTVar1 = ppTVar6[2];
      iVar5 = (int)((longlong)pTVar12 - (longlong)pTVar11 >> 4) + 1;
      local_338._0_4_ = (int)pTVar1;
      pTVar10 = pTVar11;
      if ((int)local_338 != 0) {
LAB_149271fd0:
        if (8 < iVar5) {
          uVar2 = *(undefined8 *)&pTVar10->field_0x8;
          pTVar8 = pTVar12 + 1;
          uVar3 = *(undefined8 *)(pTVar10 + iVar5 / 2);
          uVar4 = *(undefined8 *)&pTVar10[iVar5 / 2].field_0x8;
          *(undefined8 *)(pTVar10 + iVar5 / 2) = *(undefined8 *)pTVar10;
          *(undefined8 *)&pTVar10[iVar5 / 2].field_0x8 = uVar2;
          *(undefined8 *)pTVar10 = uVar3;
          *(undefined8 *)&pTVar10->field_0x8 = uVar4;
          pTVar11 = pTVar10;
LAB_149272000:
          pTVar7 = pTVar11;
          pTVar11 = pTVar7 + 1;
          if (pTVar11 <= pTVar12) goto code_r0x000149272009;
          goto LAB_149272020;
        }
        for (; pTVar11 = pTVar10, pTVar1 = pTVar10, pTVar10 < pTVar12; pTVar12 = pTVar12 + -1) {
          while (pTVar8 = pTVar11, pTVar1 = pTVar1 + 1, pTVar1 <= pTVar12) {
            pTVar11 = pTVar1;
            if (*(longlong *)(*(longlong *)&pTVar8->field_0x8 + 0x60) <=
                *(longlong *)(*(longlong *)&pTVar1->field_0x8 + 0x60)) {
              pTVar11 = pTVar8;
            }
          }
          uVar2 = *(undefined8 *)pTVar8;
          uVar3 = *(undefined8 *)&pTVar8->field_0x8;
          uVar4 = *(undefined8 *)&pTVar12->field_0x8;
          *(undefined8 *)pTVar8 = *(undefined8 *)pTVar12;
          *(undefined8 *)&pTVar8->field_0x8 = uVar4;
          *(undefined8 *)pTVar12 = uVar2;
          *(undefined8 *)&pTVar12->field_0x8 = uVar3;
        }
        goto LAB_1492720e8;
      }
LAB_1492720d6:
      local_338 = pTVar1;
      HeapSortInternal<TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&>,int,FIdentityFunctor,_FNiagaraDebugHud::DrawOverview_::__l88::<lambda_28>_>
                (pTVar11,iVar5,param_3,param_4);
LAB_1492720e8:
      ppTVar6 = ppTVar6 + -3;
    } while (&local_328 <= ppTVar6);
  }
  return;
code_r0x000149272009:
  if (*(longlong *)(*(longlong *)&pTVar10->field_0x8 + 0x60) <=
      *(longlong *)(*(longlong *)&pTVar7[1].field_0x8 + 0x60)) goto LAB_149272000;
LAB_149272020:
  do {
    pTVar9 = pTVar8;
    pTVar8 = pTVar9 + -1;
    if (pTVar8 <= pTVar10) break;
  } while (*(longlong *)(*(longlong *)&pTVar9[-1].field_0x8 + 0x60) <=
           *(longlong *)(*(longlong *)&pTVar10->field_0x8 + 0x60));
  uVar2 = *(undefined8 *)&pTVar9[-1].field_0x8;
  if (pTVar11 <= pTVar8) {
    uVar3 = *(undefined8 *)pTVar11;
    uVar4 = *(undefined8 *)&pTVar7[1].field_0x8;
    *(undefined8 *)pTVar11 = *(undefined8 *)pTVar8;
    *(undefined8 *)&pTVar7[1].field_0x8 = uVar2;
    *(undefined8 *)pTVar8 = uVar3;
    *(undefined8 *)&pTVar9[-1].field_0x8 = uVar4;
    goto LAB_149272000;
  }
  uVar3 = *(undefined8 *)pTVar10;
  uVar4 = *(undefined8 *)&pTVar10->field_0x8;
  local_338._0_4_ = (int)local_338 + -1;
  *(undefined8 *)pTVar10 = *(undefined8 *)pTVar8;
  *(undefined8 *)&pTVar10->field_0x8 = uVar2;
  *(undefined8 *)pTVar8 = uVar3;
  *(undefined8 *)&pTVar9[-1].field_0x8 = uVar4;
  if ((longlong)((longlong)pTVar8 + (-0x10 - (longlong)pTVar10) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pTVar12 - (longlong)pTVar11 & 0xfffffffffffffff0U)) {
    if (pTVar11 < pTVar12) {
      *ppTVar6 = pTVar11;
      ppTVar6[1] = pTVar12;
      *(int *)(ppTVar6 + 2) = (int)local_338;
      ppTVar6 = ppTVar6 + 3;
    }
    if (pTVar8 <= pTVar10 + 1) goto LAB_1492720e8;
    pTVar12 = pTVar9 + -2;
    pTVar11 = pTVar10;
  }
  else {
    if (pTVar10 + 1 < pTVar8) {
      *ppTVar6 = pTVar10;
      ppTVar6[1] = pTVar9 + -2;
      *(int *)(ppTVar6 + 2) = (int)local_338;
      ppTVar6 = ppTVar6 + 3;
    }
    if (pTVar12 <= pTVar11) goto LAB_1492720e8;
  }
  iVar5 = (int)((longlong)pTVar12 - (longlong)pTVar11 >> 4) + 1;
  pTVar10 = pTVar11;
  if ((int)local_338 == 0) goto LAB_1492720d6;
  goto LAB_149271fd0;
}

// IntroSortInternal<TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&>,int,FIdentityFunctor,`FNiagaraDebugHud::DrawOverview'::__l88::<lambda_29>_> @ 149272190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&>,int,FIdentityFunctor,_FNiagaraDebugHud::DrawOverview_::__l88::<lambda_29>_>
          (TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *param_1,int param_2,
          FIdentityFunctor param_3,<lambda_29> param_4)

{
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *pTVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> **ppTVar6;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *pTVar7;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *pTVar8;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *pTVar9;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *pTVar10;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *pTVar11;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *pTVar12;
  float fVar13;
  undefined1 auStack_368 [48];
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *local_338;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *local_328;
  TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&> *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar13 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar13;
    memset(local_310,0,0x2e8);
    ppTVar6 = &local_328;
    do {
      pTVar12 = ppTVar6[1];
      pTVar11 = *ppTVar6;
      pTVar1 = ppTVar6[2];
      iVar5 = (int)((longlong)pTVar12 - (longlong)pTVar11 >> 4) + 1;
      local_338._0_4_ = (int)pTVar1;
      pTVar10 = pTVar11;
      if ((int)local_338 != 0) {
LAB_149272240:
        if (8 < iVar5) {
          uVar2 = *(undefined8 *)&pTVar10->field_0x8;
          pTVar8 = pTVar12 + 1;
          uVar3 = *(undefined8 *)(pTVar10 + iVar5 / 2);
          uVar4 = *(undefined8 *)&pTVar10[iVar5 / 2].field_0x8;
          *(undefined8 *)(pTVar10 + iVar5 / 2) = *(undefined8 *)pTVar10;
          *(undefined8 *)&pTVar10[iVar5 / 2].field_0x8 = uVar2;
          *(undefined8 *)pTVar10 = uVar3;
          *(undefined8 *)&pTVar10->field_0x8 = uVar4;
          pTVar11 = pTVar10;
LAB_149272270:
          pTVar7 = pTVar11;
          pTVar11 = pTVar7 + 1;
          if (pTVar11 <= pTVar12) goto code_r0x000149272279;
          goto LAB_149272290;
        }
        for (; pTVar11 = pTVar10, pTVar1 = pTVar10, pTVar10 < pTVar12; pTVar12 = pTVar12 + -1) {
          while (pTVar8 = pTVar11, pTVar1 = pTVar1 + 1, pTVar1 <= pTVar12) {
            pTVar11 = pTVar1;
            if (*(int *)(*(longlong *)&pTVar1->field_0x8 + 0x40) <=
                *(int *)(*(longlong *)&pTVar8->field_0x8 + 0x40)) {
              pTVar11 = pTVar8;
            }
          }
          uVar2 = *(undefined8 *)pTVar8;
          uVar3 = *(undefined8 *)&pTVar8->field_0x8;
          uVar4 = *(undefined8 *)&pTVar12->field_0x8;
          *(undefined8 *)pTVar8 = *(undefined8 *)pTVar12;
          *(undefined8 *)&pTVar8->field_0x8 = uVar4;
          *(undefined8 *)pTVar12 = uVar2;
          *(undefined8 *)&pTVar12->field_0x8 = uVar3;
        }
        goto LAB_149272356;
      }
LAB_149272344:
      local_338 = pTVar1;
      HeapSortInternal<TTuple<FName,FNiagaraDebugHud::FSystemDebugInfo_const_&>,int,FIdentityFunctor,_FNiagaraDebugHud::DrawOverview_::__l88::<lambda_29>_>
                (pTVar11,iVar5,param_3,param_4);
LAB_149272356:
      ppTVar6 = ppTVar6 + -3;
    } while (&local_328 <= ppTVar6);
  }
  return;
code_r0x000149272279:
  if (*(int *)(*(longlong *)&pTVar7[1].field_0x8 + 0x40) <=
      *(int *)(*(longlong *)&pTVar10->field_0x8 + 0x40)) goto LAB_149272270;
LAB_149272290:
  do {
    pTVar9 = pTVar8;
    pTVar8 = pTVar9 + -1;
    if (pTVar8 <= pTVar10) break;
  } while (*(int *)(*(longlong *)&pTVar10->field_0x8 + 0x40) <=
           *(int *)(*(longlong *)&pTVar9[-1].field_0x8 + 0x40));
  uVar2 = *(undefined8 *)&pTVar9[-1].field_0x8;
  if (pTVar11 <= pTVar8) {
    uVar3 = *(undefined8 *)pTVar11;
    uVar4 = *(undefined8 *)&pTVar7[1].field_0x8;
    *(undefined8 *)pTVar11 = *(undefined8 *)pTVar8;
    *(undefined8 *)&pTVar7[1].field_0x8 = uVar2;
    *(undefined8 *)pTVar8 = uVar3;
    *(undefined8 *)&pTVar9[-1].field_0x8 = uVar4;
    goto LAB_149272270;
  }
  uVar3 = *(undefined8 *)pTVar10;
  uVar4 = *(undefined8 *)&pTVar10->field_0x8;
  local_338._0_4_ = (int)local_338 + -1;
  *(undefined8 *)pTVar10 = *(undefined8 *)pTVar8;
  *(undefined8 *)&pTVar10->field_0x8 = uVar2;
  *(undefined8 *)pTVar8 = uVar3;
  *(undefined8 *)&pTVar9[-1].field_0x8 = uVar4;
  if ((longlong)((longlong)pTVar8 + (-0x10 - (longlong)pTVar10) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pTVar12 - (longlong)pTVar11 & 0xfffffffffffffff0U)) {
    if (pTVar11 < pTVar12) {
      *ppTVar6 = pTVar11;
      ppTVar6[1] = pTVar12;
      *(int *)(ppTVar6 + 2) = (int)local_338;
      ppTVar6 = ppTVar6 + 3;
    }
    if (pTVar8 <= pTVar10 + 1) goto LAB_149272356;
    pTVar12 = pTVar9 + -2;
    pTVar11 = pTVar10;
  }
  else {
    if (pTVar10 + 1 < pTVar8) {
      *ppTVar6 = pTVar10;
      ppTVar6[1] = pTVar9 + -2;
      *(int *)(ppTVar6 + 2) = (int)local_338;
      ppTVar6 = ppTVar6 + 3;
    }
    if (pTVar12 <= pTVar11) goto LAB_149272356;
  }
  iVar5 = (int)((longlong)pTVar12 - (longlong)pTVar11 >> 4) + 1;
  pTVar10 = pTVar11;
  if ((int)local_338 == 0) goto LAB_149272344;
  goto LAB_149272240;
}

// IsObjectPtrEqual<UNiagaraRendererProperties,UNiagaraRendererProperties_*,0> @ 149272450

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UNiagaraRendererProperties,UNiagaraRendererProperties_*,0>
          (TObjectPtr<UNiagaraRendererProperties> *param_1,UNiagaraRendererProperties **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UNiagaraRendererProperties *)0x0) {
    return *param_2 == (UNiagaraRendererProperties *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UNiagaraScript,UNiagaraScript_const_*,0> @ 149272470

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UNiagaraScript,UNiagaraScript_const_*,0>
          (TObjectPtr<UNiagaraScript> *param_1,UNiagaraScript **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UNiagaraScript *)0x0) {
    return *param_2 == (UNiagaraScript *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UNiagaraSimulationStageBase,UNiagaraSimulationStageBase_*,0> @ 149272490

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UNiagaraSimulationStageBase,UNiagaraSimulationStageBase_*,0>
          (TObjectPtr<UNiagaraSimulationStageBase> *param_1,UNiagaraSimulationStageBase **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UNiagaraSimulationStageBase *)0x0) {
    return *param_2 == (UNiagaraSimulationStageBase *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// NewObject<UNiagaraScript> @ 1492724b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UNiagaraScript * __cdecl
NewObject<UNiagaraScript>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UNiagaraScript *pUVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UNiagaraScript_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UNiagaraScript *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UNiagaraSignificanceHandlerDistance> @ 1492725a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UNiagaraSignificanceHandlerDistance * __cdecl
NewObject<UNiagaraSignificanceHandlerDistance>(UObject *param_1)

{
  UClass *pUVar1;
  UObject *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UNiagaraSignificanceHandlerDistance::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return (UNiagaraSignificanceHandlerDistance *)pUVar2;
}

// NewObject<UNiagaraSimCache> @ 149272640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UNiagaraSimCache * __cdecl NewObject<UNiagaraSimCache>(UObject *param_1)

{
  UClass *pUVar1;
  UNiagaraSimCache *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UNiagaraSimCache_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UNiagaraSimCache *)
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

// ReallocGrow1_DoAlloc<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<`FNiagaraDebugHud::DrawGpuComputeOverriew'::__l2::FSimpleTableDraw::FColumn>_> @ 149272830

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<_FNiagaraDebugHud::DrawGpuComputeOverriew_::__l2::FSimpleTableDraw::FColumn>_>
          (uint param_1,uint param_2,
          ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawGpuComputeOverriew(FNiagaraWorldManager_*,FCanvas_*,UE::Math::TVector2<float>_&)_::_2_::FSimpleTableDraw::FColumn>
          *param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_4;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x11) {
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
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<`FNiagaraDebugHud::DrawGpuComputeOverriew'::__l2::FSimpleTableDraw::FColumn>::
    ResizeAllocation(param_3,uVar2,iVar8,uVar7);
    *param_4 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn>_> @ 149272b70

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<_FNiagaraDebugHud::DrawOverview_::__l2::FOverviewColumn>_>
          (ushort param_1,
          ForElementType<_private:_void___cdecl_FNiagaraDebugHud::DrawOverview(FNiagaraWorldManager_*,FCanvas_*)_::_2_::FOverviewColumn>
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
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x11) {
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
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<`FNiagaraDebugHud::DrawOverview'::__l2::FOverviewColumn>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// RemoveAll<`UNiagaraEmitter::RemoveEventHandlerByUsageId'::__l2::<lambda_1>_> @ 149272f60

int __thiscall
TArray<FNiagaraEventScriptProperties,TSizedDefaultAllocator<32>_>::
RemoveAll<_UNiagaraEmitter::RemoveEventHandlerByUsageId_::__l2::<lambda_1>_>
          (TArray<FNiagaraEventScriptProperties,TSizedDefaultAllocator<32>_> *this,
          <lambda_1> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  bool bVar12;
  
  iVar1 = this->ArrayNum;
  lVar9 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  iVar11 = 0;
  uVar3 = *(undefined8 *)(*(longlong *)pFVar2 + 0x34);
  uVar4 = *(undefined8 *)(*(longlong *)pFVar2 + 0x3c);
  bVar12 = (((uint)((ulonglong)uVar3 >> 0x20) != (param_1->EventHandlerUsageId).B ||
            (uint)((ulonglong)uVar4 >> 0x20) != (param_1->EventHandlerUsageId).D) ||
           (uint)uVar4 != (param_1->EventHandlerUsageId).C) ||
           (uint)uVar3 != (param_1->EventHandlerUsageId).A;
  lVar5 = 0;
  iVar7 = 0;
  do {
    lVar5 = lVar5 + 1;
    iVar8 = iVar7 + 1;
    if (lVar5 < lVar9) {
      pFVar10 = pFVar2 + lVar5 * 0x58;
      do {
        uVar3 = *(undefined8 *)(*(longlong *)pFVar10 + 0x34);
        uVar4 = *(undefined8 *)(*(longlong *)pFVar10 + 0x3c);
        if (bVar12 != ((((uint)((ulonglong)uVar3 >> 0x20) != (param_1->EventHandlerUsageId).B ||
                        (uint)((ulonglong)uVar4 >> 0x20) != (param_1->EventHandlerUsageId).D) ||
                       (param_1->EventHandlerUsageId).A != (uint)uVar3) ||
                      (param_1->EventHandlerUsageId).C != (uint)uVar4)) break;
        iVar8 = iVar8 + 1;
        lVar5 = lVar5 + 1;
        pFVar10 = pFVar10 + 0x58;
      } while (lVar5 < lVar9);
    }
    iVar6 = iVar8 - iVar7;
    if (bVar12 == false) {
      DestructItems<FNiagaraEventScriptProperties,int>
                ((FNiagaraEventScriptProperties *)(pFVar2 + (longlong)iVar7 * 0x58),iVar6);
    }
    else {
      if (iVar11 != iVar7) {
        memmove(pFVar2 + (longlong)iVar11 * 0x58,pFVar2 + (longlong)iVar7 * 0x58,
                (longlong)iVar6 * 0x58);
      }
      iVar11 = iVar11 + iVar6;
    }
    bVar12 = (bool)(bVar12 ^ 1);
    iVar7 = iVar8;
    if (lVar9 <= lVar5) {
      this->ArrayNum = iVar11;
      return iVar1 - iVar11;
    }
  } while( true );
}

// StaticEnum<enum_ENiagaraCullProxyMode> @ 149273340

UEnum * __cdecl StaticEnum<enum_ENiagaraCullProxyMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraCullProxyMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraCullProxyMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraCullProxyMode,(UObject *)pUVar1,
                       L"ENiagaraCullProxyMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraCullProxyMode.OuterSingleton;
}

// StaticEnum<enum_ENiagaraCullReaction> @ 149273380

UEnum * __cdecl StaticEnum<enum_ENiagaraCullReaction>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraCullReaction.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraCullReaction.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraCullReaction,(UObject *)pUVar1,
                       L"ENiagaraCullReaction");
  }
  return Z_Registration_Info_UEnum_ENiagaraCullReaction.OuterSingleton;
}

// StaticEnum<enum_ENiagaraDebugHUDDOverviewSort> @ 1492733c0

UEnum * __cdecl StaticEnum<enum_ENiagaraDebugHUDDOverviewSort>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraDebugHUDDOverviewSort.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraDebugHUDDOverviewSort.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDebugHUDDOverviewSort,(UObject *)pUVar1,
                       L"ENiagaraDebugHUDDOverviewSort");
  }
  return Z_Registration_Info_UEnum_ENiagaraDebugHUDDOverviewSort.OuterSingleton;
}

// StaticEnum<enum_ENiagaraDebugHUDOverviewMode> @ 149273400

UEnum * __cdecl StaticEnum<enum_ENiagaraDebugHUDOverviewMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraDebugHUDOverviewMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraDebugHUDOverviewMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDebugHUDOverviewMode,(UObject *)pUVar1,
                       L"ENiagaraDebugHUDOverviewMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraDebugHUDOverviewMode.OuterSingleton;
}

// StaticEnum<enum_ENiagaraDebugHUDPerfGraphMode> @ 149273440

UEnum * __cdecl StaticEnum<enum_ENiagaraDebugHUDPerfGraphMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraDebugHUDPerfGraphMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraDebugHUDPerfGraphMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDebugHUDPerfGraphMode,(UObject *)pUVar1,
                       L"ENiagaraDebugHUDPerfGraphMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraDebugHUDPerfGraphMode.OuterSingleton;
}

// StaticEnum<enum_ENiagaraDebugHUDPerfSampleMode> @ 149273480

UEnum * __cdecl StaticEnum<enum_ENiagaraDebugHUDPerfSampleMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraDebugHUDPerfSampleMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraDebugHUDPerfSampleMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDebugHUDPerfSampleMode,(UObject *)pUVar1,
                       L"ENiagaraDebugHUDPerfSampleMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraDebugHUDPerfSampleMode.OuterSingleton;
}

// StaticEnum<enum_ENiagaraDebugHUDPerfUnits> @ 1492734c0

UEnum * __cdecl StaticEnum<enum_ENiagaraDebugHUDPerfUnits>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraDebugHUDPerfUnits.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraDebugHUDPerfUnits.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDebugHUDPerfUnits,(UObject *)pUVar1,
                       L"ENiagaraDebugHUDPerfUnits");
  }
  return Z_Registration_Info_UEnum_ENiagaraDebugHUDPerfUnits.OuterSingleton;
}

// StaticEnum<enum_ENiagaraDebugHudFont> @ 149273500

UEnum * __cdecl StaticEnum<enum_ENiagaraDebugHudFont>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraDebugHudFont.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraDebugHudFont.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDebugHudFont,(UObject *)pUVar1,
                       L"ENiagaraDebugHudFont");
  }
  return Z_Registration_Info_UEnum_ENiagaraDebugHudFont.OuterSingleton;
}

// StaticEnum<enum_ENiagaraDebugHudHAlign> @ 149273540

UEnum * __cdecl StaticEnum<enum_ENiagaraDebugHudHAlign>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraDebugHudHAlign.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraDebugHudHAlign.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDebugHudHAlign,(UObject *)pUVar1,
                       L"ENiagaraDebugHudHAlign");
  }
  return Z_Registration_Info_UEnum_ENiagaraDebugHudHAlign.OuterSingleton;
}

// StaticEnum<enum_ENiagaraDebugHudVAlign> @ 149273580

UEnum * __cdecl StaticEnum<enum_ENiagaraDebugHudVAlign>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraDebugHudVAlign.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraDebugHudVAlign.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDebugHudVAlign,(UObject *)pUVar1,
                       L"ENiagaraDebugHudVAlign");
  }
  return Z_Registration_Info_UEnum_ENiagaraDebugHudVAlign.OuterSingleton;
}

// StaticEnum<enum_ENiagaraDebugHudVerbosity> @ 1492735c0

UEnum * __cdecl StaticEnum<enum_ENiagaraDebugHudVerbosity>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraDebugHudVerbosity.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraDebugHudVerbosity.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDebugHudVerbosity,(UObject *)pUVar1,
                       L"ENiagaraDebugHudVerbosity");
  }
  return Z_Registration_Info_UEnum_ENiagaraDebugHudVerbosity.OuterSingleton;
}

// StaticEnum<enum_ENiagaraDebugPlaybackMode> @ 149273600

UEnum * __cdecl StaticEnum<enum_ENiagaraDebugPlaybackMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraDebugPlaybackMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraDebugPlaybackMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDebugPlaybackMode,(UObject *)pUVar1,
                       L"ENiagaraDebugPlaybackMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraDebugPlaybackMode.OuterSingleton;
}

// StaticEnum<enum_ENiagaraEditorPreviewActorPlaybackType> @ 149273640

UEnum * __cdecl StaticEnum<enum_ENiagaraEditorPreviewActorPlaybackType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraEditorPreviewActorPlaybackType.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraEditorPreviewActorPlaybackType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraEditorPreviewActorPlaybackType,
                       (UObject *)pUVar1,L"ENiagaraEditorPreviewActorPlaybackType");
  }
  return Z_Registration_Info_UEnum_ENiagaraEditorPreviewActorPlaybackType.OuterSingleton;
}

// StaticEnum<enum_ENiagaraEditorPreviewActorRotationMode> @ 149273680

UEnum * __cdecl StaticEnum<enum_ENiagaraEditorPreviewActorRotationMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraEditorPreviewActorRotationMode.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraEditorPreviewActorRotationMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraEditorPreviewActorRotationMode,
                       (UObject *)pUVar1,L"ENiagaraEditorPreviewActorRotationMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraEditorPreviewActorRotationMode.OuterSingleton;
}

// StaticEnum<enum_ENiagaraEditorPreviewActorShapeType> @ 1492736c0

UEnum * __cdecl StaticEnum<enum_ENiagaraEditorPreviewActorShapeType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraEditorPreviewActorShapeType.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraEditorPreviewActorShapeType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraEditorPreviewActorShapeType,
                       (UObject *)pUVar1,L"ENiagaraEditorPreviewActorShapeType");
  }
  return Z_Registration_Info_UEnum_ENiagaraEditorPreviewActorShapeType.OuterSingleton;
}

// StaticEnum<enum_ENiagaraEmitterCalculateBoundMode> @ 149273700

UEnum * __cdecl StaticEnum<enum_ENiagaraEmitterCalculateBoundMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraEmitterCalculateBoundMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraEmitterCalculateBoundMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraEmitterCalculateBoundMode,(UObject *)pUVar1
                       ,L"ENiagaraEmitterCalculateBoundMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraEmitterCalculateBoundMode.OuterSingleton;
}

// StaticEnum<enum_ENiagaraEmitterMode> @ 149273740

UEnum * __cdecl StaticEnum<enum_ENiagaraEmitterMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraEmitterMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraEmitterMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraEmitterMode,(UObject *)pUVar1,
                       L"ENiagaraEmitterMode");
  }
  return Z_Registration_Info_UEnum_ENiagaraEmitterMode.OuterSingleton;
}

// StaticEnum<enum_ENiagaraScalabilityUpdateFrequency> @ 149273780

UEnum * __cdecl StaticEnum<enum_ENiagaraScalabilityUpdateFrequency>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENiagaraScalabilityUpdateFrequency.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_ENiagaraScalabilityUpdateFrequency.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraScalabilityUpdateFrequency,
                       (UObject *)pUVar1,L"ENiagaraScalabilityUpdateFrequency");
  }
  return Z_Registration_Info_UEnum_ENiagaraScalabilityUpdateFrequency.OuterSingleton;
}

// StaticEnum<enum_EParticleAllocationMode> @ 1492737c0

UEnum * __cdecl StaticEnum<enum_EParticleAllocationMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EParticleAllocationMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_EParticleAllocationMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_EParticleAllocationMode,(UObject *)pUVar1,
                       L"EParticleAllocationMode");
  }
  return Z_Registration_Info_UEnum_EParticleAllocationMode.OuterSingleton;
}

// StaticEnum<enum_EScriptExecutionMode> @ 149273800

UEnum * __cdecl StaticEnum<enum_EScriptExecutionMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EScriptExecutionMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UEnum_EScriptExecutionMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Niagara_EScriptExecutionMode,(UObject *)pUVar1,
                       L"EScriptExecutionMode");
  }
  return Z_Registration_Info_UEnum_EScriptExecutionMode.OuterSingleton;
}

// ~TArray<`FNiagaraDebugHud::DrawGpuComputeOverriew'::__l2::FSimpleTableDraw::FColumn,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> @ 149278b70

void __thiscall
TArray<`FNiagaraDebugHud::DrawGpuComputeOverriew'::__l2::FSimpleTableDraw::FColumn,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
::
~TArray<_FNiagaraDebugHud::DrawGpuComputeOverriew_::__l2::FSimpleTableDraw::FColumn,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
          (void *this)

{
  FColumn *pFVar1;
  void *pvVar2;
  FColumn *pFVar3;
  
  pFVar1 = *(FColumn **)((longlong)this + 0x1300);
  pFVar3 = this;
  if (pFVar1 != (FColumn *)0x0) {
    pFVar3 = pFVar1;
  }
  DestructItems<_FNiagaraDebugHud::DrawGpuComputeOverriew_::__l2::FSimpleTableDraw::FColumn,int>
            (pFVar3,*(int *)((longlong)this + 0x1308));
  pvVar2 = *(void **)((longlong)this + 0x1300);
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_10>,0,1> @ 149278bf0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_10>,0,1>::
~TFunction_OwnedObject<_FNiagaraDebugHud::DrawOverview_::__l15::<lambda_10>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`15'::<lambda_10>,0,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_11>,0,1> @ 149278c10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_11>,0,1>::
~TFunction_OwnedObject<_FNiagaraDebugHud::DrawOverview_::__l15::<lambda_11>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`15'::<lambda_11>,0,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_12>,0,1> @ 149278c30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_12>,0,1>::
~TFunction_OwnedObject<_FNiagaraDebugHud::DrawOverview_::__l15::<lambda_12>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`15'::<lambda_12>,0,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_13>,0,1> @ 149278c50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_13>,0,1>::
~TFunction_OwnedObject<_FNiagaraDebugHud::DrawOverview_::__l15::<lambda_13>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`15'::<lambda_13>,0,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_14>,0,1> @ 149278c70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_14>,0,1>::
~TFunction_OwnedObject<_FNiagaraDebugHud::DrawOverview_::__l15::<lambda_14>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`15'::<lambda_14>,0,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_15>,0,1> @ 149278c90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_15>,0,1>::
~TFunction_OwnedObject<_FNiagaraDebugHud::DrawOverview_::__l15::<lambda_15>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`15'::<lambda_15>,0,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_16>,0,1> @ 149278cb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_16>,0,1>::
~TFunction_OwnedObject<_FNiagaraDebugHud::DrawOverview_::__l19::<lambda_16>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`19'::<lambda_16>,0,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l22::<lambda_17>,0,1> @ 149278cd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l22::<lambda_17>,0,1>::
~TFunction_OwnedObject<_FNiagaraDebugHud::DrawOverview_::__l22::<lambda_17>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`22'::<lambda_17>,0,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_18>,0,1> @ 149278cf0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_18>,0,1>::
~TFunction_OwnedObject<_FNiagaraDebugHud::DrawOverview_::__l19::<lambda_18>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`19'::<lambda_18>,0,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_19>,0,1> @ 149278d10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_19>,0,1>::
~TFunction_OwnedObject<_FNiagaraDebugHud::DrawOverview_::__l19::<lambda_19>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`19'::<lambda_19>,0,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNiagaraDebugHud::FNiagaraDebugHud'::__l2::<lambda_1>,0,0> @ 149278d30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::FNiagaraDebugHud'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FNiagaraDebugHud::FNiagaraDebugHud_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDebugHud::FNiagaraDebugHud'::`2'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNiagaraDataBufferReadback::GPUReadbackInternal'::__l2::<lambda_1>,0,1> @ 149278d50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataBufferReadback::GPUReadbackInternal'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FNiagaraDataBufferReadback::GPUReadbackInternal_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDataBufferReadback::GPUReadbackInternal'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`FNiagaraDataSetReadback::GPUReadbackInternal'::__l2::<lambda_1>,0,1> @ 149278d70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataSetReadback::GPUReadbackInternal'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FNiagaraDataSetReadback::GPUReadbackInternal_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDataSetReadback::GPUReadbackInternal'::`2'::<lambda_1>,0,1>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`FNiagaraEmitterInstanceImpl::~FNiagaraEmitterInstanceImpl'::__l5::<lambda_1>,1,0> @ 149278d90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraEmitterInstanceImpl::~FNiagaraEmitterInstanceImpl'::__l5::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_FNiagaraEmitterInstanceImpl::~FNiagaraEmitterInstanceImpl_::__l5::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraEmitterInstanceImpl::~FNiagaraEmitterInstanceImpl'::`5'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l5::<lambda_1>,0,1> @ 149278db0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l5::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FNiagaraDebugHud::DrawOverview_::__l5::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`5'::<lambda_1>,0,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNiagaraDataSetReadback::ImmediateReadback'::__l5::<lambda_1>,1,0> @ 149278dd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataSetReadback::ImmediateReadback'::__l5::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FNiagaraDataSetReadback::ImmediateReadback_::__l5::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDataSetReadback::ImmediateReadback'::`5'::<lambda_1>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNiagaraDataBufferReadback::ReadbackCompleteInternal'::__l5::<lambda_1>,1,0> @ 149278df0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataBufferReadback::ReadbackCompleteInternal'::__l5::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_FNiagaraDataBufferReadback::ReadbackCompleteInternal_::__l5::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDataBufferReadback::ReadbackCompleteInternal'::`5'::<lambda_1>,1,0>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`FNiagaraDataSetReadback::ReadbackCompleteInternal'::__l5::<lambda_1>,1,0> @ 149278e10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataSetReadback::ReadbackCompleteInternal'::__l5::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FNiagaraDataSetReadback::ReadbackCompleteInternal_::__l5::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDataSetReadback::ReadbackCompleteInternal'::`5'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNiagaraEmitterInstanceImpl::WaitForDebugInfo'::__l8::<lambda_1>,1,0> @ 149278e30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraEmitterInstanceImpl::WaitForDebugInfo'::__l8::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FNiagaraEmitterInstanceImpl::WaitForDebugInfo_::__l8::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraEmitterInstanceImpl::WaitForDebugInfo'::`8'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNiagaraDataSetReadback::EnqueueReadback'::__l19::<lambda_1>,1,1> @ 149278e50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataSetReadback::EnqueueReadback'::__l19::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FNiagaraDataSetReadback::EnqueueReadback_::__l19::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDataSetReadback::EnqueueReadback'::`19'::<lambda_1>,1,1>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`FNiagaraDebugHud::DrawValidation'::__l21::<lambda_1>,0,0> @ 149278e70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawValidation'::__l21::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FNiagaraDebugHud::DrawValidation_::__l21::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDebugHud::DrawValidation'::`21'::<lambda_1>,0,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNiagaraEmitterInstanceImpl::Tick'[::D]::<lambda_1>,1,1> @ 149278e90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraEmitterInstanceImpl::Tick'[::D]::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FNiagaraEmitterInstanceImpl::Tick_[::D]::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this = &_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  return;
}

// ~TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_20>,0,1> @ 149278eb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_20>,0,1>::
~TFunction_OwnedObject<_FNiagaraDebugHud::DrawOverview_::__l19::<lambda_20>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`19'::<lambda_20>,0,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_21>,0,1> @ 149278ed0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_21>,0,1>::
~TFunction_OwnedObject<_FNiagaraDebugHud::DrawOverview_::__l19::<lambda_21>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`19'::<lambda_21>,0,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_22>,0,1> @ 149278ef0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_22>,0,1>::
~TFunction_OwnedObject<_FNiagaraDebugHud::DrawOverview_::__l19::<lambda_22>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`19'::<lambda_22>,0,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l26::<lambda_23>,0,1> @ 149278f10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l26::<lambda_23>,0,1>::
~TFunction_OwnedObject<_FNiagaraDebugHud::DrawOverview_::__l26::<lambda_23>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`26'::<lambda_23>,0,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNiagaraDebugHud::DrawValidation'::__l26::<lambda_2>,0,1> @ 149278f30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawValidation'::__l26::<lambda_2>,0,1>::
~TFunction_OwnedObject<_FNiagaraDebugHud::DrawValidation_::__l26::<lambda_2>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDebugHud::DrawValidation'::`26'::<lambda_2>,0,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNiagaraDataSetReadback::EnqueueReadback'::__l32::<lambda_2>,0,0> @ 149278f50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataSetReadback::EnqueueReadback'::__l32::<lambda_2>,0,0>::
~TFunction_OwnedObject<_FNiagaraDataSetReadback::EnqueueReadback_::__l32::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDataSetReadback::EnqueueReadback'::`32'::<lambda_2>,0,0>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l11::<lambda_2>,0,1> @ 149278f70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l11::<lambda_2>,0,1>::
~TFunction_OwnedObject<_FNiagaraDebugHud::DrawOverview_::__l11::<lambda_2>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`11'::<lambda_2>,0,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNiagaraEmitterInstanceImpl::Tick'::__l245::<lambda_2>,1,0> @ 149278f90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraEmitterInstanceImpl::Tick'::__l245::<lambda_2>,1,0>::
~TFunction_OwnedObject<_FNiagaraEmitterInstanceImpl::Tick_::__l245::<lambda_2>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraEmitterInstanceImpl::Tick'::`245'::<lambda_2>,1,0>::_vftable_
  ;
  return;
}

// ~TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l8::<lambda_3>,0,1> @ 149278fb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l8::<lambda_3>,0,1>::
~TFunction_OwnedObject<_FNiagaraDebugHud::DrawOverview_::__l8::<lambda_3>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`8'::<lambda_3>,0,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l8::<lambda_4>,0,1> @ 149278fd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l8::<lambda_4>,0,1>::
~TFunction_OwnedObject<_FNiagaraDebugHud::DrawOverview_::__l8::<lambda_4>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`8'::<lambda_4>,0,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l8::<lambda_5>,0,1> @ 149278ff0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l8::<lambda_5>,0,1>::
~TFunction_OwnedObject<_FNiagaraDebugHud::DrawOverview_::__l8::<lambda_5>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`8'::<lambda_5>,0,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l8::<lambda_6>,0,1> @ 149279010

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l8::<lambda_6>,0,1>::
~TFunction_OwnedObject<_FNiagaraDebugHud::DrawOverview_::__l8::<lambda_6>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`8'::<lambda_6>,0,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l8::<lambda_7>,0,1> @ 149279030

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l8::<lambda_7>,0,1>::
~TFunction_OwnedObject<_FNiagaraDebugHud::DrawOverview_::__l8::<lambda_7>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`8'::<lambda_7>,0,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_8>,0,1> @ 149279050

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_8>,0,1>::
~TFunction_OwnedObject<_FNiagaraDebugHud::DrawOverview_::__l15::<lambda_8>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`15'::<lambda_8>,0,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_9>,0,1> @ 149279070

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_9>,0,1>::
~TFunction_OwnedObject<_FNiagaraDebugHud::DrawOverview_::__l15::<lambda_9>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`15'::<lambda_9>,0,1>::_vftable_;
  return;
}

// operator() @ 14927f5c0

void __thiscall
`NiagaraDebugLocal::BuildGpuHudInformation<TStringBuilderWithBuffer<wchar_t,1024>_>'::__l36::
<lambda_1>::operator()(void *this,UNiagaraRendererProperties *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  UClass *pUVar6;
  undefined8 *puVar7;
  ENiagaraRendererGpuTranslucentLatency EVar8;
  undefined1 local_res10 [8];
  undefined8 *local_28;
  undefined8 local_20;
  
  if (param_1 != (UNiagaraRendererProperties *)0x0) {
    pUVar6 = Z_Construct_UClass_UNiagaraMeshRendererProperties_NoRegister();
    iVar2 = (int)pUVar6->_padding_;
    if ((iVar2 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar6->_padding_)) {
      EVar8 = *(ENiagaraRendererGpuTranslucentLatency *)((longlong)&param_1[1]._padding_ + 7);
      goto LAB_14927f63b;
    }
  }
  if (param_1 == (UNiagaraRendererProperties *)0x0) {
    return;
  }
  pUVar6 = Z_Construct_UClass_UNiagaraSpriteRendererProperties_NoRegister();
  iVar2 = (int)pUVar6->_padding_;
  if (*(int *)(param_1->_padding_ + 0x38) < iVar2) {
    return;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8)
      != &pUVar6->_padding_) {
    return;
  }
  EVar8 = *(ENiagaraRendererGpuTranslucentLatency *)
           ((longlong)&param_1[1].Platforms.LastBuiltFrame + 2);
LAB_14927f63b:
  bVar3 = UNiagaraRendererProperties::ShouldGpuTranslucentThisFrame(EVar8);
  if ((*(char *)(**(longlong **)this + 0x27e) < '\0') ||
     (bVar4 = UNiagaraRendererProperties::IsGpuTranslucentThisFrame
                        (**(Type **)((longlong)this + 8),EVar8), !bVar4)) {
    bVar4 = false;
  }
  else {
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    bVar4 = true;
    (**(code **)(param_1->_padding_ + 0x2c0))
              (param_1,**(undefined8 **)((longlong)this + 0x10),&local_28);
    iVar2 = (int)local_20;
    puVar1 = local_28 + (int)local_20;
    puVar7 = local_28;
    while( true ) {
      if ((int)local_20 != iVar2) {
        `TCheckedPointerIterator<UMaterialInterface_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (puVar7 == puVar1) goto LAB_14927f6e2;
      if (((UMaterialInterface *)*puVar7 != (UMaterialInterface *)0x0) &&
         (bVar5 = IsTranslucentBlendMode((UMaterialInterface *)*puVar7), !bVar5)) break;
      puVar7 = puVar7 + 1;
    }
    bVar4 = false;
LAB_14927f6e2:
    if (local_28 != (undefined8 *)0x0) {
      FMemory::Free(local_28);
    }
  }
  **(byte **)((longlong)this + 0x18) = **(byte **)((longlong)this + 0x18) | bVar3 != bVar4;
  return;
}

// operator() @ 149280a80

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
NiagaraDebugLocal::<lambda_59>::operator()
          (<lambda_59> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ENiagaraDebugHUDOverviewMode EVar5;
  wchar_t *_Str;
  
  if (param_1->ArrayNum == 0) {
    if ((Settings.bHudEnabled) && (Settings.bOverviewEnabled)) {
      Settings.bOverviewEnabled = false;
      Settings.OverviewMode = Overview;
    }
    else {
      Settings.bOverviewEnabled = true;
      Settings.OverviewMode = Overview;
    }
  }
  else {
    if (param_1->ArrayNum < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar1 + 8) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)pFVar1;
    }
    iVar4 = _wtoi(_Str);
    Settings.bOverviewEnabled = 0 < iVar4;
    EVar5 = GpuComputePerformance;
    if ((int)(iVar4 - Scalability) < 4) {
      EVar5 = iVar4 - Scalability;
    }
    Settings.OverviewMode = Overview;
    if (0 < (int)EVar5) {
      Settings.OverviewMode = EVar5;
    }
  }
  Settings.bHudEnabled = true;
  return;
}

// operator() @ 149280cf0

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
NiagaraDebugLocal::<lambda_60>::operator()
          (<lambda_60> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2)

{
  void *_Src;
  wchar_t *_Str;
  code *pcVar1;
  ForAnyElementType _Src_00;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  size_t sVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  TTuple<wchar_t_const_*,wchar_t_const_*,TFunction<void___cdecl(FString)>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res10 [16];
  uint local_res20;
  FString local_58;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  
  local_res20 = param_1->ArrayNum;
  uVar4 = (ulonglong)(int)local_res20;
  if (local_res20 == 0) {
    if (4 < (byte)LogNiagara._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    }
    pTVar9 = GDebugConsoleCommands;
    do {
      if (4 < (byte)LogNiagara._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      }
      pTVar9 = pTVar9 + 1;
    } while (pTVar9 != (TTuple<wchar_t_const_*,wchar_t_const_*,TFunction<void___cdecl(FString)>_> *)
                       &ScrubDurationSeconds);
    return;
  }
  pFVar11 = (param_1->AllocatorInstance).Data;
  pFVar10 = pFVar11 + uVar4 * 0x10;
  do {
    if (param_1->ArrayNum != (int)uVar4) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar11 == pFVar10) {
      return;
    }
    local_58.Data.ArrayNum = *(int *)(pFVar11 + 8);
    lVar8 = (longlong)local_58.Data.ArrayNum;
    _Src = *(void **)pFVar11;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_58.Data.ArrayNum == 0) {
      local_58.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_58.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,_Src,lVar8 * 2);
    }
    pTVar9 = GDebugConsoleCommands;
    do {
      _Str = *(wchar_t **)pTVar9;
      iVar3 = 0;
      if (_Str != (wchar_t *)0x0) {
        sVar5 = wcslen(_Str);
        iVar3 = (int)sVar5;
      }
      bVar2 = ::FString::RemoveFromStart(&local_58,_Str,iVar3,IgnoreCase);
      _Src_00.Data = local_58.Data.AllocatorInstance.Data;
      if (bVar2) {
        lVar8 = (longlong)local_58.Data.ArrayNum;
        local_48.Data = (FScriptContainerElement *)0x0;
        local_40 = local_58.Data.ArrayNum;
        if (local_58.Data.ArrayNum == 0) {
          local_3c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_58.Data.ArrayNum,0,&local_48,local_58.Data.ArrayNum,&local_3c);
          memcpy(local_48.Data,_Src_00.Data,lVar8 * 2);
        }
        UE::Core::Private::Function::CheckCallable(*(void **)&pTVar9->field_0x10);
        pcVar1 = *(code **)&pTVar9->field_0x10;
        plVar7 = (longlong *)&pTVar9->field_0x20;
        if (*(longlong **)&pTVar9->field_0x38 != (longlong *)0x0) {
          plVar7 = *(longlong **)&pTVar9->field_0x38;
        }
        uVar6 = (**(code **)(*plVar7 + 8))();
        (*pcVar1)(uVar6,&local_48);
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data);
        }
        goto LAB_149280f3b;
      }
      pTVar9 = pTVar9 + 1;
    } while (pTVar9 != (TTuple<wchar_t_const_*,wchar_t_const_*,TFunction<void___cdecl(FString)>_> *)
                       &ScrubDurationSeconds);
    if (2 < (byte)LogNiagara._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    }
LAB_149280f3b:
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    uVar4 = (ulonglong)local_res20;
    pFVar11 = pFVar11 + 0x10;
  } while( true );
}

// operator() @ 149280f90

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
NiagaraDebugLocal::<lambda_61>::operator()
          (<lambda_61> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  APlayerCameraManager *pAVar2;
  void *_Src;
  code *pcVar3;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  size_t sVar11;
  UClass *pUVar12;
  APlayerController *this_00;
  APawn *pAVar13;
  double *pdVar14;
  TVector<double> *pTVar15;
  UNiagaraComponent *pUVar16;
  ForAnyElementType FVar17;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  bool bVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  bool local_res20;
  bool local_248;
  bool local_247;
  FString local_240;
  FWeakObjectPtr local_230;
  TVector<double>_u_0 local_228;
  AActor *local_210;
  undefined8 local_208;
  UNiagaraSystem *local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_1e0;
  UNiagaraComponent *local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  wchar_t *local_1b8;
  int iStack_1b0;
  undefined4 uStack_1ac;
  TRotator<double> local_1a8;
  TStringView<wchar_t> local_188;
  TStringView<wchar_t> local_178;
  TRotator<double> local_168;
  TVector<double>_u_0 local_148;
  TVector<double>_u_0 local_128;
  TRotator<double> local_108;
  TVector<double>_u_0 local_e8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  double local_b8;
  undefined1 local_b0 [24];
  TVector<double> local_98;
  TVector<double> local_80;
  TVector<double> local_68 [2];
  
  bVar5 = UWorld::IsGameWorld(param_2);
  if ((!bVar5) && (bVar5 = UWorld::IsPlayInEditor(param_2), !bVar5)) {
    return;
  }
  if (param_1->ArrayNum == 0) {
    if ((byte)LogNiagara._0_1_ < 5) {
      return;
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    return;
  }
  uStack_1c0 = 0;
  local_1c8 = 0;
  if ((param_1->ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  iStack_1b0 = 0;
  if (*(int *)(pFVar1 + 8) == 0) {
    local_1b8 = L"";
LAB_14928107f:
    sVar11 = wcslen(local_1b8);
    iStack_1b0 = (int)sVar11;
  }
  else {
    local_1b8 = *(wchar_t **)pFVar1;
    if (local_1b8 != (wchar_t *)0x0) goto LAB_14928107f;
  }
  pUVar12 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
  local_178._12_4_ = uStack_1ac;
  local_178.Size = iStack_1b0;
  local_178.DataPtr = local_1b8;
  local_188.DataPtr = (wchar_t *)0x0;
  local_188.Size = 0;
  local_188._12_4_ = 0;
  local_200 = (UNiagaraSystem *)
              StaticLoadObject(pUVar12,(UObject *)0x0,&local_178,&local_188,0,(UPackageMap *)0x0,
                               true,(FLinkerInstancingContext *)0x0);
  if (local_200 == (UNiagaraSystem *)0x0) {
    if ((byte)LogNiagara._0_1_ < 3) {
      return;
    }
    if ((param_1->ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    return;
  }
  local_228._s_0.X =
       (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                        UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
  local_228._s_0.Y =
       (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                        UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
  local_228._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_1e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  bVar5 = false;
  local_1a8.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  local_1a8.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  bVar21 = true;
  bVar8 = true;
  local_1a8.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  local_248 = true;
  local_247 = true;
  local_res20 = true;
  local_210 = (AActor *)0x0;
  local_1f8 = local_228._s_0.X;
  uStack_1f0 = local_228._s_0.Y;
  UWorld::GetPlayerControllerIterator(param_2,&local_1e0);
  for (; (iVar10 = local_1e0.Index, pTVar4 = local_1e0.Container, -1 < local_1e0.Index &&
         (local_1e0.Index < (local_1e0.Container)->ArrayNum)); local_1e0.Index = local_1e0.Index + 1
      ) {
    if ((local_1e0.Index < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    this_00 = (APlayerController *)
              FWeakObjectPtr::Get((FWeakObjectPtr *)
                                  ((pTVar4->AllocatorInstance).Data + (longlong)iVar10 * 8));
    if (((this_00 != (APlayerController *)0x0) && ((this_00->_padding_ & 2) != 0)) &&
       (cVar7 = (**(code **)(this_00->_padding_ + 0x7f0))(this_00), cVar7 != '\0')) {
      (**(code **)(this_00->_padding_ + 0x840))(this_00,&local_1f8,&local_1a8);
      pAVar13 = APlayerController::GetPawnOrSpectator(this_00);
      if (pAVar13 != (APawn *)0x0) {
        lVar20 = pAVar13->_padding_;
        uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        uVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        uVar25 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
        local_1e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        if (lVar20 != 0) {
          local_b8 = *(double *)(lVar20 + 0x220);
          local_c8 = *(undefined4 *)(lVar20 + 0x210);
          uStack_c4 = *(undefined4 *)(lVar20 + 0x214);
          uStack_c0 = *(undefined4 *)(lVar20 + 0x218);
          uStack_bc = *(undefined4 *)(lVar20 + 0x21c);
          uVar22 = local_c8;
          uVar23 = uStack_c4;
          uVar24 = uStack_c0;
          uVar25 = uStack_bc;
          local_1e8 = local_b8;
        }
        local_1f8 = (double)CONCAT44(uVar23,uVar22);
        uStack_1f0 = (double)CONCAT44(uVar25,uVar24);
      }
      pAVar2 = (this_00->PlayerCameraManager).field0_0x0.DebugPtr;
      if (pAVar2 != (APlayerCameraManager *)0x0) {
        pdVar14 = (double *)(**(code **)(pAVar2->_padding_ + 0x840))(pAVar2,local_b0);
        local_1a8.Pitch = *pdVar14;
        local_1a8.Yaw = pdVar14[1];
        local_1a8.Roll = pdVar14[2];
        local_210 = APlayerCameraManager::GetViewTarget
                              ((this_00->PlayerCameraManager).field0_0x0.DebugPtr);
      }
    }
  }
  iVar10 = param_1->ArrayNum;
  uVar19 = 1;
  if (iVar10 < 2) {
    local_res20 = true;
  }
  else {
    lVar20 = 0x10;
    do {
      uVar9 = 0;
      if ((int)uVar19 < iVar10) {
        uVar9 = ~uVar19 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      local_240.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_240.Data.ArrayNum = *(int *)(pFVar1 + lVar20 + 8);
      lVar18 = (longlong)local_240.Data.ArrayNum;
      _Src = *(void **)(pFVar1 + lVar20);
      if (local_240.Data.ArrayNum == 0) {
        local_240.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_240.Data.ArrayNum,0,(ForAnyElementType *)&local_240,
                   local_240.Data.ArrayNum,&local_240.Data.ArrayMax);
        memcpy(local_240.Data.AllocatorInstance.Data,_Src,lVar18 * 2);
      }
      bVar8 = ::FString::RemoveFromStart(&local_240,L"AttachToPlayer=",0xf,IgnoreCase);
      if (bVar8) {
        FVar17.Data = (FScriptContainerElement *)L"";
        if (local_240.Data.ArrayNum != 0) {
          FVar17.Data = local_240.Data.AllocatorInstance.Data;
        }
        iVar10 = _wtoi((wchar_t *)FVar17.Data);
        bVar5 = iVar10 != 0;
      }
      else {
        bVar8 = ::FString::RemoveFromStart(&local_240,L"AutoDestroy=",0xc,IgnoreCase);
        if (bVar8) {
          FVar17.Data = (FScriptContainerElement *)L"";
          if (local_240.Data.ArrayNum != 0) {
            FVar17.Data = local_240.Data.AllocatorInstance.Data;
          }
          iVar10 = _wtoi((wchar_t *)FVar17.Data);
          local_248 = iVar10 != 0;
        }
        else {
          bVar8 = ::FString::RemoveFromStart(&local_240,L"AutoActivate=",0xd,IgnoreCase);
          if (bVar8) {
            FVar17.Data = (FScriptContainerElement *)L"";
            if (local_240.Data.ArrayNum != 0) {
              FVar17.Data = local_240.Data.AllocatorInstance.Data;
            }
            iVar10 = _wtoi((wchar_t *)FVar17.Data);
            local_247 = iVar10 != 0;
          }
          else {
            bVar8 = ::FString::RemoveFromStart(&local_240,L"PreCullCheck=",0xd,IgnoreCase);
            if (bVar8) {
              FVar17.Data = (FScriptContainerElement *)L"";
              if (local_240.Data.ArrayNum != 0) {
                FVar17.Data = local_240.Data.AllocatorInstance.Data;
              }
              iVar10 = _wtoi((wchar_t *)FVar17.Data);
              local_res20 = iVar10 != 0;
            }
            else {
              bVar8 = ::FString::RemoveFromStart(&local_240,L"Location=",9,IgnoreCase);
              if (bVar8) {
                pTVar15 = StringToVector(&local_98,&local_240,&UE::Math::TVector<double>::ZeroVector
                                        );
                local_228._s_0.X = (pTVar15->field0_0x0)._s_0.X;
                local_228._s_0.Y = (pTVar15->field0_0x0)._s_0.Y;
                local_228._s_0.Z = (pTVar15->field0_0x0)._s_0.Z;
              }
              else {
                bVar8 = ::FString::RemoveFromStart
                                  (&local_240,L"LocationFromPlayer=",0x13,IgnoreCase);
                if (bVar8) {
                  pTVar15 = StringToVector(&local_80,&local_240,
                                           &UE::Math::TVector<double>::ZeroVector);
                  local_228._s_0.X = (pTVar15->field0_0x0)._s_0.X;
                  local_228._s_0.Y = (pTVar15->field0_0x0)._s_0.Y;
                  local_228._s_0.Z = (pTVar15->field0_0x0)._s_0.Z;
                  pTVar15 = UE::Math::TRotator<double>::RotateVector
                                      (&local_1a8,local_68,(TVector<double> *)&local_228._s_0);
                  local_228._s_0.Y = uStack_1f0 + (pTVar15->field0_0x0)._s_0.Y;
                  local_228._s_0.X = local_1f8 + (pTVar15->field0_0x0)._s_0.X;
                  local_228._s_0.Z = local_1e8 + (pTVar15->field0_0x0)._s_0.Z;
                }
              }
            }
          }
        }
      }
      if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_240.Data.AllocatorInstance.Data);
      }
      iVar10 = param_1->ArrayNum;
      uVar19 = uVar19 + 1;
      lVar20 = lVar20 + 0x10;
    } while ((int)uVar19 < iVar10);
    bVar8 = local_247;
    bVar21 = local_248;
    if (bVar5) {
      if (local_210 == (AActor *)0x0) {
        return;
      }
      local_168.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      local_168.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
      local_168.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
      local_148._s_0.Z = local_228._s_0.Z;
      local_208 = 0;
      local_148._s_0.X = local_228._s_0.X;
      local_148._s_0.Y = local_228._s_0.Y;
      pUVar16 = UNiagaraFunctionLibrary::SpawnSystemAttached
                          (local_200,(local_210->RootComponent).field0_0x0.DebugPtr,(FName)0x0,
                           (TVector<double> *)&local_148._s_0,&local_168,KeepWorldPosition,local_248
                           ,local_247,None,local_res20);
      goto LAB_149281705;
    }
  }
  local_128._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
  local_128._s_0.Y = _UNK_150689688;
  local_128._s_0.Z = __real_3ff0000000000000;
  local_108.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  local_108.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  local_108.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  local_e8._s_0.Z = local_228._s_0.Z;
  local_e8._s_0.X = local_228._s_0.X;
  local_e8._s_0.Y = local_228._s_0.Y;
  pUVar16 = UNiagaraFunctionLibrary::SpawnSystemAtLocation
                      ((UObject *)param_2,local_200,(TVector<double> *)&local_e8._s_0,&local_108,
                       (TVector<double> *)&local_128._s_0,bVar21,bVar8,None,local_res20);
LAB_149281705:
  if (pUVar16 != (UNiagaraComponent *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar16);
    }
    local_230.ObjectIndex = 0;
    local_230.ObjectSerialNumber = 0;
    local_1d0 = pUVar16;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar16);
    }
    FWeakObjectPtr::operator=(&local_230,(FObjectPtr)&local_1d0);
    if (((GDebugSpawnedComponents.AllocatorInstance.Data <= &local_230) &&
        (&local_230 <
         (FWeakObjectPtr *)
         (GDebugSpawnedComponents.AllocatorInstance.Data +
         (longlong)GDebugSpawnedComponents.ArrayMax * 8))) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (GDebugSpawnedComponents.ArrayNum == GDebugSpawnedComponents.ArrayMax) {
      GDebugSpawnedComponents.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x408,&GDebugSpawnedComponents.AllocatorInstance,
                      &GDebugSpawnedComponents.ArrayMax);
    }
    lVar20 = (longlong)GDebugSpawnedComponents.ArrayNum;
    GDebugSpawnedComponents.ArrayNum = GDebugSpawnedComponents.ArrayNum + 1;
    *(FWeakObjectPtr *)(GDebugSpawnedComponents.AllocatorInstance.Data + lVar20 * 8) = local_230;
  }
  return;
}

// operator() @ 149281850

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
NiagaraDebugLocal::<lambda_62>::operator()
          (<lambda_62> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  UObject *pUVar3;
  ulonglong uVar4;
  ForAnyElementType FVar5;
  FWeakObjectPtr local_res20;
  
  iVar2 = GDebugSpawnedComponents.ArrayNum;
  uVar4 = (ulonglong)GDebugSpawnedComponents.ArrayNum;
  pFVar1 = (FWeakObjectPtr *)(GDebugSpawnedComponents.AllocatorInstance.Data + uVar4 * 8);
  FVar5.Data = GDebugSpawnedComponents.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar4 != iVar2) {
      `TCheckedPointerIterator<TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(&local_res20);
    }
    if ((FWeakObjectPtr *)FVar5.Data == pFVar1) break;
    local_res20 = *(FWeakObjectPtr *)FVar5.Data;
    pUVar3 = FWeakObjectPtr::Get(&local_res20);
    if (pUVar3 != (UObject *)0x0) {
      (**(code **)(*(longlong *)pUVar3 + 0x4a0))(pUVar3,0);
    }
    uVar4 = (ulonglong)(uint)GDebugSpawnedComponents.ArrayNum;
    FVar5.Data = FVar5.Data + 8;
  }
  GDebugSpawnedComponents.ArrayNum = 0;
  if ((GDebugSpawnedComponents.ArrayMax < 0) && (GDebugSpawnedComponents.ArrayMax != 0)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&GDebugSpawnedComponents.AllocatorInstance,0,&GDebugSpawnedComponents.ArrayMax)
    ;
  }
  return;
}

// operator() @ 149281910

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall <lambda_63>::operator()(<lambda_63> *this,IConsoleVariable *param_1)

{
  UNiagaraSystem *pUVar1;
  code *pcVar2;
  bool bVar3;
  EInternalObjectFlags EVar4;
  uint uVar5;
  UClass *pUVar6;
  longlong lVar7;
  TObjectIterator<UNiagaraSystem> local_b8;
  FNiagaraSystemUpdateContext local_a0;
  
  local_a0.bOnlyActive = true;
  local_a0.bDestroySystemSim = true;
  local_a0.ComponentsToReset.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.ComponentsToReset.ArrayNum = 0;
  local_a0.ComponentsToReset.ArrayMax = 0;
  local_a0.ComponentsToReInit.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.ComponentsToReInit.ArrayNum = 0;
  local_a0.ComponentsToReInit.ArrayMax = 0;
  local_a0.ComponentsToNotifySimDestroy.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.ComponentsToNotifySimDestroy.ArrayNum = 0;
  local_a0.ComponentsToNotifySimDestroy.ArrayMax = 0;
  local_a0.ComponentsToDestroyInstance.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.ComponentsToDestroyInstance.ArrayNum = 0;
  local_a0.ComponentsToDestroyInstance.ArrayMax = 0;
  local_a0.SystemSimsToDestroy.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.SystemSimsToDestroy.ArrayNum = 0;
  local_a0.SystemSimsToDestroy.ArrayMax = 0;
  local_a0.SystemSimsToRecache.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.SystemSimsToRecache.ArrayNum = 0;
  local_a0.SystemSimsToRecache.ArrayMax = 0;
  local_a0.PreWork._0_8_ = 0;
  local_a0.PreWork._8_8_ = 0;
  local_a0.PreWork._16_4_ = 0;
  local_a0.PostWork._0_8_ = 0;
  local_a0.PostWork._8_8_ = 0;
  local_a0.PostWork._16_4_ = 0;
  local_b8.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ObjectArray.ArrayNum = 0;
  local_b8.ObjectArray.ArrayMax = 0;
  local_a0.bDestroyOnAdd = true;
  local_b8.Index = 0xffffffff;
  EVar4 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar6 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
  GetObjectsOfClass(pUVar6,&local_b8.ObjectArray,true,RF_ClassDefaultObject,
                    EVar4 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<UNiagaraSystem>::Advance(&local_b8);
    lVar7 = (longlong)local_b8.Index;
    if (local_b8.Index < 0) break;
    if (local_b8.ObjectArray.ArrayNum <= local_b8.Index) break;
    uVar5 = 0;
    if (local_b8.Index < local_b8.ObjectArray.ArrayNum) {
      uVar5 = (uint)~local_b8.Index >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pUVar1 = *(UNiagaraSystem **)(local_b8.ObjectArray.AllocatorInstance.Data + lVar7 * 8);
    if ((pUVar1 != (UNiagaraSystem *)0x0) && (((uint)pUVar1->_padding_ >> 0x1e & 1) == 0)) {
      FNiagaraSystemUpdateContext::Add(&local_a0,pUVar1,true);
    }
  }
  if (local_b8.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ObjectArray.AllocatorInstance.Data);
  }
  FNiagaraSystemUpdateContext::~FNiagaraSystemUpdateContext(&local_a0);
  return;
}

// `vector_deleting_destructor'`adjustor{56}' @ 1492821b0

/* [thunk]:public: virtual void * __ptr64 __cdecl UNiagaraEmitter::`vector deleting
   destructor'`adjustor{56}' (unsigned int) __ptr64 */

void * __thiscall
UNiagaraEmitter::_vector_deleting_destructor__adjustor_56__(UNiagaraEmitter *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UNiagaraEmitter *)&this[-1].VersionData,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 1492821c0

void * __thiscall
IBaseDelegateInstance<void___cdecl(FNiagaraOutlinerData_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FNiagaraOutlinerData_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492821f0

void * __thiscall
IBaseDelegateInstance<void___cdecl(FNiagaraSystemSimCacheCaptureRequest_const_&,TObjectPtr<UNiagaraSimCache>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FNiagaraSystemSimCacheCaptureRequest_const_&,TObjectPtr<UNiagaraSimCache>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149282220

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FNiagaraOutlinerData_const_&),FDefaultDelegateUserPolicy,`FNiagaraDebuggerClient::HandleOutlinerSettingsMessage'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149282250

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FNiagaraSystemSimCacheCaptureRequest_const_&,TObjectPtr<UNiagaraSimCache>),FDefaultDelegateUserPolicy,`FNiagaraDebuggerClient::HandleSimCacheCaptureRequestMessage'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149282280

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FNiagaraDebuggerClient,bool___cdecl(float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FNiagaraDebuggerClient,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492822b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492822e0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FNiagaraOutlinerData_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FNiagaraOutlinerData_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149282310

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FNiagaraSystemSimCacheCaptureRequest_const_&,TObjectPtr<UNiagaraSimCache>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FNiagaraSystemSimCacheCaptureRequest_const_&,TObjectPtr<UNiagaraSimCache>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149282340

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_10>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`15'::<lambda_10>,0,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149282380

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_11>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`15'::<lambda_11>,0,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492823c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_12>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`15'::<lambda_12>,0,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149282400

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_13>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`15'::<lambda_13>,0,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149282440

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_14>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`15'::<lambda_14>,0,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149282480

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_15>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`15'::<lambda_15>,0,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492824c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_16>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`19'::<lambda_16>,0,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149282500

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l22::<lambda_17>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`22'::<lambda_17>,0,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149282540

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_18>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`19'::<lambda_18>,0,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149282580

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_19>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`19'::<lambda_19>,0,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492825c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::FNiagaraDebugHud'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDebugHud::FNiagaraDebugHud'::`2'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149282600

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataBufferReadback::GPUReadbackInternal'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDataBufferReadback::GPUReadbackInternal'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149282650

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataSetReadback::GPUReadbackInternal'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDataSetReadback::GPUReadbackInternal'::`2'::<lambda_1>,0,1>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492826a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraEmitterInstanceImpl::~FNiagaraEmitterInstanceImpl'::__l5::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraEmitterInstanceImpl::~FNiagaraEmitterInstanceImpl'::`5'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492826e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l5::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`5'::<lambda_1>,0,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149282720

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataSetReadback::ImmediateReadback'::__l5::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDataSetReadback::ImmediateReadback'::`5'::<lambda_1>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149282760

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataBufferReadback::ReadbackCompleteInternal'::__l5::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDataBufferReadback::ReadbackCompleteInternal'::`5'::<lambda_1>,1,0>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492827b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataSetReadback::ReadbackCompleteInternal'::__l5::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDataSetReadback::ReadbackCompleteInternal'::`5'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492827f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraEmitterInstanceImpl::WaitForDebugInfo'::__l8::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraEmitterInstanceImpl::WaitForDebugInfo'::`8'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149282830

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataSetReadback::EnqueueReadback'::__l19::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDataSetReadback::EnqueueReadback'::`19'::<lambda_1>,1,1>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149282880

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawValidation'::__l21::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDebugHud::DrawValidation'::`21'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492828c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraEmitterInstanceImpl::Tick'[::D]::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149282910

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_20>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`19'::<lambda_20>,0,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149282950

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_21>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`19'::<lambda_21>,0,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149282990

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l19::<lambda_22>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`19'::<lambda_22>,0,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492829d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l26::<lambda_23>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`26'::<lambda_23>,0,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149282a10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawValidation'::__l26::<lambda_2>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDebugHud::DrawValidation'::`26'::<lambda_2>,0,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149282a50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDataSetReadback::EnqueueReadback'::__l32::<lambda_2>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDataSetReadback::EnqueueReadback'::`32'::<lambda_2>,0,0>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149282aa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l11::<lambda_2>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`11'::<lambda_2>,0,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149282ae0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraEmitterInstanceImpl::Tick'::__l245::<lambda_2>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraEmitterInstanceImpl::Tick'::`245'::<lambda_2>,1,0>::_vftable_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149282b20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l8::<lambda_3>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`8'::<lambda_3>,0,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149282b60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l8::<lambda_4>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`8'::<lambda_4>,0,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149282ba0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l8::<lambda_5>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`8'::<lambda_5>,0,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149282be0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l8::<lambda_6>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`8'::<lambda_6>,0,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149282c20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l8::<lambda_7>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`8'::<lambda_7>,0,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149282c60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_8>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`15'::<lambda_8>,0,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149282ca0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::__l15::<lambda_9>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FNiagaraDebugHud::DrawOverview'::`15'::<lambda_9>,0,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149282ce0

void * __thiscall
TGraphTask<`FVersionedNiagaraEmitterData::PrecacheComputePSOs'::__l11::FNiagaraEmitterPSOPrecacheReadyTask>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149282d40

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNiagaraDebugHUDPerfStats,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FNiagaraDebugHUDPerfStats,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149282d80

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNiagaraSimStageExecutionData,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FNiagaraSimStageExecutionData,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149282dc0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNiagaraDataSetReadback,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FNiagaraDataSetReadback,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149282e00

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNiagaraDebugHUDStatsListener,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FNiagaraDebugHUDStatsListener,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x250);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149282e40

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNiagaraOutlinerPerfListener,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FNiagaraOutlinerPerfListener,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x148);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149282e80

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FNiagaraDebugHUDSettingsData,FNiagaraDebuggerClient>::
_scalar_deleting_destructor_
          (TRawMessageHandler<FNiagaraDebugHUDSettingsData,FNiagaraDebuggerClient> *this,
          uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149282ec0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FNiagaraDebuggerConnectionClosed,FNiagaraDebuggerClient>::
_scalar_deleting_destructor_
          (TRawMessageHandler<FNiagaraDebuggerConnectionClosed,FNiagaraDebuggerClient> *this,
          uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149282f00

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FNiagaraDebuggerExecuteConsoleCommand,FNiagaraDebuggerClient>::
_scalar_deleting_destructor_
          (TRawMessageHandler<FNiagaraDebuggerExecuteConsoleCommand,FNiagaraDebuggerClient> *this,
          uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149282f40

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FNiagaraDebuggerRequestConnection,FNiagaraDebuggerClient>::
_scalar_deleting_destructor_
          (TRawMessageHandler<FNiagaraDebuggerRequestConnection,FNiagaraDebuggerClient> *this,
          uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149282f80

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FNiagaraOutlinerCaptureSettings,FNiagaraDebuggerClient>::
_scalar_deleting_destructor_
          (TRawMessageHandler<FNiagaraOutlinerCaptureSettings,FNiagaraDebuggerClient> *this,
          uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149282fc0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FNiagaraRequestSimpleClientInfoMessage,FNiagaraDebuggerClient>::
_scalar_deleting_destructor_
          (TRawMessageHandler<FNiagaraRequestSimpleClientInfoMessage,FNiagaraDebuggerClient> *this,
          uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149283000

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FNiagaraSystemSimCacheCaptureRequest,FNiagaraDebuggerClient>::
_scalar_deleting_destructor_
          (TRawMessageHandler<FNiagaraSystemSimCacheCaptureRequest,FNiagaraDebuggerClient> *this,
          uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149283040

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FNiagaraDebugHUDSettingsData,FNiagaraDebuggerClient>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FNiagaraDebugHUDSettingsData,FNiagaraDebuggerClient>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FNiagaraDebugHUDSettingsData,FNiagaraDebuggerClient>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FNiagaraDebugHUDSettingsData,FNiagaraDebuggerClient>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149283080

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FNiagaraDebuggerConnectionClosed,FNiagaraDebuggerClient>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FNiagaraDebuggerConnectionClosed,FNiagaraDebuggerClient>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FNiagaraDebuggerConnectionClosed,FNiagaraDebuggerClient>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FNiagaraDebuggerConnectionClosed,FNiagaraDebuggerClient>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492830c0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FNiagaraDebuggerExecuteConsoleCommand,FNiagaraDebuggerClient>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FNiagaraDebuggerExecuteConsoleCommand,FNiagaraDebuggerClient>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FNiagaraDebuggerExecuteConsoleCommand,FNiagaraDebuggerClient>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FNiagaraDebuggerExecuteConsoleCommand,FNiagaraDebuggerClient>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149283100

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FNiagaraDebuggerRequestConnection,FNiagaraDebuggerClient>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FNiagaraDebuggerRequestConnection,FNiagaraDebuggerClient>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FNiagaraDebuggerRequestConnection,FNiagaraDebuggerClient>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FNiagaraDebuggerRequestConnection,FNiagaraDebuggerClient>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149283140

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FNiagaraOutlinerCaptureSettings,FNiagaraDebuggerClient>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FNiagaraOutlinerCaptureSettings,FNiagaraDebuggerClient>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FNiagaraOutlinerCaptureSettings,FNiagaraDebuggerClient>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FNiagaraOutlinerCaptureSettings,FNiagaraDebuggerClient>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149283180

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FNiagaraRequestSimpleClientInfoMessage,FNiagaraDebuggerClient>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FNiagaraRequestSimpleClientInfoMessage,FNiagaraDebuggerClient>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FNiagaraRequestSimpleClientInfoMessage,FNiagaraDebuggerClient>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FNiagaraRequestSimpleClientInfoMessage,FNiagaraDebuggerClient>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492831c0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FNiagaraSystemSimCacheCaptureRequest,FNiagaraDebuggerClient>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FNiagaraSystemSimCacheCaptureRequest,FNiagaraDebuggerClient>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FNiagaraSystemSimCacheCaptureRequest,FNiagaraDebuggerClient>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FNiagaraSystemSimCacheCaptureRequest,FNiagaraDebuggerClient>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149283200

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FNiagaraBoundsCalculator,SharedPointerInternals::DefaultDeleter<FNiagaraBoundsCalculator>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FNiagaraBoundsCalculator,SharedPointerInternals::DefaultDeleter<FNiagaraBoundsCalculator>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149283240

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

void * __thiscall
ANiagaraEditorPreviewActor::_scalar_deleting_destructor_
          (ANiagaraEditorPreviewActor *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ANiagaraEditorPreviewActor__6B_;
  pFVar1 = (this->CustomShapePoints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x368);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492832c0

void * __thiscall
FNiagaraBoundsCalculator::_scalar_deleting_destructor_(FNiagaraBoundsCalculator *this,uint param_1)

{
  *this = (FNiagaraBoundsCalculator)&___7FNiagaraBoundsCalculator__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149283300

void * __thiscall
FNiagaraBoundsCalculatorDecals::_scalar_deleting_destructor_
          (FNiagaraBoundsCalculatorDecals *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FNiagaraBoundsCalculator__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149283340

void * __thiscall
FNiagaraDebugHUDStatsListener::_scalar_deleting_destructor_
          (FNiagaraDebugHUDStatsListener *this,uint param_1)

{
  ~FNiagaraDebugHUDStatsListener(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x240);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149283380

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FNiagaraDebuggerClient::_scalar_deleting_destructor_(FNiagaraDebuggerClient *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FScriptContainerElement *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TWeakPtr<FTSTicker::FElement,1> local_18;
  
  this->_padding_ = (longlong)&___7FNiagaraDebuggerClient__6B_;
  local_18.Object = (this->TickerHandle).Object;
  local_18.WeakReferenceCount.ReferenceController =
       (this->TickerHandle).WeakReferenceCount.ReferenceController;
  if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  FTSTicker::RemoveTicker(&local_18);
  CloseConnection(this);
  DestructItems<FNiagaraSimCacheCaptureInfo,int>
            ((FNiagaraSimCacheCaptureInfo *)(this->SimCacheCaptures).AllocatorInstance.Data,
             (this->SimCacheCaptures).ArrayNum);
  pFVar3 = (this->SimCacheCaptures).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->StatsListener).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OutlinerOnCapture);
  pTVar4 = (this->TickerHandle).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MessageEndpoint).SharedReferenceCount.ReferenceController);
  pFVar3 = (this->InstanceName).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149283470

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
FNiagaraEmitterInstance::_scalar_deleting_destructor_(FNiagaraEmitterInstance *this,uint param_1)

{
  ~FNiagaraEmitterInstance(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492834b0

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

void * __thiscall
FNiagaraEmitterInstanceImpl::_scalar_deleting_destructor_
          (FNiagaraEmitterInstanceImpl *this,uint param_1)

{
  ~FNiagaraEmitterInstanceImpl(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x8c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492834f0

void * __thiscall
FNiagaraOutlinerPerfListener::_scalar_deleting_destructor_
          (FNiagaraOutlinerPerfListener *this,uint param_1)

{
  FParticlePerfStatsListener_GatherAll::~FParticlePerfStatsListener_GatherAll
            ((FParticlePerfStatsListener_GatherAll *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x138);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149283530

void * __thiscall
FNiagaraRHIUniformBufferLayout::_scalar_deleting_destructor_
          (FNiagaraRHIUniformBufferLayout *this,uint param_1)

{
  FRHIUniformBufferLayout::~FRHIUniformBufferLayout((FRHIUniformBufferLayout *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149283570

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void * __thiscall
FNiagaraScriptExecutionContext::_scalar_deleting_destructor_
          (FNiagaraScriptExecutionContext *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>,int>
            ((TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
              *)(this->LocalFunctionTable).AllocatorInstance.Data,
             (this->LocalFunctionTable).ArrayNum);
  pFVar1 = (this->LocalFunctionTable).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FNiagaraScriptExecutionContextBase::~FNiagaraScriptExecutionContextBase
            ((FNiagaraScriptExecutionContextBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492835e0

void * __thiscall
FNiagaraVersionedObject::_scalar_deleting_destructor_(FNiagaraVersionedObject *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149283610

void * __thiscall
UNiagaraDebugHUDSettings::_scalar_deleting_destructor_(UNiagaraDebugHUDSettings *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FNotifyHook__;
  FNiagaraDebugHUDSettingsData::~FNiagaraDebugHUDSettingsData(&this->Data);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangedDelegate).field_0x8,*(int *)&(this->OnChangedDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OnChangedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangedDelegate);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x290);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492836c0

void * __thiscall
UNiagaraDecalRendererProperties::_scalar_deleting_destructor_
          (UNiagaraDecalRendererProperties *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraDecalRendererProperties__6B_;
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
    __empty_global_delete(this,0x248);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149283780

void * __thiscall
UNiagaraEditorDataBase::_scalar_deleting_destructor_(UNiagaraEditorDataBase *this,uint param_1)

{
  *(undefined ***)this = &___7UNiagaraEditorDataBase__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492837e0

void * __thiscall
UNiagaraEditorParametersAdapterBase::_scalar_deleting_destructor_
          (UNiagaraEditorParametersAdapterBase *this,uint param_1)

{
  *(undefined ***)this = &___7UNiagaraEditorParametersAdapterBase__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149283840

void * __thiscall
UNiagaraEffectType::_scalar_deleting_destructor_(UNiagaraEffectType *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraEffectType__6B_;
  DestructItems<FNiagaraEmitterScalabilitySettings,int>
            ((FNiagaraEmitterScalabilitySettings *)
             (this->EmitterScalabilitySettings).Settings.AllocatorInstance.Data,
             (this->EmitterScalabilitySettings).Settings.ArrayNum);
  pFVar1 = (this->EmitterScalabilitySettings).Settings.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FNiagaraSystemScalabilitySettings,int>
            ((FNiagaraSystemScalabilitySettings *)
             (this->SystemScalabilitySettings).Settings.AllocatorInstance.Data,
             (this->SystemScalabilitySettings).Settings.ArrayNum);
  pFVar1 = (this->SystemScalabilitySettings).Settings.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FNiagaraSystemScalabilitySettings,int>
            ((FNiagaraSystemScalabilitySettings *)
             (this->DetailLevelScalabilitySettings_DEPRECATED).AllocatorInstance.Data,
             (this->DetailLevelScalabilitySettings_DEPRECATED).ArrayNum);
  pFVar1 = (this->DetailLevelScalabilitySettings_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1492838f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void * __thiscall UNiagaraEmitter::_scalar_deleting_destructor_(UNiagaraEmitter *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UNiagaraEmitterBase__;
  this->_padding_ = (longlong)&_vftable__for__FNiagaraVersionedObject__;
  DestructItems<FVersionedNiagaraEmitterData,int>
            ((FVersionedNiagaraEmitterData *)(this->VersionData).AllocatorInstance.Data,
             (this->VersionData).ArrayNum);
  pFVar1 = (this->VersionData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UNiagaraEmitterBase__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149283990

void * __thiscall
UNiagaraEmitterBase::_scalar_deleting_destructor_(UNiagaraEmitterBase *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraEmitterBase__6B_;
  pFVar1 = (this->UniqueEmitterName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149283a00

void * __thiscall
UNiagaraSignificanceHandler::_scalar_deleting_destructor_
          (UNiagaraSignificanceHandler *this,uint param_1)

{
  *(undefined ***)this = &___7UNiagaraSignificanceHandler__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149283a60

void * __thiscall
UNiagaraSignificanceHandlerAge::_scalar_deleting_destructor_
          (UNiagaraSignificanceHandlerAge *this,uint param_1)

{
  *(undefined ***)this = &___7UNiagaraSignificanceHandler__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149283ac0

void * __thiscall
UNiagaraSignificanceHandlerDistance::_scalar_deleting_destructor_
          (UNiagaraSignificanceHandlerDistance *this,uint param_1)

{
  *(undefined ***)this = &___7UNiagaraSignificanceHandler__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// DrawBox @ 14928d5d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "ELineBatcherType": Some values do not have unique names */

void __cdecl
NiagaraDebugLocal::DrawBox
          (UWorld *param_1,TVector<double> *param_2,TVector<double> *param_3,FLinearColor *param_4)

{
  undefined8 uVar1;
  ULineBatchComponent *this;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auStackY_f8 [32];
  FColor_u_0 local_b8 [2];
  TVector<double>_u_0 local_b0;
  double local_98;
  double dStack_90;
  double local_88;
  undefined1 local_80;
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  this = UWorld::GetLineBatcher(param_1,World);
  if (this != (ULineBatchComponent *)0x0) {
    local_b0._0_4_ = *(uint *)&param_3->field0_0x0 ^ (uint)__xmm_80000000000000008000000000000000;
    local_b0._4_4_ =
         *(uint *)((longlong)&param_3->field0_0x0 + 4) ^
         __xmm_80000000000000008000000000000000._4_4_;
    local_b0._8_4_ = *(uint *)((longlong)&param_3->field0_0x0 + 8) ^ _UNK_15066df78;
    local_b0._12_4_ = *(uint *)((longlong)&param_3->field0_0x0 + 0xc) ^ _UNK_15066df7c;
    local_80 = 1;
    uVar1 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 0x10);
    local_b0._s_0.Z =
         (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^
                          __xmm_80000000000000008000000000000000._4_4_,
                          (uint)uVar1 ^ (uint)__xmm_80000000000000008000000000000000);
    local_88 = (param_3->field0_0x0)._s_0.Z;
    local_98 = (param_3->field0_0x0)._s_0.X;
    dStack_90 = (param_3->field0_0x0)._s_0.Y;
    fVar4 = (param_4->field0_0x0)._s_0.R;
    fVar2 = (param_4->field0_0x0)._s_0.B;
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    if (__real_3f800000 <= fVar4) {
      fVar4 = __real_3f800000;
    }
    if (__real_3f800000 <= fVar2) {
      fVar2 = __real_3f800000;
    }
    fVar3 = (param_4->field0_0x0)._s_0.G;
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    local_b8[0]._0_1_ = (undefined1)(int)(fVar2 * __real_437f0000 + __real_3f000000);
    if (__real_3f800000 <= fVar3) {
      fVar3 = __real_3f800000;
    }
    fVar2 = (param_4->field0_0x0)._s_0.A;
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    local_b8[0]._1_1_ = (undefined1)(int)(fVar3 * __real_437f0000 + __real_3f000000);
    if (__real_3f800000 <= fVar2) {
      fVar2 = __real_3f800000;
    }
    local_78.Rotation.ZW.m128d_f64[0] = UE::Math::TQuat<double>::Identity.Z;
    local_78.Rotation.ZW.m128d_f64[1] = UE::Math::TQuat<double>::Identity.W;
    local_78.Translation.ZW.m128d_f64[0] = (param_2->field0_0x0)._s_0.Z;
    local_b8[0]._2_1_ = (undefined1)(int)(fVar4 * __real_437f0000 + __real_3f000000);
    local_78.Translation.ZW.m128d_f64[1] = 0.0;
    local_78.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
    local_78.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
    local_78.Translation.XY.m128d_f64[0] = (param_2->field0_0x0)._s_0.X;
    local_78.Translation.XY.m128d_f64[1] = (param_2->field0_0x0)._s_0.Y;
    local_78.Rotation.XY.m128d_f64[0] = UE::Math::TQuat<double>::Identity.X;
    local_78.Rotation.XY.m128d_f64[1] = UE::Math::TQuat<double>::Identity.Y;
    local_b8[0]._3_1_ = (undefined1)(int)(fVar2 * __real_437f0000 + __real_3f000000);
    local_78.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
    local_78.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
    ULineBatchComponent::DrawSolidBox
              (this,(TBox<double> *)&local_b0._s_0,&local_78,(FColor *)&local_b8[0]._s_0,'\0',0.0,0)
    ;
  }
  return;
}

// DrawSystemLocation @ 149298a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
NiagaraDebugLocal::DrawSystemLocation
          (UCanvas *param_1,bool param_2,TVector<double> *param_3,TRotator<double> *param_4)

{
  double dVar1;
  FSceneView *pFVar2;
  FCanvas *this;
  HHitProxy *pHVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  bool bVar9;
  TVector<double> *pTVar10;
  FBatchedElements *this_00;
  FLinearColor *pFVar11;
  FHitProxyId FVar12;
  FLinearColor *pFVar13;
  uint uVar14;
  uint uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  undefined1 auStackY_358 [32];
  FLinearColor_u_0 local_318;
  TVector<double>_u_0 local_308;
  undefined1 local_2e8 [16];
  TVector<double>_u_0 local_2d8;
  undefined1 local_2b8 [16];
  TVector<double>_u_0 local_2a8;
  TVector<double>_u_0 local_290;
  TVector<double>_u_0 local_278;
  undefined1 local_258 [16];
  TVector<double>_u_0 local_248;
  TVector<double>_u_0 local_230;
  FDepthFieldGlowInfo local_218;
  TVector<double> local_1e0;
  TVector<double> local_1c8;
  TVector<double> local_1b0;
  TVector<double>_u_0 local_198;
  TVector<double>_u_0 local_180;
  TVector<double>_u_0 local_168;
  TVector<double>_u_0 local_150;
  TVector<double>_u_0 local_138;
  TVector<double>_u_0 local_120;
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_f0;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_358;
  pFVar2 = param_1->SceneView;
  if ((pFVar2 != (FSceneView *)0x0) && (this = param_1->Canvas, this != (FCanvas *)0x0)) {
    local_2d8._s_0.Z = 0.0;
    local_2d8._s_0.X = ___xmm_00000000000000003ff0000000000000;
    local_2d8._s_0.Y = _UNK_150689518;
    pTVar10 = UE::Math::TRotator<double>::RotateVector
                        (param_4,&local_1e0,(TVector<double> *)&local_2d8._s_0);
    local_248._s_0.Z = 0.0;
    dVar6 = (pTVar10->field0_0x0)._s_0.X;
    dVar7 = (pTVar10->field0_0x0)._s_0.Y;
    dVar1 = (pTVar10->field0_0x0)._s_0.Z;
    local_248._s_0.X = ___xmm_3ff00000000000000000000000000000;
    local_248._s_0.Y = _UNK_15061cbc8;
    dVar5 = dVar7 * (pFVar2->ViewMatrices).ViewMatrix.M[1][0] +
            dVar6 * (pFVar2->ViewMatrices).ViewMatrix.M[0][0] +
            dVar1 * (pFVar2->ViewMatrices).ViewMatrix.M[2][0] +
            (pFVar2->ViewMatrices).ViewMatrix.M[3][0] * 0.0;
    dVar6 = dVar7 * (pFVar2->ViewMatrices).ViewMatrix.M[1][1] +
            dVar6 * (pFVar2->ViewMatrices).ViewMatrix.M[0][1] +
            dVar1 * (pFVar2->ViewMatrices).ViewMatrix.M[2][1] +
            (pFVar2->ViewMatrices).ViewMatrix.M[3][1] * 0.0;
    uVar22 = (uint)((ulonglong)dVar6 >> 0x20);
    local_258._8_4_ = SUB84(dVar6,0);
    local_258._0_8_ = dVar5;
    local_258._12_4_ = uVar22;
    pTVar10 = UE::Math::TRotator<double>::RotateVector
                        (param_4,&local_1c8,(TVector<double> *)&local_248._s_0);
    dVar17 = (pTVar10->field0_0x0)._s_0.X;
    dVar16 = (pTVar10->field0_0x0)._s_0.Y;
    dVar1 = (pTVar10->field0_0x0)._s_0.Z;
    local_230._s_0.X = 0.0;
    local_230._s_0.Y = 0.0;
    dVar7 = dVar16 * (pFVar2->ViewMatrices).ViewMatrix.M[1][0] +
            dVar17 * (pFVar2->ViewMatrices).ViewMatrix.M[0][0] +
            dVar1 * (pFVar2->ViewMatrices).ViewMatrix.M[2][0] +
            (pFVar2->ViewMatrices).ViewMatrix.M[3][0] * 0.0;
    dVar1 = dVar16 * (pFVar2->ViewMatrices).ViewMatrix.M[1][1] +
            dVar17 * (pFVar2->ViewMatrices).ViewMatrix.M[0][1] +
            dVar1 * (pFVar2->ViewMatrices).ViewMatrix.M[2][1] +
            (pFVar2->ViewMatrices).ViewMatrix.M[3][1] * 0.0;
    uVar23 = SUB84(dVar1,0);
    uVar24 = (uint)((ulonglong)dVar1 >> 0x20);
    local_230._s_0.Z = __real_3ff0000000000000;
    local_2e8._8_4_ = uVar23;
    local_2e8._0_8_ = dVar7;
    local_2e8._12_4_ = uVar24;
    pTVar10 = UE::Math::TRotator<double>::RotateVector
                        (param_4,&local_1b0,(TVector<double> *)&local_230._s_0);
    dVar16 = (pTVar10->field0_0x0)._s_0.X;
    dVar18 = (pTVar10->field0_0x0)._s_0.Y;
    dVar1 = (pTVar10->field0_0x0)._s_0.Z;
    local_218._0_4_ = local_218._0_4_ & 0xfffffffe;
    dVar17 = dVar18 * (pFVar2->ViewMatrices).ViewMatrix.M[1][0] +
             dVar16 * (pFVar2->ViewMatrices).ViewMatrix.M[0][0] +
             dVar1 * (pFVar2->ViewMatrices).ViewMatrix.M[2][0] +
             (pFVar2->ViewMatrices).ViewMatrix.M[3][0] * 0.0;
    dVar1 = dVar18 * (pFVar2->ViewMatrices).ViewMatrix.M[1][1] +
            dVar16 * (pFVar2->ViewMatrices).ViewMatrix.M[0][1] +
            dVar1 * (pFVar2->ViewMatrices).ViewMatrix.M[2][1] +
            (pFVar2->ViewMatrices).ViewMatrix.M[3][1] * 0.0;
    uVar20 = (uint)((ulonglong)dVar1 >> 0x20);
    local_218.GlowColor.field0_0x0._0_8_ = 0;
    local_218.GlowColor.field0_0x0._8_8_ = 0;
    local_2b8._8_4_ = SUB84(dVar1,0);
    local_2b8._0_8_ = dVar17;
    local_2b8._12_4_ = uVar20;
    local_218.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
    local_218.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
    local_218.GlowInnerRadius.field0_0x0._s_0.X = 0.0;
    local_218.GlowInnerRadius.field0_0x0._s_0.Y = 0.0;
    this_00 = FCanvas::GetBatchedElements
                        (this,ET_Line,(FBatchedElementParameters *)0x0,(FTexture *)0x0,SE_BLEND_MAX,
                         &local_218,true);
    dVar16 = __real_4049000000000000;
    fVar8 = __real_3f800000;
    if (this_00 == (FBatchedElements *)0x0) {
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5531240603855093078>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDebugHud.cpp"
                         ,0x2aa,"BatchedLineElements");
      if (bVar9) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      pHVar3 = (this->CurrentHitProxy).Reference;
      if (pHVar3 == (HHitProxy *)0x0) {
        FVar12.Index = -1;
      }
      else {
        FVar12.Index = (pHVar3->Id).Index;
      }
      local_308._s_0.X = (param_3->field0_0x0)._s_0.X;
      uVar14 = (uint)__xmm_80000000000000008000000000000000;
      uVar15 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      pFVar11 = &FLinearColor::Black;
      local_308._s_0.Y = (param_3->field0_0x0)._s_0.Y;
      local_308._s_0.Z = 0.0;
      uVar21 = SUB84(dVar6,0) ^ uVar14;
      uVar22 = uVar22 ^ uVar15;
      pFVar13 = &FLinearColor::Black;
      local_2a8._s_0.Z = 0.0;
      local_2a8._s_0.X = dVar5 * __real_4049000000000000 + local_308._s_0.X;
      uVar19 = SUB84(dVar1,0) ^ uVar14;
      uVar20 = uVar20 ^ uVar15;
      if (param_2) {
        pFVar13 = &FLinearColor::Red;
      }
      uVar23 = uVar23 ^ uVar14;
      uVar24 = uVar24 ^ uVar15;
      local_2d8._4_4_ = uVar20;
      local_2d8._0_4_ = uVar19;
      local_2a8._s_0.Y =
           (double)CONCAT44(uVar22,uVar21) * __real_4049000000000000 + local_308._s_0.Y;
      local_2d8._s_0.Y = dVar1;
      FBatchedElements::AddLine
                (this_00,(TVector<double> *)&local_308._s_0,(TVector<double> *)&local_2a8._s_0,
                 pFVar13,FVar12,__real_3f800000,0.0,false);
      pFVar13 = &FLinearColor::Black;
      if (param_2) {
        pFVar13 = &FLinearColor::Green;
      }
      local_290._s_0.X = dVar7 * dVar16 + local_308._s_0.X;
      local_290._s_0.Y = (double)CONCAT44(uVar24,uVar23) * dVar16 + local_308._s_0.Y;
      local_290._s_0.Z = local_308._s_0.Z;
      FBatchedElements::AddLine
                (this_00,(TVector<double> *)&local_308._s_0,(TVector<double> *)&local_290._s_0,
                 pFVar13,FVar12,fVar8,0.0,false);
      pFVar13 = &FLinearColor::Black;
      if (param_2) {
        pFVar13 = &FLinearColor::Blue;
      }
      local_278._s_0.X = dVar17 * dVar16 + local_308._s_0.X;
      local_278._s_0.Y = (double)CONCAT44(uVar20,uVar19) * dVar16 + local_308._s_0.Y;
      local_278._s_0.Z = local_308._s_0.Z;
      FBatchedElements::AddLine
                (this_00,(TVector<double> *)&local_308._s_0,(TVector<double> *)&local_278._s_0,
                 pFVar13,FVar12,fVar8,0.0,false);
      fVar8 = __real_3f800000;
      uVar14 = local_258._0_4_ ^ uVar14;
      uVar15 = local_258._4_4_ ^ uVar15;
      dVar18 = local_258._0_8_ - (double)local_2e8._0_8_;
      dVar16 = (double)local_2e8._0_8_ + local_258._0_8_;
      local_198._s_0.Z = local_308._s_0.Z;
      dVar7 = (double)CONCAT44(uVar15,uVar14) - dVar7;
      local_180._s_0.Z = local_308._s_0.Z;
      dVar1 = (double)CONCAT44(uVar24,uVar23) + (double)CONCAT44(uVar22,uVar21);
      local_168._s_0.Z = local_308._s_0.Z;
      local_150._s_0.Z = local_308._s_0.Z;
      local_198._s_0.Y =
           ((dVar6 - (double)CONCAT44(uVar24,uVar23)) - (double)CONCAT44(uVar20,uVar19)) *
           __real_4024000000000000 + local_308._s_0.Y;
      dVar5 = (double)CONCAT44(uVar22,uVar21) - (double)CONCAT44(uVar24,uVar23);
      local_198._s_0.X = (dVar7 - dVar17) * __real_4024000000000000 + local_308._s_0.X;
      local_180._s_0.Y = (dVar5 - local_2d8._s_0.X) * __real_4024000000000000 + local_308._s_0.Y;
      local_180._s_0.X =
           (dVar18 - (double)local_2b8._0_8_) * __real_4024000000000000 + local_308._s_0.X;
      dVar17 = dVar6 + (double)CONCAT44(uVar24,uVar23);
      local_168._s_0.Y = (dVar1 - local_2d8._s_0.X) * __real_4024000000000000 + local_308._s_0.Y;
      local_168._s_0.X =
           (dVar16 - (double)local_2b8._0_8_) * __real_4024000000000000 + local_308._s_0.X;
      local_2e8._0_8_ = (double)local_2e8._0_8_ + (double)CONCAT44(uVar15,uVar14);
      local_150._s_0.Y = (dVar17 - local_2d8._s_0.X) * __real_4024000000000000 + local_308._s_0.Y;
      local_150._s_0.X =
           ((double)local_2e8._0_8_ - (double)local_2b8._0_8_) * __real_4024000000000000 +
           local_308._s_0.X;
      local_138._s_0.X =
           ((double)local_2b8._0_8_ + dVar7) * __real_4024000000000000 + local_308._s_0.X;
      local_138._s_0.Z = local_308._s_0.Z;
      local_120._s_0.Z = local_308._s_0.Z;
      local_108._s_0.Z = local_308._s_0.Z;
      local_f0._s_0.Z = local_308._s_0.Z;
      if (param_2) {
        pFVar11 = &FLinearColor::White;
      }
      local_120._s_0.X =
           ((double)local_2b8._0_8_ + dVar18) * __real_4024000000000000 + local_308._s_0.X;
      local_108._s_0.Y = (dVar1 + local_2d8._s_0.X) * __real_4024000000000000 + local_308._s_0.Y;
      local_138._s_0.Y =
           ((dVar6 - (double)CONCAT44(uVar24,uVar23)) + local_2d8._s_0.X) * __real_4024000000000000
           + local_308._s_0.Y;
      local_120._s_0.Y = (dVar5 + local_2d8._s_0.X) * __real_4024000000000000 + local_308._s_0.Y;
      local_f0._s_0.Y = (dVar17 + local_2d8._s_0.X) * __real_4024000000000000 + local_308._s_0.Y;
      local_108._s_0.X =
           ((double)local_2b8._0_8_ + dVar16) * __real_4024000000000000 + local_308._s_0.X;
      local_f0._s_0.X =
           ((double)local_2b8._0_8_ + (double)local_2e8._0_8_) * __real_4024000000000000 +
           local_308._s_0.X;
      local_318._0_8_ = *(undefined8 *)&pFVar11->field0_0x0;
      local_318._8_8_ = *(undefined8 *)((longlong)&pFVar11->field0_0x0 + 8);
      FBatchedElements::AddLine
                (this_00,(TVector<double> *)&local_198._s_0,(TVector<double> *)&local_180._s_0,
                 (FLinearColor *)&local_318._s_0,FVar12,__real_3f800000,0.0,false);
      FBatchedElements::AddLine
                (this_00,(TVector<double> *)&local_180._s_0,(TVector<double> *)&local_168._s_0,
                 (FLinearColor *)&local_318._s_0,FVar12,fVar8,0.0,false);
      FBatchedElements::AddLine
                (this_00,(TVector<double> *)&local_168._s_0,(TVector<double> *)&local_150._s_0,
                 (FLinearColor *)&local_318._s_0,FVar12,fVar8,0.0,false);
      FBatchedElements::AddLine
                (this_00,(TVector<double> *)&local_150._s_0,(TVector<double> *)&local_198._s_0,
                 (FLinearColor *)&local_318._s_0,FVar12,fVar8,0.0,false);
      FBatchedElements::AddLine
                (this_00,(TVector<double> *)&local_138._s_0,(TVector<double> *)&local_120._s_0,
                 (FLinearColor *)&local_318._s_0,FVar12,fVar8,0.0,false);
      FBatchedElements::AddLine
                (this_00,(TVector<double> *)&local_120._s_0,(TVector<double> *)&local_108._s_0,
                 (FLinearColor *)&local_318._s_0,FVar12,fVar8,0.0,false);
      FBatchedElements::AddLine
                (this_00,(TVector<double> *)&local_108._s_0,(TVector<double> *)&local_f0._s_0,
                 (FLinearColor *)&local_318._s_0,FVar12,fVar8,0.0,false);
      FBatchedElements::AddLine
                (this_00,(TVector<double> *)&local_f0._s_0,(TVector<double> *)&local_138._s_0,
                 (FLinearColor *)&local_318._s_0,FVar12,fVar8,0.0,false);
      FBatchedElements::AddLine
                (this_00,(TVector<double> *)&local_198._s_0,(TVector<double> *)&local_138._s_0,
                 (FLinearColor *)&local_318._s_0,FVar12,fVar8,0.0,false);
      FBatchedElements::AddLine
                (this_00,(TVector<double> *)&local_180._s_0,(TVector<double> *)&local_120._s_0,
                 (FLinearColor *)&local_318._s_0,FVar12,fVar8,0.0,false);
      FBatchedElements::AddLine
                (this_00,(TVector<double> *)&local_168._s_0,(TVector<double> *)&local_108._s_0,
                 (FLinearColor *)&local_318._s_0,FVar12,fVar8,0.0,false);
      FBatchedElements::AddLine
                (this_00,(TVector<double> *)&local_150._s_0,(TVector<double> *)&local_f0._s_0,
                 (FLinearColor *)&local_318._s_0,FVar12,fVar8,0.0,false);
    }
  }
  return;
}

// DrawWireframeBox @ 14929a2c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ELineBatcherType": Some values do not have unique names */

void __cdecl
NiagaraDebugLocal::DrawWireframeBox
          (UWorld *param_1,TVector<double> *param_2,TVector<double> *param_3,FLinearColor *param_4,
          float param_5)

{
  ULineBatchComponent *pUVar1;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  
  pUVar1 = UWorld::GetLineBatcher(param_1,World);
  if (pUVar1 != (ULineBatchComponent *)0x0) {
    local_48 = (param_2->field0_0x0)._s_0.Y;
    local_68 = (param_2->field0_0x0)._s_0.X + (param_3->field0_0x0)._s_0.X;
    local_58 = (param_3->field0_0x0)._s_0.Z + (param_2->field0_0x0)._s_0.Z;
    local_60 = local_48 - (param_3->field0_0x0)._s_0.Y;
    local_48 = local_48 + (param_3->field0_0x0)._s_0.Y;
    local_50 = local_68;
    local_40 = local_58;
    (**(code **)(*(longlong *)pUVar1 + 0xa90))(pUVar1,&local_50,&local_68,param_4,0,param_5,0,0);
    local_68 = (param_2->field0_0x0)._s_0.X;
    local_60 = (param_2->field0_0x0)._s_0.Y - (param_3->field0_0x0)._s_0.Y;
    local_50 = local_68 - (param_3->field0_0x0)._s_0.X;
    local_68 = local_68 + (param_3->field0_0x0)._s_0.X;
    local_58 = (param_3->field0_0x0)._s_0.Z + (param_2->field0_0x0)._s_0.Z;
    local_48 = local_60;
    local_40 = local_58;
    (**(code **)(*(longlong *)pUVar1 + 0xa90))(pUVar1,&local_68,&local_50,param_4,0,param_5,0,0);
    local_60 = (param_2->field0_0x0)._s_0.Y;
    local_68 = (param_2->field0_0x0)._s_0.X - (param_3->field0_0x0)._s_0.X;
    local_58 = (param_3->field0_0x0)._s_0.Z + (param_2->field0_0x0)._s_0.Z;
    local_48 = local_60 + (param_3->field0_0x0)._s_0.Y;
    local_60 = local_60 - (param_3->field0_0x0)._s_0.Y;
    local_50 = local_68;
    local_40 = local_58;
    (**(code **)(*(longlong *)pUVar1 + 0xa90))(pUVar1,&local_68,&local_50,param_4,0,param_5,0,0);
    local_68 = (param_2->field0_0x0)._s_0.X;
    local_50 = local_68 + (param_3->field0_0x0)._s_0.X;
    local_60 = (param_2->field0_0x0)._s_0.Y + (param_3->field0_0x0)._s_0.Y;
    local_68 = local_68 - (param_3->field0_0x0)._s_0.X;
    local_58 = (param_3->field0_0x0)._s_0.Z + (param_2->field0_0x0)._s_0.Z;
    local_48 = local_60;
    local_40 = local_58;
    (**(code **)(*(longlong *)pUVar1 + 0xa90))(pUVar1,&local_68,&local_50,param_4,0,param_5,0,0);
    local_60 = (param_2->field0_0x0)._s_0.Y;
    local_68 = (param_2->field0_0x0)._s_0.X + (param_3->field0_0x0)._s_0.X;
    local_58 = (param_2->field0_0x0)._s_0.Z - (param_3->field0_0x0)._s_0.Z;
    local_48 = local_60 - (param_3->field0_0x0)._s_0.Y;
    local_60 = local_60 + (param_3->field0_0x0)._s_0.Y;
    local_50 = local_68;
    local_40 = local_58;
    (**(code **)(*(longlong *)pUVar1 + 0xa90))(pUVar1,&local_68,&local_50,param_4,0,param_5,0,0);
    local_68 = (param_2->field0_0x0)._s_0.X;
    local_60 = (param_2->field0_0x0)._s_0.Y - (param_3->field0_0x0)._s_0.Y;
    local_50 = local_68 - (param_3->field0_0x0)._s_0.X;
    local_68 = local_68 + (param_3->field0_0x0)._s_0.X;
    local_58 = (param_2->field0_0x0)._s_0.Z - (param_3->field0_0x0)._s_0.Z;
    local_48 = local_60;
    local_40 = local_58;
    (**(code **)(*(longlong *)pUVar1 + 0xa90))(pUVar1,&local_68,&local_50,param_4,0,param_5,0,0);
    local_60 = (param_2->field0_0x0)._s_0.Y;
    local_68 = (param_2->field0_0x0)._s_0.X - (param_3->field0_0x0)._s_0.X;
    local_48 = local_60 + (param_3->field0_0x0)._s_0.Y;
    local_58 = (param_2->field0_0x0)._s_0.Z - (param_3->field0_0x0)._s_0.Z;
    local_60 = local_60 - (param_3->field0_0x0)._s_0.Y;
    local_50 = local_68;
    local_40 = local_58;
    (**(code **)(*(longlong *)pUVar1 + 0xa90))(pUVar1,&local_68,&local_50,param_4,0,param_5,0,0);
    local_68 = (param_2->field0_0x0)._s_0.X;
    local_60 = (param_2->field0_0x0)._s_0.Y + (param_3->field0_0x0)._s_0.Y;
    local_50 = local_68 + (param_3->field0_0x0)._s_0.X;
    local_68 = local_68 - (param_3->field0_0x0)._s_0.X;
    local_58 = (param_2->field0_0x0)._s_0.Z - (param_3->field0_0x0)._s_0.Z;
    local_48 = local_60;
    local_40 = local_58;
    (**(code **)(*(longlong *)pUVar1 + 0xa90))(pUVar1,&local_68,&local_50,param_4,0,param_5,0,0);
    local_58 = (param_2->field0_0x0)._s_0.Z;
    local_68 = (param_2->field0_0x0)._s_0.X + (param_3->field0_0x0)._s_0.X;
    local_60 = (param_2->field0_0x0)._s_0.Y + (param_3->field0_0x0)._s_0.Y;
    local_40 = local_58 - (param_3->field0_0x0)._s_0.Z;
    local_58 = local_58 + (param_3->field0_0x0)._s_0.Z;
    local_50 = local_68;
    local_48 = local_60;
    (**(code **)(*(longlong *)pUVar1 + 0xa90))(pUVar1,&local_68,&local_50,param_4,0,param_5,0,0);
    local_58 = (param_3->field0_0x0)._s_0.Z;
    local_40 = (param_2->field0_0x0)._s_0.Z - local_58;
    local_68 = (param_2->field0_0x0)._s_0.X + (param_3->field0_0x0)._s_0.X;
    local_60 = (param_2->field0_0x0)._s_0.Y - (param_3->field0_0x0)._s_0.Y;
    local_58 = local_58 + (param_2->field0_0x0)._s_0.Z;
    local_50 = local_68;
    local_48 = local_60;
    (**(code **)(*(longlong *)pUVar1 + 0xa90))(pUVar1,&local_68,&local_50,param_4,0,param_5,0,0);
    local_58 = (param_2->field0_0x0)._s_0.Z;
    local_68 = (param_2->field0_0x0)._s_0.X - (param_3->field0_0x0)._s_0.X;
    local_60 = (param_2->field0_0x0)._s_0.Y - (param_3->field0_0x0)._s_0.Y;
    local_40 = local_58 - (param_3->field0_0x0)._s_0.Z;
    local_58 = local_58 + (param_3->field0_0x0)._s_0.Z;
    local_50 = local_68;
    local_48 = local_60;
    (**(code **)(*(longlong *)pUVar1 + 0xa90))(pUVar1,&local_68,&local_50,param_4,0,param_5,0,0);
    local_58 = (param_2->field0_0x0)._s_0.Z;
    local_68 = (param_2->field0_0x0)._s_0.X - (param_3->field0_0x0)._s_0.X;
    local_60 = (param_2->field0_0x0)._s_0.Y + (param_3->field0_0x0)._s_0.Y;
    local_40 = local_58 - (param_3->field0_0x0)._s_0.Z;
    local_58 = local_58 + (param_3->field0_0x0)._s_0.Z;
    local_50 = local_68;
    local_48 = local_60;
    (**(code **)(*(longlong *)pUVar1 + 0xa90))(pUVar1,&local_68,&local_50,param_4,0,param_5,0,0);
  }
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraDebuggerCommon @ 14929ae40

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraDebuggerCommon(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraDecalRendererProperties @ 14929ae50

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraDecalRendererProperties(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraEditorDataBase @ 14929ae60

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraEditorDataBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraEditorPreviewActor @ 14929ae70

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraEditorPreviewActor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraEffectType @ 14929ae80

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraEffectType(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraEmitter @ 14929ae90

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraEmitter(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraEmitterBase @ 14929aea0

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraEmitterBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNiagaraEmitterHandle @ 14929aeb0

void __cdecl EmptyLinkFunctionForGeneratedCodeNiagaraEmitterHandle(void)

{
  return;
}

// FindParameterStoreVariablesByWildcard @ 14929bff0

void __cdecl
NiagaraDebugLocal::FindParameterStoreVariablesByWildcard
          (FNiagaraParameterStore *param_1,
          TArray<FNiagaraDebugHUDVariable,TSizedDefaultAllocator<32>_> *param_2,
          FCachedVariables *param_3,EParameterStoreLocation param_4,int param_5,
          ENiagaraSimTarget param_6)

{
  TArrayView<FNiagaraVariableWithOffset_const_,int> *pTVar1;
  FCachedVariables *local_res18;
  EParameterStoreLocation local_res20 [2];
  undefined1 local_38 [16];
  <lambda_1> local_28;
  
  if (param_1 != (FNiagaraParameterStore *)0x0) {
    local_res18 = param_3;
    local_res20[0] = param_4;
    pTVar1 = (TArrayView<FNiagaraVariableWithOffset_const_,int> *)
             (**(code **)param_1->_padding_)(param_1,local_38);
    local_28.CachedVariables = &local_res18;
    local_28.StoreLocation = local_res20;
    local_28.EmitterIndex = &param_5;
    FindVariablesByWildcard<TArrayView<FNiagaraVariableWithOffset_const_,int>,_NiagaraDebugLocal::FindParameterStoreVariablesByWildcard_::__l5::<lambda_1>_>
              (pTVar1,param_2,&local_28);
  }
  return;
}

// FindScriptVariablesByWildcard @ 14929c050

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
NiagaraDebugLocal::FindScriptVariablesByWildcard
          (UNiagaraScript *param_1,
          TArray<FNiagaraDebugHUDVariable,TSizedDefaultAllocator<32>_> *param_2,
          FCachedVariables *param_3,EParameterStoreLocation param_4,int param_5,
          ENiagaraSimTarget param_6)

{
  FNiagaraScriptExecutionParameterStore *pFVar1;
  TArrayView<FNiagaraVariableWithOffset_const_,int> *pTVar2;
  EParameterStoreLocation local_res8 [8];
  int local_48 [2];
  FCachedVariables *local_40;
  undefined1 local_38 [16];
  <lambda_1> local_28;
  
  if (param_1 != (UNiagaraScript *)0x0) {
    local_48[0] = param_5;
    local_res8[0] = param_4;
    local_40 = param_3;
    pFVar1 = UNiagaraScript::GetExecutionReadyParameterStore(param_1,param_6);
    if (pFVar1 != (FNiagaraScriptExecutionParameterStore *)0x0) {
      pTVar2 = (TArrayView<FNiagaraVariableWithOffset_const_,int> *)
               (**(code **)pFVar1->_padding_)(pFVar1,local_38);
      local_28.CachedVariables = &local_40;
      local_28.StoreLocation = local_res8;
      local_28.EmitterIndex = local_48;
      FindVariablesByWildcard<TArrayView<FNiagaraVariableWithOffset_const_,int>,_NiagaraDebugLocal::FindParameterStoreVariablesByWildcard_::__l5::<lambda_1>_>
                (pTVar2,param_2,&local_28);
    }
  }
  return;
}

// FindSystemVariablesByWildcard @ 14929c0d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
NiagaraDebugLocal::FindSystemVariablesByWildcard
          (UNiagaraSystem *param_1,
          TArray<FNiagaraDebugHUDVariable,TSizedDefaultAllocator<32>_> *param_2,
          FCachedVariables *param_3)

{
  FNiagaraUserRedirectionParameterStore *pFVar1;
  FNiagaraParameterStore *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FCachedVariables *pFVar5;
  TArrayView<FNiagaraVariableWithOffset_const_,int> *pTVar6;
  UNiagaraScript *pUVar7;
  FNiagaraScriptExecutionParameterStore *pFVar8;
  TArray<FNiagaraEmitterHandle,TSizedDefaultAllocator<32>_> *pTVar9;
  FVersionedNiagaraEmitterData *pFVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  EParameterStoreLocation local_res10 [2];
  FCachedVariables *local_res18;
  int local_res20 [2];
  <lambda_1> local_a8;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  <lambda_1> local_78;
  <lambda_1> local_58;
  
  if (param_2->ArrayNum != 0) {
    local_a8.SystemCompiledData = &(param_1->SystemCompiledData).DataSetCompiledData;
    local_a8.CachedVariables = &local_res18;
    local_res18 = param_3;
    FindVariablesByWildcard<TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_>,_NiagaraDebugLocal::FindSystemVariablesByWildcard_::__l2::<lambda_1>_>
              (&(local_a8.SystemCompiledData)->Variables,param_2,&local_a8);
    pFVar1 = &param_1->ExposedParameters;
    iVar12 = 0;
    local_a8.CachedVariables = (FCachedVariables **)local_res18;
    local_res20[0] = -1;
    local_res10[0] = UserOverride;
    if (pFVar1 != (FNiagaraUserRedirectionParameterStore *)0x0) {
      pTVar6 = (TArrayView<FNiagaraVariableWithOffset_const_,int> *)
               (**(code **)pFVar1->_padding_)(pFVar1,local_98);
      local_78.CachedVariables = (FCachedVariables **)&local_a8;
      local_78.StoreLocation = local_res10;
      local_78.EmitterIndex = local_res20;
      FindVariablesByWildcard<TArrayView<FNiagaraVariableWithOffset_const_,int>,_NiagaraDebugLocal::FindParameterStoreVariablesByWildcard_::__l5::<lambda_1>_>
                (pTVar6,param_2,&local_78);
    }
    pFVar5 = local_res18;
    pUVar7 = UNiagaraSystem::GetSystemSpawnScript(param_1);
    if (pUVar7 != (UNiagaraScript *)0x0) {
      local_res20[0] = -1;
      local_res10[0] = SystemSpawn;
      local_a8.CachedVariables = (FCachedVariables **)pFVar5;
      pFVar8 = UNiagaraScript::GetExecutionReadyParameterStore(pUVar7,CPUSim);
      if (pFVar8 != (FNiagaraScriptExecutionParameterStore *)0x0) {
        pTVar6 = (TArrayView<FNiagaraVariableWithOffset_const_,int> *)
                 (**(code **)pFVar8->_padding_)(pFVar8,local_98);
        local_78.CachedVariables = (FCachedVariables **)&local_a8;
        local_78.StoreLocation = local_res10;
        local_78.EmitterIndex = local_res20;
        FindVariablesByWildcard<TArrayView<FNiagaraVariableWithOffset_const_,int>,_NiagaraDebugLocal::FindParameterStoreVariablesByWildcard_::__l5::<lambda_1>_>
                  (pTVar6,param_2,&local_78);
      }
    }
    pFVar5 = local_res18;
    pUVar7 = UNiagaraSystem::GetSystemUpdateScript(param_1);
    if (pUVar7 != (UNiagaraScript *)0x0) {
      local_res20[0] = -1;
      local_res10[0] = SystemUpdate;
      local_a8.CachedVariables = (FCachedVariables **)pFVar5;
      pFVar8 = UNiagaraScript::GetExecutionReadyParameterStore(pUVar7,CPUSim);
      if (pFVar8 != (FNiagaraScriptExecutionParameterStore *)0x0) {
        pTVar6 = (TArrayView<FNiagaraVariableWithOffset_const_,int> *)
                 (**(code **)pFVar8->_padding_)(pFVar8,local_98);
        local_78.CachedVariables = (FCachedVariables **)&local_a8;
        local_78.StoreLocation = local_res10;
        local_78.EmitterIndex = local_res20;
        FindVariablesByWildcard<TArrayView<FNiagaraVariableWithOffset_const_,int>,_NiagaraDebugLocal::FindParameterStoreVariablesByWildcard_::__l5::<lambda_1>_>
                  (pTVar6,param_2,&local_78);
      }
    }
    pTVar9 = UNiagaraSystem::GetEmitterHandles(param_1);
    iVar4 = pTVar9->ArrayNum;
    pFVar11 = (pTVar9->AllocatorInstance).Data;
    pFVar3 = pFVar11 + (longlong)iVar4 * 0x48;
    while( true ) {
      if (pTVar9->ArrayNum != iVar4) {
        `TCheckedPointerIterator<FNiagaraEmitterHandle,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar11 == pFVar3) break;
      if (((pFVar11[0x21] == (FScriptContainerElement)0x0) &&
          (pFVar10 = FVersionedNiagaraEmitter::GetEmitterData
                               ((FVersionedNiagaraEmitter *)(pFVar11 + 0x28)),
          pFVar10 != (FVersionedNiagaraEmitterData *)0x0)) &&
         (pFVar11[0x20] != (FScriptContainerElement)0x0)) {
        pUVar7 = (pFVar10->SpawnScriptProps).Script.field0_0x0.DebugPtr;
        if (pUVar7 != (UNiagaraScript *)0x0) {
          local_a8.CachedVariables = (FCachedVariables **)local_res18;
          local_res10[0] = EmitterSpawn;
          local_res20[0] = iVar12;
          pFVar8 = UNiagaraScript::GetExecutionReadyParameterStore(pUVar7,pFVar10->SimTarget);
          if (pFVar8 != (FNiagaraScriptExecutionParameterStore *)0x0) {
            pTVar6 = (TArrayView<FNiagaraVariableWithOffset_const_,int> *)
                     (**(code **)pFVar8->_padding_)(pFVar8,local_98);
            local_58.CachedVariables = (FCachedVariables **)&local_a8;
            local_58.StoreLocation = local_res10;
            local_58.EmitterIndex = local_res20;
            FindVariablesByWildcard<TArrayView<FNiagaraVariableWithOffset_const_,int>,_NiagaraDebugLocal::FindParameterStoreVariablesByWildcard_::__l5::<lambda_1>_>
                      (pTVar6,param_2,&local_58);
          }
        }
        pUVar7 = (pFVar10->UpdateScriptProps).Script.field0_0x0.DebugPtr;
        if (pUVar7 != (UNiagaraScript *)0x0) {
          local_a8.CachedVariables = (FCachedVariables **)local_res18;
          local_res10[0] = EmitterUpdate;
          local_res20[0] = iVar12;
          pFVar8 = UNiagaraScript::GetExecutionReadyParameterStore(pUVar7,pFVar10->SimTarget);
          if (pFVar8 != (FNiagaraScriptExecutionParameterStore *)0x0) {
            pTVar6 = (TArrayView<FNiagaraVariableWithOffset_const_,int> *)
                     (**(code **)pFVar8->_padding_)(pFVar8,local_88);
            local_58.CachedVariables = (FCachedVariables **)&local_a8;
            local_58.StoreLocation = local_res10;
            local_58.EmitterIndex = local_res20;
            FindVariablesByWildcard<TArrayView<FNiagaraVariableWithOffset_const_,int>,_NiagaraDebugLocal::FindParameterStoreVariablesByWildcard_::__l5::<lambda_1>_>
                      (pTVar6,param_2,&local_58);
          }
        }
        pFVar2 = &pFVar10->RendererBindings;
        local_res10[0] = EmitterRenderBindings;
        local_a8.CachedVariables = (FCachedVariables **)local_res18;
        local_res20[0] = iVar12;
        if (pFVar2 != (FNiagaraParameterStore *)0x0) {
          pTVar6 = (TArrayView<FNiagaraVariableWithOffset_const_,int> *)
                   (**(code **)pFVar2->_padding_)(pFVar2,&local_78);
          local_58.CachedVariables = (FCachedVariables **)&local_a8;
          local_58.StoreLocation = local_res10;
          local_58.EmitterIndex = local_res20;
          FindVariablesByWildcard<TArrayView<FNiagaraVariableWithOffset_const_,int>,_NiagaraDebugLocal::FindParameterStoreVariablesByWildcard_::__l5::<lambda_1>_>
                    (pTVar6,param_2,&local_58);
        }
      }
      iVar12 = iVar12 + 1;
      pFVar11 = pFVar11 + 0x48;
    }
  }
  return;
}

// FormatPerfString @ 14929c620

FString * __cdecl
NiagaraDebugLocal::FormatPerfString(FString *__return_storage_ptr__,wchar_t *param_1)

{
  wchar_t *pwVar1;
  
  pwVar1 = L"%s (ms)";
  if (Settings.PerfUnits != Milliseconds) {
    pwVar1 = L"%s (us)";
  }
  ::FString::PrintfImpl(__return_storage_ptr__,pwVar1);
  return __return_storage_ptr__;
}

// FormatPerfValue @ 14929c660

FString * __cdecl
NiagaraDebugLocal::FormatPerfValue(FString *__return_storage_ptr__,double param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  int iVar4;
  FString local_28;
  FString local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  if (Settings.PerfUnits == Milliseconds) {
    ::FString::PrintfImpl(&local_28,L"%5.3f");
    local_18.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    if (__return_storage_ptr__ != &local_28) {
      pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_28.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_28.Data.ArrayMax;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
  }
  else {
    pFVar3 = ::FString::FormatAsNumber(&local_18,(int)param_1);
    if (__return_storage_ptr__ != pFVar3) {
      pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (pFVar3->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  while( true ) {
    iVar1 = (__return_storage_ptr__->Data).ArrayNum;
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    if (param_2 <= iVar4) break;
    ::FString::AppendChar(__return_storage_ptr__,L' ');
  }
  return __return_storage_ptr__;
}

// GetCachedVariables @ 1492a0b70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FCachedVariables * __cdecl NiagaraDebugLocal::GetCachedVariables(UNiagaraSystem *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  void *_Src;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  UNiagaraSystem *pUVar6;
  FCachedVariables *pFVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  FCachedVariables *pFVar13;
  TArray<FNiagaraEmitterHandle,TSizedDefaultAllocator<32>_> *pTVar14;
  undefined8 *puVar15;
  FNiagaraDataSetCompiledData *pFVar16;
  wchar_t *pwVar17;
  ForAnyElementType FVar18;
  FNiagaraDataSetCompiledData *pFVar19;
  uint uVar20;
  UNiagaraSystem *local_res8;
  uint local_res10 [2];
  uint local_res18 [2];
  TKeyInitializer<UNiagaraSystem_*_&> local_res20;
  uint local_e8 [2];
  FCachedVariables *local_e0;
  FString local_d8;
  FNiagaraDataSetCompiledData *local_c8;
  FWeakObjectPtr local_c0;
  FWeakObjectPtr local_b8;
  UNiagaraSystem *local_b0;
  FWeakObjectPtr local_a8;
  UNiagaraSystem **local_a0;
  UNiagaraSystem *local_98;
  undefined8 local_90;
  TReferenceControllerBase<1> *local_88;
  undefined8 local_80;
  TReferenceControllerBase<1> *local_78;
  <lambda_1> local_68;
  
  pFVar13 = (FCachedVariables *)0x0;
  local_res10[0] = 0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UNiagaraSystem *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_c0.ObjectIndex = 0;
  local_c0.ObjectSerialNumber = 0;
  local_b0 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UNiagaraSystem *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_c0,(FObjectPtr)&local_b0);
  local_a8 = local_c0;
  iVar9 = TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TWeakObjectPtr<UNiagaraSystem_const_,FWeakObjectPtr>_>
                    ((TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables,0>,FDefaultSetAllocator>
                      *)&GCachedSystemVariables,local_c0.ObjectSerialNumber ^ local_c0.ObjectIndex,
                     (TWeakObjectPtr<UNiagaraSystem_const_,FWeakObjectPtr> *)&local_a8);
  if (iVar9 != -1) {
    lVar12 = (longlong)iVar9 * 0x68 + GCachedSystemVariables._0_8_;
    local_e0 = (FCachedVariables *)(lVar12 + 8);
    if (lVar12 == 0) {
      local_e0 = pFVar13;
    }
    if (local_e0 != (FCachedVariables *)0x0) {
      return local_e0;
    }
  }
  local_a0 = &local_res8;
  TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<UNiagaraSystem_*_&>_>
            ((TSet<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables,0>,FDefaultSetAllocator>
              *)&GCachedSystemVariables,&local_res20,(bool *)&local_a0);
  local_98 = local_res8;
  local_e0 = (FCachedVariables *)
             ((longlong)(int)local_res20.Key * 0x68 + GCachedSystemVariables._0_8_ + 8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UNiagaraSystem *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  local_b8.ObjectIndex = 0;
  local_b8.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_98 != (UNiagaraSystem *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_98);
  }
  FWeakObjectPtr::operator=(&local_b8,(FObjectPtr)&local_98);
  (local_e0->WeakNiagaraSystem).WeakPtr = local_b8;
  if (0 < Settings.SystemVariables.ArrayNum) {
    FindSystemVariablesByWildcard(local_res8,&Settings.SystemVariables,local_e0);
    local_e8[0] = 0;
LAB_1492a0d00:
    iVar9 = Settings.SystemVariables.ArrayNum;
    pFVar2 = Settings.SystemVariables.AllocatorInstance.Data +
             (longlong)Settings.SystemVariables.ArrayNum * 0x18;
    FVar18.Data = Settings.SystemVariables.AllocatorInstance.Data;
    do {
      if (Settings.SystemVariables.ArrayNum != iVar9) {
        local_res10[0] = local_res10[0] & 0xffffff00;
        `TCheckedPointerIterator<FNiagaraDebugHUDVariable,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (FVar18.Data == pFVar2) goto LAB_1492a0e15;
      if (*FVar18.Data != (FScriptContainerElement)0x0) {
        iVar10 = *(int *)(FVar18.Data + 0x10) + -1;
        if (*(int *)(FVar18.Data + 0x10) == 0) {
          iVar10 = 0;
          pwVar17 = L"";
        }
        else {
          pwVar17 = *(wchar_t **)(FVar18.Data + 8);
        }
        bVar8 = ::FString::MatchesWildcard
                          ((FString *)(GEngineVariables + (int)local_e8[0]),pwVar17,iVar10,
                           IgnoreCase);
        pFVar7 = local_e0;
        if (bVar8) goto LAB_1492a0d76;
      }
      FVar18.Data = FVar18.Data + 0x18;
    } while( true );
  }
LAB_1492a0e2a:
  if ((Settings.bShowParticleVariables != false) && (0 < Settings.ParticlesVariables.ArrayNum)) {
    pTVar14 = UNiagaraSystem::GetEmitterHandles(local_res8);
    iVar9 = pTVar14->ArrayNum;
    pFVar2 = (pTVar14->AllocatorInstance).Data;
    if ((iVar9 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      pFVar13 = (FCachedVariables *)(*pcVar5)();
      return pFVar13;
    }
    pFVar7 = local_e0;
    pUVar6 = local_res8;
    iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,iVar9,&(local_e0->ParticleVariables).AllocatorInstance,
                        &(local_e0->ParticleVariables).ArrayNum,
                        &(local_e0->ParticleVariables).ArrayMax);
    memset((pFVar7->ParticleVariables).AllocatorInstance.Data + (longlong)iVar10 * 0x10,0,
           (longlong)iVar9 << 4);
    pFVar7 = local_e0;
    iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,4,iVar9,&(local_e0->ParticlePositionAccessors).AllocatorInstance,
                        &(local_e0->ParticlePositionAccessors).ArrayNum,
                        &(local_e0->ParticlePositionAccessors).ArrayMax);
    DefaultConstructItems<FNiagaraDataSetAccessor<FNiagaraPosition>,int>
              ((pFVar7->ParticlePositionAccessors).AllocatorInstance.Data + (longlong)iVar10 * 8,
               iVar9);
    local_res18[0] = 0;
    if (0 < iVar9) {
      do {
        uVar11 = local_res18[0];
        uVar20 = 0;
        if ((int)local_res18[0] < iVar9) {
          uVar20 = ~local_res18[0] >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          pFVar13 = (FCachedVariables *)(*pcVar5)();
          return pFVar13;
        }
        lVar12 = (longlong)(int)uVar11;
        if ((((*(int *)(pFVar2 + lVar12 * 0x48 + 0x14) != 0 ||
              *(int *)(pFVar2 + lVar12 * 0x48 + 0x10) != 0) ||
             *(int *)(pFVar2 + lVar12 * 0x48 + 0xc) != 0) ||
             *(int *)(pFVar2 + lVar12 * 0x48 + 8) != 0) &&
           (pFVar2[lVar12 * 0x48 + 0x20] != (FScriptContainerElement)0x0)) {
          if ((Settings.bEmitterFilterEnabled == false) ||
             (Settings.EmitterFilter.Data.ArrayNum < 2)) {
LAB_1492a1072:
            bVar8 = false;
          }
          else {
            lVar3 = *(longlong *)(pFVar2 + lVar12 * 0x48 + 0x28);
            pFVar13 = (FCachedVariables *)(ulonglong)((uint)pFVar13 | 1);
            local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            if (lVar3 == 0) {
              lVar3 = *(longlong *)(pFVar2 + lVar12 * 0x48 + 0x40);
              if (lVar3 != 0) {
                iVar10 = *(int *)(lVar3 + 0x30);
                _Src = *(void **)(lVar3 + 0x28);
                goto joined_r0x0001492a1027;
              }
              local_d8.Data.ArrayNum = 0;
              local_d8.Data.ArrayMax = 0;
            }
            else {
              iVar10 = *(int *)(lVar3 + 0x30);
              _Src = *(void **)(lVar3 + 0x28);
joined_r0x0001492a1027:
              local_d8.Data.ArrayNum = iVar10;
              if (iVar10 == 0) {
                local_d8.Data.ArrayNum = 0;
                local_d8.Data.ArrayMax = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,iVar10,0,(ForAnyElementType *)&local_d8,iVar10,
                           &local_d8.Data.ArrayMax);
                memcpy(local_d8.Data.AllocatorInstance.Data,_Src,(longlong)iVar10 * 2);
              }
            }
            iVar10 = Settings.EmitterFilter.Data.ArrayNum + -1;
            FVar18.Data = Settings.EmitterFilter.Data.AllocatorInstance.Data;
            if (Settings.EmitterFilter.Data.ArrayNum == 0) {
              iVar10 = 0;
              FVar18.Data = (FScriptContainerElement *)L"";
            }
            bVar8 = ::FString::MatchesWildcard(&local_d8,(wchar_t *)FVar18.Data,iVar10,IgnoreCase);
            if (bVar8) goto LAB_1492a1072;
            bVar8 = true;
          }
          pFVar16 = (FNiagaraDataSetCompiledData *)0x0;
          if ((((ulonglong)pFVar13 & 1) != 0) &&
             (pFVar13 = (FCachedVariables *)(ulonglong)((uint)pFVar13 & 0xfffffffe),
             local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_d8.Data.AllocatorInstance.Data);
          }
          if (!bVar8) {
            local_c8 = (FNiagaraDataSetCompiledData *)0x0;
            uVar11 = 0;
            if (pFVar2[lVar12 * 0x48 + 0x21] == (FScriptContainerElement)0x1) {
              lVar12 = *(longlong *)(pFVar2 + lVar12 * 0x48 + 0x40);
              if (lVar12 == 0) {
                uVar20 = (uint)pFVar13 | 4;
                local_88 = (TReferenceControllerBase<1> *)0x0;
                puVar15 = &local_90;
                pFVar19 = pFVar16;
              }
              else {
                pFVar19 = *(FNiagaraDataSetCompiledData **)(lVar12 + 0x38);
                uVar20 = (uint)pFVar13 | 2;
                local_78 = *(TReferenceControllerBase<1> **)(lVar12 + 0x40);
                if (local_78 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  local_78->SharedReferenceCount =
                       (atomic<int>)((int)local_78->SharedReferenceCount + 1);
                  UNLOCK();
                }
                puVar15 = &local_80;
              }
              pTVar4 = (TReferenceControllerBase<1> *)puVar15[1];
              puVar15[1] = 0;
              *puVar15 = 0;
              if ((uVar20 & 4) != 0) {
                uVar20 = uVar20 & 0xfffffffb;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_88);
              }
              if ((uVar20 & 2) != 0) {
                uVar20 = uVar20 & 0xfffffffd;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_78);
              }
              pFVar13 = (FCachedVariables *)(ulonglong)uVar20;
              if (pFVar19 != (FNiagaraDataSetCompiledData *)0x0) {
                pFVar16 = (FNiagaraDataSetCompiledData *)
                          (pFVar19->VariableLayouts).AllocatorInstance.Data;
              }
              local_c8 = pFVar16;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar4);
              pFVar16 = local_c8;
            }
            else {
              lVar12 = (longlong)(int)local_res18[0];
              if ((-1 < (int)local_res18[0]) &&
                 (iVar10 = (pUVar6->EmitterCompiledData).ArrayNum, (int)local_res18[0] < iVar10)) {
                uVar20 = uVar11;
                if ((int)local_res18[0] < iVar10) {
                  uVar20 = ~local_res18[0] >> 0x1f;
                }
                if ((uVar20 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar5 = (code *)swi(3);
                  pFVar13 = (FCachedVariables *)(*pcVar5)();
                  return pFVar13;
                }
                pFVar16 = (FNiagaraDataSetCompiledData *)
                          (*(longlong *)
                            ((pUVar6->EmitterCompiledData).AllocatorInstance.Data + lVar12 * 0x10) +
                          0xf0);
              }
            }
            local_c8 = pFVar16;
            if (local_c8 != (FNiagaraDataSetCompiledData *)0x0) {
              local_68.CachedVariables = &local_e0;
              local_68.iEmitter = (int *)local_res18;
              local_68.EmitterCompiledData = &local_c8;
              FindVariablesByWildcard<TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_>,_NiagaraDebugLocal::GetCachedVariables_::__l22::<lambda_1>_>
                        (&local_c8->Variables,&Settings.ParticlesVariables,&local_68);
              pFVar7 = local_e0;
              lVar12 = (longlong)(int)local_res18[0];
              uVar20 = uVar11;
              if ((int)local_res18[0] < (local_e0->ParticleVariables).ArrayNum) {
                uVar20 = ~local_res18[0] >> 0x1f;
              }
              if ((uVar20 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar5 = (code *)swi(3);
                pFVar13 = (FCachedVariables *)(*pcVar5)();
                return pFVar13;
              }
              if (0 < *(int *)((pFVar7->ParticleVariables).AllocatorInstance.Data +
                              lVar12 * 0x10 + 8)) {
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
                  ::FName::FName(&::PositionName,L"Position");
                  _Init_thread_footer(&::_TSS1);
                }
                pFVar7 = local_e0;
                lVar12 = (longlong)(int)local_res18[0];
                if ((int)local_res18[0] < (local_e0->ParticlePositionAccessors).ArrayNum) {
                  uVar11 = ~local_res18[0] >> 0x1f;
                }
                if ((uVar11 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar5 = (code *)swi(3);
                  pFVar13 = (FCachedVariables *)(*pcVar5)();
                  return pFVar13;
                }
                FNiagaraDataSetAccessorFloat<FNiagaraPosition>::Init
                          ((FNiagaraDataSetAccessorFloat<FNiagaraPosition> *)
                           ((pFVar7->ParticlePositionAccessors).AllocatorInstance.Data + lVar12 * 8)
                           ,local_c8,::PositionName);
              }
            }
          }
        }
        local_res18[0] = local_res18[0] + 1;
      } while ((int)local_res18[0] < iVar9);
    }
  }
  return local_e0;
LAB_1492a0d76:
  pFVar2 = (local_e0->EngineVariables).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)local_e8) &&
      ((FScriptContainerElement *)local_e8 <
       pFVar2 + (longlong)(local_e0->EngineVariables).ArrayMax * 4)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar5 = (code *)swi(3);
    pFVar13 = (FCachedVariables *)(*pcVar5)();
    return pFVar13;
  }
  iVar9 = (pFVar7->EngineVariables).ArrayNum;
  piVar1 = &(pFVar7->EngineVariables).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(pFVar7->EngineVariables).AllocatorInstance,piVar1);
  }
  (pFVar7->EngineVariables).ArrayNum = iVar9 + 1;
  *(uint *)((pFVar7->EngineVariables).AllocatorInstance.Data + (longlong)iVar9 * 4) = local_e8[0];
LAB_1492a0e15:
  local_e8[0] = local_e8[0] + 1;
  if (2 < local_e8[0]) goto LAB_1492a0e2a;
  goto LAB_1492a0d00;
}

// GetFont @ 1492a4170

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UFont * __cdecl NiagaraDebugLocal::GetFont(ENiagaraDebugHudFont param_1)

{
  UFont *pUVar1;
  
  if ((param_1 != Small) && (param_1 == Normal)) {
    return (GEngine->SmallFont).field0_0x0.DebugPtr;
  }
  pUVar1 = UEngine::GetTinyFont();
  return pUVar1;
}

// GetMillisecondsToPerfUnits @ 1492a4fe0

double __cdecl NiagaraDebugLocal::GetMillisecondsToPerfUnits(void)

{
  if (Settings.PerfUnits == Milliseconds) {
    return __real_3f50624dd2f1a9fc;
  }
  return __real_3ff0000000000000;
}

// GetStringSize @ 1492a7fd0

TVector2<float> __cdecl NiagaraDebugLocal::GetStringSize(UFont *param_1,wchar_t *param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  wchar_t wVar4;
  wchar_t *pwVar5;
  wchar_t *in_R8;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_res8;
  float local_res18 [4];
  
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  param_1->_padding_ = (longlong)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  fVar6 = UFont::GetMaxCharHeight((UFont *)param_2);
  wVar4 = *in_R8;
  pwVar5 = (wchar_t *)0x0;
  if (wVar4 != L'\0') {
    fVar8 = local_res8._4_4_;
    fVar9 = (float)local_res8;
    do {
      if (wVar4 == L'\n') {
        fVar9 = 0.0;
        fVar8 = fVar8 + fVar6;
        pwVar5 = (wchar_t *)0x0;
      }
      else {
        UFont::GetCharSize((UFont *)param_2,wVar4,(float *)&local_res8,local_res18);
        cVar3 = '\0';
        if (pwVar5 != (wchar_t *)0x0) {
          cVar3 = UFont::GetCharKerning((UFont *)param_2,*pwVar5,*in_R8);
        }
        fVar9 = fVar9 + (float)(int)cVar3 + (float)local_res8;
        fVar7 = *(float *)&param_1->_padding_;
        if (*(float *)&param_1->_padding_ <= fVar9) {
          fVar7 = fVar9;
        }
        fVar1 = *(float *)((longlong)&param_1->_padding_ + 4);
        fVar2 = local_res18[0] + fVar8;
        if (local_res18[0] + fVar8 <= fVar1) {
          fVar2 = fVar1;
        }
        *(float *)&param_1->_padding_ = fVar7;
        *(float *)((longlong)&param_1->_padding_ + 4) = fVar2;
        pwVar5 = in_R8;
      }
      wVar4 = in_R8[1];
      in_R8 = in_R8 + 1;
    } while (wVar4 != L'\0');
  }
  return (TVector2<float>)(TVector2<float>_u_0)param_1;
}

// GetTextLocation @ 1492a8230

TTuple<UE::Math::TVector2<float>,UE::Math::TVector2<float>_> * __cdecl
NiagaraDebugLocal::GetTextLocation
          (TTuple<UE::Math::TVector2<float>,UE::Math::TVector2<float>_> *__return_storage_ptr__,
          UFont *param_1,wchar_t *param_2,FNiagaraDebugHudTextOptions *param_3,
          TVector2<float> param_4)

{
  float fVar1;
  float local_res8;
  float fStackX_c;
  float local_res20;
  float fStackX_24;
  
  GetStringSize((UFont *)&local_res20,(wchar_t *)param_1);
  local_res8 = (float)(param_3->ScreenOffset).field0_0x0._s_0.X + param_4.field0_0x0._s_0.X;
  fStackX_c = (float)(param_3->ScreenOffset).field0_0x0._s_0.Y + param_4.field0_0x0._s_0.Y;
  if (param_3->HorizontalAlignment == Center) {
    fVar1 = local_res20 * __real_3f000000;
LAB_1492a829e:
    local_res8 = local_res8 - fVar1;
  }
  else {
    fVar1 = local_res20;
    if (param_3->HorizontalAlignment == Right) goto LAB_1492a829e;
  }
  if (param_3->VerticalAlignment == Center) {
    fVar1 = fStackX_24 * __real_3f000000;
  }
  else {
    fVar1 = fStackX_24;
    if (param_3->VerticalAlignment != Bottom) goto LAB_1492a82cc;
  }
  fStackX_c = fStackX_c - fVar1;
LAB_1492a82cc:
  *(ulonglong *)__return_storage_ptr__ = CONCAT44(fStackX_24,local_res20);
  *(ulonglong *)&__return_storage_ptr__->field_0x8 = CONCAT44(fStackX_c,local_res8);
  return __return_storage_ptr__;
}

// GetVersionedName @ 1492a8940

FName __cdecl GetVersionedName(FString *param_1,FNiagaraAssetVersion *param_2)

{
  FName *pFVar1;
  int iVar2;
  FName local_res8 [4];
  FString local_18;
  
  FString::PrintfImpl(&local_18,L"%s_%i_%i");
  iVar2 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  pFVar1 = FName::FName(local_res8,iVar2,(wchar_t *)local_18.Data.AllocatorInstance.Data,FNAME_Add);
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)*pFVar1;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (FName)param_1;
}

// InterpolatePoints @ 1492acdf0

TOptional<UE::Math::TVector<double>_> * __cdecl
NiagaraEditorPreviewActorPrivate::InterpolatePoints
          (TOptional<UE::Math::TVector<double>_> *__return_storage_ptr__,float param_1,
          TArrayView<UE::Math::TVector<double>_const_,int> *param_2,
          ENiagaraEditorPreviewActorPlaybackType param_3,double param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  TVector<double> *pTVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  double local_f8;
  double local_e0;
  
  dVar5 = __real_3fe0000000000000;
  iVar9 = param_2->ArrayNum;
  if (iVar9 == 0) {
    __return_storage_ptr__->bIsSet = false;
    return __return_storage_ptr__;
  }
  iVar10 = iVar9 + -1;
  if (param_3 != Once) {
    if (param_3 == Looping) {
      dVar17 = (double)iVar9 * (double)param_1;
      iVar10 = (int)((longlong)ROUND((dVar17 + dVar17) - __real_3fe0000000000000) >> 1) + iVar9;
      pTVar7 = TArrayView<UE::Math::TVector<double>_const_,int>::operator[]
                         (param_2,(iVar10 + -1) % iVar9);
      local_f8 = (pTVar7->field0_0x0)._s_0.Z;
      uVar26 = *(undefined4 *)&pTVar7->field0_0x0;
      uVar27 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 4);
      uVar28 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 8);
      uVar29 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 0xc);
      pTVar7 = TArrayView<UE::Math::TVector<double>_const_,int>::operator[](param_2,iVar10 % iVar9);
      local_e0 = (pTVar7->field0_0x0)._s_0.Z;
      uVar22 = *(undefined4 *)&pTVar7->field0_0x0;
      uVar23 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 4);
      uVar24 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 8);
      uVar25 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 0xc);
      pTVar7 = TArrayView<UE::Math::TVector<double>_const_,int>::operator[]
                         (param_2,(iVar10 + 1) % iVar9);
      uVar18 = *(undefined4 *)&pTVar7->field0_0x0;
      uVar19 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 4);
      uVar20 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 8);
      uVar21 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 0xc);
      dVar12 = (pTVar7->field0_0x0)._s_0.Z;
      iVar6 = (iVar10 + 2) % iVar9;
      goto LAB_1492ad099;
    }
    if (param_3 == PingPong) {
      dVar17 = (double)param_1 * (double)iVar10;
      uVar11 = (longlong)ROUND((dVar17 + dVar17) - __real_3fe0000000000000) >> 1;
      iVar10 = (int)uVar11;
      iVar8 = (iVar10 + -1) % iVar9;
      iVar6 = -iVar8;
      if (iVar6 < 0) {
        iVar6 = iVar8;
      }
      pTVar7 = TArrayView<UE::Math::TVector<double>_const_,int>::operator[](param_2,iVar6);
      local_f8 = (pTVar7->field0_0x0)._s_0.Z;
      uVar26 = *(undefined4 *)&pTVar7->field0_0x0;
      uVar27 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 4);
      uVar28 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 8);
      uVar29 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 0xc);
      iVar8 = (int)((longlong)((ulonglong)(uint)(iVar10 >> 0x1f) << 0x20 | uVar11 & 0xffffffff) %
                   (longlong)iVar9);
      iVar6 = -iVar8;
      if (iVar6 < 0) {
        iVar6 = iVar8;
      }
      pTVar7 = TArrayView<UE::Math::TVector<double>_const_,int>::operator[](param_2,iVar6);
      local_e0 = (pTVar7->field0_0x0)._s_0.Z;
      uVar22 = *(undefined4 *)&pTVar7->field0_0x0;
      uVar23 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 4);
      uVar24 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 8);
      uVar25 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 0xc);
      iVar8 = (iVar10 + 1) % iVar9;
      iVar6 = -iVar8;
      if (iVar6 < 0) {
        iVar6 = iVar8;
      }
      pTVar7 = TArrayView<UE::Math::TVector<double>_const_,int>::operator[](param_2,iVar6);
      uVar18 = *(undefined4 *)&pTVar7->field0_0x0;
      uVar19 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 4);
      uVar20 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 8);
      uVar21 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 0xc);
      dVar12 = (pTVar7->field0_0x0)._s_0.Z;
      iVar9 = (iVar10 + 2) % iVar9;
      iVar6 = -iVar9;
      if (iVar6 < 0) {
        iVar6 = iVar9;
      }
      goto LAB_1492ad099;
    }
  }
  dVar17 = (double)param_1 * (double)iVar10;
  iVar6 = (int)((longlong)ROUND((dVar17 + dVar17) - __real_3fe0000000000000) >> 1);
  if (iVar6 + -1 < iVar10) {
    iVar9 = iVar6;
  }
  iVar8 = 0;
  if (0 < iVar9 + -1) {
    iVar8 = iVar9 + -1;
  }
  pTVar7 = TArrayView<UE::Math::TVector<double>_const_,int>::operator[](param_2,iVar8);
  local_f8 = (pTVar7->field0_0x0)._s_0.Z;
  uVar26 = *(undefined4 *)&pTVar7->field0_0x0;
  uVar27 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 4);
  uVar28 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 8);
  uVar29 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 0xc);
  iVar9 = iVar10;
  if (iVar6 < iVar10) {
    iVar9 = iVar6;
  }
  iVar8 = 0;
  if (0 < iVar9) {
    iVar8 = iVar9;
  }
  pTVar7 = TArrayView<UE::Math::TVector<double>_const_,int>::operator[](param_2,iVar8);
  local_e0 = (pTVar7->field0_0x0)._s_0.Z;
  uVar22 = *(undefined4 *)&pTVar7->field0_0x0;
  uVar23 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 4);
  uVar24 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 8);
  uVar25 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 0xc);
  iVar9 = iVar10;
  if (iVar6 + 1 < iVar10) {
    iVar9 = iVar6 + 1;
  }
  iVar8 = 0;
  if (0 < iVar9) {
    iVar8 = iVar9;
  }
  pTVar7 = TArrayView<UE::Math::TVector<double>_const_,int>::operator[](param_2,iVar8);
  uVar18 = *(undefined4 *)&pTVar7->field0_0x0;
  uVar19 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 4);
  uVar20 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 8);
  uVar21 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 0xc);
  dVar12 = (pTVar7->field0_0x0)._s_0.Z;
  if (iVar6 + 2 < iVar10) {
    iVar10 = iVar6 + 2;
  }
  iVar6 = 0;
  if (0 < iVar10) {
    iVar6 = iVar10;
  }
LAB_1492ad099:
  pTVar7 = TArrayView<UE::Math::TVector<double>_const_,int>::operator[](param_2,iVar6);
  dVar1 = (pTVar7->field0_0x0)._s_0.Z;
  dVar3 = (pTVar7->field0_0x0)._s_0.X;
  dVar4 = (pTVar7->field0_0x0)._s_0.Y;
  dVar13 = (double)trunc();
  dVar14 = (double)trunc();
  dVar14 = (dVar17 - dVar13) - dVar14;
  dVar15 = dVar14 * dVar14;
  dVar17 = dVar15 * dVar14;
  dVar13 = (dVar17 - dVar15) * param_4;
  dVar2 = dVar15 * __real_4008000000000000 - (dVar17 + dVar17);
  dVar16 = ((dVar17 + dVar17) - dVar15 * __real_4008000000000000) + __real_3ff0000000000000;
  dVar17 = ((dVar17 - (dVar15 + dVar15)) + dVar14) * param_4;
  (__return_storage_ptr__->TypedValue).field0_0x0._s_0.X =
       ((dVar3 - (double)CONCAT44(uVar23,uVar22)) * dVar13 +
        (double)CONCAT44(uVar23,uVar22) * dVar16 +
       ((double)CONCAT44(uVar19,uVar18) - (double)CONCAT44(uVar27,uVar26)) * dVar17 +
       (double)CONCAT44(uVar19,uVar18) * dVar2) * dVar5;
  (__return_storage_ptr__->TypedValue).field0_0x0._s_0.Y =
       ((dVar4 - (double)CONCAT44(uVar25,uVar24)) * dVar13 + (double)CONCAT44(uVar21,uVar20) * dVar2
       + ((double)CONCAT44(uVar21,uVar20) - (double)CONCAT44(uVar29,uVar28)) * dVar17 +
         (double)CONCAT44(uVar25,uVar24) * dVar16) * dVar5;
  (__return_storage_ptr__->TypedValue).field0_0x0._s_0.Z =
       ((dVar1 - local_e0) * dVar13 + local_e0 * dVar16 +
       (dVar12 - local_f8) * dVar17 + dVar12 * dVar2) * dVar5;
  __return_storage_ptr__->bIsSet = true;
  return __return_storage_ptr__;
}

// InvalidatePerfBaselines @ 1492ad2b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl InvalidatePerfBaselines(void)

{
  code *pcVar1;
  bool bVar2;
  EInternalObjectFlags EVar3;
  uint uVar4;
  UClass *pUVar5;
  longlong lVar6;
  TObjectIterator<UNiagaraEffectType> local_28;
  
  local_28.Index = 0xffffffff;
  local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ObjectArray.ArrayNum = 0;
  local_28.ObjectArray.ArrayMax = 0;
  EVar3 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar5 = UNiagaraEffectType::StaticClass();
  GetObjectsOfClass(pUVar5,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                    EVar3 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<UNiagaraEffectType>::Advance(&local_28);
    lVar6 = (longlong)local_28.Index;
    if (local_28.Index < 0) break;
    if (local_28.ObjectArray.ArrayNum <= local_28.Index) break;
    uVar4 = 0;
    if (local_28.Index < local_28.ObjectArray.ArrayNum) {
      uVar4 = (uint)~local_28.Index >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    lVar6 = *(longlong *)(local_28.ObjectArray.AllocatorInstance.Data + lVar6 * 8);
    *(undefined8 *)(lVar6 + 0x98) = 0;
    *(undefined8 *)(lVar6 + 0x90) = 0;
    *(undefined8 *)(lVar6 + 0x80) = 0;
    *(undefined8 *)(lVar6 + 0x88) = 0;
  }
  if (local_28.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
  }
  return;
}

// NeedsGpuStatCapture @ 1492ae220

bool __cdecl NiagaraDebugLocal::NeedsGpuStatCapture(void)

{
  if ((Settings.bOverviewEnabled) &&
     (((Settings.OverviewMode - Performance & 0xfffffffd) == 0 ||
      ((Settings.OverviewMode == PerformanceGraph && (Settings.PerfGraphMode == GPU)))))) {
    return true;
  }
  return false;
}

// NiagaraTestCrash @ 1492ae5a0

void __cdecl NiagaraTestCrash(void)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmitterInstanceImpl.cpp"
                     ,0x4b5,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// SetupBindings @ 1492b60e0

void __cdecl
NiagaraDecalRendererPropertiesLocal::SetupBindings(UNiagaraDecalRendererProperties *param_1)

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
  pFVar5 = UNiagaraDecalRendererProperties::GetDecalOrientationVariable
                     ((FNiagaraVariable *)local_28);
  pFVar6 = UNiagaraDecalRendererProperties::GetDecalOrientationVariable(&local_48);
  FNiagaraVariableAttributeBinding::Setup
            (&param_1->DecalOrientationBinding,(FNiagaraVariableBase *)pFVar6,pFVar5,Particles);
  if (local_48.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.VarData.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_28._16_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._16_8_);
  }
  pFVar5 = UNiagaraDecalRendererProperties::GetDecalSizeVariable(&local_48);
  pFVar6 = UNiagaraDecalRendererProperties::GetDecalSizeVariable((FNiagaraVariable *)local_28);
  FNiagaraVariableAttributeBinding::Setup
            (&param_1->DecalSizeBinding,(FNiagaraVariableBase *)pFVar6,pFVar5,Particles);
  if ((FScriptContainerElement *)local_28._16_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._16_8_);
  }
  if (local_48.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.VarData.AllocatorInstance.Data);
  }
  pFVar5 = UNiagaraDecalRendererProperties::GetDecalFadeVariable(&local_48);
  pFVar6 = UNiagaraDecalRendererProperties::GetDecalFadeVariable((FNiagaraVariable *)local_28);
  FNiagaraVariableAttributeBinding::Setup
            (&param_1->DecalFadeBinding,(FNiagaraVariableBase *)pFVar6,pFVar5,Particles);
  if ((FScriptContainerElement *)local_28._16_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._16_8_);
  }
  if (local_48.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.VarData.AllocatorInstance.Data);
  }
  pFVar4 = FNiagaraConstants::GetAttributeDefaultBinding
                     ((FNiagaraVariableAttributeBinding *)local_28,
                      (FNiagaraVariableBase *)&INiagaraModule::Particles_UniqueID);
  FVar1 = (pFVar4->ParamMapVariable).Name;
  (param_1->DecalSortOrderBinding).RootName = pFVar4->RootName;
  (param_1->DecalSortOrderBinding).ParamMapVariable.Name = FVar1;
  uVar2 = *(undefined8 *)&(pFVar4->DataSetName).Number;
  *(undefined8 *)&(param_1->DecalSortOrderBinding).ParamMapVariable.TypeDefHandle =
       *(undefined8 *)&(pFVar4->ParamMapVariable).TypeDefHandle;
  *(undefined8 *)&(param_1->DecalSortOrderBinding).DataSetName.Number = uVar2;
  pFVar4 = FNiagaraConstants::GetAttributeDefaultBinding
                     ((FNiagaraVariableAttributeBinding *)local_28,
                      (FNiagaraVariableBase *)&INiagaraModule::Particles_Color);
  FVar1 = (pFVar4->ParamMapVariable).Name;
  (param_1->DecalColorBinding).RootName = pFVar4->RootName;
  (param_1->DecalColorBinding).ParamMapVariable.Name = FVar1;
  uVar2 = *(undefined8 *)&(pFVar4->DataSetName).Number;
  *(undefined8 *)&(param_1->DecalColorBinding).ParamMapVariable.TypeDefHandle =
       *(undefined8 *)&(pFVar4->ParamMapVariable).TypeDefHandle;
  *(undefined8 *)&(param_1->DecalColorBinding).DataSetName.Number = uVar2;
  pFVar5 = UNiagaraDecalRendererProperties::GetDecalVisibleVariable(&local_48);
  pFVar6 = UNiagaraDecalRendererProperties::GetDecalVisibleVariable((FNiagaraVariable *)local_28);
  FNiagaraVariableAttributeBinding::Setup
            (&param_1->DecalVisibleBinding,(FNiagaraVariableBase *)pFVar6,pFVar5,Particles);
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
  return;
}

// StringToVector @ 1492b69c0

TVector<double> * __cdecl
NiagaraDebugLocal::StringToVector
          (TVector<double> *__return_storage_ptr__,FString *param_1,TVector<double> *param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  wchar_t *_Str;
  double dVar3;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  ::FString::ParseIntoArray(param_1,&local_18,L",",true);
  _Str = L"";
  if (local_18.ArrayNum < 1) {
    dVar3 = (param_2->field0_0x0)._s_0.X;
  }
  else {
    if (*(int *)(local_18.AllocatorInstance.Data + 8) == 0) {
      pwVar2 = L"";
    }
    else {
      pwVar2 = *(wchar_t **)local_18.AllocatorInstance.Data;
    }
    dVar3 = _wtof(pwVar2);
    dVar3 = (double)(float)dVar3;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar3;
  if (local_18.ArrayNum < 2) {
    dVar3 = (param_2->field0_0x0)._s_0.Y;
    iVar1 = local_18.ArrayNum;
  }
  else {
    if (*(int *)(local_18.AllocatorInstance.Data + 0x18) == 0) {
      pwVar2 = L"";
    }
    else {
      pwVar2 = *(wchar_t **)(local_18.AllocatorInstance.Data + 0x10);
    }
    dVar3 = _wtof(pwVar2);
    dVar3 = (double)(float)dVar3;
    iVar1 = local_18.ArrayNum;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
  if (iVar1 < 3) {
    dVar3 = (param_2->field0_0x0)._s_0.Z;
  }
  else {
    if (*(int *)(local_18.AllocatorInstance.Data + 0x28) != 0) {
      _Str = *(wchar_t **)(local_18.AllocatorInstance.Data + 0x20);
    }
    dVar3 = _wtof(_Str);
    dVar3 = (double)(float)dVar3;
    iVar1 = local_18.ArrayNum;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar3;
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,iVar1);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Z_Construct_UClass_ANiagaraEditorPreviewActor_NoRegister @ 1492c0d80

UClass * __cdecl Z_Construct_UClass_ANiagaraEditorPreviewActor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ANiagaraEditorPreviewActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraEditorPreviewActor",
               &Z_Registration_Info_UClass_ANiagaraEditorPreviewActor.InnerSingleton,
               ANiagaraEditorPreviewActor::StaticRegisterNativesANiagaraEditorPreviewActor,0x368,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ANiagaraEditorPreviewActor>,
               InternalVTableHelperCtorCaller<ANiagaraEditorPreviewActor>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ANiagaraEditorPreviewActor.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraDebugHUDSettings_NoRegister @ 1492c0e40

UClass * __cdecl Z_Construct_UClass_UNiagaraDebugHUDSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDebugHUDSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDebugHUDSettings",
               &Z_Registration_Info_UClass_UNiagaraDebugHUDSettings.InnerSingleton,
               UNiagaraDebugHUDSettings::StaticRegisterNativesUNiagaraDebugHUDSettings,0x290,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,
               L"EditorPerProjectUserSettings",InternalConstructor<UNiagaraDebugHUDSettings>,
               InternalVTableHelperCtorCaller<UNiagaraDebugHUDSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDebugHUDSettings.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraDecalRendererProperties_NoRegister @ 1492c0ef0

UClass * __cdecl Z_Construct_UClass_UNiagaraDecalRendererProperties_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDecalRendererProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDecalRendererProperties",
               &Z_Registration_Info_UClass_UNiagaraDecalRendererProperties.InnerSingleton,
               UNiagaraDecalRendererProperties::StaticRegisterNativesUNiagaraDecalRendererProperties
               ,0x248,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraDecalRendererProperties>,
               InternalVTableHelperCtorCaller<UNiagaraDecalRendererProperties>,local_res8,
               UNiagaraRendererProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDecalRendererProperties.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraEditorDataBase_NoRegister @ 1492c0fb0

UClass * __cdecl Z_Construct_UClass_UNiagaraEditorDataBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraEditorDataBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraEditorDataBase",
               &Z_Registration_Info_UClass_UNiagaraEditorDataBase.InnerSingleton,
               UNiagaraEditorDataBase::StaticRegisterNativesUNiagaraEditorDataBase,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraEditorDataBase>,
               InternalVTableHelperCtorCaller<UNiagaraEditorDataBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraEditorDataBase.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraEditorParametersAdapterBase_NoRegister @ 1492c1060

UClass * __cdecl Z_Construct_UClass_UNiagaraEditorParametersAdapterBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraEditorParametersAdapterBase.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraEditorParametersAdapterBase",
               &Z_Registration_Info_UClass_UNiagaraEditorParametersAdapterBase.InnerSingleton,
               UNiagaraEditorParametersAdapterBase::
               StaticRegisterNativesUNiagaraEditorParametersAdapterBase,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraEditorParametersAdapterBase>,
               InternalVTableHelperCtorCaller<UNiagaraEditorParametersAdapterBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraEditorParametersAdapterBase.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraEffectType_NoRegister @ 1492c1110

UClass * __cdecl Z_Construct_UClass_UNiagaraEffectType_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraEffectType.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraEffectType",
               &Z_Registration_Info_UClass_UNiagaraEffectType.InnerSingleton,
               UNiagaraEffectType::StaticRegisterNativesUNiagaraEffectType,200,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Niagara",
               InternalConstructor<UNiagaraEffectType>,
               InternalVTableHelperCtorCaller<UNiagaraEffectType>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraEffectType.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraEmitterBase_NoRegister @ 1492c11c0

UClass * __cdecl Z_Construct_UClass_UNiagaraEmitterBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraEmitterBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraEmitterBase",
               &Z_Registration_Info_UClass_UNiagaraEmitterBase.InnerSingleton,
               UNiagaraEmitterBase::StaticRegisterNativesUNiagaraEmitterBase,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraEmitterBase>,
               InternalVTableHelperCtorCaller<UNiagaraEmitterBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraEmitterBase.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraEmitter_NoRegister @ 1492c1270

UClass * __cdecl Z_Construct_UClass_UNiagaraEmitter_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraEmitter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraEmitter",
               &Z_Registration_Info_UClass_UNiagaraEmitter.InnerSingleton,
               UNiagaraEmitter::StaticRegisterNativesUNiagaraEmitter,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraEmitter>,
               InternalVTableHelperCtorCaller<UNiagaraEmitter>,local_res8,
               UNiagaraEmitterBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraEmitter.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraSignificanceHandlerAge_NoRegister @ 1492c1330

UClass * __cdecl Z_Construct_UClass_UNiagaraSignificanceHandlerAge_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraSignificanceHandlerAge.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraSignificanceHandlerAge",
               &Z_Registration_Info_UClass_UNiagaraSignificanceHandlerAge.InnerSingleton,
               UNiagaraSignificanceHandlerAge::StaticRegisterNativesUNiagaraSignificanceHandlerAge,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraSignificanceHandlerAge>,
               InternalVTableHelperCtorCaller<UNiagaraSignificanceHandlerAge>,local_res8,
               UNiagaraSignificanceHandler::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraSignificanceHandlerAge.InnerSingleton;
}

// Z_Construct_UClass_UNiagaraSignificanceHandlerDistance_NoRegister @ 1492c13f0

UClass * __cdecl Z_Construct_UClass_UNiagaraSignificanceHandlerDistance_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraSignificanceHandlerDistance.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraSignificanceHandlerDistance",
               &Z_Registration_Info_UClass_UNiagaraSignificanceHandlerDistance.InnerSingleton,
               UNiagaraSignificanceHandlerDistance::
               StaticRegisterNativesUNiagaraSignificanceHandlerDistance,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraSignificanceHandlerDistance>,
               InternalVTableHelperCtorCaller<UNiagaraSignificanceHandlerDistance>,local_res8,
               UNiagaraSignificanceHandler::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraSignificanceHandlerDistance.InnerSingleton;
}

// Z_Construct_UScriptStruct_FNiagaraDebuggerAcceptConnection @ 1492c14b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraDebuggerAcceptConnection(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraDebuggerAcceptConnection.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraDebuggerAcceptConnection.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraDebuggerAcceptConnection_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraDebuggerAcceptConnection.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraDebuggerAcceptConnection.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraDebuggerConnectionClosed @ 1492c1530

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraDebuggerConnectionClosed(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraDebuggerConnectionClosed.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraDebuggerConnectionClosed.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraDebuggerConnectionClosed_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraDebuggerConnectionClosed.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraDebuggerConnectionClosed.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand @ 1492c15b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraDebuggerOutlinerUpdate @ 1492c1630

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraDebuggerOutlinerUpdate(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraDebuggerOutlinerUpdate.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraDebuggerOutlinerUpdate.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraDebuggerOutlinerUpdate_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraDebuggerOutlinerUpdate.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraDebuggerOutlinerUpdate.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraDebuggerRequestConnection @ 1492c16b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraDebuggerRequestConnection(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraDebuggerRequestConnection.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraDebuggerRequestConnection.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraDebuggerRequestConnection_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraDebuggerRequestConnection.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraDebuggerRequestConnection.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides @ 1492c1730

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraDetailsLevelScaleOverrides.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraDetailsLevelScaleOverrides.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraDetailsLevelScaleOverrides.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraDetailsLevelScaleOverrides.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraEmitterHandle @ 1492c17b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraEmitterHandle(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraEmitterHandle.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraEmitterHandle.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraEmitterHandle.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FNiagaraEmitterHandle.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraGraphViewSettings @ 1492c1830

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraGraphViewSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraGraphViewSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraGraphViewSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraGraphViewSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraGraphViewSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings @ 1492c18b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraOutlinerCaptureSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraOutlinerCaptureSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraOutlinerCaptureSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraOutlinerCaptureSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraRequestSimpleClientInfoMessage @ 1492c1930

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraRequestSimpleClientInfoMessage(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraRequestSimpleClientInfoMessage.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraRequestSimpleClientInfoMessage.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraRequestSimpleClientInfoMessage_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraRequestSimpleClientInfoMessage.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraRequestSimpleClientInfoMessage.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo @ 1492c19b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraSimpleClientInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraSimpleClientInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraSimpleClientInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraSimpleClientInfo.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride @ 1492c1a30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraSystemScalabilityOverride.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraSystemScalabilityOverride.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraSystemScalabilityOverride.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraSystemScalabilityOverride.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureReply @ 1492c1ab0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureReply(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraSystemSimCacheCaptureReply.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraSystemSimCacheCaptureReply.InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureReply_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraSystemSimCacheCaptureReply.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraSystemSimCacheCaptureReply.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureRequest @ 1492c1b30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureRequest(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraSystemSimCacheCaptureRequest.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNiagaraSystemSimCacheCaptureRequest.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureRequest_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FNiagaraSystemSimCacheCaptureRequest.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNiagaraSystemSimCacheCaptureRequest.InnerSingleton;
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

// GeneratePerfBaselinesDelegate'' @ 150412540

void __cdecl
`dynamic_atexit_destructor_for_'UNiagaraEffectType::GeneratePerfBaselinesDelegate__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &UNiagaraEffectType::GeneratePerfBaselinesDelegate,(FWriteAccessScope *)&local_28);
  if ((UNiagaraEffectType::GeneratePerfBaselinesDelegate._16_4_ != 0) &&
     (UNiagaraEffectType::GeneratePerfBaselinesDelegate._8_8_ != 0)) {
    (*(code *)**(undefined8 **)UNiagaraEffectType::GeneratePerfBaselinesDelegate._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&UNiagaraEffectType::GeneratePerfBaselinesDelegate.field_0x8,0,0
               ,0x10);
    UNiagaraEffectType::GeneratePerfBaselinesDelegate._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (UNiagaraEffectType::GeneratePerfBaselinesDelegate._8_8_ != 0) {
    FMemory::Free((void *)UNiagaraEffectType::GeneratePerfBaselinesDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&UNiagaraEffectType::GeneratePerfBaselinesDelegate);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableEmitterChangeIdMergeLogging'' @ 1504125e0

void __cdecl _dynamic_atexit_destructor_for__CVarEnableEmitterChangeIdMergeLogging__(void)

{
  CVarEnableEmitterChangeIdMergeLogging._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarEnableEmitterChangeIdMergeLogging);
  return;
}

// `dynamic_atexit_destructor_for_'CVarForceNiagaraCompileOnLoad'' @ 150412600

void __cdecl _dynamic_atexit_destructor_for__CVarForceNiagaraCompileOnLoad__(void)

{
  CVarForceNiagaraCompileOnLoad._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarForceNiagaraCompileOnLoad);
  return;
}

// `dynamic_atexit_destructor_for_'CVarForceNiagaraCompileToFail'' @ 150412620

void __cdecl _dynamic_atexit_destructor_for__CVarForceNiagaraCompileToFail__(void)

{
  CVarForceNiagaraCompileToFail._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarForceNiagaraCompileToFail);
  return;
}

// `dynamic_atexit_destructor_for_'CVarForceNiagaraMergeOnLoad'' @ 150412640

void __cdecl _dynamic_atexit_destructor_for__CVarForceNiagaraMergeOnLoad__(void)

{
  CVarForceNiagaraMergeOnLoad._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarForceNiagaraMergeOnLoad);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaxNiagaraCPUParticlesPerEmitter'' @ 150412660

void __cdecl _dynamic_atexit_destructor_for__CVarMaxNiagaraCPUParticlesPerEmitter__(void)

{
  CVarMaxNiagaraCPUParticlesPerEmitter._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarMaxNiagaraCPUParticlesPerEmitter);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaxNiagaraGPUParticlesSpawnPerFrame'' @ 150412680

void __cdecl _dynamic_atexit_destructor_for__CVarMaxNiagaraGPUParticlesSpawnPerFrame__(void)

{
  CVarMaxNiagaraGPUParticlesSpawnPerFrame._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarMaxNiagaraGPUParticlesSpawnPerFrame);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraDumpNans'' @ 1504126a0

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraDumpNans__(void)

{
  CVarNiagaraDumpNans._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNiagaraDumpNans);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraDumpNansOnce'' @ 1504126c0

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraDumpNansOnce__(void)

{
  CVarNiagaraDumpNansOnce._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNiagaraDumpNansOnce);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraDumpParticleData'' @ 1504126e0

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraDumpParticleData__(void)

{
  CVarNiagaraDumpParticleData._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNiagaraDumpParticleData);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraEmitterComputePSOPrecacheMode'' @ 150412700

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraEmitterComputePSOPrecacheMode__(void)

{
  CVarNiagaraEmitterComputePSOPrecacheMode._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNiagaraEmitterComputePSOPrecacheMode);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraEmitterMaxGPUBufferElements'' @ 150412720

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraEmitterMaxGPUBufferElements__(void)

{
  CVarNiagaraEmitterMaxGPUBufferElements._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNiagaraEmitterMaxGPUBufferElements);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraRuntimeCycleHistorySize'' @ 150412740

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraRuntimeCycleHistorySize__(void)

{
  CVarNiagaraRuntimeCycleHistorySize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNiagaraRuntimeCycleHistorySize)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarNiagaraShowAllocationWarnings'' @ 150412760

void __cdecl _dynamic_atexit_destructor_for__CVarNiagaraShowAllocationWarnings__(void)

{
  CVarNiagaraShowAllocationWarnings._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNiagaraShowAllocationWarnings);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNumFramesBetweenRuntimePerfSamples'' @ 150412780

void __cdecl _dynamic_atexit_destructor_for__CVarNumFramesBetweenRuntimePerfSamples__(void)

{
  CVarNumFramesBetweenRuntimePerfSamples._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarNumFramesBetweenRuntimePerfSamples);
  return;
}

// `dynamic_atexit_destructor_for_'CVarTriggerCrash'' @ 1504127a0

void __cdecl _dynamic_atexit_destructor_for__CVarTriggerCrash__(void)

{
  CVarTriggerCrash._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarTriggerCrash);
  return;
}

// `dynamic_atexit_destructor_for_'CmdDebugHud'' @ 1504127c0

void __cdecl NiagaraDebugLocal::_dynamic_atexit_destructor_for__CmdDebugHud__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CmdDebugHud);
  return;
}

// `dynamic_atexit_destructor_for_'CmdNiagaraDebugHud'' @ 1504127e0

void __cdecl NiagaraDebugLocal::_dynamic_atexit_destructor_for__CmdNiagaraDebugHud__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CmdNiagaraDebugHud);
  return;
}

// `dynamic_atexit_destructor_for_'CmdSpawnComponent'' @ 150412800

void __cdecl NiagaraDebugLocal::_dynamic_atexit_destructor_for__CmdSpawnComponent__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CmdSpawnComponent);
  return;
}

// `dynamic_atexit_destructor_for_'CmdSpawnSystem'' @ 150412820

void __cdecl NiagaraDebugLocal::_dynamic_atexit_destructor_for__CmdSpawnSystem__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CmdSpawnSystem);
  return;
}

// `dynamic_atexit_destructor_for_'Dummy'' @ 150412840

void __cdecl
`UNiagaraEffectType::GetActiveEmitterScalabilitySettings'::__l2::
_dynamic_atexit_destructor_for__Dummy__(void)

{
  if (::Dummy.Platforms.CVarConditions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(::Dummy.Platforms.CVarConditions.AllocatorInstance.Data);
  }
  if (::Dummy.Platforms.DeviceProfileStates.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
    FMemory::Free(::Dummy.Platforms.DeviceProfileStates.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Dummy'' @ 150412880

void __cdecl
`UNiagaraEffectType::GetActiveSystemScalabilitySettings'::__l2::
_dynamic_atexit_destructor_for__Dummy__(void)

{
  if (::Dummy.Platforms.CVarConditions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(::Dummy.Platforms.CVarConditions.AllocatorInstance.Data);
  }
  if (::Dummy.Platforms.DeviceProfileStates.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
    FMemory::Free(::Dummy.Platforms.DeviceProfileStates.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Dummy'' @ 1504128c0

void __cdecl
`FVersionedNiagaraEmitterData::GetCurrentOverrideSettings'::__l2::
_dynamic_atexit_destructor_for__Dummy__(void)

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

// `dynamic_atexit_destructor_for_'EnableCVarWarning'' @ 150412900

void __cdecl
`FNiagaraDebugHud::DrawGpuComputeOverriew'::__l5::
_dynamic_atexit_destructor_for__EnableCVarWarning__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EnableCVarWarning.Data.AllocatorInstance.Data;
  if (EnableCVarWarning.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EnableCVarWarning.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'GCachedSystemVariables'' @ 150412920

void __cdecl NiagaraDebugLocal::_dynamic_atexit_destructor_for__GCachedSystemVariables__(void)

{
  GCachedSystemVariables._72_4_ = 0;
  if (GCachedSystemVariables._64_8_ != 0) {
    FMemory::Free((void *)GCachedSystemVariables._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,NiagaraDebugLocal::FCachedVariables>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GCachedSystemVariables);
  return;
}

// `dynamic_atexit_destructor_for_'GDebugConsoleCommands'' @ 150412960

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

void __cdecl NiagaraDebugLocal::_dynamic_atexit_destructor_for__GDebugConsoleCommands__(void)

{
  longlong *plVar1;
  longlong *plVar2;
  EObjectFlags *pEVar3;
  longlong lVar4;
  
  lVar4 = 0x20;
  pEVar3 = &Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Statics::StructParams.ObjectFlags;
  do {
    lVar4 = lVar4 + -1;
    if (*(longlong *)(pEVar3 + -0x1a) != 0) {
      plVar1 = *(longlong **)(pEVar3 + -0x10);
      plVar2 = (longlong *)(pEVar3 + -0x16);
      if (plVar1 != (longlong *)0x0) {
        plVar2 = plVar1;
      }
      (**(code **)(*plVar2 + 0x10))();
    }
    pEVar3 = pEVar3 + -0x10;
  } while (lVar4 != 0);
  return;
}

// `dynamic_atexit_destructor_for_'GDebugSpawnedComponents'' @ 1504129c0

void __cdecl NiagaraDebugLocal::_dynamic_atexit_destructor_for__GDebugSpawnedComponents__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GDebugSpawnedComponents.AllocatorInstance.Data;
  if (GDebugSpawnedComponents.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (GDebugSpawnedComponents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'GEngineVariables'' @ 1504129e0

void __cdecl NiagaraDebugLocal::_dynamic_atexit_destructor_for__GEngineVariables__(void)

{
  longlong *plVar1;
  
  if (GEngineVariables[2]._16_8_ != 0) {
    plVar1 = (longlong *)&GEngineVariables[2].field_0x20;
    if (GEngineVariables[2]._56_8_ != 0) {
      plVar1 = (longlong *)GEngineVariables[2]._56_8_;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (GEngineVariables[2]._0_8_ != 0) {
    FMemory::Free((void *)GEngineVariables[2]._0_8_);
  }
  if (GEngineVariables[1]._16_8_ != 0) {
    plVar1 = (longlong *)&GEngineVariables[1].field_0x20;
    if (GEngineVariables[1]._56_8_ != 0) {
      plVar1 = (longlong *)GEngineVariables[1]._56_8_;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (GEngineVariables[1]._0_8_ != 0) {
    FMemory::Free((void *)GEngineVariables[1]._0_8_);
  }
  if (GEngineVariables[0]._16_8_ != 0) {
    plVar1 = (longlong *)&GEngineVariables[0].field_0x20;
    if (GEngineVariables[0]._56_8_ != 0) {
      plVar1 = (longlong *)GEngineVariables[0]._56_8_;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (GEngineVariables[0]._0_8_ != 0) {
    FMemory::Free((void *)GEngineVariables[0]._0_8_);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'InvalidatePerfBaselinesCommand'' @ 150412aa0

void __cdecl _dynamic_atexit_destructor_for__InvalidatePerfBaselinesCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&InvalidatePerfBaselinesCommand);
  return;
}

// `dynamic_atexit_destructor_for_'LogNiagaraDebuggerClient'' @ 150412ac0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogNiagaraDebuggerClient__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogNiagaraDebuggerClient);
  return;
}

// `dynamic_atexit_destructor_for_'NoDataWarning'' @ 150412ae0

void __cdecl
`FNiagaraDebugHud::DrawGpuComputeOverriew'::__l5::_dynamic_atexit_destructor_for__NoDataWarning__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = NoDataWarning.Data.AllocatorInstance.Data;
  if (NoDataWarning.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (NoDataWarning.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'RTFramesGuard'' @ 150412b00

void __cdecl NiagaraDebugLocal::_dynamic_atexit_destructor_for__RTFramesGuard__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150412b07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&RTFramesGuard);
  return;
}

// `dynamic_atexit_destructor_for_'RendererPropertiesToDeferredInit'' @ 150412b20

void __cdecl
NiagaraDecalRendererPropertiesLocal::
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

// `dynamic_atexit_destructor_for_'Settings'' @ 150412b40

void __cdecl NiagaraDebugLocal::_dynamic_atexit_destructor_for__Settings__(void)

{
  FNiagaraDebugHUDSettingsData::~FNiagaraDebugHUDSettingsData(&Settings);
  return;
}

// `dynamic_atexit_destructor_for_'Variable'' @ 150412b60

void __cdecl
`UNiagaraDecalRendererProperties::GetDecalFadeVariable'::__l2::
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

// `dynamic_atexit_destructor_for_'Variable'' @ 150412b80

void __cdecl
`UNiagaraDecalRendererProperties::GetDecalOrientationVariable'::__l2::
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

// `dynamic_atexit_destructor_for_'Variable'' @ 150412ba0

void __cdecl
`UNiagaraDecalRendererProperties::GetDecalSizeVariable'::__l2::
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

// `dynamic_atexit_destructor_for_'Variable'' @ 150412bc0

void __cdecl
`UNiagaraDecalRendererProperties::GetDecalVisibleVariable'::__l2::
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

