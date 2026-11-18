// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 214

// `dynamic_initializer_for_'CDelayReachabilityIterations'' @ 140f21df0

void __cdecl _dynamic_initializer_for__CDelayReachabilityIterations__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CDelayReachabilityIterations,L"gc.DelayReachabilityIterations",
             &GDelayReachabilityIterations,
             L"Causes the Garbage Collector to delay incremental reachability iterations by the provided number of frames."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CDelayReachabilityIterations__);
  return;
}

// `dynamic_initializer_for_'CGarbageReferenceTrackingEnabled'' @ 140f21e40

void __cdecl _dynamic_initializer_for__CGarbageReferenceTrackingEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CGarbageReferenceTrackingEnabled,L"gc.GarbageReferenceTrackingEnabled",
             &GGarbageReferenceTrackingEnabled,
             L"Causes the Garbage Collector to track and log unreleased garbage objects. If 1, will dump every reference. If 2, will dump a sample of the references to highlight problematic properties. If 3, will dump every reference and then emit a fatal error to terminate the process. "
             ,0);
  atexit(_dynamic_atexit_destructor_for__CGarbageReferenceTrackingEnabled__);
  return;
}

// `dynamic_initializer_for_'CIncrementalBeginDestroyEnabled'' @ 140f21e90

void __cdecl _dynamic_initializer_for__CIncrementalBeginDestroyEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CIncrementalBeginDestroyEnabled,L"gc.IncrementalBeginDestroyEnabled",
             &GIncrementalBeginDestroyEnabled,
             L"If true, the engine will destroy objects incrementally using time limit each frame",0
            );
  atexit(_dynamic_atexit_destructor_for__CIncrementalBeginDestroyEnabled__);
  return;
}

// `dynamic_initializer_for_'CIncrementalBeginDestroyGranularity'' @ 140f21ee0

void __cdecl _dynamic_initializer_for__CIncrementalBeginDestroyGranularity__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CIncrementalBeginDestroyGranularity,L"gc.IncrementalBeginDestroyGranularity",
             &GIncrementalBeginDestroyGranularity,
             L"When using gc.IncrementalBeginDestroyEnabled, check the time limit after this number of destroys. A low number has more overhead but is more accurate."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CIncrementalBeginDestroyGranularity__);
  return;
}

// `dynamic_initializer_for_'CVarAdditionalFinishDestroyTimeGC'' @ 140f21f30

void __cdecl _dynamic_initializer_for__CVarAdditionalFinishDestroyTimeGC__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAdditionalFinishDestroyTimeGC,L"gc.AdditionalFinishDestroyTimeGC",
             &GAdditionalFinishDestroyTimeGC,
             L"Additional wait time in seconds to allow FinishDestroy to complete.",0);
  atexit(_dynamic_atexit_destructor_for__CVarAdditionalFinishDestroyTimeGC__);
  return;
}

// `dynamic_initializer_for_'CVarAllowIncrementalGC'' @ 140f21f80

void __cdecl _dynamic_initializer_for__CVarAllowIncrementalGC__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAllowIncrementalGC,L"gc.AllowIncrementalReachability",
             &GAllowIncrementalReachability,
             L"Set to control incremental Reachability Analysis (experimental)",0);
  atexit(_dynamic_atexit_destructor_for__CVarAllowIncrementalGC__);
  return;
}

// `dynamic_initializer_for_'CVarAllowIncrementalGather'' @ 140f21fd0

void __cdecl _dynamic_initializer_for__CVarAllowIncrementalGather__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAllowIncrementalGather,L"gc.AllowIncrementalGather",&GAllowIncrementalGather,
             L"Set to control incremental Gather Unreachable Objects (experimental)",0);
  atexit(_dynamic_atexit_destructor_for__CVarAllowIncrementalGather__);
  return;
}

// `dynamic_initializer_for_'CVarAllowParallelGC'' @ 140f22020

void __cdecl _dynamic_initializer_for__CVarAllowParallelGC__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAllowParallelGC,L"gc.AllowParallelGC",&GAllowParallelGC,
             L"Used to control parallel GC.",0);
  atexit(_dynamic_atexit_destructor_for__CVarAllowParallelGC__);
  return;
}

// `dynamic_initializer_for_'CVarAllowSkipDestroyGarbage'' @ 140f22070

void __cdecl _dynamic_initializer_for__CVarAllowSkipDestroyGarbage__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAllowSkipDestroyGarbage,L"gc.AllowSkipDestroyGarbage",&GAllowSkipDestroyGarbage,
             L"Set to allow skipping destroying garbage (not allowed by default)",0);
  atexit(_dynamic_atexit_destructor_for__CVarAllowSkipDestroyGarbage__);
  return;
}

// `dynamic_initializer_for_'CVarDumpGCAnalyticsToLog'' @ 140f220c0

void __cdecl _dynamic_initializer_for__CVarDumpGCAnalyticsToLog__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDumpGCAnalyticsToLog,L"gc.DumpAnalyticsToLog",&GDumpGCAnalyticsToLog,
             L"Dumps Garbage Collection analytics to log at the end of each GC.",0);
  atexit(_dynamic_atexit_destructor_for__CVarDumpGCAnalyticsToLog__);
  return;
}

// `dynamic_initializer_for_'CVarFlushStreamingOnGC'' @ 140f22110

void __cdecl _dynamic_initializer_for__CVarFlushStreamingOnGC__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarFlushStreamingOnGC,L"gc.FlushStreamingOnGC",&GFlushStreamingOnGC,
             L"If enabled, streaming will be flushed each time garbage collection is triggered.",0);
  atexit(_dynamic_atexit_destructor_for__CVarFlushStreamingOnGC__);
  return;
}

// `dynamic_initializer_for_'CVarForceEnableDebugGCProcessor'' @ 140f22160

void __cdecl _dynamic_initializer_for__CVarForceEnableDebugGCProcessor__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarForceEnableDebugGCProcessor,L"gc.ForceEnableGCProcessor",
             &GForceEnableDebugGCProcessor,
             L"Force garbage collection to use the debug processor which may provide additional information during GC crashes."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarForceEnableDebugGCProcessor__);
  return;
}

// `dynamic_initializer_for_'CVarGCMaxTimeForFinishDestroy'' @ 140f221b0

void __cdecl _dynamic_initializer_for__CVarGCMaxTimeForFinishDestroy__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGCMaxTimeForFinishDestroy,L"gc.MaxTimeForFinishDestroyGC",
             &GMaxTimeForFinishDestroyGC,
             L"Max time in seconds GC waits on pending objects to be destroyed (default is 10 seconds)."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarGCMaxTimeForFinishDestroy__);
  return;
}

// `dynamic_initializer_for_'CVarIncrementalGatherTimeLimit'' @ 140f22200

void __cdecl _dynamic_initializer_for__CVarIncrementalGatherTimeLimit__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarIncrementalGatherTimeLimit,L"gc.IncrementalGatherTimeLimit",
             &GIncrementalGatherTimeLimit,L"Override Incremental Gather Time Limit (in seconds).",0)
  ;
  atexit(_dynamic_atexit_destructor_for__CVarIncrementalGatherTimeLimit__);
  return;
}

// `dynamic_initializer_for_'CVarIncrementalReachabilityTimeLimit'' @ 140f22250

void __cdecl _dynamic_initializer_for__CVarIncrementalReachabilityTimeLimit__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarIncrementalReachabilityTimeLimit,L"gc.IncrementalReachabilityTimeLimit",
             &GIncrementalReachabilityTimeLimit,
             L"Time in seconds (game time) we should allow for incremental GC (experimental).",0);
  atexit(_dynamic_atexit_destructor_for__CVarIncrementalReachabilityTimeLimit__);
  return;
}

// `dynamic_initializer_for_'CVarMaxFinishDestroyTimeoutObjectsToLog'' @ 140f222a0

void __cdecl _dynamic_initializer_for__CVarMaxFinishDestroyTimeoutObjectsToLog__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMaxFinishDestroyTimeoutObjectsToLog,L"gc.MaxFinishDestroyTimeoutObjectsToLog",
             &GMaxFinishDestroyTimeoutObjectsToLog,
             L"Maximum number of objects to log out when object destruction takes longer than expected"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarMaxFinishDestroyTimeoutObjectsToLog__);
  return;
}

// `dynamic_initializer_for_'CVarNumRetriesBeforeForcingGC'' @ 140f222f0

void __cdecl _dynamic_initializer_for__CVarNumRetriesBeforeForcingGC__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarNumRetriesBeforeForcingGC,L"gc.NumRetriesBeforeForcingGC",
             &GNumRetriesBeforeForcingGC,
             L"Maximum number of times GC can be skipped if worker threads are currently modifying UObject state."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNumRetriesBeforeForcingGC__);
  return;
}

// `dynamic_initializer_for_'CVarShouldVerifyGCAssumptions'' @ 140f22340

void __cdecl _dynamic_initializer_for__CVarShouldVerifyGCAssumptions__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarShouldVerifyGCAssumptions,L"gc.VerifyAssumptions",&GShouldVerifyGCAssumptions,
             L"Whether to verify GC assumptions (disregard for GC, clustering) on each GC.",0);
  atexit(_dynamic_atexit_destructor_for__CVarShouldVerifyGCAssumptions__);
  return;
}

// `dynamic_initializer_for_'CVarShouldVerifyGCAssumptionsOnFullPurge'' @ 140f22390

void __cdecl _dynamic_initializer_for__CVarShouldVerifyGCAssumptionsOnFullPurge__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarShouldVerifyGCAssumptionsOnFullPurge,L"gc.VerifyAssumptionsOnFullPurge",
             &GShouldVerifyGCAssumptionsOnFullPurge,
             L"Whether to verify GC assumptions (disregard for GC, clustering) on full purge GCs.",0
            );
  atexit(_dynamic_atexit_destructor_for__CVarShouldVerifyGCAssumptionsOnFullPurge__);
  return;
}

// `dynamic_initializer_for_'CVarVerifyGCAssumptionsChance'' @ 140f223e0

void __cdecl _dynamic_initializer_for__CVarVerifyGCAssumptionsChance__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVerifyGCAssumptionsChance,L"gc.VerifyAssumptionsChance",
             &GVerifyGCAssumptionsChance,
             L"Chance (0-1) to randomly verify GC assumptions on each GC.",0);
  atexit(_dynamic_atexit_destructor_for__CVarVerifyGCAssumptionsChance__);
  return;
}

// `dynamic_initializer_for_'CVarVerifyNoUnreachableObjects'' @ 140f22430

void __cdecl _dynamic_initializer_for__CVarVerifyNoUnreachableObjects__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVerifyNoUnreachableObjects,L"gc.VerifyNoUnreachableObjects",
             &GVerifyNoUnreachableObjects,
             L"Enables or disables no unreachable objects are reachable verification",0);
  atexit(_dynamic_atexit_destructor_for__CVarVerifyNoUnreachableObjects__);
  return;
}

// `dynamic_initializer_for_'CVarVerifyObjectsDestroyed'' @ 140f22480

void __cdecl _dynamic_initializer_for__CVarVerifyObjectsDestroyed__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVerifyObjectsDestroyed,L"gc.VerifyObjectsDestroyed",&GVerifyObjectsDestroyed,
             L"Enables or disables verification if all objects have been destroyed",0);
  atexit(_dynamic_atexit_destructor_for__CVarVerifyObjectsDestroyed__);
  return;
}

// `dynamic_initializer_for_'CmdCalculateGCHistorySize'' @ 140f224d0

void __cdecl _dynamic_initializer_for__CmdCalculateGCHistorySize__(void)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_5>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&CmdCalculateGCHistorySize,L"gc.CalculateHistorySize",L"",
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
              *)local_48,0);
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
  atexit(_dynamic_atexit_destructor_for__CmdCalculateGCHistorySize__);
  return;
}

// `dynamic_initializer_for_'CmdSetHistorySize'' @ 140f22600

void __cdecl _dynamic_initializer_for__CmdSetHistorySize__(void)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_6>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&CmdSetHistorySize,L"gc.HistorySize",L"",
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
              *)local_48,0);
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
  atexit(_dynamic_atexit_destructor_for__CmdSetHistorySize__);
  return;
}

// `dynamic_initializer_for_'GAssembleSchemaLock'' @ 140f22730

void __cdecl _dynamic_initializer_for__GAssembleSchemaLock__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&GAssembleSchemaLock,4000);
  atexit(_dynamic_atexit_destructor_for__GAssembleSchemaLock__);
  return;
}

// `dynamic_initializer_for_'GDirtyRoots'' @ 140f22760

void __cdecl UE::GC::Private::_dynamic_initializer_for__GDirtyRoots__(void)

{
  atexit(_dynamic_atexit_destructor_for__GDirtyRoots__);
  return;
}

// `dynamic_initializer_for_'GDumpMemoryStats'' @ 140f22780

void __cdecl UE::GC::_dynamic_initializer_for__GDumpMemoryStats__(void)

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
  puVar3 = Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = DumpMemoryStats;
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
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x78))
                     (IConsoleManager::Singleton,L"gc.DumpMemoryStats",L"Print GC memory usage",
                      &local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&GDumpMemoryStats,pIVar5);
  GDumpMemoryStats._0_8_ = &___7FAutoConsoleCommandWithOutputDevice__6B_;
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
  atexit(_dynamic_atexit_destructor_for__GDumpMemoryStats__);
  return;
}

// `dynamic_initializer_for_'GDumpSchemaStats'' @ 140f22920

void __cdecl UE::GC::_dynamic_initializer_for__GDumpSchemaStats__(void)

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
  puVar3 = Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = DumpSchemaStats;
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
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x78))
                     (IConsoleManager::Singleton,L"gc.DumpSchemaStats",L"Print GC schema statistics"
                      ,&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&GDumpSchemaStats,pIVar5);
  GDumpSchemaStats._0_8_ = &___7FAutoConsoleCommandWithOutputDevice__6B_;
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
  atexit(_dynamic_atexit_destructor_for__GDumpSchemaStats__);
  return;
}

// `dynamic_initializer_for_'GGCObjectsPendingDestruction'' @ 140f22ac0

void __cdecl _dynamic_initializer_for__GGCObjectsPendingDestruction__(void)

{
  atexit(_dynamic_atexit_destructor_for__GGCObjectsPendingDestruction__);
  return;
}

// `dynamic_initializer_for_'GGatherUnreachableObjectsState'' @ 140f22ae0

void __cdecl UE::GC::Private::_dynamic_initializer_for__GGatherUnreachableObjectsState__(void)

{
  atexit(_dynamic_atexit_destructor_for__GGatherUnreachableObjectsState__);
  return;
}

// `dynamic_initializer_for_'GGenerateReachabilityStressDataCmd'' @ 140f22b00

void __cdecl _dynamic_initializer_for__GGenerateReachabilityStressDataCmd__(void)

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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = AllocateReachabilityStressData;
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
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x78))
                     (IConsoleManager::Singleton,L"gc.GenerateReachabilityStressData",
                      L"Allocate deeply-nested UObject tree to stress test reachability analysis.",
                      &local_58,0);
  FAutoConsoleObject::FAutoConsoleObject
            ((FAutoConsoleObject *)&GGenerateReachabilityStressDataCmd,pIVar5);
  GGenerateReachabilityStressDataCmd._0_8_ = &___7FAutoConsoleCommandWithOutputDevice__6B_;
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
  atexit(_dynamic_atexit_destructor_for__GGenerateReachabilityStressDataCmd__);
  return;
}

// `dynamic_initializer_for_'GIntrinsicClassSchemas'' @ 140f22ca0

void __cdecl UE::GC::_dynamic_initializer_for__GIntrinsicClassSchemas__(void)

{
  atexit(_dynamic_atexit_destructor_for__GIntrinsicClassSchemas__);
  return;
}

// `dynamic_initializer_for_'GReachabilityStressData'' @ 140f22cc0

void __cdecl _dynamic_initializer_for__GReachabilityStressData__(void)

{
  atexit(_dynamic_atexit_destructor_for__GReachabilityStressData__);
  return;
}

// `dynamic_initializer_for_'GReachableClusters'' @ 140f22ce0

void __cdecl UE::GC::Private::_dynamic_initializer_for__GReachableClusters__(void)

{
  atexit(_dynamic_atexit_destructor_for__GReachableClusters__);
  return;
}

// `dynamic_initializer_for_'GReachableObjects'' @ 140f22d00

void __cdecl UE::GC::Private::_dynamic_initializer_for__GReachableObjects__(void)

{
  atexit(_dynamic_atexit_destructor_for__GReachableObjects__);
  return;
}

// `dynamic_initializer_for_'GRoots'' @ 140f22d20

void __cdecl UE::GC::Private::_dynamic_initializer_for__GRoots__(void)

{
  atexit(_dynamic_atexit_destructor_for__GRoots__);
  return;
}

// `dynamic_initializer_for_'GScratchPages'' @ 140f22d40

void __cdecl UE::GC::_dynamic_initializer_for__GScratchPages__(void)

{
  FWorkerCache *pFVar1;
  longlong lVar2;
  
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&GScratchPages,4000);
  pFVar1 = GScratchPages.WorkerCaches;
  GScratchPages.SharedCache.Pages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  lVar2 = 0x11;
  GScratchPages.SharedCache.Pages.ArrayNum = 0;
  GScratchPages.SharedCache.Pages.ArrayMax = 0;
  do {
    pFVar1->Num = 0;
    memset(pFVar1->Pages,0,0x100);
    pFVar1 = pFVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  atexit(_dynamic_atexit_destructor_for__GScratchPages__);
  return;
}

// `dynamic_initializer_for_'GUnlinkReachabilityStressDataCmd'' @ 140f22dd0

void __cdecl _dynamic_initializer_for__GUnlinkReachabilityStressDataCmd__(void)

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
              ___7__TCommonDelegateInstanceState___A6AXAEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEAVFOutputDevice___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = UnlinkReachabilityStressData;
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
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x78))
                     (IConsoleManager::Singleton,L"gc.UnlinkReachabilityStressData",
                      L"Unlink previously-generated reachability analysis stress test data for collection in the next cycle."
                      ,&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject
            ((FAutoConsoleObject *)&GUnlinkReachabilityStressDataCmd,pIVar5);
  GUnlinkReachabilityStressDataCmd._0_8_ = &___7FAutoConsoleCommandWithOutputDevice__6B_;
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
  atexit(_dynamic_atexit_destructor_for__GUnlinkReachabilityStressDataCmd__);
  return;
}

// `dynamic_initializer_for_'GUnreachableObjects'' @ 140f22f70

void __cdecl _dynamic_initializer_for__GUnreachableObjects__(void)

{
  atexit(_dynamic_atexit_destructor_for__GUnreachableObjects__);
  return;
}

// `dynamic_initializer_for_'GWorkstealingManager'' @ 140f22f90

void __cdecl UE::GC::_dynamic_initializer_for__GWorkstealingManager__(void)

{
  atexit(_dynamic_atexit_destructor_for__GWorkstealingManager__);
  return;
}

// `dynamic_initializer_for_'LogGarbage'' @ 140f22fb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogGarbage__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogGarbage,L"LogGarbage",Warning,All);
  atexit(_dynamic_atexit_destructor_for__LogGarbage__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Private_UObject_GarbageCollectionTesting_h__Script_CoreUObject_98783071'' @ 140f22ff0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Private_UObject_GarbageCollectionTesting_h__Script_CoreUObject_98783071__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CoreUObject",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Private_UObject_GarbageCollectionTesting_h__Script_CoreUObject_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_GC'' @ 140f23030

void __cdecl _dynamic_initializer_for___GCsvCategory_GC__(void)

{
  FString::operator=(&_GCsvCategory_GC.Name,L"GC");
  _GCsvCategory_GC.Index = FCsvProfiler::RegisterCategory(&_GCsvCategory_GC.Name,true,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_GC__);
  return;
}

// `scalar_deleting_destructor' @ 141fed040

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_5>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_5>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141fed260

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_6>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,<lambda_6>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UClass_UObjectReachabilityStressData_NoRegister @ 141fed290

UClass * __cdecl Z_Construct_UClass_UObjectReachabilityStressData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectReachabilityStressData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"ObjectReachabilityStressData",
               &Z_Registration_Info_UClass_UObjectReachabilityStressData.InnerSingleton,
               UObjectReachabilityStressData::StaticRegisterNativesUObjectReachabilityStressData,
               0x38,8,CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UObjectReachabilityStressData>,
               InternalVTableHelperCtorCaller<UObjectReachabilityStressData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectReachabilityStressData.InnerSingleton;
}

// Z_Construct_UClass_UObjectReachabilityStressData @ 141fed3f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UObjectReachabilityStressData(void)

{
  if (Z_Registration_Info_UClass_UObjectReachabilityStressData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UObjectReachabilityStressData.OuterSingleton,
               &Z_Construct_UClass_UObjectReachabilityStressData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UObjectReachabilityStressData.OuterSingleton;
}

// <lambda_invoker_cdecl> @ 141fed530

void __cdecl
`CollectReferences<UE::GC::TDefaultCollector<FClusterVerifyReferenceProcessor>,FClusterVerifyReferenceProcessor>'
::__l5::<lambda_1>::<lambda_invoker_cdecl>(void *param_1,FWorkerContext *param_2)

{
  TFastReferenceCollector<FClusterVerifyReferenceProcessor,UE::GC::TDefaultCollector<FClusterVerifyReferenceProcessor>_>
  local_res8 [4];
  
  local_res8[0].Processor = param_1;
  UE::GC::
  TFastReferenceCollector<FClusterVerifyReferenceProcessor,UE::GC::TDefaultCollector<FClusterVerifyReferenceProcessor>_>
  ::ProcessObjectArray(local_res8,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 141fed550

void __cdecl
`CollectReferences<UE::GC::TDefaultCollector<FDisregardSetReferenceProcessor>,FDisregardSetReferenceProcessor>'
::__l5::<lambda_1>::<lambda_invoker_cdecl>(void *param_1,FWorkerContext *param_2)

{
  TFastReferenceCollector<FDisregardSetReferenceProcessor,UE::GC::TDefaultCollector<FDisregardSetReferenceProcessor>_>
  local_res8 [4];
  
  local_res8[0].Processor = param_1;
  UE::GC::
  TFastReferenceCollector<FDisregardSetReferenceProcessor,UE::GC::TDefaultCollector<FDisregardSetReferenceProcessor>_>
  ::ProcessObjectArray(local_res8,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 141fed570

void __cdecl
`CollectReferences<UE::GC::TDefaultCollector<FUnreachableReferenceProcessor>,FUnreachableReferenceProcessor>'
::__l5::<lambda_1>::<lambda_invoker_cdecl>(void *param_1,FWorkerContext *param_2)

{
  TFastReferenceCollector<FUnreachableReferenceProcessor,UE::GC::TDefaultCollector<FUnreachableReferenceProcessor>_>
  local_res8 [4];
  
  local_res8[0].Processor = param_1;
  UE::GC::
  TFastReferenceCollector<FUnreachableReferenceProcessor,UE::GC::TDefaultCollector<FUnreachableReferenceProcessor>_>
  ::ProcessObjectArray(local_res8,param_2);
  return;
}

// DefaultConstructItems<UE::GC::TGatherIterator<UE::GC::FRealtimeGC::FMarkClustersArrays>,int> @ 141fee8e0

void __cdecl
DefaultConstructItems<UE::GC::TGatherIterator<UE::GC::FRealtimeGC::FMarkClustersArrays>,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1 = puVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::GC::TGatherIterator<TArray<int,TSizedDefaultAllocator<32>_>_>,int> @ 141fee920

void __cdecl
DefaultConstructItems<UE::GC::TGatherIterator<TArray<int,TSizedDefaultAllocator<32>_>_>,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::GC::TGatherIterator<TArray<UObject_*,TSizedDefaultAllocator<32>_>_>,int> @ 141fee950

void __cdecl
DefaultConstructItems<UE::GC::TGatherIterator<TArray<UObject_*,TSizedDefaultAllocator<32>_>_>,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::GC::TGatherIterator<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>,int> @ 141fee980

void __cdecl
DefaultConstructItems<UE::GC::TGatherIterator<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::GC::TGatherIterator<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,int> @ 141fee9b0

void __cdecl
DefaultConstructItems<UE::GC::TGatherIterator<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[5] = 0;
      *(undefined4 *)(puVar1 + 6) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x34) = 0x80;
      *(undefined4 *)(puVar1 + 7) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0x3c) = 0;
      puVar1[9] = 0;
      *(undefined4 *)(puVar1 + 10) = 0;
      puVar1 = puVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FGCSnapshot,int> @ 141feea00

void __cdecl DefaultConstructItems<FGCSnapshot,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined4 *)(lVar1 + 0x1c) = 0;
      *(undefined4 *)(lVar1 + 0x20) = 0x80;
      *(undefined4 *)(lVar1 + 0x24) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0x28) = 0;
      *(undefined8 *)(lVar1 + 0x34) = 0;
      *(undefined4 *)(lVar1 + 0x3c) = 0;
      *(undefined8 *)(lVar1 + 0x44) = 0;
      *(undefined8 *)(lVar1 + 0x4c) = 0;
      *(undefined8 *)(lVar1 + 100) = 0;
      *(undefined4 *)(lVar1 + 0x6c) = 0;
      *(undefined4 *)(lVar1 + 0x70) = 0x80;
      *(undefined4 *)(lVar1 + 0x74) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0x78) = 0;
      *(undefined8 *)(lVar1 + 0x84) = 0;
      *(undefined4 *)(lVar1 + 0x8c) = 0;
      lVar1 = lVar1 + 0xa0;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::GC::TGatherIterator<UE::GC::FRealtimeGC::FMarkClustersArrays>,int> @ 141feea80

void __cdecl
DestructItems<UE::GC::TGatherIterator<UE::GC::FRealtimeGC::FMarkClustersArrays>,int>
          (TGatherIterator<UE::GC::FRealtimeGC::FMarkClustersArrays> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FMarkClustersArrays *pFVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar2 = &param_1->Payload;
    pFVar1 = (pFVar2->ClustersToDissolve).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (pFVar2->KeepClusters).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = (TGatherIterator<UE::GC::FRealtimeGC::FMarkClustersArrays> *)(pFVar2 + 1);
  }
  return;
}

// DestructItems<UE::GC::TGatherIterator<TArray<int,TSizedDefaultAllocator<32>_>_>,int> @ 141feead0

void __cdecl
DestructItems<UE::GC::TGatherIterator<TArray<int,TSizedDefaultAllocator<32>_>_>,int>
          (TGatherIterator<TArray<int,TSizedDefaultAllocator<32>_>_> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Payload;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::GC::TGatherIterator<TArray<UObject_*,TSizedDefaultAllocator<32>_>_>,int> @ 141feeb10

void __cdecl
DestructItems<UE::GC::TGatherIterator<TArray<UObject_*,TSizedDefaultAllocator<32>_>_>,int>
          (TGatherIterator<TArray<UObject_*,TSizedDefaultAllocator<32>_>_> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Payload;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::GC::TGatherIterator<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>,int> @ 141feeb50

void __cdecl
DestructItems<UE::GC::TGatherIterator<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>,int>
          (TGatherIterator<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_> *param_1
          ,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Payload;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::GC::TGatherIterator<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,int> @ 141feeb90

void __cdecl
DestructItems<UE::GC::TGatherIterator<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,int>
          (TGatherIterator<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *param_1,
          int param_2)

{
  ForElementType<FSetElementId> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Payload).Hash.SecondaryData;
    do {
      *(undefined4 *)(pFVar1 + 1) = 0;
      if (*pFVar1 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(pFVar1 + -8));
      pFVar1 = pFVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FGCSnapshot,int> @ 141feebf0

void __cdecl DestructItems<FGCSnapshot,int>(FGCSnapshot *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->DirectReferences).field_0x40;
    do {
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      *(undefined4 *)(puVar1 + -9) = 0;
      if ((void *)puVar1[-10] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-10]);
      }
      TSparseArray<TSparseSetElement<TTuple<UObject_const_*,FGCObjectInfo_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<UObject_const_*,FGCObjectInfo_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<UObject_const_*,FGCObjectInfo_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -0x12));
      puVar1 = puVar1 + 0x14;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Tasks::TTask<void>,int> @ 141feec70

void __cdecl DestructItems<UE::Tasks::TTask<void>,int>(TTask<void> *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  TTask<void> TVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    TVar3 = *param_1;
    if (TVar3 != (TTask<void>)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)TVar3 + 0x30);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (*(code *)**(undefined8 **)TVar3)(TVar3,1);
      }
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<UE::GC::FWorkerContext,TDefaultDelete<UE::GC::FWorkerContext>_>,int> @ 141feecc0

void __cdecl
DestructItems<TUniquePtr<UE::GC::FWorkerContext,TDefaultDelete<UE::GC::FWorkerContext>_>,int>
          (TUniquePtr<UE::GC::FWorkerContext,TDefaultDelete<UE::GC::FWorkerContext>_> *param_1,
          int param_2)

{
  FWorkerContext *this;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    this = param_1->Ptr;
    if (this != (FWorkerContext *)0x0) {
      UE::GC::FWorkerContext::~FWorkerContext(this);
      operator_delete(this,0x100,0x40);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<UE::GC::FAROQueue,int> @ 141feed20

void __cdecl DestructItems<UE::GC::FAROQueue,int>(FAROQueue *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  
  while( true ) {
    if (param_2 == 0) {
      return;
    }
    if ((param_1->Head != param_1->Tail) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("Head.load() == Tail.load()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                           ,0xa01,L"Failed to flush ARO calls"), bVar2)) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// HeapSortInternal<UE::GC::FMemberDeclaration,int,UE::Core::Private::TProjectionMemberData<unsigned_int_UE::GC::FMemberDeclaration::*>,TLess<void>_> @ 141ff0060

void __cdecl
AlgoImpl::
HeapSortInternal<UE::GC::FMemberDeclaration,int,UE::Core::Private::TProjectionMemberData<unsigned_int_UE::GC::FMemberDeclaration::*>,TLess<void>_>
          (FMemberDeclaration *param_1,int param_2,
          TProjectionMemberData<unsigned_int_UE::GC::FMemberDeclaration::*> param_3,
          TLess<void> param_4)

{
  FMemberDeclaration *pFVar1;
  FMemberDeclaration *pFVar2;
  FMemberWord FVar3;
  code *pcVar4;
  FName FVar5;
  uint uVar6;
  EMemberType EVar7;
  undefined3 uVar8;
  uint uVar9;
  EMemberType EVar10;
  undefined3 uVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  FMemberDeclaration *pFVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  
  lVar15 = (longlong)(int)param_3.DataMemberPtr;
  if (param_2 < 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar13 = (param_2 + -2) / 2;
  iVar14 = iVar13 * 2 + 1;
  iVar18 = iVar14;
  iVar16 = iVar13;
  do {
    while (param_2 <= iVar14) {
LAB_141ff01a8:
      if (iVar16 == 0) {
        iVar14 = param_2 + -1;
        lVar20 = (longlong)iVar14;
        if (0 < iVar14) {
          pFVar17 = param_1 + lVar20;
          do {
            uVar6 = pFVar17->Offset;
            EVar7 = pFVar17->Type;
            uVar8 = *(undefined3 *)&pFVar17->field_0xd;
            FVar3 = param_1->ExtraWord;
            FVar5 = param_1->DebugName;
            uVar9 = param_1->Offset;
            EVar10 = param_1->Type;
            uVar11 = *(undefined3 *)&param_1->field_0xd;
            param_1->DebugName = pFVar17->DebugName;
            param_1->Offset = uVar6;
            param_1->Type = EVar7;
            *(undefined3 *)&param_1->field_0xd = uVar8;
            param_1->ExtraWord = pFVar17->ExtraWord;
            pFVar17->DebugName = FVar5;
            pFVar17->Offset = uVar9;
            pFVar17->Type = EVar10;
            *(undefined3 *)&pFVar17->field_0xd = uVar11;
            pFVar17->ExtraWord = FVar3;
            iVar18 = 0;
            if (1 < iVar14) {
              do {
                iVar16 = iVar18 * 2;
                iVar13 = iVar16 + 1;
                if (iVar16 + 2 < iVar14) {
                  if (*(uint *)((longlong)
                                &param_1[(longlong)iVar16 + 2].DebugName.ComparisonIndex.Value +
                               lVar15) <
                      *(uint *)((longlong)&param_1[iVar13].DebugName.ComparisonIndex.Value + lVar15)
                     ) {
                    iVar13 = iVar16;
                  }
                  iVar13 = iVar13 + 1;
                }
                if (*(uint *)((longlong)&param_1[iVar13].DebugName.ComparisonIndex.Value + lVar15)
                    <= *(uint *)((longlong)&param_1[iVar18].DebugName.ComparisonIndex.Value + lVar15
                                )) break;
                pFVar1 = param_1 + iVar18;
                FVar5 = pFVar1->DebugName;
                uVar9 = pFVar1->Offset;
                EVar10 = pFVar1->Type;
                uVar11 = *(undefined3 *)&pFVar1->field_0xd;
                FVar3 = param_1[iVar18].ExtraWord;
                pFVar1 = param_1 + iVar13;
                uVar6 = pFVar1->Offset;
                EVar7 = pFVar1->Type;
                uVar8 = *(undefined3 *)&pFVar1->field_0xd;
                pFVar2 = param_1 + iVar18;
                pFVar2->DebugName = pFVar1->DebugName;
                pFVar2->Offset = uVar6;
                pFVar2->Type = EVar7;
                *(undefined3 *)&pFVar2->field_0xd = uVar8;
                param_1[iVar18].ExtraWord = param_1[iVar13].ExtraWord;
                pFVar1 = param_1 + iVar13;
                pFVar1->DebugName = FVar5;
                pFVar1->Offset = uVar9;
                pFVar1->Type = EVar10;
                *(undefined3 *)&pFVar1->field_0xd = uVar11;
                param_1[iVar13].ExtraWord = FVar3;
                iVar18 = iVar13;
              } while (iVar13 * 2 + 1 < iVar14);
            }
            iVar14 = iVar14 + -1;
            lVar20 = lVar20 + -1;
            pFVar17 = pFVar17 + -1;
          } while (0 < lVar20);
        }
        return;
      }
      iVar13 = iVar16 + -1;
      iVar14 = iVar18 + -2;
      iVar18 = iVar14;
      iVar16 = iVar13;
    }
    iVar14 = iVar13 * 2;
    iVar19 = iVar14 + 1;
    if (iVar14 + 2 < param_2) {
      if (*(uint *)((longlong)&param_1[(longlong)iVar14 + 2].DebugName.ComparisonIndex.Value +
                   lVar15) <
          *(uint *)((longlong)&param_1[iVar19].DebugName.ComparisonIndex.Value + lVar15)) {
        iVar19 = iVar14;
      }
      iVar19 = iVar19 + 1;
    }
    if (*(uint *)((longlong)&param_1[iVar19].DebugName.ComparisonIndex.Value + lVar15) <=
        *(uint *)((longlong)&param_1[iVar13].DebugName.ComparisonIndex.Value + lVar15))
    goto LAB_141ff01a8;
    pFVar17 = param_1 + iVar13;
    FVar5 = pFVar17->DebugName;
    uVar9 = pFVar17->Offset;
    EVar10 = pFVar17->Type;
    uVar11 = *(undefined3 *)&pFVar17->field_0xd;
    iVar14 = iVar19 * 2 + 1;
    FVar3 = param_1[iVar13].ExtraWord;
    pFVar17 = param_1 + iVar19;
    uVar6 = pFVar17->Offset;
    EVar7 = pFVar17->Type;
    uVar8 = *(undefined3 *)&pFVar17->field_0xd;
    pFVar1 = param_1 + iVar13;
    pFVar1->DebugName = pFVar17->DebugName;
    pFVar1->Offset = uVar6;
    pFVar1->Type = EVar7;
    *(undefined3 *)&pFVar1->field_0xd = uVar8;
    param_1[iVar13].ExtraWord = param_1[iVar19].ExtraWord;
    pFVar17 = param_1 + iVar19;
    pFVar17->DebugName = FVar5;
    pFVar17->Offset = uVar9;
    pFVar17->Type = EVar10;
    *(undefined3 *)&pFVar17->field_0xd = uVar11;
    param_1[iVar19].ExtraWord = FVar3;
    iVar13 = iVar19;
  } while( true );
}

// IntCastChecked<unsigned_short,unsigned_int> @ 141ff02e0

ushort __cdecl IntCastChecked<unsigned_short,unsigned_int>(uint param_1)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  
  if (param_1 != (param_1 & 0xffff)) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xae,L"Loss of data caused by narrowing conversion, In = %llu");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return (ushort)param_1;
}

// IntCastChecked<int,unsigned_int> @ 141ff0330

int __cdecl IntCastChecked<int,unsigned_int>(uint param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if ((int)param_1 < 0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xae,L"Loss of data caused by narrowing conversion, In = %llu");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return param_1;
}

// InternalConstructor<UObjectReachabilityStressData> @ 141ff0380

void __cdecl InternalConstructor<UObjectReachabilityStressData>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UObjectReachabilityStressData__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<UObjectReachabilityStressData> @ 141ff03c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UObjectReachabilityStressData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UObjectReachabilityStressData::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UObjectReachabilityStressData__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<UE::GC::FMemberDeclaration,int,UE::Core::Private::TProjectionMemberData<unsigned_int_UE::GC::FMemberDeclaration::*>,TLess<void>_> @ 141ff0480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<UE::GC::FMemberDeclaration,int,UE::Core::Private::TProjectionMemberData<unsigned_int_UE::GC::FMemberDeclaration::*>,TLess<void>_>
          (FMemberDeclaration *param_1,int param_2,
          TProjectionMemberData<unsigned_int_UE::GC::FMemberDeclaration::*> param_3,
          TLess<void> param_4)

{
  FMemberDeclaration *pFVar1;
  FMemberWord FVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined3 uVar5;
  FName FVar6;
  uint uVar7;
  EMemberType EVar8;
  undefined3 uVar9;
  uint uVar10;
  EMemberType EVar11;
  undefined3 uVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  FMemberDeclaration *pFVar16;
  FMemberDeclaration *pFVar17;
  FMemberDeclaration *pFVar18;
  FMemberDeclaration *pFVar19;
  FMemberDeclaration *pFVar20;
  FMemberDeclaration *pFVar21;
  FMemberDeclaration **ppFVar22;
  float fVar23;
  undefined1 auStack_388 [48];
  FMemberDeclaration *local_358;
  FMemberDeclaration *local_348;
  FMemberDeclaration *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    lVar15 = (longlong)(int)param_3.DataMemberPtr;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar23 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar23;
    memset(local_330,0,0x2e8);
    ppFVar22 = &local_348;
    do {
      pFVar16 = ppFVar22[1];
      pFVar21 = *ppFVar22;
      pFVar1 = ppFVar22[2];
      local_358._0_4_ = (int)pFVar1;
      iVar14 = (int)(((longlong)pFVar16 - (longlong)pFVar21) / 0x18) + 1;
      pFVar20 = pFVar21;
      if ((int)local_358 != 0) {
LAB_141ff0560:
        if (8 < iVar14) {
          uVar7 = pFVar20->Offset;
          EVar8 = pFVar20->Type;
          uVar9 = *(undefined3 *)&pFVar20->field_0xd;
          pFVar18 = pFVar16 + 1;
          iVar14 = iVar14 / 2;
          pFVar21 = pFVar20 + iVar14;
          FVar6 = pFVar21->DebugName;
          uVar10 = pFVar21->Offset;
          EVar11 = pFVar21->Type;
          uVar12 = *(undefined3 *)&pFVar21->field_0xd;
          FVar2 = pFVar20[iVar14].ExtraWord;
          pFVar21 = pFVar20 + iVar14;
          pFVar21->DebugName = pFVar20->DebugName;
          pFVar21->Offset = uVar7;
          pFVar21->Type = EVar8;
          *(undefined3 *)&pFVar21->field_0xd = uVar9;
          pFVar20[iVar14].ExtraWord = pFVar20->ExtraWord;
          pFVar20->DebugName = FVar6;
          pFVar20->Offset = uVar10;
          pFVar20->Type = EVar11;
          *(undefined3 *)&pFVar20->field_0xd = uVar12;
          pFVar20->ExtraWord = FVar2;
          pFVar21 = pFVar20;
LAB_141ff05b0:
          pFVar17 = pFVar21;
          pFVar21 = pFVar17 + 1;
          if (pFVar21 <= pFVar16) goto code_r0x000141ff05b9;
          goto LAB_141ff05c3;
        }
        for (; pFVar21 = pFVar20, pFVar1 = pFVar20, pFVar20 < pFVar16; pFVar16 = pFVar16 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar16) {
            if (*(uint *)((longlong)&(pFVar21->DebugName).ComparisonIndex.Value + lVar15) <
                *(uint *)((longlong)&(pFVar1->DebugName).ComparisonIndex.Value + lVar15)) {
              pFVar21 = pFVar1;
            }
          }
          FVar6 = pFVar21->DebugName;
          uVar10 = pFVar21->Offset;
          EVar11 = pFVar21->Type;
          uVar12 = *(undefined3 *)&pFVar21->field_0xd;
          FVar2 = pFVar21->ExtraWord;
          uVar7 = pFVar16->Offset;
          EVar8 = pFVar16->Type;
          uVar9 = *(undefined3 *)&pFVar16->field_0xd;
          pFVar21->DebugName = pFVar16->DebugName;
          pFVar21->Offset = uVar7;
          pFVar21->Type = EVar8;
          *(undefined3 *)&pFVar21->field_0xd = uVar9;
          pFVar21->ExtraWord = pFVar16->ExtraWord;
          pFVar16->DebugName = FVar6;
          pFVar16->Offset = uVar10;
          pFVar16->Type = EVar11;
          *(undefined3 *)&pFVar16->field_0xd = uVar12;
          pFVar16->ExtraWord = FVar2;
        }
        goto LAB_141ff06e7;
      }
LAB_141ff06d8:
      local_358 = pFVar1;
      HeapSortInternal<UE::GC::FMemberDeclaration,int,UE::Core::Private::TProjectionMemberData<unsigned_int_UE::GC::FMemberDeclaration::*>,TLess<void>_>
                (pFVar21,iVar14,param_3,param_4);
LAB_141ff06e7:
      ppFVar22 = ppFVar22 + -3;
    } while (&local_348 <= ppFVar22);
  }
  return;
code_r0x000141ff05b9:
  if (*(uint *)((longlong)&(pFVar21->DebugName).ComparisonIndex.Value + lVar15) <=
      *(uint *)((longlong)&(pFVar20->DebugName).ComparisonIndex.Value + lVar15)) goto LAB_141ff05b0;
LAB_141ff05c3:
  do {
    pFVar19 = pFVar18;
    pFVar18 = pFVar19 + -1;
    if (pFVar18 <= pFVar20) break;
  } while (*(uint *)((longlong)&(pFVar20->DebugName).ComparisonIndex.Value + lVar15) <=
           *(uint *)((longlong)&(pFVar18->DebugName).ComparisonIndex.Value + lVar15));
  uVar3 = pFVar19[-1].Offset;
  uVar4 = pFVar19[-1].Type;
  uVar5 = *(undefined3 *)&pFVar19[-1].field_0xd;
  if (pFVar21 <= pFVar18) {
    FVar6 = pFVar21->DebugName;
    uVar7 = pFVar17[1].Offset;
    EVar8 = pFVar17[1].Type;
    uVar9 = *(undefined3 *)&pFVar17[1].field_0xd;
    FVar2 = pFVar17[1].ExtraWord;
    pFVar21->DebugName = pFVar18->DebugName;
    pFVar17[1].Offset = uVar3;
    pFVar17[1].Type = uVar4;
    *(undefined3 *)&pFVar17[1].field_0xd = uVar5;
    pFVar17[1].ExtraWord = pFVar19[-1].ExtraWord;
    pFVar18->DebugName = FVar6;
    pFVar19[-1].Offset = uVar7;
    pFVar19[-1].Type = EVar8;
    *(undefined3 *)&pFVar19[-1].field_0xd = uVar9;
    pFVar19[-1].ExtraWord = FVar2;
    goto LAB_141ff05b0;
  }
  FVar6 = pFVar20->DebugName;
  uVar7 = pFVar20->Offset;
  EVar8 = pFVar20->Type;
  uVar9 = *(undefined3 *)&pFVar20->field_0xd;
  FVar2 = pFVar20->ExtraWord;
  lVar13 = (longlong)pFVar18 + (-0x18 - (longlong)pFVar20);
  local_358._0_4_ = (int)local_358 + -1;
  lVar13 = lVar13 / 6 + (lVar13 >> 0x3f);
  pFVar20->DebugName = pFVar18->DebugName;
  pFVar20->Offset = uVar3;
  pFVar20->Type = uVar4;
  *(undefined3 *)&pFVar20->field_0xd = uVar5;
  pFVar20->ExtraWord = pFVar19[-1].ExtraWord;
  pFVar18->DebugName = FVar6;
  pFVar19[-1].Offset = uVar7;
  pFVar19[-1].Type = EVar8;
  *(undefined3 *)&pFVar19[-1].field_0xd = uVar9;
  pFVar19[-1].ExtraWord = FVar2;
  if ((lVar13 >> 2) - (lVar13 >> 0x3f) < ((longlong)pFVar16 - (longlong)pFVar21) / 0x18) {
    if (pFVar21 < pFVar16) {
      *ppFVar22 = pFVar21;
      ppFVar22[1] = pFVar16;
      *(int *)(ppFVar22 + 2) = (int)local_358;
      ppFVar22 = ppFVar22 + 3;
    }
    if (pFVar18 <= pFVar20 + 1) goto LAB_141ff06e7;
    pFVar16 = pFVar19 + -2;
    pFVar21 = pFVar20;
  }
  else {
    if (pFVar20 + 1 < pFVar18) {
      *ppFVar22 = pFVar20;
      ppFVar22[1] = pFVar19 + -2;
      *(int *)(ppFVar22 + 2) = (int)local_358;
      ppFVar22 = ppFVar22 + 3;
    }
    if (pFVar16 <= pFVar21) goto LAB_141ff06e7;
  }
  iVar14 = (int)(((longlong)pFVar16 - (longlong)pFVar21) / 0x18) + 1;
  pFVar20 = pFVar21;
  if ((int)local_358 == 0) goto LAB_141ff06d8;
  goto LAB_141ff0560;
}

// Launch<`UE::Tasks::Wait<TArray<UE::Tasks::TTask<void>,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,TArray<UE::Tasks::TTask<void>,TSizedDefaultAllocator<32>_>_const_&> @ 141ff07a0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __cdecl
UE::Tasks::
Launch<_UE::Tasks::Wait<TArray<UE::Tasks::TTask<void>,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>,TArray<UE::Tasks::TTask<void>,TSizedDefaultAllocator<32>_>_const_&>
          (wchar_t *param_1,<lambda_1> *param_2,
          TArray<UE::Tasks::TTask<void>,TSizedDefaultAllocator<32>_> *param_3,ETaskPriority param_4,
          EExtendedTaskPriority param_5,ETaskFlags param_6)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  FTaskBase *this;
  undefined7 in_register_00000089;
  ETaskFlags in_stack_00000038;
  
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  this = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
         ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                     *)&Private::SmallTaskAllocator);
  if (this == (FTaskBase *)0x0) {
    this = (FTaskBase *)0x0;
  }
  else {
    Private::FTaskBase::FTaskBase(this,2,true);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_1>__1____Wait_V__TArray_V__TTask_X_Tasks_UE__V__TSizedDefaultAllocator__0CA______Tasks_UE__YA_NAEBV__TArray_V__TTask_X_Tasks_UE__V__TSizedDefaultAllocator__0CA_____UFTimespan___Z_XX_Private_Tasks_UE__6B_
    ;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_5,(undefined1)param_6,in_stack_00000038);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__1____Wait_V__TArray_V__TTask_X_Tasks_UE__V__TSizedDefaultAllocator__0CA______Tasks_UE__YA_NAEBV__TArray_V__TTask_X_Tasks_UE__V__TSizedDefaultAllocator__0CA_____UFTimespan___Z__Private_Tasks_UE__6B_
    ;
  }
  Private::FTaskBase::AddPrerequisites<TArray<UE::Tasks::TTask<void>,TSizedDefaultAllocator<32>_>,0>
            (this,(TArray<UE::Tasks::TTask<void>,TSizedDefaultAllocator<32>_> *)
                  CONCAT71(in_register_00000089,param_4),true);
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    param_1[0] = L'\0';
    param_1[1] = L'\0';
    param_1[2] = L'\0';
    param_1[3] = L'\0';
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(FTaskBase **)param_1 = this;
  Private::FTaskBase::TryLaunch(this,0x100);
  return (TTask<void>)param_1;
}

// Launch<`UE::GC::FRealtimeGC::BeginInitialReferenceCollection'::__l5::<lambda_1>_> @ 141ff0890

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TTask<void> __cdecl
UE::Tasks::Launch<_UE::GC::FRealtimeGC::BeginInitialReferenceCollection_::__l5::<lambda_1>_>
          (wchar_t *param_1,<lambda_1> *param_2,ETaskPriority param_3,EExtendedTaskPriority param_4,
          ETaskFlags param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  FTaskBase *this;
  undefined7 in_register_00000081;
  ETaskFlags in_stack_00000030;
  
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  this = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
         ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                     *)&Private::SmallTaskAllocator);
  if (this == (FTaskBase *)0x0) {
    this = (FTaskBase *)0x0;
  }
  else {
    Private::FTaskBase::FTaskBase(this,2,true);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTaskBase_V<lambda_1>__4__BeginInitialReferenceCollection_FRealtimeGC_GC_UE__AEAAXW4EGCOptions___Z_XX_Private_Tasks_UE__6B_
    ;
    Private::FTaskBase::Init(this,(wchar_t *)param_2,param_4,(undefined1)param_5,in_stack_00000030);
    this[1]._padding_ = *(longlong *)CONCAT71(in_register_00000081,param_3);
    this->_padding_ =
         (longlong)
         &
         ___7__TExecutableTask_V<lambda_1>__4__BeginInitialReferenceCollection_FRealtimeGC_GC_UE__AEAAXW4EGCOptions___Z__Private_Tasks_UE__6B_
    ;
  }
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    param_1[0] = L'\0';
    param_1[1] = L'\0';
    param_1[2] = L'\0';
    param_1[3] = L'\0';
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(FTaskBase **)param_1 = this;
  Private::FTaskBase::TryLaunch(this,0x100);
  return (TTask<void>)param_1;
}

// MakeShared<UE::GC::FWorkCoordinator,1,TArrayView<UE::GC::FWorkerContext_*,int>_&,int> @ 141ff0980

TSharedRef<UE::GC::FWorkCoordinator,1> * __cdecl
MakeShared<UE::GC::FWorkCoordinator,1,TArrayView<UE::GC::FWorkerContext_*,int>_&,int>
          (TSharedRef<UE::GC::FWorkCoordinator,1> *__return_storage_ptr__,
          TArrayView<UE::GC::FWorkerContext_*,int> *param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  FWorkerContext **ppFVar3;
  bool bVar4;
  atomic<int> aVar5;
  uint uVar6;
  TReferenceControllerBase<1> *pTVar7;
  void *pvVar8;
  TSharedRef<UE::GC::FWorkCoordinator,1> *pTVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  atomic<int> aVar13;
  
  pTVar7 = operator_new(0x60);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FWorkCoordinator *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFWorkCoordinator_GC_UE___00_SharedPointerInternals__6B_
    ;
    ppFVar3 = param_1->DataPtr;
    iVar1 = *param_2;
    aVar13 = SUB84(*(undefined8 *)&param_1->ArrayNum,0);
    pvVar8 = FMemory::Malloc((longlong)(int)aVar13 << 6,0);
    pTVar7[1]._padding_ = (longlong)pvVar8;
    pTVar7[1].SharedReferenceCount = aVar13;
    if (((int)aVar13 < 0) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar9 = (TSharedRef<UE::GC::FWorkCoordinator,1> *)(*pcVar2)();
      return pTVar9;
    }
    aVar5 = (atomic<int>)0x0;
    pTVar7[5]._padding_ = 0;
    if (iVar1 < 0x11) {
      aVar5 = (atomic<int>)((5 < (int)aVar13) + 1);
    }
    pTVar7[5].SharedReferenceCount = aVar5;
    pTVar7[5].WeakReferenceCount = (atomic<int>)0x0;
    puVar11 = (undefined8 *)pTVar7[1]._padding_;
    puVar12 = puVar11 + (longlong)(int)pTVar7[1].SharedReferenceCount * 8;
    for (; puVar11 != puVar12; puVar11 = puVar11 + 8) {
      uVar10 = (uint)((longlong)puVar11 - pTVar7[1]._padding_ >> 6);
      uVar6 = 0;
      if ((int)uVar10 < (int)aVar13) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar9 = (TSharedRef<UE::GC::FWorkCoordinator,1> *)(*pcVar2)();
        return pTVar9;
      }
      *puVar11 = ppFVar3[(int)uVar10];
    }
    __return_storage_ptr__->Object = (FWorkCoordinator *)(pTVar7 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar7;
    if (((FWorkCoordinator *)(pTVar7 + 1) == (FWorkCoordinator *)0x0) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar9 = (TSharedRef<UE::GC::FWorkCoordinator,1> *)(*pcVar2)();
      return pTVar9;
    }
  }
  return __return_storage_ptr__;
}

// NewObject<UGCBarrier> @ 141ff3460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UGCBarrier * __cdecl
NewObject<UGCBarrier>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UObject *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UGCBarrier_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return (UGCBarrier *)pUVar2;
}

// NewObject<UObjectReachabilityStressData> @ 141ff3550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObjectReachabilityStressData * __cdecl NewObject<UObjectReachabilityStressData>(UObject *param_1)

{
  UClass *pUVar1;
  UObjectReachabilityStressData *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UObjectReachabilityStressData::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UObjectReachabilityStressData *)
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

// VisitElements<`UE::GC::FInstanceStats::CountInnerStructInstances'::__l6::<lambda_1>_> @ 141ff99a0

void __thiscall
UE::GC::FStructMemberStats::
VisitElements<_UE::GC::FInstanceStats::CountInnerStructInstances_::__l6::<lambda_1>_>
          (FStructMemberStats *this,uchar *param_1,int param_2,<lambda_1> *param_3)

{
  uint uVar1;
  int iVar2;
  FStructMemberStats *pFVar3;
  FInstanceStats *this_00;
  FStructMemberStats *pFVar4;
  code *pcVar5;
  bool bVar6;
  uchar *puVar7;
  undefined4 uStack_2c;
  TArrayView<UE::GC::FStructMemberStats_const_,int> local_28;
  
  uVar1 = *(uint *)(((this->Schema).Handle & 0xfffffffffffffffe) - 8);
  puVar7 = param_1 + uVar1 * param_2;
  if (param_1 != puVar7) {
    do {
      pFVar3 = param_3->InnerStruct;
      this_00 = param_3->__this;
      FInstanceStats::CountInstance
                (this_00,param_1,*(uint *)(((pFVar3->Schema).Handle & 0xfffffffffffffffe) - 8),
                 pFVar3->Stat);
      pFVar4 = (FStructMemberStats *)(pFVar3->Stat->InnerStructs).AllocatorInstance.Data;
      iVar2 = (pFVar3->Stat->InnerStructs).ArrayNum;
      if ((iVar2 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_28._12_4_ = uStack_2c;
      local_28.ArrayNum = iVar2;
      local_28.DataPtr = pFVar4;
      FInstanceStats::CountInnerStructInstances(this_00,param_1,&local_28);
      param_1 = param_1 + uVar1;
    } while (param_1 != puVar7);
  }
  return;
}

// VisitInstances<`UE::GC::FInstanceStats::CountInnerStructInstances'::__l6::<lambda_1>_> @ 141ff9b80

void __thiscall
UE::GC::FStructMemberStats::
VisitInstances<_UE::GC::FInstanceStats::CountInnerStructInstances_::__l6::<lambda_1>_>
          (FStructMemberStats *this,uchar *param_1,<lambda_1> *param_2)

{
  EMemberType EVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  FStructMemberStats *pFVar5;
  code *pcVar6;
  FInstanceStats *this_00;
  FStructMemberStats *pFVar7;
  ulonglong uVar8;
  bool bVar9;
  uchar *puVar10;
  uint uVar11;
  uint uVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  FStructMemberStats *pFStack_80;
  <lambda_1> local_78;
  <lambda_1> local_68;
  undefined1 local_58 [16];
  <lambda_1> local_48;
  
  puVar14 = (ulonglong *)(param_1 + (this->WordOffset << 3));
  EVar1 = this->Type;
  if (EVar1 == StructArray) {
    local_48.__this = param_2->__this;
    local_48.InnerStruct = param_2->InnerStruct;
    VisitElements<_UE::GC::FInstanceStats::CountInnerStructInstances_::__l6::<lambda_1>_>
              (this,(uchar *)*puVar14,(int)puVar14[1],&local_48);
    return;
  }
  if (EVar1 == StructSet) {
    this_00 = param_2->__this;
    pFVar7 = param_2->InnerStruct;
    uVar4 = *puVar14;
    uVar11 = 0;
    uVar8 = puVar14[1];
    iVar2 = *(int *)(((this->Schema).Handle & 0xfffffffffffffffe) - 8);
    if (0 < (int)uVar8) {
      uVar12 = 1;
      pFStack_80 = pFVar7;
      do {
        if ((int)uVar11 < (int)puVar14[5]) {
          if (((int)puVar14[5] <= (int)uVar11) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValidIndex(Index)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x8c4,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          puVar13 = puVar14 + 2;
          if ((ulonglong *)puVar14[4] != (ulonglong *)0x0) {
            puVar13 = (ulonglong *)puVar14[4];
          }
          if ((*(uint *)((longlong)puVar13 + (ulonglong)(uVar11 >> 5) * 4) & uVar12) != 0) {
            puVar10 = (uchar *)(uVar11 * iVar2 + uVar4);
            FInstanceStats::CountInstance
                      (this_00,puVar10,*(uint *)(((pFVar7->Schema).Handle & 0xfffffffffffffffe) - 8)
                       ,pFVar7->Stat);
            pFVar5 = (FStructMemberStats *)(pFVar7->Stat->InnerStructs).AllocatorInstance.Data;
            iVar3 = (pFVar7->Stat->InnerStructs).ArrayNum;
            if ((iVar3 < 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFStack_80 = (FStructMemberStats *)CONCAT44(pFStack_80._4_4_,iVar3);
            local_58._8_8_ = pFStack_80;
            local_58._0_8_ = pFVar5;
            FInstanceStats::CountInnerStructInstances
                      (this_00,puVar10,(TArrayView<UE::GC::FStructMemberStats_const_,int> *)local_58
                      );
          }
        }
        uVar11 = uVar11 + 1;
        uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      } while ((int)uVar11 < (int)uVar8);
    }
  }
  else {
    if (EVar1 == FreezableStructArray) {
      puVar10 = (uchar *)*puVar14;
      if (((ulonglong)puVar10 & 1) != 0) {
        puVar10 = (uchar *)(((longlong)puVar10 >> 0x18) + (longlong)puVar14);
      }
      local_68.__this = param_2->__this;
      local_68.InnerStruct = param_2->InnerStruct;
      VisitElements<_UE::GC::FInstanceStats::CountInnerStructInstances_::__l6::<lambda_1>_>
                (this,puVar10,(int)puVar14[1],&local_68);
      return;
    }
    if (EVar1 == Optional) {
      local_78.__this = param_2->__this;
      local_78.InnerStruct = param_2->InnerStruct;
      VisitElements<_UE::GC::FInstanceStats::CountInnerStructInstances_::__l6::<lambda_1>_>
                (this,(uchar *)puVar14,
                 (uint)*(byte *)((ulonglong)
                                 *(uint *)(((this->Schema).Handle & 0xfffffffffffffffe) - 8) +
                                (longlong)puVar14),&local_78);
      return;
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollectionSchema.cpp"
                       ,0x295,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  return;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<UE::GC::FWorkerContext_*>_> @ 142010a80

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<UE::GC::FWorkerContext_*>_>
          (_Atomic_padded<UE::GC::FWorkerContext_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<UE::GC::FWorkerContext_*>_> @ 142010a90

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<UE::GC::FWorkerContext_*>_>
          (_Atomic_padded<UE::GC::FWorkerContext_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_reinterpret_as<__int64,UE::GC::FWorkerContext_*> @ 142010aa0

long64 __cdecl
std::_Atomic_reinterpret_as<__int64,UE::GC::FWorkerContext_*>(FWorkerContext **param_1)

{
  return (long64)*param_1;
}

// operator() @ 142014090

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall `DissolveUnreachableClusters'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  EInternalObjectFlags EVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FUObjectItem *pFVar8;
  uint uVar9;
  EInternalObjectFlags EVar10;
  EInternalObjectFlags EVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 local_res18 [8];
  int local_res20;
  uint local_68 [2];
  int *local_60;
  longlong local_58;
  
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId5175,"DissolveUnreachableClustersTask",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
               ,0x1437);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5175);
  }
  lVar1 = *(longlong *)this;
  uVar9 = 0;
  if (param_1 < *(int *)(lVar1 + 0x408)) {
    uVar9 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar16 = *(longlong *)(lVar1 + 0x400);
  if (*(longlong *)(lVar1 + 0x400) == 0) {
    lVar16 = lVar1;
  }
  lVar16 = lVar16 + (longlong)param_1 * 0x20;
  iVar12 = 0;
  local_res20 = 0;
  uVar9 = *(uint *)(lVar16 + 4);
  local_58 = lVar16;
  if ((int)uVar9 <= *(int *)(lVar16 + 0xc)) {
    do {
      *(uint *)(lVar16 + 4) = uVar9 + 1;
      plVar2 = *(longlong **)((longlong)this + 8);
      uVar6 = 0;
      if ((int)uVar9 < (int)plVar2[1]) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      local_68[0] = uVar9;
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      piVar15 = (int *)((longlong)(int)uVar9 * 0x50 + *plVar2);
      if (-1 < *piVar15) {
        pFVar8 = FChunkedFixedUObjectArray::GetObjectPtr(&GUObjectArray.ObjObjects,*piVar15);
        if ((pFVar8 == (FUObjectItem *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("ItemPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                               ,0x381,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((UE::GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
            (EInternalObjectFlags)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x20)) !=
            Borrowed) {
          piVar14 = *(int **)(piVar15 + 2);
          iVar7 = piVar15[4];
          piVar13 = piVar14 + iVar7;
          local_60 = piVar13;
          while( true ) {
            if (piVar15[4] != iVar7) {
              local_res18[0] = 0;
              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_res18);
            }
            lVar16 = local_58;
            if (piVar14 == piVar13) break;
            pFVar8 = FChunkedFixedUObjectArray::GetObjectPtr(&GUObjectArray.ObjObjects,*piVar14);
            if ((pFVar8 == (FUObjectItem *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ItemPtr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                   ,0x381,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            EVar11 = UE::GC::Private::FGCFlags::ReachableObjectFlag;
            if (((uint)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x37) & 1) == 0) {
              do {
                lVar1 = (pFVar8->field0_0x0).FlagsAndRefCount;
                EVar10 = (EInternalObjectFlags)((ulonglong)lVar1 >> 0x20);
                EVar4 = UE::GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
                if ((EVar11 & EVar10) == Borrowed) break;
                if (((ulonglong)pFVar8 & 7) != 0) {
                  FWindowsPlatformAtomics::HandleAtomicsFailure
                            (
                            L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                            );
                }
                LOCK();
                bVar5 = lVar1 == (pFVar8->field0_0x0).FlagsAndRefCount;
                if (bVar5) {
                  (pFVar8->field0_0x0).FlagsAndRefCount =
                       (longlong)(int)(~EVar11 & EVar10) << 0x20 | (longlong)(int)lVar1;
                }
                UNLOCK();
                EVar4 = UE::GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
              } while (!bVar5);
              do {
                lVar1 = (pFVar8->field0_0x0).FlagsAndRefCount;
                EVar11 = (EInternalObjectFlags)((ulonglong)lVar1 >> 0x20);
                if ((EVar11 & EVar4) == EVar4) break;
                if (((ulonglong)pFVar8 & 7) != 0) {
                  FWindowsPlatformAtomics::HandleAtomicsFailure
                            (
                            L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                            );
                }
                LOCK();
                bVar5 = lVar1 == (pFVar8->field0_0x0).FlagsAndRefCount;
                if (bVar5) {
                  (pFVar8->field0_0x0).FlagsAndRefCount =
                       (longlong)(int)(EVar11 | EVar4) << 0x20 | (longlong)(int)lVar1;
                }
                UNLOCK();
              } while (!bVar5);
              iVar12 = local_res20 + 1;
              piVar13 = local_60;
              local_res20 = iVar12;
            }
            piVar14 = piVar14 + 1;
          }
          if (((*(uint **)(local_58 + 0x10) <= local_68) &&
              (local_68 < *(uint **)(local_58 + 0x10) + *(int *)(local_58 + 0x1c))) &&
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
          iVar7 = *(int *)(lVar16 + 0x18);
          if (iVar7 == *(int *)(lVar16 + 0x1c)) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,(ForAnyElementType *)(lVar16 + 0x10),(int *)(lVar16 + 0x1c));
          }
          *(int *)(lVar16 + 0x18) = iVar7 + 1;
          *(uint *)(*(longlong *)(lVar16 + 0x10) + (longlong)iVar7 * 4) = local_68[0];
        }
      }
      uVar9 = *(uint *)(lVar16 + 4);
    } while ((int)uVar9 <= *(int *)(lVar16 + 0xc));
  }
  LOCK();
  **(int **)((longlong)this + 0x10) = **(int **)((longlong)this + 0x10) + iVar12;
  UNLOCK();
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 1420144c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall `GatherUnreachableObjects'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  double dVar1;
  double dVar2;
  int *piVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FUObjectItem *pFVar10;
  longlong lVar11;
  int iVar12;
  bool bVar13;
  LARGE_INTEGER local_res8;
  FUObjectItem *local_88 [10];
  
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId5253,"GatherUnreachableObjectsTask",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
               ,0x1485);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5253);
  }
  piVar3 = *(int **)((longlong)this + 0x18);
  iVar12 = param_1 * 10;
  dVar1 = **(double **)((longlong)this + 8);
  lVar4 = *(longlong *)this;
  dVar2 = **(double **)((longlong)this + 0x10);
  uVar8 = 0;
  if (param_1 < *(int *)(lVar4 + 0x408)) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  dVar6 = __real_4170000000000000;
  lVar11 = *(longlong *)(lVar4 + 0x400);
  if (*(longlong *)(lVar4 + 0x400) == 0) {
    lVar11 = lVar4;
  }
  lVar11 = lVar11 + (longlong)param_1 * 0x20;
  iVar9 = *(int *)(lVar11 + 4);
  if (iVar9 <= *(int *)(lVar11 + 0xc)) {
    do {
      *(int *)(lVar11 + 4) = iVar9 + 1;
      pFVar10 = FChunkedFixedUObjectArray::GetObjectPtr(&GUObjectArray.ObjObjects,iVar9);
      if ((pFVar10 == (FUObjectItem *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ItemPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x381,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((UE::GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
          (EInternalObjectFlags)((ulonglong)(pFVar10->field0_0x0).FlagsAndRefCount >> 0x20)) !=
          Borrowed) {
        if ((((uint)((ulonglong)(pFVar10->field0_0x0).FlagsAndRefCount >> 0x38) & 1) != 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("!ObjectItem->HasAnyFlags(EInternalObjectFlags::ClusterRoot)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                               ,0x148f,
                               L"Unreachable cluster root found. Unreachable clusters should have been dissolved in DissolveUnreachableClusters!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        do {
          lVar4 = (pFVar10->field0_0x0).FlagsAndRefCount;
          uVar8 = (uint)((ulonglong)lVar4 >> 0x20);
          if ((uVar8 >> 0x1c & 1) != 0) break;
          if (((ulonglong)pFVar10 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (
                      L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          bVar7 = lVar4 == (pFVar10->field0_0x0).FlagsAndRefCount;
          if (bVar7) {
            (pFVar10->field0_0x0).FlagsAndRefCount =
                 (longlong)(int)uVar8 << 0x20 | (longlong)(int)lVar4 | 0x1000000000000000;
          }
          UNLOCK();
        } while (!bVar7);
        local_88[0] = pFVar10;
        if (((*(FUObjectItem ***)(lVar11 + 0x10) <= local_88) &&
            (local_88 < *(FUObjectItem ***)(lVar11 + 0x10) + *(int *)(lVar11 + 0x1c))) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = *(int *)(lVar11 + 0x18);
        if (iVar9 == *(int *)(lVar11 + 0x1c)) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)(lVar11 + 0x10),(int *)(lVar11 + 0x1c));
        }
        *(int *)(lVar11 + 0x18) = iVar9 + 1;
        *(FUObjectItem **)(*(longlong *)(lVar11 + 0x10) + (longlong)iVar9 * 8) = local_88[0];
      }
      if (0.0 < dVar2) {
        if (iVar12 == (iVar12 / 10) * 10) {
          QueryPerformanceCounter(&local_res8);
          iVar12 = iVar12 + 1;
          if (dVar2 <= ((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar6)
                       - dVar1) {
            *piVar3 = 1;
            break;
          }
        }
        else {
          iVar12 = iVar12 + 1;
          if (*piVar3 != 0) break;
        }
      }
      iVar9 = *(int *)(lVar11 + 4);
    } while (iVar9 <= *(int *)(lVar11 + 0xc));
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 142014d90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall `OnDisregardForGCSetDisabled'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  EInternalObjectFlags EVar3;
  bool bVar4;
  uint uVar5;
  EInternalObjectFlags EVar6;
  FUObjectItem *pFVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  int local_res8 [2];
  int local_res10 [4];
  
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId798,"OnDisregardForGCSetDisabledTask",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
               ,0x31e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId798);
  }
  lVar1 = *(longlong *)this;
  uVar5 = 0;
  if (param_1 < *(int *)(lVar1 + 0xc08)) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar9 = *(longlong *)(lVar1 + 0xc00);
  if (*(longlong *)(lVar1 + 0xc00) == 0) {
    lVar9 = lVar1;
  }
  lVar9 = lVar9 + (longlong)param_1 * 0x60;
  iVar8 = *(int *)(lVar9 + 4);
  if (iVar8 <= *(int *)(lVar9 + 0xc)) {
    do {
      *(int *)(lVar9 + 4) = iVar8 + 1;
      local_res10[0] = iVar8;
      pFVar7 = FChunkedFixedUObjectArray::GetObjectPtr(&GUObjectArray.ObjObjects,iVar8);
      if ((pFVar7 == (FUObjectItem *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ItemPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x381,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      EVar3 = UE::GC::Private::FGCFlags::ReachableObjectFlag;
      if ((pFVar7->field1_0x8).Object != (UObjectBase *)0x0) {
        do {
          lVar1 = (pFVar7->field0_0x0).FlagsAndRefCount;
          EVar6 = (EInternalObjectFlags)((ulonglong)lVar1 >> 0x20);
          if ((EVar6 & EVar3) == EVar3) break;
          if (((ulonglong)pFVar7 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (
                      L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          bVar4 = lVar1 == (pFVar7->field0_0x0).FlagsAndRefCount;
          if (bVar4) {
            (pFVar7->field0_0x0).FlagsAndRefCount =
                 (longlong)(int)(EVar6 | EVar3) << 0x20 | (longlong)(int)lVar1;
          }
          UNLOCK();
        } while (!bVar4);
        if (((pFVar7->field0_0x0).FlagsAndRefCount >> 0x20 & 0x4e500000U) != 0) {
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(lVar9 + 0x10),
                     local_res8,(bool *)local_res10);
        }
      }
      iVar8 = *(int *)(lVar9 + 4);
    } while (iVar8 <= *(int *)(lVar9 + 0xc));
  }
  if (!bVar10) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// operator() @ 1420151c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall `VerifyClustersAssumptions'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  int *piVar1;
  UObjectBase *this_00;
  code *pcVar2;
  ulonglong uVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  uint uVar6;
  FUObjectItem *pFVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 auStackY_258 [32];
  ForAnyElementType local_200;
  undefined8 local_1f8;
  undefined1 local_1f0 [8];
  FUObjectItem_u_8 local_1e8;
  FUObjectItem_u_8 local_1e0;
  longlong local_1d8;
  int *local_1d0;
  TFastReferenceCollector<FClusterVerifyReferenceProcessor,UE::GC::TDefaultCollector<FClusterVerifyReferenceProcessor>_>
  local_1c8;
  longlong local_1c0;
  undefined8 *local_1b8;
  FUObjectItem_u_8 *local_1b0;
  int iStack_1a8;
  undefined4 uStack_1a4;
  FClusterVerifyReferenceProcessor local_1a0;
  undefined1 local_180 [192];
  void *local_c0;
  undefined4 local_b8;
  ulonglong local_80;
  
  local_80 = __security_cookie.value ^ (ulonglong)auStackY_258;
  iVar10 = *(int *)((longlong)this + 8);
  local_1d0 = (int *)((longlong)this + 0x10);
  uVar13 = iVar10 * param_1;
  iVar8 = *(int *)((longlong)this + 0xc) + -1;
  if (iVar8 <= param_1) {
    iVar10 = *local_1d0 - iVar10 * iVar8;
  }
  local_1a0.NumErrors.Counter = 0;
  local_1a0.ClusterRootObject = (UObject *)0x0;
  local_200.Data = (FScriptContainerElement *)0x0;
  local_1f8 = 0;
  local_1a0.CurrentObject = (UObject *)0x0;
  local_1a0.Cluster = (FUObjectCluster *)0x0;
  local_1b8 = this;
  if (0 < iVar10) {
    local_1c0 = (longlong)iVar10;
    local_1d8 = 0;
    lVar14 = (longlong)(int)uVar13 * 0x50;
    do {
      if (*local_1d0 <= (int)uVar13) break;
      uVar6 = 0;
      if ((int)uVar13 < GUObjectClusters.Clusters.ArrayNum) {
        uVar6 = ~uVar13 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (-1 < *(int *)(GUObjectClusters.Clusters.AllocatorInstance.Data + lVar14)) {
        pFVar12 = GUObjectClusters.Clusters.AllocatorInstance.Data + lVar14;
        if (*(int *)(GUObjectClusters.Clusters.AllocatorInstance.Data + lVar14 + 0x10) != 0) {
          uVar6 = *(int *)(GUObjectClusters.Clusters.AllocatorInstance.Data + lVar14 + 0x10) + 0x11;
          if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
          }
          uVar3 = local_1f8 >> 0x20;
          local_1f8 = local_1f8 & 0xffffffff00000000;
          if ((int)uVar3 < (int)uVar6) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,uVar6,&local_200,0,(int *)((longlong)&local_1f8 + 4));
          }
          pFVar7 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)pFVar12);
          if ((pFVar7 == (FUObjectItem *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("RootItem",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollectionVerification.cpp"
                                 ,0x16c,L""), bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (((pFVar7->field1_0x8).Object == (UObjectBase *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("RootItem->GetObject()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollectionVerification.cpp"
                                 ,0x16d,L""), bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          local_1e8 = pFVar7->field1_0x8;
          if (((local_200.Data <= &local_1e8) &&
              (&local_1e8 < (FUObjectItem_u_8 *)(local_200.Data + (longlong)local_1f8._4_4_ * 8)))
             && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar10 = (int)local_1f8;
          if ((int)local_1f8 == local_1f8._4_4_) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_200,(int *)((longlong)&local_1f8 + 4));
          }
          local_1f8 = CONCAT44(local_1f8._4_4_,iVar10 + 1);
          *(FUObjectItem_u_8 *)(local_200.Data + (longlong)iVar10 * 8) = local_1e8;
          piVar9 = *(int **)(pFVar12 + 8);
          iVar10 = *(int *)(pFVar12 + 0x10);
          piVar1 = piVar9 + iVar10;
          while( true ) {
            if (*(int *)(pFVar12 + 0x10) != iVar10) {
              local_1f0[0] = 0;
              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_1f0);
            }
            if (piVar9 == piVar1) break;
            iVar8 = *piVar9;
            if ((iVar8 < 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                   ,0x443,L""), bVar5)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if (iVar8 < GUObjectArray.ObjObjects.NumElements) {
              pFVar7 = FChunkedFixedUObjectArray::GetObjectPtr(&GUObjectArray.ObjObjects,iVar8);
              if ((pFVar7 == (FUObjectItem *)0x0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ItemPtr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                     ,0x381,L""), bVar5)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              if (pFVar7 == (FUObjectItem *)0x0) goto LAB_1420154bd;
            }
            else {
              pFVar7 = (FUObjectItem *)0x0;
LAB_1420154bd:
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ObjectItem",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollectionVerification.cpp"
                                 ,0x173,L"");
              if (bVar5) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
            if (((pFVar7->field1_0x8).Object == (UObjectBase *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ObjectItem->GetObject()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollectionVerification.cpp"
                                   ,0x174,L""), bVar5)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            local_1e0 = pFVar7->field1_0x8;
            if (((local_200.Data <= &local_1e0) &&
                (&local_1e0 < (FUObjectItem_u_8 *)(local_200.Data + (longlong)local_1f8._4_4_ * 8)))
               && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar5)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            iVar8 = (int)local_1f8;
            if ((int)local_1f8 == local_1f8._4_4_) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&local_200,(int *)((longlong)&local_1f8 + 4));
            }
            piVar9 = piVar9 + 1;
            local_1f8 = CONCAT44(local_1f8._4_4_,iVar8 + 1);
            *(FUObjectItem_u_8 *)(local_200.Data + (longlong)iVar8 * 8) = local_1e0;
          }
          UE::GC::FWorkerContext::FWorkerContext((FWorkerContext *)local_180);
          lVar11 = (longlong)(int)local_1f8;
          if ((int)local_1f8 == 0) {
            iVar10 = 0;
          }
          else {
            uVar6 = (int)local_1f8 + 0x10;
            if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
            }
            if (local_1f8._4_4_ < (int)uVar6) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,uVar6,&local_200,(int)local_1f8,(int *)((longlong)&local_1f8 + 4));
            }
            pFVar12 = local_200.Data + lVar11 * 8;
            uVar6 = 0;
            if ((int)((int)local_1f8 - 1U) < (int)local_1f8) {
              uVar6 = ~((int)local_1f8 - 1U) >> 0x1f;
            }
            iVar10 = (int)local_1f8;
            if (uVar6 == 0) {
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar5) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              iVar10 = (int)local_1f8;
            }
            this_00 = *(UObjectBase **)(local_200.Data + (longlong)(iVar10 + -1) * 8);
            bVar5 = UObjectBase::IsValidLowLevel(this_00);
            if ((!bVar5) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("LastObject->IsValidLowLevel()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                   ,0x832,L""), bVar5)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            lVar11 = 0x10;
            if (pFVar12 <= pFVar12 + 0x80) {
              for (; lVar11 != 0; lVar11 = lVar11 + -1) {
                *(UObjectBase **)pFVar12 = this_00;
                pFVar12 = pFVar12 + 8;
              }
            }
            iVar10 = (int)local_1f8;
          }
          FVar4.Data = local_200.Data;
          local_1b0 = (FUObjectItem_u_8 *)local_200.Data;
          if ((iVar10 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iStack_1a8 = iVar10;
          if (((iVar10 != 0) &&
              (bVar5 = UObjectBase::IsValidLowLevel
                                 (*(UObjectBase **)(FVar4.Data + (ulonglong)(iVar10 + 0xf) * 8)),
              !bVar5)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("PaddedObjects.IsEmpty() || PaddedObjects.GetData()[PaddedObjects.Num() + ObjectLookahead - 1]->IsValidLowLevel()"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\FastReferenceCollector.h"
                                 ,0x181,L""), bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          local_180._20_4_ = uStack_1a4;
          local_180._16_4_ = iStack_1a8;
          local_1c8.Processor = &local_1a0;
          local_180._8_8_ = local_1b0;
          UE::GC::
          TFastReferenceCollector<FClusterVerifyReferenceProcessor,UE::GC::TDefaultCollector<FClusterVerifyReferenceProcessor>_>
          ::ProcessObjectArray(&local_1c8,(FWorkerContext *)local_180);
          UE::GC::FWorkerContext::FreeWorkerIndex((FWorkerContext *)local_180);
          local_b8 = 0;
          if (local_c0 != (void *)0x0) {
            FMemory::Free(local_c0);
          }
          TSparseArray<TSparseSetElement<TTuple<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)(local_180 + 0x80));
          if ((FScriptContainerElement *)local_180._112_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_180._112_8_);
          }
          if ((FScriptContainerElement *)local_180._80_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_180._80_8_);
          }
          UE::GC::FWorkBlockifier::~FWorkBlockifier((FWorkBlockifier *)(local_180 + 0x18));
        }
      }
      uVar13 = uVar13 + 1;
      local_1d8 = local_1d8 + 1;
      lVar14 = lVar14 + 0x50;
    } while (local_1d8 < local_1c0);
  }
  LOCK();
  *(int *)*local_1b8 = *(int *)*local_1b8 + local_1a0.NumErrors.Counter;
  UNLOCK();
  if ((FUObjectItem_u_8 *)local_200.Data != (FUObjectItem_u_8 *)0x0) {
    FMemory::Free(local_200.Data);
  }
  return;
}

// operator() @ 142015840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall `VerifyGCAssumptions'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  int iVar1;
  UGCObjectReferencer *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FUObjectItem *pFVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined1 auStackY_208 [32];
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_180;
  UGCObjectReferencer *local_170;
  TFastReferenceCollector<FDisregardSetReferenceProcessor,UE::GC::TDefaultCollector<FDisregardSetReferenceProcessor>_>
  local_168 [5];
  undefined1 local_140 [192];
  void *local_80;
  undefined4 local_78;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_208;
  iVar1 = *(int *)((longlong)this + 8);
  iVar7 = *(int *)((longlong)this + 0xc) + -1;
  iVar8 = iVar1;
  if (iVar7 <= param_1) {
    iVar8 = *(int *)((longlong)this + 0x10) - iVar1 * iVar7;
  }
  uVar9 = iVar1 + 0x10;
  local_180.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_180.ArrayNum = 0;
  local_180.ArrayMax = 0;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  if (0 < (int)uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar9,&local_180.AllocatorInstance,0,&local_180.ArrayMax);
  }
  iVar7 = iVar1 * param_1;
  if (0 < iVar8) {
    do {
      if (*(int *)((longlong)this + 0x10) <= iVar7) break;
      pFVar6 = FChunkedFixedUObjectArray::GetObjectPtr(&GUObjectArray.ObjObjects,iVar7);
      if ((pFVar6 == (FUObjectItem *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ItemPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x381,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar2 = (UGCObjectReferencer *)(pFVar6->field1_0x8).Object;
      if ((pUVar2 != (UGCObjectReferencer *)0x0) && (pUVar2 != FGCObject::GGCObjectReferencer)) {
        local_170 = pUVar2;
        if ((local_180.AllocatorInstance.Data <= (FScriptContainerElement *)&local_170) &&
           (((FScriptContainerElement *)&local_170 <
             local_180.AllocatorInstance.Data + (longlong)local_180.ArrayMax * 8 &&
            (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)))) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = local_180.ArrayNum;
        if (local_180.ArrayNum == local_180.ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_180.AllocatorInstance,&local_180.ArrayMax);
        }
        local_180.ArrayNum = iVar5 + 1;
        *(UGCObjectReferencer **)(local_180.AllocatorInstance.Data + (longlong)iVar5 * 8) =
             local_170;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 - iVar1 * param_1 < iVar8);
  }
  UE::GC::FWorkerContext::FWorkerContext((FWorkerContext *)local_140);
  UE::GC::FWorkerContext::SetInitialObjectsUnpadded((FWorkerContext *)local_140,&local_180);
  local_168[0].Processor = *(FDisregardSetReferenceProcessor **)this;
  UE::GC::
  TFastReferenceCollector<FDisregardSetReferenceProcessor,UE::GC::TDefaultCollector<FDisregardSetReferenceProcessor>_>
  ::ProcessObjectArray(local_168,(FWorkerContext *)local_140);
  UE::GC::FWorkerContext::FreeWorkerIndex((FWorkerContext *)local_140);
  local_78 = 0;
  if (local_80 != (void *)0x0) {
    FMemory::Free(local_80);
  }
  TSparseArray<TSparseSetElement<TTuple<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_140 + 0x80));
  if ((FScriptContainerElement *)local_140._112_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_140._112_8_);
  }
  if ((FScriptContainerElement *)local_140._80_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_140._80_8_);
  }
  UE::GC::FWorkBlockifier::~FWorkBlockifier((FWorkBlockifier *)(local_140 + 0x18));
  if (local_180.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 142015ac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `VerifyNoUnreachableObjects'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  uint uVar1;
  UObjectBase *pUVar2;
  code *pcVar3;
  bool bVar4;
  EInternalObjectFlags EVar5;
  int iVar6;
  FUObjectItem *pFVar7;
  FUObjectItem *pFVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined1 auStackY_318 [32];
  UObjectBase *local_2c0;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_2b8;
  int local_2a8;
  FUnreachableReferenceProcessor local_2a4;
  TFastReferenceCollector<FUnreachableReferenceProcessor,UE::GC::TDefaultCollector<FUnreachableReferenceProcessor>_>
  local_2a0;
  FGCObjectInfo local_298;
  FGCObjectInfo local_268;
  FGCObjectInfo local_238;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8 [3];
  undefined1 local_180 [192];
  void *local_c0;
  undefined4 local_b8;
  ulonglong local_80;
  
  local_80 = __security_cookie.value ^ (ulonglong)auStackY_318;
  uVar1 = *(uint *)((longlong)this + 0x10);
  iVar12 = param_1 * uVar1;
  iVar9 = *(int *)((longlong)this + 0x14) + -1;
  uVar10 = uVar1;
  if (iVar9 <= param_1) {
    uVar10 = *(int *)((longlong)this + 0x18) - uVar1 * iVar9;
  }
  local_2b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2b8.ArrayNum = 0;
  local_2b8.ArrayMax = 0;
  local_2a8 = iVar12;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (0 < (int)uVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar1,&local_2b8.AllocatorInstance,0,&local_2b8.ArrayMax);
  }
  iVar11 = 0;
  iVar9 = iVar12;
  iVar6 = 0;
  if (0 < (int)uVar10) {
    do {
      iVar11 = iVar6;
      if (GUObjectArray.ObjObjects.NumElements <= iVar9) break;
      pFVar7 = FChunkedFixedUObjectArray::GetObjectPtr(&GUObjectArray.ObjObjects,iVar9);
      if ((pFVar7 == (FUObjectItem *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ItemPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x381,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar2 = (pFVar7->field1_0x8).Object;
      if (pUVar2 != (UObjectBase *)0x0) {
        EVar5 = (EInternalObjectFlags)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x20);
        local_2c0 = pUVar2;
        if (((uint)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0) {
          if ((UE::GC::Private::FGCFlags::MaybeUnreachableObjectFlag & EVar5) != Borrowed) {
            if (2 < (byte)LogGarbage._0_1_) {
              UObjectBaseUtility::GetFullName
                        ((UObjectBaseUtility *)pUVar2,&local_1f8,(UObject *)0x0,None);
              pUVar2 = local_2c0;
              local_298.Name = (local_2c0->NamePrivate).Name;
              local_298.Class = (FGCObjectInfo *)0x0;
              local_298.Outer = (FGCObjectInfo *)0x0;
              local_298.Flags = local_2c0->ObjectFlags;
              pFVar8 = FUObjectArray::IndexToObject(&GUObjectArray,local_2c0->InternalIndex);
              local_298.InternalFlags =
                   (EInternalObjectFlags)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x20);
              pFVar8 = FUObjectArray::IndexToObject(&GUObjectArray,pUVar2->InternalIndex);
              local_298.ClusterRootIndex = pFVar8->ClusterRootIndex;
              local_298.bDisregardForGC = pUVar2->InternalIndex <= GUObjectArray.ObjLastNonGCIndex;
              pFVar8 = FUObjectArray::IndexToObject(&GUObjectArray,pUVar2->InternalIndex);
              local_298.RefCount = *(int *)&pFVar8->field0_0x0;
              FReferenceChainSearch::GetObjectFlags(&local_208,&local_298);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGarbage);
              if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_208.Data.AllocatorInstance.Data);
              }
              iVar12 = local_2a8;
              if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
                iVar12 = local_2a8;
              }
            }
            LOCK();
            **(int **)this = **(int **)this + 1;
            UNLOCK();
          }
          if (((UE::GC::Private::FGCFlags::ReachableObjectFlag &
               (EInternalObjectFlags)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x20)) ==
               Borrowed) && (GUObjectArray.ObjLastNonGCIndex < local_2c0->InternalIndex)) {
            if (2 < (byte)LogGarbage._0_1_) {
              UObjectBaseUtility::GetFullName
                        ((UObjectBaseUtility *)local_2c0,&local_1d8,(UObject *)0x0,None);
              pUVar2 = local_2c0;
              local_268.Name = (local_2c0->NamePrivate).Name;
              local_268.Class = (FGCObjectInfo *)0x0;
              local_268.Outer = (FGCObjectInfo *)0x0;
              local_268.Flags = local_2c0->ObjectFlags;
              pFVar7 = FUObjectArray::IndexToObject(&GUObjectArray,local_2c0->InternalIndex);
              local_268.InternalFlags =
                   (EInternalObjectFlags)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x20);
              pFVar7 = FUObjectArray::IndexToObject(&GUObjectArray,pUVar2->InternalIndex);
              local_268.ClusterRootIndex = pFVar7->ClusterRootIndex;
              local_268.bDisregardForGC = pUVar2->InternalIndex <= GUObjectArray.ObjLastNonGCIndex;
              pFVar7 = FUObjectArray::IndexToObject(&GUObjectArray,pUVar2->InternalIndex);
              local_268.RefCount = *(int *)&pFVar7->field0_0x0;
              FReferenceChainSearch::GetObjectFlags(&local_1e8,&local_268);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGarbage);
              if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
              }
              if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
              }
            }
            LOCK();
            **(int **)this = **(int **)this + 1;
            UNLOCK();
          }
          if (((local_2b8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_2c0) &&
              ((FScriptContainerElement *)&local_2c0 <
               local_2b8.AllocatorInstance.Data + (longlong)local_2b8.ArrayMax * 8)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar6 = local_2b8.ArrayNum;
          if (local_2b8.ArrayNum == local_2b8.ArrayMax) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_2b8.AllocatorInstance,&local_2b8.ArrayMax);
          }
          local_2b8.ArrayNum = iVar6 + 1;
          *(UObjectBase **)(local_2b8.AllocatorInstance.Data + (longlong)iVar6 * 8) = local_2c0;
        }
        else {
          iVar11 = iVar11 + 1;
          if ((UE::GC::Private::FGCFlags::ReachableObjectFlag & EVar5) != Borrowed) {
            if (2 < (byte)LogGarbage._0_1_) {
              UObjectBaseUtility::GetFullName
                        ((UObjectBaseUtility *)pUVar2,local_1b8,(UObject *)0x0,None);
              pUVar2 = local_2c0;
              local_238.Name = (local_2c0->NamePrivate).Name;
              local_238.Class = (FGCObjectInfo *)0x0;
              local_238.Outer = (FGCObjectInfo *)0x0;
              local_238.Flags = local_2c0->ObjectFlags;
              pFVar7 = FUObjectArray::IndexToObject(&GUObjectArray,local_2c0->InternalIndex);
              local_238.InternalFlags =
                   (EInternalObjectFlags)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x20);
              pFVar7 = FUObjectArray::IndexToObject(&GUObjectArray,pUVar2->InternalIndex);
              local_238.ClusterRootIndex = pFVar7->ClusterRootIndex;
              local_238.bDisregardForGC = pUVar2->InternalIndex <= GUObjectArray.ObjLastNonGCIndex;
              pFVar7 = FUObjectArray::IndexToObject(&GUObjectArray,pUVar2->InternalIndex);
              local_238.RefCount = *(int *)&pFVar7->field0_0x0;
              FReferenceChainSearch::GetObjectFlags(&local_1c8,&local_238);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGarbage);
              if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
              }
              if (local_1b8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1b8[0].Data.AllocatorInstance.Data);
              }
            }
            LOCK();
            **(int **)this = **(int **)this + 1;
            UNLOCK();
          }
        }
      }
      iVar9 = iVar9 + 1;
      iVar6 = iVar11;
    } while (iVar9 - iVar12 < (int)uVar10);
  }
  if (0 < *(int *)((longlong)this + 0x1c)) {
    local_2a4.NumErrors = 0;
    UE::GC::FWorkerContext::FWorkerContext((FWorkerContext *)local_180);
    UE::GC::FWorkerContext::SetInitialObjectsUnpadded((FWorkerContext *)local_180,&local_2b8);
    local_2a0.Processor = &local_2a4;
    UE::GC::
    TFastReferenceCollector<FUnreachableReferenceProcessor,UE::GC::TDefaultCollector<FUnreachableReferenceProcessor>_>
    ::ProcessObjectArray(&local_2a0,(FWorkerContext *)local_180);
    LOCK();
    **(int **)this = **(int **)this + local_2a4.NumErrors;
    UNLOCK();
    UE::GC::FWorkerContext::FreeWorkerIndex((FWorkerContext *)local_180);
    local_b8 = 0;
    if (local_c0 != (void *)0x0) {
      FMemory::Free(local_c0);
    }
    TSparseArray<TSparseSetElement<TTuple<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_180 + 0x80));
    if ((FScriptContainerElement *)local_180._112_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_180._112_8_);
    }
    if ((FScriptContainerElement *)local_180._80_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_180._80_8_);
    }
    UE::GC::FWorkBlockifier::~FWorkBlockifier((FWorkBlockifier *)(local_180 + 0x18));
  }
  LOCK();
  **(int **)((longlong)this + 8) = **(int **)((longlong)this + 8) + iVar11;
  UNLOCK();
  if (local_2b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 142016100

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `VerifyObjectFlags'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  UObjectBase *this_00;
  code *pcVar1;
  bool bVar2;
  FUObjectItem *pFVar3;
  FUObjectItem *pFVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  FGCObjectInfo local_128;
  FGCObjectInfo local_f8;
  FGCObjectInfo local_c8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  iVar7 = *(int *)((longlong)this + 8);
  iVar6 = iVar7 * param_1;
  iVar5 = *(int *)((longlong)this + 0xc) + -1;
  if (iVar5 <= param_1) {
    iVar7 = *(int *)((longlong)this + 0x10) - iVar7 * iVar5;
  }
  iVar5 = iVar6;
  if (0 < iVar7) {
    do {
      if (*(int *)((longlong)this + 0x10) <= iVar5) {
        return;
      }
      pFVar3 = FChunkedFixedUObjectArray::GetObjectPtr(&GUObjectArray.ObjObjects,iVar5);
      if ((pFVar3 == (FUObjectItem *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ItemPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                             ,0x381,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_00 = (pFVar3->field1_0x8).Object;
      if (this_00 != (UObjectBase *)0x0) {
        if (((byte)(this_00->ObjectFlags >> 0x1e) & 1) !=
            ((byte)((ulonglong)((pFVar3->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x15) & 1)) {
          if (2 < (byte)LogGarbage._0_1_) {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)this_00,&local_88,(UObject *)0x0,None);
            local_128.Name = (this_00->NamePrivate).Name;
            local_128.Flags = this_00->ObjectFlags;
            local_128.Class = (FGCObjectInfo *)0x0;
            local_128.Outer = (FGCObjectInfo *)0x0;
            pFVar4 = FUObjectArray::IndexToObject(&GUObjectArray,this_00->InternalIndex);
            local_128.InternalFlags =
                 (EInternalObjectFlags)((ulonglong)(pFVar4->field0_0x0).FlagsAndRefCount >> 0x20);
            pFVar4 = FUObjectArray::IndexToObject(&GUObjectArray,this_00->InternalIndex);
            local_128.ClusterRootIndex = pFVar4->ClusterRootIndex;
            local_128.bDisregardForGC = this_00->InternalIndex <= GUObjectArray.ObjLastNonGCIndex;
            pFVar4 = FUObjectArray::IndexToObject(&GUObjectArray,this_00->InternalIndex);
            local_128.RefCount = *(int *)&pFVar4->field0_0x0;
            FReferenceChainSearch::GetObjectFlags(&local_98,&local_128);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGarbage);
            if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_98.Data.AllocatorInstance.Data);
            }
            if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_88.Data.AllocatorInstance.Data);
            }
          }
          LOCK();
          **(int **)this = **(int **)this + 1;
          UNLOCK();
        }
        if (((UE::GC::Private::FGCFlags::ReachableObjectFlag &
             (EInternalObjectFlags)((ulonglong)(pFVar3->field0_0x0).FlagsAndRefCount >> 0x20)) ==
             Borrowed) && (GUObjectArray.ObjLastNonGCIndex < this_00->InternalIndex)) {
          if (2 < (byte)LogGarbage._0_1_) {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)this_00,&local_68,(UObject *)0x0,None);
            local_f8.Name = (this_00->NamePrivate).Name;
            local_f8.Flags = this_00->ObjectFlags;
            local_f8.Class = (FGCObjectInfo *)0x0;
            local_f8.Outer = (FGCObjectInfo *)0x0;
            pFVar4 = FUObjectArray::IndexToObject(&GUObjectArray,this_00->InternalIndex);
            local_f8.InternalFlags =
                 (EInternalObjectFlags)((ulonglong)(pFVar4->field0_0x0).FlagsAndRefCount >> 0x20);
            pFVar4 = FUObjectArray::IndexToObject(&GUObjectArray,this_00->InternalIndex);
            local_f8.ClusterRootIndex = pFVar4->ClusterRootIndex;
            local_f8.bDisregardForGC = this_00->InternalIndex <= GUObjectArray.ObjLastNonGCIndex;
            pFVar4 = FUObjectArray::IndexToObject(&GUObjectArray,this_00->InternalIndex);
            local_f8.RefCount = *(int *)&pFVar4->field0_0x0;
            FReferenceChainSearch::GetObjectFlags(&local_78,&local_f8);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGarbage);
            if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.Data.AllocatorInstance.Data);
            }
            if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.Data.AllocatorInstance.Data);
            }
          }
          LOCK();
          **(int **)this = **(int **)this + 1;
          UNLOCK();
        }
        if (((UE::GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
             (EInternalObjectFlags)((ulonglong)(pFVar3->field0_0x0).FlagsAndRefCount >> 0x20)) !=
             Borrowed) ||
           (((uint)((ulonglong)(pFVar3->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) != 0)) {
          if (2 < (byte)LogGarbage._0_1_) {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)this_00,&local_48,(UObject *)0x0,None);
            local_c8.Name = (this_00->NamePrivate).Name;
            local_c8.Flags = this_00->ObjectFlags;
            local_c8.Class = (FGCObjectInfo *)0x0;
            local_c8.Outer = (FGCObjectInfo *)0x0;
            pFVar3 = FUObjectArray::IndexToObject(&GUObjectArray,this_00->InternalIndex);
            local_c8.InternalFlags =
                 (EInternalObjectFlags)((ulonglong)(pFVar3->field0_0x0).FlagsAndRefCount >> 0x20);
            pFVar3 = FUObjectArray::IndexToObject(&GUObjectArray,this_00->InternalIndex);
            local_c8.ClusterRootIndex = pFVar3->ClusterRootIndex;
            local_c8.bDisregardForGC = this_00->InternalIndex <= GUObjectArray.ObjLastNonGCIndex;
            pFVar3 = FUObjectArray::IndexToObject(&GUObjectArray,this_00->InternalIndex);
            local_c8.RefCount = *(int *)&pFVar3->field0_0x0;
            FReferenceChainSearch::GetObjectFlags(&local_58,&local_c8);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGarbage);
            if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Data.AllocatorInstance.Data);
            }
            if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_48.Data.AllocatorInstance.Data);
            }
          }
          LOCK();
          **(int **)this = **(int **)this + 1;
          UNLOCK();
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 - iVar6 < iVar7);
  }
  return;
}

// operator() @ 142016a80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
<lambda_5>::operator()(<lambda_5> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FGCHistory *pFVar2;
  FGCSnapshot *this_00;
  FGCSnapshot *pFVar3;
  undefined1 local_res18 [16];
  
  pFVar2 = FGCHistory::Get();
  iVar1 = (pFVar2->Snapshots).ArrayNum;
  this_00 = (FGCSnapshot *)(pFVar2->Snapshots).AllocatorInstance.Data;
  pFVar3 = this_00 + iVar1;
  while( true ) {
    if ((pFVar2->Snapshots).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FGCSnapshot_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (this_00 == pFVar3) break;
    FGCSnapshot::GetAllocatedSize(this_00);
    this_00 = this_00 + 1;
  }
  if (3 < (byte)LogGarbage._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogGarbage);
  }
  return;
}

// operator() @ 142016b30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
<lambda_6>::operator()(<lambda_6> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FGCHistory *this_00;
  wchar_t *_Str;
  
  if (param_1->ArrayNum == 0) {
    if (3 < (byte)LogGarbage._0_1_) {
      FGCHistory::Get();
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogGarbage);
      return;
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
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    this_00 = FGCHistory::Get();
    FGCHistory::SetHistorySize(this_00,iVar4);
    if (3 < (byte)LogGarbage._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogGarbage);
      return;
    }
  }
  return;
}

// `scalar_deleting_destructor' @ 142016cb0

void * __thiscall
UE::GC::TDebugReachabilityCollector<1>::_scalar_deleting_destructor_
          (TDebugReachabilityCollector<1> *this,uint param_1)

{
  FReferenceCollector::~FReferenceCollector((FReferenceCollector *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142016cf0

void * __thiscall
UE::GC::TDebugReachabilityCollector<4>::_scalar_deleting_destructor_
          (TDebugReachabilityCollector<4> *this,uint param_1)

{
  FReferenceCollector::~FReferenceCollector((FReferenceCollector *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142016d30

void * __thiscall
UE::GC::TDebugReachabilityCollector<5>::_scalar_deleting_destructor_
          (TDebugReachabilityCollector<5> *this,uint param_1)

{
  FReferenceCollector::~FReferenceCollector((FReferenceCollector *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142016d70

void * __thiscall
UE::GC::TDebugReachabilityCollector<8>::_scalar_deleting_destructor_
          (TDebugReachabilityCollector<8> *this,uint param_1)

{
  FReferenceCollector::~FReferenceCollector((FReferenceCollector *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142016db0

void * __thiscall
UE::GC::TDebugReachabilityCollector<9>::_scalar_deleting_destructor_
          (TDebugReachabilityCollector<9> *this,uint param_1)

{
  FReferenceCollector::~FReferenceCollector((FReferenceCollector *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142016df0

void * __thiscall
UE::GC::TDebugReachabilityCollector<0>::_scalar_deleting_destructor_
          (TDebugReachabilityCollector<0> *this,uint param_1)

{
  FReferenceCollector::~FReferenceCollector((FReferenceCollector *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142016e30

void * __thiscall
UE::GC::TDebugReachabilityCollector<12>::_scalar_deleting_destructor_
          (TDebugReachabilityCollector<12> *this,uint param_1)

{
  FReferenceCollector::~FReferenceCollector((FReferenceCollector *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142016e70

void * __thiscall
UE::GC::TDebugReachabilityCollector<13>::_scalar_deleting_destructor_
          (TDebugReachabilityCollector<13> *this,uint param_1)

{
  FReferenceCollector::~FReferenceCollector((FReferenceCollector *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142016eb0

void * __thiscall
UE::GC::TDefaultCollector<FClusterVerifyReferenceProcessor>::_scalar_deleting_destructor_
          (TDefaultCollector<FClusterVerifyReferenceProcessor> *this,uint param_1)

{
  FReferenceCollector::~FReferenceCollector((FReferenceCollector *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142016ef0

void * __thiscall
UE::GC::TDefaultCollector<FDisregardSetReferenceProcessor>::_scalar_deleting_destructor_
          (TDefaultCollector<FDisregardSetReferenceProcessor> *this,uint param_1)

{
  FReferenceCollector::~FReferenceCollector((FReferenceCollector *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142016f30

void * __thiscall
UE::GC::TDefaultCollector<FUnreachableReferenceProcessor>::_scalar_deleting_destructor_
          (TDefaultCollector<FUnreachableReferenceProcessor> *this,uint param_1)

{
  FReferenceCollector::~FReferenceCollector((FReferenceCollector *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142016f70

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::Tasks::Wait<TArray<UE::Tasks::TTask<void>,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

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

// `scalar_deleting_destructor' @ 142016fe0

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`UE::GC::FRealtimeGC::BeginInitialReferenceCollection'::__l5::<lambda_1>_>::
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

// `scalar_deleting_destructor' @ 142017050

void * __thiscall
UE::Tasks::Private::TExecutableTask<`UE::GC::ProcessAsync'::__l8::<lambda_1>_>::
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

// `scalar_deleting_destructor' @ 1420170c0

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::Tasks::Wait<TArray<UE::Tasks::TTask<void>,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142017100

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::GC::FRealtimeGC::BeginInitialReferenceCollection'::__l5::<lambda_1>,void,void>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142017140

void * __thiscall
UE::Tasks::Private::TExecutableTaskBase<`UE::GC::ProcessAsync'::__l8::<lambda_1>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142017180

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::GC::FWorkCoordinator,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::GC::FWorkCoordinator,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1420171c0

void * __thiscall
UE::GC::TReachabilityCollector<1>::_scalar_deleting_destructor_
          (TReachabilityCollector<1> *this,uint param_1)

{
  FStructBatcher::~FStructBatcher(&(this->Dispatcher).StructBatcher);
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<1>_>
  ::
  ~TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<1>_>
            (&(this->Dispatcher).ImmutableBatcher);
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<1>_>
  ::
  ~TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<1>_>
            (&(this->Dispatcher).KillableBatcher);
  FReferenceCollector::~FReferenceCollector((FReferenceCollector *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x77c0,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142017230

void * __thiscall
UE::GC::TReachabilityCollector<4>::_scalar_deleting_destructor_
          (TReachabilityCollector<4> *this,uint param_1)

{
  FStructBatcher::~FStructBatcher(&(this->Dispatcher).StructBatcher);
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<4>_>
  ::
  ~TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<4>_>
            (&(this->Dispatcher).ImmutableBatcher);
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<4>_>
  ::
  ~TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<4>_>
            (&(this->Dispatcher).KillableBatcher);
  FReferenceCollector::~FReferenceCollector((FReferenceCollector *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x77c0,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1420172a0

void * __thiscall
UE::GC::TReachabilityCollector<5>::_scalar_deleting_destructor_
          (TReachabilityCollector<5> *this,uint param_1)

{
  FStructBatcher::~FStructBatcher(&(this->Dispatcher).StructBatcher);
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<5>_>
  ::
  ~TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<5>_>
            (&(this->Dispatcher).ImmutableBatcher);
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<5>_>
  ::
  ~TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<5>_>
            (&(this->Dispatcher).KillableBatcher);
  FReferenceCollector::~FReferenceCollector((FReferenceCollector *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x77c0,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142017310

void * __thiscall
UE::GC::TReachabilityCollector<8>::_scalar_deleting_destructor_
          (TReachabilityCollector<8> *this,uint param_1)

{
  FStructBatcher::~FStructBatcher(&(this->Dispatcher).StructBatcher);
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<8>_>
  ::
  ~TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<8>_>
            (&(this->Dispatcher).ImmutableBatcher);
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<8>_>
  ::
  ~TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<8>_>
            (&(this->Dispatcher).KillableBatcher);
  FReferenceCollector::~FReferenceCollector((FReferenceCollector *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x77c0,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142017380

void * __thiscall
UE::GC::TReachabilityCollector<9>::_scalar_deleting_destructor_
          (TReachabilityCollector<9> *this,uint param_1)

{
  FStructBatcher::~FStructBatcher(&(this->Dispatcher).StructBatcher);
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<9>_>
  ::
  ~TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<9>_>
            (&(this->Dispatcher).ImmutableBatcher);
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<9>_>
  ::
  ~TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<9>_>
            (&(this->Dispatcher).KillableBatcher);
  FReferenceCollector::~FReferenceCollector((FReferenceCollector *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x77c0,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1420173f0

void * __thiscall
UE::GC::TReachabilityCollector<0>::_scalar_deleting_destructor_
          (TReachabilityCollector<0> *this,uint param_1)

{
  FStructBatcher::~FStructBatcher(&(this->Dispatcher).StructBatcher);
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<0>_>
  ::
  ~TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<0>_>
            (&(this->Dispatcher).ImmutableBatcher);
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<0>_>
  ::
  ~TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<0>_>
            (&(this->Dispatcher).KillableBatcher);
  FReferenceCollector::~FReferenceCollector((FReferenceCollector *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x77c0,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142017460

void * __thiscall
UE::GC::TReachabilityCollector<12>::_scalar_deleting_destructor_
          (TReachabilityCollector<12> *this,uint param_1)

{
  FStructBatcher::~FStructBatcher(&(this->Dispatcher).StructBatcher);
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<12>_>
  ::
  ~TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<12>_>
            (&(this->Dispatcher).ImmutableBatcher);
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<12>_>
  ::
  ~TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<12>_>
            (&(this->Dispatcher).KillableBatcher);
  FReferenceCollector::~FReferenceCollector((FReferenceCollector *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x77c0,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1420174d0

void * __thiscall
UE::GC::TReachabilityCollector<13>::_scalar_deleting_destructor_
          (TReachabilityCollector<13> *this,uint param_1)

{
  FStructBatcher::~FStructBatcher(&(this->Dispatcher).StructBatcher);
  TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<13>_>
  ::
  ~TReferenceBatcher<UE::GC::FImmutableReference,UE::GC::FImmutableReference,UE::GC::TReachabilityProcessor<13>_>
            (&(this->Dispatcher).ImmutableBatcher);
  TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<13>_>
  ::
  ~TReferenceBatcher<UE::GC::FMutableReference,UE::GC::FResolvedMutableReference,UE::GC::TReachabilityProcessor<13>_>
            (&(this->Dispatcher).KillableBatcher);
  FReferenceCollector::~FReferenceCollector((FReferenceCollector *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x77c0,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142017540

void * __thiscall
UE::GC::TReachabilityCollectorBase<1>::_scalar_deleting_destructor_
          (TReachabilityCollectorBase<1> *this,uint param_1)

{
  FReferenceCollector::~FReferenceCollector((FReferenceCollector *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142017580

void * __thiscall
UE::GC::TReachabilityCollectorBase<4>::_scalar_deleting_destructor_
          (TReachabilityCollectorBase<4> *this,uint param_1)

{
  FReferenceCollector::~FReferenceCollector((FReferenceCollector *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1420175c0

void * __thiscall
UE::GC::TReachabilityCollectorBase<5>::_scalar_deleting_destructor_
          (TReachabilityCollectorBase<5> *this,uint param_1)

{
  FReferenceCollector::~FReferenceCollector((FReferenceCollector *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142017600

void * __thiscall
UE::GC::TReachabilityCollectorBase<8>::_scalar_deleting_destructor_
          (TReachabilityCollectorBase<8> *this,uint param_1)

{
  FReferenceCollector::~FReferenceCollector((FReferenceCollector *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142017640

void * __thiscall
UE::GC::TReachabilityCollectorBase<9>::_scalar_deleting_destructor_
          (TReachabilityCollectorBase<9> *this,uint param_1)

{
  FReferenceCollector::~FReferenceCollector((FReferenceCollector *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142017680

void * __thiscall
UE::GC::TReachabilityCollectorBase<0>::_scalar_deleting_destructor_
          (TReachabilityCollectorBase<0> *this,uint param_1)

{
  FReferenceCollector::~FReferenceCollector((FReferenceCollector *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1420176c0

void * __thiscall
UE::GC::TReachabilityCollectorBase<12>::_scalar_deleting_destructor_
          (TReachabilityCollectorBase<12> *this,uint param_1)

{
  FReferenceCollector::~FReferenceCollector((FReferenceCollector *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142017700

void * __thiscall
UE::GC::TReachabilityCollectorBase<13>::_scalar_deleting_destructor_
          (TReachabilityCollectorBase<13> *this,uint param_1)

{
  FReferenceCollector::~FReferenceCollector((FReferenceCollector *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142017740

void * __thiscall
FGarbageCollectionTracer::_scalar_deleting_destructor_(FGarbageCollectionTracer *this,uint param_1)

{
  *this = (FGarbageCollectionTracer)&___7FGarbageCollectionTracer__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142017780

void * __thiscall UE::GC::FRealtimeGC::_scalar_deleting_destructor_(FRealtimeGC *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  TTask<void> TVar4;
  
  pFVar3 = (this->InitialObjects).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->InitialReferences).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  TVar4 = this->InitialCollection;
  if (TVar4 != (TTask<void>)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)TVar4 + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)TVar4)(TVar4,1);
    }
  }
  this->_padding_ = (longlong)&___7FGarbageCollectionTracer__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142017800

void * __thiscall
FReferenceFinder::_scalar_deleting_destructor_(FReferenceFinder *this,uint param_1)

{
  ForElementType<FSetElementId> FVar1;
  
  this->_padding_ = (longlong)&___7FReferenceFinder__6B_;
  (this->ObjectSet).HashSize = 0;
  FVar1 = (this->ObjectSet).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<UObject_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UObject_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ObjectSet).Elements);
  FReferenceCollector::~FReferenceCollector((FReferenceCollector *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142017870

void * __thiscall
UE::GC::FWeakReferenceEliminator::_scalar_deleting_destructor_
          (FWeakReferenceEliminator *this,uint param_1)

{
  FReferenceCollector::~FReferenceCollector((FReferenceCollector *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1420178b0

void * __thiscall
UObjectReachabilityStressData::_scalar_deleting_destructor_
          (UObjectReachabilityStressData *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UObjectReachabilityStressData__6B_;
  pFVar1 = (this->Children).AllocatorInstance.Data;
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

// AcquireGCLock @ 142017930

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl AcquireGCLock(void)

{
  FThreadSafeCounter *pFVar1;
  FSharedMutex *pFVar2;
  int iVar3;
  atomic<unsigned_int> aVar4;
  code *pcVar5;
  double dVar6;
  FGCCSyncObject *pFVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  LARGE_INTEGER local_res10;
  FGCCSyncObject *local_res18;
  LARGE_INTEGER local_res20;
  code *local_68;
  FGCCSyncObject **local_60;
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4626,"AcquireGCLock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
               ,0x1212);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4626);
  }
  QueryPerformanceCounter(&local_res10);
  pFVar7 = GGCSingleton;
  dVar6 = (double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  if ((GGCSingleton == (FGCCSyncObject *)0x0) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("Singleton",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                         ,0xbc,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  LOCK();
  pFVar7->GCWantsToRunCounter = (TAtomic<int>)((int)pFVar7->GCWantsToRunCounter + 1);
  UNLOCK();
  bVar8 = false;
  do {
    local_60 = &local_res18;
    local_res18 = pFVar7;
    local_68 = UE::Core::Private::Function::
               TFunctionRefCaller<`FGCCSyncObject::GCLock'::__l4::<lambda_1>,bool>::Call;
    FGenericPlatformProcess::ConditionalSleep((TFunctionRef<bool___cdecl(void)> *)&local_68,0.0);
    LOCK();
    bVar10 = (pFVar7->SharedMutex).State == (atomic<unsigned_int>)0x0;
    if (bVar10) {
      (pFVar7->SharedMutex).State = (atomic<unsigned_int>)0x1;
    }
    UNLOCK();
    if (!bVar10) {
      UE::FSharedMutex::LockSlow(&pFVar7->SharedMutex);
    }
    if ((pFVar7->AsyncCounter).Counter == 0) {
      (**(code **)(pFVar7->GCUnlockedEvent->_padding_ + 0x18))();
      LOCK();
      pFVar1 = &pFVar7->GCCounter;
      iVar3 = pFVar1->Counter;
      pFVar1->Counter = pFVar1->Counter + 1;
      UNLOCK();
      if ((iVar3 != 0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("GCCounterValue == 1",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GCScopeLock.h"
                             ,0x81,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      bVar8 = true;
      LOCK();
      pFVar7->GCWantsToRunCounter = (TAtomic<int>)0x0;
      UNLOCK();
    }
    LOCK();
    pFVar2 = &pFVar7->SharedMutex;
    aVar4 = pFVar2->State;
    pFVar2->State = (atomic<unsigned_int>)((int)pFVar2->State + -1);
    UNLOCK();
    if (((uint)aVar4 & 6) != 0) {
      UE::FSharedMutex::WakeWaitingThreads(&pFVar7->SharedMutex,(uint)aVar4);
    }
  } while (!bVar8);
  QueryPerformanceCounter(&local_res20);
  if ((__real_3f50624dd2f1a9fc <
       (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar6) &&
     (2 < (byte)LogGarbage._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogGarbage);
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// AllocateReachabilityStressData @ 1420221d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl AllocateReachabilityStressData(FOutputDevice *param_1)

{
  code *pcVar1;
  bool bVar2;
  FUObjectItem *this;
  longlong lVar3;
  int iVar4;
  UObjectReachabilityStressData *local_18 [2];
  
  iVar4 = 0;
  while( true ) {
    local_18[0] = ConditionallyAllocateNewStressDataObject();
    if (local_18[0] == (UObjectReachabilityStressData *)0x0) {
      return;
    }
    if (((GReachabilityStressData.AllocatorInstance.Data <= (FScriptContainerElement *)local_18) &&
        ((FScriptContainerElement *)local_18 <
         GReachabilityStressData.AllocatorInstance.Data +
         (longlong)GReachabilityStressData.ArrayMax * 8)) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar2)) break;
    if (GReachabilityStressData.ArrayNum == GReachabilityStressData.ArrayMax) {
      GReachabilityStressData.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&GReachabilityStressData.AllocatorInstance,
                      &GReachabilityStressData.ArrayMax);
    }
    lVar3 = (longlong)GReachabilityStressData.ArrayNum;
    GReachabilityStressData.ArrayNum = GReachabilityStressData.ArrayNum + 1;
    *(UObjectReachabilityStressData **)(GReachabilityStressData.AllocatorInstance.Data + lVar3 * 8)
         = local_18[0];
    this = FUObjectArray::IndexToObject
                     (&GUObjectArray,*(int *)((longlong)&local_18[0]->_padding_ + 4));
    FUObjectItem::ThisThreadAtomicallySetFlag(this,RootSet);
    GenerateReachabilityStressData(0xd,local_18[0]);
    iVar4 = iVar4 + 1;
    if (0x31 < iVar4) {
      return;
    }
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// CollectGarbage @ 142023f10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl CollectGarbage(EObjectFlags param_1,bool param_2)

{
  double dVar1;
  LARGE_INTEGER local_res18 [2];
  
  if (GIsInitialLoad) {
    if (4 < (byte)LogGarbage._0_1_) {
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogGarbage);
      return;
    }
  }
  else {
    AcquireGCLock();
    QueryPerformanceCounter(local_res18);
    dVar1 = (double)local_res18[0].QuadPart * FGenericPlatformTime::SecondsPerCycle;
    UE::GC::FReachabilityAnalysisState::CollectGarbage(&UE::GC::GReachabilityState,param_1,param_2);
    QueryPerformanceCounter(local_res18);
    GTimingInfo.LastGCDuration =
         (double)local_res18[0].QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar1;
    if (`void___cdecl_UE::GC::CollectGarbageInternal(EObjectFlags,bool)'::__l3::
        __CsvProfilerStat5529 == false) {
      FCsvProfilerTrace::OutputInlineStat("Count",_GCsvCategory_GC.Index);
      `void___cdecl_UE::GC::CollectGarbageInternal(EObjectFlags,bool)'::__l3::__CsvProfilerStat5529
           = true;
    }
    FCsvProfiler::RecordCustomStat("Count",_GCsvCategory_GC.Index,1,Accumulate);
  }
  return;
}

// ConditionallyAllocateNewStressDataObject @ 142024600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObjectReachabilityStressData * __cdecl ConditionallyAllocateNewStressDataObject(void)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UObjectReachabilityStressData *pUVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if (0xffff < (GUObjectArray.ObjObjects.MaxElements - GUObjectArray.ObjObjects.NumElements) +
               GUObjectArray.ObjAvailableListEstimateCount) {
    pUVar1 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = UObjectReachabilityStressData::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar2);
    local_98._8_8_ = pUVar1;
    pUVar3 = (UObjectReachabilityStressData *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar4 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar4 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
    return pUVar3;
  }
  return (UObjectReachabilityStressData *)0x0;
}

// DissolveUnreachableClusters @ 142026230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl DissolveUnreachableClusters(EGatherOptions param_1)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_void___cdecl_DissolveUnreachableClusters(UE::GC::EGatherOptions)_::_2_::FStat_STAT_CollectGarbageInternal_DissolveUnreachableClusters>
  FVar9;
  FTaskGraphInterface *pFVar10;
  ulonglong uVar11;
  ForElementType<UE::GC::TGatherIterator<TArray<int,TSizedDefaultAllocator<32>_>_>_> FVar12;
  int iVar13;
  LARGE_INTEGER LVar14;
  ForAnyElementType FVar15;
  bool bVar16;
  undefined1 auStackY_528 [32];
  <lambda_1> local_4c8 [8];
  LARGE_INTEGER local_4c0;
  TThreadedGather<TArray<int,TSizedDefaultAllocator<32>_>,UE::GC::TDefaultPayloadOps<TArray<int,TSizedDefaultAllocator<32>_>_>_>
  **local_4b8;
  int local_4b0 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_4a8;
  LARGE_INTEGER local_498;
  TArrayView<std::nullptr_t,int> local_488;
  TThreadedGather<TArray<int,TSizedDefaultAllocator<32>_>,UE::GC::TDefaultPayloadOps<TArray<int,TSizedDefaultAllocator<32>_>_>_>
  *local_478;
  FUObjectClusterContainer *local_470;
  int *local_468;
  TThreadedGather<TArray<int,TSizedDefaultAllocator<32>_>,UE::GC::TDefaultPayloadOps<TArray<int,TSizedDefaultAllocator<32>_>_>_>
  local_460;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_528;
  if (GUObjectClusters.NumAllocatedClusters == 0) {
    return;
  }
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId5154,"DissolveUnreachableClusters",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
               ,0x1422);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5154);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    if (StatPtr_STAT_CollectGarbageInternal_DissolveUnreachableClusters ==
        (FThreadSafeStaticStat<_void___cdecl_DissolveUnreachableClusters(UE::GC::EGatherOptions)_::_2_::FStat_STAT_CollectGarbageInternal_DissolveUnreachableClusters>
         )0x0) {
      pFVar8 = FName::FName((FName *)&local_4c0.s,
                            "STAT_CollectGarbageInternal_DissolveUnreachableClusters");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_CollectGarbageInternal_DissolveUnreachableClusters,*pFVar8,
                 L"CollectGarbageInternal.DissolveUnreachableClusters","STATGROUP_GC",
                 "STATCAT_Advanced",L"Garbage Collection",true,true,ST_int64,true,false,MCR_Invalid)
      ;
    }
    _Init_thread_footer(&_TSS0);
  }
  FVar9 = StatPtr_STAT_CollectGarbageInternal_DissolveUnreachableClusters;
  if (StatPtr_STAT_CollectGarbageInternal_DissolveUnreachableClusters ==
      (FThreadSafeStaticStat<_void___cdecl_DissolveUnreachableClusters(UE::GC::EGatherOptions)_::_2_::FStat_STAT_CollectGarbageInternal_DissolveUnreachableClusters>
       )0x0) {
    pFVar8 = FName::FName((FName *)&local_488,
                          "STAT_CollectGarbageInternal_DissolveUnreachableClusters");
    FVar9 = (FThreadSafeStaticStat<_void___cdecl_DissolveUnreachableClusters(UE::GC::EGatherOptions)_::_2_::FStat_STAT_CollectGarbageInternal_DissolveUnreachableClusters>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_CollectGarbageInternal_DissolveUnreachableClusters,*pFVar8,
                         L"CollectGarbageInternal.DissolveUnreachableClusters","STATGROUP_GC",
                         "STATCAT_Advanced",L"Garbage Collection",true,true,ST_int64,true,false,
                         MCR_Invalid);
  }
  LVar14 = *(LARGE_INTEGER *)FVar9;
  bVar3 = false;
  bVar5 = false;
  local_498.s.LowPart = 0;
  local_498.s.HighPart = 0;
  if ((LVar14.s.LowPart != 0) || (LVar14.s.HighPart != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_4c0.QuadPart = local_4c0.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_4c0.s,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_4c0 = LVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_4c0.s,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                   ,0x1423);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_4c0 = LVar14;
      FThreadStats::AddMessage((FName)LVar14.s,CycleScopeStart);
      bVar4 = true;
      goto LAB_142026411;
    }
  }
  bVar4 = false;
  LVar14 = local_498;
LAB_142026411:
  QueryPerformanceCounter(&local_4c0);
  local_4b0[0] = 0;
  local_460.ThreadIterators.AllocatorInstance.SecondaryData =
       (ForElementType<UE::GC::TGatherIterator<TArray<int,TSizedDefaultAllocator<32>_>_>_>)0x0;
  local_460.ThreadIterators.ArrayNum = 0;
  local_460.ThreadIterators.ArrayMax = 0x20;
  local_460.bIsPending = false;
  dVar2 = (double)local_4c0.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  if ((param_1 & Parallel) == None) {
    iVar6 = 1;
  }
  else {
    iVar6 = (GUObjectClusters.Clusters.ArrayNum + 1) / 2;
    pFVar10 = FTaskGraphInterface::Get();
    iVar7 = (**(code **)((longlong)*pFVar10 + 0x20))(pFVar10);
    iVar13 = 0x10;
    if (iVar7 < 0x10) {
      iVar13 = iVar7;
    }
    iVar7 = 1;
    if (1 < iVar13) {
      iVar7 = iVar13;
    }
    if (iVar7 < iVar6) {
      iVar6 = iVar7;
    }
  }
  UE::GC::
  TThreadedGather<TArray<int,TSizedDefaultAllocator<32>_>,UE::GC::TDefaultPayloadOps<TArray<int,TSizedDefaultAllocator<32>_>_>_>
  ::Start(&local_460,param_1,GUObjectClusters.Clusters.ArrayNum,0,iVar6);
  local_478 = &local_460;
  local_470 = &GUObjectClusters;
  local_468 = local_4b0;
  local_488.DataPtr = (void **)0x0;
  local_488.ArrayNum = 0;
  local_4c0.QuadPart =
       (LONGLONG)
       UE::Core::Private::Function::
       TFunctionRefCaller<`DissolveUnreachableClusters'::__l2::<lambda_1>,void,int>::Call;
  local_4b8 = &local_478;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"GC.DissolveUnreachableClusters",local_460.ThreadIterators.ArrayNum,1,
             (TFunctionRef<void___cdecl(int)> *)&local_4c0.s,local_4c8[0],
             (uint)(local_460.ThreadIterators.ArrayNum == 1),&local_488);
  local_4a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4a8.ArrayNum = 0;
  local_4a8.ArrayMax = 0;
  UE::GC::
  TThreadedGather<TArray<int,TSizedDefaultAllocator<32>_>,UE::GC::TDefaultPayloadOps<TArray<int,TSizedDefaultAllocator<32>_>_>_>
  ::Finish(&local_460,&local_4a8);
  iVar6 = local_4a8.ArrayNum;
  uVar11 = (ulonglong)local_4a8.ArrayNum;
  pFVar1 = local_4a8.AllocatorInstance.Data + uVar11 * 4;
  FVar15.Data = local_4a8.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar11 != iVar6) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_4c8);
    }
    if (FVar15.Data == pFVar1) break;
    FUObjectClusterContainer::FreeCluster(&GUObjectClusters,*(int *)FVar15.Data);
    uVar11 = local_4a8._8_8_ & 0xffffffff;
    FVar15.Data = FVar15.Data + 4;
  }
  GGCStats.NumUnreachableClusteredObjects = local_4b0[0];
  GGCStats.NumDissolvedClusters = local_4a8.ArrayNum;
  QueryPerformanceCounter(&local_4c0);
  GGCStats.DissolveUnreachableClustersTime =
       (double)local_4c0.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar2;
  if (4 < (byte)LogGarbage._0_1_) {
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogGarbage);
  }
  if (local_4a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4a8.AllocatorInstance.Data);
  }
  FVar12 = (ForElementType<UE::GC::TGatherIterator<TArray<int,TSizedDefaultAllocator<32>_>_>_>)
           &local_460;
  if (local_460.ThreadIterators.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::GC::TGatherIterator<TArray<int,TSizedDefaultAllocator<32>_>_>_>)0x0) {
    FVar12 = local_460.ThreadIterators.AllocatorInstance.SecondaryData;
  }
  DestructItems<UE::GC::TGatherIterator<TArray<int,TSizedDefaultAllocator<32>_>_>,int>
            ((TGatherIterator<TArray<int,TSizedDefaultAllocator<32>_>_> *)FVar12,
             local_460.ThreadIterators.ArrayNum);
  if (local_460.ThreadIterators.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::GC::TGatherIterator<TArray<int,TSizedDefaultAllocator<32>_>_>_>)0x0) {
    FMemory::Free((void *)local_460.ThreadIterators.AllocatorInstance.SecondaryData);
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar4) {
    FThreadStats::AddMessage((FName)LVar14.s,CycleScopeEnd);
  }
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// EmptyLinkFunctionForGeneratedCodeGarbageCollectionTesting @ 14203eb10

void __cdecl EmptyLinkFunctionForGeneratedCodeGarbageCollectionTesting(void)

{
  return;
}

// FinalizeIncrementalReachabilityAnalysis @ 14203eba0

void __cdecl FinalizeIncrementalReachabilityAnalysis(void)

{
  code *pcVar1;
  bool bVar2;
  LARGE_INTEGER local_res8 [4];
  
  if (UE::GC::GIsIncrementalReachabilityPending) {
    UE::GC::GReachabilityState.IterationTimeLimit = 0.0;
    QueryPerformanceCounter(local_res8);
    UE::GC::GReachabilityState.IterationStartTime =
         (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000;
    AcquireGCLock();
    UE::GC::FReachabilityAnalysisState::PerformReachabilityAnalysisAndConditionallyPurgeGarbage
              (&UE::GC::GReachabilityState,false);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("bUsingTimeLimit || !UE::GC::GIsIncrementalReachabilityPending",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                         ,0x179c,
                         L"Incremental Reachability is still pending after completing the previous iteration without time limit."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

// GatherUnreachableObjects @ 1420537b0

void __cdecl GatherUnreachableObjects(bool param_1)

{
  GatherUnreachableObjects(param_1 ^ Parallel,0.0);
  return;
}

// GatherUnreachableObjects @ 1420537d0

/* WARNING: Removing unreachable block (ram,0x000142053edb) */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl GatherUnreachableObjects(EGatherOptions param_1,double param_2)

{
  int *piVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  bool bVar6;
  double dVar7;
  FGCCSyncObject *pFVar8;
  int iVar9;
  bool bVar10;
  undefined1 uVar11;
  uint uVar12;
  int iVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<_bool___cdecl_GatherUnreachableObjects(UE::GC::EGatherOptions,double)_::_2_::FStat_STAT_CollectGarbageInternal_GatherUnreachableObjects>
  FVar15;
  TThreadedGather<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>,UE::GC::TDefaultPayloadOps<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>_>
  *pTVar16;
  FThreadSafeStaticStat<_bool___cdecl_GatherUnreachableObjects(UE::GC::EGatherOptions,double)_::_39_::FStat_STAT_CollectGarbageInternal_VerifyNoUnreachableObjects>
  FVar17;
  FTaskGraphInterface *pFVar18;
  FThreadStats *pFVar19;
  FThreadStatsPool *pFVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  ulonglong uVar24;
  FNameEntryId FVar25;
  FName FVar26;
  FName FVar27;
  undefined8 uVar28;
  ForElementType<UE::GC::TGatherIterator<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>_>
  FVar29;
  bool bVar30;
  double local_res10;
  uint local_res18;
  uint uStackX_1c;
  uint local_res20;
  uint uStackX_24;
  undefined1 local_1d8 [4];
  uint local_1d4;
  int local_1d0;
  uint local_1cc;
  FColor_u_0 local_1c8;
  FColor_u_0 local_1c4;
  FName local_1c0;
  double local_1b8;
  FName local_1b0;
  FName local_1a8;
  FName local_198;
  LARGE_INTEGER local_188;
  LARGE_INTEGER local_180;
  LARGE_INTEGER local_178;
  LARGE_INTEGER local_170;
  LARGE_INTEGER local_168;
  LARGE_INTEGER local_160;
  LARGE_INTEGER local_158;
  LARGE_INTEGER local_150;
  FStatMessage local_148;
  FStatMessage local_138;
  int *local_128;
  uint *local_120;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  TArrayView<std::nullptr_t,int> local_108;
  code *local_f8;
  TThreadedGather<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>,UE::GC::TDefaultPayloadOps<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>_>
  **local_f0;
  TArrayView<FUObjectItem_*,int> local_e8;
  TArrayView<std::nullptr_t,int> local_d8;
  code *local_c8;
  int **local_c0;
  TThreadedGather<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>,UE::GC::TDefaultPayloadOps<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>_>
  *local_b8;
  double *local_b0;
  double *local_a8;
  uint *local_a0;
  FName local_98;
  FName local_90;
  FName local_88;
  FName local_80 [9];
  
  bVar30 = -1 < CpuChannel->Enabled;
  local_res10 = param_2;
  if (bVar30) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId5229,"GatherUnreachableObjects",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
               ,0x146d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5229);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    StatPtr_STAT_CollectGarbageInternal_GatherUnreachableObjects =
         (FThreadSafeStaticStat<_bool___cdecl_GatherUnreachableObjects(UE::GC::EGatherOptions,double)_::_2_::FStat_STAT_CollectGarbageInternal_GatherUnreachableObjects>
          )0x0;
    pFVar14 = FName::FName(&local_98,"STAT_CollectGarbageInternal_GatherUnreachableObjects");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_CollectGarbageInternal_GatherUnreachableObjects,*pFVar14,
               L"CollectGarbageInternal.GatherUnreachableObjects","STATGROUP_GC","STATCAT_Advanced",
               L"Garbage Collection",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&_TSS0);
  }
  FVar15 = StatPtr_STAT_CollectGarbageInternal_GatherUnreachableObjects;
  if (StatPtr_STAT_CollectGarbageInternal_GatherUnreachableObjects ==
      (FThreadSafeStaticStat<_bool___cdecl_GatherUnreachableObjects(UE::GC::EGatherOptions,double)_::_2_::FStat_STAT_CollectGarbageInternal_GatherUnreachableObjects>
       )0x0) {
    pFVar14 = FName::FName(&local_90,"STAT_CollectGarbageInternal_GatherUnreachableObjects");
    FVar15 = (FThreadSafeStaticStat<_bool___cdecl_GatherUnreachableObjects(UE::GC::EGatherOptions,double)_::_2_::FStat_STAT_CollectGarbageInternal_GatherUnreachableObjects>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_CollectGarbageInternal_GatherUnreachableObjects,*pFVar14,
                          L"CollectGarbageInternal.GatherUnreachableObjects","STATGROUP_GC",
                          "STATCAT_Advanced",L"Garbage Collection",true,true,ST_int64,true,false,
                          MCR_Invalid);
  }
  FVar26 = *(FName *)FVar15;
  uVar11 = 0;
  local_1a8.ComparisonIndex.Value = 0;
  local_1a8.Number = 0;
  local_res18 = local_res18 & 0xffffff00;
  FVar25 = FVar26.ComparisonIndex.Value;
  uVar12 = FVar26.Number;
  if ((FVar25.Value != 0) || (FVar27 = local_1a8, uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1c8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1c8._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      uVar11 = 1;
      local_res18 = CONCAT31(local_res18._1_3_,1);
      if (-1 < CpuChannel->Enabled) {
        local_1c0.ComparisonIndex.Value = FVar25.Value;
        local_1c0.Number = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1c0,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                   ,0x146e);
        uVar11 = 3;
        local_res18 = CONCAT31(local_res18._1_3_,3);
      }
    }
    FVar27 = local_1a8;
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18 = FVar25.Value;
      uStackX_1c = uVar12;
      FThreadStats::AddMessage(FVar26,CycleScopeStart);
      local_res18 = CONCAT31(local_res18._1_3_,uVar11) | 4;
      FVar27 = FVar26;
    }
  }
  QueryPerformanceCounter(&local_188);
  dVar7 = __real_4170000000000000;
  GUnreachableObjects.ArrayNum = 0;
  local_1b8 = (double)local_188.QuadPart * FGenericPlatformTime::SecondsPerCycle +
              __real_4170000000000000;
  if ((GUnreachableObjects.ArrayMax < 0) && (GUnreachableObjects.ArrayMax != 0)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&GUnreachableObjects.AllocatorInstance,0,&GUnreachableObjects.ArrayMax);
  }
  GUnrechableObjectIndex = 0;
  iVar23 = UE::GC::Private::GGatherUnreachableObjectsState.ThreadIterators.ArrayNum;
  if (iVar23 < 1) {
    iVar23 = GUObjectArray.ObjFirstGCIndex;
    if (GExitPurge != false) {
      iVar23 = 0;
    }
    UE::GC::
    TThreadedGather<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>,UE::GC::TDefaultPayloadOps<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>_>
    ::Start(&UE::GC::Private::GGatherUnreachableObjectsState,param_1,
            GUObjectArray.ObjObjects.NumElements,iVar23,0);
    iVar23 = UE::GC::Private::GGatherUnreachableObjectsState.ThreadIterators.ArrayNum;
  }
  local_b0 = &local_1b8;
  local_1cc = 0;
  local_a8 = &local_res10;
  local_a0 = &local_1cc;
  local_b8 = &UE::GC::Private::GGatherUnreachableObjectsState;
  local_108.DataPtr = (void **)0x0;
  local_f8 = UE::Core::Private::Function::
             TFunctionRefCaller<`GatherUnreachableObjects'::__l2::<lambda_1>,void,int>::Call;
  local_f0 = &local_b8;
  local_108.ArrayNum = 0;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"GC.GatherUnreachable",iVar23,1,(TFunctionRef<void___cdecl(int)> *)&local_f8,
             local_res18._0_1_,(uint)(iVar23 == 1),&local_108);
  pTVar16 = &UE::GC::Private::GGatherUnreachableObjectsState;
  iVar23 = UE::GC::Private::GGatherUnreachableObjectsState.ThreadIterators.ArrayNum;
  if (UE::GC::Private::GGatherUnreachableObjectsState.ThreadIterators.AllocatorInstance.
      SecondaryData !=
      (ForElementType<UE::GC::TGatherIterator<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>_>
       )0x0) {
    pTVar16 = (TThreadedGather<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>,UE::GC::TDefaultPayloadOps<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>_>
               *)UE::GC::Private::GGatherUnreachableObjectsState.ThreadIterators.AllocatorInstance.
                 SecondaryData;
  }
  FVar29 = (ForElementType<UE::GC::TGatherIterator<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>_>
            )((longlong)iVar23 * 0x20 + (longlong)pTVar16);
  uVar28 = UE::GC::Private::GGatherUnreachableObjectsState.ThreadIterators._1032_8_;
  while( true ) {
    if ((int)uVar28 != iVar23) {
      local_res20 = local_res20 & 0xffffff00;
      `TCheckedPointerIterator<UE::GC::TGatherIterator<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_res20);
      uVar28 = UE::GC::Private::GGatherUnreachableObjectsState.ThreadIterators._1032_8_;
    }
    if ((ForElementType<UE::GC::TGatherIterator<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>_>
         )pTVar16 == FVar29) break;
    pTVar16 = (TThreadedGather<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>,UE::GC::TDefaultPayloadOps<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>_>
               *)((longlong)pTVar16 + 0x20);
  }
  local_1d4 = (uint)uVar28;
  uVar24 = (ulonglong)(int)local_1d4;
  pTVar16 = &UE::GC::Private::GGatherUnreachableObjectsState;
  if (UE::GC::Private::GGatherUnreachableObjectsState.ThreadIterators.AllocatorInstance.
      SecondaryData !=
      (ForElementType<UE::GC::TGatherIterator<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>_>
       )0x0) {
    pTVar16 = (TThreadedGather<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>,UE::GC::TDefaultPayloadOps<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>_>
               *)UE::GC::Private::GGatherUnreachableObjectsState.ThreadIterators.AllocatorInstance.
                 SecondaryData;
  }
  FVar29 = (ForElementType<UE::GC::TGatherIterator<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>_>
            )(uVar24 * 0x20 + (longlong)pTVar16);
  while( true ) {
    if ((int)uVar28 != (int)uVar24) {
      local_1d8[0] = 0;
      `TCheckedPointerIterator<UE::GC::TGatherIterator<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_1d8);
      uVar24 = (ulonglong)local_1d4;
      uVar28 = UE::GC::Private::GGatherUnreachableObjectsState.ThreadIterators._1032_8_;
    }
    if ((ForElementType<UE::GC::TGatherIterator<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>_>
         )pTVar16 == FVar29) break;
    pTVar16 = (TThreadedGather<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>,UE::GC::TDefaultPayloadOps<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>_>
               *)((longlong)pTVar16 + 0x20);
  }
  local_1d4 = local_1cc;
  if (local_1cc == 0) {
    UE::GC::
    TThreadedGather<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>,UE::GC::TDefaultPayloadOps<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>_>
    ::Finish(&UE::GC::Private::GGatherUnreachableObjectsState,&GUnreachableObjects);
  }
  QueryPerformanceCounter(&local_180);
  iVar23 = GGCStats.GatherUnreachableTime.NumIterations + 1;
  dVar4 = (double)local_180.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar7;
  dVar3 = dVar4 - local_1b8;
  GGCStats.GatherUnreachableTime.Total = GGCStats.GatherUnreachableTime.Total + dVar3;
  if (GGCStats.GatherUnreachableTime.Max < dVar3) {
    GGCStats.GatherUnreachableTime.SlowestIteration = GGCStats.GatherUnreachableTime.NumIterations;
    GGCStats.GatherUnreachableTime.Max = dVar3;
  }
  GGCStats.GatherUnreachableTime.NumIterations = iVar23;
  if (4 < (byte)LogGarbage._0_1_) {
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogGarbage);
  }
  uVar12 = local_1d4;
  pFVar8 = GGCSingleton;
  if (local_1d4 != 0) goto LAB_142054292;
  GGCStats.NumUnreachableObjects = GUnreachableObjects.ArrayNum;
  if ((GGCSingleton == (FGCCSyncObject *)0x0) &&
     (bVar10 = FDebug::CheckVerifyFailedImpl2
                         ("Singleton",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                          ,0xbc,L""), bVar10)) {
    pcVar2 = (code *)swi(3);
    uVar11 = (*pcVar2)();
    return (bool)uVar11;
  }
  iVar23 = (pFVar8->GCCounter).Counter;
  if (iVar23 == 0) {
    AcquireGCLock();
  }
  iVar9 = GUnreachableObjects.ArrayNum;
  local_e8.DataPtr = (FUObjectItem **)GUnreachableObjects.AllocatorInstance.Data;
  if ((GUnreachableObjects.ArrayNum < 0) &&
     (bVar10 = FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar10)) {
    pcVar2 = (code *)swi(3);
    uVar11 = (*pcVar2)();
    return (bool)uVar11;
  }
  local_e8.ArrayNum = iVar9;
  NotifyUnreachableObjects(&local_e8);
  if (iVar23 == 0) {
    ReleaseGCLock();
  }
  QueryPerformanceCounter(&local_178);
  dVar3 = (double)local_178.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar7;
  GGCStats.NotifyUnreachableTime = dVar3 - dVar4;
  if ((GVerifyNoUnreachableObjects == 0) || (GExitPurge != false)) goto LAB_142054292;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS1) && (_Init_thread_header(&_TSS1), _TSS1 == -1)) {
    StatPtr_STAT_CollectGarbageInternal_VerifyNoUnreachableObjects =
         (FThreadSafeStaticStat<_bool___cdecl_GatherUnreachableObjects(UE::GC::EGatherOptions,double)_::_39_::FStat_STAT_CollectGarbageInternal_VerifyNoUnreachableObjects>
          )0x0;
    pFVar14 = FName::FName(&local_88,"STAT_CollectGarbageInternal_VerifyNoUnreachableObjects");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_CollectGarbageInternal_VerifyNoUnreachableObjects,*pFVar14,
               L"CollectGarbageInternal.VerifyNoUnreachableObjects","STATGROUP_GC",
               "STATCAT_Advanced",L"Garbage Collection",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&_TSS1);
  }
  FVar17 = StatPtr_STAT_CollectGarbageInternal_VerifyNoUnreachableObjects;
  if (StatPtr_STAT_CollectGarbageInternal_VerifyNoUnreachableObjects ==
      (FThreadSafeStaticStat<_bool___cdecl_GatherUnreachableObjects(UE::GC::EGatherOptions,double)_::_39_::FStat_STAT_CollectGarbageInternal_VerifyNoUnreachableObjects>
       )0x0) {
    pFVar14 = FName::FName(local_80,"STAT_CollectGarbageInternal_VerifyNoUnreachableObjects");
    FVar17 = (FThreadSafeStaticStat<_bool___cdecl_GatherUnreachableObjects(UE::GC::EGatherOptions,double)_::_39_::FStat_STAT_CollectGarbageInternal_VerifyNoUnreachableObjects>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_CollectGarbageInternal_VerifyNoUnreachableObjects,*pFVar14,
                          L"CollectGarbageInternal.VerifyNoUnreachableObjects","STATGROUP_GC",
                          "STATCAT_Advanced",L"Garbage Collection",true,true,ST_int64,true,false,
                          MCR_Invalid);
  }
  FVar26 = *(FName *)FVar17;
  bVar10 = false;
  bVar6 = false;
  local_198.ComparisonIndex.Value = 0;
  local_198.Number = 0;
  FVar25 = FVar26.ComparisonIndex.Value;
  uVar21 = FVar26.Number;
  if ((FVar25.Value == 0) && (uVar21 == 0)) {
LAB_142054020:
    bVar5 = false;
    FVar26 = local_198;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1c4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1c4._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar10 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1b0.ComparisonIndex.Value = FVar25.Value;
        local_1b0.Number = uVar21;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1b0,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                   ,0x14ca);
        bVar10 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_142054020;
    local_res20 = FVar25.Value;
    uStackX_24 = uVar21;
    FThreadStats::AddMessage(FVar26,CycleScopeStart);
    bVar5 = true;
  }
  iVar23 = GUnreachableObjects.ArrayNum;
  QueryPerformanceCounter(&local_170);
  iVar9 = GUObjectArray.ObjObjects.NumElements;
  pFVar18 = FTaskGraphInterface::Get();
  iVar13 = (**(code **)((longlong)*pFVar18 + 0x20))(pFVar18);
  local_110 = iVar9;
  local_10c = iVar23;
  iVar22 = 0x10;
  if (iVar13 < 0x10) {
    iVar22 = iVar13;
  }
  local_128 = &local_1d0;
  local_120 = &local_1d4;
  local_114 = 1;
  if (1 < iVar22) {
    local_114 = iVar22;
  }
  local_1d0 = 0;
  local_1d4 = 0;
  local_d8.DataPtr = (void **)0x0;
  local_118 = iVar9 / local_114 + 1;
  local_d8.ArrayNum = 0;
  local_c8 = UE::Core::Private::Function::
             TFunctionRefCaller<`VerifyNoUnreachableObjects'::__l2::<lambda_1>,void,int>::Call;
  local_c0 = &local_128;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"GC.VerifyNoUnreachableObjects",local_114,1,
             (TFunctionRef<void___cdecl(int)> *)&local_c8,local_res18._0_1_,None,&local_d8);
  if (local_1d4 != iVar23) {
    LOCK();
    local_1d0 = local_1d0 + 1;
    UNLOCK();
    if (2 < (byte)LogGarbage._0_1_) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogGarbage);
    }
  }
  if (local_1d0 != 0) {
    UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogGarbage);
  }
  if (4 < (byte)LogGarbage._0_1_) {
    QueryPerformanceCounter(&local_168);
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogGarbage);
  }
  QueryPerformanceCounter(&local_160);
  GGCStats.VerifyNoUnreachableTime =
       ((double)local_160.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar7) - dVar3;
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar26 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar19 == (FThreadStats *)0x0) {
      pFVar20 = FThreadStatsPool::Get();
      pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
    }
    if (pFVar19->bWaitForExplicitFlush < pFVar19->ScopeCount) {
      local_148.NameAndInfo.Index = FVar26.ComparisonIndex.Value;
      local_148.NameAndInfo.Number = FVar26.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_158);
      local_148.StatData.Pad[4] = '\0';
      local_148.StatData.Pad[5] = '\0';
      local_148.StatData.Pad[6] = '\0';
      local_148.StatData.Pad[7] = '\0';
      local_148.StatData.Pad[0] = local_158.s.LowPart._0_1_;
      local_148.StatData.Pad[1] = local_158.s.LowPart._1_1_;
      local_148.StatData.Pad[2] = local_158.s.LowPart._2_1_;
      local_148.StatData.Pad[3] = local_158.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar19,&local_148);
      piVar1 = &pFVar19->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar19,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar19,false,false);
      }
    }
  }
LAB_142054292:
  uVar21 = local_res18;
  if ((local_res18 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((uVar21 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((uVar21 & 4) != 0) && (FVar27 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar19 == (FThreadStats *)0x0) {
      pFVar20 = FThreadStatsPool::Get();
      pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
    }
    if (pFVar19->bWaitForExplicitFlush < pFVar19->ScopeCount) {
      local_138.NameAndInfo.Index = FVar27.ComparisonIndex.Value;
      local_138.NameAndInfo.Number = FVar27.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_150);
      local_138.StatData.Pad[4] = '\0';
      local_138.StatData.Pad[5] = '\0';
      local_138.StatData.Pad[6] = '\0';
      local_138.StatData.Pad[7] = '\0';
      local_138.StatData.Pad[0] = local_150.s.LowPart._0_1_;
      local_138.StatData.Pad[1] = local_150.s.LowPart._1_1_;
      local_138.StatData.Pad[2] = local_150.s.LowPart._2_1_;
      local_138.StatData.Pad[3] = local_150.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar19,&local_138);
      piVar1 = &pFVar19->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar19,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar19,false,false);
      }
    }
  }
  if (bVar30) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return uVar12 != 0;
}

// GenerateReachabilityStressData @ 142054640

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
GenerateReachabilityStressData
          (TArray<UObjectReachabilityStressData_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FUObjectItem *this;
  int iVar5;
  UObjectReachabilityStressData *local_18 [2];
  
  iVar5 = 0;
  while( true ) {
    local_18[0] = ConditionallyAllocateNewStressDataObject();
    if (local_18[0] == (UObjectReachabilityStressData *)0x0) {
      return;
    }
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (((pFVar1 <= (FScriptContainerElement *)local_18) &&
        ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)param_1->ArrayMax * 8)) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) break;
    iVar4 = param_1->ArrayNum;
    if (iVar4 == param_1->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
      param_1->ArrayNum = iVar4;
    }
    param_1->ArrayNum = iVar4 + 1;
    *(UObjectReachabilityStressData **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) =
         local_18[0];
    this = FUObjectArray::IndexToObject
                     (&GUObjectArray,*(int *)((longlong)&local_18[0]->_padding_ + 4));
    FUObjectItem::ThisThreadAtomicallySetFlag(this,RootSet);
    GenerateReachabilityStressData(0xd,local_18[0]);
    iVar5 = iVar5 + 1;
    if (0x31 < iVar5) {
      return;
    }
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// GenerateReachabilityStressData @ 142054760

void __cdecl GenerateReachabilityStressData(int param_1,UObjectReachabilityStressData *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UObjectReachabilityStressData *this;
  int iVar6;
  UObjectReachabilityStressData *local_18 [2];
  
  if (param_1 != 0) {
    iVar6 = 0;
    do {
      this = ConditionallyAllocateNewStressDataObject();
      if (this == (UObjectReachabilityStressData *)0x0) {
        return;
      }
      GenerateReachabilityStressData(param_1 + -1,this);
      local_18[0] = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UObjectBase::MarkAsReachable((UObjectBase *)this);
      }
      pFVar2 = (param_2->Children).AllocatorInstance.Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(param_2->Children).ArrayMax * 8
          )) && (bVar4 = FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = (param_2->Children).ArrayNum;
      piVar1 = &(param_2->Children).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(param_2->Children).AllocatorInstance,piVar1);
      }
      (param_2->Children).ArrayNum = iVar5 + 1;
      *(UObjectReachabilityStressData **)
       ((param_2->Children).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_18[0] != (UObjectReachabilityStressData *)0x0)) {
        UObjectBase::MarkAsReachable((UObjectBase *)local_18[0]);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 2);
  }
  return;
}

// GetFullNameSafe @ 142054e70

FString * __cdecl GetFullNameSafe(FString *__return_storage_ptr__,UObjectBaseUtility *param_1)

{
  if ((param_1 != (UObjectBaseUtility *)0x0) && (*(longlong *)&param_1->field_0x10 != 0)) {
    UObjectBaseUtility::GetFullName(param_1,__return_storage_ptr__,(UObject *)0x0,None);
    return __return_storage_ptr__;
  }
  FString::FString(__return_storage_ptr__,L"None");
  return __return_storage_ptr__;
}

// GetIncrementalReachabilityAnalysisEnabled @ 142054fa0

bool __cdecl GetIncrementalReachabilityAnalysisEnabled(void)

{
  return GAllowIncrementalReachability != 0;
}

// GetLastGCDuration @ 142055120

double __cdecl GetLastGCDuration(void)

{
  return GTimingInfo.LastGCDuration;
}

// GetLastGCTime @ 142055130

double __cdecl GetLastGCTime(void)

{
  return GTimingInfo.LastGCTime;
}

// GetNumCollectReferenceWorkers @ 142055490

int __cdecl GetNumCollectReferenceWorkers(void)

{
  int iVar1;
  FTaskGraphInterface *pFVar2;
  int iVar3;
  
  pFVar2 = FTaskGraphInterface::Get();
  iVar1 = (**(code **)((longlong)*pFVar2 + 0x20))(pFVar2);
  iVar3 = 0x10;
  if (iVar1 < 0x10) {
    iVar3 = iVar1;
  }
  iVar1 = 1;
  if (1 < iVar3) {
    iVar1 = iVar3;
  }
  return iVar1;
}

// GetReachabilityAnalysisTimeLimit @ 142055ca0

float __cdecl GetReachabilityAnalysisTimeLimit(void)

{
  return GIncrementalReachabilityTimeLimit;
}

// IncrementalDestroyGarbage @ 142061920

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl IncrementalDestroyGarbage(bool param_1,double param_2)

{
  int iVar1;
  undefined8 *puVar2;
  UObject *this;
  undefined8 uVar3;
  UObjectBaseUtility *this_00;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  bool bVar10;
  undefined1 uVar11;
  bool bVar12;
  char cVar13;
  uint uVar14;
  FUObjectItem *pFVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  bool bVar23;
  bool bVar24;
  int local_114;
  UObject *local_110;
  int local_108;
  FString local_100;
  FString local_f0;
  LARGE_INTEGER local_e0;
  LARGE_INTEGER local_d8;
  LARGE_INTEGER local_d0;
  LARGE_INTEGER local_c8;
  LARGE_INTEGER local_c0;
  LARGE_INTEGER local_b8 [15];
  
  bVar23 = -1 < CpuChannel->Enabled;
  if (bVar23) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4786,"IncrementalDestroyGarbage",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
               ,0x12b2);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4786);
  }
  bVar24 = false;
  QueryPerformanceCounter(&local_e0);
  bVar9 = GIsGarbageCollecting;
  iVar1 = GIncrementalBeginDestroyGranularity;
  dVar8 = __real_4170000000000000;
  GIsGarbageCollecting = true;
  dVar7 = (double)local_e0.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  if (GObjFinishDestroyHasBeenRoutedToAllObjects == false) {
    if ((GUnrechableObjectIndex < GUnreachableObjects.ArrayNum) &&
       (bVar10 = FDebug::CheckVerifyFailedImpl2
                           ("GUnrechableObjectIndex >= GUnreachableObjects.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                            ,0x12c5,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      uVar11 = (*pcVar4)();
      return (bool)uVar11;
    }
    local_114 = 0;
    local_108 = 0;
    if (GObjCurrentPurgeObjectIndexNeedsReset != false) {
      GObjCurrentPurgeObjectIndex = 0;
      GObjCurrentPurgeObjectIndexNeedsReset = false;
    }
    bVar10 = -1 < CpuChannel->Enabled;
    if (bVar10) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId4820,"ConditionalFinishDestroy",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                 ,0x12d4);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4820);
    }
    iVar22 = 0;
    if (GObjCurrentPurgeObjectIndex < GUnreachableObjects.ArrayNum) {
      do {
        iVar16 = GObjCurrentPurgeObjectIndex;
        uVar21 = 0;
        if (GObjCurrentPurgeObjectIndex < GUnreachableObjects.ArrayNum) {
          uVar21 = (uint)~GObjCurrentPurgeObjectIndex >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar12 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar4 = (code *)swi(3);
          uVar11 = (*pcVar4)();
          return (bool)uVar11;
        }
        puVar2 = *(undefined8 **)(GUnreachableObjects.AllocatorInstance.Data + (longlong)iVar16 * 8)
        ;
        if ((((UE::GC::Private::FGCFlags::ReachableObjectFlag &
              (EInternalObjectFlags)((ulonglong)*puVar2 >> 0x20)) != Borrowed) ||
            ((UE::GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
             (EInternalObjectFlags)((ulonglong)*puVar2 >> 0x20)) == Borrowed)) &&
           (bVar12 = FDebug::CheckVerifyFailedImpl2
                               ("!FGCFlags::IsReachable_ForGC(ObjectItem) && FGCFlags::IsMaybeUnreachable_ForGC(ObjectItem)"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                ,0x12dc,L""), bVar12)) {
          pcVar4 = (code *)swi(3);
          uVar11 = (*pcVar4)();
          return (bool)uVar11;
        }
        if (((uint)((ulonglong)*puVar2 >> 0x3c) & 1) != 0) {
          local_110 = (UObject *)puVar2[1];
          if ((((*(uint *)&local_110->field_0x8 >> 0xf & 1) == 0) ||
              ((*(uint *)&local_110->field_0x8 >> 0x10 & 1) != 0)) &&
             (bVar12 = FDebug::CheckVerifyFailedImpl2
                                 ("Object->HasAnyFlags( RF_BeginDestroyed ) && !Object->HasAnyFlags( RF_FinishDestroyed )"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                  ,0x12e1,L""), bVar12)) {
            pcVar4 = (code *)swi(3);
            uVar11 = (*pcVar4)();
            return (bool)uVar11;
          }
          cVar13 = (**(code **)(*(longlong *)local_110 + 0xb0))();
          if (cVar13 == '\0') {
            if (((GGCObjectsPendingDestruction.AllocatorInstance.Data <=
                  (FScriptContainerElement *)&local_110) &&
                ((FScriptContainerElement *)&local_110 <
                 GGCObjectsPendingDestruction.AllocatorInstance.Data +
                 (longlong)GGCObjectsPendingDestruction.ArrayMax * 8)) &&
               (bVar12 = FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar12)) {
              pcVar4 = (code *)swi(3);
              uVar11 = (*pcVar4)();
              return (bool)uVar11;
            }
            if (GGCObjectsPendingDestruction.ArrayNum == GGCObjectsPendingDestruction.ArrayMax) {
              GGCObjectsPendingDestruction.ArrayNum =
                   UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&GGCObjectsPendingDestruction.AllocatorInstance,
                              &GGCObjectsPendingDestruction.ArrayMax);
            }
            GGCObjectsPendingDestructionCount = GGCObjectsPendingDestructionCount + 1;
            lVar18 = (longlong)GGCObjectsPendingDestruction.ArrayNum;
            GGCObjectsPendingDestruction.ArrayNum = GGCObjectsPendingDestruction.ArrayNum + 1;
            *(UObject **)(GGCObjectsPendingDestruction.AllocatorInstance.Data + lVar18 * 8) =
                 local_110;
          }
          else {
            UObject::ConditionalFinishDestroy(local_110);
          }
        }
        GObjCurrentPurgeObjectIndex = GObjCurrentPurgeObjectIndex + 1;
        local_114 = iVar22 + 1;
        if (((param_1) && (iVar22 % iVar1 == 0)) &&
           (QueryPerformanceCounter(&local_d8),
           param_2 < ((double)local_d8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar8) -
                     GCStartTime)) {
          bVar24 = true;
          break;
        }
        iVar22 = local_114;
      } while (GObjCurrentPurgeObjectIndex < GUnreachableObjects.ArrayNum);
    }
    if (bVar10) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (GUnreachableObjects.ArrayNum <= GObjCurrentPurgeObjectIndex) {
      bVar10 = -1 < CpuChannel->Enabled;
      if (bVar10) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId4872,"ConditionalFinishDestroyDeferred",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                   ,0x1308);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4872);
      }
      dVar5 = (double)GMaxTimeForFinishDestroyGC;
      dVar6 = dVar7;
      if (0 < GGCObjectsPendingDestructionCount) {
        while ((iVar22 = GGCObjectsPendingDestructionCount, GAllowSkipDestroyGarbage == 0 ||
               (GSkipDestroyGarbage == (atomic<bool>)0x0))) {
          uVar21 = 0;
          if (0 < GGCObjectsPendingDestructionCount) {
            lVar18 = 0;
            iVar16 = 0;
            do {
              iVar19 = iVar16;
              if (((GAllowSkipDestroyGarbage != 0) &&
                  (iVar19 = iVar16 + 1, iVar16 == (iVar16 / 100) * 100)) &&
                 (GSkipDestroyGarbage != (atomic<bool>)0x0)) {
                if (2 < (byte)LogGarbage._0_1_) {
                  UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogGarbage);
                }
                break;
              }
              uVar14 = 0;
              if ((int)uVar21 < GGCObjectsPendingDestruction.ArrayNum) {
                uVar14 = ~uVar21 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar12 = FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar4 = (code *)swi(3);
                uVar11 = (*pcVar4)();
                return (bool)uVar11;
              }
              this = *(UObject **)(GGCObjectsPendingDestruction.AllocatorInstance.Data + lVar18);
              if (((this == (UObject *)0x0) ||
                  (pFVar15 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this->field_0xc),
                  ((uint)((ulonglong)(pFVar15->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) &&
                 (bVar12 = FDebug::CheckVerifyFailedImpl2
                                     ("Object != nullptr && Object->IsUnreachable()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                      ,0x132b,L""), bVar12)) {
                pcVar4 = (code *)swi(3);
                uVar11 = (*pcVar4)();
                return (bool)uVar11;
              }
              if ((((*(uint *)&this->field_0x8 >> 0xf & 1) == 0) ||
                  ((*(uint *)&this->field_0x8 >> 0x10 & 1) != 0)) &&
                 (bVar12 = FDebug::CheckVerifyFailedImpl2
                                     ("Object->HasAnyFlags( RF_BeginDestroyed ) && !Object->HasAnyFlags( RF_FinishDestroyed )"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                                      ,0x132e,L""), bVar12)) {
                pcVar4 = (code *)swi(3);
                uVar11 = (*pcVar4)();
                return (bool)uVar11;
              }
              cVar13 = (**(code **)(*(longlong *)this + 0xb0))(this);
              if (cVar13 == '\0') {
                uVar21 = uVar21 + 1;
                lVar18 = lVar18 + 8;
              }
              else {
                UObject::ConditionalFinishDestroy(this);
                uVar17 = GGCObjectsPendingDestructionCount - 1;
                uVar14 = 0;
                if ((int)uVar17 < GGCObjectsPendingDestruction.ArrayNum) {
                  uVar14 = ~uVar17 >> 0x1f;
                }
                if ((uVar14 == 0) &&
                   (bVar12 = FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar4 = (code *)swi(3);
                  uVar11 = (*pcVar4)();
                  return (bool)uVar11;
                }
                uVar3 = *(undefined8 *)
                         (GGCObjectsPendingDestruction.AllocatorInstance.Data +
                         (longlong)(int)uVar17 * 8);
                uVar14 = 0;
                if ((int)uVar21 < GGCObjectsPendingDestruction.ArrayNum) {
                  uVar14 = ~uVar21 >> 0x1f;
                }
                if ((uVar14 == 0) &&
                   (bVar12 = FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar4 = (code *)swi(3);
                  uVar11 = (*pcVar4)();
                  return (bool)uVar11;
                }
                GGCObjectsPendingDestructionCount = GGCObjectsPendingDestructionCount + -1;
                *(undefined8 *)(GGCObjectsPendingDestruction.AllocatorInstance.Data + lVar18) =
                     uVar3;
              }
              iVar20 = local_114 + 1;
              if (((param_1) && (local_114 % iVar1 == 0)) &&
                 (QueryPerformanceCounter(&local_d0),
                 param_2 < ((double)local_d0.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                           dVar8) - GCStartTime)) {
                bVar24 = true;
                goto LAB_1420623a2;
              }
              iVar16 = iVar19;
              local_114 = iVar20;
            } while ((int)uVar21 < GGCObjectsPendingDestructionCount);
          }
          if (param_1) goto LAB_1420623a2;
          if (0 < GGCObjectsPendingDestructionCount) {
            iVar19 = local_108 + 1;
            iVar16 = local_108 % iVar1;
            local_108 = iVar19;
            if (((iVar22 == GGCObjectsPendingDestructionCount) && (iVar16 == 0)) &&
               (QueryPerformanceCounter(&local_c8),
               dVar5 < ((double)local_c8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar8) -
                       dVar6)) {
              QueryPerformanceCounter(&local_c0);
              dVar6 = (double)local_c0.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar8;
              if (GEnableTimeoutOnPendingDestroyedObjectGC == false) {
                if (GWarningTimeOutHasBeenDisplayedGC == false) {
                  if (2 < (byte)LogGarbage._0_1_) {
                    UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogGarbage);
                  }
                  GWarningTimeOutHasBeenDisplayedGC = true;
                }
              }
              else {
                if (2 < (byte)LogGarbage._0_1_) {
                  UE::Logging::Private::BasicLog<3>
                            ((FStaticBasicLogRecord *)&PTR_u_Spent_more_than_1508341c8,
                             (FLogCategoryBase *)&LogGarbage);
                }
                iVar22 = 0;
                uVar21 = 0;
                if (0 < GGCObjectsPendingDestructionCount) {
                  lVar18 = 0;
                  do {
                    uVar14 = 0;
                    if ((int)uVar21 < GGCObjectsPendingDestruction.ArrayNum) {
                      uVar14 = ~uVar21 >> 0x1f;
                    }
                    if ((uVar14 == 0) &&
                       (bVar12 = FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar12)) {
                      pcVar4 = (code *)swi(3);
                      uVar11 = (*pcVar4)();
                      return (bool)uVar11;
                    }
                    this_00 = *(UObjectBaseUtility **)
                               (GGCObjectsPendingDestruction.AllocatorInstance.Data + lVar18);
                    cVar13 = (**(code **)(*(longlong *)this_00 + 0xb0))(this_00);
                    if (cVar13 == '\0') {
                      if (iVar22 == GMaxFinishDestroyTimeoutObjectsToLog) {
                        if (2 < (byte)LogGarbage._0_1_) {
                          if (*(longlong *)&this_00->field_0x10 == 0) {
                            FString::FString(&local_f0,L"None");
                          }
                          else {
                            UObjectBaseUtility::GetFullName(this_00,&local_f0,(UObject *)0x0,None);
                          }
                          UE::Logging::Private::BasicLog<3>
                                    (&LOG_Static,(FLogCategoryBase *)&LogGarbage);
                          if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                             ) {
                            FMemory::Free(local_f0.Data.AllocatorInstance.Data);
                          }
                        }
                        if ((GAllowSkipDestroyGarbage != 0) &&
                           (GSkipDestroyGarbage != (atomic<bool>)0x0)) {
                          if (2 < (byte)LogGarbage._0_1_) {
                            UE::Logging::Private::BasicLog<3>
                                      (&LOG_Static,(FLogCategoryBase *)&LogGarbage);
                          }
                          goto LAB_1420623a2;
                        }
                        UObject::AbortInsideMemberFunction((UObject *)this_00);
                        break;
                      }
                      if (2 < (byte)LogGarbage._0_1_) {
                        if (*(longlong *)&this_00->field_0x10 == 0) {
                          FString::FString(&local_100,L"None");
                        }
                        else {
                          UObjectBaseUtility::GetFullName(this_00,&local_100,(UObject *)0x0,None);
                        }
                        UE::Logging::Private::BasicLog<3>
                                  (&LOG_Static,(FLogCategoryBase *)&LogGarbage);
                        if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_100.Data.AllocatorInstance.Data);
                        }
                      }
                      iVar22 = iVar22 + 1;
                    }
                    uVar21 = uVar21 + 1;
                    lVar18 = lVar18 + 8;
                  } while ((int)uVar21 < GGCObjectsPendingDestructionCount);
                }
              }
            }
            FWindowsPlatformProcess::Sleep(0.0);
          }
          if (GGCObjectsPendingDestructionCount < 1) goto LAB_1420623a2;
        }
        if (2 < (byte)LogGarbage._0_1_) {
          UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogGarbage);
        }
      }
LAB_1420623a2:
      if (GGCObjectsPendingDestructionCount == 0) {
        GGCObjectsPendingDestruction.ArrayNum = 0;
        if (GGCObjectsPendingDestruction.ArrayMax != 0x100) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0x100,&GGCObjectsPendingDestruction.AllocatorInstance,0,
                     &GGCObjectsPendingDestruction.ArrayMax);
        }
        GObjFinishDestroyHasBeenRoutedToAllObjects = true;
        GObjCurrentPurgeObjectIndexNeedsReset = true;
        GWarningTimeOutHasBeenDisplayedGC = false;
      }
      if (bVar10) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    bVar10 = false;
    if ((GObjFinishDestroyHasBeenRoutedToAllObjects != false) && (!bVar24)) goto LAB_14206242b;
  }
  else {
LAB_14206242b:
    bVar10 = false;
    bVar24 = -1 < CpuChannel->Enabled;
    if (bVar24) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId5052,"DestroyObjects",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                 ,0x13bc);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5052);
    }
    if (GObjCurrentPurgeObjectIndexNeedsReset != false) {
      if ((GUObjectPurge.bFinishedDestroyingObjects == false) &&
         (bVar12 = FDebug::CheckVerifyFailedImpl2
                             ("IsFinished()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0x34e,L""), bVar12)) {
        pcVar4 = (code *)swi(3);
        uVar11 = (*pcVar4)();
        return (bool)uVar11;
      }
      GUObjectPurge.ObjCurrentFreeIndexObjectIndex = 0;
      GUObjectPurge.ObjCurrentPurgeObjectIndex = 0;
      GUObjectPurge.ObjectsDestroyedSinceLastMarkPhase = 0;
      GObjCurrentPurgeObjectIndexNeedsReset = false;
    }
    FObjectPurge::DestroyObjects(&GUObjectPurge,param_1,param_2,GCStartTime);
    if (GUObjectPurge.bFinishedDestroyingObjects != false) {
      if (GVerifyObjectsDestroyed != 0) {
        FObjectPurge::VerifyAllObjectsDestroyed(&GUObjectPurge);
      }
      GObjFinishDestroyHasBeenRoutedToAllObjects = false;
      LOCK();
      GObjPurgeIsRequired = (atomic<bool>)0x0;
      UNLOCK();
      bVar10 = true;
      GObjCurrentPurgeObjectIndexNeedsReset = true;
    }
    if (bVar24) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  QueryPerformanceCounter(local_b8);
  iVar1 = GGCStats.DestroyGarbageTime.NumIterations + 1;
  dVar7 = ((double)local_b8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar8) - dVar7;
  GGCStats.DestroyGarbageTime.Total = dVar7 + GGCStats.DestroyGarbageTime.Total;
  if (GGCStats.DestroyGarbageTime.Max < dVar7) {
    GGCStats.DestroyGarbageTime.SlowestIteration = GGCStats.DestroyGarbageTime.NumIterations;
    GGCStats.DestroyGarbageTime.Max = dVar7;
  }
  GGCStats.DestroyGarbageTimeLimit = param_2;
  GGCStats.DestroyGarbageTime.NumIterations = iVar1;
  if (param_1) {
    if (bVar10 == false) {
      if (5 < (byte)LogGarbage._0_1_) {
        UE::Logging::Private::BasicLog<6>(&LOG_Static,(FLogCategoryBase *)&LogGarbage);
      }
      goto LAB_142062679;
    }
  }
  else if (bVar10 == false) goto LAB_142062679;
  if (4 < (byte)LogGarbage._0_1_) {
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogGarbage);
  }
  GUObjectPurge.ObjectsDestroyedSinceLastMarkPhase = 0;
LAB_142062679:
  GIsGarbageCollecting = bVar9;
  if (bVar23) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar10;
}

// IncrementalPurgeGarbage @ 1420626b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl IncrementalPurgeGarbage(bool param_1,double param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_void___cdecl_IncrementalPurgeGarbage(bool,double)_::_2_::FStat_STAT_IncrementalPurgeGarbage>
  FVar8;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar9;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  FNameEntryId FVar13;
  bool bVar14;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FStatMessage local_58 [2];
  
  if (GExitPurge) {
    LOCK();
    GObjPurgeIsRequired = (atomic<bool>)0x1;
    UNLOCK();
    FUObjectArray::DisableDisregardForGC(&GUObjectArray);
    GObjCurrentPurgeObjectIndexNeedsReset = true;
  }
  if ((GObjPurgeIsRequired == (atomic<bool>)0x0) &&
     (GObjIncrementalPurgeIsInProgress == (atomic<bool>)0x0)) {
    return;
  }
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Red,"IncrementalPurgeGarbage");
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4669,"IncrementalPurgeGarbage",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
               ,0x123d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4669);
  }
  FVar13.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    if (StatPtr_STAT_IncrementalPurgeGarbage ==
        (FThreadSafeStaticStat<_void___cdecl_IncrementalPurgeGarbage(bool,double)_::_2_::FStat_STAT_IncrementalPurgeGarbage>
         )0x0) {
      pFVar7 = FName::FName((FName *)&local_res18.s,"STAT_IncrementalPurgeGarbage");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IncrementalPurgeGarbage,*pFVar7,
                 L"IncrementalPurgeGarbage","STATGROUP_GC","STATCAT_Advanced",L"Garbage Collection",
                 true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&_TSS0);
  }
  FVar8 = StatPtr_STAT_IncrementalPurgeGarbage;
  if (StatPtr_STAT_IncrementalPurgeGarbage ==
      (FThreadSafeStaticStat<_void___cdecl_IncrementalPurgeGarbage(bool,double)_::_2_::FStat_STAT_IncrementalPurgeGarbage>
       )0x0) {
    pFVar7 = FName::FName(&local_res20,"STAT_IncrementalPurgeGarbage");
    FVar8 = (FThreadSafeStaticStat<_void___cdecl_IncrementalPurgeGarbage(bool,double)_::_2_::FStat_STAT_IncrementalPurgeGarbage>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IncrementalPurgeGarbage,*pFVar7,
                         L"IncrementalPurgeGarbage","STATGROUP_GC","STATCAT_Advanced",
                         L"Garbage Collection",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar8;
  bVar2 = false;
  bVar4 = false;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value == 0) && (uVar10 == 0)) {
LAB_142062906:
    bVar3 = false;
    FVar12.ComparisonIndex.Value = 0;
    FVar12.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.s.LowPart = FVar11.Value;
        local_res18.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                   ,0x123e);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_142062906;
    local_res18.s.LowPart = FVar11.Value;
    local_res18.s.HighPart = uVar10;
    FThreadStats::AddMessage(FVar12,CycleScopeStart);
    bVar3 = true;
    FVar13.Value = FVar11.Value;
  }
  if (__CsvProfilerStat4671 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("GarbageCollection");
    __CsvProfilerStat4671 = true;
  }
  FCsvProfiler::BeginExclusiveStat("GarbageCollection","CSV_GarbageCollection");
  bVar5 = GIsGarbageCollecting;
  LOCK();
  GObjIncrementalPurgeIsInProgress = (atomic<bool>)0x1;
  UNLOCK();
  if (GObjPurgeIsRequired == (atomic<bool>)0x0) {
    FMemory::Trim(true);
    GGCStats.bInProgress = false;
    bVar5 = GIsGarbageCollecting;
    if (param_1) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&FCoreUObjectDelegates::GarbageCollectComplete);
      if (GDumpGCAnalyticsToLog != 0) {
        UE::GC::Private::FStats::DumpToLog(&GGCStats);
      }
      FMiscTrace::OutputEndRegion(L"GarbageCollection");
      LOCK();
      GObjIncrementalPurgeIsInProgress = (atomic<bool>)0x0;
      UNLOCK();
      goto LAB_142062aec;
    }
LAB_142062a89:
    GIsGarbageCollecting = bVar5;
    GGCStats.bInProgress = false;
    LOCK();
    GObjIncrementalPurgeIsInProgress = (atomic<bool>)0x0;
    UNLOCK();
  }
  else {
    GIsGarbageCollecting = true;
    QueryPerformanceCounter(&local_res18);
    GCStartTime = (double)CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) *
                  FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
    if ((((GUnrechableObjectIndex < GUnreachableObjects.ArrayNum) ||
         (UE::GC::Private::GGatherUnreachableObjectsState.bIsPending != false)) &&
        (bVar6 = UnhashUnreachableObjects(param_1,param_2), bVar6)) ||
       (bVar6 = IncrementalDestroyGarbage(param_1,param_2), !bVar6)) {
      if (param_1) goto LAB_142062a97;
    }
    else {
      if (CpuChannel->Enabled < 0) {
        pTVar9 = FCoreUObjectDelegates::GetPostPurgeGarbageDelegate();
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast(pTVar9);
      }
      else {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId4728,"BroadcastPostPurgeGarbage",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                   ,0x1278);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4728);
        pTVar9 = FCoreUObjectDelegates::GetPostPurgeGarbageDelegate();
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast(pTVar9);
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (!param_1) goto LAB_142062a89;
LAB_142062a97:
      QueryPerformanceCounter(&local_res18);
      GGCStats.TotalTime =
           GGCStats.TotalTime +
           (((double)CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) *
             FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000) - GCStartTime);
    }
    GGCStats.bInProgress = true;
    GIsGarbageCollecting = bVar5;
  }
LAB_142062aec:
  FCsvProfiler::EndExclusiveStat("GarbageCollection");
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar3) && (FVar12 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_58[0].NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      local_58[0].NameAndInfo.Index.Value = FVar13.Value;
      QueryPerformanceCounter(&local_res18);
      local_58[0].StatData.Pad[4] = '\0';
      local_58[0].StatData.Pad[5] = '\0';
      local_58[0].StatData.Pad[6] = '\0';
      local_58[0].StatData.Pad[7] = '\0';
      local_58[0].StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_58[0].StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_58[0].StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_58[0].StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,local_58);
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
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// IsGarbageCollectingAndLockingUObjectHashTables @ 142063280

bool __cdecl IsGarbageCollectingAndLockingUObjectHashTables(void)

{
  return (bool)GIsGarbageCollectingAndLockingUObjectHashTables;
}

// IsGarbageCollectionLocked @ 142063290

bool __cdecl IsGarbageCollectionLocked(void)

{
  code *pcVar1;
  FGCCSyncObject *pFVar2;
  bool bVar3;
  undefined1 uVar4;
  
  pFVar2 = GGCSingleton;
  if (GGCSingleton == (FGCCSyncObject *)0x0) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("Singleton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0xbc,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  return (pFVar2->AsyncCounter).Counter != 0;
}

// IsIncrementalPurgePending @ 142063460

bool __cdecl IsIncrementalPurgePending(void)

{
  if ((GObjIncrementalPurgeIsInProgress == (atomic<bool>)0x0) &&
     (GObjPurgeIsRequired == (atomic<bool>)0x0)) {
    return false;
  }
  return true;
}

// IsIncrementalReachabilityAnalysisPending @ 142063490

bool __cdecl IsIncrementalReachabilityAnalysisPending(void)

{
  return UE::GC::GIsIncrementalReachabilityPending;
}

// IsIncrementalUnhashPending @ 1420634a0

bool __cdecl IsIncrementalUnhashPending(void)

{
  if ((GUnreachableObjects.ArrayNum <= GUnrechableObjectIndex) &&
     (!UE::GC::Private::GGatherUnreachableObjectsState.bIsPending)) {
    return false;
  }
  return true;
}

// OnDisregardForGCSetDisabled @ 142065b60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl OnDisregardForGCSetDisabled(int param_1)

{
  atomic<UE::TConsumeAllMpmcQueue<int,FMemory>::FNode_*> aVar1;
  byte bVar2;
  atomic<unsigned_char> aVar3;
  TConsumeAllMpmcQueue<int,FMemory> TVar4;
  ForElementType<UE::GC::TGatherIterator<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>
  FVar5;
  bool bVar6;
  undefined1 auStackY_c98 [32];
  <lambda_1> local_c58;
  TThreadedGather<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,UE::GC::TDefaultPayloadOps<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>
  *local_c50;
  TArrayView<std::nullptr_t,int> local_c48;
  code *local_c38;
  undefined1 **local_c30;
  TThreadedGather<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,UE::GC::TDefaultPayloadOps<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>
  local_c28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_c98;
  local_c28.ThreadIterators.ArrayMax = 0x20;
  local_c28.ThreadIterators.AllocatorInstance.SecondaryData =
       (ForElementType<UE::GC::TGatherIterator<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>
        )0x0;
  local_c28.ThreadIterators.ArrayNum = 0;
  local_c28.bIsPending = false;
  UE::GC::
  TThreadedGather<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,UE::GC::TDefaultPayloadOps<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>
  ::Start(&local_c28,Parallel,param_1,0,0);
  local_c50 = &local_c28;
  local_c38 = UE::Core::Private::Function::
              TFunctionRefCaller<`OnDisregardForGCSetDisabled'::__l2::<lambda_1>,void,int>::Call;
  local_c30 = (undefined1 **)&local_c50;
  local_c48.DataPtr = (void **)0x0;
  local_c48.ArrayNum = 0;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"GC.OnDisregardForGCSetDisabled",local_c28.ThreadIterators.ArrayNum,1,
             (TFunctionRef<void___cdecl(int)> *)&local_c38,local_c58,
             (uint)(local_c28.ThreadIterators.ArrayNum == 1),&local_c48);
  LOCK();
  bVar6 = UE::GC::Private::GRootsMutex.State == (atomic<unsigned_char>)0x0;
  if (bVar6) {
    UE::GC::Private::GRootsMutex.State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar6) {
    UE::FMutex::LockSlow(&UE::GC::Private::GRootsMutex);
  }
  TVar4.Head = UE::GC::Private::GDirtyRoots.Head;
  LOCK();
  UE::GC::Private::GDirtyRoots.Head = (atomic<UE::TConsumeAllMpmcQueue<int,FMemory>::FNode_*>)0x0;
  UNLOCK();
  while (TVar4.Head != (atomic<UE::TConsumeAllMpmcQueue<int,FMemory>::FNode_*>)0x0) {
                    /* WARNING: Load size is inaccurate */
    aVar1 = *TVar4.Head;
    UE::GC::Private::ProcessDirtyRootNoLock(*(int *)((longlong)TVar4.Head + 8));
    FMemory::Free((void *)TVar4.Head);
    TVar4.Head = aVar1;
  }
  UE::GC::
  TThreadedGather<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,UE::GC::TDefaultPayloadOps<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>
  ::Finish(&local_c28,&UE::GC::Private::GRoots);
  LOCK();
  aVar3 = UE::GC::Private::GRootsMutex.State + -1;
  UNLOCK();
  bVar2 = (byte)UE::GC::Private::GRootsMutex.State & 2;
  UE::GC::Private::GRootsMutex.State = aVar3;
  if (bVar2 != 0) {
    UE::FMutex::WakeWaitingThread(&UE::GC::Private::GRootsMutex);
  }
  FVar5 = (ForElementType<UE::GC::TGatherIterator<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>
           )&local_c28;
  if (local_c28.ThreadIterators.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::GC::TGatherIterator<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>
       )0x0) {
    FVar5 = local_c28.ThreadIterators.AllocatorInstance.SecondaryData;
  }
  DestructItems<UE::GC::TGatherIterator<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,int>
            ((TGatherIterator<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)FVar5,
             local_c28.ThreadIterators.ArrayNum);
  if (local_c28.ThreadIterators.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::GC::TGatherIterator<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>
       )0x0) {
    FMemory::Free((void *)local_c28.ThreadIterators.AllocatorInstance.SecondaryData);
  }
  return;
}

// PerformIncrementalReachabilityAnalysis @ 142065ea0

void __cdecl PerformIncrementalReachabilityAnalysis(double param_1)

{
  code *pcVar1;
  bool bVar2;
  LARGE_INTEGER local_res8 [4];
  
  if (!UE::GC::GIsIncrementalReachabilityPending) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("UE::GC::GIsIncrementalReachabilityPending",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x1794,
                       L"Incremental reachability must be pending to perform its next iteration");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = 0.0 < param_1;
  if (!bVar2) {
    param_1 = 0.0;
  }
  UE::GC::GReachabilityState.IterationTimeLimit = param_1;
  QueryPerformanceCounter(local_res8);
  UE::GC::GReachabilityState.IterationStartTime =
       (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
       __real_4170000000000000;
  AcquireGCLock();
  UE::GC::FReachabilityAnalysisState::PerformReachabilityAnalysisAndConditionallyPurgeGarbage
            (&UE::GC::GReachabilityState,bVar2);
  if ((!bVar2) && (UE::GC::GIsIncrementalReachabilityPending != false)) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("bUsingTimeLimit || !UE::GC::GIsIncrementalReachabilityPending",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x179c,
                       L"Incremental Reachability is still pending after completing the previous iteration without time limit."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// PurgeAllUObjectsOnExit @ 14208c060

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl PurgeAllUObjectsOnExit(void)

{
  FThreadSafeCounter *pFVar1;
  int iVar2;
  UObjectBase *pUVar3;
  UClass *pUVar4;
  longlong lVar5;
  atomic<UE::TConsumeAllMpmcQueue<int,FMemory>::FNode_*> aVar6;
  code *pcVar7;
  byte bVar8;
  atomic<unsigned_char> aVar9;
  FUObjectItem *pFVar10;
  TConsumeAllMpmcQueue<int,FMemory> TVar11;
  FGCCSyncObject *pFVar12;
  bool bVar13;
  UClass *pUVar14;
  EInternalObjectFlags EVar15;
  EInternalObjectFlags EVar16;
  EInternalObjectFlags EVar17;
  LARGE_INTEGER local_res10;
  TIterator local_78;
  TIterator local_60;
  
  if (GUObjectArray.OpenForDisregardForGC) {
    FUObjectArray::CloseDisregardForGC(&GUObjectArray);
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::GReachabilityState.IterationTimeLimit = 0.0;
    QueryPerformanceCounter(&local_res10);
    UE::GC::GReachabilityState.IterationStartTime =
         (double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000;
    AcquireGCLock();
    UE::GC::FReachabilityAnalysisState::PerformReachabilityAnalysisAndConditionallyPurgeGarbage
              (&UE::GC::GReachabilityState,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (bVar13 = FDebug::CheckVerifyFailedImpl2
                           ("bUsingTimeLimit || !UE::GC::GIsIncrementalReachabilityPending",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                            ,0x179c,
                            L"Incremental Reachability is still pending after completing the previous iteration without time limit."
                           ), bVar13)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if ((GObjIncrementalPurgeIsInProgress != (atomic<bool>)0x0) ||
     (GObjPurgeIsRequired != (atomic<bool>)0x0)) {
    IncrementalPurgeGarbage(false,__real_3f60624dd2f1a9fc);
  }
  AcquireGCLock();
  FUObjectClusterContainer::DissolveClusters(&GUObjectClusters,true);
  local_78.Array = &GUObjectArray;
  local_78.CurrentObject = (FUObjectItem *)0x0;
  LOCK();
  GObjectCountDuringLastMarkPhase.Counter = 0;
  UNLOCK();
  local_78.Index = -1;
  FUObjectArray::TIterator::Advance(&local_78);
  pFVar10 = local_78.CurrentObject;
  while (local_78.CurrentObject = pFVar10, pFVar10 != (FUObjectItem *)0x0) {
    LOCK();
    GObjectCountDuringLastMarkPhase.Counter = GObjectCountDuringLastMarkPhase.Counter + 1;
    UNLOCK();
    pUVar3 = (pFVar10->field1_0x8).Object;
    if (pUVar3 != (UObjectBase *)0x0) {
      pUVar14 = Z_Construct_UClass_UField_NoRegister();
      EVar16 = UE::GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
      EVar17 = UE::GC::Private::FGCFlags::ReachableObjectFlag;
      pUVar4 = (pUVar3->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
      iVar2 = (int)pUVar14->_padding_;
      if (((int)pUVar4->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar14->_padding_)) {
        do {
          lVar5 = (pFVar10->field0_0x0).FlagsAndRefCount;
          EVar15 = (EInternalObjectFlags)((ulonglong)lVar5 >> 0x20);
          EVar16 = UE::GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
          if ((EVar15 & EVar17) == Borrowed) break;
          if (((ulonglong)pFVar10 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (
                      L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          bVar13 = lVar5 == (pFVar10->field0_0x0).FlagsAndRefCount;
          if (bVar13) {
            (pFVar10->field0_0x0).FlagsAndRefCount =
                 (longlong)(int)(~EVar17 & EVar15) << 0x20 | (longlong)(int)lVar5;
          }
          UNLOCK();
          EVar16 = UE::GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
        } while (!bVar13);
        do {
          lVar5 = (pFVar10->field0_0x0).FlagsAndRefCount;
          EVar17 = (EInternalObjectFlags)((ulonglong)lVar5 >> 0x20);
          if ((EVar16 & EVar17) == EVar16) break;
          if (((ulonglong)pFVar10 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (
                      L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          bVar13 = lVar5 == (pFVar10->field0_0x0).FlagsAndRefCount;
          if (bVar13) {
            (pFVar10->field0_0x0).FlagsAndRefCount =
                 (longlong)(int)(EVar17 | EVar16) << 0x20 | (longlong)(int)lVar5;
          }
          UNLOCK();
        } while (!bVar13);
      }
      else {
        do {
          lVar5 = (pFVar10->field0_0x0).FlagsAndRefCount;
          EVar15 = (EInternalObjectFlags)((ulonglong)lVar5 >> 0x20);
          EVar17 = UE::GC::Private::FGCFlags::ReachableObjectFlag;
          if ((EVar15 & EVar16) == Borrowed) break;
          if (((ulonglong)pFVar10 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (
                      L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          bVar13 = lVar5 == (pFVar10->field0_0x0).FlagsAndRefCount;
          if (bVar13) {
            (pFVar10->field0_0x0).FlagsAndRefCount =
                 (longlong)(int)(~EVar16 & EVar15) << 0x20 | (longlong)(int)lVar5;
          }
          UNLOCK();
          EVar17 = UE::GC::Private::FGCFlags::ReachableObjectFlag;
        } while (!bVar13);
        do {
          lVar5 = (pFVar10->field0_0x0).FlagsAndRefCount;
          EVar16 = (EInternalObjectFlags)((ulonglong)lVar5 >> 0x20);
          if ((EVar17 & EVar16) == EVar17) break;
          if (((ulonglong)pFVar10 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (
                      L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          bVar13 = lVar5 == (pFVar10->field0_0x0).FlagsAndRefCount;
          if (bVar13) {
            (pFVar10->field0_0x0).FlagsAndRefCount =
                 (longlong)(int)(EVar16 | EVar17) << 0x20 | (longlong)(int)lVar5;
          }
          UNLOCK();
        } while (!bVar13);
      }
    }
    FUObjectArray::TIterator::Advance(&local_78);
    pFVar10 = local_78.CurrentObject;
  }
  GExitPurge = true;
  GatherUnreachableObjects(Parallel,0.0);
  IncrementalPurgeGarbage(false,__real_3f60624dd2f1a9fc);
  local_60.Array = &GUObjectArray;
  LOCK();
  GObjectCountDuringLastMarkPhase.Counter = 0;
  UNLOCK();
  local_60.Index = -1;
  local_60.CurrentObject = (FUObjectItem *)0x0;
  FUObjectArray::TIterator::Advance(&local_60);
  EVar17 = UE::GC::Private::FGCFlags::ReachableObjectFlag;
  pFVar10 = local_60.CurrentObject;
  do {
    UE::GC::Private::FGCFlags::ReachableObjectFlag = EVar17;
    local_60.CurrentObject = pFVar10;
    if (pFVar10 == (FUObjectItem *)0x0) {
      GatherUnreachableObjects(Parallel,0.0);
      IncrementalPurgeGarbage(false,__real_3f60624dd2f1a9fc);
      LOCK();
      bVar13 = UE::GC::Private::GRootsMutex.State == (atomic<unsigned_char>)0x0;
      if (bVar13) {
        UE::GC::Private::GRootsMutex.State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar13) {
        UE::FMutex::LockSlow(&UE::GC::Private::GRootsMutex);
      }
      TVar11.Head = UE::GC::Private::GDirtyRoots.Head;
      LOCK();
      UE::GC::Private::GDirtyRoots.Head =
           (atomic<UE::TConsumeAllMpmcQueue<int,FMemory>::FNode_*>)0x0;
      UNLOCK();
      while (TVar11.Head != (atomic<UE::TConsumeAllMpmcQueue<int,FMemory>::FNode_*>)0x0) {
                    /* WARNING: Load size is inaccurate */
        aVar6 = *TVar11.Head;
        UE::GC::Private::ProcessDirtyRootNoLock(*(int *)((longlong)TVar11.Head + 8));
        FMemory::Free((void *)TVar11.Head);
        TVar11.Head = aVar6;
      }
      bVar13 = 1 < UE::GC::Private::GRoots.HashSize;
      if (!bVar13) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements
                  (&UE::GC::Private::GRoots);
      }
      UE::GC::Private::GRoots.Elements._8_4_ = 0;
      if (UE::GC::Private::GRoots.Elements._12_4_ != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,(ForAnyElementType *)&UE::GC::Private::GRoots,0,
                   (int *)&UE::GC::Private::GRoots.Elements.field_0xc);
      }
      UE::GC::Private::GRoots.Elements._52_4_ = 0;
      UE::GC::Private::GRoots.Elements._40_4_ = 0;
      UE::GC::Private::GRoots.Elements._48_4_ = 0xffffffff;
      if (0x80 < (uint)UE::GC::Private::GRoots.Elements._44_4_) {
        UE::GC::Private::GRoots.Elements._44_4_ = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)
                   &UE::GC::Private::GRoots.Elements.field_0x10,0);
      }
      if (bVar13) {
        UE::GC::Private::GRoots.HashSize = 1;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(&UE::GC::Private::GRoots);
      }
      LOCK();
      aVar9 = UE::GC::Private::GRootsMutex.State + -1;
      UNLOCK();
      bVar8 = (byte)UE::GC::Private::GRootsMutex.State & 2;
      UE::GC::Private::GRootsMutex.State = aVar9;
      if (bVar8 != 0) {
        UE::FMutex::WakeWaitingThread(&UE::GC::Private::GRootsMutex);
      }
      pFVar12 = GGCSingleton;
      if ((GGCSingleton == (FGCCSyncObject *)0x0) &&
         (bVar13 = FDebug::CheckVerifyFailedImpl2
                             ("Singleton",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                              ,0xbc,L""), bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      (**(code **)(pFVar12->GCUnlockedEvent->_padding_ + 0x10))();
      LOCK();
      pFVar1 = &pFVar12->GCCounter;
      pFVar1->Counter = pFVar1->Counter + -1;
      UNLOCK();
      return;
    }
    LOCK();
    GObjectCountDuringLastMarkPhase.Counter = GObjectCountDuringLastMarkPhase.Counter + 1;
    UNLOCK();
    do {
      lVar5 = (pFVar10->field0_0x0).FlagsAndRefCount;
      EVar15 = (EInternalObjectFlags)((ulonglong)lVar5 >> 0x20);
      EVar16 = UE::GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
      if ((EVar17 & EVar15) == Borrowed) break;
      if (((ulonglong)pFVar10 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (
                  L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                  );
      }
      LOCK();
      bVar13 = lVar5 == (pFVar10->field0_0x0).FlagsAndRefCount;
      if (bVar13) {
        (pFVar10->field0_0x0).FlagsAndRefCount =
             (longlong)(int)(~EVar17 & EVar15) << 0x20 | (longlong)(int)lVar5;
      }
      UNLOCK();
      EVar16 = UE::GC::Private::FGCFlags::MaybeUnreachableObjectFlag;
    } while (!bVar13);
    do {
      lVar5 = (pFVar10->field0_0x0).FlagsAndRefCount;
      EVar17 = (EInternalObjectFlags)((ulonglong)lVar5 >> 0x20);
      if ((EVar17 & EVar16) == EVar16) break;
      if (((ulonglong)pFVar10 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (
                  L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                  );
      }
      LOCK();
      bVar13 = lVar5 == (pFVar10->field0_0x0).FlagsAndRefCount;
      if (bVar13) {
        (pFVar10->field0_0x0).FlagsAndRefCount =
             (longlong)(int)(EVar17 | EVar16) << 0x20 | (longlong)(int)lVar5;
      }
      UNLOCK();
    } while (!bVar13);
    FUObjectArray::TIterator::Advance(&local_60);
    EVar17 = UE::GC::Private::FGCFlags::ReachableObjectFlag;
    pFVar10 = local_60.CurrentObject;
  } while( true );
}

// ReleaseGCLock @ 14208de80

void __cdecl ReleaseGCLock(void)

{
  FThreadSafeCounter *pFVar1;
  code *pcVar2;
  FGCCSyncObject *pFVar3;
  bool bVar4;
  
  pFVar3 = GGCSingleton;
  if (GGCSingleton == (FGCCSyncObject *)0x0) {
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("Singleton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0xbc,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (**(code **)(pFVar3->GCUnlockedEvent->_padding_ + 0x10))();
  LOCK();
  pFVar1 = &pFVar3->GCCounter;
  pFVar1->Counter = pFVar1->Counter + -1;
  UNLOCK();
  return;
}

// SetIncrementalReachabilityAnalysisEnabled @ 14208ecd0

void __cdecl SetIncrementalReachabilityAnalysisEnabled(bool param_1)

{
  GAllowIncrementalReachability = (uint)param_1;
  return;
}

// SetReachabilityAnalysisTimeLimit @ 14208f030

void __cdecl SetReachabilityAnalysisTimeLimit(float param_1)

{
  GIncrementalReachabilityTimeLimit = param_1;
  return;
}

// ShutdownGarbageCollection @ 14208f390

void __cdecl ShutdownGarbageCollection(void)

{
  code *pcVar1;
  bool bVar2;
  FGCHistory *this;
  FContextPoolScope local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      atexit(`UE::GC::FContextPoolScope::Get'::__l2::_dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&_TSS0);
    }
  }
  local_18.Pool = &Singleton;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x3d7,L"Context pool use restricted to game thread");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UE::GC::FContextPoolScope::Cleanup(&local_18);
  this = FGCHistory::Get();
  FGCHistory::Cleanup(this);
  return;
}

// TryCollectGarbage @ 142091380

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl TryCollectGarbage(EObjectFlags param_1,bool param_2)

{
  FThreadSafeCounter *pFVar1;
  FSharedMutex *pFVar2;
  int iVar3;
  atomic<unsigned_int> aVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  undefined1 uVar8;
  FGCCSyncObject *pFVar9;
  bool bVar10;
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  
  if (GIsInitialLoad) {
    if (4 < (byte)LogGarbage._0_1_) {
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogGarbage);
    }
    return false;
  }
  if (!UE::GC::GIsIncrementalReachabilityPending) {
    pFVar9 = FGCCSyncObject::Get();
    bVar7 = false;
    if ((pFVar9->AsyncCounter).Counter == 0) {
      LOCK();
      bVar10 = (pFVar9->SharedMutex).State == (atomic<unsigned_int>)0x0;
      if (bVar10) {
        (pFVar9->SharedMutex).State = (atomic<unsigned_int>)0x1;
      }
      UNLOCK();
      if (!bVar10) {
        UE::FSharedMutex::LockSlow(&pFVar9->SharedMutex);
      }
      if ((pFVar9->AsyncCounter).Counter == 0) {
        (**(code **)(pFVar9->GCUnlockedEvent->_padding_ + 0x18))();
        LOCK();
        pFVar1 = &pFVar9->GCCounter;
        iVar3 = pFVar1->Counter;
        pFVar1->Counter = pFVar1->Counter + 1;
        UNLOCK();
        if ((iVar3 != 0) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("GCCounterValue == 1",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GCScopeLock.h"
                               ,0xa3,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        bVar7 = true;
      }
      LOCK();
      pFVar2 = &pFVar9->SharedMutex;
      aVar4 = pFVar2->State;
      pFVar2->State = (atomic<unsigned_int>)((int)pFVar2->State + -1);
      UNLOCK();
      if (((uint)aVar4 & 6) != 0) {
        UE::FSharedMutex::WakeWaitingThreads(&pFVar9->SharedMutex,(uint)aVar4);
      }
      if (bVar7) goto LAB_1420914c3;
    }
    if ((GNumRetriesBeforeForcingGC < 1) || (GNumAttemptsSinceLastGC <= GNumRetriesBeforeForcingGC))
    {
      GNumAttemptsSinceLastGC = GNumAttemptsSinceLastGC + 1;
      return false;
    }
    if (2 < (byte)LogGarbage._0_1_) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogGarbage);
    }
    GNumAttemptsSinceLastGC = 0;
  }
  AcquireGCLock();
LAB_1420914c3:
  QueryPerformanceCounter(&local_res18);
  dVar6 = (double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  UE::GC::FReachabilityAnalysisState::CollectGarbage(&UE::GC::GReachabilityState,param_1,param_2);
  QueryPerformanceCounter(&local_res20);
  GTimingInfo.LastGCDuration =
       (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar6;
  if (`void___cdecl_UE::GC::CollectGarbageInternal(EObjectFlags,bool)'::__l3::__CsvProfilerStat5529
      == false) {
    FCsvProfilerTrace::OutputInlineStat("Count",_GCsvCategory_GC.Index);
    `void___cdecl_UE::GC::CollectGarbageInternal(EObjectFlags,bool)'::__l3::__CsvProfilerStat5529 =
         true;
  }
  FCsvProfiler::RecordCustomStat("Count",_GCsvCategory_GC.Index,1,Accumulate);
  return true;
}

// UnhashUnreachableObjects @ 1420928c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UnhashUnreachableObjects(bool param_1,double param_2)

{
  int *piVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  double dVar8;
  atomic<bool> aVar9;
  bool bVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  uint uVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<_bool___cdecl_UnhashUnreachableObjects(bool,double)_::_2_::FStat_STAT_UnhashUnreachableObjects>
  FVar16;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  EGatherOptions EVar17;
  FStaticBasicLogRecord *pFVar18;
  FName FVar19;
  uint uVar20;
  bool bVar21;
  bool bVar22;
  double dVar23;
  FColor_u_0 local_f8 [2];
  FName local_f0;
  FName local_e8;
  LARGE_INTEGER local_d8;
  LARGE_INTEGER local_d0;
  LARGE_INTEGER local_c8;
  LARGE_INTEGER local_c0;
  LARGE_INTEGER local_b8;
  FStatMessage local_b0;
  FName local_a0;
  FName local_98 [12];
  
  dVar8 = __real_4170000000000000;
  if (UE::GC::Private::GGatherUnreachableObjectsState.bIsPending) {
    bVar10 = FApp::ShouldUseThreadingForPerformance();
    if ((((!bVar10) || (bVar10 = FGenericPlatformProcess::SupportsMultithreading(), !bVar10)) ||
        (iVar13 = FWindowsPlatformMisc::NumberOfCores(), iVar13 < 2)) ||
       (EVar17 = Parallel, GAllowParallelGC == 0)) {
      EVar17 = None;
    }
    dVar23 = param_2;
    if (0.0 < GIncrementalGatherTimeLimit) {
      dVar23 = (double)GIncrementalGatherTimeLimit;
    }
    if (!param_1) {
      dVar23 = 0.0;
    }
    bVar10 = GatherUnreachableObjects(EVar17,dVar23);
    if (bVar10) {
      return true;
    }
    if (param_1) {
      QueryPerformanceCounter(&local_d8);
      dVar23 = ((double)local_d8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar8) -
               GCStartTime;
      if (param_2 <= dVar23) {
        dVar23 = param_2;
      }
      param_2 = param_2 - dVar23;
    }
  }
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId6121,"UnhashUnreachableObjects",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
               ,0x17e9);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6121);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    if (StatPtr_STAT_UnhashUnreachableObjects ==
        (FThreadSafeStaticStat<_bool___cdecl_UnhashUnreachableObjects(bool,double)_::_2_::FStat_STAT_UnhashUnreachableObjects>
         )0x0) {
      pFVar15 = FName::FName(&local_a0,"STAT_UnhashUnreachableObjects");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UnhashUnreachableObjects,*pFVar15,
                 L"UnhashUnreachableObjects","STATGROUP_GC","STATCAT_Advanced",L"Garbage Collection"
                 ,true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&_TSS0);
  }
  FVar16 = StatPtr_STAT_UnhashUnreachableObjects;
  if (StatPtr_STAT_UnhashUnreachableObjects ==
      (FThreadSafeStaticStat<_bool___cdecl_UnhashUnreachableObjects(bool,double)_::_2_::FStat_STAT_UnhashUnreachableObjects>
       )0x0) {
    pFVar15 = FName::FName(local_98,"STAT_UnhashUnreachableObjects");
    FVar16 = (FThreadSafeStaticStat<_bool___cdecl_UnhashUnreachableObjects(bool,double)_::_2_::FStat_STAT_UnhashUnreachableObjects>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UnhashUnreachableObjects,
                          *pFVar15,L"UnhashUnreachableObjects","STATGROUP_GC","STATCAT_Advanced",
                          L"Garbage Collection",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar16;
  bVar6 = false;
  bVar5 = false;
  local_e8.ComparisonIndex.Value = 0;
  local_e8.Number = 0;
  if ((FVar19.ComparisonIndex.Value.Value == 0) && (FVar19.Number == 0)) {
LAB_142092b71:
    bVar7 = false;
    FVar19 = local_e8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_f8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_f8[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar6 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f0.ComparisonIndex.Value = FVar19.ComparisonIndex.Value.Value;
        local_f0.Number = FVar19.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_f0,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                   ,0x17ea);
        bVar6 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_142092b71;
    FThreadStats::AddMessage(FVar19,CycleScopeStart);
    bVar6 = false;
    bVar7 = true;
  }
  aVar9 = GObjUnhashUnreachableIsInProgress;
  LOCK();
  GObjUnhashUnreachableIsInProgress = (atomic<bool>)0x1;
  UNLOCK();
  if (CpuChannel->Enabled < 0) {
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&FCoreUObjectDelegates::PreGarbageCollectConditionalBeginDestroy);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId6127,"BroadcastGarbageCollectConditionalBeginDestroy",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
               ,0x17ef);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6127);
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&FCoreUObjectDelegates::PreGarbageCollectConditionalBeginDestroy);
    FCpuProfilerTrace::OutputEndEvent();
  }
  QueryPerformanceCounter(&local_d0);
  bVar21 = GUnrechableObjectIndex != 0;
  dVar23 = 0.0;
  dVar4 = (double)local_d0.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar8;
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId6139,"ConditionalBeginDestroy",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
               ,0x17fb);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6139);
  }
  uVar20 = GUnrechableObjectIndex;
  iVar13 = 0;
  dVar3 = 0.0;
  if (GUnrechableObjectIndex < GUnreachableObjects.ArrayNum) {
    do {
      GUnrechableObjectIndex = uVar20 + 1;
      uVar14 = 0;
      if ((int)uVar20 < GUnreachableObjects.ArrayNum) {
        uVar14 = ~uVar20 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar11 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar2 = (code *)swi(3);
        uVar12 = (*pcVar2)();
        return (bool)uVar12;
      }
      UObject::ConditionalBeginDestroy
                (*(UObject **)
                  (*(longlong *)
                    (GUnreachableObjects.AllocatorInstance.Data + (longlong)(int)uVar20 * 8) + 8));
      bVar11 = false;
      if (iVar13 == (iVar13 / 10) * 10) {
        bVar11 = param_1;
      }
      if (bVar11 != false) {
        QueryPerformanceCounter(&local_c8);
        dVar23 = (double)local_c8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar8;
        dVar3 = dVar23;
        if (param_2 < dVar23 - dVar4) break;
      }
      uVar20 = GUnrechableObjectIndex;
      iVar13 = iVar13 + 1;
      dVar3 = dVar23;
    } while (GUnrechableObjectIndex < GUnreachableObjects.ArrayNum);
  }
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar22 = GUnrechableObjectIndex < GUnreachableObjects.ArrayNum;
  if (dVar3 == 0.0) {
    QueryPerformanceCounter(&local_c0);
    dVar3 = (double)local_c0.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar8;
  }
  dVar3 = dVar3 - dVar4;
  iVar13 = GGCStats.UnhashingTime.NumIterations + 1;
  GGCStats.UnhashingTime.Total = GGCStats.UnhashingTime.Total + dVar3;
  if (GGCStats.UnhashingTime.Max < dVar3) {
    GGCStats.UnhashingTime.SlowestIteration = GGCStats.UnhashingTime.NumIterations;
    GGCStats.UnhashingTime.Max = dVar3;
  }
  GGCStats.UnhashingTimeLimit = param_2;
  GGCStats.UnhashingTime.NumIterations = iVar13;
  if (param_1) {
    if (bVar22) {
      if ((bVar21) || ((byte)LogGarbage._0_1_ < 5)) goto LAB_142092e97;
      pFVar18 = &LOG_Static;
    }
    else {
      if ((byte)LogGarbage._0_1_ < 5) goto LAB_142092e97;
      pFVar18 = &LOG_Static;
    }
    UE::Logging::Private::BasicLog<5>(pFVar18,(FLogCategoryBase *)&LogGarbage);
  }
  else if (4 < (byte)LogGarbage._0_1_) {
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogGarbage);
  }
LAB_142092e97:
  if (CpuChannel->Enabled < 0) {
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&FCoreUObjectDelegates::PostGarbageCollectConditionalBeginDestroy);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId6195,"BroadCastPostGarbageCollectConditionalBeginDestroy",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
               ,0x1833);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6195);
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&FCoreUObjectDelegates::PostGarbageCollectConditionalBeginDestroy);
    FCpuProfilerTrace::OutputEndEvent();
  }
  LOCK();
  UNLOCK();
  GObjUnhashUnreachableIsInProgress = aVar9;
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar19 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_b0.NameAndInfo.Index = FVar19.ComparisonIndex.Value;
      local_b0.NameAndInfo.Number = FVar19.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_b8);
      local_b0.StatData.Pad[4] = '\0';
      local_b0.StatData.Pad[5] = '\0';
      local_b0.StatData.Pad[6] = '\0';
      local_b0.StatData.Pad[7] = '\0';
      local_b0.StatData.Pad[0] = local_b8.s.LowPart._0_1_;
      local_b0.StatData.Pad[1] = local_b8.s.LowPart._1_1_;
      local_b0.StatData.Pad[2] = local_b8.s.LowPart._2_1_;
      local_b0.StatData.Pad[3] = local_b8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_b0);
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
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar22;
}

// UnlinkReachabilityStressData @ 1420930e0

void __cdecl
UnlinkReachabilityStressData
          (TArray<UObjectReachabilityStressData_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  FUObjectItem *this;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  undefined1 local_res8 [8];
  
  pFVar5 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  do {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<UObjectReachabilityStressData_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) {
      return;
    }
    this = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(*(longlong *)pFVar5 + 0xc));
    do {
      lVar3 = (this->field0_0x0).FlagsAndRefCount;
      uVar4 = (uint)((ulonglong)lVar3 >> 0x20);
      if ((uVar4 >> 0x1e & 1) == 0) goto LAB_14209319f;
      if (((ulonglong)this & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (
                  L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                  );
      }
      LOCK();
      bVar6 = lVar3 == (this->field0_0x0).FlagsAndRefCount;
      if (bVar6) {
        (this->field0_0x0).FlagsAndRefCount =
             ((longlong)(int)uVar4 & 0xffffffffbfffffffU) << 0x20 | (longlong)(int)lVar3;
      }
      UNLOCK();
    } while (!bVar6);
    if ((((lVar3 >> 0x20 & 0x4e500000U) != 0) && ((lVar3 >> 0x20 & 0xe500000U) == 0)) &&
       ((int)lVar3 == 0)) {
      FUObjectItem::MarkRootAsDirty(this);
    }
LAB_14209319f:
    pFVar5 = pFVar5 + 8;
  } while( true );
}

// UnlinkReachabilityStressData @ 1420931d0

void __cdecl UnlinkReachabilityStressData(FOutputDevice *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  int iVar3;
  FUObjectItem *this;
  ulonglong uVar4;
  uint uVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  undefined1 local_res10 [8];
  
  iVar3 = GReachabilityStressData.ArrayNum;
  uVar4 = (ulonglong)GReachabilityStressData.ArrayNum;
  pFVar1 = GReachabilityStressData.AllocatorInstance.Data + uVar4 * 8;
  FVar6.Data = GReachabilityStressData.AllocatorInstance.Data;
  do {
    if ((int)uVar4 != iVar3) {
      `TCheckedPointerIterator<UObjectReachabilityStressData_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res10);
    }
    if (FVar6.Data == pFVar1) {
      GReachabilityStressData.ArrayNum = 0;
      if (GReachabilityStressData.ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&GReachabilityStressData.AllocatorInstance,0,
                   &GReachabilityStressData.ArrayMax);
      }
      return;
    }
    this = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(*(longlong *)FVar6.Data + 0xc));
    do {
      lVar2 = (this->field0_0x0).FlagsAndRefCount;
      uVar5 = (uint)((ulonglong)lVar2 >> 0x20);
      if ((uVar5 >> 0x1e & 1) == 0) goto LAB_14209328f;
      if (((ulonglong)this & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (
                  L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                  );
      }
      LOCK();
      bVar7 = lVar2 == (this->field0_0x0).FlagsAndRefCount;
      if (bVar7) {
        (this->field0_0x0).FlagsAndRefCount =
             ((longlong)(int)uVar5 & 0xffffffffbfffffffU) << 0x20 | (longlong)(int)lVar2;
      }
      UNLOCK();
    } while (!bVar7);
    if ((((lVar2 >> 0x20 & 0x4e500000U) != 0) && ((lVar2 >> 0x20 & 0xe500000U) == 0)) &&
       ((int)lVar2 == 0)) {
      FUObjectItem::MarkRootAsDirty(this);
    }
LAB_14209328f:
    uVar4 = (ulonglong)(uint)GReachabilityStressData.ArrayNum;
    FVar6.Data = FVar6.Data + 8;
  } while( true );
}

// VerifyClustersAssumptions @ 1420937c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl VerifyClustersAssumptions(void)

{
  int iVar1;
  int iVar2;
  FTaskGraphInterface *pFVar3;
  int iVar4;
  int local_res8 [8];
  TArrayView<std::nullptr_t,int> local_48;
  code *local_38;
  undefined4 **local_30;
  int *local_28;
  int local_20;
  int local_1c;
  int local_18;
  
  iVar1 = GUObjectClusters.Clusters.ArrayNum;
  pFVar3 = FTaskGraphInterface::Get();
  iVar2 = (**(code **)((longlong)*pFVar3 + 0x20))(pFVar3);
  local_18 = iVar1;
  iVar4 = 0x10;
  if (iVar2 < 0x10) {
    iVar4 = iVar2;
  }
  local_28 = local_res8;
  local_1c = 1;
  if (1 < iVar4) {
    local_1c = iVar4;
  }
  local_20 = iVar1 / local_1c + 1;
  local_res8[0] = 0;
  local_48.DataPtr = (void **)0x0;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`VerifyClustersAssumptions'::__l2::<lambda_1>,void,int>::Call;
  local_30 = &local_28;
  local_48.ArrayNum = 0;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"GC.VerifyClusterAssumptions",local_1c,1,(TFunctionRef<void___cdecl(int)> *)&local_38,
             (<lambda_1>)0x0,None,&local_48);
  if (0 < local_res8[0]) {
    UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogGarbage);
  }
  return;
}

// VerifyGCAssumptions @ 1420938b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl VerifyGCAssumptions(void)

{
  int iVar1;
  FTaskGraphInterface *pFVar2;
  int iVar3;
  int iVar4;
  int local_res8 [2];
  TArrayView<std::nullptr_t,int> local_48;
  code *local_38;
  undefined4 **local_30;
  int *local_28;
  int local_20;
  int local_1c;
  int local_18;
  
  iVar4 = GUObjectArray.ObjLastNonGCIndex + 1;
  local_res8[0] = 0;
  pFVar2 = FTaskGraphInterface::Get();
  iVar1 = (**(code **)((longlong)*pFVar2 + 0x20))(pFVar2);
  local_48.DataPtr = (void **)0x0;
  local_48.ArrayNum = 0;
  iVar3 = 0x10;
  if (iVar1 < 0x10) {
    iVar3 = iVar1;
  }
  local_28 = local_res8;
  local_1c = 1;
  if (1 < iVar3) {
    local_1c = iVar3;
  }
  local_20 = iVar4 / local_1c + 1;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`VerifyGCAssumptions'::__l2::<lambda_1>,void,int>::Call;
  local_30 = &local_28;
  local_18 = iVar4;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"GC.VerifyAssumptions",local_1c,1,(TFunctionRef<void___cdecl(int)> *)&local_38,
             local_res8[0]._0_1_,None,&local_48);
  if (0 < local_res8[0]) {
    UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogGarbage);
  }
  return;
}

// VerifyNoUnreachableObjects @ 1420939b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl VerifyNoUnreachableObjects(int param_1)

{
  int iVar1;
  int iVar2;
  FTaskGraphInterface *pFVar3;
  int iVar4;
  int local_res8 [2];
  int local_res10 [2];
  LARGE_INTEGER local_res18 [2];
  TArrayView<std::nullptr_t,int> local_68;
  code *local_58;
  undefined4 **local_50;
  int *local_48;
  int *local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  QueryPerformanceCounter(local_res18);
  iVar1 = GUObjectArray.ObjObjects.NumElements;
  pFVar3 = FTaskGraphInterface::Get();
  iVar2 = (**(code **)((longlong)*pFVar3 + 0x20))(pFVar3);
  local_30 = iVar1;
  iVar4 = 0x10;
  if (iVar2 < 0x10) {
    iVar4 = iVar2;
  }
  local_48 = local_res8;
  local_40 = local_res10;
  local_34 = 1;
  if (1 < iVar4) {
    local_34 = iVar4;
  }
  local_res8[0] = 0;
  local_res10[0] = 0;
  local_68.DataPtr = (void **)0x0;
  local_38 = iVar1 / local_34 + 1;
  local_68.ArrayNum = 0;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`VerifyNoUnreachableObjects'::__l2::<lambda_1>,void,int>::Call;
  local_50 = &local_48;
  local_2c = param_1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"GC.VerifyNoUnreachableObjects",local_34,1,
             (TFunctionRef<void___cdecl(int)> *)&local_58,(<lambda_1>)0x0,None,&local_68);
  if (local_res10[0] != param_1) {
    LOCK();
    local_res8[0] = local_res8[0] + 1;
    UNLOCK();
    if (2 < (byte)LogGarbage._0_1_) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogGarbage);
    }
  }
  if (local_res8[0] != 0) {
    UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogGarbage);
  }
  if (4 < (byte)LogGarbage._0_1_) {
    QueryPerformanceCounter(local_res18);
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogGarbage);
  }
  return;
}

// VerifyObjectFlags @ 142093b40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl VerifyObjectFlags(void)

{
  int iVar1;
  FTaskGraphInterface *pFVar2;
  int local_res8 [8];
  TArrayView<std::nullptr_t,int> local_48;
  code *local_38;
  undefined4 **local_30;
  int *local_28;
  int local_20;
  int local_1c;
  int local_18;
  
  iVar1 = GUObjectArray.ObjObjects.NumElements;
  pFVar2 = FTaskGraphInterface::Get();
  local_1c = (**(code **)((longlong)*pFVar2 + 0x20))(pFVar2);
  local_18 = iVar1;
  local_28 = local_res8;
  if (local_1c < 1) {
    local_1c = 1;
  }
  local_20 = iVar1 / local_1c + 1;
  local_res8[0] = 0;
  local_48.DataPtr = (void **)0x0;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`VerifyObjectFlags'::__l2::<lambda_1>,void,int>::Call;
  local_30 = &local_28;
  local_48.ArrayNum = 0;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"GC.VerifyObjectFlags",local_1c,1,(TFunctionRef<void___cdecl(int)> *)&local_38,
             (<lambda_1>)0x0,None,&local_48);
  if (local_res8[0] != 0) {
    UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogGarbage);
  }
  return;
}

// `dynamic_atexit_destructor_for_'CDelayReachabilityIterations'' @ 15034f3f0

void __cdecl _dynamic_atexit_destructor_for__CDelayReachabilityIterations__(void)

{
  CDelayReachabilityIterations._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CDelayReachabilityIterations);
  return;
}

// `dynamic_atexit_destructor_for_'CGarbageReferenceTrackingEnabled'' @ 15034f410

void __cdecl _dynamic_atexit_destructor_for__CGarbageReferenceTrackingEnabled__(void)

{
  CGarbageReferenceTrackingEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CGarbageReferenceTrackingEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CIncrementalBeginDestroyEnabled'' @ 15034f430

void __cdecl _dynamic_atexit_destructor_for__CIncrementalBeginDestroyEnabled__(void)

{
  CIncrementalBeginDestroyEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CIncrementalBeginDestroyEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CIncrementalBeginDestroyGranularity'' @ 15034f450

void __cdecl _dynamic_atexit_destructor_for__CIncrementalBeginDestroyGranularity__(void)

{
  CIncrementalBeginDestroyGranularity._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CIncrementalBeginDestroyGranularity);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAdditionalFinishDestroyTimeGC'' @ 15034f470

void __cdecl _dynamic_atexit_destructor_for__CVarAdditionalFinishDestroyTimeGC__(void)

{
  CVarAdditionalFinishDestroyTimeGC._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAdditionalFinishDestroyTimeGC);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowIncrementalGC'' @ 15034f490

void __cdecl _dynamic_atexit_destructor_for__CVarAllowIncrementalGC__(void)

{
  CVarAllowIncrementalGC._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAllowIncrementalGC);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowIncrementalGather'' @ 15034f4b0

void __cdecl _dynamic_atexit_destructor_for__CVarAllowIncrementalGather__(void)

{
  CVarAllowIncrementalGather._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAllowIncrementalGather);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowParallelGC'' @ 15034f4d0

void __cdecl _dynamic_atexit_destructor_for__CVarAllowParallelGC__(void)

{
  CVarAllowParallelGC._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAllowParallelGC);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowSkipDestroyGarbage'' @ 15034f4f0

void __cdecl _dynamic_atexit_destructor_for__CVarAllowSkipDestroyGarbage__(void)

{
  CVarAllowSkipDestroyGarbage._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAllowSkipDestroyGarbage);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDumpGCAnalyticsToLog'' @ 15034f510

void __cdecl _dynamic_atexit_destructor_for__CVarDumpGCAnalyticsToLog__(void)

{
  CVarDumpGCAnalyticsToLog._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDumpGCAnalyticsToLog);
  return;
}

// `dynamic_atexit_destructor_for_'CVarFlushStreamingOnGC'' @ 15034f530

void __cdecl _dynamic_atexit_destructor_for__CVarFlushStreamingOnGC__(void)

{
  CVarFlushStreamingOnGC._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarFlushStreamingOnGC);
  return;
}

// `dynamic_atexit_destructor_for_'CVarForceEnableDebugGCProcessor'' @ 15034f550

void __cdecl _dynamic_atexit_destructor_for__CVarForceEnableDebugGCProcessor__(void)

{
  CVarForceEnableDebugGCProcessor._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarForceEnableDebugGCProcessor);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGCMaxTimeForFinishDestroy'' @ 15034f570

void __cdecl _dynamic_atexit_destructor_for__CVarGCMaxTimeForFinishDestroy__(void)

{
  CVarGCMaxTimeForFinishDestroy._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGCMaxTimeForFinishDestroy);
  return;
}

// `dynamic_atexit_destructor_for_'CVarIncrementalGatherTimeLimit'' @ 15034f590

void __cdecl _dynamic_atexit_destructor_for__CVarIncrementalGatherTimeLimit__(void)

{
  CVarIncrementalGatherTimeLimit._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarIncrementalGatherTimeLimit);
  return;
}

// `dynamic_atexit_destructor_for_'CVarIncrementalReachabilityTimeLimit'' @ 15034f5b0

void __cdecl _dynamic_atexit_destructor_for__CVarIncrementalReachabilityTimeLimit__(void)

{
  CVarIncrementalReachabilityTimeLimit._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarIncrementalReachabilityTimeLimit);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaxFinishDestroyTimeoutObjectsToLog'' @ 15034f5d0

void __cdecl _dynamic_atexit_destructor_for__CVarMaxFinishDestroyTimeoutObjectsToLog__(void)

{
  CVarMaxFinishDestroyTimeoutObjectsToLog._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarMaxFinishDestroyTimeoutObjectsToLog);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNumRetriesBeforeForcingGC'' @ 15034f5f0

void __cdecl _dynamic_atexit_destructor_for__CVarNumRetriesBeforeForcingGC__(void)

{
  CVarNumRetriesBeforeForcingGC._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNumRetriesBeforeForcingGC);
  return;
}

// `dynamic_atexit_destructor_for_'CVarShouldVerifyGCAssumptions'' @ 15034f610

void __cdecl _dynamic_atexit_destructor_for__CVarShouldVerifyGCAssumptions__(void)

{
  CVarShouldVerifyGCAssumptions._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarShouldVerifyGCAssumptions);
  return;
}

// `dynamic_atexit_destructor_for_'CVarShouldVerifyGCAssumptionsOnFullPurge'' @ 15034f630

void __cdecl _dynamic_atexit_destructor_for__CVarShouldVerifyGCAssumptionsOnFullPurge__(void)

{
  CVarShouldVerifyGCAssumptionsOnFullPurge._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarShouldVerifyGCAssumptionsOnFullPurge);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVerifyGCAssumptionsChance'' @ 15034f650

void __cdecl _dynamic_atexit_destructor_for__CVarVerifyGCAssumptionsChance__(void)

{
  CVarVerifyGCAssumptionsChance._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarVerifyGCAssumptionsChance);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVerifyNoUnreachableObjects'' @ 15034f670

void __cdecl _dynamic_atexit_destructor_for__CVarVerifyNoUnreachableObjects__(void)

{
  CVarVerifyNoUnreachableObjects._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarVerifyNoUnreachableObjects);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVerifyObjectsDestroyed'' @ 15034f690

void __cdecl _dynamic_atexit_destructor_for__CVarVerifyObjectsDestroyed__(void)

{
  CVarVerifyObjectsDestroyed._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarVerifyObjectsDestroyed);
  return;
}

// `dynamic_atexit_destructor_for_'CmdCalculateGCHistorySize'' @ 15034f6b0

void __cdecl _dynamic_atexit_destructor_for__CmdCalculateGCHistorySize__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CmdCalculateGCHistorySize);
  return;
}

// `dynamic_atexit_destructor_for_'CmdSetHistorySize'' @ 15034f6d0

void __cdecl _dynamic_atexit_destructor_for__CmdSetHistorySize__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CmdSetHistorySize);
  return;
}

// `dynamic_atexit_destructor_for_'FunctionStaticLifetime'' @ 15034f6f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`UE::GC::TSingleton<UE::GC::FSlowAROManager>::Get'::__l2::
_dynamic_atexit_destructor_for__FunctionStaticLifetime__(void)

{
  undefined1 *puVar1;
  
  *_FunctionStaticLifetime = 0;
  puVar1 = _FunctionStaticLifetime;
  DestructItems<UE::GC::FAROQueue,int>
            (*(FAROQueue **)(_FunctionStaticLifetime + 0x10),
             *(int *)(_FunctionStaticLifetime + 0x18));
  if (*(void **)(puVar1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)(puVar1 + 0x10));
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GAssembleSchemaLock'' @ 15034f740

void __cdecl _dynamic_atexit_destructor_for__GAssembleSchemaLock__(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015034f747. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&GAssembleSchemaLock);
  return;
}

// `dynamic_atexit_destructor_for_'GDirtyRoots'' @ 15034f760

void __cdecl UE::GC::Private::_dynamic_atexit_destructor_for__GDirtyRoots__(void)

{
  atomic<UE::TConsumeAllMpmcQueue<int,FMemory>::FNode_*> aVar1;
  TConsumeAllMpmcQueue<int,FMemory> TVar2;
  
  TVar2.Head = GDirtyRoots.Head;
  if (GDirtyRoots.Head != (atomic<UE::TConsumeAllMpmcQueue<int,FMemory>::FNode_*>)0x0) {
    LOCK();
    GDirtyRoots.Head = (atomic<UE::TConsumeAllMpmcQueue<int,FMemory>::FNode_*>)0x0;
    UNLOCK();
    while (TVar2.Head != (atomic<UE::TConsumeAllMpmcQueue<int,FMemory>::FNode_*>)0x0) {
                    /* WARNING: Load size is inaccurate */
      aVar1 = *TVar2.Head;
      FMemory::Free((void *)TVar2.Head);
      TVar2.Head = aVar1;
    }
  }
  return;
}

// `dynamic_atexit_destructor_for_'GDumpMemoryStats'' @ 15034f7b0

void __cdecl UE::GC::_dynamic_atexit_destructor_for__GDumpMemoryStats__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GDumpMemoryStats);
  return;
}

// `dynamic_atexit_destructor_for_'GDumpSchemaStats'' @ 15034f7d0

void __cdecl UE::GC::_dynamic_atexit_destructor_for__GDumpSchemaStats__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GDumpSchemaStats);
  return;
}

// `dynamic_atexit_destructor_for_'GGCObjectsPendingDestruction'' @ 15034f7f0

void __cdecl _dynamic_atexit_destructor_for__GGCObjectsPendingDestruction__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GGCObjectsPendingDestruction.AllocatorInstance.Data;
  if (GGCObjectsPendingDestruction.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (GGCObjectsPendingDestruction.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'GGatherUnreachableObjectsState'' @ 15034f810

void __cdecl UE::GC::Private::_dynamic_atexit_destructor_for__GGatherUnreachableObjectsState__(void)

{
  TThreadedGather<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>,UE::GC::TDefaultPayloadOps<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>_>
  *pTVar1;
  
  pTVar1 = &GGatherUnreachableObjectsState;
  if (GGatherUnreachableObjectsState.ThreadIterators.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::GC::TGatherIterator<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>_>
       )0x0) {
    pTVar1 = (TThreadedGather<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>,UE::GC::TDefaultPayloadOps<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>_>
              *)GGatherUnreachableObjectsState.ThreadIterators.AllocatorInstance.SecondaryData;
  }
  DestructItems<UE::GC::TGatherIterator<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>,int>
            ((TGatherIterator<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_> *)
             pTVar1,GGatherUnreachableObjectsState.ThreadIterators.ArrayNum);
  if (GGatherUnreachableObjectsState.ThreadIterators.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::GC::TGatherIterator<TArray<UE::GC::FUnreachableObject,TSizedDefaultAllocator<32>_>_>_>
       )0x0) {
    FMemory::Free((void *)GGatherUnreachableObjectsState.ThreadIterators.AllocatorInstance.
                          SecondaryData);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GGenerateReachabilityStressDataCmd'' @ 15034f860

void __cdecl _dynamic_atexit_destructor_for__GGenerateReachabilityStressDataCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GGenerateReachabilityStressDataCmd)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'GIntrinsicClassSchemas'' @ 15034f880

void __cdecl UE::GC::_dynamic_atexit_destructor_for__GIntrinsicClassSchemas__(void)

{
  GIntrinsicClassSchemas._72_4_ = 0;
  if (GIntrinsicClassSchemas._64_8_ != 0) {
    FMemory::Free((void *)GIntrinsicClassSchemas._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UClass_*,UE::GC::FSchemaOwner>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UClass_*,UE::GC::FSchemaOwner>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UClass_*,UE::GC::FSchemaOwner>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GIntrinsicClassSchemas);
  return;
}

// `dynamic_atexit_destructor_for_'GReachabilityStressData'' @ 15034f8c0

void __cdecl _dynamic_atexit_destructor_for__GReachabilityStressData__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GReachabilityStressData.AllocatorInstance.Data;
  if (GReachabilityStressData.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (GReachabilityStressData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'GReachableClusters'' @ 15034f8e0

/* WARNING: Removing unreachable block (ram,0x00015034f90d) */

void __cdecl UE::GC::Private::_dynamic_atexit_destructor_for__GReachableClusters__(void)

{
  FChunk *pFVar1;
  FChunk *pFVar2;
  
  pFVar2 = GReachableClusters.Head;
  LOCK();
  UNLOCK();
  if (GReachableClusters.Lock.bFlag == (atomic<bool>)0x0) {
    GReachableClusters.Head = (FChunk *)0x0;
    GReachableClusters.Lock.bFlag = (atomic<bool>)0x0;
    while (pFVar2 != (FChunk *)0x0) {
      pFVar1 = pFVar2->Next;
      FMemory::Free(pFVar2);
      pFVar2 = pFVar1;
    }
    return;
  }
  do {
  } while( true );
}

// `dynamic_atexit_destructor_for_'GReachableObjects'' @ 15034f960

/* WARNING: Removing unreachable block (ram,0x00015034f98d) */

void __cdecl UE::GC::Private::_dynamic_atexit_destructor_for__GReachableObjects__(void)

{
  FChunk *pFVar1;
  FChunk *pFVar2;
  
  pFVar2 = GReachableObjects.Head;
  LOCK();
  UNLOCK();
  if (GReachableObjects.Lock.bFlag == (atomic<bool>)0x0) {
    GReachableObjects.Head = (FChunk *)0x0;
    GReachableObjects.Lock.bFlag = (atomic<bool>)0x0;
    while (pFVar2 != (FChunk *)0x0) {
      pFVar1 = pFVar2->Next;
      FMemory::Free(pFVar2);
      pFVar2 = pFVar1;
    }
    return;
  }
  do {
  } while( true );
}

// `dynamic_atexit_destructor_for_'GRoots'' @ 15034f9e0

void __cdecl UE::GC::Private::_dynamic_atexit_destructor_for__GRoots__(void)

{
  GRoots.HashSize = 0;
  if (GRoots.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)GRoots.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&GRoots.Elements);
  return;
}

// `dynamic_atexit_destructor_for_'GScratchPages'' @ 15034fa20

void __cdecl UE::GC::_dynamic_atexit_destructor_for__GScratchPages__(void)

{
  undefined8 *puVar1;
  int iVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 *puVar6;
  longlong lVar7;
  FAutoConsoleVariableRef *pFVar8;
  
  lVar7 = 0x11;
  pFVar8 = &CVarAllowParallelGC;
  do {
    lVar7 = lVar7 + -1;
    iVar2 = *(int *)(pFVar8 + -0x14);
    puVar6 = (undefined8 *)&pFVar8[-0x14].field_0x8;
    if ((iVar2 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    puVar1 = (undefined8 *)((longlong)puVar6 + (longlong)iVar2 * 8);
    for (; puVar6 != puVar1; puVar6 = puVar6 + 1) {
      pvVar3 = (void *)*puVar6;
      if (((pvVar3 == (void *)0x0) || (((ulonglong)pvVar3 & 0xfff) != 0)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidPage(Page)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x562,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FMemory::Free(pvVar3);
    }
    pFVar8 = pFVar8 + -0x14;
    if (lVar7 == 0) {
      FPageAllocator::FSharedCache::~FSharedCache(&GScratchPages.SharedCache);
      return;
    }
  } while( true );
}

// `dynamic_atexit_destructor_for_'GUnlinkReachabilityStressDataCmd'' @ 15034fb20

void __cdecl _dynamic_atexit_destructor_for__GUnlinkReachabilityStressDataCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&GUnlinkReachabilityStressDataCmd);
  return;
}

// `dynamic_atexit_destructor_for_'GUnreachableObjects'' @ 15034fb40

void __cdecl _dynamic_atexit_destructor_for__GUnreachableObjects__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GUnreachableObjects.AllocatorInstance.Data;
  if (GUnreachableObjects.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (GUnreachableObjects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'GWorkstealingManager'' @ 15034fb60

void __cdecl UE::GC::_dynamic_atexit_destructor_for__GWorkstealingManager__(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = 0x10;
  puVar2 = (undefined8 *)&PIEGuidMap[9].field_0x40;
  do {
    puVar2 = puVar2 + -0x98;
    lVar1 = lVar1 + -1;
    if ((void *)*puVar2 != (void *)0x0) {
      FMemory::Free((void *)*puVar2);
    }
  } while (lVar1 != 0);
  return;
}

// `dynamic_atexit_destructor_for_'LogGarbage'' @ 15034fbb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogGarbage__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogGarbage);
  return;
}

// `dynamic_atexit_destructor_for_'MagicStaticSingleton'' @ 15034fbd0

void __cdecl
`FGCCSyncObject::Create'::__l2::_dynamic_atexit_destructor_for__MagicStaticSingleton__(void)

{
  GGCSingleton = (FGCCSyncObject *)0x0;
  FGenericPlatformProcess::ReturnSynchEventToPool(MagicStaticSingleton.Singleton.GCUnlockedEvent);
  MagicStaticSingleton.Singleton.GCUnlockedEvent = (FEvent *)0x0;
  UE::Private::SetIsGCLockedFunction((_func___cdecl_bool *)0x0);
  return;
}

// `dynamic_atexit_destructor_for_'Singleton'' @ 15034fc10

void __cdecl
`UE::GC::FContextPoolScope::Get'::__l2::_dynamic_atexit_destructor_for__Singleton__(void)

{
  DestructItems<TUniquePtr<UE::GC::FWorkerContext,TDefaultDelete<UE::GC::FWorkerContext>_>,int>
            ((TUniquePtr<UE::GC::FWorkerContext,TDefaultDelete<UE::GC::FWorkerContext>_> *)
             ::Singleton.Reusable.AllocatorInstance.Data,::Singleton.Reusable.ArrayNum);
  if (::Singleton.Reusable.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(::Singleton.Reusable.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Singleton'' @ 15034fc50

void __cdecl `FGCHistory::Get'::__l2::_dynamic_atexit_destructor_for__Singleton__(void)

{
  FGCHistory::Cleanup(&::Singleton);
  DestructItems<FGCSnapshot,int>
            ((FGCSnapshot *)::Singleton.Snapshots.AllocatorInstance.Data,
             ::Singleton.Snapshots.ArrayNum);
  if (::Singleton.Snapshots.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(::Singleton.Snapshots.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'_GCsvCategory_GC'' @ 15034fca0

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_GC__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_GC.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_GC.Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_GC.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

