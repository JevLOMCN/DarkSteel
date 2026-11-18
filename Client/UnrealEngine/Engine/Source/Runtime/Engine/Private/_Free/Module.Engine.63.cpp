// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 436

// StaticResource'' @ 141152c50

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
`dynamic_initializer_for_'TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
::StaticResource__(void)

{
  TRefCountPtr<FRHIDepthStencilState> this;
  TRefCountPtr<FRHIDepthStencilState> TVar1;
  FRHIResource *local_res8;
  
  FRenderResource::FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
              ::StaticResource);
  TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticDepthStencilState__0A__06_0A__06_0A__0A__0A__0A__06_0A__0A__0A__0PP__0PP___V__TRefCountPtr_VFRHIDepthStencilState____PEAVFRHIDepthStencilState____6B_
  ;
  TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
  ::StaticResource.StateRHI.Reference = (FRHIDepthStencilState *)0x0;
  if ((GRHIGlobals.IsRHIInitialized == false) || (GRHIGlobals.SupportsRHIThread == false)) {
    BeginInitResource((FRenderResource *)
                      &TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
                       ::StaticResource,(FRenderCommandPipe *)0x0);
  }
  else {
    TVar1 = TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>::CreateRHI();
    this = TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
           ::StaticResource.StateRHI;
    if (TVar1.Reference !=
        (FRHIDepthStencilState *)
        &TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
         ::StaticResource.StateRHI) {
      TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
      ::StaticResource.StateRHI.Reference = (FRHIDepthStencilState *)(TVar1.Reference)->_padding_;
      (TVar1.Reference)->_padding_ = 0;
      if (this.Reference != (FRHIDepthStencilState *)0x0) {
        FRHIResource::Release((FRHIResource *)this.Reference);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
      atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
             ::StaticResource__);
      return;
    }
  }
  atexit(`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
         ::StaticResource__);
  return;
}

// TemplatePostfix'' @ 141152d10

void __cdecl `dynamic_initializer_for_'UTimelineTemplate::TemplatePostfix__(void)

{
  ::FString::FString(&UTimelineTemplate::TemplatePostfix,L"_Template");
  atexit(`dynamic_atexit_destructor_for_'UTimelineTemplate::TemplatePostfix__);
  return;
}

// `dynamic_initializer_for_'AddIndirectTestTickFunctionsCmd'' @ 141152d40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__AddIndirectTestTickFunctionsCmd__(void)

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
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = AddIndirectTestTickFunctions;
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
                     (IConsoleManager::Singleton,L"tick.AddIndirectTestTickFunctions",
                      L"Add no-op ticks to test performance of ticking infrastructure.",&local_58,0)
  ;
  FAutoConsoleObject::FAutoConsoleObject
            ((FAutoConsoleObject *)&AddIndirectTestTickFunctionsCmd,pIVar5);
  AddIndirectTestTickFunctionsCmd._0_8_ = &___7FAutoConsoleCommandWithWorldAndArgs__6B_;
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
  atexit(_dynamic_atexit_destructor_for__AddIndirectTestTickFunctionsCmd__);
  return;
}

// `dynamic_initializer_for_'AddTestTickFunctionsCmd'' @ 141152ee0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__AddTestTickFunctionsCmd__(void)

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
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = AddTestTickFunctions;
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
                     (IConsoleManager::Singleton,L"tick.AddTestTickFunctions",
                      L"Add no-op ticks to test performance of ticking infrastructure.",&local_58,0)
  ;
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&AddTestTickFunctionsCmd,pIVar5);
  AddTestTickFunctionsCmd._0_8_ = &___7FAutoConsoleCommandWithWorldAndArgs__6B_;
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
  atexit(_dynamic_atexit_destructor_for__AddTestTickFunctionsCmd__);
  return;
}

// `dynamic_initializer_for_'CPrio_CleanupTaskPriority'' @ 141153080

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__CPrio_CleanupTaskPriority__(void)

{
  FAutoConsoleTaskPriority::FAutoConsoleTaskPriority
            (&CPrio_CleanupTaskPriority,L"TaskGraph.TaskPriorities.TickCleanupTaskPriority",
             L"Task and thread priority for tick cleanup.",MainQueue,MainQueue,UnusedAnchor);
  atexit(_dynamic_atexit_destructor_for__CPrio_CleanupTaskPriority__);
  return;
}

// `dynamic_initializer_for_'CPrio_DispatchTaskPriority'' @ 1411530d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__CPrio_DispatchTaskPriority__(void)

{
  FAutoConsoleTaskPriority::FAutoConsoleTaskPriority
            (&CPrio_DispatchTaskPriority,L"TaskGraph.TaskPriorities.TickDispatchTaskPriority",
             L"Task and thread priority for tick tasks dispatch.",HighThreadPriority,MainQueue,
             HighTaskPriority);
  atexit(_dynamic_atexit_destructor_for__CPrio_DispatchTaskPriority__);
  return;
}

// `dynamic_initializer_for_'CPrio_HiPriAsyncTickTaskPriority'' @ 141153120

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__CPrio_HiPriAsyncTickTaskPriority__(void)

{
  FAutoConsoleTaskPriority::FAutoConsoleTaskPriority
            (&CPrio_HiPriAsyncTickTaskPriority,
             L"TaskGraph.TaskPriorities.HiPriAsyncTickTaskPriority",
             L"Task and thread priority for async ticks that are high priority.",HighThreadPriority,
             MainQueue,HighTaskPriority);
  atexit(_dynamic_atexit_destructor_for__CPrio_HiPriAsyncTickTaskPriority__);
  return;
}

// `dynamic_initializer_for_'CPrio_NormalAsyncTickTaskPriority'' @ 141153170

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__CPrio_NormalAsyncTickTaskPriority__(void)

{
  FAutoConsoleTaskPriority::FAutoConsoleTaskPriority
            (&CPrio_NormalAsyncTickTaskPriority,
             L"TaskGraph.TaskPriorities.NormalAsyncTickTaskPriority",
             L"Task and thread priority for async ticks that are not high priority.",MainQueue,
             MainQueue,UnusedAnchor);
  atexit(_dynamic_atexit_destructor_for__CPrio_NormalAsyncTickTaskPriority__);
  return;
}

// `dynamic_initializer_for_'CVarAllowAsyncComponentTicks'' @ 1411531c0

void __cdecl _dynamic_initializer_for__CVarAllowAsyncComponentTicks__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarAllowAsyncComponentTicks,L"tick.AllowAsyncComponentTicks",local_res8,
             L"If true, components (and other tick functions) with bRunOnAnyThread set will run in parallel with other ticks."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAllowAsyncComponentTicks__);
  return;
}

// `dynamic_initializer_for_'CVarAllowAsyncTickCleanup'' @ 141153210

void __cdecl _dynamic_initializer_for__CVarAllowAsyncTickCleanup__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarAllowAsyncTickCleanup,L"tick.AllowAsyncTickCleanup",local_res8,
             L"If true, ticks are cleaned up in a task thread.",0);
  atexit(_dynamic_atexit_destructor_for__CVarAllowAsyncTickCleanup__);
  return;
}

// `dynamic_initializer_for_'CVarAllowAsyncTickDispatch'' @ 141153260

void __cdecl _dynamic_initializer_for__CVarAllowAsyncTickDispatch__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarAllowAsyncTickDispatch,L"tick.AllowAsyncTickDispatch",local_res8,
             L"If true, ticks are dispatched in a task thread.",0);
  atexit(_dynamic_atexit_destructor_for__CVarAllowAsyncTickDispatch__);
  return;
}

// `dynamic_initializer_for_'CVarAllowBatchedTicks'' @ 1411532b0

void __cdecl _dynamic_initializer_for__CVarAllowBatchedTicks__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarAllowBatchedTicks,L"tick.AllowBatchedTicks",local_res8,
             L"If true, tick functions with bAllowTickBatching will be automatically combined into a single tick task."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAllowBatchedTicks__);
  return;
}

// `dynamic_initializer_for_'CVarAllowBatchedTicksUnordered'' @ 141153300

void __cdecl _dynamic_initializer_for__CVarAllowBatchedTicksUnordered__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarAllowBatchedTicksUnordered,L"tick.AllowBatchedTicksUnordered",local_res8,
             L"If true, tick functions within a batch can be run out of order.",0);
  atexit(_dynamic_atexit_destructor_for__CVarAllowBatchedTicksUnordered__);
  return;
}

// `dynamic_initializer_for_'CVarAllowConcurrentQueue'' @ 141153350

void __cdecl _dynamic_initializer_for__CVarAllowConcurrentQueue__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarAllowConcurrentQueue,L"tick.AllowConcurrentTickQueue",local_res8,
             L"If true, queue ticks concurrently using multiple threads at once. This may be faster on platforms with many cores but can change the order of ticking."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAllowConcurrentQueue__);
  return;
}

// `dynamic_initializer_for_'CVarAllowOptimizedPrerequisites'' @ 1411533a0

void __cdecl _dynamic_initializer_for__CVarAllowOptimizedPrerequisites__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarAllowOptimizedPrerequisites,L"tick.AllowOptimizedPrerequisites",local_res8,
             L"If true, the code will ignore prerequisites that are not relevant due to guaranteed order of tick groups"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAllowOptimizedPrerequisites__);
  return;
}

// `dynamic_initializer_for_'CVarDumpAllTimerLogsThreshold'' @ 1411533f0

void __cdecl _dynamic_initializer_for__CVarDumpAllTimerLogsThreshold__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDumpAllTimerLogsThreshold,L"TimerManager.DumpAllTimerLogsThreshold",
             &DumpAllTimerLogsThreshold,
             L"Threshold (in count of active timers) at which to dump info about all active timers to logs. -1 means this is disabled. NOTE: This will only be dumped once per process launch."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDumpAllTimerLogsThreshold__);
  return;
}

// `dynamic_initializer_for_'CVarDumpTimerLogResolveVirtualFunctions'' @ 141153440

void __cdecl _dynamic_initializer_for__CVarDumpTimerLogResolveVirtualFunctions__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDumpTimerLogResolveVirtualFunctions,
             L"TimerManager.DumpTimerLogResolveVirtualFunctions",
             &DumpTimerLogResolveVirtualFunctions,
             L"When logging timer info virtual functions will be resolved, if possible.",0);
  atexit(_dynamic_atexit_destructor_for__CVarDumpTimerLogResolveVirtualFunctions__);
  return;
}

// `dynamic_initializer_for_'CVarDumpTimerLogSymbolNames'' @ 141153490

void __cdecl _dynamic_initializer_for__CVarDumpTimerLogSymbolNames__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDumpTimerLogSymbolNames,L"TimerManager.DumpTimerLogSymbolNames",
             &DumpTimerLogSymbolNames,
             L"When logging timer info, symbol names will be included if set to 1.",0);
  atexit(_dynamic_atexit_destructor_for__CVarDumpTimerLogSymbolNames__);
  return;
}

// `dynamic_initializer_for_'CVarDumpTimerLogsThreshold'' @ 1411534e0

void __cdecl _dynamic_initializer_for__CVarDumpTimerLogsThreshold__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDumpTimerLogsThreshold,L"TimerManager.DumpTimerLogsThreshold",
             &DumpTimerLogsThreshold,
             L"Threshold (in milliseconds) after which we log timer info to try and help track down spikes in the timer code. Disabled when set to 0"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDumpTimerLogsThreshold__);
  return;
}

// `dynamic_initializer_for_'CVarGBuildTimerSourceList'' @ 141153530

void __cdecl _dynamic_initializer_for__CVarGBuildTimerSourceList__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGBuildTimerSourceList,L"TimerManager.BuildTimerSourceList",&GBuildTimerSourceList,
             L"When non-zero, tracks which timers expire each frame, dumping them during shutdown or when the flag is changed back to 0.\n  0: Off\n  1: On - Group timers by class (useful to focus on entire systems of things, especially bad spikey frames where we care about aggregates)\n  2: On - Do not group timers by class (useful if individual instances are problematic)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarGBuildTimerSourceList__);
  return;
}

// `dynamic_initializer_for_'CVarGlobalTextureLODBias'' @ 141153580

void __cdecl _dynamic_initializer_for__CVarGlobalTextureLODBias__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGlobalTextureLODBias,L"r.GlobalTextureLODBias",&GlobalTextureLODBias,
             L"Extra LOD bias to apply to all textures.  Can be negative. (default=0)",0x40);
  atexit(_dynamic_atexit_destructor_for__CVarGlobalTextureLODBias__);
  return;
}

// `dynamic_initializer_for_'CVarIdleTaskWorkMS'' @ 1411535d0

void __cdecl _dynamic_initializer_for__CVarIdleTaskWorkMS__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarIdleTaskWorkMS,L"tick.IdleTaskWorkMS",&GIdleTaskWorkMS,
             L"If > 0, when the game thread is idle waiting for other threads to complete tasks it will try to spend this much time in milliseconds processing other tasks.\nIf this is 0, it will keep processing game thread ticks until blocked and then wait.\nIf < 0 this will use the UE 5.5 behavior to skip idle task processing and stall the game thread entirely."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarIdleTaskWorkMS__);
  return;
}

// `dynamic_initializer_for_'CVarLightweightTimeguardThresholdMS'' @ 141153620

void __cdecl _dynamic_initializer_for__CVarLightweightTimeguardThresholdMS__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarLightweightTimeguardThresholdMS,L"tick.LightweightTimeguardThresholdMS",
             &GTimeguardThresholdMS,L"Threshold in milliseconds for the tick timeguard",0);
  atexit(_dynamic_atexit_destructor_for__CVarLightweightTimeguardThresholdMS__);
  return;
}

// `dynamic_initializer_for_'CVarLogTicks'' @ 141153670

void __cdecl _dynamic_initializer_for__CVarLogTicks__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarLogTicks,L"tick.LogTicks",local_res8,L"Spew ticks for debugging.",0);
  atexit(_dynamic_atexit_destructor_for__CVarLogTicks__);
  return;
}

// `dynamic_initializer_for_'CVarLogTicksShowPrerequistes'' @ 1411536c0

void __cdecl _dynamic_initializer_for__CVarLogTicksShowPrerequistes__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarLogTicksShowPrerequistes,L"tick.ShowPrerequistes",local_res8,
             L"When logging ticks, show the prerequistes; debugging.",0);
  atexit(_dynamic_atexit_destructor_for__CVarLogTicksShowPrerequistes__);
  return;
}

// `dynamic_initializer_for_'CVarMaxExpiredTimersToLog'' @ 141153710

void __cdecl _dynamic_initializer_for__CVarMaxExpiredTimersToLog__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMaxExpiredTimersToLog,L"TimerManager.MaxExpiredTimersToLog",&MaxExpiredTimersToLog
             ,L"Maximum number of TimerData exceeding the threshold to log in a single frame.",0);
  atexit(_dynamic_atexit_destructor_for__CVarMaxExpiredTimersToLog__);
  return;
}

// `dynamic_initializer_for_'CVarRecordAllWorldTypes'' @ 141153760

void __cdecl _dynamic_initializer_for__CVarRecordAllWorldTypes__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarRecordAllWorldTypes,L"Insights.RecordAllWorldTypes",local_res8,
             L"Gameplay Insights recording by default only records Game and PIE worlds.Toggle this value to 1 to record other world types."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRecordAllWorldTypes__);
  return;
}

// `dynamic_initializer_for_'CVarStallStartFrame'' @ 1411537b0

void __cdecl _dynamic_initializer_for__CVarStallStartFrame__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 0.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarStallStartFrame,L"CriticalPathStall.TickStartFrame",local_res8,
             L"Sleep for the given time in start frame. Time is given in ms. This is a debug option used for critical path analysis and forcing a change in the critical path."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarStallStartFrame__);
  return;
}

// `dynamic_initializer_for_'CVarTimerManagerGuaranteeEngineTickDelay'' @ 141153800

void __cdecl _dynamic_initializer_for__CVarTimerManagerGuaranteeEngineTickDelay__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarTimerManagerGuaranteeEngineTickDelay,L"TimerManager.GuaranteeEngineTickDelay",
             &GuaranteeEngineTickDelay,
             L"If true, timers delayed until next tick will guarantee the engine tick has advanced. If false, these could run during the same engine tick (default behavior prior to 5.5)."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarTimerManagerGuaranteeEngineTickDelay__);
  return;
}

// `dynamic_initializer_for_'CVarUITextureLODBias'' @ 141153850

void __cdecl _dynamic_initializer_for__CVarUITextureLODBias__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUITextureLODBias,L"r.UITextureLODBias",&GUITextureLODBias,
             L"Extra LOD bias to apply to UI textures. (default=0)",0x40);
  atexit(_dynamic_atexit_destructor_for__CVarUITextureLODBias__);
  return;
}

// `dynamic_initializer_for_'FTimerManagerTestAutomationTestInstance'' @ 1411538a0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FTimerManagerTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTimerManagerTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FTimerManagerTestAutomationTestInstance,&local_18,false);
  FTimerManagerTestAutomationTestInstance._0_8_ = &___7FTimerManagerTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTimerManagerTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FlushFilterStateCommand'' @ 141153900

void __cdecl _dynamic_initializer_for__FlushFilterStateCommand__(void)

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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_25>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&FlushFilterStateCommand,L"TraceFilter.FlushState",
             L"Flushes the current trace filtering state to the output log.",
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
  atexit(_dynamic_atexit_destructor_for__FlushFilterStateCommand__);
  return;
}

// `dynamic_initializer_for_'GObjectFilterAnnotations'' @ 141153a30

void __cdecl _dynamic_initializer_for__GObjectFilterAnnotations__(void)

{
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&GObjectFilterAnnotations.AnnotationMapCritical,4000);
  GObjectFilterAnnotations.AnnotationMapScopeLock.bIsSet = false;
  GObjectFilterAnnotations.AnnotationCacheKey = (UObjectBase *)0x0;
  GObjectFilterAnnotations.AnnotationCacheValue.bIsTraceable = true;
  atexit(_dynamic_atexit_destructor_for__GObjectFilterAnnotations__);
  return;
}

// `dynamic_initializer_for_'GPUStat_CanvasDrawTiles'' @ 141153a80

void __cdecl _dynamic_initializer_for__GPUStat_CanvasDrawTiles__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPUStat_CanvasDrawTiles__);
  return;
}

// `dynamic_initializer_for_'GPUStat_CanvasDrawTriangles'' @ 141153aa0

void __cdecl _dynamic_initializer_for__GPUStat_CanvasDrawTriangles__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPUStat_CanvasDrawTriangles__);
  return;
}

// `dynamic_initializer_for_'IndirectTestTickFunctions'' @ 141153ac0

void __cdecl _dynamic_initializer_for__IndirectTestTickFunctions__(void)

{
  atexit(_dynamic_atexit_destructor_for__IndirectTestTickFunctions__);
  return;
}

// `dynamic_initializer_for_'ListTimersConsoleCommand'' @ 141153ae0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__ListTimersConsoleCommand__(void)

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
    puVar3[3] = OnListTimers;
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
                     (IConsoleManager::Singleton,L"ListTimers",L"",&local_58,0);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)&ListTimersConsoleCommand,pIVar5);
  ListTimersConsoleCommand._0_8_ = &___7FAutoConsoleCommandWithWorld__6B_;
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
  atexit(_dynamic_atexit_destructor_for__ListTimersConsoleCommand__);
  return;
}

// `dynamic_initializer_for_'LogTextureEncodingSettings'' @ 141153c80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogTextureEncodingSettings__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogTextureEncodingSettings,L"LogTextureEncodingSettings",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogTextureEncodingSettings__);
  return;
}

// `dynamic_initializer_for_'LogTick'' @ 141153cc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogTick__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogTick,L"LogTick",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogTick__);
  return;
}

// `dynamic_initializer_for_'LogTimeline'' @ 141153d00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogTimeline__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogTimeline,L"LogTimeline",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogTimeline__);
  return;
}

// `dynamic_initializer_for_'RemoveTestTickFunctionsCmd'' @ 141153d40

void __cdecl _dynamic_initializer_for__RemoveTestTickFunctionsCmd__(void)

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
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = RemoveTestTickFunctions;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&RemoveTestTickFunctionsCmd,L"tick.RemoveTestTickFunctions",
             L"Remove no-op ticks to test performance of ticking infrastructure.",
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
  atexit(_dynamic_atexit_destructor_for__RemoveTestTickFunctionsCmd__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_CleanupTasksWait'' @ 141153e80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_CleanupTasksWait__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_CleanupTasksWait == (FThreadSafeStaticStat<FStat_STAT_CleanupTasksWait>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_CleanupTasksWait");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CleanupTasksWait,*pFVar1,
               L"CleanupTasksWait","STATGROUP_TickGroups","STATCAT_Advanced",L"TickGroups",true,true
               ,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ClearAllTimers'' @ 141153f10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ClearAllTimers__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ClearAllTimers == (FThreadSafeStaticStat<FStat_STAT_ClearAllTimers>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ClearAllTimers");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ClearAllTimers,*pFVar1,L"ClearAllTimers",
               "STATGROUP_Engine","STATCAT_Advanced",L"Engine",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ClearTimer'' @ 141153fa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ClearTimer__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ClearTimer == (FThreadSafeStaticStat<FStat_STAT_ClearTimer>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ClearTimer");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ClearTimer,*pFVar1,L"ClearTimer",
               "STATGROUP_Engine","STATCAT_Advanced",L"Engine",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_DoDeferredRemoves'' @ 141154030

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_DoDeferredRemoves__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_DoDeferredRemoves == (FThreadSafeStaticStat<FStat_STAT_DoDeferredRemoves>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_DoDeferredRemoves");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DoDeferredRemoves,*pFVar1,
               L"Do Deferred Removes","STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,ST_int64
               ,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FinalizeParallelQueue'' @ 1411540c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FinalizeParallelQueue__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FinalizeParallelQueue ==
      (FThreadSafeStaticStat<FStat_STAT_FinalizeParallelQueue>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FinalizeParallelQueue");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FinalizeParallelQueue,*pFVar1,
               L"Finalize Parallel Queue","STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_NumHeapEntries'' @ 141154150

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_NumHeapEntries__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_NumHeapEntries == (FThreadSafeStaticStat<FStat_STAT_NumHeapEntries>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_NumHeapEntries");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NumHeapEntries,*pFVar1,
               L"TimerManager Heap Size","STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_PostTickTask'' @ 1411541e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_PostTickTask__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_PostTickTask == (FThreadSafeStaticStat<FStat_STAT_PostTickTask>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_PostTickTask");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PostTickTask,*pFVar1,
               L"Post Queue Tick Task","STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_QueueTickTask'' @ 141154270

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_QueueTickTask__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_QueueTickTask == (FThreadSafeStaticStat<FStat_STAT_QueueTickTask>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_QueueTickTask");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_QueueTickTask,*pFVar1,L"Queue Tick Task",
               "STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,ST_int64,true,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_QueueTicks'' @ 141154300

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_QueueTicks__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_QueueTicks == (FThreadSafeStaticStat<FStat_STAT_QueueTicks>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_QueueTicks");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_QueueTicks,*pFVar1,L"Queue Ticks",
               "STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,ST_int64,true,false,MCR_Invalid
              );
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_QueueTicksWait'' @ 141154390

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_QueueTicksWait__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_QueueTicksWait == (FThreadSafeStaticStat<FStat_STAT_QueueTicksWait>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_QueueTicksWait");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_QueueTicksWait,*pFVar1,L"Queue Ticks Wait"
               ,"STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ReleaseTickGroup'' @ 141154420

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ReleaseTickGroup__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ReleaseTickGroup == (FThreadSafeStaticStat<FStat_STAT_ReleaseTickGroup>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ReleaseTickGroup");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ReleaseTickGroup,*pFVar1,
               L"ReleaseTickGroup","STATGROUP_TickGroups","STATCAT_Advanced",L"TickGroups",true,true
               ,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ReleaseTickGroup_Block'' @ 1411544b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ReleaseTickGroup_Block__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ReleaseTickGroup_Block ==
      (FThreadSafeStaticStat<FStat_STAT_ReleaseTickGroup_Block>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ReleaseTickGroup_Block");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ReleaseTickGroup_Block,*pFVar1,
               L"ReleaseTickGroup Block","STATGROUP_TickGroups","STATCAT_Advanced",L"TickGroups",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ScheduleCooldowns'' @ 141154540

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ScheduleCooldowns__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ScheduleCooldowns == (FThreadSafeStaticStat<FStat_STAT_ScheduleCooldowns>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ScheduleCooldowns");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ScheduleCooldowns,*pFVar1,
               L"Schedule cooldowns","STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,ST_int64,
               true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SetTimer'' @ 1411545d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SetTimer__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SetTimer == (FThreadSafeStaticStat<FStat_STAT_SetTimer>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SetTimer");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SetTimer,*pFVar1,L"SetTimer",
               "STATGROUP_Engine","STATCAT_Advanced",L"Engine",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SetTimerForNextTick'' @ 141154660

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SetTimerForNextTick__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SetTimerForNextTick == (FThreadSafeStaticStat<FStat_STAT_SetTimerForNextTick>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_SetTimerForNextTick");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SetTimerForNextTick,*pFVar1,
               L"SetTimeForNextTick","STATGROUP_Engine","STATCAT_Advanced",L"Engine",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TG_NewlySpawned'' @ 1411546f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TG_NewlySpawned__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TG_NewlySpawned == (FThreadSafeStaticStat<FStat_STAT_TG_NewlySpawned>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TG_NewlySpawned");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TG_NewlySpawned,*pFVar1,L"TG_NewlySpawned"
               ,"STATGROUP_TickGroups","STATCAT_Advanced",L"TickGroups",true,true,ST_int64,true,
               false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TickableGameObjectsTime'' @ 141154780

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TickableGameObjectsTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TickableGameObjectsTime ==
      (FThreadSafeStaticStat<FStat_STAT_TickableGameObjectsTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TickableGameObjectsTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TickableGameObjectsTime,*pFVar1,
               L"TickableGameObjects Time","STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TicksQueued'' @ 141154810

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TicksQueued__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TicksQueued == (FThreadSafeStaticStat<FStat_STAT_TicksQueued>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TicksQueued");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TicksQueued,*pFVar1,L"Ticks Queued",
               "STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,ST_int64,false,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TimelineCompTick'' @ 1411548a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TimelineCompTick__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TimelineCompTick == (FThreadSafeStaticStat<FStat_STAT_TimelineCompTick>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TimelineCompTick");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TimelineCompTick,*pFVar1,
               L"TimelineComp Tick","STATGROUP_Default","STATCAT_Advanced",L"Default Stat Group",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'TaggedDataKey_ScriptData'' @ 141154930

void __cdecl UE::Transaction::_dynamic_initializer_for__TaggedDataKey_ScriptData__(void)

{
  ::FName::FName(&TaggedDataKey_ScriptData,".ScriptData");
  return;
}

// `dynamic_initializer_for_'TaggedDataKey_UnknownData'' @ 141154950

void __cdecl UE::Transaction::_dynamic_initializer_for__TaggedDataKey_UnknownData__(void)

{
  ::FName::FName(&TaggedDataKey_UnknownData,".UnknownData");
  return;
}

// `dynamic_initializer_for_'TestTickFunctions'' @ 141154970

void __cdecl _dynamic_initializer_for__TestTickFunctions__(void)

{
  atexit(_dynamic_atexit_destructor_for__TestTickFunctions__);
  return;
}

// `dynamic_initializer_for_'TraceFiltering'' @ 141154990

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__TraceFiltering__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&TraceFiltering,L"TraceFiltering",Display,Display);
  atexit(_dynamic_atexit_destructor_for__TraceFiltering__);
  return;
}

// `dynamic_initializer_for_'TriggerCollisionProfileName'' @ 1411549d0

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__TriggerCollisionProfileName__(void)

{
  ::FName::FName(&TriggerCollisionProfileName,L"Trigger");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h__Script_Engine_3997173907'' @ 1411549f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h__Script_Engine_3997173907__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLightProfile_h__Script_Engine_2441904350'' @ 141154a40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLightProfile_h__Script_Engine_2441904350__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLightProfile_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget2DArray_h__Script_Engine_829758617'' @ 141154a80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget2DArray_h__Script_Engine_829758617__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget2DArray_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget2D_h__Script_Engine_3420019882'' @ 141154ac0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget2D_h__Script_Engine_3420019882__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget2D_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget2D_h__Script_Engine_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTargetCube_h__Script_Engine_97665099'' @ 141154b10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTargetCube_h__Script_Engine_97665099__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTargetCube_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTargetVolume_h__Script_Engine_2065869805'' @ 141154b50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTargetVolume_h__Script_Engine_2065869805__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTargetVolume_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h__Script_Engine_2777750254'' @ 141154b90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h__Script_Engine_2777750254__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h__Script_Engine_2529186487'' @ 141154bd0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h__Script_Engine_2529186487__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h__Script_Engine_Statics
             ::ScriptStructInfo,7,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h__Script_Engine_3089196023'' @ 141154c20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h__Script_Engine_3089196023__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerVolume_h__Script_Engine_2489160794'' @ 141154c60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerVolume_h__Script_Engine_2489160794__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerVolume_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_TextureEncodingSettings_h__Script_Engine_671003899'' @ 141154ca0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_TextureEncodingSettings_h__Script_Engine_671003899__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_TextureEncodingSettings_h__Script_Engine_Statics
             ::EnumInfo,3);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_UniversalObjectLocators_ActorLocatorFragment_h__Script_Engine_2901760822'' @ 141154cf0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_UniversalObjectLocators_ActorLocatorFragment_h__Script_Engine_2901760822__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_UniversalObjectLocators_ActorLocatorFragment_h__Script_Engine_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_UniversalObjectLocators_AnimInstanceLocatorFragment_h__Script_Engine_3961396982'' @ 141154d30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_UniversalObjectLocators_AnimInstanceLocatorFragment_h__Script_Engine_3961396982__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_UniversalObjectLocators_AnimInstanceLocatorFragment_h__Script_Engine_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_UniversalObjectLocators_AnimInstanceLocatorFragment_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_UniversalObjectLocators_AssetLocatorFragment_h__Script_Engine_1211050527'' @ 141154d80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_UniversalObjectLocators_AssetLocatorFragment_h__Script_Engine_1211050527__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_UniversalObjectLocators_AssetLocatorFragment_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_UniversalObjectLocators_UniversalObjectLocatorScriptingExtensions_h__Script_Engine_534247157'' @ 141154dc0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_UniversalObjectLocators_UniversalObjectLocatorScriptingExtensions_h__Script_Engine_534247157__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_UniversalObjectLocators_UniversalObjectLocatorScriptingExtensions_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// Z_Construct_UClass_UTextureLODSettings @ 1488a0c40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTextureLODSettings(void)

{
  if (Z_Registration_Info_UClass_UTextureLODSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTextureLODSettings.OuterSingleton,
               &Z_Construct_UClass_UTextureLODSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTextureLODSettings.OuterSingleton;
}

// Z_Construct_UScriptStruct_FTextureLODGroup @ 1488a0c80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTextureLODGroup(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTextureLODGroup.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTextureLODGroup.InnerSingleton,
               &Z_Construct_UScriptStruct_FTextureLODGroup_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTextureLODGroup.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTextureLODGroup.InnerSingleton;
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

// NewProp_HighPriorityLoad_SetBit @ 1488a0d30

void __cdecl
Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_HighPriorityLoad_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x48) = *(byte *)((longlong)param_1 + 0x48) | 1;
  return;
}

// NewProp_DuplicateNonOptionalMips_SetBit @ 1488a0d40

void __cdecl
Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_DuplicateNonOptionalMips_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x48) = *(byte *)((longlong)param_1 + 0x48) | 2;
  return;
}

// NewProp_CookPlatformTilingDisabled_SetBit @ 1488a0d50

void __cdecl
Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_CookPlatformTilingDisabled_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x48) = *(byte *)((longlong)param_1 + 0x48) | 4;
  return;
}

// NewStructOps @ 1488a0d90

void * __cdecl Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTextureLODGroup,&UE::CoreUObject::Private::Construct<FTextureLODGroup>,&UE::CoreUObject::Private::ConstructForTests<FTextureLODGroup>,&UE::CoreUObject::Private::Destruct<FTextureLODGroup>,&UE::CoreUObject::Private::Copy<FTextureLODGroup>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UEnum_Engine_EAnimInstanceLocatorFragmentType @ 1488a0fe0

UEnum * __cdecl Z_Construct_UEnum_Engine_EAnimInstanceLocatorFragmentType(void)

{
  if (Z_Registration_Info_UEnum_EAnimInstanceLocatorFragmentType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAnimInstanceLocatorFragmentType.InnerSingleton,
               &Z_Construct_UEnum_Engine_EAnimInstanceLocatorFragmentType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAnimInstanceLocatorFragmentType.InnerSingleton;
}

// EAnimInstanceLocatorFragmentType_StaticEnum @ 1488a1020

UEnum * __cdecl EAnimInstanceLocatorFragmentType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAnimInstanceLocatorFragmentType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EAnimInstanceLocatorFragmentType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EAnimInstanceLocatorFragmentType,(UObject *)pUVar1,
                       L"EAnimInstanceLocatorFragmentType");
  }
  return Z_Registration_Info_UEnum_EAnimInstanceLocatorFragmentType.OuterSingleton;
}

// NewStructOps @ 1488a1060

void * __cdecl Z_Construct_UScriptStruct_FAnimInstanceLocatorFragment_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimInstanceLocatorFragment,&UE::CoreUObject::Private::Construct<FAnimInstanceLocatorFragment>,&UE::CoreUObject::Private::ConstructForTests<FAnimInstanceLocatorFragment>,&UE::CoreUObject::Private::Destruct<FAnimInstanceLocatorFragment>,&UE::CoreUObject::Private::Copy<FAnimInstanceLocatorFragment>,&UE::CoreUObject::Private::Identical<FAnimInstanceLocatorFragment>,&UE::CoreUObject::Private::GetStructTypeHash<FAnimInstanceLocatorFragment>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UTextureRenderTarget2DArray @ 1488a10a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTextureRenderTarget2DArray(void)

{
  if (Z_Registration_Info_UClass_UTextureRenderTarget2DArray.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTextureRenderTarget2DArray.OuterSingleton,
               &Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTextureRenderTarget2DArray.OuterSingleton;
}

// NewProp_bHDR_SetBit @ 1488a10e0

void __cdecl
Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_bHDR_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x175) = *(byte *)((longlong)param_1 + 0x175) | 1;
  return;
}

// NewProp_bSupportsUAV_SetBit @ 1488a10f0

void __cdecl
Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_bSupportsUAV_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x175) = *(byte *)((longlong)param_1 + 0x175) | 2;
  return;
}

// NewProp_bForceLinearGamma_SetBit @ 1488a1100

void __cdecl
Z_Construct_UClass_UTextureRenderTarget2DArray_Statics::NewProp_bForceLinearGamma_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x175) = *(byte *)((longlong)param_1 + 0x175) | 4;
  return;
}

// NewStructOps @ 1488a1260

void * __cdecl Z_Construct_UScriptStruct_FAssetLocatorFragment_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAssetLocatorFragment,&UE::CoreUObject::Private::Construct<FAssetLocatorFragment>,&UE::CoreUObject::Private::ConstructForTests<FAssetLocatorFragment>,&UE::CoreUObject::Private::Destruct<FAssetLocatorFragment>,&UE::CoreUObject::Private::Copy<FAssetLocatorFragment>,&UE::CoreUObject::Private::Identical<FAssetLocatorFragment>,&UE::CoreUObject::Private::GetStructTypeHash<FAssetLocatorFragment>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// ETextureEncodeEffort_StaticEnum @ 1488a1360

UEnum * __cdecl ETextureEncodeEffort_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETextureEncodeEffort.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ETextureEncodeEffort.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ETextureEncodeEffort,(UObject *)pUVar1,
                       L"ETextureEncodeEffort");
  }
  return Z_Registration_Info_UEnum_ETextureEncodeEffort.OuterSingleton;
}

// ETextureUniversalTiling_StaticEnum @ 1488a1490

UEnum * __cdecl ETextureUniversalTiling_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETextureUniversalTiling.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ETextureUniversalTiling.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ETextureUniversalTiling,(UObject *)pUVar1,
                       L"ETextureUniversalTiling");
  }
  return Z_Registration_Info_UEnum_ETextureUniversalTiling.OuterSingleton;
}

// ETextureEncodeSpeedOverride_StaticEnum @ 1488a1530

UEnum * __cdecl ETextureEncodeSpeedOverride_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETextureEncodeSpeedOverride.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ETextureEncodeSpeedOverride.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ETextureEncodeSpeedOverride,(UObject *)pUVar1,
                       L"ETextureEncodeSpeedOverride");
  }
  return Z_Registration_Info_UEnum_ETextureEncodeSpeedOverride.OuterSingleton;
}

// Z_Construct_UClass_UUniversalObjectLocatorScriptingExtensions @ 1488a15c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UUniversalObjectLocatorScriptingExtensions(void)

{
  if (Z_Registration_Info_UClass_UUniversalObjectLocatorScriptingExtensions.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UUniversalObjectLocatorScriptingExtensions.OuterSingleton
               ,&Z_Construct_UClass_UUniversalObjectLocatorScriptingExtensions_Statics::ClassParams)
    ;
  }
  return Z_Registration_Info_UClass_UUniversalObjectLocatorScriptingExtensions.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 1488a1600

void __cdecl
Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_IsEmpty_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UClass_UTextureRenderTargetCube @ 1488a1610

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTextureRenderTargetCube(void)

{
  if (Z_Registration_Info_UClass_UTextureRenderTargetCube.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTextureRenderTargetCube.OuterSingleton,
               &Z_Construct_UClass_UTextureRenderTargetCube_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTextureRenderTargetCube.OuterSingleton;
}

// NewProp_bHDR_SetBit @ 1488a1660

void __cdecl Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_bHDR_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x16d) = *(byte *)((longlong)param_1 + 0x16d) | 1;
  return;
}

// Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_IsEmpty @ 1488a1670

UFunction * __cdecl Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_IsEmpty(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_IsEmpty_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bSupportsUAV_SetBit @ 1488a16b0

void __cdecl
Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_bSupportsUAV_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x16d) = *(byte *)((longlong)param_1 + 0x16d) | 2;
  return;
}

// NewProp_bForceLinearGamma_SetBit @ 1488a16c0

void __cdecl
Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_bForceLinearGamma_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x16d) = *(byte *)((longlong)param_1 + 0x16d) | 4;
  return;
}

// NewProp_bAutoGenerateMips_SetBit @ 1488a16d0

void __cdecl
Z_Construct_UClass_UTextureRenderTargetCube_Statics::NewProp_bAutoGenerateMips_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x16d) = *(byte *)((longlong)param_1 + 0x16d) | 8;
  return;
}

// Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_MakeUniversalObjectLocator @ 1488a16e0

UFunction * __cdecl
Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_MakeUniversalObjectLocator(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_MakeUniversalObjectLocator_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncFind @ 1488a1730

UFunction * __cdecl Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncFind(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncFind_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncLoad @ 1488a1770

UFunction * __cdecl Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncLoad(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncLoad_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncUnload @ 1488a17f0

UFunction * __cdecl
Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncUnload(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_SyncUnload_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 1488a1e90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
FTestTickFunction::_scalar_deleting_destructor_(FTestTickFunction *this,uint param_1)

{
  FTickFunction::~FTickFunction((FTickFunction *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_ToString @ 1488a1ed0

UFunction * __cdecl Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_ToString(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_ToString_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_UniversalObjectLocatorFromString @ 1488a1f10

UFunction * __cdecl
Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_UniversalObjectLocatorFromString
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UUniversalObjectLocatorScriptingExtensions_UniversalObjectLocatorFromString_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 1488a21d0

void * __thiscall FTTTrackBase::_scalar_deleting_destructor_(FTTTrackBase *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488a2370

void * __thiscall FTTEventTrack::_scalar_deleting_destructor_(FTTEventTrack *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488a2530

void * __thiscall
FTTPropertyTrack::_scalar_deleting_destructor_(FTTPropertyTrack *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488a25a0

void * __thiscall FTTFloatTrack::_scalar_deleting_destructor_(FTTFloatTrack *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488a2610

void * __thiscall FTTVectorTrack::_scalar_deleting_destructor_(FTTVectorTrack *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488a2680

void * __thiscall
FTTLinearColorTrack::_scalar_deleting_destructor_(FTTLinearColorTrack *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// Z_Construct_UClass_UTextureRenderTargetVolume @ 1488a27b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTextureRenderTargetVolume(void)

{
  if (Z_Registration_Info_UClass_UTextureRenderTargetVolume.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTextureRenderTargetVolume.OuterSingleton,
               &Z_Construct_UClass_UTextureRenderTargetVolume_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTextureRenderTargetVolume.OuterSingleton;
}

// NewProp_bHDR_SetBit @ 1488a2880

void __cdecl
Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_bHDR_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x175) = *(byte *)((longlong)param_1 + 0x175) | 1;
  return;
}

// NewProp_bSupportsUAV_SetBit @ 1488a2890

void __cdecl
Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_bSupportsUAV_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x175) = *(byte *)((longlong)param_1 + 0x175) | 2;
  return;
}

// NewProp_bForceLinearGamma_SetBit @ 1488a28a0

void __cdecl
Z_Construct_UClass_UTextureRenderTargetVolume_Statics::NewProp_bForceLinearGamma_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0x175) = *(byte *)((longlong)param_1 + 0x175) | 4;
  return;
}

// Z_Construct_UClass_UTextureLightProfile @ 1488a28b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTextureLightProfile(void)

{
  if (Z_Registration_Info_UClass_UTextureLightProfile.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTextureLightProfile.OuterSingleton,
               &Z_Construct_UClass_UTextureLightProfile_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTextureLightProfile.OuterSingleton;
}

// Z_Construct_UClass_UTimelineTemplate @ 1488a29b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTimelineTemplate(void)

{
  if (Z_Registration_Info_UClass_UTimelineTemplate.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTimelineTemplate.OuterSingleton,
               &Z_Construct_UClass_UTimelineTemplate_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTimelineTemplate.OuterSingleton;
}

// Z_Construct_UScriptStruct_FTTEventTrack @ 1488a29f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTTEventTrack(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTTEventTrack.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTTEventTrack.InnerSingleton,
               &Z_Construct_UScriptStruct_FTTEventTrack_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTTEventTrack.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTTEventTrack.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTTFloatTrack @ 1488a2a70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTTFloatTrack(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTTFloatTrack.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTTFloatTrack.InnerSingleton,
               &Z_Construct_UScriptStruct_FTTFloatTrack_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTTFloatTrack.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTTFloatTrack.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTTLinearColorTrack @ 1488a2af0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTTLinearColorTrack(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTTLinearColorTrack.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTTLinearColorTrack.InnerSingleton,
               &Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTTLinearColorTrack.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FTTLinearColorTrack.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTTPropertyTrack @ 1488a2b70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTTPropertyTrack(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTTPropertyTrack.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTTPropertyTrack.InnerSingleton,
               &Z_Construct_UScriptStruct_FTTPropertyTrack_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTTPropertyTrack.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTTPropertyTrack.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTTTrackBase @ 1488a2bf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTTTrackBase(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTTTrackBase.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTTTrackBase.InnerSingleton,
               &Z_Construct_UScriptStruct_FTTTrackBase_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTTTrackBase.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTTTrackBase.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTTVectorTrack @ 1488a2c70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTTVectorTrack(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTTVectorTrack.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTTVectorTrack.InnerSingleton,
               &Z_Construct_UScriptStruct_FTTVectorTrack_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTTVectorTrack.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTTVectorTrack.InnerSingleton;
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

// NewProp_bIsExternalCurve_SetBit @ 1488a2cf0

void __cdecl
Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_bIsExternalCurve_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewStructOps @ 1488a2d00

void * __cdecl Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTTTrackBase,&UE::CoreUObject::Private::Construct<FTTTrackBase>,&UE::CoreUObject::Private::ConstructForTests<FTTTrackBase>,&UE::CoreUObject::Private::Destruct<FTTTrackBase>,&UE::CoreUObject::Private::Copy<FTTTrackBase>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1488a2e00

void * __cdecl Z_Construct_UScriptStruct_FTTTrackId_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTTTrackId,&UE::CoreUObject::Private::Construct<FTTTrackId>,&UE::CoreUObject::Private::ConstructForTests<FTTTrackId>,&UE::CoreUObject::Private::Destruct<FTTTrackId>,&UE::CoreUObject::Private::Copy<FTTTrackId>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1488a2e40

void * __cdecl Z_Construct_UScriptStruct_FTTEventTrack_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTTEventTrack,&UE::CoreUObject::Private::Construct<FTTEventTrack>,&UE::CoreUObject::Private::ConstructForTests<FTTEventTrack>,&UE::CoreUObject::Private::Destruct<FTTEventTrack>,&UE::CoreUObject::Private::Copy<FTTEventTrack>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 1488a31c0

void * __thiscall
FTimerManagerTest::_scalar_deleting_destructor_(FTimerManagerTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488a33f0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_25>_>::
_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_25>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// NewStructOps @ 1488a3420

void * __cdecl Z_Construct_UScriptStruct_FTTPropertyTrack_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTTPropertyTrack,&UE::CoreUObject::Private::Construct<FTTPropertyTrack>,&UE::CoreUObject::Private::ConstructForTests<FTTPropertyTrack>,&UE::CoreUObject::Private::Destruct<FTTPropertyTrack>,&UE::CoreUObject::Private::Copy<FTTPropertyTrack>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1488a3460

void * __cdecl Z_Construct_UScriptStruct_FTTFloatTrack_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTTFloatTrack,&UE::CoreUObject::Private::Construct<FTTFloatTrack>,&UE::CoreUObject::Private::ConstructForTests<FTTFloatTrack>,&UE::CoreUObject::Private::Destruct<FTTFloatTrack>,&UE::CoreUObject::Private::Copy<FTTFloatTrack>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UTextureRenderTarget @ 1488a34a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTextureRenderTarget(void)

{
  if (Z_Registration_Info_UClass_UTextureRenderTarget.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTextureRenderTarget.OuterSingleton,
               &Z_Construct_UClass_UTextureRenderTarget_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTextureRenderTarget.OuterSingleton;
}

// NewStructOps @ 1488a34e0

void * __cdecl Z_Construct_UScriptStruct_FTTVectorTrack_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTTVectorTrack,&UE::CoreUObject::Private::Construct<FTTVectorTrack>,&UE::CoreUObject::Private::ConstructForTests<FTTVectorTrack>,&UE::CoreUObject::Private::Destruct<FTTVectorTrack>,&UE::CoreUObject::Private::Copy<FTTVectorTrack>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1488a3520

void * __cdecl Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTTLinearColorTrack,&UE::CoreUObject::Private::Construct<FTTLinearColorTrack>,&UE::CoreUObject::Private::ConstructForTests<FTTLinearColorTrack>,&UE::CoreUObject::Private::Destruct<FTTLinearColorTrack>,&UE::CoreUObject::Private::Copy<FTTLinearColorTrack>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_ATriggerBase @ 1488a3560

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ATriggerBase(void)

{
  if (Z_Registration_Info_UClass_ATriggerBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ATriggerBase.OuterSingleton,
               &Z_Construct_UClass_ATriggerBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ATriggerBase.OuterSingleton;
}

// NewProp_bAutoPlay_SetBit @ 1488a35a0

void __cdecl Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bAutoPlay_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x2d) = *(byte *)((longlong)param_1 + 0x2d) | 1;
  return;
}

// NewProp_bLoop_SetBit @ 1488a35b0

void __cdecl Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bLoop_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x2d) = *(byte *)((longlong)param_1 + 0x2d) | 2;
  return;
}

// NewProp_bReplicated_SetBit @ 1488a35c0

void __cdecl Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bReplicated_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x2d) = *(byte *)((longlong)param_1 + 0x2d) | 4;
  return;
}

// NewProp_bIgnoreTimeDilation_SetBit @ 1488a35d0

void __cdecl
Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bIgnoreTimeDilation_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x2d) = *(byte *)((longlong)param_1 + 0x2d) | 8;
  return;
}

// `scalar_deleting_destructor' @ 1488a35e0

void * __thiscall
FTraceUObjectAnnotation::_scalar_deleting_destructor_(FTraceUObjectAnnotation *this,uint param_1)

{
  ~FTraceUObjectAnnotation(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// NewStructOps @ 1488a36e0

void * __cdecl
Z_Construct_UScriptStruct_FActorLocatorFragmentResolveParameter_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FActorLocatorFragmentResolveParameter,&UE::CoreUObject::Private::Construct<FActorLocatorFragmentResolveParameter>,&UE::CoreUObject::Private::ConstructForTests<FActorLocatorFragmentResolveParameter>,&UE::CoreUObject::Private::Destruct<FActorLocatorFragmentResolveParameter>,&UE::CoreUObject::Private::Copy<FActorLocatorFragmentResolveParameter>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1488a3720

void * __cdecl Z_Construct_UScriptStruct_FActorLocatorFragment_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FActorLocatorFragment,&UE::CoreUObject::Private::Construct<FActorLocatorFragment>,&UE::CoreUObject::Private::ConstructForTests<FActorLocatorFragment>,&UE::CoreUObject::Private::Destruct<FActorLocatorFragment>,&UE::CoreUObject::Private::Copy<FActorLocatorFragment>,&UE::CoreUObject::Private::Identical<FActorLocatorFragment>,&UE::CoreUObject::Private::GetStructTypeHash<FActorLocatorFragment>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_ATriggerVolume @ 1488a3760

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ATriggerVolume(void)

{
  if (Z_Registration_Info_UClass_ATriggerVolume.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ATriggerVolume.OuterSingleton,
               &Z_Construct_UClass_ATriggerVolume_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ATriggerVolume.OuterSingleton;
}

// Z_Construct_UClass_UTextureRenderTarget2D @ 1488a37e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTextureRenderTarget2D(void)

{
  if (Z_Registration_Info_UClass_UTextureRenderTarget2D.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTextureRenderTarget2D.OuterSingleton,
               &Z_Construct_UClass_UTextureRenderTarget2D_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTextureRenderTarget2D.OuterSingleton;
}

// Z_Construct_UEnum_Engine_ETextureRenderTargetFormat @ 1488a3820

UEnum * __cdecl Z_Construct_UEnum_Engine_ETextureRenderTargetFormat(void)

{
  if (Z_Registration_Info_UEnum_ETextureRenderTargetFormat.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ETextureRenderTargetFormat.InnerSingleton,
               &Z_Construct_UEnum_Engine_ETextureRenderTargetFormat_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ETextureRenderTargetFormat.InnerSingleton;
}

// ETextureRenderTargetFormat_StaticEnum @ 1488a3860

UEnum * __cdecl ETextureRenderTargetFormat_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETextureRenderTargetFormat.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ETextureRenderTargetFormat.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ETextureRenderTargetFormat,(UObject *)pUVar1,
                       L"ETextureRenderTargetFormat");
  }
  return Z_Registration_Info_UEnum_ETextureRenderTargetFormat.OuterSingleton;
}

// ETextureRenderTargetSampleCount_StaticEnum @ 1488a38a0

UEnum * __cdecl ETextureRenderTargetSampleCount_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETextureRenderTargetSampleCount.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ETextureRenderTargetSampleCount.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ETextureRenderTargetSampleCount,(UObject *)pUVar1,
                       L"ETextureRenderTargetSampleCount");
  }
  return Z_Registration_Info_UEnum_ETextureRenderTargetSampleCount.OuterSingleton;
}

// NewProp_bForceLinearGamma_SetBit @ 1488a3960

void __cdecl
Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bForceLinearGamma_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x172) = *(byte *)((longlong)param_1 + 0x172) | 1;
  return;
}

// NewProp_bHDR_SetBit @ 1488a3970

void __cdecl Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bHDR_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x172) = *(byte *)((longlong)param_1 + 0x172) | 4;
  return;
}

// NewProp_bGPUSharedFlag_SetBit @ 1488a3980

void __cdecl
Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bGPUSharedFlag_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x172) = *(byte *)((longlong)param_1 + 0x172) | 8;
  return;
}

// NewProp_bSupportsUAV_SetBit @ 1488a3990

void __cdecl
Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bSupportsUAV_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x174) = *(byte *)((longlong)param_1 + 0x174) | 1;
  return;
}

// NewProp_bAutoGenerateMips_SetBit @ 1488a39a0

void __cdecl
Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bAutoGenerateMips_SetBit(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x174) = *(byte *)((longlong)param_1 + 0x174) | 2;
  return;
}

// <lambda_invoker_cdecl> @ 1488a3e80

void __cdecl
`TimerManagerTest_LoopingTimers_DifferentHandles'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (int *param_1)

{
  *param_1 = *param_1 + 1;
  return;
}

// AllocObject<`FCanvasRenderContext::DeferredDelete<FSceneView>'::__l2::FDeleter,FSceneView_const_*_&> @ 1488a4f30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FDeleter * __thiscall
FRDGBuilder::
AllocObject<_FCanvasRenderContext::DeferredDelete<FSceneView>_::__l2::FDeleter,FSceneView_const_*_&>
          (FRDGBuilder *this,FSceneView **param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FDeleter *pFVar6;
  undefined8 *local_18 [2];
  
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x10,0x10);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FDeleter *)(*pcVar2)();
      return pFVar6;
    }
  }
  else {
    *puVar5 = &
              ___7__TObject_UFDeleter__1____DeferredDelete_VFSceneView___FCanvasRenderContext__QEAAXPEBVFSceneView___Z__FRDGAllocator__6B_
    ;
    puVar5[1] = *param_1;
  }
  local_18[0] = puVar5;
  if (((undefined8 **)this->_padding_ <= local_18) &&
     (local_18 < (undefined8 **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FDeleter *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar4 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&this->_padding_ = iVar4 + 1;
  *(undefined8 **)(this->_padding_ + (longlong)iVar4 * 8) = local_18[0];
  return (FDeleter *)(puVar5 + 1);
}

// AllocObject<`FCanvasRenderContext::DeferredDelete<FSceneViewFamily>'::__l2::FDeleter,FSceneViewFamily_const_*_&> @ 1488a5060

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FDeleter * __thiscall
FRDGBuilder::
AllocObject<_FCanvasRenderContext::DeferredDelete<FSceneViewFamily>_::__l2::FDeleter,FSceneViewFamily_const_*_&>
          (FRDGBuilder *this,FSceneViewFamily **param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FDeleter *pFVar6;
  undefined8 *local_18 [2];
  
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x10,0x10);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FDeleter *)(*pcVar2)();
      return pFVar6;
    }
  }
  else {
    *puVar5 = &
              ___7__TObject_UFDeleter__1____DeferredDelete_VFSceneViewFamily___FCanvasRenderContext__QEAAXPEBVFSceneViewFamily___Z__FRDGAllocator__6B_
    ;
    puVar5[1] = *param_1;
  }
  local_18[0] = puVar5;
  if (((undefined8 **)this->_padding_ <= local_18) &&
     (local_18 < (undefined8 **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FDeleter *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar4 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&this->_padding_ = iVar4 + 1;
  *(undefined8 **)(this->_padding_ + (longlong)iVar4 * 8) = local_18[0];
  return (FDeleter *)(puVar5 + 1);
}

// BinarySearchBy<TArray<TTuple<FName,int>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,int,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess> @ 1488a5980

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<FName,int>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,int,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
          (TArray<TTuple<FName,int>,TSizedDefaultAllocator<32>_> *param_1,FName *param_2,
          FKeyForward param_3,FNameFastLess param_4)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  uVar1 = param_1->ArrayNum;
  iVar4 = 0;
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (0 < (int)uVar1) {
    uVar7 = uVar1;
    do {
      iVar5 = (uVar7 >> 1) + iVar4;
      iVar6 = *(int *)(pFVar2 + (longlong)iVar5 * 0xc) - (param_2->ComparisonIndex).Value;
      if (iVar6 == 0) {
        iVar6 = *(int *)(pFVar2 + (longlong)iVar5 * 0xc + 4) - param_2->Number;
      }
      if (iVar6 < 0) {
        iVar4 = iVar5 + (uVar7 & 1);
      }
      uVar3 = uVar7 >> 1;
      uVar7 = uVar7 >> 1;
    } while (uVar3 != 0);
    if (iVar4 < (int)uVar1) {
      iVar5 = (param_2->ComparisonIndex).Value - *(int *)(pFVar2 + (longlong)iVar4 * 0xc);
      if (iVar5 == 0) {
        iVar5 = param_2->Number - *(int *)(pFVar2 + (longlong)iVar4 * 0xc + 4);
      }
      iVar6 = -1;
      if (-1 < iVar5) {
        iVar6 = iVar4;
      }
      return iVar6;
    }
  }
  return -1;
}

// BinarySearchBy<TArray<TTuple<FName,UE::Transaction::FSerializedTaggedData>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,UE::Transaction::FSerializedTaggedData,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess> @ 1488a5a20

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<FName,UE::Transaction::FSerializedTaggedData>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,UE::Transaction::FSerializedTaggedData,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
          (TArray<TTuple<FName,UE::Transaction::FSerializedTaggedData>,TSizedDefaultAllocator<32>_>
           *param_1,FName *param_2,FKeyForward param_3,FNameFastLess param_4)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  uVar1 = param_1->ArrayNum;
  iVar4 = 0;
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (0 < (int)uVar1) {
    uVar7 = uVar1;
    do {
      iVar5 = (uVar7 >> 1) + iVar4;
      iVar6 = *(int *)(pFVar2 + (longlong)iVar5 * 0x18) - (param_2->ComparisonIndex).Value;
      if (iVar6 == 0) {
        iVar6 = *(int *)(pFVar2 + (longlong)iVar5 * 0x18 + 4) - param_2->Number;
      }
      if (iVar6 < 0) {
        iVar4 = iVar5 + (uVar7 & 1);
      }
      uVar3 = uVar7 >> 1;
      uVar7 = uVar7 >> 1;
    } while (uVar3 != 0);
    if (iVar4 < (int)uVar1) {
      iVar5 = (param_2->ComparisonIndex).Value - *(int *)(pFVar2 + (longlong)iVar4 * 0x18);
      if (iVar5 == 0) {
        iVar5 = param_2->Number - *(int *)(pFVar2 + (longlong)iVar4 * 0x18 + 4);
      }
      iVar6 = -1;
      if (-1 < iVar5) {
        iVar6 = iVar4;
      }
      return iVar6;
    }
  }
  return -1;
}

// CastChecked<UBoxComponent,UShapeComponent> @ 1488a5ac0

UBoxComponent * __cdecl CastChecked<UBoxComponent,UShapeComponent>(UShapeComponent *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UShapeComponent *)0x0) {
    pFVar3 = GetTypeName<UBoxComponent>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UBoxComponent_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UBoxComponent *)param_1;
  }
  pFVar3 = GetTypeName<UBoxComponent>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UShapeComponent>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UCapsuleComponent,UShapeComponent> @ 1488a5b80

UCapsuleComponent * __cdecl CastChecked<UCapsuleComponent,UShapeComponent>(UShapeComponent *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UShapeComponent *)0x0) {
    pFVar3 = GetTypeName<UCapsuleComponent>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UCapsuleComponent_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UCapsuleComponent *)param_1;
  }
  pFVar3 = GetTypeName<UCapsuleComponent>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UShapeComponent>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UEnum,UObject> @ 1488a5c40

UEnum * __cdecl CastChecked<UEnum,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UEnum>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UEnum_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UEnum *)param_1;
  }
  pFVar3 = GetTypeName<UEnum>(&local_28);
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

// CastChecked<USphereComponent,UShapeComponent> @ 1488a5d00

USphereComponent * __cdecl CastChecked<USphereComponent,UShapeComponent>(UShapeComponent *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UShapeComponent *)0x0) {
    pFVar3 = GetTypeName<USphereComponent>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_USphereComponent_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (USphereComponent *)param_1;
  }
  pFVar3 = GetTypeName<USphereComponent>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UShapeComponent>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// DefaultConstructItems<FTestTickFunction,int> @ 1488a61c0

void __cdecl DefaultConstructItems<FTestTickFunction,int>(void *param_1,int param_2)

{
  byte *pbVar1;
  
  if (param_2 != 0) {
    pbVar1 = (byte *)((longlong)param_1 + 0xb);
    do {
      *pbVar1 = *pbVar1 & 0xf4;
      *pbVar1 = *pbVar1 | 4;
      pbVar1[-3] = 0;
      pbVar1[-2] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
      pbVar1[8] = 0;
      pbVar1[9] = 0;
      pbVar1[10] = 0;
      pbVar1[0xb] = 0;
      pbVar1[0xc] = 0;
      pbVar1[0xd] = 0;
      pbVar1[0xe] = 0;
      pbVar1[0xf] = 0;
      pbVar1[0x10] = 0;
      pbVar1[0x11] = 0;
      pbVar1[0x12] = 0;
      pbVar1[0x13] = 0;
      pbVar1[0x14] = 0;
      pbVar1[0x15] = 0;
      pbVar1[0x16] = 0;
      pbVar1[0x17] = 0;
      pbVar1[0x18] = 0;
      pbVar1[0x19] = 0;
      pbVar1[0x1a] = 0;
      pbVar1[0x1b] = 0;
      pbVar1[0x1c] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      pbVar1[4] = 0;
      *(undefined ***)(pbVar1 + -0xb) = &___7FTestTickFunction__6B_;
      pbVar1[-1] = 9;
      pbVar1 = pbVar1 + 0x28;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<FTickGroupCondition,TUniquePtr<FTickBatchInfo,TDefaultDelete<FTickBatchInfo>_>_>,int> @ 1488a66f0

void __cdecl
DestructItems<TTuple<FTickGroupCondition,TUniquePtr<FTickBatchInfo,TDefaultDelete<FTickBatchInfo>_>_>,int>
          (TTuple<FTickGroupCondition,TUniquePtr<FTickBatchInfo,TDefaultDelete<FTickBatchInfo>_>_>
           *param_1,int param_2)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  if (param_2 != 0) {
    puVar2 = (undefined8 *)&param_1->field_0x8;
    do {
      pvVar1 = (void *)*puVar2;
      if (pvVar1 != (void *)0x0) {
        if (*(void **)((longlong)pvVar1 + 0x18) != (void *)0x0) {
          FMemory::Free(*(void **)((longlong)pvVar1 + 0x18));
        }
        if (*(void **)((longlong)pvVar1 + 8) != (void *)0x0) {
          FMemory::Free(*(void **)((longlong)pvVar1 + 8));
        }
        operator_delete(pvVar1,0x28);
      }
      puVar2 = puVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FTestTickFunction,int> @ 1488a6760

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl DestructItems<FTestTickFunction,int>(FTestTickFunction *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FTickFunction::~FTickFunction((FTickFunction *)param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FBinnedTextureLayout::FBinAllocation,int> @ 1488a67a0

void __cdecl
DestructItems<FBinnedTextureLayout::FBinAllocation,int>(FBinAllocation *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->FreeList;
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

// DuplicateObject<UCurveFloat> @ 1488a67e0

UCurveFloat * __cdecl
DuplicateObject<UCurveFloat>(TObjectPtr<UCurveFloat> *param_1,UObject *param_2,FName param_3)

{
  UClass *pUVar1;
  UCurveFloat *pUVar2;
  
  pUVar2 = (param_1->field0_0x0).DebugPtr;
  pUVar1 = Z_Construct_UClass_UCurveFloat_NoRegister();
  pUVar2 = (UCurveFloat *)DuplicateObject_Internal(pUVar1,(UObject *)pUVar2,param_2,param_3);
  return pUVar2;
}

// DuplicateObject<UCurveLinearColor> @ 1488a6830

UCurveLinearColor * __cdecl
DuplicateObject<UCurveLinearColor>
          (TObjectPtr<UCurveLinearColor> *param_1,UObject *param_2,FName param_3)

{
  UClass *pUVar1;
  UCurveLinearColor *pUVar2;
  
  pUVar2 = (param_1->field0_0x0).DebugPtr;
  pUVar1 = Z_Construct_UClass_UCurveLinearColor_NoRegister();
  pUVar2 = (UCurveLinearColor *)DuplicateObject_Internal(pUVar1,(UObject *)pUVar2,param_2,param_3);
  return pUVar2;
}

// DuplicateObject<UCurveVector> @ 1488a6880

UCurveVector * __cdecl
DuplicateObject<UCurveVector>(TObjectPtr<UCurveVector> *param_1,UObject *param_2,FName param_3)

{
  UClass *pUVar1;
  UCurveVector *pUVar2;
  
  pUVar2 = (param_1->field0_0x0).DebugPtr;
  pUVar1 = Z_Construct_UClass_UCurveVector_NoRegister();
  pUVar2 = (UCurveVector *)DuplicateObject_Internal(pUVar1,(UObject *)pUVar2,param_2,param_3);
  return pUVar2;
}

// Enqueue<TRenderCommandTag<`FTextureRenderTargetVolumeResource::ReadFloat16Pixels'::__l2::TSTR_ReadSurfaceCommand392>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1488a83f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FTextureRenderTargetVolumeResource::ReadFloat16Pixels_::__l2::TSTR_ReadSurfaceCommand392>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`FTextureRenderTargetVolumeResource::ReadFloat16Pixels'::__l2::TSTR_ReadSurfaceCommand392>
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
      if (bVar8) goto LAB_1488a8541;
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
    goto LAB_1488a8735;
  }
LAB_1488a8541:
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
LAB_1488a861f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1488a861f;
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
LAB_1488a8735:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UTextureRenderTarget2D::ResizeTarget'::__l11::TSTR_ResizeRenderTarget192>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1488a8770

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UTextureRenderTarget2D::ResizeTarget_::__l11::TSTR_ResizeRenderTarget192>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UTextureRenderTarget2D::ResizeTarget'::__l11::TSTR_ResizeRenderTarget192>
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
      if (bVar8) goto LAB_1488a88c1;
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
    goto LAB_1488a8ab5;
  }
LAB_1488a88c1:
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
LAB_1488a899f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1488a899f;
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
LAB_1488a8ab5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UTextureRenderTargetCube::UpdateResourceImmediate'::__l5::TSTR_UpdateResourceImmediate108>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1488a8af0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UTextureRenderTargetCube::UpdateResourceImmediate_::__l5::TSTR_UpdateResourceImmediate108>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UTextureRenderTargetCube::UpdateResourceImmediate'::__l5::TSTR_UpdateResourceImmediate108>
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
      if (bVar8) goto LAB_1488a8c41;
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
    goto LAB_1488a8e35;
  }
LAB_1488a8c41:
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
LAB_1488a8d1f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1488a8d1f;
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
LAB_1488a8e35:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UTextureRenderTarget2D::UpdateResourceImmediate'::__l5::TSTR_UpdateResourceImmediate212>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1488a8e70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UTextureRenderTarget2D::UpdateResourceImmediate_::__l5::TSTR_UpdateResourceImmediate212>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UTextureRenderTarget2D::UpdateResourceImmediate'::__l5::TSTR_UpdateResourceImmediate212>
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
      if (bVar8) goto LAB_1488a8fc1;
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
    goto LAB_1488a91b5;
  }
LAB_1488a8fc1:
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
LAB_1488a909f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1488a909f;
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
LAB_1488a91b5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UTextureRenderTarget2DArray::UpdateResourceImmediate'::__l5::TSTR_UpdateResourceImmediate99>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1488a91f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UTextureRenderTarget2DArray::UpdateResourceImmediate_::__l5::TSTR_UpdateResourceImmediate99>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UTextureRenderTarget2DArray::UpdateResourceImmediate'::__l5::TSTR_UpdateResourceImmediate99>
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
      if (bVar8) goto LAB_1488a9341;
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
    goto LAB_1488a9535;
  }
LAB_1488a9341:
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
LAB_1488a941f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1488a941f;
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
LAB_1488a9535:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UTextureRenderTargetVolume::UpdateResourceImmediate'::__l5::TSTR_UpdateResourceImmediate99>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1488a9570

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UTextureRenderTargetVolume::UpdateResourceImmediate_::__l5::TSTR_UpdateResourceImmediate99>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
            TRenderCommandTag<`UTextureRenderTargetVolume::UpdateResourceImmediate'::__l5::TSTR_UpdateResourceImmediate99>
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
      if (bVar8) goto LAB_1488a96c1;
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
    goto LAB_1488a98b5;
  }
LAB_1488a96c1:
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
LAB_1488a979f:
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
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1488a979f;
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
LAB_1488a98b5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetFullNameForCastLogError<UShapeComponent> @ 1488aa280

FString * __cdecl
GetFullNameForCastLogError<UShapeComponent>
          (FString *__return_storage_ptr__,UShapeComponent *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetTypeName<UEnum> @ 1488aa2b0

FString * __cdecl GetTypeName<UEnum>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UEnum_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSiftDown<FTimerHandle,int,FIdentityFunctor,TDereferenceWrapper<FTimerHandle,FTimerHeapOrder>_> @ 1488aa5a0

void __cdecl
AlgoImpl::
HeapSiftDown<FTimerHandle,int,FIdentityFunctor,TDereferenceWrapper<FTimerHandle,FTimerHeapOrder>_>
          (FTimerHandle *param_1,int param_2,int param_3,FIdentityFunctor *param_4,
          TDereferenceWrapper<FTimerHandle,FTimerHeapOrder> *param_5)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  ulong64 uVar4;
  int iVar5;
  int iVar6;
  
  while( true ) {
    iVar5 = param_2 * 2;
    if (param_3 <= iVar5 + 1) {
      return;
    }
    iVar6 = iVar5;
    if ((iVar5 + 2 < param_3) &&
       (lVar3 = *(longlong *)param_5->Predicate->Timers,
       dVar2 = *(double *)
                ((ulonglong)((uint)param_1[(longlong)iVar5 + 2].Handle & 0xffffff) * 0x60 + 8 +
                lVar3),
       pdVar1 = (double *)
                ((ulonglong)((uint)param_1[iVar5 + 1].Handle & 0xffffff) * 0x60 + 8 + lVar3),
       iVar6 = iVar5 + 1, *pdVar1 <= dVar2 && dVar2 != *pdVar1)) {
      iVar6 = iVar5;
    }
    lVar3 = *(longlong *)param_5->Predicate->Timers;
    dVar2 = *(double *)((ulonglong)((uint)param_1[param_2].Handle & 0xffffff) * 0x60 + 8 + lVar3);
    pdVar1 = (double *)
             ((ulonglong)((uint)param_1[(longlong)iVar6 + 1].Handle & 0xffffff) * 0x60 + 8 + lVar3);
    if (dVar2 < *pdVar1 || dVar2 == *pdVar1) break;
    uVar4 = param_1[param_2].Handle;
    param_1[param_2].Handle = param_1[(longlong)iVar6 + 1].Handle;
    param_1[(longlong)iVar6 + 1].Handle = uVar4;
    param_2 = iVar6 + 1;
  }
  return;
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FString,FTimerSourceEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,FTimerSourceEntry>,TDefaultMapHashableKeyFuncs<FString,FTimerSourceEntry,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,FTimerSourceEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTimerSourceEntry,0>_>::FValueComparisonClass<`FTimerSourceList::DumpEntries'::__l2::<lambda_1>_>_>_>_> @ 1488aa6a0

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FString,FTimerSourceEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,FTimerSourceEntry>,TDefaultMapHashableKeyFuncs<FString,FTimerSourceEntry,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,FTimerSourceEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTimerSourceEntry,0>_>::FValueComparisonClass<_FTimerSourceList::DumpEntries_::__l2::<lambda_1>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<FString,FTimerSourceEntry>,TDefaultMapHashableKeyFuncs<FString,FTimerSourceEntry,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,FTimerSourceEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTimerSourceEntry,0>_>::FValueComparisonClass<_public:_void___cdecl_FTimerSourceList::DumpEntries(void)_::_2_::<lambda_1>_>_>_>
          param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>_s_1 TVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_> *pTVar19;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_> *pTVar20;
  int iVar21;
  
  if (param_2 < 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar11) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar11) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar12 = (param_2 + -2) / 2;
  iVar13 = iVar12 * 2 + 1;
  iVar21 = iVar13;
  iVar14 = iVar12;
  do {
    while (param_2 <= iVar13) {
LAB_1488aa7de:
      if (iVar14 == 0) {
        iVar13 = param_2 + -1;
        lVar15 = (longlong)iVar13;
        if (0 < iVar13) {
          pTVar19 = param_1 + lVar15;
          do {
            uVar4 = *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 8);
            uVar2 = *(undefined8 *)((param_1->ElementData).Pad + 0x30);
            TVar5 = param_1->_s_1;
            uVar6 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            uVar7 = *(undefined8 *)((param_1->ElementData).Pad + 0x10);
            uVar8 = *(undefined8 *)((param_1->ElementData).Pad + 0x18);
            uVar9 = *(undefined8 *)((param_1->ElementData).Pad + 0x20);
            uVar10 = *(undefined8 *)((param_1->ElementData).Pad + 0x28);
            param_1->_s_1 = pTVar19->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar4;
            uVar4 = *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 0x18);
            *(undefined8 *)((param_1->ElementData).Pad + 0x10) =
                 *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 0x10);
            *(undefined8 *)((param_1->ElementData).Pad + 0x18) = uVar4;
            uVar4 = *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 0x28);
            *(undefined8 *)((param_1->ElementData).Pad + 0x20) =
                 *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 0x20);
            *(undefined8 *)((param_1->ElementData).Pad + 0x28) = uVar4;
            *(undefined8 *)((param_1->ElementData).Pad + 0x30) =
                 *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 0x30);
            pTVar19->_s_1 = TVar5;
            *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 8) = uVar6;
            *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 0x10) = uVar7;
            *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 0x18) = uVar8;
            *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 0x20) = uVar9;
            *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 0x28) = uVar10;
            *(undefined8 *)((longlong)(pTVar19->ElementData).Pad + 0x30) = uVar2;
            iVar21 = 0;
            if (1 < iVar13) {
              do {
                iVar12 = iVar21 * 2;
                iVar14 = iVar12 + 1;
                if (iVar12 + 2 < iVar13) {
                  if (*(ulonglong *)((longlong)iVar14 * 0x38 + 0x10 + (longlong)param_1) <
                      *(ulonglong *)((longlong)iVar12 * 0x38 + 0x80 + (longlong)param_1)) {
                    iVar14 = iVar12;
                  }
                  iVar14 = iVar14 + 1;
                }
                lVar16 = (longlong)iVar21;
                lVar18 = lVar16 * 0x38;
                pTVar20 = param_1 + iVar14;
                if (*(ulonglong *)(lVar18 + 0x10 + (longlong)param_1) <=
                    *(ulonglong *)((pTVar20->ElementData).Pad + 0x10)) break;
                uVar4 = *(undefined8 *)((pTVar20->ElementData).Pad + 8);
                uVar2 = *(undefined8 *)(lVar18 + 0x30 + (longlong)param_1);
                TVar5 = param_1[lVar16]._s_1;
                uVar6 = *(undefined8 *)((longlong)param_1[lVar16].ElementData.Pad + 8);
                puVar1 = (undefined8 *)(lVar18 + 0x10 + (longlong)param_1);
                uVar7 = *puVar1;
                uVar8 = puVar1[1];
                puVar1 = (undefined8 *)(lVar18 + 0x20 + (longlong)param_1);
                uVar9 = *puVar1;
                uVar10 = puVar1[1];
                param_1[lVar16]._s_1 = pTVar20->_s_1;
                *(undefined8 *)((longlong)param_1[lVar16].ElementData.Pad + 8) = uVar4;
                uVar4 = *(undefined8 *)((pTVar20->ElementData).Pad + 0x18);
                puVar1 = (undefined8 *)(lVar18 + 0x10 + (longlong)param_1);
                *puVar1 = *(undefined8 *)((pTVar20->ElementData).Pad + 0x10);
                puVar1[1] = uVar4;
                uVar4 = *(undefined8 *)((pTVar20->ElementData).Pad + 0x28);
                puVar1 = (undefined8 *)(lVar18 + 0x20 + (longlong)param_1);
                *puVar1 = *(undefined8 *)((pTVar20->ElementData).Pad + 0x20);
                puVar1[1] = uVar4;
                *(undefined8 *)(lVar18 + 0x30 + (longlong)param_1) =
                     *(undefined8 *)((pTVar20->ElementData).Pad + 0x30);
                pTVar20->_s_1 = TVar5;
                *(undefined8 *)((pTVar20->ElementData).Pad + 8) = uVar6;
                *(undefined8 *)((pTVar20->ElementData).Pad + 0x10) = uVar7;
                *(undefined8 *)((pTVar20->ElementData).Pad + 0x18) = uVar8;
                *(undefined8 *)((pTVar20->ElementData).Pad + 0x20) = uVar9;
                *(undefined8 *)((pTVar20->ElementData).Pad + 0x28) = uVar10;
                *(undefined8 *)((pTVar20->ElementData).Pad + 0x30) = uVar2;
                iVar21 = iVar14;
              } while (iVar14 * 2 + 1 < iVar13);
            }
            iVar13 = iVar13 + -1;
            lVar15 = lVar15 + -1;
            pTVar19 = pTVar19 + -1;
          } while (0 < lVar15);
        }
        return;
      }
      iVar12 = iVar14 + -1;
      iVar13 = iVar21 + -2;
      iVar21 = iVar13;
      iVar14 = iVar12;
    }
    iVar13 = iVar12 * 2;
    iVar17 = iVar13 + 1;
    if (iVar13 + 2 < param_2) {
      if (*(ulonglong *)((longlong)iVar17 * 0x38 + 0x10 + (longlong)param_1) <
          *(ulonglong *)((longlong)iVar13 * 0x38 + 0x80 + (longlong)param_1)) {
        iVar17 = iVar13;
      }
      iVar17 = iVar17 + 1;
    }
    lVar15 = (longlong)iVar12;
    lVar16 = lVar15 * 0x38;
    pTVar19 = param_1 + iVar17;
    if (*(ulonglong *)(lVar16 + 0x10 + (longlong)param_1) <=
        *(ulonglong *)((pTVar19->ElementData).Pad + 0x10)) goto LAB_1488aa7de;
    uVar4 = *(undefined8 *)((pTVar19->ElementData).Pad + 8);
    iVar13 = iVar17 * 2 + 1;
    uVar2 = *(undefined8 *)(lVar16 + 0x30 + (longlong)param_1);
    TVar5 = param_1[lVar15]._s_1;
    uVar6 = *(undefined8 *)((longlong)param_1[lVar15].ElementData.Pad + 8);
    puVar1 = (undefined8 *)(lVar16 + 0x10 + (longlong)param_1);
    uVar7 = *puVar1;
    uVar8 = puVar1[1];
    puVar1 = (undefined8 *)(lVar16 + 0x20 + (longlong)param_1);
    uVar9 = *puVar1;
    uVar10 = puVar1[1];
    param_1[lVar15]._s_1 = pTVar19->_s_1;
    *(undefined8 *)((longlong)param_1[lVar15].ElementData.Pad + 8) = uVar4;
    uVar4 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x18);
    puVar1 = (undefined8 *)(lVar16 + 0x10 + (longlong)param_1);
    *puVar1 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x10);
    puVar1[1] = uVar4;
    uVar4 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x28);
    puVar1 = (undefined8 *)(lVar16 + 0x20 + (longlong)param_1);
    *puVar1 = *(undefined8 *)((pTVar19->ElementData).Pad + 0x20);
    puVar1[1] = uVar4;
    *(undefined8 *)(lVar16 + 0x30 + (longlong)param_1) =
         *(undefined8 *)((pTVar19->ElementData).Pad + 0x30);
    pTVar19->_s_1 = TVar5;
    *(undefined8 *)((pTVar19->ElementData).Pad + 8) = uVar6;
    *(undefined8 *)((pTVar19->ElementData).Pad + 0x10) = uVar7;
    *(undefined8 *)((pTVar19->ElementData).Pad + 0x18) = uVar8;
    *(undefined8 *)((pTVar19->ElementData).Pad + 0x20) = uVar9;
    *(undefined8 *)((pTVar19->ElementData).Pad + 0x28) = uVar10;
    *(undefined8 *)((pTVar19->ElementData).Pad + 0x30) = uVar2;
    iVar12 = iVar17;
  } while( true );
}

// HeapSortInternal<`FTickTaskManager::DumpAllTickFunctions'::__l12::FSortedTickContextGroup,int,FIdentityFunctor,TDereferenceWrapper<`FTickTaskManager::DumpAllTickFunctions'::__l12::FSortedTickContextGroup,`FTickTaskManager::DumpAllTickFunctions'::__l12::<lambda_1>_>_> @ 1488aa940

void __cdecl
AlgoImpl::
HeapSortInternal<_FTickTaskManager::DumpAllTickFunctions_::__l12::FSortedTickContextGroup,int,FIdentityFunctor,TDereferenceWrapper<_FTickTaskManager::DumpAllTickFunctions_::__l12::FSortedTickContextGroup,_FTickTaskManager::DumpAllTickFunctions_::__l12::<lambda_1>_>_>
          (FSortedTickContextGroup *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_private:_virtual_void___cdecl_FTickTaskManager::DumpAllTickFunctions(FOutputDevice_&,UWorld_*,bool,bool,bool)_::_12_::FSortedTickContextGroup,_private:_virtual_void___cdecl_FTickTaskManager::DumpAllTickFunctions(FOutputDevice_&,UWorld_*,bool,bool,bool)_::_12_::<lambda_1>_>
          param_4)

{
  FSortedTickContextGroup *pFVar1;
  FSortedTickContextGroup *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  FSortedTickContextGroup *pFVar10;
  longlong lVar11;
  int iVar12;
  
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
  iVar12 = iVar7;
  iVar8 = iVar6;
  do {
    while (param_2 <= iVar7) {
LAB_1488aaa4d:
      if (iVar8 == 0) {
        iVar7 = param_2 + -1;
        lVar11 = (longlong)iVar7;
        if (0 < iVar7) {
          pFVar10 = param_1 + lVar11;
          do {
            FVar3 = param_1->Context;
            iVar12 = param_1->Count;
            param_1->Context = pFVar10->Context;
            param_1->Count = pFVar10->Count;
            pFVar10->Context = FVar3;
            pFVar10->Count = iVar12;
            iVar12 = 0;
            if (1 < iVar7) {
              do {
                iVar6 = iVar12 * 2;
                iVar8 = iVar6 + 1;
                if (iVar6 + 2 < iVar7) {
                  if (param_1[iVar8].Count < param_1[(longlong)iVar6 + 2].Count) {
                    iVar8 = iVar6;
                  }
                  iVar8 = iVar8 + 1;
                }
                pFVar1 = param_1 + iVar8;
                pFVar2 = param_1 + iVar12;
                if (param_1[iVar12].Count <= pFVar1->Count) break;
                FVar3 = pFVar2->Context;
                iVar12 = pFVar2->Count;
                pFVar2->Context = pFVar1->Context;
                pFVar2->Count = pFVar1->Count;
                pFVar1->Context = FVar3;
                pFVar1->Count = iVar12;
                iVar12 = iVar8;
              } while (iVar8 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar11 = lVar11 + -1;
            pFVar10 = pFVar10 + -1;
          } while (0 < lVar11);
        }
        return;
      }
      iVar6 = iVar8 + -1;
      iVar7 = iVar12 + -2;
      iVar12 = iVar7;
      iVar8 = iVar6;
    }
    iVar7 = iVar6 * 2;
    iVar9 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      if (param_1[iVar9].Count < param_1[(longlong)iVar7 + 2].Count) {
        iVar9 = iVar7;
      }
      iVar9 = iVar9 + 1;
    }
    pFVar10 = param_1 + iVar9;
    pFVar1 = param_1 + iVar6;
    if (param_1[iVar6].Count <= pFVar10->Count) goto LAB_1488aaa4d;
    FVar3 = pFVar1->Context;
    iVar6 = pFVar1->Count;
    pFVar1->Context = pFVar10->Context;
    pFVar1->Count = pFVar10->Count;
    iVar7 = iVar9 * 2 + 1;
    pFVar10->Context = FVar3;
    pFVar10->Count = iVar6;
    iVar6 = iVar9;
  } while( true );
}

// HeapSortInternal<FTickTaskLevel::FTickScheduleDetails,int,FIdentityFunctor,TDereferenceWrapper<FTickTaskLevel::FTickScheduleDetails,`FTickTaskLevel::ScheduleTickFunctionCooldowns'::__l5::<lambda_1>_>_> @ 1488aab60

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
AlgoImpl::
HeapSortInternal<FTickTaskLevel::FTickScheduleDetails,int,FIdentityFunctor,TDereferenceWrapper<FTickTaskLevel::FTickScheduleDetails,_FTickTaskLevel::ScheduleTickFunctionCooldowns_::__l5::<lambda_1>_>_>
          (FTickScheduleDetails *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FTickTaskLevel::FTickScheduleDetails,_public:_void___cdecl_FTickTaskLevel::ScheduleTickFunctionCooldowns(void)_::_5_::<lambda_1>_>
          param_4)

{
  FTickScheduleDetails *pFVar1;
  FTickScheduleDetails *pFVar2;
  code *pcVar3;
  FTickFunction *pFVar4;
  float fVar5;
  undefined3 uVar6;
  float fVar7;
  bool bVar8;
  undefined3 uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  FTickScheduleDetails *pFVar17;
  
  if (param_2 < 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar11 = (param_2 + -2) / 2;
  iVar12 = iVar11 * 2 + 1;
  iVar15 = iVar12;
  iVar16 = iVar11;
  do {
    while (param_2 <= iVar12) {
LAB_1488aac53:
      if (iVar16 == 0) {
        iVar12 = param_2 + -1;
        lVar14 = (longlong)iVar12;
        if (0 < iVar12) {
          pFVar17 = param_1 + lVar14;
          do {
            fVar5 = pFVar17->Cooldown;
            bVar10 = pFVar17->bDeferredRemove;
            uVar6 = *(undefined3 *)&pFVar17->field_0xd;
            iVar15 = 0;
            pFVar4 = param_1->TickFunction;
            fVar7 = param_1->Cooldown;
            bVar8 = param_1->bDeferredRemove;
            uVar9 = *(undefined3 *)&param_1->field_0xd;
            param_1->TickFunction = pFVar17->TickFunction;
            param_1->Cooldown = fVar5;
            param_1->bDeferredRemove = bVar10;
            *(undefined3 *)&param_1->field_0xd = uVar6;
            pFVar17->TickFunction = pFVar4;
            pFVar17->Cooldown = fVar7;
            pFVar17->bDeferredRemove = bVar8;
            *(undefined3 *)&pFVar17->field_0xd = uVar9;
            if (1 < iVar12) {
              do {
                iVar16 = iVar15 * 2;
                iVar11 = iVar16 + 1;
                if (iVar16 + 2 < iVar12) {
                  if (param_1[(longlong)iVar16 + 2].Cooldown <= param_1[iVar11].Cooldown &&
                      param_1[iVar11].Cooldown != param_1[(longlong)iVar16 + 2].Cooldown) {
                    iVar11 = iVar16;
                  }
                  iVar11 = iVar11 + 1;
                }
                if (param_1[iVar11].Cooldown < param_1[iVar15].Cooldown ||
                    param_1[iVar11].Cooldown == param_1[iVar15].Cooldown) break;
                pFVar1 = param_1 + iVar15;
                pFVar4 = pFVar1->TickFunction;
                fVar7 = pFVar1->Cooldown;
                bVar8 = pFVar1->bDeferredRemove;
                uVar9 = *(undefined3 *)&pFVar1->field_0xd;
                pFVar1 = param_1 + iVar11;
                fVar5 = pFVar1->Cooldown;
                bVar10 = pFVar1->bDeferredRemove;
                uVar6 = *(undefined3 *)&pFVar1->field_0xd;
                pFVar2 = param_1 + iVar15;
                pFVar2->TickFunction = pFVar1->TickFunction;
                pFVar2->Cooldown = fVar5;
                pFVar2->bDeferredRemove = bVar10;
                *(undefined3 *)&pFVar2->field_0xd = uVar6;
                pFVar1 = param_1 + iVar11;
                pFVar1->TickFunction = pFVar4;
                pFVar1->Cooldown = fVar7;
                pFVar1->bDeferredRemove = bVar8;
                *(undefined3 *)&pFVar1->field_0xd = uVar9;
                iVar15 = iVar11;
              } while (iVar11 * 2 + 1 < iVar12);
            }
            iVar12 = iVar12 + -1;
            lVar14 = lVar14 + -1;
            pFVar17 = pFVar17 + -1;
          } while (0 < lVar14);
        }
        return;
      }
      iVar11 = iVar16 + -1;
      iVar12 = iVar15 + -2;
      iVar15 = iVar12;
      iVar16 = iVar11;
    }
    iVar12 = iVar11 * 2;
    iVar13 = iVar12 + 1;
    if (iVar12 + 2 < param_2) {
      if (param_1[(longlong)iVar12 + 2].Cooldown <= param_1[iVar13].Cooldown &&
          param_1[iVar13].Cooldown != param_1[(longlong)iVar12 + 2].Cooldown) {
        iVar13 = iVar12;
      }
      iVar13 = iVar13 + 1;
    }
    if (param_1[iVar13].Cooldown < param_1[iVar11].Cooldown ||
        param_1[iVar13].Cooldown == param_1[iVar11].Cooldown) goto LAB_1488aac53;
    pFVar17 = param_1 + iVar11;
    pFVar4 = pFVar17->TickFunction;
    fVar7 = pFVar17->Cooldown;
    bVar8 = pFVar17->bDeferredRemove;
    uVar9 = *(undefined3 *)&pFVar17->field_0xd;
    pFVar17 = param_1 + iVar13;
    fVar5 = pFVar17->Cooldown;
    bVar10 = pFVar17->bDeferredRemove;
    uVar6 = *(undefined3 *)&pFVar17->field_0xd;
    pFVar1 = param_1 + iVar11;
    pFVar1->TickFunction = pFVar17->TickFunction;
    pFVar1->Cooldown = fVar5;
    pFVar1->bDeferredRemove = bVar10;
    *(undefined3 *)&pFVar1->field_0xd = uVar6;
    iVar12 = iVar13 * 2 + 1;
    pFVar17 = param_1 + iVar13;
    pFVar17->TickFunction = pFVar4;
    pFVar17->Cooldown = fVar7;
    pFVar17->bDeferredRemove = bVar8;
    *(undefined3 *)&pFVar17->field_0xd = uVar9;
    iVar11 = iVar13;
  } while( true );
}

// InternalConstructor<ATriggerBase> @ 1488aad30

void __cdecl InternalConstructor<ATriggerBase>(FObjectInitializer *param_1)

{
  if ((ATriggerBase *)param_1->Obj != (ATriggerBase *)0x0) {
    ATriggerBase::ATriggerBase((ATriggerBase *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<ATriggerVolume> @ 1488aad50

void __cdecl InternalConstructor<ATriggerVolume>(FObjectInitializer *param_1)

{
  AVolume *this;
  ulonglong uVar1;
  
  this = (AVolume *)param_1->Obj;
  if (this != (AVolume *)0x0) {
    AVolume::AVolume(this,param_1);
    uVar1 = (ulonglong)_tls_index;
    *(undefined ***)this = &___7ATriggerVolume__6B_;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x9d4c) < _TSS0) {
      _Init_thread_header(&_TSS0);
      if (_TSS0 == -1) {
        FName::FName(&CollisionProfileName,L"Trigger");
        _Init_thread_footer(&_TSS0);
      }
    }
    (**(code **)(**(longlong **)&this->field_0x2d8 + 0x788))
              (*(longlong **)&this->field_0x2d8,CollisionProfileName,1);
    *(uint *)&this->field_0x2cc = *(uint *)&this->field_0x2cc | 1;
    *(undefined2 *)&this->field_0x2c5 = 0x64ff;
    this->field_0x2c4 = 100;
    this->field_0x2c7 = 0xff;
  }
  return;
}

// InternalConstructor<UTextureLODSettings> @ 1488aae10

void __cdecl InternalConstructor<UTextureLODSettings>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UTextureLODSettings__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UTextureLightProfile> @ 1488aae50

void __cdecl InternalConstructor<UTextureLightProfile>(FObjectInitializer *param_1)

{
  UTexture2D *this;
  
  this = (UTexture2D *)param_1->Obj;
  if (this != (UTexture2D *)0x0) {
    UTexture2D::UTexture2D(this,param_1);
    *(byte *)&this->_padding_ = (byte)this->_padding_ | 1;
    this->_padding_ = (longlong)&UTextureLightProfile::_vftable__for__UStreamableRenderAsset__;
    this->_padding_ = (longlong)&UTextureLightProfile::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UTextureLightProfile::_vftable__for__IInterface_AsyncCompilation__;
    *(undefined4 *)&this[1]._padding_ = 0xbf800000;
  }
  return;
}

// InternalConstructor<UTextureRenderTarget2D> @ 1488aaeb0

void __cdecl InternalConstructor<UTextureRenderTarget2D>(FObjectInitializer *param_1)

{
  uint *puVar1;
  byte *pbVar2;
  byte bVar3;
  UTexture *this;
  
  this = (UTexture *)param_1->Obj;
  if (this != (UTexture *)0x0) {
    UTexture::UTexture(this,param_1);
    *(byte *)&this->_padding_ = (byte)this->_padding_ | 1;
    this->SRGB = '\x01';
    puVar1 = (uint *)((longlong)&this[1]._padding_ + 4);
    *puVar1 = *puVar1 & 0xfffffff8;
    pbVar2 = (byte *)((longlong)&this[1]._padding_ + 4);
    *pbVar2 = *pbVar2 & 0xfc;
    this->_padding_ = (longlong)&UTextureRenderTarget2D::_vftable__for__UStreamableRenderAsset__;
    this->_padding_ = (longlong)&UTextureRenderTarget2D::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UTextureRenderTarget2D::_vftable__for__IInterface_AsyncCompilation__;
    bVar3 = *(byte *)((longlong)&this[1]._padding_ + 2);
    *(undefined4 *)&this[1]._padding_ = 0;
    (this->LODGroup).Value = '\x12';
    *(undefined4 *)&this[1]._padding_ = 1;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 1;
    *(undefined1 *)((longlong)&this[1]._padding_ + 3) = 6;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    *(byte *)((longlong)&this[1]._padding_ + 2) = bVar3 & 0xfd | 5;
    *(uchar *)((longlong)&this[1]._padding_ + 5) = (this->Filter).Value;
    *(undefined2 *)((longlong)&this[1]._padding_ + 7) = 1;
    *(undefined1 *)((longlong)&this[1]._padding_ + 6) = 1;
  }
  return;
}

// InternalConstructor<UTextureRenderTarget2DArray> @ 1488aaf90

void __cdecl InternalConstructor<UTextureRenderTarget2DArray>(FObjectInitializer *param_1)

{
  uint *puVar1;
  byte bVar2;
  UTexture *this;
  
  this = (UTexture *)param_1->Obj;
  if (this != (UTexture *)0x0) {
    UTexture::UTexture(this,param_1);
    *(byte *)&this->_padding_ = (byte)this->_padding_ | 1;
    this->SRGB = '\x01';
    puVar1 = (uint *)((longlong)&this[1]._padding_ + 4);
    *puVar1 = *puVar1 & 0xfffffff8;
    this->_padding_ =
         (longlong)&UTextureRenderTarget2DArray::_vftable__for__UStreamableRenderAsset__;
    this->_padding_ =
         (longlong)&UTextureRenderTarget2DArray::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UTextureRenderTarget2DArray::_vftable__for__IInterface_AsyncCompilation__;
    bVar2 = *(byte *)((longlong)&this[1]._padding_ + 5);
    *(undefined4 *)&this[1]._padding_ = 0;
    (this->LODGroup).Value = '\x12';
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0x3f800000;
    *(undefined4 *)&this[1]._padding_ = 0x3f800000;
    *(byte *)((longlong)&this[1]._padding_ + 5) = bVar2 & 0xfd | 5;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
  }
  return;
}

// InternalConstructor<UTextureRenderTarget> @ 1488ab040

void __cdecl InternalConstructor<UTextureRenderTarget>(FObjectInitializer *param_1)

{
  if ((UTextureRenderTarget *)param_1->Obj != (UTextureRenderTarget *)0x0) {
    UTextureRenderTarget::UTextureRenderTarget((UTextureRenderTarget *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UTextureRenderTargetCube> @ 1488ab060

void __cdecl InternalConstructor<UTextureRenderTargetCube>(FObjectInitializer *param_1)

{
  uint *puVar1;
  byte bVar2;
  UTexture *this;
  
  this = (UTexture *)param_1->Obj;
  if (this != (UTexture *)0x0) {
    UTexture::UTexture(this,param_1);
    *(byte *)&this->_padding_ = (byte)this->_padding_ | 1;
    this->SRGB = '\x01';
    puVar1 = (uint *)((longlong)&this[1]._padding_ + 4);
    *puVar1 = *puVar1 & 0xfffffff8;
    this->_padding_ = (longlong)&UTextureRenderTargetCube::_vftable__for__UStreamableRenderAsset__;
    this->_padding_ = (longlong)&UTextureRenderTargetCube::_vftable__for__IInterface_AssetUserData__
    ;
    this->_padding_ =
         (longlong)&UTextureRenderTargetCube::_vftable__for__IInterface_AsyncCompilation__;
    bVar2 = *(byte *)((longlong)&this[1]._padding_ + 5);
    *(undefined4 *)&this[1]._padding_ = 0;
    (this->LODGroup).Value = '\x12';
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0x3f800000;
    *(undefined4 *)&this[1]._padding_ = 0x3f800000;
    *(byte *)((longlong)&this[1]._padding_ + 5) = bVar2 & 0xf5 | 5;
    *(uchar *)((longlong)&this[1]._padding_ + 6) = (this->Filter).Value;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UTextureRenderTargetVolume> @ 1488ab120

void __cdecl InternalConstructor<UTextureRenderTargetVolume>(FObjectInitializer *param_1)

{
  uint *puVar1;
  byte bVar2;
  UTexture *this;
  
  this = (UTexture *)param_1->Obj;
  if (this != (UTexture *)0x0) {
    UTexture::UTexture(this,param_1);
    *(byte *)&this->_padding_ = (byte)this->_padding_ | 1;
    this->SRGB = '\x01';
    puVar1 = (uint *)((longlong)&this[1]._padding_ + 4);
    *puVar1 = *puVar1 & 0xfffffff8;
    this->_padding_ = (longlong)&UTextureRenderTargetVolume::_vftable__for__UStreamableRenderAsset__
    ;
    this->_padding_ =
         (longlong)&UTextureRenderTargetVolume::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UTextureRenderTargetVolume::_vftable__for__IInterface_AsyncCompilation__;
    bVar2 = *(byte *)((longlong)&this[1]._padding_ + 5);
    *(undefined4 *)&this[1]._padding_ = 0;
    (this->LODGroup).Value = '\x12';
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0x3f800000;
    *(undefined4 *)&this[1]._padding_ = 0x3f800000;
    *(byte *)((longlong)&this[1]._padding_ + 5) = bVar2 & 0xfd | 5;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
  }
  return;
}

// InternalConstructor<UTimelineTemplate> @ 1488ab1d0

void __cdecl InternalConstructor<UTimelineTemplate>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined4 *)(this + 1) = 0x40a00000;
    *(undefined ***)this = &___7UTimelineTemplate__6B_;
    this[1].field_0x5 = this[1].field_0x5 & 0xfb;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x1c = 0;
    *(undefined8 *)&this[3].field_0x24 = 0;
    *(undefined8 *)&this[4].field_0x4 = 0;
    *(undefined8 *)&this[4].field_0xc = 0;
  }
  return;
}

// InternalConstructor<UUniversalObjectLocatorScriptingExtensions> @ 1488ab260

void __cdecl
InternalConstructor<UUniversalObjectLocatorScriptingExtensions>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UUniversalObjectLocatorScriptingExtensions__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<ATriggerBase> @ 1488ab290

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

UObject * __cdecl InternalVTableHelperCtorCaller<ATriggerBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ATriggerBase::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7ATriggerBase__6B_;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ATriggerVolume> @ 1488ab350

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ATriggerVolume>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AVolume *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ATriggerVolume::GetPrivateStaticClass();
  this = (AVolume *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AVolume *)0x0) {
    AVolume::AVolume(this,param_1);
    *(undefined ***)this = &___7ATriggerVolume__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTextureLODSettings> @ 1488ab400

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UTextureLODSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTextureLODSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UTextureLODSettings__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTextureLightProfile> @ 1488ab4c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UTextureLightProfile>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UTexture2D *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTextureLightProfile::GetPrivateStaticClass();
  this = (UTexture2D *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UTexture2D *)0x0) {
    UTexture2D::UTexture2D(this,param_1);
    this->_padding_ = (longlong)&UTextureLightProfile::_vftable__for__UStreamableRenderAsset__;
    this->_padding_ = (longlong)&UTextureLightProfile::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UTextureLightProfile::_vftable__for__IInterface_AsyncCompilation__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTextureRenderTarget2D> @ 1488ab590

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UTextureRenderTarget2D>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UTexture *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTextureRenderTarget2D::GetPrivateStaticClass();
  this = (UTexture *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UTexture *)0x0) {
    UTexture::UTexture(this,param_1);
    this->_padding_ = (longlong)&UTextureRenderTarget2D::_vftable__for__UStreamableRenderAsset__;
    this->_padding_ = (longlong)&UTextureRenderTarget2D::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UTextureRenderTarget2D::_vftable__for__IInterface_AsyncCompilation__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTextureRenderTarget2DArray> @ 1488ab660

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UTextureRenderTarget2DArray>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UTexture *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTextureRenderTarget2DArray::GetPrivateStaticClass();
  this = (UTexture *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UTexture *)0x0) {
    UTexture::UTexture(this,param_1);
    this->_padding_ =
         (longlong)&UTextureRenderTarget2DArray::_vftable__for__UStreamableRenderAsset__;
    this->_padding_ =
         (longlong)&UTextureRenderTarget2DArray::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UTextureRenderTarget2DArray::_vftable__for__IInterface_AsyncCompilation__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTextureRenderTarget> @ 1488ab730

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UTextureRenderTarget>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UTexture *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTextureRenderTarget::GetPrivateStaticClass();
  this = (UTexture *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UTexture *)0x0) {
    UTexture::UTexture(this,param_1);
    this->_padding_ = (longlong)&UTextureRenderTarget::_vftable__for__UStreamableRenderAsset__;
    this->_padding_ = (longlong)&UTextureRenderTarget::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UTextureRenderTarget::_vftable__for__IInterface_AsyncCompilation__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTextureRenderTargetCube> @ 1488ab800

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UTextureRenderTargetCube>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UTexture *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTextureRenderTargetCube::GetPrivateStaticClass();
  this = (UTexture *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UTexture *)0x0) {
    UTexture::UTexture(this,param_1);
    this->_padding_ = (longlong)&UTextureRenderTargetCube::_vftable__for__UStreamableRenderAsset__;
    this->_padding_ = (longlong)&UTextureRenderTargetCube::_vftable__for__IInterface_AssetUserData__
    ;
    this->_padding_ =
         (longlong)&UTextureRenderTargetCube::_vftable__for__IInterface_AsyncCompilation__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTextureRenderTargetVolume> @ 1488ab8d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UTextureRenderTargetVolume>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UTexture *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTextureRenderTargetVolume::GetPrivateStaticClass();
  this = (UTexture *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UTexture *)0x0) {
    UTexture::UTexture(this,param_1);
    this->_padding_ = (longlong)&UTextureRenderTargetVolume::_vftable__for__UStreamableRenderAsset__
    ;
    this->_padding_ =
         (longlong)&UTextureRenderTargetVolume::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UTextureRenderTargetVolume::_vftable__for__IInterface_AsyncCompilation__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTimelineTemplate> @ 1488ab9a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UTimelineTemplate>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTimelineTemplate::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UTimelineTemplate__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x1c = 0;
    *(undefined8 *)&pUVar1[3].field_0x24 = 0;
    *(undefined8 *)&pUVar1[4].field_0x4 = 0;
    *(undefined8 *)&pUVar1[4].field_0xc = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UUniversalObjectLocatorScriptingExtensions> @ 1488abaa0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UUniversalObjectLocatorScriptingExtensions>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UUniversalObjectLocatorScriptingExtensions::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UUniversalObjectLocatorScriptingExtensions__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FString,FTimerSourceEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,FTimerSourceEntry>,TDefaultMapHashableKeyFuncs<FString,FTimerSourceEntry,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,FTimerSourceEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTimerSourceEntry,0>_>::FValueComparisonClass<`FTimerSourceList::DumpEntries'::__l2::<lambda_1>_>_>_>_> @ 1488abb50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FString,FTimerSourceEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,FTimerSourceEntry>,TDefaultMapHashableKeyFuncs<FString,FTimerSourceEntry,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,FTimerSourceEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTimerSourceEntry,0>_>::FValueComparisonClass<_FTimerSourceList::DumpEntries_::__l2::<lambda_1>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<FString,FTimerSourceEntry>,TDefaultMapHashableKeyFuncs<FString,FTimerSourceEntry,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,FTimerSourceEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTimerSourceEntry,0>_>::FValueComparisonClass<_public:_void___cdecl_FTimerSourceList::DumpEntries(void)_::_2_::<lambda_1>_>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_> *pTVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>_s_1 TVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_> *pTVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_> *pTVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_> *pTVar13;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_> *pTVar14;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_> *pTVar15;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_> *pTVar16;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_> **ppTVar17;
  float fVar18;
  undefined1 auStack_378 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_> *local_348;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_> *local_338;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_> *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar18 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar18;
    memset(local_320,0,0x2e8);
    ppTVar17 = &local_338;
    do {
      pTVar11 = ppTVar17[1];
      pTVar16 = *ppTVar17;
      pTVar1 = ppTVar17[2];
      local_348._0_4_ = (int)pTVar1;
      iVar10 = (int)(((longlong)pTVar11 - (longlong)pTVar16) / 0x38) + 1;
      pTVar15 = pTVar16;
      if ((int)local_348 != 0) {
LAB_1488abc20:
        if (8 < iVar10) {
          uVar3 = *(undefined8 *)((pTVar15->ElementData).Pad + 8);
          pTVar13 = pTVar11 + 1;
          pTVar16 = pTVar15 + iVar10 / 2;
          TVar4 = pTVar16->_s_1;
          uVar5 = *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 8);
          uVar6 = *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x10);
          uVar7 = *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x18);
          uVar8 = *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x20);
          uVar9 = *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x28);
          uVar2 = *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x30);
          pTVar16->_s_1 = pTVar15->_s_1;
          *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 8) = uVar3;
          uVar3 = *(undefined8 *)((pTVar15->ElementData).Pad + 0x18);
          *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x10) =
               *(undefined8 *)((pTVar15->ElementData).Pad + 0x10);
          *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x18) = uVar3;
          uVar3 = *(undefined8 *)((pTVar15->ElementData).Pad + 0x28);
          *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x20) =
               *(undefined8 *)((pTVar15->ElementData).Pad + 0x20);
          *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x28) = uVar3;
          *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x30) =
               *(undefined8 *)((pTVar15->ElementData).Pad + 0x30);
          pTVar15->_s_1 = TVar4;
          *(undefined8 *)((pTVar15->ElementData).Pad + 8) = uVar5;
          *(undefined8 *)((pTVar15->ElementData).Pad + 0x10) = uVar6;
          *(undefined8 *)((pTVar15->ElementData).Pad + 0x18) = uVar7;
          *(undefined8 *)((pTVar15->ElementData).Pad + 0x20) = uVar8;
          *(undefined8 *)((pTVar15->ElementData).Pad + 0x28) = uVar9;
          *(undefined8 *)((pTVar15->ElementData).Pad + 0x30) = uVar2;
          pTVar16 = pTVar15;
LAB_1488abc90:
          pTVar12 = pTVar16;
          pTVar16 = pTVar12 + 1;
          if (pTVar16 <= pTVar11) goto code_r0x0001488abc99;
          goto LAB_1488abca3;
        }
        for (; pTVar16 = pTVar15, pTVar1 = pTVar15, pTVar15 < pTVar11; pTVar11 = pTVar11 + -1) {
          while (pTVar1 = pTVar1 + 1, pTVar1 <= pTVar11) {
            if (*(ulonglong *)((pTVar1->ElementData).Pad + 0x10) <
                *(ulonglong *)((pTVar16->ElementData).Pad + 0x10)) {
              pTVar16 = pTVar1;
            }
          }
          TVar4 = pTVar16->_s_1;
          uVar3 = *(undefined8 *)((pTVar16->ElementData).Pad + 8);
          uVar2 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x30);
          uVar5 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x10);
          uVar6 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x18);
          uVar7 = *(undefined8 *)((pTVar11->ElementData).Pad + 8);
          uVar8 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x20);
          uVar9 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x28);
          pTVar16->_s_1 = pTVar11->_s_1;
          *(undefined8 *)((pTVar16->ElementData).Pad + 8) = uVar7;
          uVar7 = *(undefined8 *)((pTVar11->ElementData).Pad + 0x18);
          *(undefined8 *)((pTVar16->ElementData).Pad + 0x10) =
               *(undefined8 *)((pTVar11->ElementData).Pad + 0x10);
          *(undefined8 *)((pTVar16->ElementData).Pad + 0x18) = uVar7;
          uVar7 = *(undefined8 *)((pTVar11->ElementData).Pad + 0x28);
          *(undefined8 *)((pTVar16->ElementData).Pad + 0x20) =
               *(undefined8 *)((pTVar11->ElementData).Pad + 0x20);
          *(undefined8 *)((pTVar16->ElementData).Pad + 0x28) = uVar7;
          *(undefined8 *)((pTVar16->ElementData).Pad + 0x30) =
               *(undefined8 *)((pTVar11->ElementData).Pad + 0x30);
          pTVar11->_s_1 = TVar4;
          *(undefined8 *)((pTVar11->ElementData).Pad + 8) = uVar3;
          *(undefined8 *)((pTVar11->ElementData).Pad + 0x10) = uVar5;
          *(undefined8 *)((pTVar11->ElementData).Pad + 0x18) = uVar6;
          *(undefined8 *)((pTVar11->ElementData).Pad + 0x20) = uVar8;
          *(undefined8 *)((pTVar11->ElementData).Pad + 0x28) = uVar9;
          *(undefined8 *)((pTVar11->ElementData).Pad + 0x30) = uVar2;
        }
        goto LAB_1488abe15;
      }
LAB_1488abe06:
      local_348 = pTVar1;
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FString,FTimerSourceEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,FTimerSourceEntry>,TDefaultMapHashableKeyFuncs<FString,FTimerSourceEntry,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,FTimerSourceEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTimerSourceEntry,0>_>::FValueComparisonClass<_FTimerSourceList::DumpEntries_::__l2::<lambda_1>_>_>_>_>
                (pTVar16,iVar10,param_3,param_4);
LAB_1488abe15:
      ppTVar17 = ppTVar17 + -3;
    } while (&local_338 <= ppTVar17);
  }
  return;
code_r0x0001488abc99:
  if (*(ulonglong *)((pTVar15->ElementData).Pad + 0x10) <= *(ulonglong *)((longlong)pTVar12 + 0x48))
  goto LAB_1488abc90;
LAB_1488abca3:
  do {
    pTVar14 = pTVar13;
    pTVar13 = pTVar14 + -1;
    if (pTVar13 <= pTVar15) break;
  } while (*(ulonglong *)((longlong)pTVar14 + -0x28) <=
           *(ulonglong *)((pTVar15->ElementData).Pad + 0x10));
  uVar2 = *(undefined8 *)((longlong)pTVar14 + -0x30);
  if (pTVar16 <= pTVar13) {
    TVar4 = pTVar16->_s_1;
    uVar5 = *(undefined8 *)((longlong)pTVar12 + 0x40);
    uVar6 = *(undefined8 *)((longlong)pTVar12 + 0x48);
    uVar7 = *(undefined8 *)((longlong)pTVar12 + 0x50);
    uVar8 = *(undefined8 *)((longlong)pTVar12 + 0x58);
    uVar9 = *(undefined8 *)((longlong)pTVar12 + 0x60);
    uVar3 = *(undefined8 *)((longlong)pTVar12 + 0x68);
    pTVar16->_s_1 = pTVar13->_s_1;
    *(undefined8 *)((longlong)pTVar12 + 0x40) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pTVar14 + -0x20);
    *(undefined8 *)((longlong)pTVar12 + 0x48) = *(undefined8 *)((longlong)pTVar14 + -0x28);
    *(undefined8 *)((longlong)pTVar12 + 0x50) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pTVar14 + -0x10);
    *(undefined8 *)((longlong)pTVar12 + 0x58) = *(undefined8 *)((longlong)pTVar14 + -0x18);
    *(undefined8 *)((longlong)pTVar12 + 0x60) = uVar2;
    *(undefined8 *)((longlong)pTVar12 + 0x68) = *(undefined8 *)((longlong)pTVar14 + -8);
    pTVar13->_s_1 = TVar4;
    *(undefined8 *)((longlong)pTVar14 + -0x30) = uVar5;
    *(undefined8 *)((longlong)pTVar14 + -0x28) = uVar6;
    *(undefined8 *)((longlong)pTVar14 + -0x20) = uVar7;
    *(undefined8 *)((longlong)pTVar14 + -0x18) = uVar8;
    *(undefined8 *)((longlong)pTVar14 + -0x10) = uVar9;
    *(undefined8 *)((longlong)pTVar14 + -8) = uVar3;
    goto LAB_1488abc90;
  }
  TVar4 = pTVar15->_s_1;
  uVar5 = *(undefined8 *)((pTVar15->ElementData).Pad + 8);
  uVar6 = *(undefined8 *)((pTVar15->ElementData).Pad + 0x10);
  uVar7 = *(undefined8 *)((pTVar15->ElementData).Pad + 0x18);
  local_348._0_4_ = (int)local_348 + -1;
  uVar8 = *(undefined8 *)((pTVar15->ElementData).Pad + 0x20);
  uVar9 = *(undefined8 *)((pTVar15->ElementData).Pad + 0x28);
  uVar3 = *(undefined8 *)((pTVar15->ElementData).Pad + 0x30);
  pTVar15->_s_1 = pTVar13->_s_1;
  *(undefined8 *)((pTVar15->ElementData).Pad + 8) = uVar2;
  uVar2 = *(undefined8 *)((longlong)pTVar14 + -0x20);
  *(undefined8 *)((pTVar15->ElementData).Pad + 0x10) = *(undefined8 *)((longlong)pTVar14 + -0x28);
  *(undefined8 *)((pTVar15->ElementData).Pad + 0x18) = uVar2;
  uVar2 = *(undefined8 *)((longlong)pTVar14 + -0x10);
  *(undefined8 *)((pTVar15->ElementData).Pad + 0x20) = *(undefined8 *)((longlong)pTVar14 + -0x18);
  *(undefined8 *)((pTVar15->ElementData).Pad + 0x28) = uVar2;
  *(undefined8 *)((pTVar15->ElementData).Pad + 0x30) = *(undefined8 *)((longlong)pTVar14 + -8);
  pTVar13->_s_1 = TVar4;
  *(undefined8 *)((longlong)pTVar14 + -0x30) = uVar5;
  *(undefined8 *)((longlong)pTVar14 + -0x28) = uVar6;
  *(undefined8 *)((longlong)pTVar14 + -0x20) = uVar7;
  *(undefined8 *)((longlong)pTVar14 + -0x18) = uVar8;
  *(undefined8 *)((longlong)pTVar14 + -0x10) = uVar9;
  *(undefined8 *)((longlong)pTVar14 + -8) = uVar3;
  if (((longlong)pTVar13 + (-0x38 - (longlong)pTVar15)) / 0x38 <
      ((longlong)pTVar11 - (longlong)pTVar16) / 0x38) {
    if (pTVar16 < pTVar11) {
      *ppTVar17 = pTVar16;
      ppTVar17[1] = pTVar11;
      *(int *)(ppTVar17 + 2) = (int)local_348;
      ppTVar17 = ppTVar17 + 3;
    }
    if (pTVar13 <= pTVar15 + 1) goto LAB_1488abe15;
    pTVar11 = pTVar14 + -2;
    pTVar16 = pTVar15;
  }
  else {
    if (pTVar15 + 1 < pTVar13) {
      *ppTVar17 = pTVar15;
      ppTVar17[1] = pTVar14 + -2;
      *(int *)(ppTVar17 + 2) = (int)local_348;
      ppTVar17 = ppTVar17 + 3;
    }
    if (pTVar11 <= pTVar16) goto LAB_1488abe15;
  }
  iVar10 = (int)(((longlong)pTVar11 - (longlong)pTVar16) / 0x38) + 1;
  pTVar15 = pTVar16;
  if ((int)local_348 == 0) goto LAB_1488abe06;
  goto LAB_1488abc20;
}

// IntroSortInternal<`FTickTaskManager::DumpAllTickFunctions'::__l12::FSortedTickContextGroup,int,FIdentityFunctor,TDereferenceWrapper<`FTickTaskManager::DumpAllTickFunctions'::__l12::FSortedTickContextGroup,`FTickTaskManager::DumpAllTickFunctions'::__l12::<lambda_1>_>_> @ 1488abef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<_FTickTaskManager::DumpAllTickFunctions_::__l12::FSortedTickContextGroup,int,FIdentityFunctor,TDereferenceWrapper<_FTickTaskManager::DumpAllTickFunctions_::__l12::FSortedTickContextGroup,_FTickTaskManager::DumpAllTickFunctions_::__l12::<lambda_1>_>_>
          (FSortedTickContextGroup *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_private:_virtual_void___cdecl_FTickTaskManager::DumpAllTickFunctions(FOutputDevice_&,UWorld_*,bool,bool,bool)_::_12_::FSortedTickContextGroup,_private:_virtual_void___cdecl_FTickTaskManager::DumpAllTickFunctions(FOutputDevice_&,UWorld_*,bool,bool,bool)_::_12_::<lambda_1>_>
          param_4)

{
  FSortedTickContextGroup *pFVar1;
  FName FVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  FSortedTickContextGroup *pFVar6;
  FSortedTickContextGroup *pFVar7;
  FSortedTickContextGroup *pFVar8;
  FSortedTickContextGroup *pFVar9;
  FSortedTickContextGroup *pFVar10;
  FSortedTickContextGroup *pFVar11;
  FSortedTickContextGroup **ppFVar12;
  float fVar13;
  undefined1 auStack_378 [48];
  FSortedTickContextGroup *local_348;
  FSortedTickContextGroup *local_338;
  FSortedTickContextGroup *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar13 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar13;
    memset(local_320,0,0x2e8);
    ppFVar12 = &local_338;
    do {
      pFVar6 = ppFVar12[1];
      pFVar11 = *ppFVar12;
      pFVar1 = ppFVar12[2];
      local_348._0_4_ = (int)pFVar1;
      iVar5 = (int)(((longlong)pFVar6 - (longlong)pFVar11) / 0xc) + 1;
      pFVar10 = pFVar11;
      if ((int)local_348 != 0) {
LAB_1488abfc0:
        if (8 < iVar5) {
          pFVar8 = pFVar6 + 1;
          iVar5 = iVar5 / 2;
          FVar2 = pFVar10[iVar5].Context;
          iVar3 = pFVar10[iVar5].Count;
          pFVar10[iVar5].Context = pFVar10->Context;
          pFVar10[iVar5].Count = pFVar10->Count;
          pFVar10->Context = FVar2;
          pFVar10->Count = iVar3;
          pFVar11 = pFVar10;
LAB_1488ac006:
          pFVar7 = pFVar11;
          pFVar11 = pFVar7 + 1;
          if (pFVar11 <= pFVar6) goto code_r0x0001488ac00f;
          goto LAB_1488ac020;
        }
        for (; pFVar11 = pFVar10, pFVar1 = pFVar10, pFVar10 < pFVar6; pFVar6 = pFVar6 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar6) {
            if (pFVar1->Count < pFVar11->Count) {
              pFVar11 = pFVar1;
            }
          }
          FVar2 = pFVar11->Context;
          iVar5 = pFVar11->Count;
          pFVar11->Context = pFVar6->Context;
          pFVar11->Count = pFVar6->Count;
          pFVar6->Context = FVar2;
          pFVar6->Count = iVar5;
        }
        goto LAB_1488ac136;
      }
LAB_1488ac127:
      local_348 = pFVar1;
      HeapSortInternal<_FTickTaskManager::DumpAllTickFunctions_::__l12::FSortedTickContextGroup,int,FIdentityFunctor,TDereferenceWrapper<_FTickTaskManager::DumpAllTickFunctions_::__l12::FSortedTickContextGroup,_FTickTaskManager::DumpAllTickFunctions_::__l12::<lambda_1>_>_>
                (pFVar11,iVar5,param_3,param_4);
LAB_1488ac136:
      ppFVar12 = ppFVar12 + -3;
    } while (&local_338 <= ppFVar12);
  }
  return;
code_r0x0001488ac00f:
  if (pFVar10->Count <= pFVar7[1].Count) goto LAB_1488ac006;
LAB_1488ac020:
  do {
    pFVar9 = pFVar8;
    pFVar8 = pFVar9 + -1;
    if (pFVar8 <= pFVar10) break;
  } while (pFVar9[-1].Count <= pFVar10->Count);
  if (pFVar11 <= pFVar8) {
    FVar2 = pFVar11->Context;
    iVar5 = pFVar7[1].Count;
    pFVar11->Context = pFVar8->Context;
    pFVar7[1].Count = pFVar9[-1].Count;
    pFVar8->Context = FVar2;
    pFVar9[-1].Count = iVar5;
    goto LAB_1488ac006;
  }
  iVar5 = pFVar10->Count;
  local_348._0_4_ = (int)local_348 + -1;
  FVar2 = pFVar10->Context;
  pFVar10->Context = pFVar8->Context;
  pFVar10->Count = pFVar9[-1].Count;
  pFVar8->Context = FVar2;
  pFVar9[-1].Count = iVar5;
  lVar4 = (longlong)pFVar8 + (-0xc - (longlong)pFVar10);
  lVar4 = lVar4 / 6 + (lVar4 >> 0x3f);
  if ((lVar4 >> 1) - (lVar4 >> 0x3f) < ((longlong)pFVar6 - (longlong)pFVar11) / 0xc) {
    if (pFVar11 < pFVar6) {
      *ppFVar12 = pFVar11;
      ppFVar12[1] = pFVar6;
      *(int *)(ppFVar12 + 2) = (int)local_348;
      ppFVar12 = ppFVar12 + 3;
    }
    if (pFVar8 <= pFVar10 + 1) goto LAB_1488ac136;
    pFVar6 = pFVar9 + -2;
    pFVar11 = pFVar10;
  }
  else {
    if (pFVar10 + 1 < pFVar8) {
      *ppFVar12 = pFVar10;
      ppFVar12[1] = pFVar9 + -2;
      *(int *)(ppFVar12 + 2) = (int)local_348;
      ppFVar12 = ppFVar12 + 3;
    }
    if (pFVar6 <= pFVar11) goto LAB_1488ac136;
  }
  iVar5 = (int)(((longlong)pFVar6 - (longlong)pFVar11) / 0xc) + 1;
  pFVar10 = pFVar11;
  if ((int)local_348 == 0) goto LAB_1488ac127;
  goto LAB_1488abfc0;
}

// IntroSortInternal<FTickTaskLevel::FTickScheduleDetails,int,FIdentityFunctor,TDereferenceWrapper<FTickTaskLevel::FTickScheduleDetails,`FTickTaskLevel::ScheduleTickFunctionCooldowns'::__l5::<lambda_1>_>_> @ 1488ac1f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
AlgoImpl::
IntroSortInternal<FTickTaskLevel::FTickScheduleDetails,int,FIdentityFunctor,TDereferenceWrapper<FTickTaskLevel::FTickScheduleDetails,_FTickTaskLevel::ScheduleTickFunctionCooldowns_::__l5::<lambda_1>_>_>
          (FTickScheduleDetails *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FTickTaskLevel::FTickScheduleDetails,_public:_void___cdecl_FTickTaskLevel::ScheduleTickFunctionCooldowns(void)_::_5_::<lambda_1>_>
          param_4)

{
  FTickScheduleDetails *pFVar1;
  FTickFunction *pFVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined3 uVar5;
  bool bVar6;
  undefined3 uVar7;
  float fVar8;
  bool bVar9;
  undefined3 uVar10;
  int iVar11;
  FTickScheduleDetails *pFVar12;
  FTickScheduleDetails *pFVar13;
  FTickScheduleDetails *pFVar14;
  FTickScheduleDetails **ppFVar15;
  FTickScheduleDetails *pFVar16;
  FTickScheduleDetails *pFVar17;
  FTickScheduleDetails *pFVar18;
  float fVar19;
  undefined1 auStack_368 [48];
  FTickScheduleDetails *local_338;
  FTickScheduleDetails *local_328;
  FTickScheduleDetails *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar19 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar19;
    memset(local_310,0,0x2e8);
    ppFVar15 = &local_328;
    do {
      pFVar17 = ppFVar15[1];
      pFVar14 = *ppFVar15;
      pFVar1 = ppFVar15[2];
      iVar11 = (int)((longlong)pFVar17 - (longlong)pFVar14 >> 4) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar18 = pFVar14;
      if ((int)local_338 != 0) {
LAB_1488ac2a0:
        if (8 < iVar11) {
          fVar19 = pFVar18->Cooldown;
          bVar6 = pFVar18->bDeferredRemove;
          uVar7 = *(undefined3 *)&pFVar18->field_0xd;
          pFVar12 = pFVar17 + 1;
          pFVar14 = pFVar18 + iVar11 / 2;
          pFVar2 = pFVar14->TickFunction;
          fVar8 = pFVar14->Cooldown;
          bVar9 = pFVar14->bDeferredRemove;
          uVar10 = *(undefined3 *)&pFVar14->field_0xd;
          pFVar14 = pFVar18 + iVar11 / 2;
          pFVar14->TickFunction = pFVar18->TickFunction;
          pFVar14->Cooldown = fVar19;
          pFVar14->bDeferredRemove = bVar6;
          *(undefined3 *)&pFVar14->field_0xd = uVar7;
          pFVar18->TickFunction = pFVar2;
          pFVar18->Cooldown = fVar8;
          pFVar18->bDeferredRemove = bVar9;
          *(undefined3 *)&pFVar18->field_0xd = uVar10;
          pFVar14 = pFVar18;
LAB_1488ac2d0:
          pFVar13 = pFVar14;
          pFVar14 = pFVar13 + 1;
          if (pFVar14 <= pFVar17) goto code_r0x0001488ac2d9;
          goto LAB_1488ac2e5;
        }
        if (pFVar18 < pFVar17) {
          pFVar1 = pFVar18 + 1;
          do {
            pFVar14 = pFVar18;
            if (pFVar1 <= pFVar17) {
              pFVar12 = pFVar1;
              if (0x3f < ((longlong)pFVar17 + (0x10 - (longlong)pFVar1) & 0xfffffffffffffff0U)) {
                do {
                  if (pFVar14->Cooldown < pFVar12->Cooldown) {
                    pFVar14 = pFVar12;
                  }
                  if (pFVar14->Cooldown <= pFVar12[1].Cooldown &&
                      pFVar12[1].Cooldown != pFVar14->Cooldown) {
                    pFVar14 = pFVar12 + 1;
                  }
                  if (pFVar14->Cooldown <= pFVar12[2].Cooldown &&
                      pFVar12[2].Cooldown != pFVar14->Cooldown) {
                    pFVar14 = pFVar12 + 2;
                  }
                  if (pFVar14->Cooldown <= pFVar12[3].Cooldown &&
                      pFVar12[3].Cooldown != pFVar14->Cooldown) {
                    pFVar14 = pFVar12 + 3;
                  }
                  pFVar12 = pFVar12 + 4;
                } while (pFVar12 <= pFVar17 + -3);
              }
              for (; pFVar12 <= pFVar17; pFVar12 = pFVar12 + 1) {
                if (pFVar14->Cooldown < pFVar12->Cooldown) {
                  pFVar14 = pFVar12;
                }
              }
            }
            pFVar2 = pFVar14->TickFunction;
            fVar8 = pFVar14->Cooldown;
            bVar9 = pFVar14->bDeferredRemove;
            uVar10 = *(undefined3 *)&pFVar14->field_0xd;
            pFVar12 = pFVar17 + -1;
            fVar19 = pFVar17->Cooldown;
            bVar6 = pFVar17->bDeferredRemove;
            uVar7 = *(undefined3 *)&pFVar17->field_0xd;
            pFVar14->TickFunction = pFVar17->TickFunction;
            pFVar14->Cooldown = fVar19;
            pFVar14->bDeferredRemove = bVar6;
            *(undefined3 *)&pFVar14->field_0xd = uVar7;
            pFVar17->TickFunction = pFVar2;
            pFVar17->Cooldown = fVar8;
            pFVar17->bDeferredRemove = bVar9;
            *(undefined3 *)&pFVar17->field_0xd = uVar10;
            pFVar17 = pFVar12;
          } while (pFVar18 < pFVar12);
        }
        goto LAB_1488ac3a9;
      }
LAB_1488ac398:
      local_338 = pFVar1;
      HeapSortInternal<FTickTaskLevel::FTickScheduleDetails,int,FIdentityFunctor,TDereferenceWrapper<FTickTaskLevel::FTickScheduleDetails,_FTickTaskLevel::ScheduleTickFunctionCooldowns_::__l5::<lambda_1>_>_>
                (pFVar14,iVar11,param_3,param_4);
LAB_1488ac3a9:
      ppFVar15 = ppFVar15 + -3;
    } while (&local_328 <= ppFVar15);
  }
  return;
code_r0x0001488ac2d9:
  if (pFVar13[1].Cooldown < pFVar18->Cooldown || pFVar13[1].Cooldown == pFVar18->Cooldown)
  goto LAB_1488ac2d0;
LAB_1488ac2e5:
  do {
    pFVar16 = pFVar12;
    pFVar12 = pFVar16 + -1;
    if (pFVar12 <= pFVar18) break;
  } while (pFVar18->Cooldown < pFVar16[-1].Cooldown || pFVar18->Cooldown == pFVar16[-1].Cooldown);
  uVar3 = pFVar16[-1].Cooldown;
  uVar4 = pFVar16[-1].bDeferredRemove;
  uVar5 = *(undefined3 *)&pFVar16[-1].field_0xd;
  if (pFVar14 <= pFVar12) {
    pFVar2 = pFVar14->TickFunction;
    fVar19 = pFVar13[1].Cooldown;
    bVar6 = pFVar13[1].bDeferredRemove;
    uVar7 = *(undefined3 *)&pFVar13[1].field_0xd;
    pFVar14->TickFunction = pFVar12->TickFunction;
    pFVar13[1].Cooldown = (float)uVar3;
    pFVar13[1].bDeferredRemove = (bool)uVar4;
    *(undefined3 *)&pFVar13[1].field_0xd = uVar5;
    pFVar12->TickFunction = pFVar2;
    pFVar16[-1].Cooldown = fVar19;
    pFVar16[-1].bDeferredRemove = bVar6;
    *(undefined3 *)&pFVar16[-1].field_0xd = uVar7;
    goto LAB_1488ac2d0;
  }
  pFVar2 = pFVar18->TickFunction;
  fVar19 = pFVar18->Cooldown;
  bVar6 = pFVar18->bDeferredRemove;
  uVar7 = *(undefined3 *)&pFVar18->field_0xd;
  local_338._0_4_ = (int)local_338 + -1;
  pFVar18->TickFunction = pFVar12->TickFunction;
  pFVar18->Cooldown = (float)uVar3;
  pFVar18->bDeferredRemove = (bool)uVar4;
  *(undefined3 *)&pFVar18->field_0xd = uVar5;
  pFVar12->TickFunction = pFVar2;
  pFVar16[-1].Cooldown = fVar19;
  pFVar16[-1].bDeferredRemove = bVar6;
  *(undefined3 *)&pFVar16[-1].field_0xd = uVar7;
  if ((longlong)((longlong)pFVar12 + (-0x10 - (longlong)pFVar18) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pFVar17 - (longlong)pFVar14 & 0xfffffffffffffff0U)) {
    if (pFVar14 < pFVar17) {
      *ppFVar15 = pFVar14;
      ppFVar15[1] = pFVar17;
      *(int *)(ppFVar15 + 2) = (int)local_338;
      ppFVar15 = ppFVar15 + 3;
    }
    if (pFVar12 <= pFVar18 + 1) goto LAB_1488ac3a9;
    pFVar17 = pFVar16 + -2;
    pFVar14 = pFVar18;
  }
  else {
    if (pFVar18 + 1 < pFVar12) {
      *ppFVar15 = pFVar18;
      ppFVar15[1] = pFVar16 + -2;
      *(int *)(ppFVar15 + 2) = (int)local_338;
      ppFVar15 = ppFVar15 + 3;
    }
    if (pFVar17 <= pFVar14) goto LAB_1488ac3a9;
  }
  iVar11 = (int)((longlong)pFVar17 - (longlong)pFVar14 >> 4) + 1;
  pFVar18 = pFVar14;
  if ((int)local_338 == 0) goto LAB_1488ac398;
  goto LAB_1488ac2a0;
}

// LowerBoundInternal<TTuple<FName,UE::Transaction::FSerializedTaggedData>_const_,int,FName,TSortedMap<FName,UE::Transaction::FSerializedTaggedData,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess> @ 1488ac530

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<FName,UE::Transaction::FSerializedTaggedData>_const_,int,FName,TSortedMap<FName,UE::Transaction::FSerializedTaggedData,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
          (TTuple<FName,UE::Transaction::FSerializedTaggedData> *param_1,int param_2,FName *param_3,
          FKeyForward param_4,FNameFastLess param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      iVar4 = *(int *)(param_1 + iVar1) - (param_3->ComparisonIndex).Value;
      if (iVar4 == 0) {
        iVar4 = *(int *)&param_1[iVar1].field_0x4 - param_3->Number;
      }
      if (iVar4 < 0) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// Sort<TSortableMapBase<FString,FTimerSourceEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTimerSourceEntry,0>_>::FValueComparisonClass<`FTimerSourceList::DumpEntries'::__l2::<lambda_1>_>_> @ 1488ad3e0

void __thiscall
TSet<TTuple<FString,FTimerSourceEntry>,TDefaultMapHashableKeyFuncs<FString,FTimerSourceEntry,0>,FDefaultSetAllocator>
::
Sort<TSortableMapBase<FString,FTimerSourceEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTimerSourceEntry,0>_>::FValueComparisonClass<_FTimerSourceList::DumpEntries_::__l2::<lambda_1>_>_>
          (TSet<TTuple<FString,FTimerSourceEntry>,TDefaultMapHashableKeyFuncs<FString,FTimerSourceEntry,0>,FDefaultSetAllocator>
           *this,FValueComparisonClass<_public:_void___cdecl_FTimerSourceList::DumpEntries(void)_::_2_::<lambda_1>_>
                 *param_1)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FValueComparisonClass<_public:_void___cdecl_FTimerSourceList::DumpEntries(void)_::_2_::<lambda_1>_>
  *local_res8;
  
  local_res8 = param_1;
  if (0 < *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34) {
    TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Compact((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this);
    iVar4 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    pTVar1 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_> **)&this->Elements;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FString,FTimerSourceEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,FTimerSourceEntry>,TDefaultMapHashableKeyFuncs<FString,FTimerSourceEntry,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,FTimerSourceEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTimerSourceEntry,0>_>::FValueComparisonClass<_FTimerSourceList::DumpEntries_::__l2::<lambda_1>_>_>_>_>
              (pTVar1,iVar4,local_res8._0_1_,
               (FElementCompareClass<TSortableMapBase<FString,FTimerSourceEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTimerSourceEntry,0>_>::FValueComparisonClass<_public:_void___cdecl_FTimerSourceList::DumpEntries(void)_::_2_::<lambda_1>_>_>
                *)&local_res8);
  }
  Rehash(this);
  return;
}

// StaticEnum<enum_EAnimInstanceLocatorFragmentType> @ 1488ad470

UEnum * __cdecl StaticEnum<enum_EAnimInstanceLocatorFragmentType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAnimInstanceLocatorFragmentType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EAnimInstanceLocatorFragmentType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EAnimInstanceLocatorFragmentType,(UObject *)pUVar1,
                       L"EAnimInstanceLocatorFragmentType");
  }
  return Z_Registration_Info_UEnum_EAnimInstanceLocatorFragmentType.OuterSingleton;
}

// StaticEnum<enum_ETextureEncodeEffort> @ 1488ad4b0

UEnum * __cdecl StaticEnum<enum_ETextureEncodeEffort>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETextureEncodeEffort.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ETextureEncodeEffort.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ETextureEncodeEffort,(UObject *)pUVar1,
                       L"ETextureEncodeEffort");
  }
  return Z_Registration_Info_UEnum_ETextureEncodeEffort.OuterSingleton;
}

// StaticEnum<enum_ETextureEncodeSpeedOverride> @ 1488ad4f0

UEnum * __cdecl StaticEnum<enum_ETextureEncodeSpeedOverride>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETextureEncodeSpeedOverride.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ETextureEncodeSpeedOverride.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ETextureEncodeSpeedOverride,(UObject *)pUVar1,
                       L"ETextureEncodeSpeedOverride");
  }
  return Z_Registration_Info_UEnum_ETextureEncodeSpeedOverride.OuterSingleton;
}

// StaticEnum<enum_ETextureRenderTargetFormat> @ 1488ad530

UEnum * __cdecl StaticEnum<enum_ETextureRenderTargetFormat>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETextureRenderTargetFormat.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ETextureRenderTargetFormat.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ETextureRenderTargetFormat,(UObject *)pUVar1,
                       L"ETextureRenderTargetFormat");
  }
  return Z_Registration_Info_UEnum_ETextureRenderTargetFormat.OuterSingleton;
}

// StaticEnum<enum_ETextureRenderTargetSampleCount> @ 1488ad570

UEnum * __cdecl StaticEnum<enum_ETextureRenderTargetSampleCount>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETextureRenderTargetSampleCount.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ETextureRenderTargetSampleCount.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ETextureRenderTargetSampleCount,(UObject *)pUVar1,
                       L"ETextureRenderTargetSampleCount");
  }
  return Z_Registration_Info_UEnum_ETextureRenderTargetSampleCount.OuterSingleton;
}

// StaticEnum<enum_ETextureUniversalTiling> @ 1488ad5b0

UEnum * __cdecl StaticEnum<enum_ETextureUniversalTiling>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETextureUniversalTiling.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ETextureUniversalTiling.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ETextureUniversalTiling,(UObject *)pUVar1,
                       L"ETextureUniversalTiling");
  }
  return Z_Registration_Info_UEnum_ETextureUniversalTiling.OuterSingleton;
}

// FThreadSafeStaticStat<`FTickTaskSequencer::FDipatchTickGroupTask::GetStatId'::__l2::FStat_FDipatchTickGroupTask> @ 1488ad5f0

/* WARNING: Enum "Type": Some values do not have unique names */

FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FTickTaskSequencer::FDipatchTickGroupTask::GetStatId(void)_::_2_::FStat_FDipatchTickGroupTask>
* __thiscall
FThreadSafeStaticStat<`FTickTaskSequencer::FDipatchTickGroupTask::GetStatId'::__l2::FStat_FDipatchTickGroupTask>
::
FThreadSafeStaticStat<_FTickTaskSequencer::FDipatchTickGroupTask::GetStatId_::__l2::FStat_FDipatchTickGroupTask>
          (void *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  *(undefined8 *)this = 0;
  if (*(longlong *)this == 0) {
    pFVar1 = ::FName::FName(local_res8,"FDipatchTickGroupTask");
    FThreadSafeStaticStatBase::DoSetup
              (this,*pFVar1,L"FDipatchTickGroupTask","STATGROUP_TaskGraphTasks","STATCAT_Advanced",
               L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return this;
}

// FThreadSafeStaticStat<`FTickTaskSequencer::FResetTickGroupTask::GetStatId'::__l2::FStat_FResetTickGroupTask> @ 1488ad680

/* WARNING: Enum "Type": Some values do not have unique names */

FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FTickTaskSequencer::FResetTickGroupTask::GetStatId(void)_::_2_::FStat_FResetTickGroupTask>
* __thiscall
FThreadSafeStaticStat<`FTickTaskSequencer::FResetTickGroupTask::GetStatId'::__l2::FStat_FResetTickGroupTask>
::
FThreadSafeStaticStat<_FTickTaskSequencer::FResetTickGroupTask::GetStatId_::__l2::FStat_FResetTickGroupTask>
          (void *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  *(undefined8 *)this = 0;
  if (*(longlong *)this == 0) {
    pFVar1 = ::FName::FName(local_res8,"FResetTickGroupTask");
    FThreadSafeStaticStatBase::DoSetup
              (this,*pFVar1,L"FResetTickGroupTask","STATGROUP_TaskGraphTasks","STATCAT_Advanced",
               L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return this;
}

// FThreadSafeStaticStat<`FTickFunctionTask::GetStatId'::__l2::FStat_FTickFunctionTask> @ 1488ad710

/* WARNING: Enum "Type": Some values do not have unique names */

FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FTickFunctionTask::GetStatId(void)_::_2_::FStat_FTickFunctionTask>
* __thiscall
FThreadSafeStaticStat<`FTickFunctionTask::GetStatId'::__l2::FStat_FTickFunctionTask>::
FThreadSafeStaticStat<_FTickFunctionTask::GetStatId_::__l2::FStat_FTickFunctionTask>(void *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  *(undefined8 *)this = 0;
  if (*(longlong *)this == 0) {
    pFVar1 = ::FName::FName(local_res8,"FTickFunctionTask");
    FThreadSafeStaticStatBase::DoSetup
              (this,*pFVar1,L"FTickFunctionTask","STATGROUP_TaskGraphTasks","STATCAT_Advanced",
               L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return this;
}

// ~TFunction_OwnedObject<`FTickTaskSequencer::FTickTaskSequencer'::__l2::<lambda_1>,0,0> @ 1488b1a00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FTickTaskSequencer::FTickTaskSequencer'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FTickTaskSequencer::FTickTaskSequencer_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1___0FTickTaskSequencer__AEAA_XZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`FTextureRenderTargetVolumeResource::ReadFloat16Pixels'::__l2::<lambda_1>,1,1> @ 1488b1a20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FTextureRenderTargetVolumeResource::ReadFloat16Pixels'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FTextureRenderTargetVolumeResource::ReadFloat16Pixels_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FTextureRenderTargetVolumeResource::ReadFloat16Pixels'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FCanvasTriangleRendererItem::Render_GameThread'::__l2::<lambda_1>,0,1> @ 1488b1a40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCanvasTriangleRendererItem::Render_GameThread'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FCanvasTriangleRendererItem::Render_GameThread_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FCanvasTriangleRendererItem::Render_GameThread'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`UTextureRenderTarget2D::UpdateResourceImmediate'::__l5::<lambda_1>,1,0> @ 1488b1a60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTextureRenderTarget2D::UpdateResourceImmediate'::__l5::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UTextureRenderTarget2D::UpdateResourceImmediate_::__l5::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UTextureRenderTarget2D::UpdateResourceImmediate'::`5'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UTextureRenderTarget2DArray::UpdateResourceImmediate'::__l5::<lambda_1>,1,0> @ 1488b1a80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTextureRenderTarget2DArray::UpdateResourceImmediate'::__l5::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_UTextureRenderTarget2DArray::UpdateResourceImmediate_::__l5::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UTextureRenderTarget2DArray::UpdateResourceImmediate'::`5'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UTextureRenderTargetCube::UpdateResourceImmediate'::__l5::<lambda_1>,1,0> @ 1488b1aa0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTextureRenderTargetCube::UpdateResourceImmediate'::__l5::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UTextureRenderTargetCube::UpdateResourceImmediate_::__l5::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UTextureRenderTargetCube::UpdateResourceImmediate'::`5'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UTextureRenderTargetVolume::UpdateResourceImmediate'::__l5::<lambda_1>,1,0> @ 1488b1ac0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTextureRenderTargetVolume::UpdateResourceImmediate'::__l5::<lambda_1>,1,0>::
~TFunction_OwnedObject<_UTextureRenderTargetVolume::UpdateResourceImmediate_::__l5::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UTextureRenderTargetVolume::UpdateResourceImmediate'::`5'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FCanvasTileRendererItem::Render_GameThread'::__l9::<lambda_1>,0,1> @ 1488b1ae0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCanvasTileRendererItem::Render_GameThread'::__l9::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FCanvasTileRendererItem::Render_GameThread_::__l9::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FCanvasTileRendererItem::Render_GameThread'::`9'::<lambda_1>,0,1>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`FTickTaskSequencer::ReleaseTickGroup'::__l45::<lambda_1>,0,1> @ 1488b1b00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FTickTaskSequencer::ReleaseTickGroup'::__l45::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FTickTaskSequencer::ReleaseTickGroup_::__l45::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__CN___ReleaseTickGroup_FTickTaskSequencer__QEAAXW4ETickingGroup___NAEAV__TArray_PEAUFTickFunction__V__TSizedDefaultAllocator__0CA______Z__0A__00_Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UTextureRenderTarget2D::ResizeTarget'::__l11::<lambda_1>,1,1> @ 1488b1b20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTextureRenderTarget2D::ResizeTarget'::__l11::<lambda_1>,1,1>::
~TFunction_OwnedObject<_UTextureRenderTarget2D::ResizeTarget_::__l11::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UTextureRenderTarget2D::ResizeTarget'::`11'::<lambda_1>,1,1>::
        _vftable_;
  return;
}

// operator() @ 1488b4320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall <lambda_25>::operator()(<lambda_25> *this)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  AActor *this_00;
  void *_Src;
  code *pcVar3;
  ulonglong *puVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UClass *pUVar8;
  byte bVar9;
  ForElementType<FSetElementId> FVar10;
  int iVar11;
  ForAnyElementType FVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  uint *puVar20;
  longlong *plVar21;
  undefined8 uVar22;
  ulonglong *puVar23;
  undefined1 auStackY_358 [32];
  undefined1 local_308;
  undefined1 local_307;
  undefined1 local_306;
  undefined1 local_305;
  undefined1 local_304;
  undefined1 local_303;
  undefined1 local_302 [2];
  FString local_300;
  TArray<UObjectBase_const_*,TSizedDefaultAllocator<32>_> local_2f0;
  undefined1 local_2e0 [4];
  uint local_2dc;
  AActor *local_2d8;
  longlong local_2d0;
  ForAnyElementType local_2c8;
  int local_2c0;
  int local_2bc;
  undefined8 local_2b8;
  longlong *local_2b0;
  uint uStack_2a8;
  uint uStack_2a4;
  TBitArray<FDefaultBitArrayAllocator> *local_2a0;
  undefined4 uStack_298;
  uint uStack_294;
  int local_290;
  undefined4 uStack_28c;
  int iStack_288;
  undefined4 uStack_284;
  longlong local_280;
  int local_278;
  longlong *local_270;
  UWorld *local_268;
  AActor **local_260;
  longlong local_258;
  FName local_250;
  FName local_248;
  FName local_240;
  ulonglong *local_238;
  undefined1 local_230 [4];
  FName local_22c;
  undefined1 local_224 [8];
  int local_21c;
  FString local_218;
  int local_208;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  longlong *local_1d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1c8;
  undefined8 uStack_1a8;
  longlong *local_1a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_198;
  undefined8 uStack_178;
  undefined4 local_14c;
  undefined4 local_12c;
  undefined1 local_128 [32];
  uint *local_108;
  uint local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  int local_f4;
  ForElementType<FSetElementId> local_e8;
  int local_e0;
  undefined1 local_d8 [32];
  uint *local_b8;
  uint local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  int local_a4;
  ForElementType<FSetElementId> local_98;
  int local_90;
  TSet<TTuple<AActor_const_*,TArray<UActorComponent_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<AActor_const_*,TArray<UActorComponent_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  local_88;
  ulonglong local_38;
  ulonglong uVar19;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_358;
  uVar19 = 0;
  uVar18 = 0;
  local_fc = 0x80;
  local_128._0_8_ = 0;
  local_128._8_8_ = 0;
  local_108 = (uint *)0x0;
  local_100 = 0;
  local_f4 = 0;
  local_e8 = (ForElementType<FSetElementId>)0x0;
  local_e0 = 0;
  local_88.Elements._0_8_ = 0;
  local_88.Elements._8_8_ = 0;
  local_88.Elements._32_8_ = 0;
  local_88.Elements._40_4_ = 0;
  local_88.Elements._52_4_ = 0;
  local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_88.HashSize = 0;
  local_d8._0_8_ = 0;
  local_d8._8_8_ = 0;
  local_b8 = (uint *)0x0;
  local_b0 = 0;
  local_a4 = 0;
  local_98 = (ForElementType<FSetElementId>)0x0;
  local_90 = 0;
  local_2f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2f0.ArrayNum = 0;
  local_2f0.ArrayMax = 0;
  local_f8 = 0xffffffff;
  local_88.Elements._44_4_ = 0x80;
  local_88.Elements._48_4_ = 0xffffffff;
  local_ac = 0x80;
  local_a8 = 0xffffffff;
  TMapBase<UObjectBase_const_*,FTraceFilterObjectAnnotation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FTraceFilterObjectAnnotation,0>_>
  ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<UObjectBase_const_*,FTraceFilterObjectAnnotation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FTraceFilterObjectAnnotation,0>_>
              *)&GObjectFilterAnnotations.AnnotationMap,&local_2f0);
  iVar11 = local_2f0.ArrayNum;
  pFVar1 = local_2f0.AllocatorInstance.Data + (longlong)local_2f0.ArrayNum * 8;
  FVar12.Data = local_2f0.AllocatorInstance.Data;
  while( true ) {
    if (local_2f0.ArrayNum != iVar11) {
      local_308 = 0;
      `TCheckedPointerIterator<UObjectBase_const_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_308);
    }
    if (FVar12.Data == pFVar1) break;
    lVar2 = *(longlong *)FVar12.Data;
    if (lVar2 == 0) {
LAB_1488b44c1:
      local_280 = 0;
      FVar12.Data = FVar12.Data + 8;
    }
    else {
      pUVar8 = Z_Construct_UClass_UWorld_NoRegister();
      iVar7 = (int)pUVar8->_padding_;
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < iVar7) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar7 * 8)
          != &pUVar8->_padding_)) goto LAB_1488b44c1;
      local_270 = &local_280;
      local_280 = lVar2;
      TSet<TTuple<UWorld_const_*,TArray<AActor_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UWorld_const_*,TArray<AActor_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<UWorld_const_*_const_&>_>
                ((TSet<TTuple<UWorld_const_*,TArray<AActor_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UWorld_const_*,TArray<AActor_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)local_128,(TKeyInitializer<UWorld_const_*_const_&> *)local_230,
                 (bool *)&local_270);
      FVar12.Data = FVar12.Data + 8;
    }
  }
  iVar11 = local_2f0.ArrayNum;
  pFVar1 = local_2f0.AllocatorInstance.Data + (longlong)local_2f0.ArrayNum * 8;
  FVar12.Data = local_2f0.AllocatorInstance.Data;
  while( true ) {
    if (local_2f0.ArrayNum != iVar11) {
      local_307 = 0;
      `TCheckedPointerIterator<UObjectBase_const_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_307);
    }
    if (FVar12.Data == pFVar1) break;
    this_00 = *(AActor **)FVar12.Data;
    if (this_00 == (AActor *)0x0) {
LAB_1488b4676:
      local_2d8 = (AActor *)0x0;
      FVar12.Data = FVar12.Data + 8;
    }
    else {
      pUVar8 = Z_Construct_UClass_AActor_NoRegister();
      iVar7 = (int)pUVar8->_padding_;
      if ((*(int *)(this_00->_padding_ + 0x38) < iVar7) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar7 * 8) !=
          &pUVar8->_padding_)) goto LAB_1488b4676;
      local_2d8 = this_00;
      local_268 = AActor::GetWorld(this_00);
      uVar6 = ((uint)((ulonglong)local_268 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_268 >> 4)) *
              -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      iVar7 = TSet<TTuple<UWorld_const_*,TArray<AActor_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UWorld_const_*,TArray<AActor_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<UWorld_const_*>
                        ((TSet<TTuple<UWorld_const_*,TArray<AActor_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UWorld_const_*,TArray<AActor_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                          *)local_128,uVar6 >> 0x10 ^ uVar6,&local_268);
      uVar13 = uVar19;
      if (((iVar7 == -1) || (uVar13 = (longlong)iVar7 * 0x20 + local_128._0_8_, uVar13 == 0)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x288,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (((*(AActor ***)(uVar13 + 8) <= &local_2d8) &&
          (&local_2d8 < *(AActor ***)(uVar13 + 8) + *(int *)(uVar13 + 0x14))) &&
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
      iVar7 = *(int *)(uVar13 + 0x10);
      if (iVar7 == *(int *)(uVar13 + 0x14)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)(uVar13 + 8),(int *)(uVar13 + 0x14));
      }
      *(int *)(uVar13 + 0x10) = iVar7 + 1;
      *(AActor **)(*(longlong *)(uVar13 + 8) + (longlong)iVar7 * 8) = local_2d8;
      local_260 = &local_2d8;
      TSet<TTuple<AActor_const_*,TArray<UActorComponent_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<AActor_const_*,TArray<UActorComponent_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<AActor_const_*_const_&>_>
                (&local_88,(TKeyInitializer<AActor_const_*_const_&> *)local_224,(bool *)&local_260);
      FVar12.Data = FVar12.Data + 8;
    }
  }
  iVar11 = local_2f0.ArrayNum;
  pFVar1 = local_2f0.AllocatorInstance.Data + (longlong)local_2f0.ArrayNum * 8;
  FVar12.Data = local_2f0.AllocatorInstance.Data;
  while( true ) {
    if (local_2f0.ArrayNum != iVar11) {
      local_306 = 0;
      `TCheckedPointerIterator<UObjectBase_const_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_306);
    }
    if (FVar12.Data == pFVar1) break;
    lVar2 = *(longlong *)FVar12.Data;
    if (lVar2 == 0) {
LAB_1488b4861:
      local_2d0 = 0;
      FVar12.Data = FVar12.Data + 8;
    }
    else {
      pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
      iVar7 = (int)pUVar8->_padding_;
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < iVar7) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar7 * 8)
          != &pUVar8->_padding_)) goto LAB_1488b4861;
      uVar13 = *(ulonglong *)(lVar2 + 0xa8);
      uVar6 = ((uint)(uVar13 >> 0x14) & 0xffff ^ (uint)(uVar13 >> 4)) * -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      uVar14 = uVar19;
      local_2d0 = lVar2;
      if (local_88.Elements._8_4_ != local_88.Elements._52_4_) {
        FVar10 = (ForElementType<FSetElementId>)&local_88.Hash;
        if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar10 = local_88.Hash.SecondaryData;
        }
        for (iVar7 = *(int *)((longlong)FVar10 +
                             (ulonglong)(local_88.HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
            iVar7 != -1; iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + local_88.Elements._0_8_))
        {
          if (*(ulonglong *)((longlong)iVar7 * 0x20 + local_88.Elements._0_8_) == uVar13) {
            if ((iVar7 != -1) &&
               (uVar14 = (longlong)iVar7 * 0x20 + local_88.Elements._0_8_, uVar14 != 0))
            goto LAB_1488b47a1;
            break;
          }
        }
      }
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
LAB_1488b47a1:
      if (((*(longlong **)(uVar14 + 8) <= &local_2d0) &&
          (&local_2d0 < *(longlong **)(uVar14 + 8) + *(int *)(uVar14 + 0x14))) &&
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
      iVar7 = *(int *)(uVar14 + 0x10);
      if (iVar7 == *(int *)(uVar14 + 0x14)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)(uVar14 + 8),(int *)(uVar14 + 0x14));
      }
      *(int *)(uVar14 + 0x10) = iVar7 + 1;
      FVar12.Data = FVar12.Data + 8;
      *(longlong *)(*(longlong *)(uVar14 + 8) + (longlong)iVar7 * 8) = local_2d0;
    }
  }
  iVar11 = local_2f0.ArrayNum;
  pFVar1 = local_2f0.AllocatorInstance.Data + (longlong)local_2f0.ArrayNum * 8;
  FVar12.Data = local_2f0.AllocatorInstance.Data;
  while( true ) {
    if (local_2f0.ArrayNum != iVar11) {
      local_305 = 0;
      `TCheckedPointerIterator<UObjectBase_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_305);
    }
    uVar6 = local_100;
    if (FVar12.Data == pFVar1) break;
    lVar2 = *(longlong *)FVar12.Data;
    if (lVar2 == 0) {
LAB_1488b4915:
      local_258 = *(longlong *)FVar12.Data;
      TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,FDefaultSetAllocator>::
      Emplace<UObject_const_*>
                ((TSet<UObject_const_*,DefaultKeyFuncs<UObject_const_*,0>,FDefaultSetAllocator> *)
                 local_d8,(UObject **)(local_224 + 4),(bool *)&local_258);
    }
    else {
      pUVar8 = Z_Construct_UClass_UWorld_NoRegister();
      iVar7 = (int)pUVar8->_padding_;
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < iVar7) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar7 * 8)
          != &pUVar8->_padding_)) {
        if (lVar2 == 0) goto LAB_1488b4915;
        pUVar8 = Z_Construct_UClass_AActor_NoRegister();
        iVar7 = (int)pUVar8->_padding_;
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < iVar7) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar7 * 8) !=
            &pUVar8->_padding_)) {
          pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
          iVar7 = (int)pUVar8->_padding_;
          if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < iVar7) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar7 * 8) !=
              &pUVar8->_padding_)) goto LAB_1488b4915;
        }
      }
    }
    FVar12.Data = FVar12.Data + 8;
  }
  local_300.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_290 = 0;
  local_300.Data.ArrayNum = 0;
  local_300.Data.ArrayMax = 0;
  uVar22 = 1;
  local_2b8 = 1;
  uStack_2a4 = 1;
  uStack_294 = 0;
  if (local_100 != 0) {
    puVar20 = (uint *)(local_128 + 0x10);
    if (local_108 != (uint *)0x0) {
      puVar20 = local_108;
    }
    uStack_2a4 = *puVar20;
    uVar18 = 0;
    while (uStack_2a4 == 0) {
      uVar18 = (int)uVar19 + 1;
      uVar19 = (ulonglong)uVar18;
      local_290 = local_290 + 0x20;
      uStack_2a4 = 1;
      uStack_294 = local_100;
      if ((int)((local_100 - 1) + ((int)(local_100 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar18)
      goto LAB_1488b49cf;
      uStack_2a4 = puVar20[(int)uVar18];
    }
    uStack_2a4 = -uStack_2a4 & uStack_2a4;
    uVar19 = (ulonglong)uStack_2a4 * 2 + 1;
    lVar2 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    local_21c = (int)lVar2;
    uStack_294 = local_21c + -1 + local_290;
    if ((int)local_100 < (int)uStack_294) {
      uStack_294 = local_100;
    }
  }
LAB_1488b49cf:
  local_2b0 = (longlong *)local_128;
  uStack_28c = local_14c;
  local_2a0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10);
  uVar16 = local_100 & 0xffffffe0;
  iStack_288 = local_128._8_4_ - local_f4;
  uStack_298 = 0xffffffff;
  TStack_1c8.CurrentBitIndex = uStack_294;
  TStack_1c8.UnvisitedBitMask = 0xffffffff;
  TStack_1c8._padding_ = CONCAT44(uStack_2a4,uVar18);
  iVar11 = (int)local_100 >> 5;
  TStack_1c8._28_4_ = local_14c;
  TStack_1c8.BaseBitIndex = local_290;
  uStack_1a8 = CONCAT44(uStack_284,iStack_288);
  bVar9 = (byte)local_100;
  local_2dc = local_100;
  uStack_2a8 = uVar18;
  local_1d0 = local_2b0;
  TStack_1c8.Array = local_2a0;
  if (((int)local_100 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (uVar6 != local_100) {
    puVar20 = (uint *)(local_128 + 0x10);
    if (local_108 != (uint *)0x0) {
      puVar20 = local_108;
    }
    uVar18 = -1 << (bVar9 & 0x1f) & puVar20[iVar11];
    while (uVar18 == 0) {
      iVar11 = iVar11 + 1;
      uVar16 = uVar16 + 0x20;
      if ((int)(((int)(local_100 - 1) >> 0x1f & 0x1fU) + (local_100 - 1)) >> 5 < iVar11) {
        local_2dc = local_100;
        uVar6 = local_100;
        goto LAB_1488b4af3;
      }
      uVar18 = puVar20[iVar11];
    }
    uVar19 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    local_208 = (int)lVar2;
    uVar6 = local_208 + -1 + uVar16;
    local_2dc = uVar6;
    if ((int)local_100 < (int)uVar6) {
      uVar6 = local_100;
      local_2dc = local_100;
    }
  }
LAB_1488b4af3:
  while( true ) {
    plVar21 = local_1d0;
    uVar18 = (uint)uVar22;
    if ((int)local_1d0[1] - *(int *)((longlong)local_1d0 + 0x34) != (int)uStack_1a8) {
      local_304 = 0;
      `TSparseArray<TSparseSetElement<TTuple<UWorld_const_*,TArray<AActor_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_304);
    }
    uVar16 = local_b0;
    if (((TStack_1c8.CurrentBitIndex == uVar6) &&
        (TStack_1c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10))) &&
       (plVar21 == (longlong *)local_128)) break;
    plVar21 = (longlong *)((longlong)TStack_1c8.CurrentBitIndex * 0x20 + *plVar21);
    ::FString::AppendChars(&local_300,L"\n",uVar18);
    local_250 = *(FName *)(*plVar21 + 0x18);
    ::FName::ToString(&local_250,&local_218);
    if (local_218.Data.ArrayNum == 0) {
      iVar11 = 0;
    }
    else {
      iVar11 = local_218.Data.ArrayNum + -1;
    }
    ::FString::AppendChars(&local_300,(wchar_t *)local_218.Data.AllocatorInstance.Data,iVar11);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    ::FString::AppendChars(&local_300,L" [UWorld]\n",10);
    puVar23 = (ulonglong *)plVar21[1];
    lVar2 = plVar21[2];
    local_238 = puVar23 + (int)lVar2;
    while( true ) {
      puVar4 = local_238;
      if ((int)plVar21[2] != (int)lVar2) {
        local_303 = 0;
        `TCheckedPointerIterator<AActor_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_303);
      }
      if (puVar23 == puVar4) break;
      uVar19 = *puVar23;
      ::FString::AppendChars(&local_300,L"\t- ",3);
      local_248 = *(FName *)(uVar19 + 0x18);
      ::FName::ToString(&local_248,&local_1e0);
      if (local_1e0.Data.ArrayNum == 0) {
        iVar11 = 0;
      }
      else {
        iVar11 = local_1e0.Data.ArrayNum + -1;
      }
      ::FString::AppendChars(&local_300,(wchar_t *)local_1e0.Data.AllocatorInstance.Data,iVar11);
      if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
      }
      ::FString::AppendChars(&local_300,L" [Actor]\n",9);
      uVar18 = ((uint)(uVar19 >> 0x14) & 0xffff ^ (uint)(uVar19 >> 4)) * -0x7a143595;
      uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
      if (local_88.Elements._8_4_ != local_88.Elements._52_4_) {
        FVar10 = (ForElementType<FSetElementId>)&local_88.Hash;
        if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar10 = local_88.Hash.SecondaryData;
        }
        for (iVar11 = *(int *)((longlong)FVar10 +
                              (ulonglong)(local_88.HashSize - 1U & (uVar18 >> 0x10 ^ uVar18)) * 4);
            iVar11 != -1;
            iVar11 = *(int *)((longlong)iVar11 * 0x20 + 0x18 + local_88.Elements._0_8_)) {
          if (*(ulonglong *)((longlong)iVar11 * 0x20 + local_88.Elements._0_8_) == uVar19) {
            if (iVar11 != -1) {
              lVar17 = (longlong)iVar11 * 0x20 + local_88.Elements._0_8_;
              if (lVar17 != 0) goto LAB_1488b4d2e;
              goto LAB_1488b4d08;
            }
            break;
          }
        }
      }
      lVar17 = 0;
LAB_1488b4d08:
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
LAB_1488b4d2e:
      local_2c8.Data = (FScriptContainerElement *)0x0;
      local_2c0 = *(int *)(lVar17 + 0x10);
      lVar15 = (longlong)local_2c0;
      _Src = *(void **)(lVar17 + 8);
      if (local_2c0 == 0) {
        local_2bc = 0;
        iVar11 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,local_2c0,0,&local_2c8,local_2c0,&local_2bc);
        memcpy(local_2c8.Data,_Src,lVar15 << 3);
        iVar11 = local_2c0;
      }
      pFVar1 = local_2c8.Data + (longlong)iVar11 * 8;
      FVar12.Data = local_2c8.Data;
      iVar7 = iVar11;
      while( true ) {
        if (iVar7 != iVar11) {
          local_302[0] = 0;
          `TCheckedPointerIterator<UActorComponent_const_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_302);
        }
        if (FVar12.Data == pFVar1) break;
        lVar17 = *(longlong *)FVar12.Data;
        ::FString::AppendChars(&local_300,L"\t\t* ",4);
        local_240 = *(FName *)(lVar17 + 0x18);
        ::FName::ToString(&local_240,&local_200);
        if (local_200.Data.ArrayNum == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = local_200.Data.ArrayNum + -1;
        }
        ::FString::AppendChars(&local_300,(wchar_t *)local_200.Data.AllocatorInstance.Data,iVar7);
        if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_200.Data.AllocatorInstance.Data);
        }
        ::FString::AppendChars(&local_300,L" [Component]\n",0xd);
        FVar12.Data = FVar12.Data + 8;
        iVar7 = local_2c0;
      }
      if (local_2c8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2c8.Data);
      }
      puVar23 = puVar23 + 1;
    }
    ::FString::AppendChars
              (&local_300,L"----------------------------------------------------\n",0x35);
    TStack_1c8.UnvisitedBitMask = TStack_1c8.UnvisitedBitMask & ~TStack_1c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1c8);
    uVar22 = local_2b8;
    uVar6 = local_2dc;
  }
  uStack_2a8 = 0;
  local_290 = 0;
  uStack_294 = 0;
  if (local_b0 != 0) {
    puVar20 = (uint *)(local_d8 + 0x10);
    if (local_b8 != (uint *)0x0) {
      puVar20 = local_b8;
    }
    uVar6 = *puVar20;
    while (uVar6 == 0) {
      uStack_2a8 = uStack_2a8 + 1;
      local_290 = local_290 + 0x20;
      uStack_294 = local_b0;
      if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_2a8)
      goto LAB_1488b4f10;
      uVar6 = puVar20[(int)uStack_2a8];
    }
    uVar18 = -uVar6 & uVar6;
    uVar19 = (ulonglong)uVar18 * 2 + 1;
    lVar2 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    local_278 = (int)lVar2;
    uStack_294 = local_290 + -1 + local_278;
    if ((int)local_b0 < (int)uStack_294) {
      uStack_294 = local_b0;
    }
  }
LAB_1488b4f10:
  local_2b0 = (longlong *)local_d8;
  uStack_28c = local_12c;
  local_2a0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10);
  iStack_288 = local_d8._8_4_ - local_a4;
  uVar6 = local_b0 & 0xffffffe0;
  uStack_298 = 0xffffffff;
  TStack_198.CurrentBitIndex = uStack_294;
  TStack_198.UnvisitedBitMask = 0xffffffff;
  TStack_198._padding_ = CONCAT44(uVar18,uStack_2a8);
  iVar11 = (int)local_b0 >> 5;
  TStack_198._28_4_ = local_12c;
  TStack_198.BaseBitIndex = local_290;
  uStack_178 = CONCAT44(uStack_284,iStack_288);
  bVar9 = (byte)local_b0;
  uStack_2a4 = uVar18;
  local_1a0 = local_2b0;
  TStack_198.Array = local_2a0;
  if (((int)local_b0 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (uVar16 != local_b0) {
    puVar20 = (uint *)(local_d8 + 0x10);
    if (local_b8 != (uint *)0x0) {
      puVar20 = local_b8;
    }
    uVar18 = -1 << (bVar9 & 0x1f) & puVar20[iVar11];
    while (uVar18 == 0) {
      iVar11 = iVar11 + 1;
      uVar6 = uVar6 + 0x20;
      uVar16 = local_b0;
      if ((int)(((int)(local_b0 - 1) >> 0x1f & 0x1fU) + (local_b0 - 1)) >> 5 < iVar11)
      goto LAB_1488b5030;
      uVar18 = puVar20[iVar11];
    }
    uVar19 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar16 = (uVar6 - 1) + (int)lVar2;
    if ((int)local_b0 < (int)uVar16) {
      uVar16 = local_b0;
    }
  }
LAB_1488b5030:
  while( true ) {
    plVar21 = local_1a0;
    if ((int)local_1a0[1] - *(int *)((longlong)local_1a0 + 0x34) != (int)uStack_178) {
      `TSparseArray<TSparseSetElement<UObject_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_2e0);
    }
    if (((TStack_198.CurrentBitIndex == uVar16) &&
        (TStack_198.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10))) &&
       (plVar21 == (longlong *)local_d8)) break;
    local_22c = *(FName *)(*(longlong *)(*plVar21 + (longlong)TStack_198.CurrentBitIndex * 0x10) +
                          0x18);
    ::FName::ToString(&local_22c,&local_1f0);
    if (local_1f0.Data.ArrayNum == 0) {
      iVar11 = 0;
    }
    else {
      iVar11 = local_1f0.Data.ArrayNum + -1;
    }
    ::FString::AppendChars(&local_300,(wchar_t *)local_1f0.Data.AllocatorInstance.Data,iVar11);
    if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
    }
    ::FString::AppendChars(&local_300,L" [Object]\n",10);
    TStack_198.UnvisitedBitMask = TStack_198.UnvisitedBitMask & ~TStack_198._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_198);
  }
  if (3 < (byte)TraceFiltering._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&TraceFiltering);
  }
  if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_300.Data.AllocatorInstance.Data);
  }
  if (local_2f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f0.AllocatorInstance.Data);
  }
  local_90 = 0;
  if (local_98 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98);
  }
  TSparseArray<TSparseSetElement<UObject_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UObject_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<UObject_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_d8);
  local_88.HashSize = 0;
  if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<AActor_const_*,TArray<UActorComponent_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<AActor_const_*,TArray<UActorComponent_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_88.Elements);
  local_e0 = 0;
  if (local_e8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_e8);
  }
  TSparseArray<TSparseSetElement<TTuple<UWorld_const_*,TArray<AActor_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UWorld_const_*,TArray<AActor_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UWorld_const_*,TArray<AActor_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_128);
  return;
}

// `vector_deleting_destructor'`adjustor{96}' @ 1488b52e0

/* [thunk]:public: virtual void * __ptr64 __cdecl FTextureRenderTarget2DArrayResource::`vector
   deleting destructor'`adjustor{96}' (unsigned int) __ptr64 */

void * __thiscall
FTextureRenderTarget2DArrayResource::_vector_deleting_destructor__adjustor_96__
          (FTextureRenderTarget2DArrayResource *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FTextureRenderTarget2DArrayResource *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{96}' @ 1488b52f0

/* [thunk]:public: virtual void * __ptr64 __cdecl FTextureRenderTarget2DResource::`vector deleting
   destructor'`adjustor{96}' (unsigned int) __ptr64 */

void * __thiscall
FTextureRenderTarget2DResource::_vector_deleting_destructor__adjustor_96__
          (FTextureRenderTarget2DResource *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FTextureRenderTarget2DResource *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{96}' @ 1488b5300

/* [thunk]:public: virtual void * __ptr64 __cdecl FTextureRenderTargetCubeResource::`vector deleting
   destructor'`adjustor{96}' (unsigned int) __ptr64 */

void * __thiscall
FTextureRenderTargetCubeResource::_vector_deleting_destructor__adjustor_96__
          (FTextureRenderTargetCubeResource *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FTextureRenderTargetCubeResource *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{96}' @ 1488b5310

/* [thunk]:public: virtual void * __ptr64 __cdecl FTextureRenderTargetVolumeResource::`vector
   deleting destructor'`adjustor{96}' (unsigned int) __ptr64 */

void * __thiscall
FTextureRenderTargetVolumeResource::_vector_deleting_destructor__adjustor_96__
          (FTextureRenderTargetVolumeResource *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FTextureRenderTargetVolumeResource *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{224}' @ 1488b5320

/* [thunk]:public: virtual void * __ptr64 __cdecl UTextureLightProfile::`vector deleting
   destructor'`adjustor{224}' (unsigned int) __ptr64 */

void * __thiscall
UTextureLightProfile::_vector_deleting_destructor__adjustor_224__
          (UTextureLightProfile *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UTextureLightProfile *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{232}' @ 1488b5334

/* [thunk]:public: virtual void * __ptr64 __cdecl UTextureLightProfile::`vector deleting
   destructor'`adjustor{232}' (unsigned int) __ptr64 */

void * __thiscall
UTextureLightProfile::_vector_deleting_destructor__adjustor_232__
          (UTextureLightProfile *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UTextureLightProfile *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{224}' @ 1488b5348

/* [thunk]:public: virtual void * __ptr64 __cdecl UTextureRenderTarget2D::`vector deleting
   destructor'`adjustor{224}' (unsigned int) __ptr64 */

void * __thiscall
UTextureRenderTarget2D::_vector_deleting_destructor__adjustor_224__
          (UTextureRenderTarget2D *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UTextureRenderTarget2D *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{232}' @ 1488b535c

/* [thunk]:public: virtual void * __ptr64 __cdecl UTextureRenderTarget2D::`vector deleting
   destructor'`adjustor{232}' (unsigned int) __ptr64 */

void * __thiscall
UTextureRenderTarget2D::_vector_deleting_destructor__adjustor_232__
          (UTextureRenderTarget2D *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UTextureRenderTarget2D *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{224}' @ 1488b5370

/* [thunk]:public: virtual void * __ptr64 __cdecl UTextureRenderTarget2DArray::`vector deleting
   destructor'`adjustor{224}' (unsigned int) __ptr64 */

void * __thiscall
UTextureRenderTarget2DArray::_vector_deleting_destructor__adjustor_224__
          (UTextureRenderTarget2DArray *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UTextureRenderTarget2DArray *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{232}' @ 1488b5384

/* [thunk]:public: virtual void * __ptr64 __cdecl UTextureRenderTarget2DArray::`vector deleting
   destructor'`adjustor{232}' (unsigned int) __ptr64 */

void * __thiscall
UTextureRenderTarget2DArray::_vector_deleting_destructor__adjustor_232__
          (UTextureRenderTarget2DArray *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UTextureRenderTarget2DArray *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{224}' @ 1488b5398

/* [thunk]:public: virtual void * __ptr64 __cdecl UTextureRenderTarget::`vector deleting
   destructor'`adjustor{224}' (unsigned int) __ptr64 */

void * __thiscall
UTextureRenderTarget::_vector_deleting_destructor__adjustor_224__
          (UTextureRenderTarget *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UTextureRenderTarget *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{232}' @ 1488b53ac

/* [thunk]:public: virtual void * __ptr64 __cdecl UTextureRenderTarget::`vector deleting
   destructor'`adjustor{232}' (unsigned int) __ptr64 */

void * __thiscall
UTextureRenderTarget::_vector_deleting_destructor__adjustor_232__
          (UTextureRenderTarget *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UTextureRenderTarget *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{224}' @ 1488b53c0

/* [thunk]:public: virtual void * __ptr64 __cdecl UTextureRenderTargetCube::`vector deleting
   destructor'`adjustor{224}' (unsigned int) __ptr64 */

void * __thiscall
UTextureRenderTargetCube::_vector_deleting_destructor__adjustor_224__
          (UTextureRenderTargetCube *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UTextureRenderTargetCube *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{232}' @ 1488b53d4

/* [thunk]:public: virtual void * __ptr64 __cdecl UTextureRenderTargetCube::`vector deleting
   destructor'`adjustor{232}' (unsigned int) __ptr64 */

void * __thiscall
UTextureRenderTargetCube::_vector_deleting_destructor__adjustor_232__
          (UTextureRenderTargetCube *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UTextureRenderTargetCube *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{224}' @ 1488b53e8

/* [thunk]:public: virtual void * __ptr64 __cdecl UTextureRenderTargetVolume::`vector deleting
   destructor'`adjustor{224}' (unsigned int) __ptr64 */

void * __thiscall
UTextureRenderTargetVolume::_vector_deleting_destructor__adjustor_224__
          (UTextureRenderTargetVolume *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UTextureRenderTargetVolume *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{232}' @ 1488b53fc

/* [thunk]:public: virtual void * __ptr64 __cdecl UTextureRenderTargetVolume::`vector deleting
   destructor'`adjustor{232}' (unsigned int) __ptr64 */

void * __thiscall
UTextureRenderTargetVolume::_vector_deleting_destructor__adjustor_232__
          (UTextureRenderTargetVolume *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UTextureRenderTargetVolume *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 1488b5410

void * __thiscall
TBaseRawMethodDelegateInstance<0,FDummy,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FDummy,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b5440

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
TBaseStaticDelegateInstance<void___cdecl(AActor_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(AActor_*),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b5470

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b54a0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,int_*>::
_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,int_*>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b54d0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,int_*>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,int_*>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b5500

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FTickTaskSequencer::FTickTaskSequencer'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1___0FTickTaskSequencer__AEAA_XZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b5540

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FTextureRenderTargetVolumeResource::ReadFloat16Pixels'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FTextureRenderTargetVolumeResource::ReadFloat16Pixels'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b5580

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCanvasTriangleRendererItem::Render_GameThread'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FCanvasTriangleRendererItem::Render_GameThread'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b55d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTextureRenderTarget2D::UpdateResourceImmediate'::__l5::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UTextureRenderTarget2D::UpdateResourceImmediate'::`5'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b5610

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTextureRenderTarget2DArray::UpdateResourceImmediate'::__l5::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UTextureRenderTarget2DArray::UpdateResourceImmediate'::`5'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b5650

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTextureRenderTargetCube::UpdateResourceImmediate'::__l5::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UTextureRenderTargetCube::UpdateResourceImmediate'::`5'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b5690

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTextureRenderTargetVolume::UpdateResourceImmediate'::__l5::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UTextureRenderTargetVolume::UpdateResourceImmediate'::`5'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b56d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCanvasTileRendererItem::Render_GameThread'::__l9::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FCanvasTileRendererItem::Render_GameThread'::`9'::<lambda_1>,0,1>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b5720

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FTickTaskSequencer::ReleaseTickGroup'::__l45::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__CN___ReleaseTickGroup_FTickTaskSequencer__QEAAXW4ETickingGroup___NAEAV__TArray_PEAUFTickFunction__V__TSizedDefaultAllocator__0CA______Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b5760

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTextureRenderTarget2D::ResizeTarget'::__l11::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UTextureRenderTarget2D::ResizeTarget'::`11'::<lambda_1>,1,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b57a0

void * __thiscall
TGraphTask<FBatchTickFunctionTask>::_scalar_deleting_destructor_
          (TGraphTask<FBatchTickFunctionTask> *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0xf8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b5800

void * __thiscall
TGraphTask<FTickTaskSequencer::FDipatchTickGroupTask>::_scalar_deleting_destructor_
          (TGraphTask<FTickTaskSequencer::FDipatchTickGroupTask> *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b5860

void * __thiscall
TGraphTask<FTickTaskSequencer::FResetTickGroupTask>::_scalar_deleting_destructor_
          (TGraphTask<FTickTaskSequencer::FResetTickGroupTask> *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b58c0

void * __thiscall
TGraphTask<FTickFunctionTask>::_scalar_deleting_destructor_
          (TGraphTask<FTickFunctionTask> *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0xf8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b5920

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
FRDGAllocator::TObject<FSceneView_const_>::_scalar_deleting_destructor_
          (TObject<FSceneView_const_> *this,uint param_1)

{
  FSceneView::~FSceneView(&this->Alloc);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1c40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b5960

void * __thiscall
FRDGAllocator::TObject<FSceneViewFamily_const_>::_scalar_deleting_destructor_
          (TObject<FSceneViewFamily_const_> *this,uint param_1)

{
  FSceneViewFamily::~FSceneViewFamily(&this->Alloc);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b59a0

void * __thiscall
FRDGAllocator::TObject<`FCanvasRenderContext::DeferredDelete<FSceneView>'::__l2::FDeleter>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)((longlong)this + 8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b59f0

void * __thiscall
FRDGAllocator::TObject<`FCanvasRenderContext::DeferredDelete<FSceneViewFamily>'::__l2::FDeleter>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)((longlong)this + 8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b5a40

/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void * __thiscall
FRDGAllocator::TObject<FMeshBatch>::_scalar_deleting_destructor_
          (TObject<FMeshBatch> *this,uint param_1)

{
  ForElementType<FMeshBatchElement> FVar1;
  
  FVar1 = (this->Alloc).Elements.AllocatorInstance.SecondaryData;
  if (FVar1 == (ForElementType<FMeshBatchElement>)0x0) {
    FVar1 = (ForElementType<FMeshBatchElement>)&this->Alloc;
  }
  DestructItems<FMeshBatchElement,int>((FMeshBatchElement *)FVar1,(this->Alloc).Elements.ArrayNum);
  FVar1 = (this->Alloc).Elements.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FMeshBatchElement>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b5ab0

void * __thiscall
FRDGAllocator::TObject<TSharedPtr<FCanvasTileRendererItem::FRenderData,1>_>::
_scalar_deleting_destructor_
          (TObject<TSharedPtr<FCanvasTileRendererItem::FRenderData,1>_> *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Alloc).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b5af0

void * __thiscall
FRDGAllocator::TObject<TSharedPtr<FCanvasTriangleRendererItem::FRenderData,1>_>::
_scalar_deleting_destructor_
          (TObject<TSharedPtr<FCanvasTriangleRendererItem::FRenderData,1>_> *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Alloc).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b5b30

void * __thiscall
FRDGAllocator::TObject<FSceneViewFamily>::_scalar_deleting_destructor_
          (TObject<FSceneViewFamily> *this,uint param_1)

{
  FSceneViewFamily::~FSceneViewFamily(&this->Alloc);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b5b70

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FTraceControlBookmark,FTraceService>::_scalar_deleting_destructor_
          (TRawMessageHandler<FTraceControlBookmark,FTraceService> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b5bb0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FTraceControlChannelsPing,FTraceService>::_scalar_deleting_destructor_
          (TRawMessageHandler<FTraceControlChannelsPing,FTraceService> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b5bf0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FTraceControlChannelsSet,FTraceService>::_scalar_deleting_destructor_
          (TRawMessageHandler<FTraceControlChannelsSet,FTraceService> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b5c30

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FTraceControlDiscoveryPing,FTraceService>::_scalar_deleting_destructor_
          (TRawMessageHandler<FTraceControlDiscoveryPing,FTraceService> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b5c70

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FTraceControlFile,FTraceService>::_scalar_deleting_destructor_
          (TRawMessageHandler<FTraceControlFile,FTraceService> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b5cb0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FTraceControlPause,FTraceService>::_scalar_deleting_destructor_
          (TRawMessageHandler<FTraceControlPause,FTraceService> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b5cf0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FTraceControlResume,FTraceService>::_scalar_deleting_destructor_
          (TRawMessageHandler<FTraceControlResume,FTraceService> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b5d30

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FTraceControlScreenshot,FTraceService>::_scalar_deleting_destructor_
          (TRawMessageHandler<FTraceControlScreenshot,FTraceService> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b5d70

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FTraceControlSend,FTraceService>::_scalar_deleting_destructor_
          (TRawMessageHandler<FTraceControlSend,FTraceService> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b5db0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FTraceControlSetStatNamedEvents,FTraceService>::_scalar_deleting_destructor_
          (TRawMessageHandler<FTraceControlSetStatNamedEvents,FTraceService> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b5df0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FTraceControlSettingsPing,FTraceService>::_scalar_deleting_destructor_
          (TRawMessageHandler<FTraceControlSettingsPing,FTraceService> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b5e30

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FTraceControlSnapshotFile,FTraceService>::_scalar_deleting_destructor_
          (TRawMessageHandler<FTraceControlSnapshotFile,FTraceService> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b5e70

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FTraceControlSnapshotSend,FTraceService>::_scalar_deleting_destructor_
          (TRawMessageHandler<FTraceControlSnapshotSend,FTraceService> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b5eb0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FTraceControlStatusPing,FTraceService>::_scalar_deleting_destructor_
          (TRawMessageHandler<FTraceControlStatusPing,FTraceService> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b5ef0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FTraceControlStop,FTraceService>::_scalar_deleting_destructor_
          (TRawMessageHandler<FTraceControlStop,FTraceService> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b5f30

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlBookmark,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlBookmark,FTraceService>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlBookmark,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlBookmark,FTraceService>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b5f70

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlChannelsPing,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlChannelsPing,FTraceService>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlChannelsPing,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlChannelsPing,FTraceService>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b5fb0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlChannelsSet,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlChannelsSet,FTraceService>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlChannelsSet,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlChannelsSet,FTraceService>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b5ff0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlDiscoveryPing,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlDiscoveryPing,FTraceService>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlDiscoveryPing,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlDiscoveryPing,FTraceService>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b6030

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlFile,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlFile,FTraceService>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlFile,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlFile,FTraceService>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b6070

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlPause,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlPause,FTraceService>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlPause,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlPause,FTraceService>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b60b0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlResume,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlResume,FTraceService>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlResume,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlResume,FTraceService>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b60f0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlScreenshot,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlScreenshot,FTraceService>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlScreenshot,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlScreenshot,FTraceService>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b6130

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlSend,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlSend,FTraceService>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlSend,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlSend,FTraceService>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b6170

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlSetStatNamedEvents,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlSetStatNamedEvents,FTraceService>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlSetStatNamedEvents,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlSetStatNamedEvents,FTraceService>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b61b0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlSettingsPing,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlSettingsPing,FTraceService>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlSettingsPing,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlSettingsPing,FTraceService>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b61f0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlSnapshotFile,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlSnapshotFile,FTraceService>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlSnapshotFile,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlSnapshotFile,FTraceService>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b6230

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlSnapshotSend,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlSnapshotSend,FTraceService>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlSnapshotSend,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlSnapshotSend,FTraceService>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b6270

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlStatusPing,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlStatusPing,FTraceService>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlStatusPing,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlStatusPing,FTraceService>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b62b0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlStop,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlStop,FTraceService>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlStop,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlStop,FTraceService>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b62f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall ATriggerBase::_scalar_deleting_destructor_(ATriggerBase *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ATriggerBase__6B_;
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b6350

void * __thiscall ATriggerVolume::_scalar_deleting_destructor_(ATriggerVolume *this,uint param_1)

{
  *(undefined ***)this = &___7ATriggerVolume__6B_;
  AVolume::~AVolume((AVolume *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b63b0

void * __thiscall
UE::Transaction::FDiffableObjectDataWriter::_scalar_deleting_destructor_
          (FDiffableObjectDataWriter *this,uint param_1)

{
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b63f0

void * __thiscall
UE::Transaction::FSerializedObjectDataReader::_scalar_deleting_destructor_
          (FSerializedObjectDataReader *this,uint param_1)

{
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b6430

void * __thiscall
UE::Transaction::FSerializedObjectDataWriter::_scalar_deleting_destructor_
          (FSerializedObjectDataWriter *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->NameMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->NameMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NameMap);
  *(undefined4 *)&(this->ObjectMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ObjectMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObject_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ObjectMap);
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b64d0

void * __thiscall
UE::Transaction::Internal::FSerializedObjectDataWriterCommon::_scalar_deleting_destructor_
          (FSerializedObjectDataWriterCommon *this,uint param_1)

{
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b6510

void * __thiscall
FTextureRenderTarget2DArrayResource::_scalar_deleting_destructor_
          (FTextureRenderTarget2DArrayResource *this,uint param_1)

{
  FRHIUnorderedAccessView *this_00;
  FRHITexture *pFVar1;
  
  this_00 = (this->UnorderedAccessViewRHI).Reference;
  if (this_00 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  pFVar1 = (this->Texture2DArrayRHI).Reference;
  if (pFVar1 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->RenderTarget2DArrayRHI).Reference;
  if (pFVar1 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  FRenderTarget::~FRenderTarget((FRenderTarget *)&this->_padding_);
  this->_padding_ = (longlong)&___7FTextureResource__6B_;
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  FTexture::~FTexture((FTexture *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b65b0

void * __thiscall
FTextureRenderTarget2DResource::_scalar_deleting_destructor_
          (FTextureRenderTarget2DResource *this,uint param_1)

{
  IPooledRenderTarget *pIVar1;
  FRHIUnorderedAccessView *this_00;
  FRHITexture *this_01;
  
  this->_padding_ = (longlong)&_vftable__for__FTextureResource__;
  this->_padding_ = (longlong)&_vftable__for__FRenderTarget__;
  this->_padding_ = (longlong)&_vftable__for__FDeferredUpdateResource__;
  pIVar1 = (this->MipGenerationCache).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  this_00 = (this->UnorderedAccessViewRHI).Reference;
  if (this_00 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->Texture2DRHI).Reference;
  if (this_01 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)this_01);
  }
  FRenderTarget::~FRenderTarget((FRenderTarget *)&this->_padding_);
  this->_padding_ = (longlong)&___7FTextureResource__6B_;
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  FTexture::~FTexture((FTexture *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b6670

void * __thiscall
FTextureRenderTargetCubeResource::_scalar_deleting_destructor_
          (FTextureRenderTargetCubeResource *this,uint param_1)

{
  FRHIUnorderedAccessView *this_00;
  FRHITexture *pFVar1;
  
  this_00 = (this->UnorderedAccessViewRHI).Reference;
  if (this_00 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  pFVar1 = (this->RenderTargetCubeRHI).Reference;
  if (pFVar1 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->CubeFaceSurfaceRHI).Reference;
  if (pFVar1 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->TextureCubeRHI).Reference;
  if (pFVar1 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  FRenderTarget::~FRenderTarget((FRenderTarget *)&this->_padding_);
  this->_padding_ = (longlong)&___7FTextureResource__6B_;
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  FTexture::~FTexture((FTexture *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b6720

void * __thiscall
FTextureRenderTargetVolumeResource::_scalar_deleting_destructor_
          (FTextureRenderTargetVolumeResource *this,uint param_1)

{
  FRHIUnorderedAccessView *this_00;
  FRHITexture *pFVar1;
  
  this_00 = (this->UnorderedAccessViewRHI).Reference;
  if (this_00 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  pFVar1 = (this->TextureVolumeRHI).Reference;
  if (pFVar1 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->RenderTargetVolumeRHI).Reference;
  if (pFVar1 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  FRenderTarget::~FRenderTarget((FRenderTarget *)&this->_padding_);
  this->_padding_ = (longlong)&___7FTextureResource__6B_;
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  FTexture::~FTexture((FTexture *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b67c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall FTickFunction::_scalar_deleting_destructor_(FTickFunction *this,uint param_1)

{
  ~FTickFunction(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b6800

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
FTickTaskManager::_scalar_deleting_destructor_(FTickTaskManager *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->AllTickFunctions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LevelList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FTickTaskManagerInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b6860

void * __thiscall
FTickTaskManagerInterface::_scalar_deleting_destructor_
          (FTickTaskManagerInterface *this,uint param_1)

{
  *this = (FTickTaskManagerInterface)&___7FTickTaskManagerInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b68a0

void * __thiscall
FTickableGameObject::_scalar_deleting_destructor_(FTickableGameObject *this,uint param_1)

{
  FTickableStatics *this_00;
  
  *this = (FTickableGameObject)&___7FTickableGameObject__6B_;
  this_00 = GetStatics();
  FTickableObjectBase::FTickableStatics::SetTickTypeForTickableObject
            (this_00,(FTickableObjectBase *)this,Never);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b6900

void * __thiscall
FCanvasTileRendererItem::FTileVertexFactory::_scalar_deleting_destructor_
          (FTileVertexFactory *this,uint param_1)

{
  FLocalVertexFactory::~FLocalVertexFactory((FLocalVertexFactory *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x238);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b6940

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall FTimerManager::_scalar_deleting_destructor_(FTimerManager *this,uint param_1)

{
  FTimerSourceList *this_00;
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  FScriptContainerElement *pFVar3;
  
  this->_padding_ = (longlong)&___7FTimerManager__6B_;
  this_00 = (this->TimerSourceList).Ptr;
  if (this_00 != (FTimerSourceList *)0x0) {
    FTimerSourceList::DumpEntries(this_00);
    *(undefined4 *)&(this_00->Entries).field_0x48 = 0;
    pvVar1 = *(void **)&(this_00->Entries).field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FTimerSourceEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FTimerSourceEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,FTimerSourceEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)this_00);
    ::operator_delete(this_00,0x58);
  }
  *(undefined4 *)&(this->ObjectToTimers).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ObjectToTimers).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<void_const_*,TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<void_const_*,TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<void_const_*,TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ObjectToTimers);
  (this->PendingTimerSet).HashSize = 0;
  FVar2 = (this->PendingTimerSet).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FTimerHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FTimerHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PendingTimerSet).Elements);
  (this->PausedTimerSet).HashSize = 0;
  FVar2 = (this->PausedTimerSet).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FTimerHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FTimerHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PausedTimerSet).Elements);
  pFVar3 = (this->ActiveTimerHeap).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  TSparseArray<FTimerData,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FTimerData,FDefaultSparseArrayAllocator>(&this->Timers);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x168);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b6a50

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall FTraceService::_scalar_deleting_destructor_(FTraceService *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FTraceService__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MessageEndpoint).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b6aa0

void * __thiscall
FCanvasTriangleRendererItem::FTriangleVertexFactory::_scalar_deleting_destructor_
          (FTriangleVertexFactory *this,uint param_1)

{
  FLocalVertexFactory::~FLocalVertexFactory((FLocalVertexFactory *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x238);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b6ae0

void * __thiscall
UTextureLODSettings::_scalar_deleting_destructor_(UTextureLODSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UTextureLODSettings__6B_;
  pFVar1 = (this->TextureLODGroups).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b6b50

void * __thiscall
UTextureLightProfile::_scalar_deleting_destructor_(UTextureLightProfile *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  UTexture2D::~UTexture2D((UTexture2D *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x178);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b6bd0

void * __thiscall
UTextureRenderTarget2D::_scalar_deleting_destructor_(UTextureRenderTarget2D *this,uint param_1)

{
  this->_padding_ = (longlong)&UTextureRenderTarget::_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&UTextureRenderTarget::_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&UTextureRenderTarget::_vftable__for__IInterface_AsyncCompilation__;
  UTexture::~UTexture((UTexture *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x180);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b6c50

void * __thiscall
UTextureRenderTarget2DArray::_scalar_deleting_destructor_
          (UTextureRenderTarget2DArray *this,uint param_1)

{
  this->_padding_ = (longlong)&UTextureRenderTarget::_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&UTextureRenderTarget::_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&UTextureRenderTarget::_vftable__for__IInterface_AsyncCompilation__;
  UTexture::~UTexture((UTexture *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x178);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b6cd0

void * __thiscall
UTextureRenderTarget::_scalar_deleting_destructor_(UTextureRenderTarget *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  UTexture::~UTexture((UTexture *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x158);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b6d50

void * __thiscall
UTextureRenderTargetCube::_scalar_deleting_destructor_(UTextureRenderTargetCube *this,uint param_1)

{
  this->_padding_ = (longlong)&UTextureRenderTarget::_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&UTextureRenderTarget::_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&UTextureRenderTarget::_vftable__for__IInterface_AsyncCompilation__;
  UTexture::~UTexture((UTexture *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x178);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b6dd0

void * __thiscall
UTextureRenderTargetVolume::_scalar_deleting_destructor_
          (UTextureRenderTargetVolume *this,uint param_1)

{
  this->_padding_ = (longlong)&UTextureRenderTarget::_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&UTextureRenderTarget::_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&UTextureRenderTarget::_vftable__for__IInterface_AsyncCompilation__;
  UTexture::~UTexture((UTexture *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x178);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b6e50

void * __thiscall
UTimelineTemplate::_scalar_deleting_destructor_(UTimelineTemplate *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UTimelineTemplate__6B_;
  DestructItems<FBPVariableMetaDataEntry,int>
            ((FBPVariableMetaDataEntry *)(this->MetaDataArray).AllocatorInstance.Data,
             (this->MetaDataArray).ArrayNum);
  pFVar1 = (this->MetaDataArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LinearColorTracks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VectorTracks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FloatTracks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EventTracks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1488b6f10

void * __thiscall
UUniversalObjectLocatorScriptingExtensions::_scalar_deleting_destructor_
          (UUniversalObjectLocatorScriptingExtensions *this,uint param_1)

{
  *(undefined ***)this = &___7UUniversalObjectLocatorScriptingExtensions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// AddIndirectTestTickFunctions @ 1488b79a0

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
AddIndirectTestTickFunctions(TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  ULevel *pUVar5;
  FTickFunction *pFVar6;
  longlong lVar7;
  longlong lVar8;
  FTickFunction *local_38;
  FTickFunction *local_30;
  ForAnyElementType local_28;
  int local_20;
  int iStack_1c;
  
  RemoveTestTickFunctions(param_1);
  pUVar5 = UWorld::GetCurrentLevel(param_2);
  if (3 < (byte)LogConsoleResponse._0_1_) {
    UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
  }
  local_28.Data = (FScriptContainerElement *)0x0;
  lVar8 = 10000;
  local_20 = 0;
  iStack_1c = 0;
  do {
    lVar7 = 8;
    do {
      pFVar6 = operator_new(0x28);
      local_38 = (FTickFunction *)0x0;
      if (pFVar6 != (FTickFunction *)0x0) {
        pFVar6->field_0xb = pFVar6->field_0xb & 0xf4;
        pFVar6->field_0xb = pFVar6->field_0xb | 4;
        pFVar6->TickGroup = '\0';
        pFVar6->EndTickGroup = '\0';
        (pFVar6->Prerequisites).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar6->Prerequisites).ArrayNum = 0;
        (pFVar6->Prerequisites).ArrayMax = 0;
        (pFVar6->InternalData).Ptr = (FInternalData *)0x0;
        puVar2 = &pFVar6->field_0xa;
        pFVar6->bTickEvenWhenPaused = '\x01';
        pFVar6->bRunTransactionally = '\0';
        pFVar6->bRunOnAnyThread = '\0';
        pFVar6->bHighPriority = '\0';
        pFVar6->bAllowTickBatching = '\0';
        pFVar6->bAllowTickOnDedicatedServer = '\x01';
        pFVar6->bStartWithTickEnabled = '\0';
        pFVar6->bCanEverTick = '\0';
        pFVar6->TickInterval = 0.0;
        pFVar6->_padding_ = (longlong)&___7FTestTickFunction__6B_;
        local_38 = pFVar6;
      }
      if (((local_28.Data <= (FScriptContainerElement *)&local_38) &&
          ((FScriptContainerElement *)&local_38 < local_28.Data + (longlong)iStack_1c * 8)) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (local_20 == iStack_1c) {
        local_20 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_28,&iStack_1c);
      }
      iVar1 = local_20 + 1;
      *(FTickFunction **)(local_28.Data + (longlong)local_20 * 8) = local_38;
      lVar7 = lVar7 + -1;
      local_20 = iVar1;
    } while (lVar7 != 0);
    pFVar6 = operator_new(0x28);
    local_30 = (FTickFunction *)0x0;
    if (pFVar6 != (FTickFunction *)0x0) {
      pFVar6->field_0xb = pFVar6->field_0xb & 0xf4;
      pFVar6->field_0xb = pFVar6->field_0xb | 4;
      (pFVar6->EndTickGroup).Value = '\0';
      (pFVar6->Prerequisites).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar6->Prerequisites).ArrayNum = 0;
      (pFVar6->Prerequisites).ArrayMax = 0;
      (pFVar6->InternalData).Ptr = (FInternalData *)0x0;
      puVar2 = &pFVar6->field_0xa;
      pFVar6->bTickEvenWhenPaused = '\x01';
      pFVar6->bRunTransactionally = '\0';
      pFVar6->bRunOnAnyThread = '\0';
      pFVar6->bHighPriority = '\0';
      pFVar6->bAllowTickBatching = '\0';
      pFVar6->bAllowTickOnDedicatedServer = '\x01';
      pFVar6->bStartWithTickEnabled = '\0';
      pFVar6->bCanEverTick = '\0';
      pFVar6->TickInterval = 0.0;
      pFVar6->_padding_ = (longlong)&___7FTestTickFunction__6B_;
      (pFVar6->TickGroup).Value = '\0';
      local_30 = pFVar6;
    }
    FTickFunction::RegisterTickFunction(local_30,pUVar5);
    if (((IndirectTestTickFunctions.AllocatorInstance.Data <= (FScriptContainerElement *)&local_30)
        && ((FScriptContainerElement *)&local_30 <
            IndirectTestTickFunctions.AllocatorInstance.Data +
            (longlong)IndirectTestTickFunctions.ArrayMax * 8)) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (IndirectTestTickFunctions.ArrayNum == IndirectTestTickFunctions.ArrayMax) {
      IndirectTestTickFunctions.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&IndirectTestTickFunctions.AllocatorInstance,
                      &IndirectTestTickFunctions.ArrayMax);
    }
    lVar7 = (longlong)IndirectTestTickFunctions.ArrayNum;
    IndirectTestTickFunctions.ArrayNum = IndirectTestTickFunctions.ArrayNum + 1;
    *(FTickFunction **)(IndirectTestTickFunctions.AllocatorInstance.Data + lVar7 * 8) = local_30;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  if ((local_20 < 1) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar6 = *(FTickFunction **)local_28.Data;
  if (pFVar6 != (FTickFunction *)0x0) {
    (**(code **)pFVar6->_padding_)(pFVar6,1);
  }
  if ((local_20 < 2) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar6 = *(FTickFunction **)(local_28.Data + 8);
  if (pFVar6 != (FTickFunction *)0x0) {
    (**(code **)pFVar6->_padding_)(pFVar6,1);
  }
  if ((local_20 < 3) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar6 = *(FTickFunction **)(local_28.Data + 0x10);
  if (pFVar6 != (FTickFunction *)0x0) {
    (**(code **)pFVar6->_padding_)(pFVar6,1);
  }
  if ((local_20 < 4) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar6 = *(FTickFunction **)(local_28.Data + 0x18);
  if (pFVar6 != (FTickFunction *)0x0) {
    (**(code **)pFVar6->_padding_)(pFVar6,1);
  }
  if ((local_20 < 5) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar6 = *(FTickFunction **)(local_28.Data + 0x20);
  if (pFVar6 != (FTickFunction *)0x0) {
    (**(code **)pFVar6->_padding_)(pFVar6,1);
  }
  if ((local_20 < 6) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar6 = *(FTickFunction **)(local_28.Data + 0x28);
  if (pFVar6 != (FTickFunction *)0x0) {
    (**(code **)pFVar6->_padding_)(pFVar6,1);
  }
  if ((local_20 < 7) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar6 = *(FTickFunction **)(local_28.Data + 0x30);
  if (pFVar6 != (FTickFunction *)0x0) {
    (**(code **)pFVar6->_padding_)(pFVar6,1);
  }
  if ((local_20 < 8) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar6 = *(FTickFunction **)(local_28.Data + 0x38);
  if (pFVar6 != (FTickFunction *)0x0) {
    (**(code **)pFVar6->_padding_)(pFVar6,1);
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

// AddTestTickFunctions @ 1488b8fd0

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
AddTestTickFunctions(TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2)

{
  FTickFunction *this;
  ULevel *pUVar1;
  longlong lVar2;
  
  RemoveTestTickFunctions(param_1);
  pUVar1 = UWorld::GetCurrentLevel(param_2);
  if (3 < (byte)LogConsoleResponse._0_1_) {
    UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
  }
  lVar2 = 10000;
  if (TestTickFunctions.ArrayMax < 10000) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,10000,&TestTickFunctions.AllocatorInstance,TestTickFunctions.ArrayNum,
               &TestTickFunctions.ArrayMax);
  }
  do {
    if (TestTickFunctions.ArrayNum == TestTickFunctions.ArrayMax) {
      TestTickFunctions.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x828,&TestTickFunctions.AllocatorInstance,&TestTickFunctions.ArrayMax);
    }
    this = (FTickFunction *)
           (TestTickFunctions.AllocatorInstance.Data + (longlong)TestTickFunctions.ArrayNum * 0x28);
    TestTickFunctions.ArrayNum = TestTickFunctions.ArrayNum + 1;
    DefaultConstructItems<FTestTickFunction,int>(this,1);
    FTickFunction::RegisterTickFunction(this,pUVar1);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

// DescribeFTimerDataSafely @ 1488bb9b0

void __cdecl
`anonymous_namespace'::DescribeFTimerDataSafely(FOutputDevice *param_1,FTimerData *param_2)

{
  FString local_18;
  
  FTimerUnifiedDelegate::ToString(&param_2->TimerDelegate,&local_18);
  FOutputDevice::LogfImpl
            (param_1,
             L"TimerData %p : bLoop=%s, bRequiresDelegate=%s, Status=%d, Rate=%f, ExpireTime=%f, Delegate=%s"
            );
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// EmptyLinkFunctionForGeneratedCodeActorLocatorFragment @ 1488be080

void __cdecl EmptyLinkFunctionForGeneratedCodeActorLocatorFragment(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAnimInstanceLocatorFragment @ 1488be090

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimInstanceLocatorFragment(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAssetLocatorFragment @ 1488be0a0

void __cdecl EmptyLinkFunctionForGeneratedCodeAssetLocatorFragment(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTextureEncodingSettings @ 1488be0b0

void __cdecl EmptyLinkFunctionForGeneratedCodeTextureEncodingSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTextureLODSettings @ 1488be0c0

void __cdecl EmptyLinkFunctionForGeneratedCodeTextureLODSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTextureLightProfile @ 1488be0d0

void __cdecl EmptyLinkFunctionForGeneratedCodeTextureLightProfile(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTextureRenderTarget2D @ 1488be0e0

void __cdecl EmptyLinkFunctionForGeneratedCodeTextureRenderTarget2D(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTextureRenderTarget2DArray @ 1488be0f0

void __cdecl EmptyLinkFunctionForGeneratedCodeTextureRenderTarget2DArray(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTextureRenderTarget @ 1488be100

void __cdecl EmptyLinkFunctionForGeneratedCodeTextureRenderTarget(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTextureRenderTargetCube @ 1488be110

void __cdecl EmptyLinkFunctionForGeneratedCodeTextureRenderTargetCube(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTextureRenderTargetVolume @ 1488be120

void __cdecl EmptyLinkFunctionForGeneratedCodeTextureRenderTargetVolume(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTimelineTemplate @ 1488be130

void __cdecl EmptyLinkFunctionForGeneratedCodeTimelineTemplate(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTriggerBase @ 1488be140

void __cdecl EmptyLinkFunctionForGeneratedCodeTriggerBase(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTriggerVolume @ 1488be150

void __cdecl EmptyLinkFunctionForGeneratedCodeTriggerVolume(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeUniversalObjectLocatorScriptingExtensions @ 1488be160

void __cdecl EmptyLinkFunctionForGeneratedCodeUniversalObjectLocatorScriptingExtensions(void)

{
  return;
}

// GetFTimerDataSafely @ 1488c2ec0

FString * __cdecl
`anonymous_namespace'::GetFTimerDataSafely(FString *__return_storage_ptr__,FTimerData *param_1)

{
  int iVar1;
  FString local_38;
  FOutputDevice local_28;
  FString local_18;
  
  ::FString::FString(&local_18,L"");
  FOutputDevice::FOutputDevice(&local_28);
  local_28.bAutoEmitLineTerminator = false;
  local_28._padding_ = (longlong)&___7FStringOutputDevice__6B_;
  FTimerUnifiedDelegate::ToString(&param_1->TimerDelegate,&local_38);
  FOutputDevice::LogfImpl
            (&local_28,
             L"TimerData %p : bLoop=%s, bRequiresDelegate=%s, Status=%d, Rate=%f, ExpireTime=%f, Delegate=%s"
            );
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->Data).ArrayNum = local_18.Data.ArrayNum;
  iVar1 = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayMax = iVar1;
  FOutputDevice::~FOutputDevice(&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetLevelFromContext @ 1488c33a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULevel * __cdecl GetLevelFromContext(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  ULevel *pUVar3;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_ULevel_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      return (ULevel *)param_1;
    }
  }
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_ULevel_NoRegister();
    pUVar3 = (ULevel *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar2);
    return pUVar3;
  }
  return (ULevel *)0x0;
}

// GetTypeHash @ 1488c6d50

uint __cdecl GetTypeHash(FActorLocatorFragment *param_1)

{
  int iVar1;
  FName FVar2;
  FName FVar3;
  uint uVar4;
  uint uVar5;
  
  FVar2 = (param_1->Path).AssetPath.AssetName;
  uVar4 = GetTypeHash(FVar2.ComparisonIndex.Value);
  FVar3 = (param_1->Path).AssetPath.PackageName;
  uVar5 = GetTypeHash(FVar3.ComparisonIndex.Value);
  uVar5 = uVar5 + FVar3.Number;
  iVar1 = (param_1->Path).SubPathString.Data.ArrayNum;
  uVar5 = uVar5 * 0x40 + uVar4 + FVar2.Number + (uVar5 >> 2) + 0x9e3779b9 ^ uVar5;
  if (1 < iVar1) {
    uVar4 = FCrc::Strihash_DEPRECATED<char8_t>
                      (iVar1 + -1,(uchar *)(param_1->Path).SubPathString.Data.AllocatorInstance.Data
                      );
    return uVar4 + 0x9e3779b9 + uVar5 * 0x40 + (uVar5 >> 2) ^ uVar5;
  }
  return uVar5;
}

// OnListTimers @ 1488cfd30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl OnListTimers(UWorld *param_1)

{
  FTimerManager *this;
  
  if (param_1 != (UWorld *)0x0) {
    this = UWorld::GetTimerManager(param_1);
    FTimerManager::ListTimers(this);
    return;
  }
  return;
}

// RemoveTestTickFunctions @ 1488d7c50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl RemoveTestTickFunctions(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  if ((TestTickFunctions.ArrayNum != 0) || (IndirectTestTickFunctions.ArrayNum != 0)) {
    if (3 < (byte)LogConsoleResponse._0_1_) {
      UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
    }
    DestructItems<FTestTickFunction,int>
              ((FTestTickFunction *)TestTickFunctions.AllocatorInstance.Data,
               TestTickFunctions.ArrayNum);
    uVar7 = 0;
    TestTickFunctions.ArrayNum = 0;
    if (TestTickFunctions.ArrayMax != 10000) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,10000,&TestTickFunctions.AllocatorInstance,0,&TestTickFunctions.ArrayMax);
    }
    uVar8 = uVar7;
    iVar5 = IndirectTestTickFunctions.ArrayNum;
    if (0 < IndirectTestTickFunctions.ArrayNum) {
      do {
        uVar6 = (uint)uVar7;
        uVar4 = 0;
        if ((int)uVar6 < iVar5) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , iVar5 = IndirectTestTickFunctions.ArrayNum, bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        puVar1 = *(undefined8 **)(IndirectTestTickFunctions.AllocatorInstance.Data + uVar8);
        if (puVar1 != (undefined8 *)0x0) {
          (**(code **)*puVar1)(puVar1,1);
          iVar5 = IndirectTestTickFunctions.ArrayNum;
        }
        uVar7 = (ulonglong)(uVar6 + 1);
        uVar8 = uVar8 + 8;
      } while ((int)(uVar6 + 1) < iVar5);
    }
    IndirectTestTickFunctions.ArrayNum = 0;
    if (IndirectTestTickFunctions.ArrayMax != 10000) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,10000,&IndirectTestTickFunctions.AllocatorInstance,0,
                 &IndirectTestTickFunctions.ArrayMax);
    }
  }
  return;
}

// ResolveActorWithinLevel @ 1488db9e0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl ResolveActorWithinLevel(FActorLocatorFragment *param_1,ULevel *param_2)

{
  int iVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  ULevelStreaming *pUVar5;
  UWorld *this;
  UObject *pUVar6;
  UClass *pUVar7;
  FName *pFVar8;
  FString *pFVar9;
  FName FVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  UObject *local_res18;
  undefined1 local_res20 [8];
  FString local_38;
  FString local_28;
  
  pUVar5 = ULevelStreaming::FindStreamingLevel(param_2);
  if (pUVar5 != (ULevelStreaming *)0x0) {
    if (*(longlong *)&(param_2->WorldPartitionRuntimeCell).SoftObjectPtr.field_0x8 == 0) {
      pUVar7 = Z_Construct_UClass_UWorld_NoRegister();
      this = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_2,pUVar7);
    }
    else {
      this = (UWorld *)(**(code **)(pUVar5->_padding_ + 0x308))(pUVar5);
      if ((this == (UWorld *)0x0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("StreamingWorld",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UniversalObjectLocators\\ActorLocatorFragment.cpp"
                             ,0x30,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        pUVar6 = (UObject *)(*pcVar2)();
        return pUVar6;
      }
      pUVar5 = ULevelStreaming::FindStreamingLevel((this->PersistentLevel).field0_0x0.DebugPtr);
      if (pUVar5 == (ULevelStreaming *)0x0) {
        return (UObject *)0x0;
      }
    }
    if (this != (UWorld *)0x0) {
      FVar10 = pUVar5->PackageNameToLoad;
      if (FVar10 == (FName)0x0) {
        pFVar8 = (FName *)(**(code **)(pUVar5->_padding_ + 0x2e0))(pUVar5,local_res20);
        FVar10 = *pFVar8;
      }
      if ((param_1->Path).AssetPath.PackageName == FVar10) {
        iVar1 = (param_1->Path).SubPathString.Data.ArrayNum;
        pFVar12 = (FScriptContainerElement *)0x0;
        local_res18 = (UObject *)0x0;
        iVar11 = 0;
        iVar13 = iVar1 + -1;
        if (iVar1 == 0) {
          iVar13 = iVar11;
        }
        pFVar9 = FString::ConstructFromPtrSize
                           (&local_38,
                            (uchar *)(param_1->Path).SubPathString.Data.AllocatorInstance.Data,
                            iVar13);
        if (&local_28 != pFVar9) {
          pFVar12 = (pFVar9->Data).AllocatorInstance.Data;
          (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          iVar11 = (pFVar9->Data).ArrayNum;
          (pFVar9->Data).ArrayNum = 0;
          (pFVar9->Data).ArrayMax = 0;
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        pFVar3 = pFVar12;
        if (iVar11 == 0) {
          pFVar3 = (FScriptContainerElement *)L"";
        }
        UWorld::ResolveSubobject(this,(wchar_t *)pFVar3,&local_res18,false);
        if (pFVar12 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar12);
          return local_res18;
        }
        return local_res18;
      }
    }
  }
  return (UObject *)0x0;
}

// SanitizePropertyName @ 1488dcde0

void __cdecl `anonymous_namespace'::SanitizePropertyName(FString *param_1)

{
  ushort uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  
  iVar7 = 0;
  lVar8 = 0;
  while( true ) {
    iVar2 = (param_1->Data).ArrayNum;
    iVar6 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar6 = 0;
    }
    if (iVar6 <= iVar7) break;
    if (iVar7 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x107,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar3 = (param_1->Data).AllocatorInstance.Data;
    uVar1 = *(ushort *)(pFVar3 + lVar8);
    if ((((uVar1 < 0x41) || (0x5a < uVar1)) && (0x19 < (ushort)(uVar1 - 0x61))) &&
       ((uVar1 != 0x5f && ((iVar7 < 1 || (9 < (ushort)(uVar1 - 0x30))))))) {
      *(undefined2 *)(pFVar3 + lVar8) = 0x5f;
    }
    iVar7 = iVar7 + 1;
    lVar8 = lVar8 + 2;
  }
  return;
}

// TimerManagerTest_InvalidTimers @ 1488e4230

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl TimerManagerTest_InvalidTimers(UWorld *param_1,FAutomationTestBase *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FTimerManager *this;
  ForAnyElementType FVar4;
  float fVar5;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  this = UWorld::GetTimerManager(param_1);
  bVar2 = IsInGameThread();
  if ((!bVar2) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TimerManager.cpp"
                         ,0x21e,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  FString::PrintfImpl(&local_b8,L"TimerExists called with an invalid handle");
  FString::PrintfImpl(&local_c8,L"%s - %d: %s");
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_c8.Data.ArrayNum != 0) {
    FVar4.Data = local_c8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestFalse(param_2,(wchar_t *)FVar4.Data,false);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  bVar2 = IsInGameThread();
  if ((!bVar2) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TimerManager.cpp"
                         ,0x21e,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  FString::PrintfImpl(&local_98,L"IsTimerActive called with an invalid handle");
  FString::PrintfImpl(&local_a8,L"%s - %d: %s");
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_a8.Data.ArrayNum != 0) {
    FVar4.Data = local_a8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestFalse(param_2,(wchar_t *)FVar4.Data,false);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  bVar2 = IsInGameThread();
  if ((!bVar2) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TimerManager.cpp"
                         ,0x21e,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  FString::PrintfImpl(&local_78,L"IsTimerPaused called with an invalid handle");
  FString::PrintfImpl(&local_88,L"%s - %d: %s");
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_88.Data.ArrayNum != 0) {
    FVar4.Data = local_88.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestFalse(param_2,(wchar_t *)FVar4.Data,false);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  bVar2 = IsInGameThread();
  if ((!bVar2) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TimerManager.cpp"
                         ,0x21e,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  FString::PrintfImpl(&local_58,L"GetTimerRate called with an invalid handle");
  FString::PrintfImpl(&local_68,L"%s - %d: %s");
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar4.Data = local_68.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(param_2,(wchar_t *)FVar4.Data,true);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  fVar5 = FTimerManager::GetTimerElapsed(this,(FTimerHandle)0x0);
  bVar2 = fVar5 == __real_bf800000;
  FString::PrintfImpl(&local_38,L"GetTimerElapsed called with an invalid handle");
  FString::PrintfImpl(&local_48,L"%s - %d: %s");
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar4.Data = local_48.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(param_2,(wchar_t *)FVar4.Data,bVar2);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  fVar5 = FTimerManager::GetTimerRemaining(this,(FTimerHandle)0x0);
  bVar2 = fVar5 == __real_bf800000;
  FString::PrintfImpl(&local_18,L"GetTimerRemaining called with an invalid handle");
  FString::PrintfImpl(&local_28,L"%s - %d: %s");
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar4.Data = local_28.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(param_2,(wchar_t *)FVar4.Data,bVar2);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FTimerManager::PauseTimer(this,(FTimerHandle)0x0);
  FTimerManager::UnPauseTimer(this,(FTimerHandle)0x0);
  bVar2 = IsInGameThread();
  if ((!bVar2) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TimerManager.cpp"
                         ,0x21e,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return true;
}

// TimerManagerTest_LoopingTimers_DifferentHandles @ 1488e4690

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
TimerManagerTest_LoopingTimers_DifferentHandles(UWorld *param_1,FAutomationTestBase *param_2)

{
  char cVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  FTimerHandle FVar5;
  FTimerHandle FVar6;
  bool bVar7;
  undefined1 uVar8;
  FTimerManager *this;
  undefined8 *puVar9;
  ulong64 uVar10;
  undefined1 *puVar11;
  ForAnyElementType FVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  undefined4 local_res18 [2];
  FTimerHandle local_res20;
  FDelegateAllocation local_1a8;
  FTimerHandle local_198;
  FTimerHandle local_190;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  undefined1 local_88;
  FDelegateAllocation *local_80;
  
  this = UWorld::GetTimerManager(param_1);
  local_190.Handle = 0;
  local_res20.Handle = 0;
  local_88 = 0;
  local_80 = &local_1a8;
  local_res18[0] = 0;
  local_1a8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_1a8.DelegateSize = 0;
  puVar9 = UE::Core::Private::DelegateAllocate(0x20,&local_1a8);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__PEAH__6B_
    ;
    puVar9[1] = local_res18;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseStaticDelegateInstance___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__PEAH__6B_
    ;
    puVar9[3] = `TimerManagerTest_LoopingTimers_DifferentHandles'::__l2::<lambda_1>::
                <lambda_invoker_cdecl>;
  }
  fVar4 = __real_bf800000;
  fVar3 = __real_3f800000;
  local_198.Handle = 0;
  FTimerManager::SetTimer
            (this,&local_198,
             (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)&local_1a8,
             __real_3f800000,false,__real_bf800000);
  fVar16 = __real_38d1b717;
  TimerTest_TickWorld(param_1,__real_38d1b717);
  fVar15 = FTimerManager::GetTimerRemaining(this,local_198);
  fVar15 = (float)((uint)(fVar15 - fVar3) & __xmm_7fffffff7fffffff7fffffff7fffffff);
  FString::PrintfImpl(&local_178,L"First delegate time remaining is 1.0f");
  FString::PrintfImpl(&local_188,L"%s - %d: %s");
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_188.Data.ArrayNum != 0) {
    FVar12.Data = local_188.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(param_2,(wchar_t *)FVar12.Data,fVar15 <= fVar16);
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  FTimerManager::SetTimer
            (this,&local_198,
             (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)&local_1a8,
             __real_40a00000,false,fVar4);
  TimerTest_TickWorld(param_1,fVar16);
  fVar15 = FTimerManager::GetTimerRemaining(this,local_198);
  fVar15 = (float)((uint)(fVar15 - __real_40a00000) & __xmm_7fffffff7fffffff7fffffff7fffffff);
  FString::PrintfImpl(&local_158,L"Reset delegate time remaining is 5.0f");
  FString::PrintfImpl(&local_168,L"%s - %d: %s");
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_168.Data.ArrayNum != 0) {
    FVar12.Data = local_168.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(param_2,(wchar_t *)FVar12.Data,fVar15 <= fVar16);
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  FTimerManager::SetTimer
            (this,&local_190,
             (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)&local_1a8,
             fVar3,true,fVar4);
  FTimerManager::SetTimer
            (this,&local_res20,
             (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)&local_1a8,
             __real_3fc00000,true,fVar4);
  TimerTest_TickWorld(param_1,fVar16);
  FVar5.Handle = local_190.Handle;
  bVar7 = IsInGameThread();
  if ((!bVar7) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TimerManager.cpp"
                         ,0x21e,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    uVar8 = (*pcVar2)();
    return (bool)uVar8;
  }
  if (FVar5.Handle == 0) {
LAB_1488e4a1f:
    bVar7 = false;
  }
  else {
    uVar13 = (uint)FVar5.Handle & 0xffffff;
    if (*(int *)&(this->Timers).field_0x8 <= (int)uVar13) goto LAB_1488e4a1f;
    if ((*(int *)&(this->Timers).field_0x28 <= (int)uVar13) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      uVar8 = (*pcVar2)();
      return (bool)uVar8;
    }
    puVar11 = *(undefined1 **)&(this->Timers).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->Timers).field_0x10;
    }
    if ((*(uint *)(puVar11 + (ulonglong)(uVar13 >> 5) * 4) >> ((uint)FVar5.Handle & 0x1f) & 1) == 0)
    goto LAB_1488e4a1f;
    if (((*(ulong64 *)((ulonglong)uVar13 * 0x60 + 0x50 + *(longlong *)&this->Timers) != FVar5.Handle
         ) || (cVar1 = *(char *)((ulonglong)uVar13 * 0x60 + 1 + *(longlong *)&this->Timers),
              cVar1 == '\x04')) || (cVar1 == '\x02')) goto LAB_1488e4a1f;
    bVar7 = true;
  }
  FString::PrintfImpl(&local_138,L"Handle One is active");
  FString::PrintfImpl(&local_148,L"%s - %d: %s");
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_148.Data.ArrayNum != 0) {
    FVar12.Data = local_148.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(param_2,(wchar_t *)FVar12.Data,bVar7);
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  FVar5.Handle = local_res20.Handle;
  uVar13 = (uint)local_res20.Handle;
  bVar7 = IsInGameThread();
  if ((!bVar7) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TimerManager.cpp"
                         ,0x21e,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    uVar8 = (*pcVar2)();
    return (bool)uVar8;
  }
  if ((FVar5.Handle == 0) ||
     (uVar14 = uVar13 & 0xffffff, *(int *)&(this->Timers).field_0x8 <= (int)uVar14)) {
LAB_1488e4b6a:
    bVar7 = false;
  }
  else {
    if ((*(int *)&(this->Timers).field_0x28 <= (int)uVar14) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      uVar8 = (*pcVar2)();
      return (bool)uVar8;
    }
    puVar11 = *(undefined1 **)&(this->Timers).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->Timers).field_0x10;
    }
    if ((*(uint *)(puVar11 + (ulonglong)(uVar14 >> 5) * 4) >> (uVar13 & 0x1f) & 1) == 0)
    goto LAB_1488e4b6a;
    if (((*(ulong64 *)((ulonglong)uVar14 * 0x60 + 0x50 + *(longlong *)&this->Timers) != FVar5.Handle
         ) || (cVar1 = *(char *)((ulonglong)uVar14 * 0x60 + 1 + *(longlong *)&this->Timers),
              cVar1 == '\x04')) || (cVar1 == '\x02')) goto LAB_1488e4b6a;
    bVar7 = true;
  }
  FString::PrintfImpl(&local_118,L"Handle Two is active");
  FString::PrintfImpl(&local_128,L"%s - %d: %s");
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_128.Data.ArrayNum != 0) {
    FVar12.Data = local_128.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(param_2,(wchar_t *)FVar12.Data,bVar7);
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  TimerTest_TickWorld(param_1,fVar3);
  FVar6.Handle = local_190.Handle;
  bVar7 = IsInGameThread();
  if ((!bVar7) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TimerManager.cpp"
                         ,0x21e,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    uVar8 = (*pcVar2)();
    return (bool)uVar8;
  }
  if (FVar6.Handle == 0) {
LAB_1488e4cc6:
    bVar7 = false;
  }
  else {
    uVar14 = (uint)FVar6.Handle & 0xffffff;
    if (*(int *)&(this->Timers).field_0x8 <= (int)uVar14) goto LAB_1488e4cc6;
    if ((*(int *)&(this->Timers).field_0x28 <= (int)uVar14) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      uVar8 = (*pcVar2)();
      return (bool)uVar8;
    }
    puVar11 = *(undefined1 **)&(this->Timers).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->Timers).field_0x10;
    }
    if ((*(uint *)(puVar11 + (ulonglong)(uVar14 >> 5) * 4) >> ((uint)FVar6.Handle & 0x1f) & 1) == 0)
    goto LAB_1488e4cc6;
    if (((*(ulong64 *)((ulonglong)uVar14 * 0x60 + 0x50 + *(longlong *)&this->Timers) != FVar6.Handle
         ) || (cVar1 = *(char *)((ulonglong)uVar14 * 0x60 + 1 + *(longlong *)&this->Timers),
              cVar1 == '\x04')) || (cVar1 == '\x02')) goto LAB_1488e4cc6;
    bVar7 = true;
  }
  FString::PrintfImpl(&local_f8,L"Handle One is active after tick");
  FString::PrintfImpl(&local_108,L"%s - %d: %s");
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_108.Data.ArrayNum != 0) {
    FVar12.Data = local_108.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(param_2,(wchar_t *)FVar12.Data,bVar7);
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  bVar7 = IsInGameThread();
  if ((!bVar7) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TimerManager.cpp"
                         ,0x21e,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    uVar8 = (*pcVar2)();
    return (bool)uVar8;
  }
  if ((FVar5.Handle != 0) &&
     (uVar14 = uVar13 & 0xffffff, (int)uVar14 < *(int *)&(this->Timers).field_0x8)) {
    if ((*(int *)&(this->Timers).field_0x28 <= (int)uVar14) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      uVar8 = (*pcVar2)();
      return (bool)uVar8;
    }
    puVar11 = *(undefined1 **)&(this->Timers).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->Timers).field_0x10;
    }
    if ((*(uint *)(puVar11 + (ulonglong)(uVar14 >> 5) * 4) >> (uVar13 & 0x1f) & 1) != 0) {
      if (((*(ulong64 *)((ulonglong)uVar14 * 0x60 + 0x50 + *(longlong *)&this->Timers) ==
            FVar5.Handle) &&
          (cVar1 = *(char *)((ulonglong)uVar14 * 0x60 + 1 + *(longlong *)&this->Timers),
          cVar1 != '\x04')) && (cVar1 != '\x02')) {
        bVar7 = true;
        goto LAB_1488e4e0e;
      }
    }
  }
  bVar7 = false;
LAB_1488e4e0e:
  FString::PrintfImpl(&local_d8,L"Handle Two is active after tick");
  FString::PrintfImpl(&local_e8,L"%s - %d: %s");
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_e8.Data.ArrayNum != 0) {
    FVar12.Data = local_e8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(param_2,(wchar_t *)FVar12.Data,bVar7);
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  fVar16 = FTimerManager::GetTimerRemaining(this,local_190);
  bVar7 = (float)((uint)fVar16 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_3c23d70a;
  FString::PrintfImpl(&local_b8,L"Handle One has 0 seconds remaining after tick");
  FString::PrintfImpl(&local_c8,L"%s - %d: %s");
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_c8.Data.ArrayNum != 0) {
    FVar12.Data = local_c8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(param_2,(wchar_t *)FVar12.Data,bVar7);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  fVar16 = FTimerManager::GetTimerRemaining(this,FVar5);
  bVar7 = (float)((uint)(fVar16 - __real_3f000000) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
          __real_3c23d70a;
  FString::PrintfImpl(&local_98,L"Handle Two has 0.5 seconds remaining after tick");
  FString::PrintfImpl(&local_a8,L"%s - %d: %s");
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_a8.Data.ArrayNum != 0) {
    FVar12.Data = local_a8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(param_2,(wchar_t *)FVar12.Data,bVar7);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_1a8.DelegateSize != 0) {
    if (local_1a8.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      return true;
    }
    (*(code *)**(undefined8 **)local_1a8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_1a8,0,0,0x10);
    local_1a8.DelegateSize = 0;
  }
  if (local_1a8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_1a8.DelegateAllocator);
  }
  return true;
}

// TimerManagerTest_MissingTimers @ 1488e5040

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl TimerManagerTest_MissingTimers(UWorld *param_1,FAutomationTestBase *param_2)

{
  char cVar1;
  longlong lVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  undefined1 uVar6;
  FTimerManager *this;
  longlong lVar7;
  ForAnyElementType FVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  FTimerHandle FVar11;
  float fVar12;
  undefined1 local_res18 [16];
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48 [2];
  
  this = UWorld::GetTimerManager(param_1);
  uVar10 = FTimerManager::LastAssignedSerialNumber + 1;
  FTimerManager::LastAssignedSerialNumber = uVar10;
  if (uVar10 == 0x10000000000) {
    local_res18[0] = 0;
    bVar5 = `FTimerManager::GenerateHandle'::__l3::<lambda_1>::operator()(local_res18);
    uVar10 = 0;
    if (bVar5) {
LAB_1488e50a4:
      bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("SerialNumber < MaxSerialNumber",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\TimerHandle.h"
                         ,0x3e,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    else {
      uVar10 = 1;
    }
  }
  else if (0xffffffffff < uVar10) goto LAB_1488e50a4;
  FVar11.Handle = uVar10 << 0x18 | 0x7b;
  bVar5 = IsInGameThread();
  if ((!bVar5) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TimerManager.cpp"
                         ,0x21e,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  if (*(int *)&(this->Timers).field_0x8 < 0x7c) {
LAB_1488e517a:
    lVar7 = 0;
  }
  else {
    if ((*(int *)&(this->Timers).field_0x28 < 0x7c) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    puVar9 = *(undefined1 **)&(this->Timers).field_0x20;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->Timers).field_0x10;
    }
    if ((*(uint *)(puVar9 + 0xc) >> 0x1b & 1) == 0) goto LAB_1488e517a;
    lVar2 = *(longlong *)&this->Timers;
    lVar7 = lVar2 + 0x2e20;
    if ((*(ulong64 *)(lVar2 + 0x2e70) != FVar11.Handle) || (*(char *)(lVar2 + 0x2e21) == '\x04'))
    goto LAB_1488e517a;
  }
  FString::PrintfImpl(&local_e8,L"TimerExists called with an invalid handle");
  FString::PrintfImpl(&local_f8,L"%s - %d: %s");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_f8.Data.ArrayNum != 0) {
    FVar8.Data = local_f8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestFalse(param_2,(wchar_t *)FVar8.Data,lVar7 != 0);
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  bVar5 = IsInGameThread();
  if ((!bVar5) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TimerManager.cpp"
                         ,0x21e,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  if ((FVar11.Handle == 0) || (*(int *)&(this->Timers).field_0x8 < 0x7c)) {
LAB_1488e52c7:
    bVar5 = false;
  }
  else {
    if ((*(int *)&(this->Timers).field_0x28 < 0x7c) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    puVar9 = *(undefined1 **)&(this->Timers).field_0x20;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->Timers).field_0x10;
    }
    if (((((*(uint *)(puVar9 + 0xc) >> 0x1b & 1) == 0) ||
         (*(ulong64 *)(*(longlong *)&this->Timers + 0x2e70) != FVar11.Handle)) ||
        (cVar1 = *(char *)(*(longlong *)&this->Timers + 0x2e21), cVar1 == '\x04')) ||
       (cVar1 == '\x02')) goto LAB_1488e52c7;
    bVar5 = true;
  }
  FString::PrintfImpl(&local_c8,L"IsTimerActive called with an invalid handle");
  FString::PrintfImpl(&local_d8,L"%s - %d: %s");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_d8.Data.ArrayNum != 0) {
    FVar8.Data = local_d8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestFalse(param_2,(wchar_t *)FVar8.Data,bVar5);
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  bVar5 = IsInGameThread();
  if ((!bVar5) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TimerManager.cpp"
                         ,0x21e,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  if ((FVar11.Handle == 0) || (*(int *)&(this->Timers).field_0x8 < 0x7c)) {
LAB_1488e53fe:
    bVar5 = false;
  }
  else {
    if ((*(int *)&(this->Timers).field_0x28 < 0x7c) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    puVar9 = *(undefined1 **)&(this->Timers).field_0x20;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->Timers).field_0x10;
    }
    if (((((*(uint *)(puVar9 + 0xc) >> 0x1b & 1) == 0) ||
         (*(ulong64 *)(*(longlong *)&this->Timers + 0x2e70) != FVar11.Handle)) ||
        (cVar1 = *(char *)(*(longlong *)&this->Timers + 0x2e21), cVar1 == '\x04')) ||
       (cVar1 != '\x02')) goto LAB_1488e53fe;
    bVar5 = true;
  }
  FString::PrintfImpl(&local_a8,L"IsTimerPaused called with an invalid handle");
  FString::PrintfImpl(&local_b8,L"%s - %d: %s");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_b8.Data.ArrayNum != 0) {
    FVar8.Data = local_b8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestFalse(param_2,(wchar_t *)FVar8.Data,bVar5);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  bVar5 = IsInGameThread();
  if ((!bVar5) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TimerManager.cpp"
                         ,0x21e,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  fVar4 = __real_bf800000;
  if ((FVar11.Handle != 0) && (0x7b < *(int *)&(this->Timers).field_0x8)) {
    if ((*(int *)&(this->Timers).field_0x28 < 0x7c) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    puVar9 = *(undefined1 **)&(this->Timers).field_0x20;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->Timers).field_0x10;
    }
    if (((((*(uint *)(puVar9 + 0xc) >> 0x1b & 1) != 0) &&
         (lVar2 = *(longlong *)&this->Timers, *(ulong64 *)(lVar2 + 0x2e70) == FVar11.Handle)) &&
        (*(char *)(lVar2 + 0x2e21) != '\x04')) && (*(float *)(lVar2 + 0x2e24) != fVar4)) {
      bVar5 = false;
      goto LAB_1488e5543;
    }
  }
  bVar5 = true;
LAB_1488e5543:
  FString::PrintfImpl(&local_88,L"GetTimerRate called with an invalid handle");
  FString::PrintfImpl(&local_98,L"%s - %d: %s");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_98.Data.ArrayNum != 0) {
    FVar8.Data = local_98.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(param_2,(wchar_t *)FVar8.Data,bVar5);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  fVar12 = FTimerManager::GetTimerElapsed(this,FVar11);
  FString::PrintfImpl(&local_68,L"GetTimerElapsed called with an invalid handle");
  FString::PrintfImpl(&local_78,L"%s - %d: %s");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar8.Data = local_78.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(param_2,(wchar_t *)FVar8.Data,fVar12 == fVar4);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  fVar12 = FTimerManager::GetTimerRemaining(this,FVar11);
  FString::PrintfImpl(local_48,L"GetTimerRemaining called with an invalid handle");
  FString::PrintfImpl(&local_58,L"%s - %d: %s");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar8.Data = local_58.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(param_2,(wchar_t *)FVar8.Data,fVar12 == fVar4);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  FTimerManager::PauseTimer(this,FVar11);
  FTimerManager::UnPauseTimer(this,FVar11);
  bVar5 = IsInGameThread();
  if ((!bVar5) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TimerManager.cpp"
                         ,0x21e,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  if (0x7b < *(int *)&(this->Timers).field_0x8) {
    if ((*(int *)&(this->Timers).field_0x28 < 0x7c) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    puVar9 = *(undefined1 **)&(this->Timers).field_0x20;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->Timers).field_0x10;
    }
    if ((((*(uint *)(puVar9 + 0xc) >> 0x1b & 1) != 0) &&
        (*(ulong64 *)(*(longlong *)&this->Timers + 0x2e70) == FVar11.Handle)) &&
       (*(char *)(*(longlong *)&this->Timers + 0x2e21) != '\x04')) {
      FTimerManager::InternalClearTimer(this,FVar11);
    }
  }
  return true;
}

// TimerManagerTest_ValidTimer_HandleLoopingSetDuringExecute @ 1488e57e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
TimerManagerTest_ValidTimer_HandleLoopingSetDuringExecute
          (UWorld *param_1,FAutomationTestBase *param_2)

{
  char cVar1;
  code *pcVar2;
  float fVar3;
  FTimerHandle FVar4;
  undefined1 uVar5;
  FTimerManager *this;
  undefined8 *puVar6;
  ulong64 uVar7;
  ForAnyElementType FVar8;
  undefined1 *puVar9;
  uint uVar10;
  bool bVar11;
  float fVar12;
  FTimerHandle local_res20;
  FDelegateAllocation local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  undefined1 local_58;
  FDelegateAllocation *local_50;
  
  this = UWorld::GetTimerManager(param_1);
  FLoopingTestFunc::Handle = &local_res20;
  local_res20.Handle = 0;
  FLoopingTestFunc::TimerCalled = 0;
  FLoopingTestFunc::TimerManager = this;
  FString::PrintfImpl(&local_108,L"Timer called count starts at 0");
  FString::PrintfImpl(&local_118,L"%s - %d: %s");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_118.Data.ArrayNum != 0) {
    FVar8.Data = local_118.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(param_2,(wchar_t *)FVar8.Data,true);
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  local_128.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_58 = 0;
  local_50 = &local_128;
  local_128.DelegateSize = 0;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,&local_128);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseStaticDelegateInstance___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = FLoopingTestFunc::TimerExecute;
  }
  fVar3 = __real_40400000;
  FTimerManager::SetTimer
            (this,&local_res20,
             (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)&local_128,
             __real_40400000,true,__real_bf800000);
  if (local_128.DelegateSize == 0) {
LAB_1488e5974:
    if (local_128.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_128.DelegateAllocator);
    }
  }
  else if (local_128.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    (*(code *)**(undefined8 **)local_128.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_128,0,0,0x10);
    local_128.DelegateSize = 0;
    goto LAB_1488e5974;
  }
  TimerTest_TickWorld(param_1,__real_38d1b717);
  TimerTest_TickWorld(param_1,fVar3);
  bVar11 = FLoopingTestFunc::TimerCalled == 1;
  FString::PrintfImpl(&local_e8,L"Timer was called first time");
  FString::PrintfImpl(&local_f8,L"%s - %d: %s");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_f8.Data.ArrayNum != 0) {
    FVar8.Data = local_f8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(param_2,(wchar_t *)FVar8.Data,bVar11);
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  FVar4.Handle = local_res20.Handle;
  bVar11 = IsInGameThread();
  if ((!bVar11) &&
     (bVar11 = FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TimerManager.cpp"
                          ,0x21e,L""), bVar11)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  if (FVar4.Handle == 0) {
LAB_1488e5ad6:
    bVar11 = false;
  }
  else {
    uVar10 = (uint)FVar4.Handle & 0xffffff;
    if (*(int *)&(this->Timers).field_0x8 <= (int)uVar10) goto LAB_1488e5ad6;
    if ((*(int *)&(this->Timers).field_0x28 <= (int)uVar10) &&
       (bVar11 = FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5c6,L""), bVar11)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    puVar9 = *(undefined1 **)&(this->Timers).field_0x20;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->Timers).field_0x10;
    }
    if ((*(uint *)(puVar9 + (ulonglong)(uVar10 >> 5) * 4) >> ((uint)FVar4.Handle & 0x1f) & 1) == 0)
    goto LAB_1488e5ad6;
    if (((*(ulong64 *)((ulonglong)uVar10 * 0x60 + 0x50 + *(longlong *)&this->Timers) != FVar4.Handle
         ) || (cVar1 = *(char *)((ulonglong)uVar10 * 0x60 + 1 + *(longlong *)&this->Timers),
              cVar1 == '\x04')) || (cVar1 == '\x02')) goto LAB_1488e5ad6;
    bVar11 = true;
  }
  FString::PrintfImpl(&local_c8,L"Timer was readded");
  FString::PrintfImpl(&local_d8,L"%s - %d: %s");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_d8.Data.ArrayNum != 0) {
    FVar8.Data = local_d8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(param_2,(wchar_t *)FVar8.Data,bVar11);
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  fVar3 = FLoopingTestFunc::NewTime;
  fVar12 = FTimerManager::GetTimerRemaining(this,local_res20);
  bVar11 = (float)((uint)(fVar12 - fVar3) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
           __real_3c23d70a;
  FString::PrintfImpl(&local_a8,L"Timer was readded with correct time");
  FString::PrintfImpl(&local_b8,L"%s - %d: %s");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_b8.Data.ArrayNum != 0) {
    FVar8.Data = local_b8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(param_2,(wchar_t *)FVar8.Data,bVar11);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  TimerTest_TickWorld(param_1,__real_3f8ccccd);
  bVar11 = FLoopingTestFunc::TimerCalled == 2;
  FString::PrintfImpl(&local_88,L"Timer was called second time");
  FString::PrintfImpl(&local_98,L"%s - %d: %s");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_98.Data.ArrayNum != 0) {
    FVar8.Data = local_98.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(param_2,(wchar_t *)FVar8.Data,bVar11);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  FVar4.Handle = local_res20.Handle;
  bVar11 = IsInGameThread();
  if ((!bVar11) &&
     (bVar11 = FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TimerManager.cpp"
                          ,0x21e,L""), bVar11)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  if (FVar4.Handle != 0) {
    uVar10 = (uint)FVar4.Handle & 0xffffff;
    if ((int)uVar10 < *(int *)&(this->Timers).field_0x8) {
      if ((*(int *)&(this->Timers).field_0x28 <= (int)uVar10) &&
         (bVar11 = FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5c6,L""), bVar11)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      puVar9 = *(undefined1 **)&(this->Timers).field_0x20;
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = &(this->Timers).field_0x10;
      }
      if ((*(uint *)(puVar9 + (ulonglong)(uVar10 >> 5) * 4) >> ((uint)FVar4.Handle & 0x1f) & 1) != 0
         ) {
        if (((*(ulong64 *)((ulonglong)uVar10 * 0x60 + 0x50 + *(longlong *)&this->Timers) ==
              FVar4.Handle) &&
            (cVar1 = *(char *)((ulonglong)uVar10 * 0x60 + 1 + *(longlong *)&this->Timers),
            cVar1 != '\x04')) && (cVar1 != '\x02')) {
          bVar11 = true;
          goto LAB_1488e5d36;
        }
      }
    }
  }
  bVar11 = false;
LAB_1488e5d36:
  FString::PrintfImpl(&local_68,L"Timer handle no longer active");
  FString::PrintfImpl(&local_78,L"%s - %d: %s");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar8.Data = local_78.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestFalse(param_2,(wchar_t *)FVar8.Data,bVar11);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return true;
}

// TimerManagerTest_ValidTimer_HandleWithDelegate @ 1488e5df0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
TimerManagerTest_ValidTimer_HandleWithDelegate(UWorld *param_1,FAutomationTestBase *param_2)

{
  char cVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  FTimerHandle FVar6;
  undefined1 uVar7;
  uint uVar8;
  FTimerManager *this;
  undefined8 *puVar9;
  ulong64 uVar10;
  longlong lVar11;
  longlong lVar12;
  FTimerData *pFVar13;
  undefined1 *puVar14;
  ForAnyElementType FVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  byte local_res18 [8];
  FTimerHandle local_res20;
  FDelegateAllocation local_588;
  FTimerHandle local_578;
  FTimerHandle local_570;
  FTimerHandle local_568;
  FTimerHandle local_560;
  FTimerHandle local_558;
  FTimerHandle local_550;
  FTimerHandle local_548;
  FTimerHandle local_540;
  FTimerHandle local_538;
  FString local_530;
  FString local_520;
  FString local_510;
  FString local_500;
  FString local_4f0;
  FString local_4e0;
  FString local_4d0;
  FString local_4c0;
  FString local_4b0;
  FString local_4a0;
  FString local_490;
  FString local_480;
  FString local_470;
  FString local_460;
  FString local_450;
  FString local_440;
  FString local_430;
  FString local_420;
  FString local_410;
  FString local_400;
  FString local_3f0;
  FString local_3e0;
  FString local_3d0;
  FString local_3c0;
  FString local_3b0;
  FString local_3a0;
  FString local_390;
  FString local_380;
  FString local_370;
  FString local_360;
  FString local_350;
  FString local_340;
  FString local_330;
  FString local_320;
  FString local_310;
  FString local_300;
  FString local_2f0;
  FString local_2e0;
  FString local_2d0;
  FString local_2c0;
  FString local_2b0;
  FString local_2a0;
  FString local_290;
  FString local_280;
  FString local_270;
  FString local_260;
  FString local_250;
  FString local_240;
  FString local_230;
  FString local_220;
  FString local_210;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  undefined1 local_d0;
  FDelegateAllocation *local_c8;
  
  this = UWorld::GetTimerManager(param_1);
  local_d0 = 0;
  local_c8 = &local_588;
  local_588.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_588.DelegateSize = 0;
  local_res18[0] = 0;
  puVar9 = UE::Core::Private::DelegateAllocate(0x28,&local_588);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseRawMethodDelegateInstance__0A_UFDummy____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar9[3] = local_res18;
    puVar9[4] = FDummy::Callback;
  }
  fVar5 = __real_3fc00000;
  fVar4 = __real_bf800000;
  local_res20.Handle = 0;
  FTimerManager::SetTimer
            (this,&local_res20,
             (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)&local_588,
             __real_3fc00000,false,__real_bf800000);
  FVar6.Handle = local_res20.Handle;
  bVar18 = local_res20.Handle != 0;
  FString::PrintfImpl(&local_520,L"Handle should be valid after calling SetTimer");
  FString::PrintfImpl(&local_530,L"%s - %d: %s");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_530.Data.ArrayNum != 0) {
    FVar15.Data = local_530.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(param_2,(wchar_t *)FVar15.Data,bVar18);
  if (local_530.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_530.Data.AllocatorInstance.Data);
  }
  if (local_520.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_520.Data.AllocatorInstance.Data);
  }
  uVar8 = (uint)FVar6.Handle;
  bVar18 = IsInGameThread();
  if ((!bVar18) &&
     (bVar18 = FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TimerManager.cpp"
                          ,0x21e,L""), bVar18)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  if ((FVar6.Handle == 0) ||
     (uVar16 = uVar8 & 0xffffff, *(int *)&(this->Timers).field_0x8 <= (int)uVar16)) {
LAB_1488e604b:
    lVar11 = 0;
  }
  else {
    if ((*(int *)&(this->Timers).field_0x28 <= (int)uVar16) &&
       (bVar18 = FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5c6,L""), bVar18)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    puVar14 = *(undefined1 **)&(this->Timers).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = &(this->Timers).field_0x10;
    }
    if ((*(uint *)(puVar14 + (ulonglong)(uVar16 >> 5) * 4) >> (uVar8 & 0x1f) & 1) == 0)
    goto LAB_1488e604b;
    lVar11 = *(longlong *)&this->Timers + (ulonglong)uVar16 * 0x60;
    if ((*(ulong64 *)(lVar11 + 0x50) != FVar6.Handle) || (*(char *)(lVar11 + 1) == '\x04')) {
      lVar11 = 0;
    }
  }
  FString::PrintfImpl(&local_500,L"TimerExists called with a pending timer");
  FString::PrintfImpl(&local_510,L"%s - %d: %s");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_510.Data.ArrayNum != 0) {
    FVar15.Data = local_510.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(param_2,(wchar_t *)FVar15.Data,lVar11 != 0);
  if (local_510.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_510.Data.AllocatorInstance.Data);
  }
  if (local_500.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_500.Data.AllocatorInstance.Data);
  }
  bVar18 = IsInGameThread();
  if ((!bVar18) &&
     (bVar18 = FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TimerManager.cpp"
                          ,0x21e,L""), bVar18)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  if ((FVar6.Handle == 0) ||
     (uVar16 = uVar8 & 0xffffff, *(int *)&(this->Timers).field_0x8 <= (int)uVar16)) {
LAB_1488e6198:
    bVar18 = false;
  }
  else {
    if ((*(int *)&(this->Timers).field_0x28 <= (int)uVar16) &&
       (bVar18 = FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5c6,L""), bVar18)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    puVar14 = *(undefined1 **)&(this->Timers).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = &(this->Timers).field_0x10;
    }
    if ((*(uint *)(puVar14 + (ulonglong)(uVar16 >> 5) * 4) >> (uVar8 & 0x1f) & 1) == 0)
    goto LAB_1488e6198;
    if (((*(ulong64 *)((ulonglong)uVar16 * 0x60 + 0x50 + *(longlong *)&this->Timers) != FVar6.Handle
         ) || (cVar1 = *(char *)((ulonglong)uVar16 * 0x60 + 1 + *(longlong *)&this->Timers),
              cVar1 == '\x04')) || (cVar1 == '\x02')) goto LAB_1488e6198;
    bVar18 = true;
  }
  FString::PrintfImpl(&local_4e0,L"IsTimerActive called with a pending timer");
  FString::PrintfImpl(&local_4f0,L"%s - %d: %s");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_4f0.Data.ArrayNum != 0) {
    FVar15.Data = local_4f0.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(param_2,(wchar_t *)FVar15.Data,bVar18);
  if (local_4f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4f0.Data.AllocatorInstance.Data);
  }
  if (local_4e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4e0.Data.AllocatorInstance.Data);
  }
  bVar18 = IsInGameThread();
  if ((!bVar18) &&
     (bVar18 = FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TimerManager.cpp"
                          ,0x21e,L""), bVar18)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  if ((FVar6.Handle == 0) ||
     (uVar16 = uVar8 & 0xffffff, *(int *)&(this->Timers).field_0x8 <= (int)uVar16)) {
LAB_1488e62de:
    bVar18 = false;
  }
  else {
    if ((*(int *)&(this->Timers).field_0x28 <= (int)uVar16) &&
       (bVar18 = FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5c6,L""), bVar18)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    puVar14 = *(undefined1 **)&(this->Timers).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = &(this->Timers).field_0x10;
    }
    if ((*(uint *)(puVar14 + (ulonglong)(uVar16 >> 5) * 4) >> (uVar8 & 0x1f) & 1) == 0)
    goto LAB_1488e62de;
    if (((*(ulong64 *)((ulonglong)uVar16 * 0x60 + 0x50 + *(longlong *)&this->Timers) != FVar6.Handle
         ) || (cVar1 = *(char *)((ulonglong)uVar16 * 0x60 + 1 + *(longlong *)&this->Timers),
              cVar1 == '\x04')) || (cVar1 != '\x02')) goto LAB_1488e62de;
    bVar18 = true;
  }
  FString::PrintfImpl(&local_4c0,L"IsTimerPaused called with a pending timer");
  FString::PrintfImpl(&local_4d0,L"%s - %d: %s");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_4d0.Data.ArrayNum != 0) {
    FVar15.Data = local_4d0.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestFalse(param_2,(wchar_t *)FVar15.Data,bVar18);
  if (local_4d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4d0.Data.AllocatorInstance.Data);
  }
  if (local_4c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4c0.Data.AllocatorInstance.Data);
  }
  bVar18 = IsInGameThread();
  if ((!bVar18) &&
     (bVar18 = FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TimerManager.cpp"
                          ,0x21e,L""), bVar18)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  if ((FVar6.Handle == 0) ||
     (uVar16 = uVar8 & 0xffffff, *(int *)&(this->Timers).field_0x8 <= (int)uVar16)) {
LAB_1488e642c:
    bVar18 = false;
  }
  else {
    if ((*(int *)&(this->Timers).field_0x28 <= (int)uVar16) &&
       (bVar18 = FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5c6,L""), bVar18)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    puVar14 = *(undefined1 **)&(this->Timers).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = &(this->Timers).field_0x10;
    }
    if ((*(uint *)(puVar14 + (ulonglong)(uVar16 >> 5) * 4) >> (uVar8 & 0x1f) & 1) == 0)
    goto LAB_1488e642c;
    lVar11 = *(longlong *)&this->Timers;
    lVar12 = (ulonglong)uVar16 * 0x60;
    if (((*(ulong64 *)(lVar12 + 0x50 + lVar11) != FVar6.Handle) ||
        (*(char *)(lVar12 + 1 + lVar11) == '\x04')) || (*(float *)(lVar12 + 4 + lVar11) != fVar5))
    goto LAB_1488e642c;
    bVar18 = true;
  }
  FString::PrintfImpl(&local_4a0,L"GetTimerRate called with a pending timer");
  FString::PrintfImpl(&local_4b0,L"%s - %d: %s");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_4b0.Data.ArrayNum != 0) {
    FVar15.Data = local_4b0.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(param_2,(wchar_t *)FVar15.Data,bVar18);
  if (local_4b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4b0.Data.AllocatorInstance.Data);
  }
  if (local_4a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4a0.Data.AllocatorInstance.Data);
  }
  fVar19 = FTimerManager::GetTimerElapsed(this,FVar6);
  FString::PrintfImpl(&local_480,L"GetTimerElapsed called with a pending timer");
  FString::PrintfImpl(&local_490,L"%s - %d: %s");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_490.Data.ArrayNum != 0) {
    FVar15.Data = local_490.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(param_2,(wchar_t *)FVar15.Data,fVar19 == 0.0);
  if (local_490.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_490.Data.AllocatorInstance.Data);
  }
  if (local_480.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_480.Data.AllocatorInstance.Data);
  }
  fVar19 = FTimerManager::GetTimerRemaining(this,FVar6);
  FString::PrintfImpl(&local_460,L"GetTimerRemaining called with a pending timer");
  FString::PrintfImpl(&local_470,L"%s - %d: %s");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_470.Data.ArrayNum != 0) {
    FVar15.Data = local_470.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(param_2,(wchar_t *)FVar15.Data,fVar19 == fVar5);
  if (local_470.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_470.Data.AllocatorInstance.Data);
  }
  if (local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_460.Data.AllocatorInstance.Data);
  }
  fVar19 = __real_38d1b717;
  TimerTest_TickWorld(param_1,__real_38d1b717);
  bVar18 = IsInGameThread();
  if ((!bVar18) &&
     (bVar18 = FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TimerManager.cpp"
                          ,0x21e,L""), bVar18)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  if ((FVar6.Handle == 0) ||
     (uVar16 = uVar8 & 0xffffff, *(int *)&(this->Timers).field_0x8 <= (int)uVar16)) {
LAB_1488e6698:
    lVar11 = 0;
  }
  else {
    if ((*(int *)&(this->Timers).field_0x28 <= (int)uVar16) &&
       (bVar18 = FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5c6,L""), bVar18)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    puVar14 = *(undefined1 **)&(this->Timers).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = &(this->Timers).field_0x10;
    }
    if ((((*(uint *)(puVar14 + (ulonglong)(uVar16 >> 5) * 4) >> (uVar8 & 0x1f) & 1) == 0) ||
        (lVar11 = *(longlong *)&this->Timers + (ulonglong)uVar16 * 0x60,
        *(ulong64 *)(lVar11 + 0x50) != FVar6.Handle)) || (*(char *)(lVar11 + 1) == '\x04'))
    goto LAB_1488e6698;
  }
  FString::PrintfImpl(&local_440,L"TimerExists called with a pending timer");
  FString::PrintfImpl(&local_450,L"%s - %d: %s");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_450.Data.ArrayNum != 0) {
    FVar15.Data = local_450.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(param_2,(wchar_t *)FVar15.Data,lVar11 != 0);
  if (local_450.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_450.Data.AllocatorInstance.Data);
  }
  if (local_440.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_440.Data.AllocatorInstance.Data);
  }
  bVar18 = IsInGameThread();
  if ((!bVar18) &&
     (bVar18 = FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TimerManager.cpp"
                          ,0x21e,L""), bVar18)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  if ((FVar6.Handle == 0) ||
     (uVar16 = uVar8 & 0xffffff, *(int *)&(this->Timers).field_0x8 <= (int)uVar16)) {
LAB_1488e67e7:
    bVar18 = false;
  }
  else {
    if ((*(int *)&(this->Timers).field_0x28 <= (int)uVar16) &&
       (bVar18 = FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5c6,L""), bVar18)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    puVar14 = *(undefined1 **)&(this->Timers).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = &(this->Timers).field_0x10;
    }
    if ((*(uint *)(puVar14 + (ulonglong)(uVar16 >> 5) * 4) >> (uVar8 & 0x1f) & 1) == 0)
    goto LAB_1488e67e7;
    if (((*(ulong64 *)((ulonglong)uVar16 * 0x60 + 0x50 + *(longlong *)&this->Timers) != FVar6.Handle
         ) || (cVar1 = *(char *)((ulonglong)uVar16 * 0x60 + 1 + *(longlong *)&this->Timers),
              cVar1 == '\x04')) || (cVar1 == '\x02')) goto LAB_1488e67e7;
    bVar18 = true;
  }
  FString::PrintfImpl(&local_420,L"IsTimerActive called with an active timer");
  FString::PrintfImpl(&local_430,L"%s - %d: %s");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_430.Data.ArrayNum != 0) {
    FVar15.Data = local_430.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(param_2,(wchar_t *)FVar15.Data,bVar18);
  if (local_430.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_430.Data.AllocatorInstance.Data);
  }
  if (local_420.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_420.Data.AllocatorInstance.Data);
  }
  bVar18 = IsInGameThread();
  if ((!bVar18) &&
     (bVar18 = FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TimerManager.cpp"
                          ,0x21e,L""), bVar18)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  if ((FVar6.Handle == 0) ||
     (uVar16 = uVar8 & 0xffffff, *(int *)&(this->Timers).field_0x8 <= (int)uVar16)) {
LAB_1488e6945:
    bVar18 = false;
  }
  else {
    if ((*(int *)&(this->Timers).field_0x28 <= (int)uVar16) &&
       (bVar18 = FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5c6,L""), bVar18)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    puVar14 = *(undefined1 **)&(this->Timers).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = &(this->Timers).field_0x10;
    }
    if ((*(uint *)(puVar14 + (ulonglong)(uVar16 >> 5) * 4) >> (uVar8 & 0x1f) & 1) == 0)
    goto LAB_1488e6945;
    if (((*(ulong64 *)((ulonglong)uVar16 * 0x60 + 0x50 + *(longlong *)&this->Timers) != FVar6.Handle
         ) || (cVar1 = *(char *)((ulonglong)uVar16 * 0x60 + 1 + *(longlong *)&this->Timers),
              cVar1 == '\x04')) || (cVar1 != '\x02')) goto LAB_1488e6945;
    bVar18 = true;
  }
  FString::PrintfImpl(&local_400,L"IsTimerPaused called with an active timer");
  FString::PrintfImpl(&local_410,L"%s - %d: %s");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_410.Data.ArrayNum != 0) {
    FVar15.Data = local_410.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestFalse(param_2,(wchar_t *)FVar15.Data,bVar18);
  if (local_410.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_410.Data.AllocatorInstance.Data);
  }
  if (local_400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_400.Data.AllocatorInstance.Data);
  }
  fVar3 = __real_3f800000;
  TimerTest_TickWorld(param_1,__real_3f800000);
  fVar20 = FTimerManager::GetTimerElapsed(this,FVar6);
  uVar16 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar20 = (float)((uint)(fVar20 - fVar3) & __xmm_7fffffff7fffffff7fffffff7fffffff);
  FString::PrintfImpl(&local_3e0,L"GetTimerElapsed called with an active timer after one step");
  FString::PrintfImpl(&local_3f0,L"%s - %d: %s");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_3f0.Data.ArrayNum != 0) {
    FVar15.Data = local_3f0.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(param_2,(wchar_t *)FVar15.Data,fVar20 <= fVar19);
  if (local_3f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3f0.Data.AllocatorInstance.Data);
  }
  if (local_3e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3e0.Data.AllocatorInstance.Data);
  }
  fVar21 = FTimerManager::GetTimerRemaining(this,FVar6);
  fVar20 = __real_3f000000;
  fVar21 = fVar21 - __real_3f000000;
  FString::PrintfImpl(&local_3c0,L"GetTimerRemaining called with an active timer after one step");
  FString::PrintfImpl(&local_3d0,L"%s - %d: %s");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_3d0.Data.ArrayNum != 0) {
    FVar15.Data = local_3d0.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue
            (param_2,(wchar_t *)FVar15.Data,(float)((uint)fVar21 & uVar16) <= fVar19);
  if (local_3d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3d0.Data.AllocatorInstance.Data);
  }
  if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
  }
  FTimerManager::PauseTimer(this,FVar6);
  bVar18 = IsInGameThread();
  if ((!bVar18) &&
     (bVar18 = FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TimerManager.cpp"
                          ,0x21e,L""), bVar18)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  if ((FVar6.Handle == 0) ||
     (uVar17 = uVar8 & 0xffffff, *(int *)&(this->Timers).field_0x8 <= (int)uVar17)) {
LAB_1488e6c13:
    lVar11 = 0;
  }
  else {
    if ((*(int *)&(this->Timers).field_0x28 <= (int)uVar17) &&
       (bVar18 = FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5c6,L""), bVar18)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    puVar14 = *(undefined1 **)&(this->Timers).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = &(this->Timers).field_0x10;
    }
    if ((((*(uint *)(puVar14 + (ulonglong)(uVar17 >> 5) * 4) >> (uVar8 & 0x1f) & 1) == 0) ||
        (lVar11 = *(longlong *)&this->Timers + (ulonglong)uVar17 * 0x60,
        *(ulong64 *)(lVar11 + 0x50) != FVar6.Handle)) || (*(char *)(lVar11 + 1) == '\x04'))
    goto LAB_1488e6c13;
  }
  FString::PrintfImpl(&local_3a0,L"TimerExists called with a paused timer");
  FString::PrintfImpl(&local_3b0,L"%s - %d: %s");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_3b0.Data.ArrayNum != 0) {
    FVar15.Data = local_3b0.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(param_2,(wchar_t *)FVar15.Data,lVar11 != 0);
  if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
  }
  if (local_3a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a0.Data.AllocatorInstance.Data);
  }
  bVar18 = IsInGameThread();
  if ((!bVar18) &&
     (bVar18 = FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TimerManager.cpp"
                          ,0x21e,L""), bVar18)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  if ((FVar6.Handle == 0) ||
     (uVar17 = uVar8 & 0xffffff, *(int *)&(this->Timers).field_0x8 <= (int)uVar17)) {
LAB_1488e6d77:
    bVar18 = false;
  }
  else {
    if ((*(int *)&(this->Timers).field_0x28 <= (int)uVar17) &&
       (bVar18 = FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5c6,L""), bVar18)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    puVar14 = *(undefined1 **)&(this->Timers).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = &(this->Timers).field_0x10;
    }
    if ((*(uint *)(puVar14 + (ulonglong)(uVar17 >> 5) * 4) >> (uVar8 & 0x1f) & 1) == 0)
    goto LAB_1488e6d77;
    if (((*(ulong64 *)((ulonglong)uVar17 * 0x60 + 0x50 + *(longlong *)&this->Timers) != FVar6.Handle
         ) || (cVar1 = *(char *)((ulonglong)uVar17 * 0x60 + 1 + *(longlong *)&this->Timers),
              cVar1 == '\x04')) || (cVar1 == '\x02')) goto LAB_1488e6d77;
    bVar18 = true;
  }
  FString::PrintfImpl(&local_380,L"IsTimerActive called with a paused timer");
  FString::PrintfImpl(&local_390,L"%s - %d: %s");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_390.Data.ArrayNum != 0) {
    FVar15.Data = local_390.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestFalse(param_2,(wchar_t *)FVar15.Data,bVar18);
  if (local_390.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_390.Data.AllocatorInstance.Data);
  }
  if (local_380.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_380.Data.AllocatorInstance.Data);
  }
  bVar18 = IsInGameThread();
  if ((!bVar18) &&
     (bVar18 = FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TimerManager.cpp"
                          ,0x21e,L""), bVar18)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  if ((FVar6.Handle == 0) ||
     (uVar17 = uVar8 & 0xffffff, *(int *)&(this->Timers).field_0x8 <= (int)uVar17)) {
LAB_1488e6ed5:
    bVar18 = false;
  }
  else {
    if ((*(int *)&(this->Timers).field_0x28 <= (int)uVar17) &&
       (bVar18 = FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5c6,L""), bVar18)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    puVar14 = *(undefined1 **)&(this->Timers).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = &(this->Timers).field_0x10;
    }
    if ((*(uint *)(puVar14 + (ulonglong)(uVar17 >> 5) * 4) >> (uVar8 & 0x1f) & 1) == 0)
    goto LAB_1488e6ed5;
    if (((*(ulong64 *)((ulonglong)uVar17 * 0x60 + 0x50 + *(longlong *)&this->Timers) != FVar6.Handle
         ) || (cVar1 = *(char *)((ulonglong)uVar17 * 0x60 + 1 + *(longlong *)&this->Timers),
              cVar1 == '\x04')) || (cVar1 != '\x02')) goto LAB_1488e6ed5;
    bVar18 = true;
  }
  FString::PrintfImpl(&local_360,L"IsTimerPaused called with a paused timer");
  FString::PrintfImpl(&local_370,L"%s - %d: %s");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_370.Data.ArrayNum != 0) {
    FVar15.Data = local_370.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(param_2,(wchar_t *)FVar15.Data,bVar18);
  if (local_370.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_370.Data.AllocatorInstance.Data);
  }
  if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_360.Data.AllocatorInstance.Data);
  }
  TimerTest_TickWorld(param_1,fVar3);
  bVar18 = IsInGameThread();
  if ((!bVar18) &&
     (bVar18 = FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TimerManager.cpp"
                          ,0x21e,L""), bVar18)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  if ((FVar6.Handle == 0) ||
     (uVar17 = uVar8 & 0xffffff, *(int *)&(this->Timers).field_0x8 <= (int)uVar17)) {
LAB_1488e7032:
    lVar11 = 0;
  }
  else {
    if ((*(int *)&(this->Timers).field_0x28 <= (int)uVar17) &&
       (bVar18 = FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5c6,L""), bVar18)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    puVar14 = *(undefined1 **)&(this->Timers).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = &(this->Timers).field_0x10;
    }
    if ((((*(uint *)(puVar14 + (ulonglong)(uVar17 >> 5) * 4) >> (uVar8 & 0x1f) & 1) == 0) ||
        (lVar11 = *(longlong *)&this->Timers + (ulonglong)uVar17 * 0x60,
        *(ulong64 *)(lVar11 + 0x50) != FVar6.Handle)) || (*(char *)(lVar11 + 1) == '\x04'))
    goto LAB_1488e7032;
  }
  FString::PrintfImpl(&local_340,L"TimerExists called with a paused timer");
  FString::PrintfImpl(&local_350,L"%s - %d: %s");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_350.Data.ArrayNum != 0) {
    FVar15.Data = local_350.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(param_2,(wchar_t *)FVar15.Data,lVar11 != 0);
  if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_350.Data.AllocatorInstance.Data);
  }
  if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_340.Data.AllocatorInstance.Data);
  }
  bVar18 = IsInGameThread();
  if ((!bVar18) &&
     (bVar18 = FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TimerManager.cpp"
                          ,0x21e,L""), bVar18)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  if ((FVar6.Handle != 0) &&
     (uVar17 = uVar8 & 0xffffff, (int)uVar17 < *(int *)&(this->Timers).field_0x8)) {
    if ((*(int *)&(this->Timers).field_0x28 <= (int)uVar17) &&
       (bVar18 = FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5c6,L""), bVar18)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    puVar14 = *(undefined1 **)&(this->Timers).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = &(this->Timers).field_0x10;
    }
    if ((*(uint *)(puVar14 + (ulonglong)(uVar17 >> 5) * 4) >> (uVar8 & 0x1f) & 1) != 0) {
      if (((*(ulong64 *)((ulonglong)uVar17 * 0x60 + 0x50 + *(longlong *)&this->Timers) ==
            FVar6.Handle) &&
          (cVar1 = *(char *)((ulonglong)uVar17 * 0x60 + 1 + *(longlong *)&this->Timers),
          cVar1 != '\x04')) && (cVar1 != '\x02')) {
        bVar18 = true;
        goto LAB_1488e7199;
      }
    }
  }
  bVar18 = false;
LAB_1488e7199:
  FString::PrintfImpl(&local_320,L"IsTimerActive called with a paused timer");
  FString::PrintfImpl(&local_330,L"%s - %d: %s");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_330.Data.ArrayNum != 0) {
    FVar15.Data = local_330.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestFalse(param_2,(wchar_t *)FVar15.Data,bVar18);
  if (local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_330.Data.AllocatorInstance.Data);
  }
  if (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_320.Data.AllocatorInstance.Data);
  }
  local_578.Handle = FVar6.Handle;
  pFVar13 = FTimerManager::FindTimer(this,&local_578);
  if ((pFVar13 == (FTimerData *)0x0) || (pFVar13->Status != Paused)) {
    bVar18 = false;
  }
  else {
    bVar18 = true;
  }
  FString::PrintfImpl(&local_300,L"IsTimerPaused called with a paused timer");
  FString::PrintfImpl(&local_310,L"%s - %d: %s");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_310.Data.ArrayNum != 0) {
    FVar15.Data = local_310.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(param_2,(wchar_t *)FVar15.Data,bVar18);
  if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_310.Data.AllocatorInstance.Data);
  }
  if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_300.Data.AllocatorInstance.Data);
  }
  fVar21 = FTimerManager::GetTimerElapsed(this,FVar6);
  FString::PrintfImpl(&local_2e0,L"GetTimerElapsed called with a paused timer after one step");
  FString::PrintfImpl(&local_2f0,L"%s - %d: %s");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_2f0.Data.ArrayNum != 0) {
    FVar15.Data = local_2f0.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue
            (param_2,(wchar_t *)FVar15.Data,(float)((uint)(fVar21 - fVar3) & uVar16) <= fVar19);
  if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
  }
  if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
  }
  fVar21 = FTimerManager::GetTimerRemaining(this,FVar6);
  FString::PrintfImpl(&local_2c0,L"GetTimerRemaining called with a paused timer after one step");
  FString::PrintfImpl(&local_2d0,L"%s - %d: %s");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_2d0.Data.ArrayNum != 0) {
    FVar15.Data = local_2d0.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue
            (param_2,(wchar_t *)FVar15.Data,(float)((uint)(fVar21 - fVar20) & uVar16) <= fVar19);
  if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
  }
  if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
  }
  FTimerManager::UnPauseTimer(this,FVar6);
  local_570.Handle = FVar6.Handle;
  pFVar13 = FTimerManager::FindTimer(this,&local_570);
  FString::PrintfImpl(&local_2a0,L"TimerExists called with a pending timer");
  FString::PrintfImpl(&local_2b0,L"%s - %d: %s");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_2b0.Data.ArrayNum != 0) {
    FVar15.Data = local_2b0.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(param_2,(wchar_t *)FVar15.Data,pFVar13 != (FTimerData *)0x0);
  if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
  }
  if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
  }
  local_568.Handle = FVar6.Handle;
  pFVar13 = FTimerManager::FindTimer(this,&local_568);
  if ((pFVar13 == (FTimerData *)0x0) || (pFVar13->Status == Paused)) {
    bVar18 = false;
  }
  else {
    bVar18 = true;
  }
  FString::PrintfImpl(&local_280,L"IsTimerActive called with a pending timer");
  FString::PrintfImpl(&local_290,L"%s - %d: %s");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_290.Data.ArrayNum != 0) {
    FVar15.Data = local_290.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(param_2,(wchar_t *)FVar15.Data,bVar18);
  if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_290.Data.AllocatorInstance.Data);
  }
  if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_280.Data.AllocatorInstance.Data);
  }
  local_560.Handle = FVar6.Handle;
  pFVar13 = FTimerManager::FindTimer(this,&local_560);
  if ((pFVar13 == (FTimerData *)0x0) || (pFVar13->Status != Paused)) {
    bVar18 = false;
  }
  else {
    bVar18 = true;
  }
  FString::PrintfImpl(&local_260,L"IsTimerPaused called with a pending timer");
  FString::PrintfImpl(&local_270,L"%s - %d: %s");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_270.Data.ArrayNum != 0) {
    FVar15.Data = local_270.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestFalse(param_2,(wchar_t *)FVar15.Data,bVar18);
  if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_270.Data.AllocatorInstance.Data);
  }
  if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_260.Data.AllocatorInstance.Data);
  }
  TimerTest_TickWorld(param_1,fVar3);
  local_558.Handle = FVar6.Handle;
  pFVar13 = FTimerManager::FindTimer(this,&local_558);
  FString::PrintfImpl(&local_240,L"TimerExists called with a completed timer");
  FString::PrintfImpl(&local_250,L"%s - %d: %s");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_250.Data.ArrayNum != 0) {
    FVar15.Data = local_250.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestFalse(param_2,(wchar_t *)FVar15.Data,pFVar13 != (FTimerData *)0x0);
  if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_250.Data.AllocatorInstance.Data);
  }
  if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_240.Data.AllocatorInstance.Data);
  }
  bVar18 = local_res18[0] == 1;
  FString::PrintfImpl(&local_220,L"Count of callback executions");
  FString::PrintfImpl(&local_230,L"%s - %d: %s");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_230.Data.ArrayNum != 0) {
    FVar15.Data = local_230.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(param_2,(wchar_t *)FVar15.Data,bVar18);
  if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_230.Data.AllocatorInstance.Data);
  }
  if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_220.Data.AllocatorInstance.Data);
  }
  FTimerManager::SetTimer
            (this,&local_res20,
             (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)&local_588,
             fVar5,false,fVar4);
  FTimerManager::SetTimer(this,&local_res20,0.0,false,fVar4);
  local_550.Handle = local_res20.Handle;
  pFVar13 = FTimerManager::FindTimer(this,&local_550);
  FString::PrintfImpl(&local_200,L"TimerExists called with a reset timer");
  FString::PrintfImpl(&local_210,L"%s - %d: %s");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_210.Data.ArrayNum != 0) {
    FVar15.Data = local_210.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestFalse(param_2,(wchar_t *)FVar15.Data,pFVar13 != (FTimerData *)0x0);
  if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_210.Data.AllocatorInstance.Data);
  }
  if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_200.Data.AllocatorInstance.Data);
  }
  local_res18[0] = 0;
  FTimerManager::SetTimer
            (this,&local_res20,
             (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)&local_588,
             fVar5,true,fVar4);
  TimerTest_TickWorld(param_1,fVar19);
  fVar3 = __real_40000000;
  TimerTest_TickWorld(param_1,__real_40000000);
  FVar6.Handle = local_res20.Handle;
  local_548.Handle = local_res20.Handle;
  pFVar13 = FTimerManager::FindTimer(this,&local_548);
  FString::PrintfImpl(&local_1e0,L"TimerExists called with a looping timer");
  FString::PrintfImpl(&local_1f0,L"%s - %d: %s");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_1f0.Data.ArrayNum != 0) {
    FVar15.Data = local_1f0.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(param_2,(wchar_t *)FVar15.Data,pFVar13 != (FTimerData *)0x0);
  if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
  }
  if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
  }
  local_540.Handle = FVar6.Handle;
  pFVar13 = FTimerManager::FindTimer(this,&local_540);
  if ((pFVar13 == (FTimerData *)0x0) || (pFVar13->Status == Paused)) {
    bVar18 = false;
  }
  else {
    bVar18 = true;
  }
  FString::PrintfImpl(&local_1c0,L"IsTimerActive called with a looping timer");
  FString::PrintfImpl(&local_1d0,L"%s - %d: %s");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_1d0.Data.ArrayNum != 0) {
    FVar15.Data = local_1d0.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(param_2,(wchar_t *)FVar15.Data,bVar18);
  if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
  }
  if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
  }
  bVar18 = local_res18[0] == 1;
  FString::PrintfImpl(&local_1a0,L"Count of callback executions");
  FString::PrintfImpl(&local_1b0,L"%s - %d: %s");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_1b0.Data.ArrayNum != 0) {
    FVar15.Data = local_1b0.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(param_2,(wchar_t *)FVar15.Data,bVar18);
  if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
  }
  if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
  }
  uVar8 = (uint)local_res18[0];
  fVar20 = FTimerManager::GetTimerElapsed(this,FVar6);
  FString::PrintfImpl(&local_180,L"GetTimerElapsed called with a looping timer");
  FString::PrintfImpl(&local_190,L"%s - %d: %s");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_190.Data.ArrayNum != 0) {
    FVar15.Data = local_190.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue
            (param_2,(wchar_t *)FVar15.Data,
             (float)((uint)(fVar20 - (fVar3 - (float)uVar8 * fVar5)) & uVar16) <= fVar19);
  if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.Data.AllocatorInstance.Data);
  }
  if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.Data.AllocatorInstance.Data);
  }
  uVar8 = (uint)local_res18[0];
  fVar20 = FTimerManager::GetTimerRemaining(this,FVar6);
  FString::PrintfImpl(&local_160,L"GetTimerRemaining called with a looping timer");
  FString::PrintfImpl(&local_170,L"%s - %d: %s");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_170.Data.ArrayNum != 0) {
    FVar15.Data = local_170.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue
            (param_2,(wchar_t *)FVar15.Data,
             (float)((uint)(fVar20 - ((float)(uVar8 + 1) * fVar5 - fVar3)) & uVar16) <= fVar19);
  if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data.AllocatorInstance.Data);
  }
  TimerTest_TickWorld(param_1,fVar3);
  bVar18 = local_res18[0] == 2;
  FString::PrintfImpl(&local_140,L"Count of callback executions");
  FString::PrintfImpl(&local_150,L"%s - %d: %s");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_150.Data.ArrayNum != 0) {
    FVar15.Data = local_150.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(param_2,(wchar_t *)FVar15.Data,bVar18);
  if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.Data.AllocatorInstance.Data);
  }
  if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data.AllocatorInstance.Data);
  }
  fVar3 = __real_40800000;
  fVar21 = __real_40800000 - (float)local_res18[0] * fVar5;
  fVar20 = FTimerManager::GetTimerElapsed(this,FVar6);
  FString::PrintfImpl(&local_120,L"GetTimerElapsed called with a looping timer");
  FString::PrintfImpl(&local_130,L"%s - %d: %s");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_130.Data.ArrayNum != 0) {
    FVar15.Data = local_130.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue
            (param_2,(wchar_t *)FVar15.Data,(float)((uint)(fVar20 - fVar21) & uVar16) <= fVar19);
  if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.Data.AllocatorInstance.Data);
  }
  if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Data.AllocatorInstance.Data);
  }
  uVar8 = (uint)local_res18[0];
  fVar20 = FTimerManager::GetTimerRemaining(this,FVar6);
  FString::PrintfImpl(&local_100,L"GetTimerRemaining called with a looping timer");
  FString::PrintfImpl(&local_110,L"%s - %d: %s");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_110.Data.ArrayNum != 0) {
    FVar15.Data = local_110.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue
            (param_2,(wchar_t *)FVar15.Data,
             (float)((uint)(fVar20 - ((float)(uVar8 + 1) * fVar5 - fVar3)) & uVar16) <= fVar19);
  if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data.AllocatorInstance.Data);
  }
  if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
  FTimerManager::SetTimer(this,&local_res20,0.0,false,fVar4);
  local_538.Handle = local_res20.Handle;
  pFVar13 = FTimerManager::FindTimer(this,&local_538);
  FString::PrintfImpl(&local_e0,L"TimerExists called with a reset looping timer");
  FString::PrintfImpl(&local_f0,L"%s - %d: %s");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_f0.Data.ArrayNum != 0) {
    FVar15.Data = local_f0.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestFalse(param_2,(wchar_t *)FVar15.Data,pFVar13 != (FTimerData *)0x0);
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  if (local_588.DelegateSize != 0) {
    if (local_588.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      return true;
    }
    (*(code *)**(undefined8 **)local_588.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_588,0,0,0x10);
    local_588.DelegateSize = 0;
  }
  if (local_588.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_588.DelegateAllocator);
  }
  return true;
}

// TimerTest_TickWorld @ 1488e7f90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl TimerTest_TickWorld(UWorld *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = __real_bdcccccd;
  fVar1 = __real_3dcccccd;
  for (; 0.0 < param_2; param_2 = param_2 + fVar2) {
    fVar3 = param_2;
    if (fVar1 <= param_2) {
      fVar3 = fVar1;
    }
    UWorld::Tick(param_1,LEVELTICK_All,fVar3);
    GFrameCounter = GFrameCounter + 1;
  }
  return;
}

// Z_Construct_UClass_ATriggerBase_NoRegister @ 1488ec9b0

UClass * __cdecl Z_Construct_UClass_ATriggerBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ATriggerBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TriggerBase",
               &Z_Registration_Info_UClass_ATriggerBase.InnerSingleton,
               ATriggerBase::StaticRegisterNativesATriggerBase,0x2c8,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ATriggerBase>,InternalVTableHelperCtorCaller<ATriggerBase>,
               local_res8,AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ATriggerBase.InnerSingleton;
}

// Z_Construct_UClass_ATriggerVolume_NoRegister @ 1488eca70

UClass * __cdecl Z_Construct_UClass_ATriggerVolume_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ATriggerVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TriggerVolume",
               &Z_Registration_Info_UClass_ATriggerVolume.InnerSingleton,
               ATriggerVolume::StaticRegisterNativesATriggerVolume,0x2f8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ATriggerVolume>,InternalVTableHelperCtorCaller<ATriggerVolume>,
               local_res8,AVolume::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ATriggerVolume.InnerSingleton;
}

// Z_Construct_UClass_UTextureLODSettings_NoRegister @ 1488ecb30

UClass * __cdecl Z_Construct_UClass_UTextureLODSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTextureLODSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TextureLODSettings",
               &Z_Registration_Info_UClass_UTextureLODSettings.InnerSingleton,
               UTextureLODSettings::StaticRegisterNativesUTextureLODSettings,0x40,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"DeviceProfiles",
               InternalConstructor<UTextureLODSettings>,
               InternalVTableHelperCtorCaller<UTextureLODSettings>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextureLODSettings.InnerSingleton;
}

// Z_Construct_UClass_UTextureLightProfile_NoRegister @ 1488ecbe0

UClass * __cdecl Z_Construct_UClass_UTextureLightProfile_NoRegister(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UTextureLightProfile.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TextureLightProfile",
               &Z_Registration_Info_UClass_UTextureLightProfile.InnerSingleton,
               UTextureLightProfile::StaticRegisterNativesUTextureLightProfile,0x178,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UTextureLightProfile>,
               InternalVTableHelperCtorCaller<UTextureLightProfile>,aFStackX_8,
               UTexture2D::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextureLightProfile.InnerSingleton;
}

// Z_Construct_UClass_UTextureRenderTarget2DArray_NoRegister @ 1488ecbf0

UClass * __cdecl Z_Construct_UClass_UTextureRenderTarget2DArray_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTextureRenderTarget2DArray.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TextureRenderTarget2DArray",
               &Z_Registration_Info_UClass_UTextureRenderTarget2DArray.InnerSingleton,
               UTextureRenderTarget2DArray::StaticRegisterNativesUTextureRenderTarget2DArray,0x178,8
               ,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UTextureRenderTarget2DArray>,
               InternalVTableHelperCtorCaller<UTextureRenderTarget2DArray>,local_res8,
               UTextureRenderTarget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextureRenderTarget2DArray.InnerSingleton;
}

// Z_Construct_UClass_UTextureRenderTarget2D_NoRegister @ 1488eccb0

UClass * __cdecl Z_Construct_UClass_UTextureRenderTarget2D_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTextureRenderTarget2D.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TextureRenderTarget2D",
               &Z_Registration_Info_UClass_UTextureRenderTarget2D.InnerSingleton,
               UTextureRenderTarget2D::StaticRegisterNativesUTextureRenderTarget2D,0x180,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UTextureRenderTarget2D>,
               InternalVTableHelperCtorCaller<UTextureRenderTarget2D>,local_res8,
               UTextureRenderTarget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextureRenderTarget2D.InnerSingleton;
}

// Z_Construct_UClass_UTextureRenderTargetCube_NoRegister @ 1488ecd70

UClass * __cdecl Z_Construct_UClass_UTextureRenderTargetCube_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTextureRenderTargetCube.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TextureRenderTargetCube",
               &Z_Registration_Info_UClass_UTextureRenderTargetCube.InnerSingleton,
               UTextureRenderTargetCube::StaticRegisterNativesUTextureRenderTargetCube,0x178,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UTextureRenderTargetCube>,
               InternalVTableHelperCtorCaller<UTextureRenderTargetCube>,local_res8,
               UTextureRenderTarget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextureRenderTargetCube.InnerSingleton;
}

// Z_Construct_UClass_UTextureRenderTargetVolume_NoRegister @ 1488ece30

UClass * __cdecl Z_Construct_UClass_UTextureRenderTargetVolume_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTextureRenderTargetVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TextureRenderTargetVolume",
               &Z_Registration_Info_UClass_UTextureRenderTargetVolume.InnerSingleton,
               UTextureRenderTargetVolume::StaticRegisterNativesUTextureRenderTargetVolume,0x178,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UTextureRenderTargetVolume>,
               InternalVTableHelperCtorCaller<UTextureRenderTargetVolume>,local_res8,
               UTextureRenderTarget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextureRenderTargetVolume.InnerSingleton;
}

// Z_Construct_UClass_UTextureRenderTarget_NoRegister @ 1488ecef0

UClass * __cdecl Z_Construct_UClass_UTextureRenderTarget_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTextureRenderTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TextureRenderTarget",
               &Z_Registration_Info_UClass_UTextureRenderTarget.InnerSingleton,
               UTextureRenderTarget::StaticRegisterNativesUTextureRenderTarget,0x158,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UTextureRenderTarget>,
               InternalVTableHelperCtorCaller<UTextureRenderTarget>,local_res8,UTexture::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextureRenderTarget.InnerSingleton;
}

// Z_Construct_UClass_UTimelineTemplate_NoRegister @ 1488ecfb0

UClass * __cdecl Z_Construct_UClass_UTimelineTemplate_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTimelineTemplate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TimelineTemplate",
               &Z_Registration_Info_UClass_UTimelineTemplate.InnerSingleton,
               UTimelineTemplate::StaticRegisterNativesUTimelineTemplate,0xb8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTimelineTemplate>,
               InternalVTableHelperCtorCaller<UTimelineTemplate>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTimelineTemplate.InnerSingleton;
}

// Z_Construct_UClass_UUniversalObjectLocatorScriptingExtensions_NoRegister @ 1488ed060

UClass * __cdecl Z_Construct_UClass_UUniversalObjectLocatorScriptingExtensions_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUniversalObjectLocatorScriptingExtensions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"UniversalObjectLocatorScriptingExtensions",
               &Z_Registration_Info_UClass_UUniversalObjectLocatorScriptingExtensions.InnerSingleton
               ,UUniversalObjectLocatorScriptingExtensions::
                StaticRegisterNativesUUniversalObjectLocatorScriptingExtensions,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UUniversalObjectLocatorScriptingExtensions>,
               InternalVTableHelperCtorCaller<UUniversalObjectLocatorScriptingExtensions>,local_res8
               ,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUniversalObjectLocatorScriptingExtensions.InnerSingleton;
}

// Z_Construct_UEnum_Engine_ETextureEncodeEffort @ 1488ed120

UEnum * __cdecl Z_Construct_UEnum_Engine_ETextureEncodeEffort(void)

{
  if (Z_Registration_Info_UEnum_ETextureEncodeEffort.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ETextureEncodeEffort.InnerSingleton,
               &Z_Construct_UEnum_Engine_ETextureEncodeEffort_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ETextureEncodeEffort.InnerSingleton;
}

// Z_Construct_UEnum_Engine_ETextureEncodeSpeedOverride @ 1488ed160

UEnum * __cdecl Z_Construct_UEnum_Engine_ETextureEncodeSpeedOverride(void)

{
  if (Z_Registration_Info_UEnum_ETextureEncodeSpeedOverride.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ETextureEncodeSpeedOverride.InnerSingleton,
               &Z_Construct_UEnum_Engine_ETextureEncodeSpeedOverride_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ETextureEncodeSpeedOverride.InnerSingleton;
}

// Z_Construct_UEnum_Engine_ETextureRenderTargetSampleCount @ 1488ed1a0

UEnum * __cdecl Z_Construct_UEnum_Engine_ETextureRenderTargetSampleCount(void)

{
  if (Z_Registration_Info_UEnum_ETextureRenderTargetSampleCount.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ETextureRenderTargetSampleCount.InnerSingleton,
               &Z_Construct_UEnum_Engine_ETextureRenderTargetSampleCount_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ETextureRenderTargetSampleCount.InnerSingleton;
}

// Z_Construct_UEnum_Engine_ETextureUniversalTiling @ 1488ed1e0

UEnum * __cdecl Z_Construct_UEnum_Engine_ETextureUniversalTiling(void)

{
  if (Z_Registration_Info_UEnum_ETextureUniversalTiling.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ETextureUniversalTiling.InnerSingleton,
               &Z_Construct_UEnum_Engine_ETextureUniversalTiling_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ETextureUniversalTiling.InnerSingleton;
}

// Z_Construct_UScriptStruct_FActorLocatorFragment @ 1488ed220

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FActorLocatorFragment(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FActorLocatorFragment.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FActorLocatorFragment.InnerSingleton,
               &Z_Construct_UScriptStruct_FActorLocatorFragment_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FActorLocatorFragment.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FActorLocatorFragment.InnerSingleton;
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

// Z_Construct_UScriptStruct_FActorLocatorFragmentResolveParameter @ 1488ed2a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FActorLocatorFragmentResolveParameter(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FActorLocatorFragmentResolveParameter.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FActorLocatorFragmentResolveParameter.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FActorLocatorFragmentResolveParameter_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FActorLocatorFragmentResolveParameter.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FActorLocatorFragmentResolveParameter.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimInstanceLocatorFragment @ 1488ed320

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimInstanceLocatorFragment(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimInstanceLocatorFragment.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimInstanceLocatorFragment.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimInstanceLocatorFragment_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimInstanceLocatorFragment.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimInstanceLocatorFragment.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAssetLocatorFragment @ 1488ed3a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAssetLocatorFragment(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAssetLocatorFragment.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAssetLocatorFragment.InnerSingleton,
               &Z_Construct_UScriptStruct_FAssetLocatorFragment_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAssetLocatorFragment.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FAssetLocatorFragment.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTTTrackId @ 1488ed420

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTTTrackId(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTTTrackId.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTTTrackId.InnerSingleton,
               &Z_Construct_UScriptStruct_FTTTrackId_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTTTrackId.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTTTrackId.InnerSingleton;
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

// StaticResource'' @ 150404fb0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
`dynamic_atexit_destructor_for_'TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
::StaticResource__(void)

{
  code *pcVar1;
  bool bVar2;
  
  TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
  ::StaticResource._padding_ =
       (longlong)
       &
       ___7FStaticStateResource___TStaticStateRHI_V__TStaticDepthStencilState__0A__06_0A__06_0A__0A__0A__0A__06_0A__0A__0A__0PP__0PP___V__TRefCountPtr_VFRHIDepthStencilState____PEAVFRHIDepthStencilState____6B_
  ;
  if ((GRHIGlobals.IsRHIInitialized) && (GRHIGlobals.SupportsRHIThread)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GRHIGlobals.IsRHIInitialized || !GRHIGlobals.SupportsRHIThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RHIStaticStates.h"
                       ,99,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRenderResource::ReleaseResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
              ::StaticResource);
  if (TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
      ::StaticResource.StateRHI.Reference != (FRHIDepthStencilState *)0x0) {
    FRHIResource::Release
              ((FRHIResource *)
               TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
               ::StaticResource.StateRHI.Reference);
  }
  FRenderResource::~FRenderResource
            ((FRenderResource *)
             &TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
              ::StaticResource);
  return;
}

// TemplatePostfix'' @ 150405030

void __cdecl `dynamic_atexit_destructor_for_'UTimelineTemplate::TemplatePostfix__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UTimelineTemplate::TemplatePostfix.Data.AllocatorInstance.Data;
  if (UTimelineTemplate::TemplatePostfix.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UTimelineTemplate::TemplatePostfix.Data.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'AddIndirectTestTickFunctionsCmd'' @ 150405050

void __cdecl _dynamic_atexit_destructor_for__AddIndirectTestTickFunctionsCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&AddIndirectTestTickFunctionsCmd);
  return;
}

// `dynamic_atexit_destructor_for_'AddTestTickFunctionsCmd'' @ 150405070

void __cdecl _dynamic_atexit_destructor_for__AddTestTickFunctionsCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&AddTestTickFunctionsCmd);
  return;
}

// `dynamic_atexit_destructor_for_'CPrio_CleanupTaskPriority'' @ 150405090

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__CPrio_CleanupTaskPriority__(void)

{
  CPrio_CleanupTaskPriority.Variable._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CPrio_CleanupTaskPriority.Variable)
  ;
  if (CPrio_CleanupTaskPriority.FullHelpText.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(CPrio_CleanupTaskPriority.FullHelpText.Data.AllocatorInstance.Data);
  }
  if (CPrio_CleanupTaskPriority.RawSetting.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(CPrio_CleanupTaskPriority.RawSetting.Data.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'CPrio_DispatchTaskPriority'' @ 1504050e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__CPrio_DispatchTaskPriority__(void)

{
  CPrio_DispatchTaskPriority.Variable._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CPrio_DispatchTaskPriority.Variable);
  if (CPrio_DispatchTaskPriority.FullHelpText.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(CPrio_DispatchTaskPriority.FullHelpText.Data.AllocatorInstance.Data);
  }
  if (CPrio_DispatchTaskPriority.RawSetting.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(CPrio_DispatchTaskPriority.RawSetting.Data.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'CPrio_HiPriAsyncTickTaskPriority'' @ 150405130

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__CPrio_HiPriAsyncTickTaskPriority__(void)

{
  CPrio_HiPriAsyncTickTaskPriority.Variable._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CPrio_HiPriAsyncTickTaskPriority.Variable);
  if (CPrio_HiPriAsyncTickTaskPriority.FullHelpText.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(CPrio_HiPriAsyncTickTaskPriority.FullHelpText.Data.AllocatorInstance.Data);
  }
  if (CPrio_HiPriAsyncTickTaskPriority.RawSetting.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(CPrio_HiPriAsyncTickTaskPriority.RawSetting.Data.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'CPrio_NormalAsyncTickTaskPriority'' @ 150405180

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__CPrio_NormalAsyncTickTaskPriority__(void)

{
  CPrio_NormalAsyncTickTaskPriority.Variable._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CPrio_NormalAsyncTickTaskPriority.Variable);
  if (CPrio_NormalAsyncTickTaskPriority.FullHelpText.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(CPrio_NormalAsyncTickTaskPriority.FullHelpText.Data.AllocatorInstance.Data);
  }
  if (CPrio_NormalAsyncTickTaskPriority.RawSetting.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(CPrio_NormalAsyncTickTaskPriority.RawSetting.Data.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowAsyncComponentTicks'' @ 1504051d0

void __cdecl _dynamic_atexit_destructor_for__CVarAllowAsyncComponentTicks__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAllowAsyncComponentTicks);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowAsyncTickCleanup'' @ 1504051f0

void __cdecl _dynamic_atexit_destructor_for__CVarAllowAsyncTickCleanup__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAllowAsyncTickCleanup);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowAsyncTickDispatch'' @ 150405210

void __cdecl _dynamic_atexit_destructor_for__CVarAllowAsyncTickDispatch__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAllowAsyncTickDispatch);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowBatchedTicks'' @ 150405230

void __cdecl _dynamic_atexit_destructor_for__CVarAllowBatchedTicks__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAllowBatchedTicks);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowBatchedTicksUnordered'' @ 150405250

void __cdecl _dynamic_atexit_destructor_for__CVarAllowBatchedTicksUnordered__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAllowBatchedTicksUnordered);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowConcurrentQueue'' @ 150405270

void __cdecl _dynamic_atexit_destructor_for__CVarAllowConcurrentQueue__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAllowConcurrentQueue);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowOptimizedPrerequisites'' @ 150405290

void __cdecl _dynamic_atexit_destructor_for__CVarAllowOptimizedPrerequisites__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAllowOptimizedPrerequisites);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDumpAllTimerLogsThreshold'' @ 1504052b0

void __cdecl _dynamic_atexit_destructor_for__CVarDumpAllTimerLogsThreshold__(void)

{
  CVarDumpAllTimerLogsThreshold._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDumpAllTimerLogsThreshold);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDumpTimerLogResolveVirtualFunctions'' @ 1504052d0

void __cdecl _dynamic_atexit_destructor_for__CVarDumpTimerLogResolveVirtualFunctions__(void)

{
  CVarDumpTimerLogResolveVirtualFunctions._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarDumpTimerLogResolveVirtualFunctions);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDumpTimerLogSymbolNames'' @ 1504052f0

void __cdecl _dynamic_atexit_destructor_for__CVarDumpTimerLogSymbolNames__(void)

{
  CVarDumpTimerLogSymbolNames._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDumpTimerLogSymbolNames);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDumpTimerLogsThreshold'' @ 150405310

void __cdecl _dynamic_atexit_destructor_for__CVarDumpTimerLogsThreshold__(void)

{
  CVarDumpTimerLogsThreshold._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDumpTimerLogsThreshold);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGBuildTimerSourceList'' @ 150405330

void __cdecl _dynamic_atexit_destructor_for__CVarGBuildTimerSourceList__(void)

{
  CVarGBuildTimerSourceList._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGBuildTimerSourceList);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGlobalTextureLODBias'' @ 150405350

void __cdecl _dynamic_atexit_destructor_for__CVarGlobalTextureLODBias__(void)

{
  CVarGlobalTextureLODBias._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGlobalTextureLODBias);
  return;
}

// `dynamic_atexit_destructor_for_'CVarIdleTaskWorkMS'' @ 150405370

void __cdecl _dynamic_atexit_destructor_for__CVarIdleTaskWorkMS__(void)

{
  CVarIdleTaskWorkMS._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarIdleTaskWorkMS);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLightweightTimeguardThresholdMS'' @ 150405390

void __cdecl _dynamic_atexit_destructor_for__CVarLightweightTimeguardThresholdMS__(void)

{
  CVarLightweightTimeguardThresholdMS._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarLightweightTimeguardThresholdMS);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLogTicks'' @ 1504053b0

void __cdecl _dynamic_atexit_destructor_for__CVarLogTicks__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLogTicks);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLogTicksShowPrerequistes'' @ 1504053d0

void __cdecl _dynamic_atexit_destructor_for__CVarLogTicksShowPrerequistes__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLogTicksShowPrerequistes);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaxExpiredTimersToLog'' @ 1504053f0

void __cdecl _dynamic_atexit_destructor_for__CVarMaxExpiredTimersToLog__(void)

{
  CVarMaxExpiredTimersToLog._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMaxExpiredTimersToLog);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRecordAllWorldTypes'' @ 150405410

void __cdecl _dynamic_atexit_destructor_for__CVarRecordAllWorldTypes__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRecordAllWorldTypes);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStallStartFrame'' @ 150405430

void __cdecl _dynamic_atexit_destructor_for__CVarStallStartFrame__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarStallStartFrame);
  return;
}

// `dynamic_atexit_destructor_for_'CVarTimerManagerGuaranteeEngineTickDelay'' @ 150405450

void __cdecl _dynamic_atexit_destructor_for__CVarTimerManagerGuaranteeEngineTickDelay__(void)

{
  CVarTimerManagerGuaranteeEngineTickDelay._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarTimerManagerGuaranteeEngineTickDelay);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUITextureLODBias'' @ 150405470

void __cdecl _dynamic_atexit_destructor_for__CVarUITextureLODBias__(void)

{
  CVarUITextureLODBias._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUITextureLODBias);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 150405490

void __cdecl
``FTextureRenderTarget2DResource::UpdateDeferredResource'::__l13::<lambda_1>::operator()<>'::__l2::
_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150405497. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1504054b0

void __cdecl
```FCanvasTileRendererItem::FRenderData::RenderTiles'::__l17::<lambda_1>::
operator()<wchar_t_const_*>'::__l3::<lambda_2>::
operator()<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[3],wchar_t_const_*_&&>_>'
::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001504054b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 1504054d0

void __cdecl
```FCanvasTriangleRendererItem::FRenderData::RenderTriangles'::__l17::<lambda_1>::
operator()<wchar_t_const_*>'::__l3::<lambda_2>::
operator()<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[3],wchar_t_const_*_&&>_>'
::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001504054d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'EmptyDiffableObject'' @ 1504054f0

void __cdecl
`UE::Transaction::DiffUtil::FDiffableObjectArchetypeCache::GetArchetypeDiffableObject'::__l2::
_dynamic_atexit_destructor_for__EmptyDiffableObject__(void)

{
  if (EmptyDiffableObject.SerializedTaggedData.Pairs.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(EmptyDiffableObject.SerializedTaggedData.Pairs.AllocatorInstance.Data);
  }
  if (EmptyDiffableObject.SerializedData.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(EmptyDiffableObject.SerializedData.Data.AllocatorInstance.Data);
  }
  if (EmptyDiffableObject.ObjectArchetype.CachedSubObjectHierarchy.AllocatorInstance.SecondaryData
      != (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
    FMemory::Free((void *)EmptyDiffableObject.ObjectArchetype.CachedSubObjectHierarchy.
                          AllocatorInstance.SecondaryData);
  }
  if (EmptyDiffableObject.ObjectArchetype.SubObjectHierarchyIDs.AllocatorInstance.SecondaryData !=
      (ForElementType<FName>)0x0) {
    FMemory::Free((void *)EmptyDiffableObject.ObjectArchetype.SubObjectHierarchyIDs.
                          AllocatorInstance.SecondaryData);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'FTimerManagerTestAutomationTestInstance'' @ 150405550

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FTimerManagerTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FTimerManagerTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FlushFilterStateCommand'' @ 150405570

void __cdecl _dynamic_atexit_destructor_for__FlushFilterStateCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&FlushFilterStateCommand);
  return;
}

// `dynamic_atexit_destructor_for_'GObjectFilterAnnotations'' @ 150405590

void __cdecl _dynamic_atexit_destructor_for__GObjectFilterAnnotations__(void)

{
  GObjectFilterAnnotations._padding_ = (longlong)&___7FTraceUObjectAnnotation__6B_;
  FTraceUObjectAnnotation::RemoveAllAnnotations(&GObjectFilterAnnotations);
  if ((GObjectFilterAnnotations.AnnotationMapScopeLock.bIsSet != false) &&
     (GObjectFilterAnnotations.AnnotationMapScopeLock.TypedValue.Mutex !=
      (FWindowsRecursiveMutex *)0x0)) {
    LeaveCriticalSection
              ((LPCRITICAL_SECTION)GObjectFilterAnnotations.AnnotationMapScopeLock.TypedValue.Mutex)
    ;
    GObjectFilterAnnotations.AnnotationMapScopeLock.TypedValue.Mutex = (FWindowsRecursiveMutex *)0x0
    ;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&GObjectFilterAnnotations.AnnotationMapCritical);
  GObjectFilterAnnotations.AnnotationMap._72_4_ = 0;
  if (GObjectFilterAnnotations.AnnotationMap._64_8_ != 0) {
    FMemory::Free((void *)GObjectFilterAnnotations.AnnotationMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FTraceFilterObjectAnnotation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FTraceFilterObjectAnnotation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FTraceFilterObjectAnnotation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GObjectFilterAnnotations.AnnotationMap);
  GObjectFilterAnnotations._padding_ = (longlong)&___7FUObjectDeleteListener_FUObjectArray__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'GPUStat_CanvasDrawTiles'' @ 150405630

void __cdecl _dynamic_atexit_destructor_for__GPUStat_CanvasDrawTiles__(void)

{
  GPUStat_CanvasDrawTiles._104_4_ = 0;
  if (GPUStat_CanvasDrawTiles._96_8_ != 0) {
    FMemory::Free((void *)GPUStat_CanvasDrawTiles._96_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GPUStat_CanvasDrawTiles.field_0x20);
  return;
}

// `dynamic_atexit_destructor_for_'GPUStat_CanvasDrawTriangles'' @ 150405670

void __cdecl _dynamic_atexit_destructor_for__GPUStat_CanvasDrawTriangles__(void)

{
  GPUStat_CanvasDrawTriangles._104_4_ = 0;
  if (GPUStat_CanvasDrawTriangles._96_8_ != 0) {
    FMemory::Free((void *)GPUStat_CanvasDrawTriangles._96_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GPUStat_CanvasDrawTriangles.field_0x20);
  return;
}

// `dynamic_atexit_destructor_for_'IndirectTestTickFunctions'' @ 1504056b0

void __cdecl _dynamic_atexit_destructor_for__IndirectTestTickFunctions__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = IndirectTestTickFunctions.AllocatorInstance.Data;
  if (IndirectTestTickFunctions.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (IndirectTestTickFunctions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'ListTimersConsoleCommand'' @ 1504056d0

void __cdecl _dynamic_atexit_destructor_for__ListTimersConsoleCommand__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&ListTimersConsoleCommand);
  return;
}

// `dynamic_atexit_destructor_for_'LogTextureEncodingSettings'' @ 1504056f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogTextureEncodingSettings__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogTextureEncodingSettings);
  return;
}

// `dynamic_atexit_destructor_for_'LogTick'' @ 150405710

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogTick__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogTick);
  return;
}

// `dynamic_atexit_destructor_for_'LogTimeline'' @ 150405730

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogTimeline__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogTimeline);
  return;
}

// `dynamic_atexit_destructor_for_'RemoveTestTickFunctionsCmd'' @ 150405750

void __cdecl _dynamic_atexit_destructor_for__RemoveTestTickFunctionsCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&RemoveTestTickFunctionsCmd);
  return;
}

// `dynamic_atexit_destructor_for_'Singleton'' @ 150405770

void __cdecl
`FTickableGameObject::GetStatics'::__l2::_dynamic_atexit_destructor_for__Singleton__(void)

{
  ::Singleton.NewTickableObjects._72_4_ = 0;
  if (::Singleton.NewTickableObjects._64_8_ != 0) {
    FMemory::Free((void *)::Singleton.NewTickableObjects._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FTickableObjectBase_*,enum_ETickableTickType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FTickableObjectBase_*,enum_ETickableTickType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&::Singleton.NewTickableObjects);
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Singleton.NewTickableObjectsCritical);
  if (::Singleton.TickableObjects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(::Singleton.TickableObjects.AllocatorInstance.Data);
  }
                    /* WARNING: Could not recover jumptable at 0x0001504057c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Singleton);
  return;
}

// `dynamic_atexit_destructor_for_'SingletonInstance'' @ 1504057e0

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
`FTickTaskManager::Get'::__l2::_dynamic_atexit_destructor_for__SingletonInstance__(void)

{
  if (`public:_static_class_FTickTaskManager&___ptr64___cdecl_FTickTaskManager::Get(void)'::__l2::
      SingletonInstance.AllTickFunctions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(`public:_static_class_FTickTaskManager&___ptr64___cdecl_FTickTaskManager::Get(void)'
                  ::__l2::SingletonInstance.AllTickFunctions.AllocatorInstance.Data);
  }
  if (`public:_static_class_FTickTaskManager&___ptr64___cdecl_FTickTaskManager::Get(void)'::__l2::
      SingletonInstance.LevelList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(`public:_static_class_FTickTaskManager&___ptr64___cdecl_FTickTaskManager::Get(void)'
                  ::__l2::SingletonInstance.LevelList.AllocatorInstance.Data);
  }
  `public:_static_class_FTickTaskManager&___ptr64___cdecl_FTickTaskManager::Get(void)'::__l2::
  SingletonInstance._padding_ = (longlong)&___7FTickTaskManagerInterface__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'SingletonInstance'' @ 150405820

void __cdecl
`FTickTaskSequencer::Get'::__l2::_dynamic_atexit_destructor_for__SingletonInstance__(void)

{
  FTickTaskSequencer::~FTickTaskSequencer
            (&`public:_static_class_FTickTaskSequencer&___ptr64___cdecl_FTickTaskSequencer::Get(void)'
              ::__l2::SingletonInstance);
  return;
}

// `dynamic_atexit_destructor_for_'TestTickFunctions'' @ 150405840

void __cdecl _dynamic_atexit_destructor_for__TestTickFunctions__(void)

{
  DestructItems<FTestTickFunction,int>
            ((FTestTickFunction *)TestTickFunctions.AllocatorInstance.Data,
             TestTickFunctions.ArrayNum);
  if (TestTickFunctions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TestTickFunctions.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'TraceFiltering'' @ 150405880

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__TraceFiltering__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&TraceFiltering);
  return;
}

// operator() @ 150533280

bool __thiscall `GetNumFromRenderTargetSampleCount'::__l4::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_821742335963430822>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_821742335963430822>,
                       &`public:___cdecl_`int___cdecl_GetNumFromRenderTargetSampleCount(ETextureRenderTargetSampleCount)'::`4'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

