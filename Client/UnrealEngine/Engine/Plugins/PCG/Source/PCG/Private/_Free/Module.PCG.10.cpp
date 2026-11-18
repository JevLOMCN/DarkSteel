// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 293

// NoPin'' @ 1411a8250

void __cdecl `dynamic_initializer_for_'FPCGGraphTaskInput::NoPin__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FPCGGraphTaskInput::NoPin__);
  return;
}

// `dynamic_initializer_for_'ActorReferenceAttribute'' @ 1411a8270

void __cdecl PCGPointDataConstants::_dynamic_initializer_for__ActorReferenceAttribute__(void)

{
  ::FName::FName(&ActorReferenceAttribute,L"ActorReference");
  return;
}

// `dynamic_initializer_for_'CVarCacheCleanupBehavior'' @ 1411a8290

void __cdecl PCGGraphExecutor::_dynamic_initializer_for__CVarCacheCleanupBehavior__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarCacheCleanupBehavior,L"pcg.Cache.CleanupLevel",local_res8,
             L"Level for the cache cleanup, when the memory budget is enforced.\n 0: Release objects only;\n 1: Release objects and force garbage collection (iterative);\n 2: Release objects and force garbage collection (complete)\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarCacheCleanupBehavior__);
  return;
}

// `dynamic_initializer_for_'CVarCacheDebugging'' @ 1411a82e0

void __cdecl _dynamic_initializer_for__CVarCacheDebugging__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarCacheDebugging,L"pcg.Cache.EnableDebugging",local_res8,
             L"Enable various features for debugging the graph cache system.",0);
  atexit(_dynamic_atexit_destructor_for__CVarCacheDebugging__);
  return;
}

// `dynamic_initializer_for_'CVarCacheEnabledEditor'' @ 1411a8330

void __cdecl _dynamic_initializer_for__CVarCacheEnabledEditor__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarCacheEnabledEditor,L"pcg.Cache.Editor.Enabled",local_res8,
             L"Enables the cache system in editor worlds.",0);
  atexit(_dynamic_atexit_destructor_for__CVarCacheEnabledEditor__);
  return;
}

// `dynamic_initializer_for_'CVarCacheEnabledRuntime'' @ 1411a8380

void __cdecl _dynamic_initializer_for__CVarCacheEnabledRuntime__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarCacheEnabledRuntime,L"pcg.Cache.Runtime.Enabled",local_res8,
             L"Enables the cache system in runtime game worlds.",0);
  atexit(_dynamic_atexit_destructor_for__CVarCacheEnabledRuntime__);
  return;
}

// `dynamic_initializer_for_'CVarCacheEnabled_DEPRECATED'' @ 1411a83d0

void __cdecl _dynamic_initializer_for__CVarCacheEnabled_DEPRECATED__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  bool local_res8 [8];
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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_26>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarCacheEnabled_DEPRECATED,L"pcg.Cache.Enabled",local_res8,
             L"DEPRECATED (5.7): use pcg.Cache.Editor.Enabled and pcg.Cache.Runtime.Enabled instead."
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
  atexit(_dynamic_atexit_destructor_for__CVarCacheEnabled_DEPRECATED__);
  return;
}

// `dynamic_initializer_for_'CVarCacheMemoryBudgetEditorMB'' @ 1411a8510

void __cdecl _dynamic_initializer_for__CVarCacheMemoryBudgetEditorMB__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0x1800;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarCacheMemoryBudgetEditorMB,L"pcg.Cache.Editor.MemoryBudgetMB",local_res8,
             L"Memory budget for data in cache in editor worlds (MB).",0);
  atexit(_dynamic_atexit_destructor_for__CVarCacheMemoryBudgetEditorMB__);
  return;
}

// `dynamic_initializer_for_'CVarCacheMemoryBudgetEnabled'' @ 1411a8560

void __cdecl _dynamic_initializer_for__CVarCacheMemoryBudgetEnabled__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarCacheMemoryBudgetEnabled,L"pcg.Cache.EnableMemoryBudget",local_res8,
             L"Whether memory budget is enforced (items purged from cache to respect pcg.Cache.MemoryBudgetMB."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarCacheMemoryBudgetEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarCacheMemoryBudgetMB_DEPRECATED'' @ 1411a85b0

void __cdecl _dynamic_initializer_for__CVarCacheMemoryBudgetMB_DEPRECATED__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  int local_res8 [2];
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
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_27>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  local_res8[0] = 0x1800;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarCacheMemoryBudgetMB_DEPRECATED,L"pcg.Cache.MemoryBudgetMB",local_res8,
             L"DEPRECATED (5.7): use pcg.Cache.Editor.MemoryBudgetMB and pcg.Cache.Runtime.MemoryBudgetMB instead."
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
  atexit(_dynamic_atexit_destructor_for__CVarCacheMemoryBudgetMB_DEPRECATED__);
  return;
}

// `dynamic_initializer_for_'CVarCacheMemoryBudgetRuntimeMB'' @ 1411a86f0

void __cdecl _dynamic_initializer_for__CVarCacheMemoryBudgetRuntimeMB__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0x80;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarCacheMemoryBudgetRuntimeMB,L"pcg.Cache.Runtime.MemoryBudgetMB",local_res8,
             L"Memory budget for data in cache in game worlds (MB).",0);
  atexit(_dynamic_atexit_destructor_for__CVarCacheMemoryBudgetRuntimeMB__);
  return;
}

// `dynamic_initializer_for_'CVarCacheMemoryCleanupRatio'' @ 1411a8740

void __cdecl _dynamic_initializer_for__CVarCacheMemoryCleanupRatio__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 0.5;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarCacheMemoryCleanupRatio,L"pcg.Cache.MemoryCleanupRatio",local_res8,
             L"Target cache size ratio after triggering a cleanup (between 0 and 1.).",0);
  atexit(_dynamic_atexit_destructor_for__CVarCacheMemoryCleanupRatio__);
  return;
}

// `dynamic_initializer_for_'CVarDynamicTaskCulling'' @ 1411a8790

void __cdecl PCGGraphExecutor::_dynamic_initializer_for__CVarDynamicTaskCulling__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarDynamicTaskCulling,L"pcg.Graph.DynamicTaskCulling",local_res8,
             L"Controls whether tasks are culled at execution time, for example in response to an deactivated dynamic branch pin"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDynamicTaskCulling__);
  return;
}

// `dynamic_initializer_for_'CVarEnableGPUExecution'' @ 1411a87e0

void __cdecl PCGGraphCompiler::_dynamic_initializer_for__CVarEnableGPUExecution__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarEnableGPUExecution,L"pcg.GraphExecution.GPU.Enable",local_res8,
             L"Whether to emit compatible nodes as compute graphs to execute on the GPU.",0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableGPUExecution__);
  return;
}

// `dynamic_initializer_for_'CVarEnableTaskStaticCulling'' @ 1411a8830

void __cdecl PCGGraphCompiler::_dynamic_initializer_for__CVarEnableTaskStaticCulling__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarEnableTaskStaticCulling,L"pcg.GraphExecution.TaskStaticCulling",local_res8,
             L"Enable static culling of tasks which considers static branches, generation grid size, trivial nodes and more."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableTaskStaticCulling__);
  return;
}

// `dynamic_initializer_for_'CVarGraphMultithreading'' @ 1411a8880

void __cdecl PCGGraphExecutor::_dynamic_initializer_for__CVarGraphMultithreading__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarGraphMultithreading,L"pcg.GraphMultithreading",local_res8,
             L"Controls whether the graph can dispatch multiple tasks at the same time",0);
  atexit(_dynamic_atexit_destructor_for__CVarGraphMultithreading__);
  return;
}

// `dynamic_initializer_for_'CVarLandscapeCacheGCFrequency'' @ 1411a88d0

void __cdecl _dynamic_initializer_for__CVarLandscapeCacheGCFrequency__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 10.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarLandscapeCacheGCFrequency,L"pcg.LandscapeCacheGCFrequency",local_res8,
             L"Rate at which to release landscape cache data, in seconds",0);
  atexit(_dynamic_atexit_destructor_for__CVarLandscapeCacheGCFrequency__);
  return;
}

// `dynamic_initializer_for_'CVarLandscapeCacheSizeThreshold'' @ 1411a8920

void __cdecl _dynamic_initializer_for__CVarLandscapeCacheSizeThreshold__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0x40;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarLandscapeCacheSizeThreshold,L"pcg.LandscapeCacheSizeThreshold",local_res8,
             L"Memory Threhold at which we start cleaning up the landscape cache",0);
  atexit(_dynamic_atexit_destructor_for__CVarLandscapeCacheSizeThreshold__);
  return;
}

// `dynamic_initializer_for_'CVarMaxNumTasks'' @ 1411a8970

void __cdecl _dynamic_initializer_for__CVarMaxNumTasks__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0x1000;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMaxNumTasks,L"pcg.MaxConcurrentTasks",local_res8,
             L"Maximum number of concurrent tasks for PCG processing",0);
  atexit(_dynamic_atexit_destructor_for__CVarMaxNumTasks__);
  return;
}

// `dynamic_initializer_for_'CVarMaxPercentageOfExecutingThreads'' @ 1411a89c0

void __cdecl _dynamic_initializer_for__CVarMaxPercentageOfExecutingThreads__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 0.3;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarMaxPercentageOfExecutingThreads,L"pcg.MaxPercentageOfExecutingThreads",local_res8,
             L"Maximum percentage of number of threads for processing scheduled pcg elements (percentage of pcg.MaxPercentageOfThreadsToUse)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarMaxPercentageOfExecutingThreads__);
  return;
}

// `dynamic_initializer_for_'CVarMaxPercentageOfThreadsToUse'' @ 1411a8a10

void __cdecl _dynamic_initializer_for__CVarMaxPercentageOfThreadsToUse__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 0.9;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarMaxPercentageOfThreadsToUse,L"pcg.MaxPercentageOfThreadsToUse",local_res8,
             L"Maximum percentage of number of threads for concurrent PCG processing",0);
  atexit(_dynamic_atexit_destructor_for__CVarMaxPercentageOfThreadsToUse__);
  return;
}

// `dynamic_initializer_for_'CVarTimePerFrame'' @ 1411a8a60

void __cdecl PCGGraphExecutor::_dynamic_initializer_for__CVarTimePerFrame__(void)

{
  float local_res8 [8];
  
  local_res8[0] = 5.0;
  TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
            (&CVarTimePerFrame,L"pcg.FrameTime",local_res8,L"Allocated time in ms per frame",0);
  atexit(_dynamic_atexit_destructor_for__CVarTimePerFrame__);
  return;
}

// `dynamic_initializer_for_'CVarValidateElementToCacheEntryKeys'' @ 1411a8ab0

void __cdecl _dynamic_initializer_for__CVarValidateElementToCacheEntryKeys__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarValidateElementToCacheEntryKeys,L"pcg.Cache.Debug.ValidateElementToCacheEntryKeys"
             ,local_res8,L"Validate ElementToCacheEntryKeys acceleration table (debug).",0);
  atexit(_dynamic_atexit_destructor_for__CVarValidateElementToCacheEntryKeys__);
  return;
}

// `dynamic_initializer_for_'CompactNodeConvert'' @ 1411a8b00

void __cdecl PCGNodeConstants::Icons::_dynamic_initializer_for__CompactNodeConvert__(void)

{
  ::FName::FName(&CompactNodeConvert,L"PCG.Node.Compact.Convert");
  return;
}

// `dynamic_initializer_for_'CompactNodeFilter'' @ 1411a8b20

void __cdecl PCGNodeConstants::Icons::_dynamic_initializer_for__CompactNodeFilter__(void)

{
  ::FName::FName(&CompactNodeFilter,L"PCG.Node.Compact.Filter");
  return;
}

// `dynamic_initializer_for_'Data'' @ 1411a8b40

void __cdecl PCGMetadataDomainID::_dynamic_initializer_for__Data__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,L"Data");
  Data.DebugName = *pFVar1;
  Data.Flag = Data;
  Data.CustomFlag = -1;
  return;
}

// `dynamic_initializer_for_'DataDomainName'' @ 1411a8b80

void __cdecl PCGDataConstants::_dynamic_initializer_for__DataDomainName__(void)

{
  ::FName::FName(&DataDomainName,"Data");
  return;
}

// `dynamic_initializer_for_'Default'' @ 1411a8ba0

void __cdecl PCGMetadataDomainID::_dynamic_initializer_for__Default__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,L"Default");
  Default.DebugName = *pFVar1;
  Default.Flag = Default;
  Default.CustomFlag = -1;
  return;
}

// `dynamic_initializer_for_'DefaultActorLabel'' @ 1411a8be0

void __cdecl PCGInputOutputConstants::_dynamic_initializer_for__DefaultActorLabel__(void)

{
  ::FName::FName(&DefaultActorLabel,L"Actor");
  return;
}

// `dynamic_initializer_for_'DefaultDependencyOnlyLabel'' @ 1411a8c00

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultDependencyOnlyLabel__(void)

{
  ::FName::FName(&DefaultDependencyOnlyLabel,L"Dependency Only");
  return;
}

// `dynamic_initializer_for_'DefaultDomainName'' @ 1411a8c20

void __cdecl PCGDataConstants::_dynamic_initializer_for__DefaultDomainName__(void)

{
  ::FName::FName(&DefaultDomainName,"Default");
  return;
}

// `dynamic_initializer_for_'DefaultExecutionDependencyLabel'' @ 1411a8c40

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultExecutionDependencyLabel__(void)

{
  ::FName::FName(&DefaultExecutionDependencyLabel,L"Execution Dependency");
  return;
}

// `dynamic_initializer_for_'DefaultInFilterLabel'' @ 1411a8c60

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultInFilterLabel__(void)

{
  ::FName::FName(&DefaultInFilterLabel,L"InsideFilter");
  return;
}

// `dynamic_initializer_for_'DefaultInputLabel'' @ 1411a8c80

void __cdecl PCGInputOutputConstants::_dynamic_initializer_for__DefaultInputLabel__(void)

{
  ::FName::FName(&DefaultInputLabel,L"Input");
  return;
}

// `dynamic_initializer_for_'DefaultInputLabel'' @ 1411a8ca0

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultInputLabel__(void)

{
  ::FName::FName(&DefaultInputLabel,L"In");
  return;
}

// `dynamic_initializer_for_'DefaultLandscapeHeightLabel'' @ 1411a8cc0

void __cdecl PCGInputOutputConstants::_dynamic_initializer_for__DefaultLandscapeHeightLabel__(void)

{
  ::FName::FName(&DefaultLandscapeHeightLabel,L"Landscape Height");
  return;
}

// `dynamic_initializer_for_'DefaultLandscapeLabel'' @ 1411a8ce0

void __cdecl PCGInputOutputConstants::_dynamic_initializer_for__DefaultLandscapeLabel__(void)

{
  ::FName::FName(&DefaultLandscapeLabel,L"Landscape");
  return;
}

// `dynamic_initializer_for_'DefaultNewCustomPinName'' @ 1411a8d00

void __cdecl PCGInputOutputConstants::_dynamic_initializer_for__DefaultNewCustomPinName__(void)

{
  ::FName::FName(&DefaultNewCustomPinName,L"NewPin");
  return;
}

// `dynamic_initializer_for_'DefaultOriginalActorLabel'' @ 1411a8d20

void __cdecl PCGInputOutputConstants::_dynamic_initializer_for__DefaultOriginalActorLabel__(void)

{
  ::FName::FName(&DefaultOriginalActorLabel,L"OriginalActor");
  return;
}

// `dynamic_initializer_for_'DefaultOutFilterLabel'' @ 1411a8d40

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultOutFilterLabel__(void)

{
  ::FName::FName(&DefaultOutFilterLabel,L"OutsideFilter");
  return;
}

// `dynamic_initializer_for_'DefaultOutputLabel'' @ 1411a8d60

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultOutputLabel__(void)

{
  ::FName::FName(&DefaultOutputLabel,L"Out");
  return;
}

// `dynamic_initializer_for_'DefaultPCGActorTag'' @ 1411a8d80

void __cdecl PCGHelpers::_dynamic_initializer_for__DefaultPCGActorTag__(void)

{
  ::FName::FName(&DefaultPCGActorTag,L"PCG Generated Actor");
  return;
}

// `dynamic_initializer_for_'DefaultPCGDebugTag'' @ 1411a8da0

void __cdecl PCGHelpers::_dynamic_initializer_for__DefaultPCGDebugTag__(void)

{
  ::FName::FName(&DefaultPCGDebugTag,L"PCG Generated Debug Component");
  return;
}

// `dynamic_initializer_for_'DefaultPCGTag'' @ 1411a8dc0

void __cdecl PCGHelpers::_dynamic_initializer_for__DefaultPCGTag__(void)

{
  ::FName::FName(&DefaultPCGTag,L"PCG Generated Component");
  return;
}

// `dynamic_initializer_for_'DefaultParamsLabel'' @ 1411a8de0

void __cdecl PCGPinConstants::_dynamic_initializer_for__DefaultParamsLabel__(void)

{
  ::FName::FName(&DefaultParamsLabel,L"Overrides");
  return;
}

// `dynamic_initializer_for_'Elements'' @ 1411a8e00

void __cdecl PCGMetadataDomainID::_dynamic_initializer_for__Elements__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,L"Elements");
  Elements.DebugName = *pFVar1;
  Elements.Flag = Elements;
  Elements.CustomFlag = -1;
  return;
}

// `dynamic_initializer_for_'ElementsDomainName'' @ 1411a8e40

void __cdecl PCGParamDataConstants::_dynamic_initializer_for__ElementsDomainName__(void)

{
  ::FName::FName(&ElementsDomainName,"Elements");
  return;
}

// `dynamic_initializer_for_'ElementsDomainName'' @ 1411a8e60

void __cdecl PCGPointDataConstants::_dynamic_initializer_for__ElementsDomainName__(void)

{
  ::FName::FName(&ElementsDomainName,"Points");
  return;
}

// `dynamic_initializer_for_'ExtentsName'' @ 1411a8e80

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__ExtentsName__(void)

{
  ::FName::FName(&ExtentsName,L"Extents");
  return;
}

// `dynamic_initializer_for_'FeedbackPinIcon'' @ 1411a8ea0

void __cdecl PCGPinConstants::Icons::_dynamic_initializer_for__FeedbackPinIcon__(void)

{
  ::FName::FName(&FeedbackPinIcon,L"GraphEditor.GetSequenceBinding");
  return;
}

// `dynamic_initializer_for_'InstanceCountsPinLabel'' @ 1411a8ec0

void __cdecl
PCGStaticMeshSpawnerKernelConstants::_dynamic_initializer_for__InstanceCountsPinLabel__(void)

{
  ::FName::FName(&InstanceCountsPinLabel,L"InstanceCounts");
  return;
}

// `dynamic_initializer_for_'Invalid'' @ 1411a8ee0

void __cdecl PCGMetadataDomainID::_dynamic_initializer_for__Invalid__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,L"Invalid");
  Invalid.DebugName = *pFVar1;
  Invalid.Flag = Invalid;
  Invalid.CustomFlag = -1;
  return;
}

// `dynamic_initializer_for_'InvisiblePinLabel'' @ 1411a8f20

void __cdecl PCGNamedRerouteConstants::_dynamic_initializer_for__InvisiblePinLabel__(void)

{
  ::FName::FName(&InvisiblePinLabel,L"InvisiblePin");
  return;
}

// `dynamic_initializer_for_'LastAttributeName'' @ 1411a8f40

void __cdecl PCGMetadataAttributeConstants::_dynamic_initializer_for__LastAttributeName__(void)

{
  ::FName::FName(&LastAttributeName,L"@Last");
  return;
}

// `dynamic_initializer_for_'LastCreatedAttributeName'' @ 1411a8f60

void __cdecl
PCGMetadataAttributeConstants::_dynamic_initializer_for__LastCreatedAttributeName__(void)

{
  ::FName::FName(&LastCreatedAttributeName,L"@LastCreated");
  return;
}

// `dynamic_initializer_for_'LocalCenterName'' @ 1411a8f80

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__LocalCenterName__(void)

{
  ::FName::FName(&LocalCenterName,L"LocalCenter");
  return;
}

// `dynamic_initializer_for_'LocalSizeName'' @ 1411a8fa0

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__LocalSizeName__(void)

{
  ::FName::FName(&LocalSizeName,L"LocalSize");
  return;
}

// `dynamic_initializer_for_'LoopPinIcon'' @ 1411a8fc0

void __cdecl PCGPinConstants::Icons::_dynamic_initializer_for__LoopPinIcon__(void)

{
  ::FName::FName(&LoopPinIcon,L"GraphEditor.Macro.Loop_16x");
  return;
}

// `dynamic_initializer_for_'MarkedForCleanupPCGTag'' @ 1411a8fe0

void __cdecl PCGHelpers::_dynamic_initializer_for__MarkedForCleanupPCGTag__(void)

{
  ::FName::FName(&MarkedForCleanupPCGTag,L"PCG Marked For Cleanup");
  return;
}

// `dynamic_initializer_for_'OldDefaultParamsLabel'' @ 1411a9000

void __cdecl PCGPinConstants::Private::_dynamic_initializer_for__OldDefaultParamsLabel__(void)

{
  ::FName::FName(&OldDefaultParamsLabel,L"Params");
  return;
}

// `dynamic_initializer_for_'PinLabelCinematic'' @ 1411a9020

void __cdecl PCGQualityHelpers::_dynamic_initializer_for__PinLabelCinematic__(void)

{
  ::FName::FName(&PinLabelCinematic,L"Cinematic");
  return;
}

// `dynamic_initializer_for_'PinLabelDefault'' @ 1411a9040

void __cdecl PCGQualityHelpers::_dynamic_initializer_for__PinLabelDefault__(void)

{
  ::FName::FName(&PinLabelDefault,L"Default");
  return;
}

// `dynamic_initializer_for_'PinLabelEpic'' @ 1411a9060

void __cdecl PCGQualityHelpers::_dynamic_initializer_for__PinLabelEpic__(void)

{
  ::FName::FName(&PinLabelEpic,L"Epic");
  return;
}

// `dynamic_initializer_for_'PinLabelHigh'' @ 1411a9080

void __cdecl PCGQualityHelpers::_dynamic_initializer_for__PinLabelHigh__(void)

{
  ::FName::FName(&PinLabelHigh,L"High");
  return;
}

// `dynamic_initializer_for_'PinLabelLow'' @ 1411a90a0

void __cdecl PCGQualityHelpers::_dynamic_initializer_for__PinLabelLow__(void)

{
  ::FName::FName(&PinLabelLow,L"Low");
  return;
}

// `dynamic_initializer_for_'PinLabelMedium'' @ 1411a90c0

void __cdecl PCGQualityHelpers::_dynamic_initializer_for__PinLabelMedium__(void)

{
  ::FName::FName(&PinLabelMedium,L"Medium");
  return;
}

// `dynamic_initializer_for_'PositionName'' @ 1411a90e0

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__PositionName__(void)

{
  ::FName::FName(&PositionName,L"Position");
  return;
}

// `dynamic_initializer_for_'RotationName'' @ 1411a9100

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__RotationName__(void)

{
  ::FName::FName(&RotationName,L"Rotation");
  return;
}

// `dynamic_initializer_for_'ScaleName'' @ 1411a9120

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__ScaleName__(void)

{
  ::FName::FName(&ScaleName,L"Scale");
  return;
}

// `dynamic_initializer_for_'ScaledLocalSizeName'' @ 1411a9140

void __cdecl PCGPointCustomPropertyNames::_dynamic_initializer_for__ScaledLocalSizeName__(void)

{
  ::FName::FName(&ScaledLocalSizeName,L"ScaledLocalSize");
  return;
}

// `dynamic_initializer_for_'SourceAttributeName'' @ 1411a9160

void __cdecl PCGMetadataAttributeConstants::_dynamic_initializer_for__SourceAttributeName__(void)

{
  ::FName::FName(&SourceAttributeName,L"@Source");
  return;
}

// `dynamic_initializer_for_'SourceNameAttributeName'' @ 1411a9180

void __cdecl
PCGMetadataAttributeConstants::_dynamic_initializer_for__SourceNameAttributeName__(void)

{
  ::FName::FName(&SourceNameAttributeName,L"@SourceName");
  return;
}

// `dynamic_initializer_for_'UserParameterTagData'' @ 1411a91a0

void __cdecl PCGBaseSubgraphConstants::_dynamic_initializer_for__UserParameterTagData__(void)

{
  ::FString::FString(&UserParameterTagData,L"PCGUserParametersTagData");
  atexit(_dynamic_atexit_destructor_for__UserParameterTagData__);
  return;
}

// `dynamic_initializer_for_'VertexDomainName'' @ 1411a91d0

void __cdecl PCGPolygon2DData::_dynamic_initializer_for__VertexDomainName__(void)

{
  ::FName::FName(&VertexDomainName,"Vertices");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Graph_PCGGraphExecutor_h__Script_PCG_1481723672'' @ 1411a91f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Graph_PCGGraphExecutor_h__Script_PCG_1481723672__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Graph_PCGGraphExecutor_h__Script_PCG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Graph_PCGGraphTask_h__Script_PCG_3764710016'' @ 1411a9230

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Graph_PCGGraphTask_h__Script_PCG_3764710016__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Graph_PCGGraphTask_h__Script_PCG_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Graph_PCGGraphTask_h__Script_PCG_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Graph_PCGPinDependencyExpression_h__Script_PCG_1821569715'' @ 1411a9280

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Graph_PCGPinDependencyExpression_h__Script_PCG_1821569715__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Private_Graph_PCGPinDependencyExpression_h__Script_PCG_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGOffsetPolygon2D_h__Script_PCG_230445847'' @ 1411a92c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGOffsetPolygon2D_h__Script_PCG_230445847__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGOffsetPolygon2D_h__Script_PCG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGOffsetPolygon2D_h__Script_PCG_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGPolygon2DOperation_h__Script_PCG_2876522899'' @ 1411a9310

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGPolygon2DOperation_h__Script_PCG_2876522899__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGPolygon2DOperation_h__Script_PCG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGPolygon2DOperation_h__Script_PCG_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGSurfaceFromPolygon2D_h__Script_PCG_1570402462'' @ 1411a9360

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGSurfaceFromPolygon2D_h__Script_PCG_1570402462__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Polygon_PCGSurfaceFromPolygon2D_h__Script_PCG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Graph_PCGStackContext_h__Script_PCG_3089985182'' @ 1411a93a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Graph_PCGStackContext_h__Script_PCG_3089985182__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Graph_PCGStackContext_h__Script_PCG_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Grid_PCGGridDescriptor_h__Script_PCG_181493758'' @ 1411a93e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Grid_PCGGridDescriptor_h__Script_PCG_181493758__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Grid_PCGGridDescriptor_h__Script_PCG_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Grid_PCGLandscapeCache_h__Script_PCG_3123267345'' @ 1411a9420

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Grid_PCGLandscapeCache_h__Script_PCG_3123267345__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Grid_PCGLandscapeCache_h__Script_PCG_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Grid_PCGLandscapeCache_h__Script_PCG_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Grid_PCGLandscapeCache_h__Script_PCG_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Grid_PCGPartitionActor_h__Script_PCG_995823667'' @ 1411a9470

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Grid_PCGPartitionActor_h__Script_PCG_995823667__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/PCG",
             Z_CompiledInDeferFile_FID_Engine_Plugins_PCG_Source_PCG_Public_Grid_PCGPartitionActor_h__Script_PCG_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// NewProp_bProvideData_SetBit @ 149c950a0

void __cdecl
Z_Construct_UScriptStruct_FPCGGraphTaskInput_Statics::NewProp_bProvideData_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x78) = 1;
  return;
}

// NewProp_bIsUsedMultipleTimes_SetBit @ 149c950b0

void __cdecl
Z_Construct_UScriptStruct_FPCGGraphTaskInput_Statics::NewProp_bIsUsedMultipleTimes_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x79) = 1;
  return;
}

// NewStructOps @ 149c950c0

void * __cdecl Z_Construct_UScriptStruct_FPCGGraphTaskInput_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGGraphTaskInput,&UE::CoreUObject::Private::Construct<FPCGGraphTaskInput>,&UE::CoreUObject::Private::ConstructForTests<FPCGGraphTaskInput>,&UE::CoreUObject::Private::Destruct<FPCGGraphTaskInput>,&UE::CoreUObject::Private::Copy<FPCGGraphTaskInput>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 149c95100

void * __cdecl Z_Construct_UScriptStruct_FPCGGraphTask_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x148;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGGraphTask,&UE::CoreUObject::Private::Construct<FPCGGraphTask>,&UE::CoreUObject::Private::ConstructForTests<FPCGGraphTask>,&UE::CoreUObject::Private::Destruct<FPCGGraphTask>,&UE::CoreUObject::Private::Copy<FPCGGraphTask>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 149c951b0

void * __cdecl Z_Construct_UScriptStruct_FPCGPinDependencyExpression_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGPinDependencyExpression,&UE::CoreUObject::Private::Construct<FPCGPinDependencyExpression>,&UE::CoreUObject::Private::ConstructForTests<FPCGPinDependencyExpression>,&UE::CoreUObject::Private::Destruct<FPCGPinDependencyExpression>,&UE::CoreUObject::Private::Copy<FPCGPinDependencyExpression>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FPCGStack @ 149c951f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGStack(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGStack.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGStack.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGStack_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGStack.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGStack.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPCGStackFrame @ 149c95270

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGStackFrame(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGStackFrame.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGStackFrame.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGStackFrame_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGStackFrame.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGStackFrame.InnerSingleton;
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

// NewStructOps @ 149c952f0

void * __cdecl Z_Construct_UScriptStruct_FPCGStackFrame_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGStackFrame,&UE::CoreUObject::Private::Construct<FPCGStackFrame>,&UE::CoreUObject::Private::ConstructForTests<FPCGStackFrame>,&UE::CoreUObject::Private::Destruct<FPCGStackFrame>,&UE::CoreUObject::Private::PostSerialize<FPCGStackFrame>,&UE::CoreUObject::Private::Copy<FPCGStackFrame>,&UE::CoreUObject::Private::GetStructTypeHash<FPCGStackFrame>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 149c95330

void * __cdecl Z_Construct_UScriptStruct_FPCGStack_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGStack,&UE::CoreUObject::Private::Construct<FPCGStack>,&UE::CoreUObject::Private::ConstructForTests<FPCGStack>,&UE::CoreUObject::Private::Destruct<FPCGStack>,&UE::CoreUObject::Private::Copy<FPCGStack>,&UE::CoreUObject::Private::GetStructTypeHash<FPCGStack>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 149c95370

void * __cdecl Z_Construct_UScriptStruct_FPCGStackContext_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGStackContext,&UE::CoreUObject::Private::Construct<FPCGStackContext>,&UE::CoreUObject::Private::ConstructForTests<FPCGStackContext>,&UE::CoreUObject::Private::Destruct<FPCGStackContext>,&UE::CoreUObject::Private::Copy<FPCGStackContext>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UPCGLandscapeCache @ 149c95420

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGLandscapeCache(void)

{
  if (Z_Registration_Info_UClass_UPCGLandscapeCache.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGLandscapeCache.OuterSingleton,
               &Z_Construct_UClass_UPCGLandscapeCache_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGLandscapeCache.OuterSingleton;
}

// Z_Construct_UEnum_PCG_EPCGLandscapeCacheSerializationContents @ 149c95460

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGLandscapeCacheSerializationContents(void)

{
  if (Z_Registration_Info_UEnum_EPCGLandscapeCacheSerializationContents.InnerSingleton ==
      (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGLandscapeCacheSerializationContents.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGLandscapeCacheSerializationContents_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGLandscapeCacheSerializationContents.InnerSingleton;
}

// Z_Construct_UEnum_PCG_EPCGLandscapeCacheSerializationMode @ 149c954a0

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGLandscapeCacheSerializationMode(void)

{
  if (Z_Registration_Info_UEnum_EPCGLandscapeCacheSerializationMode.InnerSingleton == (UEnum *)0x0)
  {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGLandscapeCacheSerializationMode.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGLandscapeCacheSerializationMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGLandscapeCacheSerializationMode.InnerSingleton;
}

// EPCGLandscapeCacheSerializationMode_StaticEnum @ 149c954e0

UEnum * __cdecl EPCGLandscapeCacheSerializationMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGLandscapeCacheSerializationMode.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGLandscapeCacheSerializationMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGLandscapeCacheSerializationMode,(UObject *)pUVar1,
                       L"EPCGLandscapeCacheSerializationMode");
  }
  return Z_Registration_Info_UEnum_EPCGLandscapeCacheSerializationMode.OuterSingleton;
}

// EPCGLandscapeCacheSerializationContents_StaticEnum @ 149c955e0

UEnum * __cdecl EPCGLandscapeCacheSerializationContents_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGLandscapeCacheSerializationContents.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGLandscapeCacheSerializationContents.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGLandscapeCacheSerializationContents,
                       (UObject *)pUVar1,L"EPCGLandscapeCacheSerializationContents");
  }
  return Z_Registration_Info_UEnum_EPCGLandscapeCacheSerializationContents.OuterSingleton;
}

// Z_Construct_UClass_UPCGOffsetPolygon2DSettings @ 149c95620

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGOffsetPolygon2DSettings(void)

{
  if (Z_Registration_Info_UClass_UPCGOffsetPolygon2DSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGOffsetPolygon2DSettings.OuterSingleton,
               &Z_Construct_UClass_UPCGOffsetPolygon2DSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGOffsetPolygon2DSettings.OuterSingleton;
}

// Z_Construct_UEnum_PCG_EPCGPolygonOffsetOperation @ 149c95660

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGPolygonOffsetOperation(void)

{
  if (Z_Registration_Info_UEnum_EPCGPolygonOffsetOperation.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGPolygonOffsetOperation.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGPolygonOffsetOperation_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGPolygonOffsetOperation.InnerSingleton;
}

// NewStructOps @ 149c956b0

void * __cdecl Z_Construct_UScriptStruct_FPCGLandscapeLayerWeight_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGLandscapeLayerWeight,&UE::CoreUObject::Private::Construct<FPCGLandscapeLayerWeight>,&UE::CoreUObject::Private::ConstructForTests<FPCGLandscapeLayerWeight>,&UE::CoreUObject::Private::Destruct<FPCGLandscapeLayerWeight>,&UE::CoreUObject::Private::Copy<FPCGLandscapeLayerWeight>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// EPCGPolygonOffsetOperation_StaticEnum @ 149c956f0

UEnum * __cdecl EPCGPolygonOffsetOperation_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGPolygonOffsetOperation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGPolygonOffsetOperation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGPolygonOffsetOperation,(UObject *)pUVar1,
                       L"EPCGPolygonOffsetOperation");
  }
  return Z_Registration_Info_UEnum_EPCGPolygonOffsetOperation.OuterSingleton;
}

// NewProp_bInheritMetadata_SetBit @ 149c957b0

void __cdecl
Z_Construct_UClass_UPCGOffsetPolygon2DSettings_Statics::NewProp_bInheritMetadata_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xcc) = 1;
  return;
}

// NewProp_bUseOffsetFromInput_SetBit @ 149c957c0

void __cdecl
Z_Construct_UClass_UPCGOffsetPolygon2DSettings_Statics::NewProp_bUseOffsetFromInput_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xcd) = 1;
  return;
}

// Z_Construct_UFunction_UPCGLandscapeCache_ClearCache @ 149c957d0

UFunction * __cdecl Z_Construct_UFunction_UPCGLandscapeCache_ClearCache(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGLandscapeCache_ClearCache_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPCGLandscapeCache_PrimeCache @ 149c95810

UFunction * __cdecl Z_Construct_UFunction_UPCGLandscapeCache_PrimeCache(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPCGLandscapeCache_PrimeCache_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UPCGGridLinkageSettings @ 149c95890

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGGridLinkageSettings(void)

{
  if (Z_Registration_Info_UClass_UPCGGridLinkageSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGGridLinkageSettings.OuterSingleton,
               &Z_Construct_UClass_UPCGGridLinkageSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGGridLinkageSettings.OuterSingleton;
}

// Z_Construct_UClass_UPCGCreateSurfaceFromPolygon2DSettings @ 149c95a80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGCreateSurfaceFromPolygon2DSettings(void)

{
  if (Z_Registration_Info_UClass_UPCGCreateSurfaceFromPolygon2DSettings.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGCreateSurfaceFromPolygon2DSettings.OuterSingleton,
               &Z_Construct_UClass_UPCGCreateSurfaceFromPolygon2DSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGCreateSurfaceFromPolygon2DSettings.OuterSingleton;
}

// Z_Construct_UScriptStruct_FPCGGridDescriptor @ 149c95c50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGGridDescriptor(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGGridDescriptor.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGGridDescriptor.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGGridDescriptor_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGGridDescriptor.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGGridDescriptor.InnerSingleton;
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

// NewProp_bIs2DGrid_SetBit @ 149c95cf0

void __cdecl
Z_Construct_UScriptStruct_FPCGGridDescriptor_Statics::NewProp_bIs2DGrid_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// NewProp_bIsRuntime_SetBit @ 149c95d00

void __cdecl
Z_Construct_UScriptStruct_FPCGGridDescriptor_Statics::NewProp_bIsRuntime_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 5) = 1;
  return;
}

// NewStructOps @ 149c95d30

void * __cdecl Z_Construct_UScriptStruct_FPCGGridDescriptor_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGGridDescriptor,&UE::CoreUObject::Private::Construct<FPCGGridDescriptor>,&UE::CoreUObject::Private::ConstructForTests<FPCGGridDescriptor>,&UE::CoreUObject::Private::Destruct<FPCGGridDescriptor>,&UE::CoreUObject::Private::Copy<FPCGGridDescriptor>,&UE::CoreUObject::Private::GetStructTypeHash<FPCGGridDescriptor>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 149c95eb0

void * __cdecl Z_Construct_UScriptStruct_FPCGGridCellDescriptor_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPCGGridCellDescriptor,&UE::CoreUObject::Private::Construct<FPCGGridCellDescriptor>,&UE::CoreUObject::Private::ConstructForTests<FPCGGridCellDescriptor>,&UE::CoreUObject::Private::Destruct<FPCGGridCellDescriptor>,&UE::CoreUObject::Private::Copy<FPCGGridCellDescriptor>,&UE::CoreUObject::Private::GetStructTypeHash<FPCGGridCellDescriptor>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_APCGPartitionActor @ 149c96930

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_APCGPartitionActor(void)

{
  if (Z_Registration_Info_UClass_APCGPartitionActor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_APCGPartitionActor.OuterSingleton,
               &Z_Construct_UClass_APCGPartitionActor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_APCGPartitionActor.OuterSingleton;
}

// Z_Construct_UFunction_APCGPartitionActor_BP_GetPCGGridSize @ 149c96970

UFunction * __cdecl Z_Construct_UFunction_APCGPartitionActor_BP_GetPCGGridSize(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_APCGPartitionActor_BP_GetPCGGridSize_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_APCGPartitionActor_GetLocalComponent @ 149c969b0

UFunction * __cdecl Z_Construct_UFunction_APCGPartitionActor_GetLocalComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_APCGPartitionActor_GetLocalComponent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_APCGPartitionActor_GetOriginalComponent @ 149c96ab0

UFunction * __cdecl Z_Construct_UFunction_APCGPartitionActor_GetOriginalComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_APCGPartitionActor_GetOriginalComponent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bUse2DGrid_SetBit @ 149c96af0

void __cdecl Z_Construct_UClass_APCGPartitionActor_Statics::NewProp_bUse2DGrid_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x3c4) = 1;
  return;
}

// `scalar_deleting_destructor' @ 149c96db0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_26>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_26>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UClass_UPCGPolygon2DOperationSettings @ 149c96ee0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPCGPolygon2DOperationSettings(void)

{
  if (Z_Registration_Info_UClass_UPCGPolygon2DOperationSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPCGPolygon2DOperationSettings.OuterSingleton,
               &Z_Construct_UClass_UPCGPolygon2DOperationSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPCGPolygon2DOperationSettings.OuterSingleton;
}

// Z_Construct_UEnum_PCG_EPCGPolygonOperation @ 149c96fe0

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGPolygonOperation(void)

{
  if (Z_Registration_Info_UEnum_EPCGPolygonOperation.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGPolygonOperation.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGPolygonOperation_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGPolygonOperation.InnerSingleton;
}

// Z_Construct_UEnum_PCG_EPCGPolygonOperationMetadataMode @ 149c97020

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGPolygonOperationMetadataMode(void)

{
  if (Z_Registration_Info_UEnum_EPCGPolygonOperationMetadataMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGPolygonOperationMetadataMode.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGPolygonOperationMetadataMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGPolygonOperationMetadataMode.InnerSingleton;
}

// EPCGPolygonOperation_StaticEnum @ 149c97090

UEnum * __cdecl EPCGPolygonOperation_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGPolygonOperation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGPolygonOperation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGPolygonOperation,(UObject *)pUVar1,
                       L"EPCGPolygonOperation");
  }
  return Z_Registration_Info_UEnum_EPCGPolygonOperation.OuterSingleton;
}

// `scalar_deleting_destructor' @ 149c97100

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_27>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_27>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// EPCGPolygonOperationMetadataMode_StaticEnum @ 149c97130

UEnum * __cdecl EPCGPolygonOperationMetadataMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGPolygonOperationMetadataMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGPolygonOperationMetadataMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGPolygonOperationMetadataMode,(UObject *)pUVar1,
                       L"EPCGPolygonOperationMetadataMode");
  }
  return Z_Registration_Info_UEnum_EPCGPolygonOperationMetadataMode.OuterSingleton;
}

// NewProp_bQuiet_SetBit @ 149c97170

void __cdecl
Z_Construct_UClass_UPCGPolygon2DOperationSettings_Statics::NewProp_bQuiet_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xd8) = 1;
  return;
}

// Z_Construct_UEnum_PCG_EPCGElementSource @ 149c97180

UEnum * __cdecl Z_Construct_UEnum_PCG_EPCGElementSource(void)

{
  if (Z_Registration_Info_UEnum_EPCGElementSource.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPCGElementSource.InnerSingleton,
               &Z_Construct_UEnum_PCG_EPCGElementSource_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPCGElementSource.InnerSingleton;
}

// Z_Construct_UScriptStruct_FPCGGraphTaskInput @ 149c971c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGGraphTaskInput(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGGraphTaskInput.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGGraphTaskInput.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGGraphTaskInput_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGGraphTaskInput.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGGraphTaskInput.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPCGPinDependencyExpression @ 149c97240

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGPinDependencyExpression(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGPinDependencyExpression.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGPinDependencyExpression.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGPinDependencyExpression_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGPinDependencyExpression.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGPinDependencyExpression.InnerSingleton;
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

// EPCGElementSource_StaticEnum @ 149c972c0

UEnum * __cdecl EPCGElementSource_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGElementSource.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGElementSource.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGElementSource,(UObject *)pUVar1,
                       L"EPCGElementSource");
  }
  return Z_Registration_Info_UEnum_EPCGElementSource.OuterSingleton;
}

// <lambda_invoker_cdecl> @ 149c973c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGContext * __cdecl <lambda_31_>::<lambda_invoker_cdecl>(FPCGInitializeElementParams *param_1)

{
  FPCGContext *pFVar1;
  
  pFVar1 = ::operator_new(600);
  if (pFVar1 != (FPCGContext *)0x0) {
    memset(pFVar1,0,600);
    pFVar1 = FPCGContext::FPCGContext(pFVar1);
    return pFVar1;
  }
  return (FPCGContext *)0x0;
}

// <lambda_invoker_cdecl> @ 149c97410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGContext * __cdecl <lambda_32_>::<lambda_invoker_cdecl>(FPCGInitializeElementParams *param_1)

{
  FPCGContext *pFVar1;
  
  pFVar1 = ::operator_new(600);
  if (pFVar1 != (FPCGContext *)0x0) {
    memset(pFVar1,0,600);
    pFVar1 = FPCGContext::FPCGContext(pFVar1);
    return pFVar1;
  }
  return (FPCGContext *)0x0;
}

// operator<<<UObject_const_> @ 149c97820

FArchive * __cdecl
operator<<<UObject_const_>(FArchive *param_1,TSoftObjectPtr<UObject_const_> *param_2)

{
  (**(code **)(*(longlong *)param_1 + 0x148))();
  return param_1;
}

// Cast<UPCGPolygon2DOperationSettings_const_> @ 149c983f0

UPCGPolygon2DOperationSettings * __cdecl
Cast<UPCGPolygon2DOperationSettings_const_>(FPCGDataPtrWrapper *param_1)

{
  bool bVar1;
  UClass *pUVar2;
  FObjectPtr_u_0 local_res8 [4];
  
  local_res8[0] = (FObjectPtr_u_0)(param_1->Data).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if ((UPCGPolygon2DOperationSettings *)local_res8[0].Handle ==
        (UPCGPolygon2DOperationSettings *)0x0) {
      return (UPCGPolygon2DOperationSettings *)0x0;
    }
    UE::GC::MarkAsReachable(local_res8[0].Handle);
  }
  if ((UPCGPolygon2DOperationSettings *)local_res8[0].Handle !=
      (UPCGPolygon2DOperationSettings *)0x0) {
    pUVar2 = UPCGPolygon2DOperationSettings::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar2);
    if (bVar1) {
      return (UPCGPolygon2DOperationSettings *)local_res8[0].Handle;
    }
  }
  return (UPCGPolygon2DOperationSettings *)0x0;
}

// CompareItems<FPCGStack,int> @ 149c98470

bool __cdecl CompareItems<FPCGStack,int>(FPCGStack *param_1,FPCGStack *param_2,int param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  int *piVar10;
  int *piVar11;
  
  if (param_3 != 0) {
    piVar11 = &(param_1->StackFrames).ArrayNum;
    piVar10 = &(param_2->StackFrames).ArrayNum;
    do {
      iVar7 = *piVar11;
      if (iVar7 != *piVar10) {
        return false;
      }
      uVar8 = 0;
      if (0 < iVar7) {
        lVar9 = 0;
        do {
          uVar6 = 0;
          if ((int)uVar8 < iVar7) {
            uVar6 = ~uVar8 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          pFVar1 = (((TArray<FPCGStackFrame,TSizedDefaultAllocator<32>_> *)(piVar11 + -2))->
                   AllocatorInstance).Data;
          uVar6 = 0;
          if ((int)uVar8 < *piVar10) {
            uVar6 = ~uVar8 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          pFVar2 = (((TArray<FPCGStackFrame,TSizedDefaultAllocator<32>_> *)(piVar10 + -2))->
                   AllocatorInstance).Data;
          bVar4 = FSoftObjectPath::operator==
                            ((FSoftObjectPath *)(pFVar1 + lVar9 + 8),
                             (FSoftObjectPath *)(pFVar2 + lVar9 + 8));
          if (!bVar4) {
            return false;
          }
          if (*(int *)(pFVar1 + lVar9 + 0x28) != *(int *)(pFVar2 + lVar9 + 0x28)) {
            return false;
          }
          iVar7 = *piVar11;
          uVar8 = uVar8 + 1;
          lVar9 = lVar9 + 0x30;
        } while ((int)uVar8 < iVar7);
      }
      piVar11 = piVar11 + 6;
      piVar10 = piVar10 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructItems<FPCGStack,FPCGStack,int> @ 149c985c0

void __cdecl ConstructItems<FPCGStack,FPCGStack,int>(void *param_1,FPCGStack *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FPCGStackFrame *pFVar3;
  FPCGStack *pFVar4;
  ForAnyElementType *pFVar5;
  TArray<FPCGStackFrame,TSizedDefaultAllocator<32>_> *pTVar6;
  
  if (param_3 != 0) {
    pFVar5 = (ForAnyElementType *)((longlong)param_1 + 8);
    pFVar4 = param_2;
    do {
      pTVar6 = &pFVar4->StackFrames;
      *(undefined8 *)((longlong)param_1 + (-8 - (longlong)param_2) + (longlong)pTVar6) =
           *(undefined8 *)((longlong)(pTVar6 + -1) + 8);
      piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
      pFVar5->Data = (FScriptContainerElement *)0x0;
      iVar2 = pTVar6->ArrayNum;
      pFVar3 = (FPCGStackFrame *)(pTVar6->AllocatorInstance).Data;
      *(int *)&pFVar5[1].Data = iVar2;
      if (iVar2 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,iVar2,0,pFVar5,iVar2,piVar1);
        ConstructItems<FPCGStackFrame,FPCGStackFrame,int>(pFVar5->Data,pFVar3,iVar2);
      }
      pFVar4 = (FPCGStack *)(pTVar6 + 1);
      pFVar5 = pFVar5 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<TOctree2<FPCGComponentRef,FPCGComponentRefSemantics>::FNode,int> @ 149c98690

void __cdecl
DefaultConstructItems<TOctree2<FPCGComponentRef,FPCGComponentRefSemantics>::FNode,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined4 *)param_1 = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 4) = 0;
    param_1 = (void *)((longlong)param_1 + 8);
  }
  return;
}

// DefaultConstructItems<FPCGGraphScheduleTask,int> @ 149c986c0

void __cdecl DefaultConstructItems<FPCGGraphScheduleTask,int>(void *param_1,int param_2)

{
  longlong lVar1;
  undefined8 local_res8;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      ((FWeakObjectPtr *)(lVar1 + 4))->ObjectIndex = 0;
      *(undefined4 *)(lVar1 + 8) = 0;
      local_res8 = 0;
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(lVar1 + 4),(FObjectPtr)&local_res8);
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined1 *)(lVar1 + 0x1c) = 0;
      lVar1 = lVar1 + 0x30;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FPCGGraphTask,int> @ 149c98730

void __cdecl DefaultConstructItems<FPCGGraphTask,int>(void *param_1,int param_2)

{
  longlong lVar1;
  undefined8 local_res8;
  undefined8 local_res18;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    local_res8 = 0;
    local_res18 = 0;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined4 *)(lVar1 + 4) = 3;
      (((FUtf8String *)(lVar1 + 0x24))->Data).AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      *(undefined8 *)(lVar1 + 0x2c) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined8 *)(lVar1 + 0x1c) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      FUtf8String::Reset((FUtf8String *)(lVar1 + 0x24),0);
      FSoftObjectPtr::operator=((FSoftObjectPtr *)(lVar1 + 0xc),(FObjectPtr)&local_res18);
      *(undefined8 *)(lVar1 + 0x34) = 0;
      *(undefined8 *)(lVar1 + 0x3c) = 0xffffffffffffffff;
      *(undefined8 *)(lVar1 + 0x44) = 0xffffffffffffffff;
      *(undefined8 *)(lVar1 + 0x4c) = 0xffffffffffffffff;
      *(undefined8 *)(lVar1 + 0x54) = 0;
      *(undefined8 *)(lVar1 + 0x5c) = 0;
      *(undefined4 *)(lVar1 + 100) = 0xffffffff;
      *(undefined8 *)(lVar1 + 0x6c) = 0;
      *(undefined8 *)(lVar1 + 0x74) = 0;
      ((FWeakObjectPtr *)(lVar1 + 0x7c))->ObjectIndex = 0;
      *(undefined4 *)(lVar1 + 0x80) = 0;
      local_res8 = 0;
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(lVar1 + 0x7c),(FObjectPtr)&local_res8);
      *(undefined8 *)(lVar1 + 0x84) = 0;
      *(undefined8 *)(lVar1 + 0x9c) = 0;
      *(undefined8 *)(lVar1 + 0xa4) = 0;
      *(undefined8 *)(lVar1 + 0xb4) = 0;
      *(undefined8 *)(lVar1 + 0xbc) = 0;
      *(undefined2 *)(lVar1 + 0xc4) = 0;
      *(undefined8 *)(lVar1 + 0xcc) = 0;
      *(undefined8 *)(lVar1 + 0xd4) = 0;
      *(undefined8 *)(lVar1 + 0xdc) = 0;
      *(undefined8 *)(lVar1 + 0xe4) = 0;
      *(undefined8 *)(lVar1 + 0xec) = 0;
      *(undefined8 *)(lVar1 + 0x104) = 0;
      *(undefined8 *)(lVar1 + 0x8c) = 0;
      *(undefined8 *)(lVar1 + 0x94) = 0;
      *(undefined1 *)(lVar1 + 0xac) = 0;
      *(undefined4 *)(lVar1 + 0x10c) = 0;
      *(undefined4 *)(lVar1 + 0x110) = 0x80;
      *(undefined4 *)(lVar1 + 0x114) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0x118) = 0;
      *(undefined8 *)(lVar1 + 0x124) = 0;
      *(undefined4 *)(lVar1 + 300) = 0;
      *(undefined2 *)(lVar1 + 0x134) = 0;
      lVar1 = lVar1 + 0x148;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FPCGLandscapeLayerWeight,int> @ 149c988d0

void __cdecl DefaultConstructItems<FPCGLandscapeLayerWeight,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 8);
    do {
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FPCGStack,int> @ 149c98900

void __cdecl DefaultConstructItems<FPCGStack,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = 0xffffffffffffffff;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TArray<FPCGComponentRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,int> @ 149c98930

void __cdecl
DefaultConstructItems<TArray<FPCGComponentRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,int>
          (void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 0x508);
    do {
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      puVar1[1] = 0x10;
      puVar1 = puVar1 + 0x144;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<TSharedPtr<FPCGGraphActiveTask,1>,UE::Tasks::TTask<bool>_>,int> @ 149c98960

void __cdecl
DestructItems<TTuple<TSharedPtr<FPCGGraphActiveTask,1>,UE::Tasks::TTask<bool>_>,int>
          (TTuple<TSharedPtr<FPCGGraphActiveTask,1>,UE::Tasks::TTask<bool>_> *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_2 != 0) {
    puVar4 = (undefined8 *)&param_1->field_0x8;
    do {
      puVar3 = (undefined8 *)puVar4[1];
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
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)*puVar4);
      puVar4 = puVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FPCGComponentRef,int> @ 149c989c0

void __cdecl DestructItems<FPCGComponentRef,int>(FPCGComponentRef *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->IdShared).SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FPCGGraphScheduleTask,int> @ 149c98a00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl DestructItems<FPCGGraphScheduleTask,int>(FPCGGraphScheduleTask *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    DestructItems<FPCGGraphTask,int>
              ((FPCGGraphTask *)(param_1->Tasks).AllocatorInstance.Data,(param_1->Tasks).ArrayNum);
    pFVar1 = (param_1->Tasks).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TArray<FPCGComponentRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,int> @ 149c98a50

void __cdecl
DestructItems<TArray<FPCGComponentRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,int>
          (TArray<FPCGComponentRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
           *param_1,int param_2)

{
  ForElementType<FPCGComponentRef> FVar1;
  ForElementType<FPCGComponentRef> *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &(param_1->AllocatorInstance).SecondaryData;
    do {
      FVar1 = *pFVar2;
      if (*pFVar2 == (ForElementType<FPCGComponentRef>)0x0) {
        FVar1 = (ForElementType<FPCGComponentRef>)(pFVar2 + -0xa0);
      }
      DestructItems<FPCGComponentRef,int>((FPCGComponentRef *)FVar1,*(int *)(pFVar2 + 1));
      if (*pFVar2 != (ForElementType<FPCGComponentRef>)0x0) {
        FMemory::Free((void *)*pFVar2);
      }
      pFVar2 = pFVar2 + 0xa2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TArray<PCGPolygon2DProcessingHelpers::VertexToSourcePolygonMapping,TSizedDefaultAllocator<32>_>,int> @ 149c98ac0

void __cdecl
DestructItems<TArray<PCGPolygon2DProcessingHelpers::VertexToSourcePolygonMapping,TSizedDefaultAllocator<32>_>,int>
          (TArray<PCGPolygon2DProcessingHelpers::VertexToSourcePolygonMapping,TSizedDefaultAllocator<32>_>
           *param_1,int param_2)

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

// DestructItems<TArray<__int64,TSizedDefaultAllocator<32>_>,int> @ 149c98b00

void __cdecl
DestructItems<TArray<__int64,TSizedDefaultAllocator<32>_>,int>
          (TArray<__int64,TSizedDefaultAllocator<32>_> *param_1,int param_2)

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

// DestructItems<TSharedPtr<FPCGGraphActiveTask,1>,int> @ 149c98b40

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
DestructItems<TSharedPtr<FPCGGraphActiveTask,1>,int>
          (TSharedPtr<FPCGGraphActiveTask,1> *param_1,int param_2)

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

// DestructItems<TSharedPtr<FPCGLandscapeCacheEntry,1>,int> @ 149c98b80

void __cdecl
DestructItems<TSharedPtr<FPCGLandscapeCacheEntry,1>,int>
          (TSharedPtr<FPCGLandscapeCacheEntry,1> *param_1,int param_2)

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

// FindByPredicate<`FPCGDataCollection::GetSettings<UPCGCreateSurfaceFromPolygon2DSettings>'::__l2::<lambda_1>_> @ 149c9cdf0

FPCGTaggedData * __thiscall
TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FPCGDataCollection::GetSettings<UPCGCreateSurfaceFromPolygon2DSettings>_::__l2::<lambda_1>_>
          (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *this,<lambda_1> param_1)

{
  bool bVar1;
  UClass *pUVar2;
  FObjectPtr_u_0 *pFVar3;
  FObjectPtr_u_0 *pFVar4;
  FObjectPtr_u_0 local_res8;
  
  pFVar3 = (FObjectPtr_u_0 *)(this->AllocatorInstance).Data;
  pFVar4 = pFVar3 + (longlong)this->ArrayNum * 0xf;
  do {
    if (pFVar3 == pFVar4) {
      return (FPCGTaggedData *)0x0;
    }
    local_res8 = (FObjectPtr_u_0)pFVar3->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149c9ce33:
      if (local_res8.Handle != (UObject *)0x0) {
        pUVar2 = UPCGCreateSurfaceFromPolygon2DSettings::StaticClass();
        bVar1 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar2);
        if ((bVar1) && (local_res8.Handle != (UObject *)0x0)) {
          return (FPCGTaggedData *)pFVar3;
        }
      }
    }
    else if (local_res8.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res8.Handle);
      goto LAB_149c9ce33;
    }
    pFVar3 = pFVar3 + 0xf;
  } while( true );
}

// FindByPredicate<`FPCGDataCollection::GetSettings<UPCGOffsetPolygon2DSettings>'::__l2::<lambda_1>_> @ 149c9ce80

FPCGTaggedData * __thiscall
TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FPCGDataCollection::GetSettings<UPCGOffsetPolygon2DSettings>_::__l2::<lambda_1>_>
          (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *this,<lambda_1> param_1)

{
  bool bVar1;
  UClass *pUVar2;
  FObjectPtr_u_0 *pFVar3;
  FObjectPtr_u_0 *pFVar4;
  FObjectPtr_u_0 local_res8;
  
  pFVar3 = (FObjectPtr_u_0 *)(this->AllocatorInstance).Data;
  pFVar4 = pFVar3 + (longlong)this->ArrayNum * 0xf;
  do {
    if (pFVar3 == pFVar4) {
      return (FPCGTaggedData *)0x0;
    }
    local_res8 = (FObjectPtr_u_0)pFVar3->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149c9cec3:
      if (local_res8.Handle != (UObject *)0x0) {
        pUVar2 = UPCGOffsetPolygon2DSettings::StaticClass();
        bVar1 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar2);
        if ((bVar1) && (local_res8.Handle != (UObject *)0x0)) {
          return (FPCGTaggedData *)pFVar3;
        }
      }
    }
    else if (local_res8.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res8.Handle);
      goto LAB_149c9cec3;
    }
    pFVar3 = pFVar3 + 0xf;
  } while( true );
}

// FindByPredicate<`FPCGDataCollection::GetSettings<UPCGPolygon2DOperationSettings>'::__l2::<lambda_1>_> @ 149c9cf10

FPCGTaggedData * __thiscall
TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FPCGDataCollection::GetSettings<UPCGPolygon2DOperationSettings>_::__l2::<lambda_1>_>
          (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *this,<lambda_1> param_1)

{
  bool bVar1;
  UClass *pUVar2;
  FObjectPtr_u_0 *pFVar3;
  FObjectPtr_u_0 *pFVar4;
  FObjectPtr_u_0 local_res8;
  
  pFVar3 = (FObjectPtr_u_0 *)(this->AllocatorInstance).Data;
  pFVar4 = pFVar3 + (longlong)this->ArrayNum * 0xf;
  do {
    if (pFVar3 == pFVar4) {
      return (FPCGTaggedData *)0x0;
    }
    local_res8 = (FObjectPtr_u_0)pFVar3->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149c9cf53:
      if (local_res8.Handle != (UObject *)0x0) {
        pUVar2 = UPCGPolygon2DOperationSettings::StaticClass();
        bVar1 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar2);
        if ((bVar1) && (local_res8.Handle != (UObject *)0x0)) {
          return (FPCGTaggedData *)pFVar3;
        }
      }
    }
    else if (local_res8.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res8.Handle);
      goto LAB_149c9cf53;
    }
    pFVar3 = pFVar3 + 0xf;
  } while( true );
}

// FindByPredicate<`FPCGDataCollection::GetSettings<UPCGSettings>'::__l2::<lambda_1>_> @ 149c9cfa0

FPCGTaggedData * __thiscall
TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSettings>_::__l2::<lambda_1>_>
          (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *this,<lambda_1> param_1)

{
  bool bVar1;
  UClass *pUVar2;
  FObjectPtr_u_0 *pFVar3;
  FObjectPtr_u_0 *pFVar4;
  FObjectPtr_u_0 local_res8;
  
  pFVar3 = (FObjectPtr_u_0 *)(this->AllocatorInstance).Data;
  pFVar4 = pFVar3 + (longlong)this->ArrayNum * 0xf;
  do {
    if (pFVar3 == pFVar4) {
      return (FPCGTaggedData *)0x0;
    }
    local_res8 = (FObjectPtr_u_0)pFVar3->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149c9cfe3:
      if (local_res8.Handle != (UObject *)0x0) {
        pUVar2 = Z_Construct_UClass_UPCGSettings_NoRegister();
        bVar1 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar2);
        if ((bVar1) && (local_res8.Handle != (UObject *)0x0)) {
          return (FPCGTaggedData *)pFVar3;
        }
      }
    }
    else if (local_res8.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res8.Handle);
      goto LAB_149c9cfe3;
    }
    pFVar3 = pFVar3 + 0xf;
  } while( true );
}

// FindByPredicate<`FPCGGraphExecutor::ExecuteScheduling'::__l82::<lambda_1>_> @ 149c9d030

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSharedPtr<FPCGGraphActiveTask,1> * __thiscall
TArray<TSharedPtr<FPCGGraphActiveTask,1>,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FPCGGraphExecutor::ExecuteScheduling_::__l82::<lambda_1>_>
          (TArray<TSharedPtr<FPCGGraphActiveTask,1>,TSizedDefaultAllocator<32>_> *this,
          <lambda_1> param_1)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FPCGGraphActiveTask,1> *pTVar3;
  TSharedPtr<FPCGGraphActiveTask,1> *pTVar4;
  
  pTVar3 = (TSharedPtr<FPCGGraphActiveTask,1> *)(this->AllocatorInstance).Data;
  pTVar4 = pTVar3 + this->ArrayNum;
  while( true ) {
    if (pTVar3 == pTVar4) {
      return (TSharedPtr<FPCGGraphActiveTask,1> *)0x0;
    }
    if ((pTVar3->Object == (FPCGGraphActiveTask *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) break;
    if (pTVar3->Object->bIsExecutingTask == false) {
      if ((pTVar3->Object == (FPCGGraphActiveTask *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TSharedPtr<FPCGGraphActiveTask,1> *)(*pcVar1)();
        return pTVar3;
      }
      if (((pTVar3->Object->Context).Ptr)->bIsPaused == false) {
        return pTVar3;
      }
    }
    pTVar3 = pTVar3 + 1;
  }
  pcVar1 = (code *)swi(3);
  pTVar3 = (TSharedPtr<FPCGGraphActiveTask,1> *)(*pcVar1)();
  return pTVar3;
}

// ForEach<TMap<unsigned___int64,TUniquePtr<FPCGGraphExecutor::FCachedResult,TDefaultDelete<FPCGGraphExecutor::FCachedResult>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TUniquePtr<FPCGGraphExecutor::FCachedResult,TDefaultDelete<FPCGGraphExecutor::FCachedResult>_>,0>_>_&,`FPCGGraphExecutor::AddReferencedObjects'::__l9::<lambda_3>_> @ 149c9d810

void __cdecl
Algo::
ForEach<TMap<unsigned___int64,TUniquePtr<FPCGGraphExecutor::FCachedResult,TDefaultDelete<FPCGGraphExecutor::FCachedResult>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TUniquePtr<FPCGGraphExecutor::FCachedResult,TDefaultDelete<FPCGGraphExecutor::FCachedResult>_>,0>_>_&,_FPCGGraphExecutor::AddReferencedObjects_::__l9::<lambda_3>_>
          (TMap<unsigned___int64,TUniquePtr<FPCGGraphExecutor::FCachedResult,TDefaultDelete<FPCGGraphExecutor::FCachedResult>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TUniquePtr<FPCGGraphExecutor::FCachedResult,TDefaultDelete<FPCGGraphExecutor::FCachedResult>_>,0>_>
           *param_1,<lambda_3> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iVar10 = 0;
  uVar6 = 1;
  iVar12 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar9 = *puVar13;
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_149c9d8ae;
      uVar9 = puVar13[lVar8 + 1];
    }
    uVar6 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar12;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_149c9d8ae:
  uVar9 = *(uint *)&param_1->field_0x28;
  uVar14 = uVar9 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar10);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar9 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar12;
  uStack_40 = CONCAT44(uStack_6c,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&param_1->field_0x28;
  if (uVar9 != uVar6) {
    puVar11 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar14 = uVar14 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_149c9d9b0;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar14;
    if ((int)uVar6 < (int)uVar9) {
      uVar9 = uVar6;
    }
  }
LAB_149c9d9b0:
  while( true ) {
    if (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TUniquePtr<FPCGGraphExecutor::FCachedResult,TDefaultDelete<FPCGGraphExecutor::FCachedResult>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar9) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    FPCGDataCollection::AddReferences
              ((FPCGDataCollection *)
               (*(longlong *)(*(longlong *)param_1 + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18)
               + 8),param_2.Collector);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEach<TSet<FPCGContext_*,DefaultKeyFuncs<FPCGContext_*,0>,FDefaultSetAllocator>_&,`FPCGGraphExecutor::AddReferencedObjects'::__l11::<lambda_5>_> @ 149c9da30

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
Algo::
ForEach<TSet<FPCGContext_*,DefaultKeyFuncs<FPCGContext_*,0>,FDefaultSetAllocator>_&,_FPCGGraphExecutor::AddReferencedObjects_::__l11::<lambda_5>_>
          (TSet<FPCGContext_*,DefaultKeyFuncs<FPCGContext_*,0>,FDefaultSetAllocator> *param_1,
          <lambda_5> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  FPCGContext *this;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar10 = 0;
  uVar6 = 1;
  iVar12 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar9 = *puVar13;
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_149c9dace;
      uVar9 = puVar13[lVar8 + 1];
    }
    uVar6 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar12;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_149c9dace:
  uVar9 = *(uint *)&(param_1->Elements).field_0x28;
  uVar14 = uVar9 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar10);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar9 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar12;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(param_1->Elements).field_0x8 -
                       *(int *)&(param_1->Elements).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar9 != uVar6) {
    puVar11 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar14 = uVar14 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_149c9dbe0;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar14;
    if ((int)uVar6 < (int)uVar9) {
      uVar9 = uVar6;
    }
  }
LAB_149c9dbe0:
  while( true ) {
    if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
        (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<FPCGContext_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar9) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    this = *(FPCGContext **)
            (*(longlong *)&param_1->Elements + (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (this == (FPCGContext *)0x0) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<834425404453292675>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                         ,0xa83,"InContext");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      FPCGContext::AddStructReferencedObjects(this,param_2.Collector);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEach<TSet<TSharedPtr<FPCGGraphActiveTask,1>,DefaultKeyFuncs<TSharedPtr<FPCGGraphActiveTask,1>,0>,FDefaultSetAllocator>_&,`FPCGGraphExecutor::AddReferencedObjects'::__l10::<lambda_4>_> @ 149c9dc90

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
Algo::
ForEach<TSet<TSharedPtr<FPCGGraphActiveTask,1>,DefaultKeyFuncs<TSharedPtr<FPCGGraphActiveTask,1>,0>,FDefaultSetAllocator>_&,_FPCGGraphExecutor::AddReferencedObjects_::__l10::<lambda_4>_>
          (TSet<TSharedPtr<FPCGGraphActiveTask,1>,DefaultKeyFuncs<TSharedPtr<FPCGGraphActiveTask,1>,0>,FDefaultSetAllocator>
           *param_1,<lambda_4> param_2)

{
  undefined1 *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar4 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar11 = 0;
  uVar7 = 1;
  iVar13 = 0;
  iVar8 = 0;
  if (iVar4 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar8 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_149c9dd2e;
      uVar10 = puVar14[lVar9 + 1];
    }
    uVar7 = -uVar10 & uVar10;
    uVar3 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar8 = (int)lVar9 + -1 + iVar13;
    if (iVar4 < iVar8) {
      iVar8 = iVar4;
    }
  }
LAB_149c9dd2e:
  uVar10 = *(uint *)&(param_1->Elements).field_0x28;
  uVar15 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar11);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(param_1->Elements).field_0x8 -
                       *(int *)&(param_1->Elements).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar4 < (int)uVar10)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar10 != uVar7) {
    puVar12 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      uVar15 = uVar15 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_149c9de30;
      uVar10 = *(uint *)(puVar12 + lVar9 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar7 < (int)uVar10) {
      uVar10 = uVar7;
    }
  }
LAB_149c9de30:
  while( true ) {
    if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
        (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TSharedPtr<FPCGGraphActiveTask,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    plVar2 = (longlong *)
             (*(longlong *)&param_1->Elements + (longlong)TStack_60.CurrentBitIndex * 0x18);
    if ((*(longlong *)(*(longlong *)&param_1->Elements + (longlong)TStack_60.CurrentBitIndex * 0x18)
         == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar9 = *plVar2;
    if (*(longlong *)(lVar9 + 0x38) != 0) {
      if ((lVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FPCGContext::AddStructReferencedObjects(*(FPCGContext **)(*plVar2 + 0x38),param_2.Collector);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// GetInputSettings<UPCGCreateSurfaceFromPolygon2DSettings> @ 149c9df20

UPCGCreateSurfaceFromPolygon2DSettings * __cdecl
PCGContextHelpers::GetInputSettings<UPCGCreateSurfaceFromPolygon2DSettings>
          (UPCGNode *param_1,FPCGDataCollection *param_2)

{
  int iVar1;
  bool bVar2;
  UPCGSettings *pUVar3;
  UClass *pUVar4;
  FObjectPtr_u_0 *pFVar5;
  FObjectPtr_u_0 local_res8;
  
  if ((param_1 == (UPCGNode *)0x0) ||
     (pUVar3 = UPCGNode::GetSettings(param_1), pUVar3 == (UPCGSettings *)0x0)) {
    pFVar5 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGCreateSurfaceFromPolygon2DSettings>_::__l2::<lambda_1>_>
                       (&param_2->TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar5 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar5->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGCreateSurfaceFromPolygon2DSettings *)local_res8.Handle ==
            (UPCGCreateSurfaceFromPolygon2DSettings *)0x0) {
          return (UPCGCreateSurfaceFromPolygon2DSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGCreateSurfaceFromPolygon2DSettings *)local_res8.Handle !=
          (UPCGCreateSurfaceFromPolygon2DSettings *)0x0) {
        pUVar4 = UPCGCreateSurfaceFromPolygon2DSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar4);
        if (bVar2) {
          return (UPCGCreateSurfaceFromPolygon2DSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar3 = UPCGNode::GetSettings(param_1);
    pUVar3 = FPCGDataCollection::GetSettings(param_2,pUVar3);
    if (pUVar3 != (UPCGSettings *)0x0) {
      pUVar4 = UPCGCreateSurfaceFromPolygon2DSettings::StaticClass();
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) {
        return (UPCGCreateSurfaceFromPolygon2DSettings *)pUVar3;
      }
    }
  }
  return (UPCGCreateSurfaceFromPolygon2DSettings *)0x0;
}

// GetInputSettings<UPCGOffsetPolygon2DSettings> @ 149c9e000

UPCGOffsetPolygon2DSettings * __cdecl
PCGContextHelpers::GetInputSettings<UPCGOffsetPolygon2DSettings>
          (UPCGNode *param_1,FPCGDataCollection *param_2)

{
  int iVar1;
  bool bVar2;
  UPCGSettings *pUVar3;
  UPCGOffsetPolygon2DSettings *pUVar4;
  UClass *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  if ((param_1 == (UPCGNode *)0x0) ||
     (pUVar3 = UPCGNode::GetSettings(param_1), pUVar3 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGOffsetPolygon2DSettings>_::__l2::<lambda_1>_>
                       (&param_2->TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGOffsetPolygon2DSettings *)local_res8.Handle == (UPCGOffsetPolygon2DSettings *)0x0)
        {
          return (UPCGOffsetPolygon2DSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGOffsetPolygon2DSettings *)local_res8.Handle != (UPCGOffsetPolygon2DSettings *)0x0) {
        pUVar5 = UPCGOffsetPolygon2DSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar5);
        if (bVar2) {
          return (UPCGOffsetPolygon2DSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar3 = UPCGNode::GetSettings(param_1);
    pUVar4 = (UPCGOffsetPolygon2DSettings *)FPCGDataCollection::GetSettings(param_2,pUVar3);
    if (pUVar4 != (UPCGOffsetPolygon2DSettings *)0x0) {
      pUVar5 = UPCGOffsetPolygon2DSettings::StaticClass();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        return pUVar4;
      }
    }
  }
  return (UPCGOffsetPolygon2DSettings *)0x0;
}

// GetInputSettings<UPCGPolygon2DOperationSettings> @ 149c9e0e0

UPCGPolygon2DOperationSettings * __cdecl
PCGContextHelpers::GetInputSettings<UPCGPolygon2DOperationSettings>
          (UPCGNode *param_1,FPCGDataCollection *param_2)

{
  int iVar1;
  bool bVar2;
  UPCGSettings *pUVar3;
  UPCGPolygon2DOperationSettings *pUVar4;
  UClass *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  if ((param_1 == (UPCGNode *)0x0) ||
     (pUVar3 = UPCGNode::GetSettings(param_1), pUVar3 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGPolygon2DOperationSettings>_::__l2::<lambda_1>_>
                       (&param_2->TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGPolygon2DOperationSettings *)local_res8.Handle ==
            (UPCGPolygon2DOperationSettings *)0x0) {
          return (UPCGPolygon2DOperationSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGPolygon2DOperationSettings *)local_res8.Handle !=
          (UPCGPolygon2DOperationSettings *)0x0) {
        pUVar5 = UPCGPolygon2DOperationSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar5);
        if (bVar2) {
          return (UPCGPolygon2DOperationSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar3 = UPCGNode::GetSettings(param_1);
    pUVar4 = (UPCGPolygon2DOperationSettings *)FPCGDataCollection::GetSettings(param_2,pUVar3);
    if (pUVar4 != (UPCGPolygon2DOperationSettings *)0x0) {
      pUVar5 = UPCGPolygon2DOperationSettings::StaticClass();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        return pUVar4;
      }
    }
  }
  return (UPCGPolygon2DOperationSettings *)0x0;
}

// GetInputSettings<UPCGSettings> @ 149c9e1c0

UPCGSettings * __cdecl
PCGContextHelpers::GetInputSettings<UPCGSettings>(UPCGNode *param_1,FPCGDataCollection *param_2)

{
  bool bVar1;
  UPCGSettings *pUVar2;
  FObjectPtr_u_0 *pFVar3;
  UClass *pUVar4;
  FObjectPtr_u_0 local_res8;
  
  if ((param_1 != (UPCGNode *)0x0) &&
     (pUVar2 = UPCGNode::GetSettings(param_1), pUVar2 != (UPCGSettings *)0x0)) {
    pUVar2 = UPCGNode::GetSettings(param_1);
    pUVar2 = FPCGDataCollection::GetSettings(param_2,pUVar2);
    return pUVar2;
  }
  pFVar3 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSettings>_::__l2::<lambda_1>_>
                     (&param_2->TaggedData,(<lambda_1>)local_res8._0_1_);
  if (pFVar3 != (FObjectPtr_u_0 *)0x0) {
    local_res8 = (FObjectPtr_u_0)pFVar3->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGSettings *)local_res8.Handle == (UPCGSettings *)0x0) {
        return (UPCGSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8.Handle);
    }
    if ((UPCGSettings *)local_res8.Handle != (UPCGSettings *)0x0) {
      pUVar4 = Z_Construct_UClass_UPCGSettings_NoRegister();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar4);
      if (bVar1) {
        return (UPCGSettings *)local_res8.Handle;
      }
    }
  }
  return (UPCGSettings *)0x0;
}

// HeapSortInternal<TSharedPtr<FPCGLandscapeCacheEntry,1>,int,FIdentityFunctor,`UPCGLandscapeCache::Tick'::__l8::<lambda_1>_> @ 149c9ee60

void __cdecl
AlgoImpl::
HeapSortInternal<TSharedPtr<FPCGLandscapeCacheEntry,1>,int,FIdentityFunctor,_UPCGLandscapeCache::Tick_::__l8::<lambda_1>_>
          (TSharedPtr<FPCGLandscapeCacheEntry,1> *param_1,int param_2,FIdentityFunctor param_3,
          <lambda_1> param_4)

{
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  FPCGLandscapeCacheEntry *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  TSharedPtr<FPCGLandscapeCacheEntry,1> *pTVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  TSharedPtr<FPCGLandscapeCacheEntry,1> *pTVar13;
  TSharedPtr<FPCGLandscapeCacheEntry,1> *pTVar14;
  <lambda_1> local_res20 [8];
  
  local_res20[0] = param_4;
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
  iVar12 = iVar7;
  iVar10 = iVar6;
  do {
    while (param_2 <= iVar7) {
LAB_149c9ef89:
      if (iVar10 == 0) {
        iVar7 = param_2 + -1;
        lVar11 = (longlong)iVar7;
        if (0 < iVar7) {
          pTVar14 = param_1 + lVar11;
          do {
            pTVar2 = (pTVar14->SharedReferenceCount).ReferenceController;
            iVar12 = 0;
            pFVar3 = param_1->Object;
            pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
            param_1->Object = pTVar14->Object;
            (param_1->SharedReferenceCount).ReferenceController = pTVar2;
            pTVar14->Object = pFVar3;
            (pTVar14->SharedReferenceCount).ReferenceController = pTVar4;
            if (1 < iVar7) {
              do {
                iVar10 = iVar12 * 2;
                iVar6 = iVar10 + 1;
                if (iVar10 + 2 < iVar7) {
                  bVar5 = `UPCGLandscapeCache::Tick'::__l8::<lambda_1>::operator()
                                    (local_res20,param_1 + (iVar10 + 2),param_1 + iVar6);
                  if (bVar5) {
                    iVar6 = iVar10;
                  }
                  iVar6 = iVar6 + 1;
                }
                pTVar9 = param_1 + iVar6;
                pTVar13 = param_1 + iVar12;
                bVar5 = `UPCGLandscapeCache::Tick'::__l8::<lambda_1>::operator()
                                  (local_res20,pTVar13,pTVar9);
                if (!bVar5) break;
                pFVar3 = pTVar13->Object;
                pTVar2 = (pTVar13->SharedReferenceCount).ReferenceController;
                pTVar4 = (pTVar9->SharedReferenceCount).ReferenceController;
                pTVar13->Object = pTVar9->Object;
                (pTVar13->SharedReferenceCount).ReferenceController = pTVar4;
                pTVar9->Object = pFVar3;
                (pTVar9->SharedReferenceCount).ReferenceController = pTVar2;
                iVar12 = iVar6;
              } while (iVar6 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar11 = lVar11 + -1;
            pTVar14 = pTVar14 + -1;
          } while (0 < lVar11);
        }
        return;
      }
      iVar6 = iVar10 + -1;
      iVar7 = iVar12 + -2;
      iVar12 = iVar7;
      iVar10 = iVar6;
    }
    iVar7 = iVar6 * 2;
    iVar8 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      bVar5 = `UPCGLandscapeCache::Tick'::__l8::<lambda_1>::operator()
                        (local_res20,param_1 + (iVar7 + 2),param_1 + iVar8);
      if (bVar5) {
        iVar8 = iVar7;
      }
      iVar8 = iVar8 + 1;
    }
    pTVar9 = param_1 + iVar8;
    pTVar14 = param_1 + iVar6;
    bVar5 = `UPCGLandscapeCache::Tick'::__l8::<lambda_1>::operator()(local_res20,pTVar14,pTVar9);
    if (!bVar5) goto LAB_149c9ef89;
    pTVar2 = (pTVar9->SharedReferenceCount).ReferenceController;
    iVar7 = iVar8 * 2 + 1;
    pFVar3 = pTVar14->Object;
    pTVar4 = (pTVar14->SharedReferenceCount).ReferenceController;
    pTVar14->Object = pTVar9->Object;
    (pTVar14->SharedReferenceCount).ReferenceController = pTVar2;
    pTVar9->Object = pFVar3;
    (pTVar9->SharedReferenceCount).ReferenceController = pTVar4;
    iVar6 = iVar8;
  } while( true );
}

// InternalConstructor<APCGPartitionActor> @ 149c9f090

void __cdecl InternalConstructor<APCGPartitionActor>(FObjectInitializer *param_1)

{
  APartitionActor *this;
  
  this = (APartitionActor *)param_1->Obj;
  if (this != (APartitionActor *)0x0) {
    APartitionActor::APartitionActor(this,param_1);
    *(undefined ***)this = &___7APCGPartitionActor__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x30 = 0;
    *(undefined4 *)&this[1].field_0x38 = 0;
    *(undefined4 *)&this[1].field_0x3c = 0x80;
    *(undefined4 *)&this[1].field_0x40 = 0xffffffff;
    *(undefined4 *)&this[1].field_0x44 = 0;
    *(undefined8 *)&this[1].field_0x50 = 0;
    *(undefined4 *)&this[1].field_0x58 = 0;
    *(undefined8 *)&this[1].field_0x60 = 0;
    *(undefined8 *)&this[1].field_0x68 = 0;
    *(undefined8 *)&this[1].field_0x80 = 0;
    *(undefined4 *)&this[1].field_0x88 = 0;
    *(undefined4 *)&this[1].field_0x8c = 0x80;
    *(undefined4 *)&this[1].field_0x90 = 0xffffffff;
    *(undefined4 *)&this[1].field_0x94 = 0;
    *(undefined8 *)&this[1].field_0xa0 = 0;
    *(undefined4 *)&this[1].field_0xa8 = 0;
    *(undefined8 *)&this[1].field_0xb0 = 0;
    *(undefined8 *)&this[1].field_0xb8 = 0;
    *(undefined8 *)&this[1].field_0xd0 = 0;
    *(undefined4 *)&this[1].field_0xd8 = 0;
    *(undefined4 *)&this[1].field_0xdc = 0x80;
    *(undefined4 *)&this[1].field_0xe0 = 0xffffffff;
    *(undefined4 *)&this[1].field_0xe4 = 0;
    *(undefined8 *)&this[1].field_0xf0 = 0;
    *(undefined4 *)&this[1].field_0xf8 = 0;
    *(undefined4 *)&this[1].field_0x108 = 0;
    *(undefined2 *)&this[1].field_0x10c = 0;
    this[1].field_0x10e = 0;
    *(undefined4 *)&this[1].field_0x100 = 0;
  }
  return;
}

// InternalConstructor<UPCGCreateSurfaceFromPolygon2DSettings> @ 149c9f1c0

void __cdecl
InternalConstructor<UPCGCreateSurfaceFromPolygon2DSettings>(FObjectInitializer *param_1)

{
  UPCGSettings *this;
  
  this = (UPCGSettings *)param_1->Obj;
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    this->_padding_ = (longlong)&___7UPCGCreateSurfaceFromPolygon2DSettings__6B_;
  }
  return;
}

// InternalConstructor<UPCGGridLinkageSettings> @ 149c9f1f0

void __cdecl InternalConstructor<UPCGGridLinkageSettings>(FObjectInitializer *param_1)

{
  UPCGSettings *this;
  FObjectInitializer *pFVar1;
  undefined8 local_res8;
  
  this = (UPCGSettings *)param_1->Obj;
  if (this != (UPCGSettings *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    UPCGSettings::UPCGSettings(this,pFVar1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPCGGridLinkageSettings__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[1]._padding_,0);
    local_res8 = 0;
    FSoftObjectPtr::operator=((FSoftObjectPtr *)&this[1]._padding_,(FObjectPtr)&local_res8);
  }
  return;
}

// InternalConstructor<UPCGLandscapeCache> @ 149c9f290

void __cdecl InternalConstructor<UPCGLandscapeCache>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined2 *)(this + 1) = 0x201;
    *(undefined ***)this = &___7UPCGLandscapeCache__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x8 = 0;
    *(undefined4 *)&this[2].field_0xc = 0x80;
    *(undefined4 *)&this[2].field_0x10 = 0xffffffff;
    *(undefined4 *)&this[2].field_0x14 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined4 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)(this + 4) = 0;
    *(undefined4 *)&this[4].field_0x8 = 0;
    *(undefined4 *)&this[4].field_0xc = 0x80;
    *(undefined4 *)&this[4].field_0x10 = 0xffffffff;
    *(undefined4 *)&this[4].field_0x14 = 0;
    *(undefined8 *)&this[4].field_0x20 = 0;
    *(undefined4 *)(this + 5) = 0;
    *(undefined8 *)&this[5].field_0x8 = 0;
    *(undefined4 *)&this[5].field_0x10 = 0;
    *(undefined2 *)&this[5].field_0x14 = 0;
  }
  return;
}

// InternalConstructor<UPCGOffsetPolygon2DSettings> @ 149c9f350

void __cdecl InternalConstructor<UPCGOffsetPolygon2DSettings>(FObjectInitializer *param_1)

{
  UPCGSettings *this;
  
  this = (UPCGSettings *)param_1->Obj;
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPCGOffsetPolygon2DSettings__6B_;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 1;
    FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
              ((FPCGAttributePropertyInputSelector *)&this[1]._padding_);
    this[1]._padding_ = 0x4059000000000000;
  }
  return;
}

// InternalConstructor<UPCGPolygon2DOperationSettings> @ 149c9f3b0

void __cdecl InternalConstructor<UPCGPolygon2DOperationSettings>(FObjectInitializer *param_1)

{
  UPCGSettings *this;
  
  this = (UPCGSettings *)param_1->Obj;
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0x202;
    this->_padding_ = (longlong)&___7UPCGPolygon2DOperationSettings__6B_;
    this[1]._padding_ = 0x3ff0000000000000;
    *(undefined1 *)&this[1]._padding_ = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<APCGPartitionActor> @ 149c9f400

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<APCGPartitionActor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  APartitionActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = APCGPartitionActor::GetPrivateStaticClass();
  this = (APartitionActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (APartitionActor *)0x0) {
    APartitionActor::APartitionActor(this,param_1);
    *(undefined ***)this = &___7APCGPartitionActor__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x30 = 0;
    *(undefined4 *)&this[1].field_0x38 = 0;
    *(undefined4 *)&this[1].field_0x3c = 0x80;
    *(undefined4 *)&this[1].field_0x40 = 0xffffffff;
    *(undefined4 *)&this[1].field_0x44 = 0;
    *(undefined8 *)&this[1].field_0x50 = 0;
    *(undefined4 *)&this[1].field_0x58 = 0;
    *(undefined8 *)&this[1].field_0x60 = 0;
    *(undefined8 *)&this[1].field_0x68 = 0;
    *(undefined8 *)&this[1].field_0x80 = 0;
    *(undefined4 *)&this[1].field_0x88 = 0;
    *(undefined4 *)&this[1].field_0x8c = 0x80;
    *(undefined4 *)&this[1].field_0x90 = 0xffffffff;
    *(undefined4 *)&this[1].field_0x94 = 0;
    *(undefined8 *)&this[1].field_0xa0 = 0;
    *(undefined4 *)&this[1].field_0xa8 = 0;
    *(undefined8 *)&this[1].field_0xb0 = 0;
    *(undefined8 *)&this[1].field_0xb8 = 0;
    *(undefined8 *)&this[1].field_0xd0 = 0;
    *(undefined4 *)&this[1].field_0xd8 = 0;
    *(undefined4 *)&this[1].field_0xdc = 0x80;
    *(undefined4 *)&this[1].field_0xe0 = 0xffffffff;
    *(undefined4 *)&this[1].field_0xe4 = 0;
    *(undefined8 *)&this[1].field_0xf0 = 0;
    *(undefined4 *)&this[1].field_0xf8 = 0;
    *(undefined4 *)&this[1].field_0x108 = 0;
    *(undefined2 *)&this[1].field_0x10c = 0;
    this[1].field_0x10e = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGCreateSurfaceFromPolygon2DSettings> @ 149c9f5a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGCreateSurfaceFromPolygon2DSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGCreateSurfaceFromPolygon2DSettings::GetPrivateStaticClass();
  this = (UPCGSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    this->_padding_ = (longlong)&___7UPCGCreateSurfaceFromPolygon2DSettings__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGGridLinkageSettings> @ 149c9f650

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGGridLinkageSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGSettings *this;
  UPCGSettings *pUVar3;
  undefined8 local_res10;
  
  pUVar3 = (UPCGSettings *)0x0;
  local_res10 = 0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGGridLinkageSettings::GetPrivateStaticClass();
  this = (UPCGSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPCGGridLinkageSettings__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[1]._padding_,0);
    local_res10 = 0;
    FSoftObjectPtr::operator=((FSoftObjectPtr *)&this[1]._padding_,(FObjectPtr)&local_res10);
    pUVar3 = this;
  }
  return (UObject *)pUVar3;
}

// InternalVTableHelperCtorCaller<UPCGLandscapeCache> @ 149c9f750

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPCGLandscapeCache>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGLandscapeCache::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined2 *)(pUVar1 + 1) = 0x201;
    *(undefined ***)pUVar1 = &___7UPCGLandscapeCache__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined4 *)&pUVar1[2].field_0x8 = 0;
    *(undefined4 *)&pUVar1[2].field_0xc = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x10 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0x14 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined4 *)&pUVar1[4].field_0x8 = 0;
    *(undefined4 *)&pUVar1[4].field_0xc = 0x80;
    *(undefined4 *)&pUVar1[4].field_0x10 = 0xffffffff;
    *(undefined4 *)&pUVar1[4].field_0x14 = 0;
    *(undefined8 *)&pUVar1[4].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 5) = 0;
    *(undefined8 *)&pUVar1[5].field_0x8 = 0;
    *(undefined4 *)&pUVar1[5].field_0x10 = 0;
    *(undefined2 *)&pUVar1[5].field_0x14 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGOffsetPolygon2DSettings> @ 149c9f890

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGOffsetPolygon2DSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGOffsetPolygon2DSettings::GetPrivateStaticClass();
  this = (UPCGSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UPCGOffsetPolygon2DSettings__6B_;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 1;
    FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
              ((FPCGAttributePropertyInputSelector *)&this[1]._padding_);
    this[1]._padding_ = 0x4059000000000000;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPCGPolygon2DOperationSettings> @ 149c9f970

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPCGPolygon2DOperationSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPCGSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPCGPolygon2DOperationSettings::GetPrivateStaticClass();
  this = (UPCGSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 0x202;
    this->_padding_ = (longlong)&___7UPCGPolygon2DOperationSettings__6B_;
    this[1]._padding_ = 0x3ff0000000000000;
    *(undefined1 *)&this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<TSharedPtr<FPCGLandscapeCacheEntry,1>,int,FIdentityFunctor,`UPCGLandscapeCache::Tick'::__l8::<lambda_1>_> @ 149c9fa40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSharedPtr<FPCGLandscapeCacheEntry,1>,int,FIdentityFunctor,_UPCGLandscapeCache::Tick_::__l8::<lambda_1>_>
          (TSharedPtr<FPCGLandscapeCacheEntry,1> *param_1,int param_2,FIdentityFunctor param_3,
          <lambda_1> param_4)

{
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  FPCGLandscapeCacheEntry *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  int iVar6;
  TSharedPtr<FPCGLandscapeCacheEntry,1> *pTVar7;
  TSharedPtr<FPCGLandscapeCacheEntry,1> *pTVar8;
  TSharedPtr<FPCGLandscapeCacheEntry,1> **ppTVar9;
  TSharedPtr<FPCGLandscapeCacheEntry,1> *pTVar10;
  TSharedPtr<FPCGLandscapeCacheEntry,1> *pTVar11;
  TSharedPtr<FPCGLandscapeCacheEntry,1> *pTVar12;
  TSharedPtr<FPCGLandscapeCacheEntry,1> *pTVar13;
  float fVar14;
  undefined1 auStack_398 [32];
  int local_378;
  TSharedPtr<FPCGLandscapeCacheEntry,1> **local_370;
  TSharedPtr<FPCGLandscapeCacheEntry,1> *local_358;
  TSharedPtr<FPCGLandscapeCacheEntry,1> *local_348;
  TSharedPtr<FPCGLandscapeCacheEntry,1> *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_398;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar14 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar14;
    memset(local_330,0,0x2e8);
    ppTVar9 = &local_348;
    do {
      pTVar10 = ppTVar9[1];
      pTVar13 = *ppTVar9;
      local_358 = ppTVar9[2];
      iVar6 = (int)((longlong)pTVar10 - (longlong)pTVar13 >> 4) + 1;
      local_378 = (int)local_358;
      pTVar12 = pTVar13;
      local_370 = ppTVar9;
      if ((int)local_358 != 0) {
LAB_149c9fb06:
        if (8 < iVar6) {
          pTVar2 = (pTVar12->SharedReferenceCount).ReferenceController;
          pTVar7 = pTVar10 + 1;
          pFVar3 = pTVar12[iVar6 / 2].Object;
          pTVar4 = pTVar12[iVar6 / 2].SharedReferenceCount.ReferenceController;
          pTVar12[iVar6 / 2].Object = pTVar12->Object;
          pTVar12[iVar6 / 2].SharedReferenceCount.ReferenceController = pTVar2;
          pTVar12->Object = pFVar3;
          (pTVar12->SharedReferenceCount).ReferenceController = pTVar4;
          pTVar13 = pTVar12;
LAB_149c9fb33:
          pTVar11 = pTVar13;
          pTVar13 = pTVar11 + 1;
          if (pTVar13 <= pTVar10) goto code_r0x000149c9fb3c;
          goto LAB_149c9fbb0;
        }
        for (; pTVar7 = pTVar12, pTVar13 = pTVar12, pTVar12 < pTVar10; pTVar10 = pTVar10 + -1) {
          while (pTVar13 = pTVar13 + 1, pTVar13 <= pTVar10) {
            if ((pTVar7->Object == (FPCGLandscapeCacheEntry *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar5)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            iVar6 = pTVar7->Object->Touch;
            if ((pTVar13->Object == (FPCGLandscapeCacheEntry *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar5)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            if (iVar6 < pTVar13->Object->Touch) {
              pTVar7 = pTVar13;
            }
          }
          pFVar3 = pTVar7->Object;
          pTVar4 = (pTVar7->SharedReferenceCount).ReferenceController;
          pTVar2 = (pTVar10->SharedReferenceCount).ReferenceController;
          pTVar7->Object = pTVar10->Object;
          (pTVar7->SharedReferenceCount).ReferenceController = pTVar2;
          pTVar10->Object = pFVar3;
          (pTVar10->SharedReferenceCount).ReferenceController = pTVar4;
          ppTVar9 = local_370;
        }
        goto LAB_149c9fcec;
      }
LAB_149c9fcda:
      HeapSortInternal<TSharedPtr<FPCGLandscapeCacheEntry,1>,int,FIdentityFunctor,_UPCGLandscapeCache::Tick_::__l8::<lambda_1>_>
                (pTVar13,iVar6,param_3,param_4);
LAB_149c9fcec:
      ppTVar9 = ppTVar9 + -3;
    } while (&local_348 <= ppTVar9);
  }
  return;
code_r0x000149c9fb3c:
  if ((pTVar12->Object == (FPCGLandscapeCacheEntry *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar6 = pTVar12->Object->Touch;
  if ((pTVar13->Object == (FPCGLandscapeCacheEntry *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (pTVar13->Object->Touch <= iVar6) goto LAB_149c9fb33;
LAB_149c9fbb0:
  do {
    pTVar8 = pTVar7;
    pTVar7 = pTVar8 + -1;
    if (pTVar7 <= pTVar12) break;
    if ((pTVar7->Object == (FPCGLandscapeCacheEntry *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar6 = pTVar7->Object->Touch;
    if ((pTVar12->Object == (FPCGLandscapeCacheEntry *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  } while (pTVar12->Object->Touch <= iVar6);
  pTVar2 = pTVar8[-1].SharedReferenceCount.ReferenceController;
  if (pTVar13 <= pTVar7) {
    pFVar3 = pTVar13->Object;
    pTVar4 = pTVar11[1].SharedReferenceCount.ReferenceController;
    pTVar13->Object = pTVar7->Object;
    pTVar11[1].SharedReferenceCount.ReferenceController = pTVar2;
    pTVar7->Object = pFVar3;
    pTVar8[-1].SharedReferenceCount.ReferenceController = pTVar4;
    goto LAB_149c9fb33;
  }
  pFVar3 = pTVar12->Object;
  pTVar4 = (pTVar12->SharedReferenceCount).ReferenceController;
  local_378 = local_378 + -1;
  pTVar12->Object = pTVar7->Object;
  (pTVar12->SharedReferenceCount).ReferenceController = pTVar2;
  pTVar7->Object = pFVar3;
  pTVar8[-1].SharedReferenceCount.ReferenceController = pTVar4;
  if ((longlong)((longlong)pTVar7 + (-0x10 - (longlong)pTVar12) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pTVar10 - (longlong)pTVar13 & 0xfffffffffffffff0U)) {
    if (pTVar13 < pTVar10) {
      *ppTVar9 = pTVar13;
      ppTVar9[1] = pTVar10;
      *(int *)(ppTVar9 + 2) = local_378;
      ppTVar9 = ppTVar9 + 3;
      local_370 = ppTVar9;
    }
    if (pTVar7 <= pTVar12 + 1) goto LAB_149c9fcec;
    pTVar10 = pTVar8 + -2;
    pTVar13 = pTVar12;
  }
  else {
    if (pTVar12 + 1 < pTVar7) {
      *ppTVar9 = pTVar12;
      ppTVar9[1] = pTVar8 + -2;
      *(int *)(ppTVar9 + 2) = local_378;
      ppTVar9 = ppTVar9 + 3;
      local_370 = ppTVar9;
    }
    if (pTVar10 <= pTVar13) goto LAB_149c9fcec;
  }
  iVar6 = (int)((longlong)pTVar10 - (longlong)pTVar13 >> 4) + 1;
  pTVar12 = pTVar13;
  if (local_378 == 0) goto LAB_149c9fcda;
  goto LAB_149c9fb06;
}

// IsObjectPtrEqual<UPCGPin,UPCGPin_const_*,0> @ 149c9fe70

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UPCGPin,UPCGPin_const_*,0>
          (TObjectPtr<UPCGPin> *param_1,UPCGPin **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UPCGPin *)0x0) {
    return *param_2 == (UPCGPin *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// Launch<`FPCGGraphExecutor::ExecuteScheduling'::__l110::<lambda_2>_> @ 149c9fe90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::Tasks::Private::FTaskHandle::Launch<_FPCGGraphExecutor::ExecuteScheduling_::__l110::<lambda_2>_>
          (FTaskHandle *this,wchar_t *param_1,<lambda_2> *param_2,ETaskPriority param_3,
          EExtendedTaskPriority param_4,ETaskFlags param_5)

{
  FMutex *this_00;
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_char> aVar2;
  atomic<unsigned_int> aVar3;
  code *pcVar4;
  bool bVar5;
  Type TVar6;
  FTaskBase *pFVar7;
  atomic<unsigned___int64> aVar8;
  FTaskBase *this_01;
  bool local_res8 [8];
  
  if (((this->Pimpl).Reference != (FTaskBase *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Task.h"
                         ,0x77,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar7 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
           ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                       *)&SmallTaskAllocator);
  this_01 = (FTaskBase *)0x0;
  if (pFVar7 != (FTaskBase *)0x0) {
    pFVar7->Pipe = (FPipe *)0x0;
    pFVar7->_padding_ = (longlong)&___7FTaskBase_Private_Tasks_UE__6B_;
    pFVar7->RefCount = (atomic<unsigned_int>)0x2;
    pFVar7->NumLocks = (atomic<unsigned_int>)0x1;
    (pFVar7->StateChangeEvent).Count = (atomic<unsigned_int>)0x0;
    pFVar7->TaskTriggered = (atomic<bool>)0x0;
    pFVar7->ExecutingThreadId = (atomic<unsigned_int>)0xffffffff;
    aVar8 = (atomic<unsigned___int64>)TaskTrace::GenerateTaskId();
    pFVar7->TraceId = aVar8;
    this_00 = &(pFVar7->Prerequisites).Mutex;
    (pFVar7->Prerequisites).Prerequisites.AllocatorInstance.SecondaryData =
         (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0;
    (pFVar7->Prerequisites).Prerequisites.ArrayNum = 0;
    (pFVar7->Prerequisites).Prerequisites.ArrayMax = 1;
    this_00->State = (atomic<unsigned_char>)0x1;
    *(undefined ***)&(pFVar7->LowLevelTask).field_0x28 =
         &
         ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(undefined8 *)&(pFVar7->LowLevelTask).field_0x38 = 0xe800000000000020;
    *(undefined8 *)&(pFVar7->LowLevelTask).field_0x30 = 0;
    (pFVar7->Subsequents).Subsequents.AllocatorInstance.SecondaryData =
         (ForElementType<UE::Tasks::Private::FTaskBase_*>)0x0;
    (pFVar7->Subsequents).Subsequents.ArrayNum = 0;
    (pFVar7->Subsequents).Subsequents.ArrayMax = 1;
    (pFVar7->Subsequents).bIsClosed = (atomic<bool>)0x0;
    (pFVar7->Subsequents).Mutex = (atomic<unsigned_char>)0x0;
    LOCK();
    aVar2 = this_00->State;
    this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
    UNLOCK();
    if (((byte)aVar2 & 2) != 0) {
      FMutex::WakeWaitingThread(this_00);
    }
    pFVar7->_padding_ = (longlong)&___7__TTaskWithResult__N_Private_Tasks_UE__6B_;
    FTaskBase::Init(pFVar7,param_1,param_3,param_4,param_5);
    pFVar7->_padding_ =
         (longlong)
         &TExecutableTaskBase<`FPCGGraphExecutor::ExecuteScheduling'::`110'::<lambda_2>,bool,void>::
          _vftable_;
    pFVar7[1]._padding_ = (longlong)param_2->__this;
    pFVar7[1]._padding_ = (longlong)(param_2->ActiveTask).Object;
    pFVar7[1]._padding_ = (longlong)(param_2->ActiveTask).SharedReferenceCount.ReferenceController;
    (param_2->ActiveTask).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (param_2->ActiveTask).Object = (FPCGGraphActiveTask *)0x0;
    pFVar7[1]._padding_ = (longlong)param_2->SchedulingBudgetInSeconds;
    pFVar7->_padding_ =
         (longlong)
         &TExecutableTask<`FPCGGraphExecutor::ExecuteScheduling'::`110'::<lambda_2>_>::_vftable_;
    this_01 = pFVar7;
  }
  pFVar7 = (this->Pimpl).Reference;
  if (pFVar7 != (FTaskBase *)0x0) {
    (this->Pimpl).Reference = (FTaskBase *)0x0;
    LOCK();
    paVar1 = &pFVar7->RefCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar7->_padding_)(pFVar7,1);
    }
  }
  (this->Pimpl).Reference = this_01;
  if (-1 < TaskTrace::TaskChannel->Enabled) {
    TVar6 = TranslatePriority((ETaskPriority)
                              ((ulonglong)*(undefined8 *)&(this_01->LowLevelTask).field_0x38 >> 0x3b
                              ) & (Inherit|Default),this_01->ExtendedPriority);
    TaskTrace::Launched((ulong64)this_01->TraceId,
                        (wchar_t *)
                        (*(ulonglong *)&(this_01->LowLevelTask).field_0x38 >> 6 & 0x1fffffffffffff),
                        true,TVar6,0x100);
  }
  local_res8[0] = true;
  FTaskBase::TryUnlock(this_01,local_res8);
  return;
}

// MakeShared<FPCGTrivialElement,1> @ 149ca00e0

TSharedRef<FPCGTrivialElement,1> * __cdecl
MakeShared<FPCGTrivialElement,1>(TSharedRef<FPCGTrivialElement,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FPCGTrivialElement,1> *pTVar4;
  
  pTVar3 = operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FPCGTrivialElement *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFPCGTrivialElement___00_SharedPointerInternals__6B_;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3[1]._padding_ = (longlong)&___7FPCGTrivialElement__6B_;
    __return_storage_ptr__->Object = (FPCGTrivialElement *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<FPCGTrivialElement,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// NewObject<UPCGComponent> @ 149ca0280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGComponent * __cdecl
NewObject<UPCGComponent>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UPCGComponent *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UPCGComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UPCGComponent *)
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

// RelocateConstructItems<UPCGComponent_*,TObjectPtr<UPCGComponent>,int> @ 149ca0de0

void __cdecl
RelocateConstructItems<UPCGComponent_*,TObjectPtr<UPCGComponent>,int>
          (void *param_1,TObjectPtr<UPCGComponent> *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FObjectPtr_u_0 *)(lVar1 + (longlong)param_2) = *(FObjectPtr_u_0 *)param_2;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// StaticEnum<enum_EPCGElementSource> @ 149ca1b20

UEnum * __cdecl StaticEnum<enum_EPCGElementSource>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGElementSource.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGElementSource.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGElementSource,(UObject *)pUVar1,
                       L"EPCGElementSource");
  }
  return Z_Registration_Info_UEnum_EPCGElementSource.OuterSingleton;
}

// StaticEnum<enum_EPCGLandscapeCacheSerializationContents> @ 149ca1b60

UEnum * __cdecl StaticEnum<enum_EPCGLandscapeCacheSerializationContents>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGLandscapeCacheSerializationContents.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGLandscapeCacheSerializationContents.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGLandscapeCacheSerializationContents,
                       (UObject *)pUVar1,L"EPCGLandscapeCacheSerializationContents");
  }
  return Z_Registration_Info_UEnum_EPCGLandscapeCacheSerializationContents.OuterSingleton;
}

// StaticEnum<enum_EPCGLandscapeCacheSerializationMode> @ 149ca1ba0

UEnum * __cdecl StaticEnum<enum_EPCGLandscapeCacheSerializationMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGLandscapeCacheSerializationMode.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGLandscapeCacheSerializationMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGLandscapeCacheSerializationMode,(UObject *)pUVar1,
                       L"EPCGLandscapeCacheSerializationMode");
  }
  return Z_Registration_Info_UEnum_EPCGLandscapeCacheSerializationMode.OuterSingleton;
}

// StaticEnum<enum_EPCGPolygonOffsetOperation> @ 149ca1be0

UEnum * __cdecl StaticEnum<enum_EPCGPolygonOffsetOperation>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGPolygonOffsetOperation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGPolygonOffsetOperation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGPolygonOffsetOperation,(UObject *)pUVar1,
                       L"EPCGPolygonOffsetOperation");
  }
  return Z_Registration_Info_UEnum_EPCGPolygonOffsetOperation.OuterSingleton;
}

// StaticEnum<enum_EPCGPolygonOperation> @ 149ca1c20

UEnum * __cdecl StaticEnum<enum_EPCGPolygonOperation>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGPolygonOperation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGPolygonOperation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGPolygonOperation,(UObject *)pUVar1,
                       L"EPCGPolygonOperation");
  }
  return Z_Registration_Info_UEnum_EPCGPolygonOperation.OuterSingleton;
}

// StaticEnum<enum_EPCGPolygonOperationMetadataMode> @ 149ca1c60

UEnum * __cdecl StaticEnum<enum_EPCGPolygonOperationMetadataMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPCGPolygonOperationMetadataMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGPolygonOperationMetadataMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGPolygonOperationMetadataMode,(UObject *)pUVar1,
                       L"EPCGPolygonOperationMetadataMode");
  }
  return Z_Registration_Info_UEnum_EPCGPolygonOperationMetadataMode.OuterSingleton;
}

// ~TFunction_OwnedObject<`ExecuteOnGameThread<`FPCGGraphActiveTask::~FPCGGraphActiveTask'::__l5::<lambda_1>_>'::__l2::<lambda_1>,1,0> @ 149ca4a80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`FPCGGraphActiveTask::~FPCGGraphActiveTask'::__l5::<lambda_1>_>'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_ExecuteOnGameThread<_FPCGGraphActiveTask::~FPCGGraphActiveTask_::__l5::<lambda_1>_>_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnGameThread<`FPCGGraphActiveTask::~FPCGGraphActiveTask'::`5'::<lambda_1>_>'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UPCGGridLinkageSettings::CreateElement'::__l2::<lambda_1>,0,0> @ 149ca4aa0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGGridLinkageSettings::CreateElement'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UPCGGridLinkageSettings::CreateElement_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPCGGridLinkageSettings::CreateElement'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FPCGGraphExecutor::ScheduleGeneric'::__l2::<lambda_1>,0,1> @ 149ca4ac0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGGraphExecutor::ScheduleGeneric'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FPCGGraphExecutor::ScheduleGeneric_::__l2::<lambda_1>,0,1>(void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FPCGGraphExecutor::ScheduleGeneric'::`2'::<lambda_1>,0,1>::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x000149ca4ae3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FPCGGraphCompiler::CreateGridLinkages'::__l21::<lambda_1>,0,1> @ 149ca4af0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGGraphCompiler::CreateGridLinkages'::__l21::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FPCGGraphCompiler::CreateGridLinkages_::__l21::<lambda_1>,0,1>(void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FPCGGraphCompiler::CreateGridLinkages'::`21'::<lambda_1>,0,1>::
        _vftable_;
  pvVar1 = *(void **)((longlong)this + 0x10);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
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

// ~TFunction_OwnedObject<`FPCGGraphExecutor::ScheduleGeneric'::__l2::<lambda_2>,0,1> @ 149ca4b10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGGraphExecutor::ScheduleGeneric'::__l2::<lambda_2>,0,1>::
~TFunction_OwnedObject<_FPCGGraphExecutor::ScheduleGeneric_::__l2::<lambda_2>,0,1>(void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FPCGGraphExecutor::ScheduleGeneric'::`2'::<lambda_2>,0,1>::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x000149ca4b33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// operator() @ 149ca7f40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall <lambda_26>::operator()(<lambda_26> *this,IConsoleVariable *param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 local_68 [12];
  undefined1 local_5c [12];
  undefined4 local_50;
  undefined1 local_4c;
  undefined8 local_48;
  undefined1 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  undefined8 local_2c;
  undefined1 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (2 < (byte)LogPCG._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
  }
  if (param_1 == (IConsoleVariable *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InVariable",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphCache.cpp"
                       ,0x3d,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  cVar5 = (**(code **)(*(longlong *)param_1 + 0xc0))(param_1);
  lVar3 = CVarCacheEnabledRuntime._padding_;
  local_50 = 0xe000000;
  local_48 = 0;
  lVar1 = *(longlong *)CVarCacheEnabledRuntime._padding_;
  local_4c = 0;
  local_40 = 0;
  local_3c = 0xf000000;
  local_38 = 0x1000000;
  uVar6 = (**(code **)(lVar1 + 0xa8))(CVarCacheEnabledRuntime._padding_,local_68,&local_50);
  puVar7 = &u_0;
  if (cVar5 != '\0') {
    puVar7 = &u_1;
  }
  (**(code **)(lVar1 + 0xb0))(lVar3,puVar7,uVar6);
  lVar3 = CVarCacheEnabledEditor._padding_;
  local_34 = 0xe000000;
  local_30 = 0;
  lVar1 = *(longlong *)CVarCacheEnabledEditor._padding_;
  local_2c = 0;
  local_24 = 0;
  local_20 = 0xf000000;
  local_1c = 0x1000000;
  uVar6 = (**(code **)(lVar1 + 0xa8))(CVarCacheEnabledEditor._padding_,local_5c,&local_34);
  (**(code **)(lVar1 + 0xb0))(lVar3,puVar7,uVar6);
  return;
}

// operator() @ 149ca80a0

void __thiscall
`PCGGrammar::BuildModules'::__l2::<lambda_2>::operator()(void *this,EModuleType param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  ITextData *pIVar3;
  FText *pFVar4;
  FText *pFVar5;
  FText local_48;
  FText local_38;
  FLog local_28;
  
  lVar1 = **(longlong **)this;
  if ((lVar1 != 0) && (*(EModuleType *)(lVar1 + 0x24) == param_1)) {
    **(longlong **)((longlong)this + 8) = lVar1;
    **(longlong **)this = *(longlong *)(**(longlong **)this + 0x10);
    return;
  }
  puVar2 = *(undefined1 **)((longlong)this + 0x10);
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"PCGGrammar",L"InvalidCloseSubmodule",L"Mismatched module end.");
  pFVar5 = FText::FText(&local_38,pFVar4);
  FText::FText(&local_28.Message,pFVar5);
  local_28.Verbosity = Error;
  pIVar3 = (pFVar5->TextData).Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  TArray<FPCGGrammarResult::FLog,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<FPCGGrammarResult::FLog>
            ((TArray<FPCGGrammarResult::FLog,TSizedDefaultAllocator<32>_> *)(puVar2 + 0x38),
             &local_28);
  if (local_28.Message.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.Message.TextData.Reference + 0x10))();
  }
  *puVar2 = 0;
  pIVar3 = (pFVar4->TextData).Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  **(undefined1 **)((longlong)this + 0x18) = 0;
  return;
}

// `scalar_deleting_destructor' @ 149ca8c10

void * __thiscall
UE::Tasks::Private::TExecutableTask<`FPCGGraphExecutor::ExecuteScheduling'::__l110::<lambda_2>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &___7__TTaskWithResult__N_Private_Tasks_UE__6B_;
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

// `scalar_deleting_destructor' @ 149ca8c80

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FPCGGraphExecutor::ExecuteScheduling'::__l110::<lambda_2>,bool,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &___7__TTaskWithResult__N_Private_Tasks_UE__6B_;
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ca8cd0

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
UE::Core::Private::Function::
TFunction_OwnedObject<FPCGContext_*_(__cdecl*)(FPCGInitializeElementParams_const_&),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<FPCGContext_*_(__cdecl*)(FPCGInitializeElementParams_const_&),0,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6APEAUFPCGContext__AEBUFPCGInitializeElementParams___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ca8d10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<FPCGGridLinkageContext_*_(__cdecl*)(FPCGInitializeElementParams_const_&),0,0>
::_scalar_deleting_destructor_
          (TFunction_OwnedObject<FPCGGridLinkageContext_*_(__cdecl*)(FPCGInitializeElementParams_const_&),0,0>
           *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6APEAUFPCGGridLinkageContext__AEBUFPCGInitializeElementParams___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ca8d50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<`FPCGGraphActiveTask::~FPCGGraphActiveTask'::__l5::<lambda_1>_>'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnGameThread<`FPCGGraphActiveTask::~FPCGGraphActiveTask'::`5'::<lambda_1>_>'::`2'::<lambda_1>,1,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ca8d90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UPCGGridLinkageSettings::CreateElement'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UPCGGridLinkageSettings::CreateElement'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ca8dd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGGraphExecutor::ScheduleGeneric'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FPCGGraphExecutor::ScheduleGeneric'::`2'::<lambda_1>,0,1>::_vftable_;
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

// `scalar_deleting_destructor' @ 149ca8e30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGGraphCompiler::CreateGridLinkages'::__l21::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FPCGGraphCompiler::CreateGridLinkages'::`21'::<lambda_1>,0,1>::
        _vftable_;
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ca8e80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGGraphExecutor::ScheduleGeneric'::__l2::<lambda_2>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FPCGGraphExecutor::ScheduleGeneric'::`2'::<lambda_2>,0,1>::_vftable_;
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

// `scalar_deleting_destructor' @ 149ca8ee0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGComponentOctreeID,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FPCGComponentOctreeID,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ca8f20

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGGraphActiveTask,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FPCGGraphActiveTask,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ca8f60

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGLandscapeCacheEntry,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FPCGLandscapeCacheEntry,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ca8fa0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGStackContext,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FPCGStackContext,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ca8fe0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGGraphExecutor::FGameThreadHandler,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FPCGGraphExecutor::FGameThreadHandler,1> *this,uint param_1
          )

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ca9020

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGCreateSurfaceFromPolygon2DElement,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FPCGCreateSurfaceFromPolygon2DElement,1> *this,uint param_1
          )

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ca9060

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGFetchInputElement,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FPCGFetchInputElement,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ca90a0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGGenericElement,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FPCGGenericElement,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ca90e0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<PCGGraphExecutor::FPCGGridLinkageElement,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<PCGGraphExecutor::FPCGGridLinkageElement,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ca9120

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGOffsetPolygonElement,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FPCGOffsetPolygonElement,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ca9160

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGPolygon2DOperationElement,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FPCGPolygon2DOperationElement,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ca91a0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPCGPreGraphElement,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FPCGPreGraphElement,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ca91e0

void * __thiscall
APCGPartitionActor::_scalar_deleting_destructor_(APCGPartitionActor *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7APCGPartitionActor__6B_;
  *(undefined4 *)&(this->LoadedPreviewComponents).field_0x48 = 0;
  pvVar1 = *(void **)&(this->LoadedPreviewComponents).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LoadedPreviewComponents);
  *(undefined4 *)&(this->LocalToOriginal).field_0x48 = 0;
  pvVar1 = *(void **)&(this->LocalToOriginal).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UPCGComponent>,TSoftObjectPtr<UPCGComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LocalToOriginal);
  *(undefined4 *)&(this->OriginalToLocal).field_0x48 = 0;
  pvVar1 = *(void **)&(this->OriginalToLocal).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectKey<UPCGComponent>,TObjectPtr<UPCGComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OriginalToLocal);
  APartitionActor::~APartitionActor((APartitionActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x3d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ca92d0

void * __thiscall
FPCGCreateSurfaceFromPolygon2DElement::_scalar_deleting_destructor_
          (FPCGCreateSurfaceFromPolygon2DElement *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ca9300

void * __thiscall
FPCGFetchInputElement::_scalar_deleting_destructor_(FPCGFetchInputElement *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ca9330

void * __thiscall
FPCGGenericElement::_scalar_deleting_destructor_(FPCGGenericElement *this,uint param_1)

{
  ~FPCGGenericElement(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ca9370

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
FPCGGraphActiveTask::_scalar_deleting_destructor_(FPCGGraphActiveTask *this,uint param_1)

{
  ~FPCGGraphActiveTask(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ca93b0

void * __thiscall FPCGGraphCache::_scalar_deleting_destructor_(FPCGGraphCache *this,uint param_1)

{
  ~FPCGGraphCache(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ca93f0

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
FPCGGraphExecutor::_scalar_deleting_destructor_(FPCGGraphExecutor *this,uint param_1)

{
  ~FPCGGraphExecutor(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x6a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ca9430

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
FPCGGridLinkageContext::_scalar_deleting_destructor_(FPCGGridLinkageContext *this,uint param_1)

{
  FPCGContext::~FPCGContext((FPCGContext *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x260);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ca9470

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void * __thiscall
PCGGraphExecutor::FPCGGridLinkageElement::_scalar_deleting_destructor_
          (FPCGGridLinkageElement *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ResourceKey).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FPCGGenericElement::~FPCGGenericElement((FPCGGenericElement *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ca94c0

void * __thiscall
FPCGOffsetPolygonElement::_scalar_deleting_destructor_(FPCGOffsetPolygonElement *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ca94f0

void * __thiscall
FPCGPolygon2DOperationElement::_scalar_deleting_destructor_
          (FPCGPolygon2DOperationElement *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ca9520

void * __thiscall
FPCGPreGraphElement::_scalar_deleting_destructor_(FPCGPreGraphElement *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ca9550

void * __thiscall
UPCGCreateSurfaceFromPolygon2DSettings::_scalar_deleting_destructor_
          (UPCGCreateSurfaceFromPolygon2DSettings *this,uint param_1)

{
  *(undefined ***)this = &___7UPCGCreateSurfaceFromPolygon2DSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ca95b0

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void * __thiscall
UPCGGridLinkageSettings::_scalar_deleting_destructor_(UPCGGridLinkageSettings *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UPCGGridLinkageSettings__6B_;
  pvVar1 = *(void **)&(this->UpstreamPin).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pFVar2 = (this->ResourceKey).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ca9640

void * __thiscall
UPCGLandscapeCache::_scalar_deleting_destructor_(UPCGLandscapeCache *this,uint param_1)

{
  ForElementType<FSetElementId> FVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UPCGLandscapeCache__6B_;
  (this->CachedLayerNames).HashSize = 0;
  FVar1 = (this->CachedLayerNames).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->CachedLayerNames).Elements);
  *(undefined4 *)&(this->CachedData).field_0x48 = 0;
  pvVar2 = *(void **)&(this->CachedData).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UPCGLandscapeCache::CacheMapKey,TSharedPtr<FPCGLandscapeCacheEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedData);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ca9700

void * __thiscall
UPCGOffsetPolygon2DSettings::_scalar_deleting_destructor_
          (UPCGOffsetPolygon2DSettings *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGOffsetPolygon2DSettings__6B_;
  DestructItems<FString,int>
            (*(FString **)&(this->OffsetAttribute).field_0x28,
             *(int *)&(this->OffsetAttribute).field_0x30);
  pvVar1 = *(void **)&(this->OffsetAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x118);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149ca9790

void * __thiscall
UPCGPolygon2DOperationSettings::_scalar_deleting_destructor_
          (UPCGPolygon2DOperationSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UPCGPolygon2DOperationSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xe0);
  }
  return this;
}

// AddToActiveTaskArrayNoLock @ 149cabf30

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
PCGGraphExecutor::AddToActiveTaskArrayNoLock
          (TArray<TSharedPtr<FPCGGraphActiveTask,1>,TSizedDefaultAllocator<32>_> *param_1,
          TSharedPtr<FPCGGraphActiveTask,1> *param_2)

{
  TSharedPtr<FPCGGraphActiveTask,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  pTVar1 = (TSharedPtr<FPCGGraphActiveTask,1> *)(param_1->AllocatorInstance).Data;
  if ((pTVar1 <= param_2) && (param_2 < pTVar1 + param_1->ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = param_1->ArrayNum;
  if (iVar5 == param_1->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar5 + 1;
  pFVar6 = (param_1->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(FPCGGraphActiveTask **)pFVar6 = param_2->Object;
  pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar6 + 8) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  iVar5 = param_1->ArrayNum;
  if (param_2->Object == (FPCGGraphActiveTask *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  param_2->Object->TaskIndex = iVar5 + -1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// BuildModules @ 149cad490

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __cdecl PCGGrammar::BuildModules(FString *param_1,FPCGGrammarResult *param_2)

{
  int *piVar1;
  FScriptContainerElement *_Src;
  FName FVar2;
  ITextData *pIVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  FName *pFVar10;
  FString *pFVar11;
  FTextFormat *pFVar12;
  FText *pFVar13;
  FText *pFVar14;
  ForAnyElementType FVar15;
  ulonglong uVar16;
  FModuleDescriptor *pFVar17;
  longlong lVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  char local_res8 [8];
  undefined8 **local_res10;
  uint local_res18;
  FScriptContainerElement *local_res20;
  FModuleDescriptor *local_1f8;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FLog local_1b8;
  undefined8 *local_198;
  ulonglong local_190;
  TStringView<wchar_t> local_188;
  TStringView<wchar_t> local_178;
  undefined1 local_168 [16];
  FModuleDescriptor **local_158;
  FScriptContainerElement **local_150;
  FPCGGrammarResult *local_148;
  char *local_140;
  FLog local_138;
  FString local_120;
  FText local_110;
  FString local_100;
  FText local_f0;
  FText local_e0;
  FText local_d0;
  FText local_c0;
  FText local_b0;
  FText local_a0;
  FTextFormat local_90;
  FText local_80;
  FText local_70;
  FText local_60 [2];
  
  local_1f0.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar18 = (longlong)local_1f0.Data.ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  local_1f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_1f0.Data.ArrayNum == 0) {
    local_1f0.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_1f0.Data.ArrayNum,0,(ForAnyElementType *)&local_1f0,local_1f0.Data.ArrayNum
               ,&local_1f0.Data.ArrayMax);
    memcpy(local_1f0.Data.AllocatorInstance.Data,_Src,lVar18 * 2);
  }
  ::FString::ReplaceInline(&local_1f0,L"\r",L"",IgnoreCase);
  ::FString::ReplaceInline(&local_1f0,L"\n",L"",IgnoreCase);
  ::FString::ReplaceInline(&local_1f0,L",",L" , ",IgnoreCase);
  ::FString::ReplaceInline(&local_1f0,L":",L" : ",IgnoreCase);
  ::FString::ReplaceInline(&local_1f0,L"[",L" [ ",IgnoreCase);
  ::FString::ReplaceInline(&local_1f0,L"]",L" ] ",IgnoreCase);
  ::FString::ReplaceInline(&local_1f0,L"<",L" < ",IgnoreCase);
  ::FString::ReplaceInline(&local_1f0,L">",L" > ",IgnoreCase);
  ::FString::ReplaceInline(&local_1f0,L"{",L" { ",IgnoreCase);
  ::FString::ReplaceInline(&local_1f0,L"}",L" } ",IgnoreCase);
  ::FString::ReplaceInline(&local_1f0,L"*",L" * ",IgnoreCase);
  ::FString::ReplaceInline(&local_1f0,L"+",L" + ",IgnoreCase);
  local_178.Size = 1;
  local_198 = (undefined8 *)0x0;
  local_190 = 0;
  local_178.DataPtr = L" ";
  local_res10 = &local_198;
  local_188.Size = local_1f0.Data.ArrayNum + -1;
  if (local_1f0.Data.ArrayNum == 0) {
    local_188.Size = 0;
  }
  local_168._8_8_ = &local_res10;
  local_168._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UE::String::ParseTokens<TArray<TStringView<wchar_t>,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
       ::Call;
  local_188.DataPtr = (wchar_t *)local_1f0.Data.AllocatorInstance.Data;
  UE::String::ParseTokens
            (&local_188,&local_178,(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)local_168,
             SkipEmpty);
  local_1f8 = &param_2->Root;
  bVar5 = false;
  local_158 = &local_1f8;
  local_res20 = (FScriptContainerElement *)0x0;
  local_150 = &local_res20;
  local_140 = local_res8;
  uVar9 = (ulonglong)(int)(uint)local_190;
  local_res8[0] = '\x01';
  puVar20 = local_198 + uVar9 * 2;
  local_res18 = (uint)local_190;
  uVar16 = uVar9;
  puVar19 = local_198;
  local_148 = param_2;
  while( true ) {
    if ((int)uVar9 != (int)uVar16) {
      `TCheckedPointerIterator<TStringView<wchar_t>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res10);
    }
    if (puVar19 == puVar20) break;
    iVar8 = (int)puVar19[1];
    if (iVar8 == 0) {
LAB_149cad7eb:
      iVar8 = (int)puVar19[1];
      if (iVar8 != 0) {
        iVar7 = FGenericPlatformStricmp::Strnicmp((wchar_t *)*puVar19,L"<",(longlong)iVar8);
        pFVar17 = local_1f8;
        if ((iVar7 == 0) && (L"<"[iVar8] == L'\0')) {
          piVar1 = &(local_1f8->Submodules).ArrayMax;
          iVar8 = (local_1f8->Submodules).ArrayNum;
          if (iVar8 == *piVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x830,(ForAnyElementType *)local_1f8,piVar1);
            (pFVar17->Submodules).ArrayNum = iVar8;
          }
          (pFVar17->Submodules).ArrayNum = iVar8 + 1;
          pFVar17 = (FModuleDescriptor *)
                    ((pFVar17->Submodules).AllocatorInstance.Data + (longlong)iVar8 * 0x30);
          (pFVar17->Submodules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar17->Submodules).ArrayNum = 0;
          (pFVar17->Submodules).ArrayMax = 0;
          pFVar17->Parent = (FModuleDescriptor *)0x0;
          (pFVar17->Symbol).ComparisonIndex = 0;
          (pFVar17->Symbol).Number = 0;
          pFVar17->Type = Priority;
          goto LAB_149cad900;
        }
      }
      iVar8 = (int)puVar19[1];
      if (iVar8 != 0) {
        iVar7 = FGenericPlatformStricmp::Strnicmp((wchar_t *)*puVar19,L"{",(longlong)iVar8);
        pFVar17 = local_1f8;
        if ((iVar7 == 0) && (L"{"[iVar8] == L'\0')) {
          piVar1 = &(local_1f8->Submodules).ArrayMax;
          iVar8 = (local_1f8->Submodules).ArrayNum;
          if (iVar8 == *piVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x830,(ForAnyElementType *)local_1f8,piVar1);
            (pFVar17->Submodules).ArrayNum = iVar8;
          }
          (pFVar17->Submodules).ArrayNum = iVar8 + 1;
          pFVar17 = (FModuleDescriptor *)
                    ((pFVar17->Submodules).AllocatorInstance.Data + (longlong)iVar8 * 0x30);
          (pFVar17->Submodules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar17->Submodules).ArrayNum = 0;
          (pFVar17->Submodules).ArrayMax = 0;
          pFVar17->Parent = (FModuleDescriptor *)0x0;
          (pFVar17->Symbol).ComparisonIndex = 0;
          (pFVar17->Symbol).Number = 0;
          pFVar17->Type = Stochastic;
          goto LAB_149cad900;
        }
      }
      iVar8 = (int)puVar19[1];
      if (iVar8 != 0) {
        iVar7 = FGenericPlatformStricmp::Strnicmp((wchar_t *)*puVar19,L"]",(longlong)iVar8);
        if ((iVar7 == 0) && (L"]"[iVar8] == L'\0')) {
          `PCGGrammar::BuildModules'::__l2::<lambda_2>::operator()(&local_158,Sequence);
          goto LAB_149cadf44;
        }
      }
      iVar8 = (int)puVar19[1];
      if (iVar8 != 0) {
        iVar7 = FGenericPlatformStricmp::Strnicmp((wchar_t *)*puVar19,L">",(longlong)iVar8);
        if ((iVar7 == 0) && (L">"[iVar8] == L'\0')) {
          `PCGGrammar::BuildModules'::__l2::<lambda_2>::operator()(&local_158,Priority);
          goto LAB_149cadf44;
        }
      }
      iVar8 = (int)puVar19[1];
      if (iVar8 != 0) {
        iVar7 = FGenericPlatformStricmp::Strnicmp((wchar_t *)*puVar19,L"}",(longlong)iVar8);
        if ((iVar7 == 0) && (L"}"[iVar8] == L'\0')) {
          `PCGGrammar::BuildModules'::__l2::<lambda_2>::operator()(&local_158,Stochastic);
          goto LAB_149cadf44;
        }
      }
      iVar8 = (int)puVar19[1];
      if (iVar8 != 0) {
        iVar7 = FGenericPlatformStricmp::Strnicmp((wchar_t *)*puVar19,L",",(longlong)iVar8);
        if ((iVar7 == 0) && (L","[iVar8] == L'\0')) {
          local_res20 = (FScriptContainerElement *)0x0;
          goto LAB_149cadf44;
        }
      }
      iVar8 = (int)puVar19[1];
      if (iVar8 != 0) {
        iVar7 = FGenericPlatformStricmp::Strnicmp((wchar_t *)*puVar19,L":",(longlong)iVar8);
        if ((iVar7 == 0) && (L":"[iVar8] == L'\0')) {
          if ((local_res20 == (FScriptContainerElement *)0x0) || (bVar5)) {
            pFVar13 = FText::AsLocalizable_Advanced_LocText
                                (&local_c0,L"PCGGrammar",L"InvalidWeightDelimiter",
                                 L"Misplaced or mismatched weight (\':\') delimiter found.");
            pFVar14 = FText::FText(&local_b0,pFVar13);
            FText::FText(&local_1b8.Message,pFVar14);
            local_1b8.Verbosity = Warning;
            pIVar3 = (pFVar14->TextData).Reference;
            if (pIVar3 != (ITextData *)0x0) {
              (**(code **)((longlong)*pIVar3 + 0x10))();
            }
            TArray<FPCGGrammarResult::FLog,TSizedDefaultAllocator<32>_>::
            AddUniqueImpl<FPCGGrammarResult::FLog>(&param_2->Logs,&local_1b8);
            if (local_1b8.Message.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_1b8.Message.TextData.Reference + 0x10))();
            }
            pIVar3 = (pFVar13->TextData).Reference;
            if (pIVar3 != (ITextData *)0x0) {
              (**(code **)((longlong)*pIVar3 + 0x10))();
            }
          }
          if (local_res20 != (FScriptContainerElement *)0x0) {
            bVar5 = true;
          }
          goto LAB_149cadf44;
        }
      }
      pFVar17 = local_1f8;
      if (local_res20 == (FScriptContainerElement *)0x0) {
        pFVar10 = ::FName::FName((FName *)&local_178,(int)puVar19[1],(wchar_t *)*puVar19,FNAME_Add);
        piVar1 = &(pFVar17->Submodules).ArrayMax;
        FVar2 = *pFVar10;
        iVar8 = (pFVar17->Submodules).ArrayNum;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x830,(ForAnyElementType *)pFVar17,piVar1);
        }
        (pFVar17->Submodules).ArrayNum = iVar8 + 1;
        local_res20 = (pFVar17->Submodules).AllocatorInstance.Data + (longlong)iVar8 * 0x30;
        *(undefined8 *)local_res20 = 0;
        *(undefined8 *)(local_res20 + 8) = 0;
        *(FName *)(local_res20 + 0x18) = FVar2;
        *(undefined8 *)(local_res20 + 0x10) = 0;
        *(undefined4 *)(local_res20 + 0x20) = 1;
        local_res20[0x28] = (FScriptContainerElement)0x1;
        *(undefined4 *)(local_res20 + 0x24) = 1;
      }
      else {
        if (bVar5) {
          local_1e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1e0.Data.ArrayNum = 0;
          local_1e0.Data.ArrayMax = 0;
          pFVar11 = ::FString::ConstructFromPtrSize(&local_120,(wchar_t *)*puVar19,(int)puVar19[1]);
          if (&local_1e0 != pFVar11) {
            if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
            }
            local_1e0.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
            (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1e0.Data.ArrayNum = (pFVar11->Data).ArrayNum;
            local_1e0.Data.ArrayMax = (pFVar11->Data).ArrayMax;
            (pFVar11->Data).ArrayNum = 0;
            (pFVar11->Data).ArrayMax = 0;
          }
          if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_120.Data.AllocatorInstance.Data);
          }
          bVar5 = ::FString::IsNumeric(&local_1e0);
          if (bVar5) {
            FVar15.Data = (FScriptContainerElement *)L"";
            if (local_1e0.Data.ArrayNum != 0) {
              FVar15.Data = local_1e0.Data.AllocatorInstance.Data;
            }
            iVar8 = _wtoi((wchar_t *)FVar15.Data);
            bVar5 = false;
            local_res20[0x28] = SUB41(iVar8,0);
            FVar15.Data = local_1e0.Data.AllocatorInstance.Data;
          }
          else {
            local_1b8.Message.TextData.Reference = (ITextData *)*puVar19;
            local_1b8.Message._8_8_ = puVar19[1];
            pFVar13 = FText::FromStringView(&local_a0,(TStringView<wchar_t> *)&local_1b8);
            pFVar14 = FText::AsLocalizable_Advanced_LocText
                                (&local_110,L"PCGGrammar",L"InvalidWeightValue",
                                 L"Invalid weight value: {0}, will default to 1.");
            pFVar12 = FTextFormat::FTextFormat(&local_90,pFVar14,Default);
            FText::Format<FText>((FText *)local_168,pFVar12,pFVar13);
            if (local_110.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_110.TextData.Reference + 0x10))();
            }
            pFVar13 = FText::FText(&local_80,(FText *)local_168);
            pFVar14 = FText::FText(&local_70,pFVar13);
            FText::FText(&local_1b8.Message,pFVar14);
            local_1b8.Verbosity = Warning;
            pIVar3 = (pFVar14->TextData).Reference;
            if (pIVar3 != (ITextData *)0x0) {
              (**(code **)((longlong)*pIVar3 + 0x10))();
            }
            TArray<FPCGGrammarResult::FLog,TSizedDefaultAllocator<32>_>::
            AddUniqueImpl<FPCGGrammarResult::FLog>(&param_2->Logs,&local_1b8);
            if (local_1b8.Message.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_1b8.Message.TextData.Reference + 0x10))();
            }
            pIVar3 = (pFVar13->TextData).Reference;
            if (pIVar3 != (ITextData *)0x0) {
              (**(code **)((longlong)*pIVar3 + 0x10))();
            }
            if ((ITextData *)local_168._0_8_ != (ITextData *)0x0) {
              (**(code **)((longlong)*(ITextData *)local_168._0_8_ + 0x10))();
            }
            bVar5 = false;
            FVar15.Data = local_1e0.Data.AllocatorInstance.Data;
          }
        }
        else {
          local_1d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1d0.Data.ArrayNum = 0;
          local_1d0.Data.ArrayMax = 0;
          pFVar11 = ::FString::ConstructFromPtrSize(&local_100,(wchar_t *)*puVar19,(int)puVar19[1]);
          if (&local_1d0 != pFVar11) {
            if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
            }
            local_1d0.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
            (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1d0.Data.ArrayNum = (pFVar11->Data).ArrayNum;
            local_1d0.Data.ArrayMax = (pFVar11->Data).ArrayMax;
            (pFVar11->Data).ArrayNum = 0;
            (pFVar11->Data).ArrayMax = 0;
          }
          if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_100.Data.AllocatorInstance.Data);
          }
          iVar8 = (int)puVar19[1];
          if (iVar8 != 0) {
            iVar7 = FGenericPlatformStricmp::Strnicmp((wchar_t *)*puVar19,L"*",(longlong)iVar8);
            if ((iVar7 == 0) && (L"*"[iVar8] == L'\0')) {
              *(undefined4 *)(local_res20 + 0x20) = 0xffffffff;
              FVar15.Data = local_1d0.Data.AllocatorInstance.Data;
              goto LAB_149cadf3a;
            }
          }
          iVar8 = (int)puVar19[1];
          if (iVar8 != 0) {
            iVar7 = FGenericPlatformStricmp::Strnicmp((wchar_t *)*puVar19,L"+",(longlong)iVar8);
            if ((iVar7 == 0) && (L"+"[iVar8] == L'\0')) {
              *(undefined4 *)(local_res20 + 0x20) = 0xfffffffe;
              FVar15.Data = local_1d0.Data.AllocatorInstance.Data;
              goto LAB_149cadf3a;
            }
          }
          bVar6 = ::FString::IsNumeric(&local_1d0);
          if (bVar6) {
            FVar15.Data = (FScriptContainerElement *)L"";
            if (local_1d0.Data.ArrayNum != 0) {
              FVar15.Data = local_1d0.Data.AllocatorInstance.Data;
            }
            iVar8 = _wtoi((wchar_t *)FVar15.Data);
            *(int *)(local_res20 + 0x20) = iVar8;
            FVar15.Data = local_1d0.Data.AllocatorInstance.Data;
          }
          else {
            local_1b8.Message.TextData.Reference = (ITextData *)*puVar19;
            local_1b8.Message._8_8_ = puVar19[1];
            pFVar13 = FText::FromStringView(local_60,(TStringView<wchar_t> *)&local_1b8);
            pFVar14 = FText::AsLocalizable_Advanced_LocText
                                (&local_f0,L"PCGGrammar",L"InvalidRepetitionValue",
                                 L"Invalid repetition value: {0}, will default to 1.");
            pFVar12 = FTextFormat::FTextFormat((FTextFormat *)&local_138,pFVar14,Default);
            FText::Format<FText>((FText *)&local_188,pFVar12,pFVar13);
            if (local_f0.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_f0.TextData.Reference + 0x10))();
            }
            pFVar13 = FText::FText(&local_e0,(FText *)&local_188);
            pFVar14 = FText::FText(&local_d0,pFVar13);
            FText::FText(&local_1b8.Message,pFVar14);
            local_1b8.Verbosity = Warning;
            pIVar3 = (pFVar14->TextData).Reference;
            if (pIVar3 != (ITextData *)0x0) {
              (**(code **)((longlong)*pIVar3 + 0x10))();
            }
            TArray<FPCGGrammarResult::FLog,TSizedDefaultAllocator<32>_>::
            AddUniqueImpl<FPCGGrammarResult::FLog>(&param_2->Logs,&local_1b8);
            if (local_1b8.Message.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_1b8.Message.TextData.Reference + 0x10))();
            }
            pIVar3 = (pFVar13->TextData).Reference;
            if (pIVar3 != (ITextData *)0x0) {
              (**(code **)((longlong)*pIVar3 + 0x10))();
            }
            FVar15.Data = local_1d0.Data.AllocatorInstance.Data;
            if ((FScriptContainerElement *)local_188.DataPtr != (FScriptContainerElement *)0x0) {
              (**(code **)(*(longlong *)local_188.DataPtr + 0x10))();
              FVar15.Data = local_1d0.Data.AllocatorInstance.Data;
            }
          }
        }
LAB_149cadf3a:
        if (FVar15.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar15.Data);
        }
      }
    }
    else {
      iVar7 = FGenericPlatformStricmp::Strnicmp((wchar_t *)*puVar19,L"[",(longlong)iVar8);
      pFVar17 = local_1f8;
      if ((iVar7 != 0) || (L"["[iVar8] != L'\0')) goto LAB_149cad7eb;
      piVar1 = &(local_1f8->Submodules).ArrayMax;
      iVar8 = (local_1f8->Submodules).ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,(ForAnyElementType *)local_1f8,piVar1);
        (pFVar17->Submodules).ArrayNum = iVar8;
      }
      (pFVar17->Submodules).ArrayNum = iVar8 + 1;
      pFVar17 = (FModuleDescriptor *)
                ((pFVar17->Submodules).AllocatorInstance.Data + (longlong)iVar8 * 0x30);
      (pFVar17->Submodules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar17->Submodules).ArrayNum = 0;
      (pFVar17->Submodules).ArrayMax = 0;
      pFVar17->Parent = (FModuleDescriptor *)0x0;
      (pFVar17->Symbol).ComparisonIndex = 0;
      (pFVar17->Symbol).Number = 0;
      pFVar17->Type = Sequence;
LAB_149cad900:
      pFVar17->Weight = '\x01';
      pFVar17->Repetitions = 1;
      pFVar17->Parent = local_1f8;
      local_res20 = (FScriptContainerElement *)0x0;
      local_1f8 = pFVar17;
    }
LAB_149cadf44:
    if (local_res8[0] == '\0') break;
    uVar9 = local_190 & 0xffffffff;
    uVar16 = (ulonglong)local_res18;
    puVar19 = puVar19 + 2;
  }
  if (local_1f8 != &param_2->Root) {
    pFVar13 = FText::AsLocalizable_Advanced_LocText
                        (&local_d0,L"PCGGrammar",L"UnclosedSubmodule",L"Missing module end.");
    pFVar14 = FText::FText(&local_e0,pFVar13);
    FText::FText(&local_138.Message,pFVar14);
    local_138.Verbosity = Error;
    pIVar3 = (pFVar14->TextData).Reference;
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))();
    }
    TArray<FPCGGrammarResult::FLog,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<FPCGGrammarResult::FLog>(&param_2->Logs,&local_138);
    if (local_138.Message.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.Message.TextData.Reference + 0x10))();
    }
    param_2->bSuccess = false;
    pIVar3 = (pFVar13->TextData).Reference;
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))();
    }
    local_res8[0] = '\0';
  }
  cVar4 = local_res8[0];
  if (local_198 != (undefined8 *)0x0) {
    FMemory::Free(local_198);
  }
  if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
  }
  return (bool)cVar4;
}

// CalcSafeIndices @ 149cae800

FSafeIndices * __cdecl
PCGLandscapeCache::CalcSafeIndices
          (FSafeIndices *__return_storage_ptr__,TVector2<double> *param_1,int param_2)

{
  double dVar1;
  double dVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  FSafeIndices *pFVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  double dVar11;
  
  if (param_2 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stride != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Grid\\PCGLandscapeCache.cpp"
                       ,0x29,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FSafeIndices *)(*pcVar3)();
      return pFVar7;
    }
  }
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  iVar10 = param_2 + -1;
  dVar11 = (double)iVar10;
  __return_storage_ptr__->XFraction = 0.0;
  __return_storage_ptr__->YFraction = 0.0;
  if (dVar11 <= dVar1) {
    dVar1 = dVar11;
  }
  dVar2 = (param_1->field0_0x0)._s_0.X;
  if (dVar2 <= dVar11) {
    dVar11 = dVar2;
  }
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  if (dVar11 <= 0.0) {
    dVar11 = 0.0;
  }
  iVar4 = (int)((longlong)ROUND((dVar11 + dVar11) - __real_3fe0000000000000) >> 1);
  iVar5 = iVar10;
  if (iVar4 + 1 < iVar10) {
    iVar5 = iVar4 + 1;
  }
  iVar9 = (int)((longlong)ROUND((dVar1 + dVar1) - __real_3fe0000000000000) >> 1);
  iVar8 = iVar9 + 1;
  iVar9 = iVar9 * param_2;
  if (iVar8 < iVar10) {
    iVar10 = iVar8;
  }
  __return_storage_ptr__->X0Y0 = iVar4 + iVar9;
  __return_storage_ptr__->X1Y0 = iVar5 + iVar9;
  __return_storage_ptr__->X0Y1 = iVar10 * param_2 + iVar4;
  __return_storage_ptr__->X1Y1 = iVar10 * param_2 + iVar5;
  dVar2 = (double)trunc(SUB84(dVar11,0));
  __return_storage_ptr__->XFraction = (float)(dVar11 - dVar2);
  dVar11 = (double)trunc(SUB84(dVar1,0));
  __return_storage_ptr__->YFraction = (float)(dVar1 - dVar11);
  return __return_storage_ptr__;
}

// ClearAsyncFlags @ 149cb4a40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
PCGGraphExecutor::ClearAsyncFlags
          (TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
           *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *pTVar6;
  bool bVar7;
  FUObjectItem *pFVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *local_res20
  ;
  code *local_c8;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> **local_c0;
  code *local_b8;
  code **local_b0;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iStack_a0 = 0;
  local_88 = 0;
  uStack_9c = 1;
  iStack_8c = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar13 = *puVar15;
    while (uVar13 == 0) {
      lVar9 = (longlong)iStack_a0;
      local_88 = local_88 + 0x20;
      iStack_a0 = iStack_a0 + 1;
      iStack_8c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a0) goto LAB_149cb4add;
      uVar13 = puVar15[lVar9 + 1];
    }
    uStack_9c = -uVar13 & uVar13;
    uVar2 = (ulonglong)uStack_9c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iStack_8c = local_res10 + -1 + local_88;
    if (iVar3 < iStack_8c) {
      iStack_8c = iVar3;
    }
  }
LAB_149cb4add:
  uVar13 = *(uint *)&(param_1->Elements).field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  iStack_80 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uStack_90 = 0xffffffff;
  TStack_70._padding_ = CONCAT44(uStack_9c,iStack_a0);
  TStack_70.CurrentBitIndex = iStack_8c;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar13 >> 5;
  TStack_70._28_4_ = iStack_8c;
  TStack_70.BaseBitIndex = local_88;
  uStack_50 = CONCAT44(uStack_7c,iStack_80);
  local_a8 = param_1;
  local_98 = puVar1;
  iStack_84 = iStack_8c;
  local_78 = param_1;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar13 != uVar4) {
    puVar14 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar10 * 4);
    while (uVar13 == 0) {
      lVar9 = (longlong)iVar10;
      uVar12 = uVar12 + 0x20;
      iVar10 = iVar10 + 1;
      uVar13 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_149cb4c00;
      uVar13 = *(uint *)(puVar14 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res18 = (int)lVar9;
    uVar13 = local_res18 + -1 + uVar12;
    if ((int)uVar4 < (int)uVar13) {
      uVar13 = uVar4;
    }
  }
LAB_149cb4c00:
  while( true ) {
    pTVar6 = local_78;
    if (*(int *)&(local_78->Elements).field_0x8 - *(int *)&(local_78->Elements).field_0x34 !=
        (int)uStack_50) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_70.CurrentBitIndex == uVar13) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == param_1))
    break;
    plVar11 = (longlong *)
              (*(longlong *)&pTVar6->Elements + (longlong)TStack_70.CurrentBitIndex * 0x10);
    pFVar8 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(*plVar11 + 0xc));
    if (((uint)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x3a) & 1) == 0) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<834425404453290105>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                         ,0x79,"AsyncObject->HasAnyInternalFlags(EInternalObjectFlags::Async)");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      pFVar8 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(*plVar11 + 0xc));
      FUObjectItem::ClearRootFlags(pFVar8,Async);
      local_c0 = &local_res20;
      local_b0 = &local_c8;
      local_c8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`PCGGraphExecutor::ClearAsyncFlags'::__l9::<lambda_1>,void,UObject_*>
                 ::Call;
      local_b8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`ForEachObjectWithOuter'::__l2::<lambda_1>,bool,UObject_*>::Call
      ;
      local_res20 = param_1;
      ForEachObjectWithOuterBreakable
                ((UObjectBase *)*plVar11,(TFunctionRef<bool___cdecl(UObject_*)> *)&local_b8,true,
                 RF_NoFlags,Borrowed);
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  return;
}

// DefaultPolygonInputPinProperties @ 149cbcf40

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __cdecl
PCGPolygon2DUtils::DefaultPolygonInputPinProperties
          (TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FText *pFVar3;
  FPCGDataTypeIdentifier *pFVar4;
  FPCGPinProperties *pFVar5;
  FPCGDataTypeIdentifier local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar2 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x830,&__return_storage_ptr__->AllocatorInstance,
                     &__return_storage_ptr__->ArrayMax);
  __return_storage_ptr__->ArrayNum = iVar2 + 1;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar3 = FText::GetEmpty();
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Polygon2D);
  pFVar5 = FPCGPinProperties::FPCGPinProperties
                     ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                      &PCGPinConstants::DefaultInputLabel,pFVar4,true,true,pFVar3);
  pFVar5->PinStatus = Required;
  return __return_storage_ptr__;
}

// DefaultPolygonOutputPinProperties @ 149cbcfe0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __cdecl
PCGPolygon2DUtils::DefaultPolygonOutputPinProperties
          (TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FText *pFVar3;
  FPCGDataTypeIdentifier *pFVar4;
  FPCGDataTypeIdentifier local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar2 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x830,&__return_storage_ptr__->AllocatorInstance,
                     &__return_storage_ptr__->ArrayMax);
  __return_storage_ptr__->ArrayNum = iVar2 + 1;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar3 = FText::GetEmpty();
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Polygon2D);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGPinConstants::DefaultOutputLabel,pFVar4,true,true,pFVar3);
  return __return_storage_ptr__;
}

// EmptyLinkFunctionForGeneratedCodePCGGraphExecutor @ 149cbe920

void __cdecl EmptyLinkFunctionForGeneratedCodePCGGraphExecutor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGGraphTask @ 149cbe930

void __cdecl EmptyLinkFunctionForGeneratedCodePCGGraphTask(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGGridDescriptor @ 149cbe940

void __cdecl EmptyLinkFunctionForGeneratedCodePCGGridDescriptor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGLandscapeCache @ 149cbe950

void __cdecl EmptyLinkFunctionForGeneratedCodePCGLandscapeCache(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGOffsetPolygon2D @ 149cbe960

void __cdecl EmptyLinkFunctionForGeneratedCodePCGOffsetPolygon2D(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGPartitionActor @ 149cbe970

void __cdecl EmptyLinkFunctionForGeneratedCodePCGPartitionActor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGPinDependencyExpression @ 149cbe980

void __cdecl EmptyLinkFunctionForGeneratedCodePCGPinDependencyExpression(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGPolygon2DOperation @ 149cbe990

void __cdecl EmptyLinkFunctionForGeneratedCodePCGPolygon2DOperation(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGStackContext @ 149cbe9a0

void __cdecl EmptyLinkFunctionForGeneratedCodePCGStackContext(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePCGSurfaceFromPolygon2D @ 149cbe9b0

void __cdecl EmptyLinkFunctionForGeneratedCodePCGSurfaceFromPolygon2D(void)

{
  return;
}

// ExecuteGridLinkage @ 149cbf590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */
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
PCGGraphExecutor::ExecuteGridLinkage
          (EPCGHiGenGrid param_1,EPCGHiGenGrid param_2,EPCGHiGenGrid param_3,FString *param_4,
          FName param_5,FPCGGridLinkageContext *param_6)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *pTVar10;
  IPCGGraphExecutionSource *pIVar11;
  longlong *plVar12;
  FPCGDataCollection *pFVar13;
  char *pcVar14;
  atomic<unsigned_char> *paVar15;
  longlong lVar16;
  int iVar17;
  undefined1 auStackY_1b8 [32];
  undefined1 local_188 [4];
  EPCGHiGenGrid local_184;
  EPCGHiGenGrid local_180;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_178;
  undefined2 local_168;
  void *local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined1 local_148 [8];
  longlong local_140;
  undefined8 local_138;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_130;
  uint local_120;
  bool local_11c;
  TIntVector3<int> local_108;
  TVector<double>_u_0 local_f8;
  double local_d8;
  double dStack_d0;
  double local_c8;
  undefined1 local_b8 [96];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_184 = param_1;
  local_180 = param_3;
  if ((param_6 == (FPCGGridLinkageContext *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                         ,0xc07,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3080,"PCGGraphExecutor::ExecuteGridLinkage",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
               ,0xc08);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3080);
  }
  if (((param_6->_padding_ == 0) ||
      (bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_6->_padding_), !bVar4)) ||
     (param_6->_padding_ == 0)) goto LAB_149cbf720;
  bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_6->_padding_);
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                         ,0x8d,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  plVar8 = (longlong *)(**(code **)(*(longlong *)param_6->_padding_ + 0x18))();
  lVar9 = (**(code **)(*plVar8 + 0x60))(plVar8);
  if (*(char *)(lVar9 + 0x60) == '\0') {
LAB_149cbf713:
    FPCGDataCollection::operator=
              ((FPCGDataCollection *)&param_6->_padding_,(FPCGDataCollection *)&param_6->_padding_);
  }
  else {
    bVar4 = PCGHiGenGrid::IsValidGrid(param_2);
    if ((!bVar4) && (param_2 != Unbounded)) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<834425404453293077>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                         ,0xc15,
                         "PCGHiGenGrid::IsValidGrid(InFromGrid) || InFromGrid == EPCGHiGenGrid::Unbounded"
                        );
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      goto LAB_149cbf713;
    }
    bVar4 = PCGHiGenGrid::IsValidGrid(param_2);
    if (bVar4) {
      uVar6 = PCGHiGenGrid::GridToGridSize(param_2);
    }
    else {
      uVar6 = PCGHiGenGrid::UnboundedGridSize();
    }
    bVar4 = PCGHiGenGrid::IsValidGrid(param_3);
    if (bVar4) {
      uVar7 = PCGHiGenGrid::GridToGridSize(param_3);
    }
    else {
      uVar7 = PCGHiGenGrid::UnboundedGridSize();
    }
    if (uVar7 <= uVar6) {
      if (((local_184 & param_2) == Uninitialized) || (uVar6 == uVar7)) {
        if ((local_180 != local_184) || (uVar6 == uVar7)) goto LAB_149cbf713;
        PCGGraphExecutionLogging::LogGridLinkageTaskExecuteRetrieve
                  ((FPCGContext *)param_6,local_184,uVar6,uVar7,param_4);
        bVar4 = false;
        uVar7 = PCGHiGenGrid::UnboundedGridSize();
        if (uVar6 != uVar7) {
          plVar12 = (longlong *)(**(code **)(*plVar8 + 0xc0))(plVar8);
          if (plVar12 != (longlong *)0x0) {
            plVar12 = (longlong *)(**(code **)(*plVar12 + 0x10))(plVar12);
            (**(code **)(*plVar12 + 0xf0))(plVar12,&local_120,uVar6);
            lVar9 = (**(code **)(*plVar8 + 0x30))(plVar8,local_b8);
            local_f8._s_0.X = *(double *)(lVar9 + 0x20);
            local_f8._s_0.Y = *(double *)(lVar9 + 0x28);
            local_f8._s_0.Z = *(double *)(lVar9 + 0x30);
            local_d8 = local_f8._s_0.X;
            dStack_d0 = local_f8._s_0.Y;
            local_c8 = local_f8._s_0.Z;
            UPCGActorHelpers::GetCellCoord
                      (&local_108,(TVector<double> *)&local_f8._s_0,local_120,local_11c);
            pIVar11 = (IPCGGraphExecutionSource *)
                      (**(code **)(*plVar8 + 200))(plVar8,&local_120,&local_108);
            goto LAB_149cbf9cd;
          }
          pcVar14 = "OriginalSource";
          iVar17 = 0xc5a;
          paVar15 = &bGEnsureHasExecuted<834425404453293146>;
LAB_149cbf936:
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (paVar15,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                             ,iVar17,pcVar14);
          if (bVar4) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          bVar4 = false;
          goto LAB_149cbf723;
        }
        pIVar11 = (IPCGGraphExecutionSource *)(**(code **)(*plVar8 + 0xc0))();
        bVar4 = true;
LAB_149cbf9cd:
        if (pIVar11 == (IPCGGraphExecutionSource *)0x0) {
          PCGGraphExecutionLogging::LogGridLinkageTaskExecuteRetrieveNoLocalSource
                    ((FPCGContext *)param_6,param_4);
        }
        else {
          plVar8 = (longlong *)(**(code **)((longlong)*pIVar11 + 0x18))(pIVar11);
          pFVar13 = (FPCGDataCollection *)(**(code **)(*plVar8 + 0xa0))(plVar8,param_4);
          if (pFVar13 == (FPCGDataCollection *)0x0) {
            if (!bVar4) {
              plVar8 = (longlong *)(**(code **)((longlong)*pIVar11 + 0x18))(pIVar11);
              cVar5 = (**(code **)(*plVar8 + 0x80))(plVar8);
              if (cVar5 != '\0') {
                PCGGraphExecutionLogging::LogGridLinkageTaskExecuteRetrieveWaitOnScheduledGraph
                          ((FPCGContext *)param_6,pIVar11,param_4);
                *(undefined1 *)&param_6->_padding_ = 1;
                plVar8 = (longlong *)(**(code **)((longlong)*pIVar11 + 0x18))(pIVar11);
                local_140 = (**(code **)(*plVar8 + 0x88))(plVar8);
                if (local_140 != -1) {
                  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
                  Emplace<unsigned___int64_const_&>
                            ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                              *)&param_6->_padding_,(ulong64 *)local_148,(bool *)&local_140);
                  bVar4 = false;
                  goto LAB_149cbf723;
                }
                pcVar14 = "GenerationTask != InvalidPCGTaskId";
                iVar17 = 0xc90;
                paVar15 = &bGEnsureHasExecuted<834425404453293200>;
                goto LAB_149cbf936;
              }
            }
            if ((param_6->bScheduledGraph == false) && (!bVar4)) {
              PCGGraphExecutionLogging::LogGridLinkageTaskExecuteRetrieveScheduleGraph
                        ((FPCGContext *)param_6,pIVar11,param_4);
              plVar8 = (longlong *)(**(code **)((longlong)*pIVar11 + 0x18))(pIVar11);
              local_138 = (**(code **)(*plVar8 + 0x90))(plVar8,0);
              TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
              Emplace<unsigned___int64_const_&>
                        ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                          *)&param_6->_padding_,(ulong64 *)(local_148 + 4),(bool *)&local_138);
              bVar4 = false;
              param_6->bScheduledGraph = true;
              *(undefined1 *)&param_6->_padding_ = 1;
              goto LAB_149cbf723;
            }
            PCGGraphExecutionLogging::LogGridLinkageTaskExecuteRetrieveNoData
                      ((FPCGContext *)param_6,pIVar11,param_4);
          }
          else {
            PCGGraphExecutionLogging::LogGridLinkageTaskExecuteRetrieveSuccess
                      ((FPCGContext *)param_6,pIVar11,param_4,(pFVar13->TaggedData).ArrayNum);
            FPCGDataCollection::operator=((FPCGDataCollection *)&param_6->_padding_,pFVar13);
            iVar17 = (int)param_6->_padding_;
            lVar9 = param_6->_padding_;
            lVar16 = (longlong)iVar17 * 0x78 + lVar9;
            while( true ) {
              if ((int)param_6->_padding_ != iVar17) {
                `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::
                operator()(local_188);
              }
              if (lVar9 == lVar16) break;
              *(FName *)(lVar9 + 0x60) = param_5;
              lVar9 = lVar9 + 0x78;
            }
          }
        }
      }
      else {
        local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_178.ArrayNum = 0;
        local_178.ArrayMax = 0;
        local_168 = 0;
        local_160 = (void *)0x0;
        local_158 = 0;
        local_150 = 0;
        pTVar10 = FPCGDataCollection::GetInputsByPin
                            ((FPCGDataCollection *)&param_6->_padding_,&local_130,&param_5);
        if (&local_178 != pTVar10) {
          DestructItems<FPCGTaggedData,int>
                    ((FPCGTaggedData *)local_178.AllocatorInstance.Data,local_178.ArrayNum);
          if ((FPCGTaggedData *)local_178.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
            FMemory::Free(local_178.AllocatorInstance.Data);
          }
          local_178.AllocatorInstance.Data = (pTVar10->AllocatorInstance).Data;
          (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          local_178.ArrayNum = pTVar10->ArrayNum;
          local_178.ArrayMax = pTVar10->ArrayMax;
          pTVar10->ArrayNum = 0;
          pTVar10->ArrayMax = 0;
        }
        DestructItems<FPCGTaggedData,int>
                  ((FPCGTaggedData *)local_130.AllocatorInstance.Data,local_130.ArrayNum);
        if ((FPCGTaggedData *)local_130.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
          FMemory::Free(local_130.AllocatorInstance.Data);
        }
        PCGGraphExecutionLogging::LogGridLinkageTaskExecuteStore
                  ((FPCGContext *)param_6,local_184,uVar6,uVar7,param_4,local_178.ArrayNum);
        (**(code **)(*plVar8 + 0x98))(plVar8,param_4,&local_178);
        if (local_160 != (void *)0x0) {
          FMemory::Free(local_160);
        }
        DestructItems<FPCGTaggedData,int>
                  ((FPCGTaggedData *)local_178.AllocatorInstance.Data,local_178.ArrayNum);
        if ((FPCGTaggedData *)local_178.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
          FMemory::Free(local_178.AllocatorInstance.Data);
        }
      }
    }
  }
LAB_149cbf720:
  bVar4 = true;
LAB_149cbf723:
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar4;
}

// GetCoordinates @ 149cc74d0

TIntPoint<int> __cdecl PCGLandscapeCache::GetCoordinates(ULandscapeComponent *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  TIntPoint<int> TVar4;
  longlong in_RDX;
  
  piVar1 = (int *)(in_RDX + 0x550);
  if (((in_RDX == 0) || (*piVar1 == 0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("LandscapeComponent && LandscapeComponent->ComponentSizeQuads != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Grid\\PCGLandscapeCache.cpp"
                         ,0x40,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    TVar4.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar2)();
    return (TIntPoint<int>)TVar4.field0_0x0;
  }
  *(int *)&param_1->_padding_ = *(int *)(in_RDX + 0x548) / *piVar1;
  *(int *)((longlong)&param_1->_padding_ + 4) = *(int *)(in_RDX + 0x54c) / *piVar1;
  return (TIntPoint<int>)(TIntPoint<int>_u_0)param_1;
}

// GetTypeHash @ 149ccc5e0

uint __cdecl GetTypeHash(CacheMapKey *param_1)

{
  ulong64 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar3 = (param_1->WorldKey).ObjectSerialNumber;
  uVar4 = (param_1->Coordinate).field0_0x0._s_0.Y;
  uVar6 = (param_1->WorldKey).ObjectIndex - uVar3 ^ uVar3 >> 0xd;
  uVar2 = (-0x61c88647 - uVar6) - uVar3 ^ uVar6 << 8;
  uVar5 = (uVar3 - uVar6) - uVar2 ^ uVar2 >> 0xd;
  uVar6 = (uVar6 - uVar5) - uVar2 ^ uVar5 >> 0xc;
  uVar3 = (uVar2 - uVar6) - uVar5 ^ uVar6 << 0x10;
  uVar2 = (uVar5 - uVar3) - uVar6 ^ uVar3 >> 5;
  uVar5 = (uVar6 - uVar2) - uVar3 ^ uVar2 >> 3;
  uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 << 10;
  uVar6 = (uVar2 - uVar3) - uVar5 ^ uVar3 >> 0xf;
  uVar2 = (param_1->Coordinate).field0_0x0._s_0.X - uVar4 ^ uVar4 >> 0xd;
  uVar3 = (-0x61c88647 - uVar2) - uVar4 ^ uVar2 << 8;
  uVar5 = (uVar4 - uVar2) - uVar3 ^ uVar3 >> 0xd;
  uVar4 = (uVar2 - uVar5) - uVar3 ^ uVar5 >> 0xc;
  uVar3 = (uVar3 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar2 = (uVar5 - uVar3) - uVar4 ^ uVar3 >> 5;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 3;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 << 10;
  uVar4 = (uVar2 - uVar3) - uVar4 ^ uVar3 >> 0xf;
  uVar1 = CityHash64((char *)param_1,0x10);
  uVar2 = (int)uVar1 - uVar4 ^ uVar4 >> 0xd;
  uVar3 = (-0x61c88647 - uVar2) - uVar4 ^ uVar2 << 8;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xd;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 >> 0xc;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 0x10;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 10;
  uVar3 = ((uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xf) - uVar6 ^ uVar6 >> 0xd;
  uVar2 = (-0x61c88647 - uVar3) - uVar6 ^ uVar3 << 8;
  uVar4 = (uVar6 - uVar2) - uVar3 ^ uVar2 >> 0xd;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 0xc;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 0x10;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 10;
  return (uVar4 - uVar2) - uVar3 ^ uVar2 >> 0xf;
}

// GetTypeHash @ 149ccc7d0

uint __cdecl GetTypeHash(FPCGGridCellDescriptor *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = FCrc::MemCrc_DEPRECATED(&param_1->GridCoords,0xc,0);
  uVar2 = GetTypeHash(&param_1->Descriptor);
  uVar4 = uVar2 - uVar1 ^ uVar1 >> 0xd;
  uVar2 = (-0x61c88647 - uVar4) - uVar1 ^ uVar4 << 8;
  uVar3 = (uVar1 - uVar2) - uVar4 ^ uVar2 >> 0xd;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xc;
  uVar1 = (uVar2 - uVar4) - uVar3 ^ uVar4 << 0x10;
  uVar2 = (uVar3 - uVar1) - uVar4 ^ uVar1 >> 5;
  uVar3 = (uVar4 - uVar2) - uVar1 ^ uVar2 >> 3;
  uVar1 = (uVar1 - uVar3) - uVar2 ^ uVar3 << 10;
  return (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xf;
}

// GetTypeHash @ 149ccc890

uint __cdecl GetTypeHash(FPCGGridDescriptor *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FArchive *pFVar4;
  undefined1 local_b8 [16];
  FArchiveCrc32 local_a8;
  
  if ((param_1->Hash).bIsSet == false) {
    FArchiveCrc32::FArchiveCrc32(&local_a8,param_1->RuntimeHash,(UObject *)0x0);
    if (*(uint **)(local_a8._padding_ + 8) < *(uint **)local_a8._padding_ + 1) {
      if ((local_a8._padding_._2_1_ & 1) == 0) {
        (**(code **)(local_a8._padding_ + 0x188))(&local_a8,param_1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_a8,&param_1->GridSize);
      }
    }
    else {
      param_1->GridSize = **(uint **)local_a8._padding_;
      *(longlong *)local_a8._padding_ = *(longlong *)local_a8._padding_ + 4;
    }
    pFVar4 = operator<<((FArchive *)&local_a8,&param_1->bIs2DGrid);
    operator<<(pFVar4,&param_1->bIsRuntime);
    FArchive::~FArchive((FArchive *)&local_a8);
    if ((TOptional<unsigned_int> *)local_b8 != &param_1->Hash) {
      (param_1->Hash).TypedValue = local_a8.CRC;
      (param_1->Hash).bIsSet = true;
    }
  }
  if (((param_1->Hash).bIsSet == false) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return (param_1->Hash).TypedValue;
}

// GetTypeHash @ 149ccc990

uint __cdecl GetTypeHash(FPCGStack *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  
  iVar1 = (param_1->StackFrames).ArrayNum;
  uVar2 = 0;
  pFVar4 = (param_1->StackFrames).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x30;
  while( true ) {
    if ((param_1->StackFrames).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPCGStackFrame_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    uVar3 = *(uint *)(pFVar4 + 0x2c);
    uVar2 = uVar2 - uVar3 ^ uVar3 >> 0xd;
    uVar6 = (-0x61c88647 - uVar2) - uVar3 ^ uVar2 << 8;
    uVar3 = (uVar3 - uVar6) - uVar2 ^ uVar6 >> 0xd;
    uVar2 = (uVar2 - uVar3) - uVar6 ^ uVar3 >> 0xc;
    uVar6 = (uVar6 - uVar2) - uVar3 ^ uVar2 << 0x10;
    uVar3 = (uVar3 - uVar6) - uVar2 ^ uVar6 >> 5;
    uVar2 = (uVar2 - uVar3) - uVar6 ^ uVar3 >> 3;
    uVar6 = (uVar6 - uVar2) - uVar3 ^ uVar2 << 10;
    uVar2 = (uVar3 - uVar6) - uVar2 ^ uVar6 >> 0xf;
    pFVar4 = pFVar4 + 0x30;
  }
  return uVar2;
}

// GetTypeHash @ 149ccca80

uint __cdecl PCGGraphCompiler::GetTypeHash(FTaskInputOrigin *param_1)

{
  FPCGGraphTaskInput *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if ((param_1->TaskInput != (FPCGGraphTaskInput *)0x0) &&
     ((param_1->TaskInput->UpstreamPin).bIsSet == false)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Value.TaskInput || Value.TaskInput->UpstreamPin.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphCompiler.cpp"
                       ,0x32,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  pFVar1 = param_1->TaskInput;
  if (pFVar1 != (FPCGGraphTaskInput *)0x0) {
    if ((pFVar1->UpstreamPin).bIsSet == false) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return uVar4;
      }
    }
    uVar4 = ::GetTypeHash(&(pFVar1->UpstreamPin).TypedValue);
    uVar6 = (int)param_1->TaskInput->TaskId - uVar4 ^ uVar4 >> 0xd;
    uVar5 = (-0x61c88647 - uVar6) - uVar4 ^ uVar6 << 8;
    uVar7 = (uVar4 - uVar5) - uVar6 ^ uVar5 >> 0xd;
    uVar6 = (uVar6 - uVar7) - uVar5 ^ uVar7 >> 0xc;
    uVar4 = (uVar5 - uVar6) - uVar7 ^ uVar6 << 0x10;
    uVar7 = (uVar7 - uVar4) - uVar6 ^ uVar4 >> 5;
    uVar5 = (uVar6 - uVar7) - uVar4 ^ uVar7 >> 3;
    uVar4 = (uVar4 - uVar5) - uVar7 ^ uVar5 << 10;
    return (uVar7 - uVar4) - uVar5 ^ uVar4 >> 0xf;
  }
  return 0;
}

// InsertToActiveTaskArrayNoLock @ 149ccd2b0

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
PCGGraphExecutor::InsertToActiveTaskArrayNoLock
          (int param_1,
          TArray<TSharedPtr<FPCGGraphActiveTask,1>,TSizedDefaultAllocator<32>_> *param_2,
          TSharedPtr<FPCGGraphActiveTask,1> *param_3)

{
  TSharedPtr<FPCGGraphActiveTask,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  uVar9 = (ulonglong)param_1;
  pTVar1 = (TSharedPtr<FPCGGraphActiveTask,1> *)(param_2->AllocatorInstance).Data;
  if (((pTVar1 <= param_3) && (param_3 < pTVar1 + param_2->ArrayMax)) &&
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
  iVar5 = param_2->ArrayNum;
  if (iVar5 == param_2->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  pFVar7 = (param_2->AllocatorInstance).Data;
  param_2->ArrayNum = iVar5 + 1;
  lVar10 = uVar9 * 0x10;
  pFVar7 = pFVar7 + lVar10;
  memmove(pFVar7 + 0x10,pFVar7,(longlong)(iVar5 - param_1) << 4);
  pFVar7 = (param_2->AllocatorInstance).Data;
  *(FPCGGraphActiveTask **)(pFVar7 + lVar10) = param_3->Object;
  pTVar2 = (param_3->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar7 + lVar10 + 8) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  iVar5 = param_2->ArrayNum;
  if (param_1 < iVar5) {
    do {
      uVar8 = (uint)uVar9;
      uVar6 = 0;
      if ((int)uVar8 < iVar5) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar7 = (param_2->AllocatorInstance).Data;
      if ((*(longlong *)(pFVar7 + lVar10) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar7 = pFVar7 + lVar10;
      lVar10 = lVar10 + 0x10;
      *(uint *)(*(longlong *)pFVar7 + 0x6c) = uVar8;
      uVar9 = (ulonglong)(uVar8 + 1);
      iVar5 = param_2->ArrayNum;
    } while ((int)(uVar8 + 1) < iVar5);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

// Parse @ 149cce2d0

FPCGGrammarResult * __cdecl
PCGGrammar::Parse(FPCGGrammarResult *__return_storage_ptr__,FString *param_1)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FText *pFVar5;
  FText *pFVar6;
  FPCGGrammarResult *pFVar7;
  FText *this;
  FText local_68;
  FText local_58;
  FText local_48;
  int local_38;
  
  __return_storage_ptr__->bSuccess = true;
  (__return_storage_ptr__->Root).Submodules.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Root).Submodules.ArrayNum = 0;
  (__return_storage_ptr__->Root).Submodules.ArrayMax = 0;
  (__return_storage_ptr__->Root).Parent = (FModuleDescriptor *)0x0;
  (__return_storage_ptr__->Root).Symbol.ComparisonIndex = 0;
  (__return_storage_ptr__->Root).Symbol.Number = 0;
  (__return_storage_ptr__->Root).Repetitions = 1;
  (__return_storage_ptr__->Root).Type = Root;
  (__return_storage_ptr__->Root).Weight = '\x01';
  (__return_storage_ptr__->Logs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Logs).ArrayNum = 0;
  (__return_storage_ptr__->Logs).ArrayMax = 0;
  if ((param_1->Data).ArrayNum < 2) {
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_68,L"PCGGrammar",L"EmptyGrammar",L"Grammar is empty.");
    pFVar6 = FText::FText(&local_58,pFVar5);
    FText::FText(&local_48,pFVar6);
    local_38 = 5;
    pIVar1 = (pFVar6->TextData).Reference;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))();
    }
    pFVar6 = (FText *)(__return_storage_ptr__->Logs).AllocatorInstance.Data;
    iVar4 = (__return_storage_ptr__->Logs).ArrayNum;
    for (this = pFVar6; this != (FText *)((longlong)pFVar6 + (longlong)iVar4 * 0x18);
        this = (FText *)&this[1].Flags) {
      bVar3 = FText::EqualTo(this,&local_48,Default);
      if ((bVar3) && (*(int *)&this[1].TextData.Reference == local_38)) {
        if ((int)(((longlong)this - (longlong)pFVar6) / 0x18) != -1) goto LAB_149cce4a7;
        break;
      }
    }
    pFVar6 = (FText *)(__return_storage_ptr__->Logs).AllocatorInstance.Data;
    if (((pFVar6 <= &local_48) &&
        (&local_48 <
         (FText *)((longlong)pFVar6 + (longlong)(__return_storage_ptr__->Logs).ArrayMax * 0x18))) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FPCGGrammarResult *)(*pcVar2)();
      return pFVar7;
    }
    iVar4 = (__return_storage_ptr__->Logs).ArrayNum;
    if (iVar4 == (__return_storage_ptr__->Logs).ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&(__return_storage_ptr__->Logs).AllocatorInstance,
                         &(__return_storage_ptr__->Logs).ArrayMax);
    }
    (__return_storage_ptr__->Logs).ArrayNum = iVar4 + 1;
    pFVar6 = (FText *)((__return_storage_ptr__->Logs).AllocatorInstance.Data +
                      (longlong)iVar4 * 0x18);
    FText::FText(pFVar6,&local_48);
    *(int *)&pFVar6[1].TextData.Reference = local_38;
LAB_149cce4a7:
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
    pIVar1 = (pFVar5->TextData).Reference;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))();
      return __return_storage_ptr__;
    }
  }
  else {
    bVar3 = BuildModules(param_1,__return_storage_ptr__);
    __return_storage_ptr__->bSuccess = bVar3;
  }
  return __return_storage_ptr__;
}

// RemoveAtFromActiveTaskArrayNoLock @ 149cd6990

void __cdecl
PCGGraphExecutor::RemoveAtFromActiveTaskArrayNoLock
          (TArray<TSharedPtr<FPCGGraphActiveTask,1>,TSizedDefaultAllocator<32>_> *param_1,
          int param_2)

{
  code *pcVar1;
  bool bVar2;
  FScriptContainerElement *pFVar3;
  
  if (((-1 < param_2) && (param_2 < param_1->ArrayNum)) &&
     (TArray<TSharedPtr<FPCGGraphActiveTask,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                (param_1,param_2), param_2 < param_1->ArrayNum)) {
    if ((param_2 < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar3 = (param_1->AllocatorInstance).Data + (longlong)param_2 * 0x10;
    if ((*(longlong *)pFVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(int *)(*(longlong *)pFVar3 + 0x6c) = param_2;
  }
  return;
}

// Serialize @ 149cdb5c0

void __cdecl
PCGGridDescriptor::Serialize
          (FArchive *param_1,
          TArray<TSoftObjectPtr<UDataLayerAsset>,TSizedDefaultAllocator<32>_> *param_2,
          TSoftObjectPtr<UHLODLayer> *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res10 [8];
  FString local_28;
  
  iVar2 = param_2->ArrayNum;
  pFVar4 = (param_2->AllocatorInstance).Data;
  pFVar1 = pFVar4 + (longlong)iVar2 * 0x28;
  while( true ) {
    if (param_2->ArrayNum != iVar2) {
      `TCheckedPointerIterator<TSoftObjectPtr<UDataLayerAsset>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar4 == pFVar1) break;
    FSoftObjectPath::ToString((FSoftObjectPath *)(pFVar4 + 8),&local_28);
    ::operator<<(param_1,&local_28);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar4 = pFVar4 + 0x28;
  }
  if (*(longlong *)&(param_3->SoftObjectPtr).field_0x8 != 0) {
    FSoftObjectPath::ToString((FSoftObjectPath *)&(param_3->SoftObjectPtr).field_0x8,&local_28);
    ::operator<<(param_1,&local_28);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  pvVar3 = *(void **)&(param_3->SoftObjectPtr).field_0x18;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  return;
}

// Z_Construct_UClass_APCGPartitionActor_NoRegister @ 149ce34d0

UClass * __cdecl Z_Construct_UClass_APCGPartitionActor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APCGPartitionActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGPartitionActor",
               &Z_Registration_Info_UClass_APCGPartitionActor.InnerSingleton,
               APCGPartitionActor::StaticRegisterNativesAPCGPartitionActor,0x3d0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<APCGPartitionActor>,
               InternalVTableHelperCtorCaller<APCGPartitionActor>,local_res8,
               APartitionActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APCGPartitionActor.InnerSingleton;
}

// Z_Construct_UClass_UPCGCreateSurfaceFromPolygon2DSettings_NoRegister @ 149ce3590

UClass * __cdecl Z_Construct_UClass_UPCGCreateSurfaceFromPolygon2DSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCreateSurfaceFromPolygon2DSettings.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCreateSurfaceFromPolygon2DSettings",
               &Z_Registration_Info_UClass_UPCGCreateSurfaceFromPolygon2DSettings.InnerSingleton,
               UPCGCreateSurfaceFromPolygon2DSettings::
               StaticRegisterNativesUPCGCreateSurfaceFromPolygon2DSettings,200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGCreateSurfaceFromPolygon2DSettings>,
               InternalVTableHelperCtorCaller<UPCGCreateSurfaceFromPolygon2DSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCreateSurfaceFromPolygon2DSettings.InnerSingleton;
}

// Z_Construct_UClass_UPCGGridLinkageSettings_NoRegister @ 149ce3650

UClass * __cdecl Z_Construct_UClass_UPCGGridLinkageSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGridLinkageSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGridLinkageSettings",
               &Z_Registration_Info_UClass_UPCGGridLinkageSettings.InnerSingleton,
               UPCGGridLinkageSettings::StaticRegisterNativesUPCGGridLinkageSettings,0x110,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UPCGGridLinkageSettings>
               ,InternalVTableHelperCtorCaller<UPCGGridLinkageSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGridLinkageSettings.InnerSingleton;
}

// Z_Construct_UClass_UPCGLandscapeCache_NoRegister @ 149ce3710

UClass * __cdecl Z_Construct_UClass_UPCGLandscapeCache_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGLandscapeCache.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGLandscapeCache",
               &Z_Registration_Info_UClass_UPCGLandscapeCache.InnerSingleton,
               UPCGLandscapeCache::StaticRegisterNativesUPCGLandscapeCache,0xe0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGLandscapeCache>,
               InternalVTableHelperCtorCaller<UPCGLandscapeCache>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGLandscapeCache.InnerSingleton;
}

// Z_Construct_UClass_UPCGOffsetPolygon2DSettings_NoRegister @ 149ce37c0

UClass * __cdecl Z_Construct_UClass_UPCGOffsetPolygon2DSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGOffsetPolygon2DSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGOffsetPolygon2DSettings",
               &Z_Registration_Info_UClass_UPCGOffsetPolygon2DSettings.InnerSingleton,
               UPCGOffsetPolygon2DSettings::StaticRegisterNativesUPCGOffsetPolygon2DSettings,0x118,8
               ,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGOffsetPolygon2DSettings>,
               InternalVTableHelperCtorCaller<UPCGOffsetPolygon2DSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGOffsetPolygon2DSettings.InnerSingleton;
}

// Z_Construct_UClass_UPCGPolygon2DOperationSettings_NoRegister @ 149ce3880

UClass * __cdecl Z_Construct_UClass_UPCGPolygon2DOperationSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGPolygon2DOperationSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGPolygon2DOperationSettings",
               &Z_Registration_Info_UClass_UPCGPolygon2DOperationSettings.InnerSingleton,
               UPCGPolygon2DOperationSettings::StaticRegisterNativesUPCGPolygon2DOperationSettings,
               0xe0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGPolygon2DOperationSettings>,
               InternalVTableHelperCtorCaller<UPCGPolygon2DOperationSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGPolygon2DOperationSettings.InnerSingleton;
}

// Z_Construct_UScriptStruct_FPCGGraphTask @ 149ce3940

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGGraphTask(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGGraphTask.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGGraphTask.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGGraphTask_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGGraphTask.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGGraphTask.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPCGGridCellDescriptor @ 149ce39c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGGridCellDescriptor(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGGridCellDescriptor.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGGridCellDescriptor.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGGridCellDescriptor_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGGridCellDescriptor.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGGridCellDescriptor.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPCGLandscapeLayerWeight @ 149ce3a40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGLandscapeLayerWeight(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGLandscapeLayerWeight.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGLandscapeLayerWeight.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGLandscapeLayerWeight_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGLandscapeLayerWeight.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGLandscapeLayerWeight.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPCGStackContext @ 149ce3ac0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPCGStackContext(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPCGStackContext.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPCGStackContext.InnerSingleton,
               &Z_Construct_UScriptStruct_FPCGStackContext_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPCGStackContext.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPCGStackContext.InnerSingleton;
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

// NoPin'' @ 150418660

void __cdecl `dynamic_atexit_destructor_for_'FPCGGraphTaskInput::NoPin__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FPCGGraphTaskInput::NoPin.TypedValue.AllowedTypes.Ids.AllocatorInstance.Data;
  if ((FPCGGraphTaskInput::NoPin.bIsSet) &&
     (FPCGGraphTaskInput::NoPin.TypedValue.AllowedTypes.Ids.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0)) {
    if (FPCGGraphTaskInput::NoPin.TypedValue.AllowedTypes.Ids.AllocatorInstance.Data !=
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
  return;
}

// `dynamic_atexit_destructor_for_'CVarCacheCleanupBehavior'' @ 150418680

void __cdecl PCGGraphExecutor::_dynamic_atexit_destructor_for__CVarCacheCleanupBehavior__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCacheCleanupBehavior);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCacheDebugging'' @ 1504186a0

void __cdecl _dynamic_atexit_destructor_for__CVarCacheDebugging__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCacheDebugging);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCacheEnabledEditor'' @ 1504186c0

void __cdecl _dynamic_atexit_destructor_for__CVarCacheEnabledEditor__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCacheEnabledEditor);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCacheEnabledRuntime'' @ 1504186e0

void __cdecl _dynamic_atexit_destructor_for__CVarCacheEnabledRuntime__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCacheEnabledRuntime);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCacheEnabled_DEPRECATED'' @ 150418700

void __cdecl _dynamic_atexit_destructor_for__CVarCacheEnabled_DEPRECATED__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCacheEnabled_DEPRECATED);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCacheMemoryBudgetEditorMB'' @ 150418720

void __cdecl _dynamic_atexit_destructor_for__CVarCacheMemoryBudgetEditorMB__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCacheMemoryBudgetEditorMB);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCacheMemoryBudgetEnabled'' @ 150418740

void __cdecl _dynamic_atexit_destructor_for__CVarCacheMemoryBudgetEnabled__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCacheMemoryBudgetEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCacheMemoryBudgetMB_DEPRECATED'' @ 150418760

void __cdecl _dynamic_atexit_destructor_for__CVarCacheMemoryBudgetMB_DEPRECATED__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCacheMemoryBudgetMB_DEPRECATED)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'CVarCacheMemoryBudgetRuntimeMB'' @ 150418780

void __cdecl _dynamic_atexit_destructor_for__CVarCacheMemoryBudgetRuntimeMB__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCacheMemoryBudgetRuntimeMB);
  return;
}

// `dynamic_atexit_destructor_for_'CVarCacheMemoryCleanupRatio'' @ 1504187a0

void __cdecl _dynamic_atexit_destructor_for__CVarCacheMemoryCleanupRatio__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarCacheMemoryCleanupRatio);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDynamicTaskCulling'' @ 1504187c0

void __cdecl PCGGraphExecutor::_dynamic_atexit_destructor_for__CVarDynamicTaskCulling__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDynamicTaskCulling);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableGPUExecution'' @ 1504187e0

void __cdecl PCGGraphCompiler::_dynamic_atexit_destructor_for__CVarEnableGPUExecution__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableGPUExecution);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableTaskStaticCulling'' @ 150418800

void __cdecl PCGGraphCompiler::_dynamic_atexit_destructor_for__CVarEnableTaskStaticCulling__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableTaskStaticCulling);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGraphMultithreading'' @ 150418820

void __cdecl PCGGraphExecutor::_dynamic_atexit_destructor_for__CVarGraphMultithreading__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGraphMultithreading);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLandscapeCacheGCFrequency'' @ 150418840

void __cdecl _dynamic_atexit_destructor_for__CVarLandscapeCacheGCFrequency__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLandscapeCacheGCFrequency);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLandscapeCacheSizeThreshold'' @ 150418860

void __cdecl _dynamic_atexit_destructor_for__CVarLandscapeCacheSizeThreshold__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLandscapeCacheSizeThreshold);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaxNumTasks'' @ 150418880

void __cdecl _dynamic_atexit_destructor_for__CVarMaxNumTasks__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMaxNumTasks);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaxPercentageOfExecutingThreads'' @ 1504188a0

void __cdecl _dynamic_atexit_destructor_for__CVarMaxPercentageOfExecutingThreads__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarMaxPercentageOfExecutingThreads);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMaxPercentageOfThreadsToUse'' @ 1504188c0

void __cdecl _dynamic_atexit_destructor_for__CVarMaxPercentageOfThreadsToUse__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMaxPercentageOfThreadsToUse);
  return;
}

// `dynamic_atexit_destructor_for_'CVarTimePerFrame'' @ 1504188e0

void __cdecl PCGGraphExecutor::_dynamic_atexit_destructor_for__CVarTimePerFrame__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarTimePerFrame);
  return;
}

// `dynamic_atexit_destructor_for_'CVarValidateElementToCacheEntryKeys'' @ 150418900

void __cdecl _dynamic_atexit_destructor_for__CVarValidateElementToCacheEntryKeys__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarValidateElementToCacheEntryKeys);
  return;
}

// `dynamic_atexit_destructor_for_'UserParameterTagData'' @ 150418920

void __cdecl PCGBaseSubgraphConstants::_dynamic_atexit_destructor_for__UserParameterTagData__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UserParameterTagData.Data.AllocatorInstance.Data;
  if (UserParameterTagData.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (UserParameterTagData.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

